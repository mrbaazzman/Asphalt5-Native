// Asphalt 5 - Windows setup (builder edition)
//
// The installer does NOT ship the game.  It carries:
//   builder/builder.zip
//     toolchain/     minimal MinGW-w64 (gcc + headers + libs)
//     src/           our hand-written runtime sources
//     armrecomp.exe  ARM -> C translator
//
// At install time it:
//   1. validates the user's own APK,
//   2. extracts the APK into a temporary folder under %LOCALAPPDATA%,
//   3. translates libasphalt5.so to C,
//   4. compiles the generated C with the bundled toolchain,
//   5. embeds the installer UI/manifest and libasphalt5.so in Asphalt5.exe,
//      installs it, and creates <install>\gamefiles\GloftA5HD341 (3.4.1),
//      \GloftA5HD337 (3.3.7) or \GloftA5HD (3.2.4).  The install folder
//      contains only the exe and gamefiles; no APK resources are left
//      behind.  The game data is downloaded on first launch (3.4.1/3.3.7)
//      or supplied by the user (3.2.4).
//
// Nothing derived from the game is redistributed.
//
// Silent mode (tests):
//   Asphalt5Setup.exe --silent --apk <file.apk> --dir <dir>
//                     [--shortcut] [--force] [--log <file>] [--keep-build]

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Reflection;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Windows.Forms;

namespace Asphalt5Setup
{
    internal sealed class Options
    {
        public bool Silent;
        public string Apk = "";
        public string Dir = "";
        public bool Shortcut;
        public bool Force;
        public bool KeepBuild;
        public string Log = "";

        public static Options Parse(string[] args)
        {
            var o = new Options();
            for (int i = 0; i < args.Length; i++)
            {
                switch (args[i])
                {
                    case "--silent": o.Silent = true; break;
                    case "--shortcut": o.Shortcut = true; break;
                    case "--no-shortcut": o.Shortcut = false; break;
                    case "--force": o.Force = true; break;
                    case "--keep-build": o.KeepBuild = true; break;
                    case "--apk": if (++i < args.Length) o.Apk = args[i]; break;
                    case "--dir": if (++i < args.Length) o.Dir = args[i]; break;
                    case "--log": if (++i < args.Length) o.Log = args[i]; break;
                }
            }
            return o;
        }
    }

    internal static class Paths
    {
        public const string GameExe = "Asphalt5.exe";
        public const string SetupExe = "Asphalt5Setup.exe";
        public const string ExpectedSha =
            "9889bd964a1a8284901ce6a6c9d08cc4f501a1fba12a04048c782aa8051c6d07";
        public const string ExpectedSha337 =
            "c4c4a804ccbc827f709c09b998a19b56984f02718f438da2138858fbbfdc5d5d";
        public const string ExpectedSha341 =
            "2966c986c73e71e7d2fa791a2f3a371749c7db183d7c40ff6641a57f01b78206";

        public static string BaseDir { get { return AppDomain.CurrentDomain.BaseDirectory; } }

        public static string DefaultInstallDir
        {
            get
            {
                return Path.Combine(
                    Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),
                                 "Programs"),
                    "Asphalt5");
            }
        }

        public static string DataRoot
        {
            get
            {
                return Path.Combine(Environment.GetFolderPath(
                    Environment.SpecialFolder.LocalApplicationData), "Asphalt5");
            }
        }

        public static string EngineRoot { get { return Path.Combine(DataRoot, "engine"); } }

        public static string BuilderZip
        {
            get { return Path.Combine(Path.Combine(BaseDir, "builder"), "builder.zip"); }
        }

        public static bool HasEmbeddedBuilder
        {
            get
            {
                Assembly asm = Assembly.GetExecutingAssembly();
                return asm.GetManifestResourceStream("builder.dat") != null ||
                       asm.GetManifestResourceStream("builder.zip") != null;
            }
        }

        public static bool SamePath(string a, string b)
        {
            return string.Equals(Path.GetFullPath(a), Path.GetFullPath(b),
                                 StringComparison.OrdinalIgnoreCase);
        }

        public static string FindApkNearby()
        {
            try
            {
                string[] hits = Directory.GetFiles(BaseDir, "*.apk");
                if (hits.Length == 1) return hits[0];
            }
            catch { }
            return "";
        }
    }

    internal sealed class ApkProfile
    {
        public bool Is337;
        public bool Is341;
        public string Label = "";
        public string SoEntry = "";
        public string ExpectedSha = "";
        public string DataName = "GloftA5HD";
        public string DataUrl = "";
        public long DataBytes;
        public string DataSha = "";
        public long DataUncompressed;

        public bool UsesInstaller { get { return Is337 || Is341; } }
        public string ApkSubdir { get { return Is341 ? "apk341" : (Is337 ? "apk337" : "apk"); } }
        public string ManifestName { get { return Is341 ? "GloftA5HD341.manifest" : "GloftA5HD337.manifest"; } }
    }

    internal sealed class InstallResult
    {
        public string InstallDir = "";
        public string GameExe = "";
        public string GameFiles = "";
        public string DataName = "GloftA5HD";
        public bool Is337;
        public bool Is341;
        public string LogPath = "";
    }

    internal static class Installer
    {
        public static InstallResult Run(string apk, string dir, bool shortcut, bool force,
                                        bool keepBuild,
                                        Action<string, int> progress, Action<string> log)
        {
            if (string.IsNullOrWhiteSpace(apk) || !File.Exists(apk))
                throw new FileNotFoundException("Select the original Asphalt 5 APK first.", apk);
            if (string.IsNullOrWhiteSpace(dir))
                throw new ArgumentException("Choose an install folder.");
            if (!File.Exists(Paths.BuilderZip) && !Paths.HasEmbeddedBuilder)
                throw new FileNotFoundException(
                    "The installer is missing its builder payload.\n\n" +
                    "Download the full Asphalt5Setup.exe from the release page.");

            dir = Path.GetFullPath(dir);
            log("Install dir: " + dir);
            progress("Creating install folder...", 1);
            Directory.CreateDirectory(dir);

            progress("Checking the APK...", 3);
            ApkProfile profile = DetectProfile(apk, force, log);
            log("Detected " + profile.Label + " (libasphalt5.so " + profile.ExpectedSha.Substring(0, 12) + "...)");

            string gamefiles = Path.Combine(dir, "gamefiles");
            string engine = Paths.EngineRoot;
            string apkDir = Path.Combine(engine, profile.ApkSubdir);
            try { if (Directory.Exists(engine)) Directory.Delete(engine, true); } catch { }
            Directory.CreateDirectory(apkDir);

            using (ZipArchive zip = ZipFile.OpenRead(apk))
            {
                progress("Extracting the APK...", 5);
                long done = 0;
                long total = Math.Max(1, zip.Entries.Count);
                string root = Path.GetFullPath(apkDir) + Path.DirectorySeparatorChar;
                foreach (ZipArchiveEntry e in zip.Entries)
                {
                    done++;
                    progress("Extracting " + e.FullName, 5 + (int)(15 * done / total));
                    if (string.IsNullOrEmpty(e.Name)) continue;

                    string target = Path.GetFullPath(Path.Combine(apkDir, e.FullName));
                    if (!target.StartsWith(root, StringComparison.OrdinalIgnoreCase))
                        throw new InvalidDataException("Unsafe path in APK: " + e.FullName);

                    Directory.CreateDirectory(Path.GetDirectoryName(target));
                    e.ExtractToFile(target, true);
                }
            }

            string elfPath = Path.Combine(apkDir, profile.SoEntry.Replace('/',
                                              Path.DirectorySeparatorChar));
            string build = Path.Combine(dir, "build");
            if (Directory.Exists(build)) Directory.Delete(build, true);
            Directory.CreateDirectory(build);

            progress("Unpacking the builder...", 22);
            ExtractBuilder(build, log);

            string translator = Path.Combine(build, "armrecomp.exe");
            string toolchain = Path.Combine(build, "toolchain", "bin");
            string src = Path.Combine(build, "src");
            string gen = Path.Combine(build, "generated");
            if (!File.Exists(translator) || !Directory.Exists(toolchain) || !Directory.Exists(src))
                throw new InvalidDataException("builder.zip is incomplete (translator/toolchain/src).");

            progress("Translating ARM code to C...", 30);
            log("Translator: " + translator);
            int rc = Run(translator, "--so \"" + elfPath + "\" --out \"" + gen + "\"", build,
                         null, log, true, 30, 38, progress, "Translating");
            string[] functionChunks = Directory.Exists(gen)
                ? Directory.GetFiles(gen, "functions_*.c") : new string[0];
            if (rc != 0 || functionChunks.Length == 0)
                throw new InvalidOperationException("Translation failed (exit code " + rc + ").");

            progress("Applying runtime patches...", 39);
            int patched = 0, rewritten = 0;
            foreach (string chunk in functionChunks)
            {
                int changed;
                patched += PatchGenerated(chunk, profile, out changed);
                rewritten += changed;
            }
            if (patched != 12)
                throw new InvalidOperationException(
                    "Runtime patch targets missing (" + patched + "/12).");
            log("Applied CMatrix/quaternion/camera/nitro/rotation/exit/input patches (" + patched + "/12, " +
                rewritten + " rewritten)");

            progress("Compiling the game (this can take 10-20 minutes)...", 40);
            string gcc = Path.Combine(toolchain, "gcc.exe");
            string outExe = Path.Combine(build, Paths.GameExe);
            string args = BuildArgs(src, gen, outExe, profile);
            log("gcc " + args);
            rc = Run(gcc, args, build, toolchain, log, true, 40, 92, progress, "Compiling");
            if (rc != 0 || !File.Exists(outExe))
                throw new InvalidOperationException(
                    "Compilation failed (exit code " + rc + ").\n\nSee install.log for details.");

            progress("Embedding the installer UI and game library...", 94);
            if (profile.UsesInstaller)
                AppendEmbeddedUi(outExe, apkDir, profile, log);
            AppendEmbeddedSo(outExe, elfPath, log);

            progress("Installing the game...", 95);
            string dstExe = Path.Combine(dir, Paths.GameExe);
            File.Copy(outExe, dstExe, true);
            log("Installed " + dstExe);

            progress("Cleaning up temporary files...", 96);
            TryDelete(Paths.EngineRoot);
            log("Removed the extracted APK (library and installer UI are embedded)");

            progress("Preparing the game data folder...", 97);
            string dataDir = Path.Combine(gamefiles, profile.DataName);
            Directory.CreateDirectory(dataDir);
            if (profile.UsesInstaller)
            {
                log("The game will download its data on first launch.");
            }
            else
            {
                log("Place your GloftA5HD files in " + dataDir);
            }

            if (shortcut)
            {
                progress("Creating shortcuts...", 99);
                CreateShortcut(Path.Combine(Environment.GetFolderPath(
                    Environment.SpecialFolder.DesktopDirectory), "Asphalt 5.lnk"), dstExe, dir);
                CreateShortcut(Path.Combine(Environment.GetFolderPath(
                    Environment.SpecialFolder.Programs), "Asphalt 5.lnk"), dstExe, dir);
            }

            if (!keepBuild)
            {
                try { Directory.Delete(build, true); }
                catch (Exception ex) { log("Could not remove build folder: " + ex.Message); }
            }

            progress("Done", 100);
            var r = new InstallResult();
            r.InstallDir = dir;
            r.GameExe = dstExe;
            r.GameFiles = gamefiles;
            r.DataName = profile.DataName;
            r.Is337 = profile.Is337;
            r.Is341 = profile.Is341;
            return r;
        }

        private static void ExtractBuilder(string build, Action<string> log)
        {
            string external = Paths.BuilderZip;
            if (File.Exists(external))
            {
                log("Using external builder: " + external);
                ZipFile.ExtractToDirectory(external, build);
                return;
            }

            Assembly asm = Assembly.GetExecutingAssembly();
            Stream res = asm.GetManifestResourceStream("builder.dat");
            string resourceName = "builder.dat";
            if (res == null)
            {
                res = asm.GetManifestResourceStream("builder.zip");
                resourceName = "builder.zip";
            }
            if (res == null)
                throw new FileNotFoundException("Embedded builder payload not found.");

            byte[] data;
            using (res)
            using (var ms = new MemoryStream())
            {
                res.CopyTo(ms);
                data = ms.ToArray();
            }
            if (resourceName == "builder.dat")
            {
                byte[] key = Encoding.ASCII.GetBytes("A5BuilderPayloadKey-2026-10-29");
                for (int i = 0; i < data.Length; i++)
                    data[i] ^= key[i % key.Length];
            }

            log("Extracting embedded builder");
            string root = Path.GetFullPath(build) + Path.DirectorySeparatorChar;
            using (var zip = new ZipArchive(new MemoryStream(data), ZipArchiveMode.Read))
            {
                foreach (ZipArchiveEntry e in zip.Entries)
                {
                    if (string.IsNullOrEmpty(e.Name)) continue;
                    string target = Path.GetFullPath(Path.Combine(build, e.FullName));
                    if (!target.StartsWith(root, StringComparison.OrdinalIgnoreCase))
                        throw new InvalidDataException("Unsafe path in builder: " + e.FullName);
                    Directory.CreateDirectory(Path.GetDirectoryName(target));
                    e.ExtractToFile(target, true);
                }
            }
        }

        private static void TryDelete(string path)
        {
            try { if (Directory.Exists(path)) Directory.Delete(path, true); else if (File.Exists(path)) File.Delete(path); }
            catch { }
        }

        private static ApkProfile Profile337(string label)
        {
            return new ApkProfile
            {
                Is337 = true,
                Label = label,
                SoEntry = "lib/armeabi/libasphalt5.so",
                ExpectedSha = Paths.ExpectedSha337,
                DataName = "GloftA5HD337",
                DataUrl = DataManifest337.Url,
                DataBytes = DataManifest337.CompressedBytes,
                DataSha = DataManifest337.Sha256,
                DataUncompressed = DataManifest337.UncompressedBytes
            };
        }

        private static ApkProfile Profile341(string label)
        {
            return new ApkProfile
            {
                Is341 = true,
                Label = label,
                SoEntry = "lib/armeabi/libasphalt5.so",
                ExpectedSha = Paths.ExpectedSha341,
                DataName = "GloftA5HD341",
                DataUrl = DataManifest341.Url,
                DataBytes = DataManifest341.CompressedBytes,
                DataSha = DataManifest341.Sha256,
                DataUncompressed = DataManifest341.UncompressedBytes
            };
        }

        private static ApkProfile Profile324(string label)
        {
            return new ApkProfile
            {
                Label = label,
                SoEntry = "lib/armeabi-v7a/libasphalt5.so",
                ExpectedSha = Paths.ExpectedSha,
                DataName = "GloftA5HD"
            };
        }

        private static ApkProfile DetectProfile(string apk, bool force, Action<string> log)
        {
            string shaHd = null, sha324 = null;
            bool hasHd = false, has324 = false;
            using (ZipArchive zip = ZipFile.OpenRead(apk))
            {
                ZipArchiveEntry eHd = zip.GetEntry("lib/armeabi/libasphalt5.so");
                if (eHd != null)
                {
                    hasHd = true;
                    using (Stream s = eHd.Open()) shaHd = Hash(s);
                    log("lib/armeabi/libasphalt5.so sha256 = " + shaHd);
                }
                ZipArchiveEntry e324 = zip.GetEntry("lib/armeabi-v7a/libasphalt5.so");
                if (e324 != null)
                {
                    has324 = true;
                    using (Stream s = e324.Open()) sha324 = Hash(s);
                    log("lib/armeabi-v7a/libasphalt5.so sha256 = " + sha324);
                }
            }

            if (hasHd && string.Equals(shaHd, Paths.ExpectedSha341, StringComparison.OrdinalIgnoreCase))
                return Profile341("Asphalt 5 HD 3.4.1");
            if (hasHd && string.Equals(shaHd, Paths.ExpectedSha337, StringComparison.OrdinalIgnoreCase))
                return Profile337("Asphalt 5 HD 3.3.7");
            if (has324 && string.Equals(sha324, Paths.ExpectedSha, StringComparison.OrdinalIgnoreCase))
                return Profile324("Asphalt 5 HD 3.2.4");

            if (!force)
                throw new InvalidDataException(
                    "This APK is not a supported Asphalt 5 build.\n\n" +
                    "Found:\n" +
                    (hasHd ? "  lib/armeabi/libasphalt5.so  " + shaHd + "\n" : "") +
                    (has324 ? "  lib/armeabi-v7a/libasphalt5.so  " + sha324 + "\n" : "") +
                    "\nSupported: 3.2.4 (SE), 3.3.7 (Galaxy Tab) and 3.4.1 (Android Market).");
            if (hasHd)
            {
                if (string.Equals(shaHd, Paths.ExpectedSha341, StringComparison.OrdinalIgnoreCase))
                    return Profile341("Asphalt 5 HD 3.4.1 (forced)");
                return Profile337("Asphalt 5 HD 3.3.7 (forced)");
            }
            if (has324)
                return Profile324("Asphalt 5 HD 3.2.4 (forced)");
            throw new InvalidDataException("This APK does not contain libasphalt5.so.");
        }

        private static string BuildManifest(ApkProfile profile)
        {
            string[] names = profile.Is341 ? DataManifest341.Names : DataManifest337.Names;
            long[] sizes = profile.Is341 ? DataManifest341.Sizes : DataManifest337.Sizes;
            var sb = new StringBuilder();
            sb.Append("A5DATA1\n");
            sb.Append("url=" + profile.DataUrl + "\n");
            sb.Append("compressed=" + profile.DataBytes + "\n");
            sb.Append("sha256=" + profile.DataSha + "\n");
            sb.Append("uncompressed=" + profile.DataUncompressed + "\n");
            for (int i = 0; i < names.Length; i++)
                sb.Append(sizes[i] + "\t" + names[i] + "\n");
            return sb.ToString();
        }

        /* Append the six installer UI files from the user's APK and the data
         * manifest to the built exe.  The runtime extracts this small archive
         * to %LOCALAPPDATA% for the first-run installer and removes it again,
         * so the install folder stays exe + gamefiles only. */
        private static void AppendEmbeddedUi(string exePath, string apkDir, ApkProfile profile,
                                             Action<string> log)
        {
            string[] assets = new string[]
            {
                "interface_menu.bsprite",
                "interface_menu_01.png",
                "font_menu.bsprite",
                "font_menu_01.png",
                "gameloft_logo_01.png",
                "installer_000.ogg"
            };
            string raw = Path.Combine(apkDir, "res", "raw");
            var entries = new List<KeyValuePair<string, byte[]>>();
            long total = 0;
            foreach (string name in assets)
            {
                string path = Path.Combine(raw, name);
                if (!File.Exists(path))
                    throw new InvalidDataException("APK is missing res/raw/" + name);
                byte[] data = File.ReadAllBytes(path);
                entries.Add(new KeyValuePair<string, byte[]>(name, data));
                total += data.Length;
            }
            byte[] manifest = new UTF8Encoding(false).GetBytes(BuildManifest(profile));
            entries.Add(new KeyValuePair<string, byte[]>(profile.ManifestName, manifest));
            total += manifest.Length;

            byte[] archive;
            using (var ms = new MemoryStream())
            using (var w = new BinaryWriter(ms))
            {
                w.Write(new byte[] { (byte)'A', (byte)'5', (byte)'U', (byte)'I', (byte)'1', 0, 0, 0 });
                w.Write((uint)entries.Count);
                foreach (var e in entries)
                {
                    byte[] name = Encoding.ASCII.GetBytes(e.Key);
                    w.Write((ushort)name.Length);
                    w.Write(name);
                    w.Write((uint)e.Value.Length);
                    w.Write(e.Value);
                }
                w.Flush();
                archive = ms.ToArray();
            }
            using (FileStream fs = new FileStream(exePath, FileMode.Append, FileAccess.Write))
            {
                fs.Write(archive, 0, archive.Length);
                fs.Write(new byte[] { (byte)'A', (byte)'5', (byte)'U', (byte)'I', 0, 0, 0, 0 }, 0, 8);
                fs.Write(BitConverter.GetBytes((long)archive.Length), 0, 8);
            }
            log("Embedded installer UI and manifest (" + total + " bytes)");
        }

        private static void AppendEmbeddedSo(string exePath, string soPath, Action<string> log)
        {
            byte[] data = File.ReadAllBytes(soPath);
            using (FileStream fs = new FileStream(exePath, FileMode.Append, FileAccess.Write))
            {
                fs.Write(data, 0, data.Length);
                fs.Write(new byte[] { (byte)'A', (byte)'5', (byte)'S', (byte)'O', 0, 0, 0, 0 }, 0, 8);
                fs.Write(BitConverter.GetBytes((long)data.Length), 0, 8);
            }
            log("Appended libasphalt5.so (" + data.Length + " bytes) to the executable");
        }

        private static string BuildArgs(string src, string gen, string outExe, ApkProfile profile)
        {
            var sb = new StringBuilder();
            sb.Append("-O1 -fno-strict-aliasing -fwrapv -fno-use-linker-plugin ");
            sb.Append("-DNDEBUG -DRECOMP_GUI -D_CRT_SECURE_NO_WARNINGS ");
            if (profile.Is337) sb.Append("-DRECOMP_TARGET_337 ");
            if (profile.Is341) sb.Append("-DRECOMP_TARGET_341 ");
            sb.Append("-I\"").Append(src).Append("\" ");
            sb.Append("-I\"").Append(Path.Combine(src, "core")).Append("\" ");
            sb.Append("-I\"").Append(Path.Combine(src, "gl")).Append("\" ");
            sb.Append("-I\"").Append(gen).Append("\" ");

            foreach (string f in Directory.GetFiles(src, "*.c"))
                sb.Append('"').Append(f).Append("\" ");
            foreach (string d in new string[] { "core", "platform", "gl" })
                foreach (string f in Directory.GetFiles(Path.Combine(src, d), "*.c"))
                    sb.Append('"').Append(f).Append("\" ");
            if (profile.UsesInstaller)
            {
                string miniz = Path.Combine(src, "third_party", "miniz");
                foreach (string f in Directory.GetFiles(miniz, "*.c"))
                    sb.Append('"').Append(f).Append("\" ");
            }
            foreach (string f in Directory.GetFiles(gen, "*.c"))
                sb.Append('"').Append(f).Append("\" ");

            sb.Append("-o \"").Append(outExe).Append("\" ");
            sb.Append("-lopengl32 -lgdi32 -luser32 -lwinmm -lws2_32 -lm " +
                      " -ldinput8 -ldxguid -lmfreadwrite -lmfplat -lmfuuid -lole32 -luuid ");
            if (profile.UsesInstaller) sb.Append("-lwininet -lbcrypt -lcomctl32 -lcomdlg32 ");
            sb.Append("-Wl,-Bstatic -lwinpthread -Wl,-Bdynamic ");
            sb.Append("-mwindows");
            return sb.ToString();
        }

        /* Returns how many of the twelve patch targets occur in this chunk;
         * changed receives how many were actually rewritten.  The patch
         * targets can land in different functions_NN.c files. */
        private static int PatchGenerated(string path, ApkProfile profile, out int changed)
        {
            // The translator writes CRLF on Windows; normalise so the prologue
            // match is line-ending independent.
            string s = File.ReadAllText(path).Replace("\r\n", "\n").Replace("\r", "\n");
            int found = 0;
            changed = 0;
            string[] cm;
            string nitro, rotation, exit, labelFn, clickFn, actionFn, modeFn;
            int c;
            if (profile.Is341)
            {
                cm = new string[] { "fn_0013e1ac", "fn_0013e224", "fn_0013e29c", "fn_0013ec24" };
                c = PatchCameraHD(ref s, "fn_0013cb18", "fn_0013c9b0");
                nitro = "fn_0015688c";
                rotation = "fn_0009a118";
                exit = "fn_00063bf4";
                labelFn = "fn_000eecc8";
                clickFn = "fn_000ee734";
                actionFn = "fn_000ee5fc";
                modeFn = "fn_00060a50";
            }
            else if (profile.Is337)
            {
                cm = new string[] { "fn_0013ef5c", "fn_0013efd4", "fn_0013f04c", "fn_0013f9d4" };
                c = PatchCameraHD(ref s, "fn_0013d8c8", "fn_0013d760");
                nitro = "fn_0015704c";
                rotation = "fn_000bde00";
                exit = "fn_00082b08";
                labelFn = "fn_000ef450";
                clickFn = "fn_000eeebc";
                actionFn = "fn_000eed80";
                modeFn = "fn_0007f988";
            }
            else
            {
                cm = new string[] { "fn_00153478", "fn_001534f0", "fn_00153568", "fn_00154e38" };
                c = PatchCamera(ref s);
                nitro = "fn_0016e384";
                rotation = "fn_000d15b8";
                exit = "fn_00097a04";
                labelFn = "fn_00104524";
                clickFn = "fn_00103698";
                actionFn = "fn_0010359c";
                modeFn = "fn_00093fd0";
            }
            string[] cmWhy = new string[]
            {
                "CMatrix::Mult scalar replacement.",
                "CMatrix::PreMult scalar replacement.",
                "CMatrix::SetMult scalar replacement.",
                "CMatrix::GetQuaternion robust extraction."
            };
            for (int i = 0; i < cm.Length; i++)
            {
                string call = i == 3
                    ? "guest_cmatrix_get_quaternion(cpu); return;"
                    : "guest_cmatrix_mul(cpu, " + i + "); return;";
                int r = PatchOne(ref s, cm[i], call, cmWhy[i]);
                if (r > 0) { found++; if (r == 1) changed++; }
            }
            if (c > 0) { found++; if (c == 1) changed++; }
            int rn = PatchOne(ref s, nitro,
                              "if (platform_nitro_held_for_car(cpu->r[0])) cpu->r[1] |= 0x20u;",
                              "Host nitro tap latch.", "platform_nitro_held_for_car");
            if (rn > 0) { found++; if (rn == 1) changed++; }
            int rr = PatchOne(ref s, rotation,
                              "if (platform_buttons_mode()) return;",
                              "No phone-rotation steering in buttons mode.",
                              "platform_buttons_mode");
            if (rr > 0) { found++; if (rr == 1) changed++; }
            int re = PatchOne(ref s, exit,
                              "platform_request_exit(); return;",
                              "Host exit for the in-game Exit item.",
                              "platform_request_exit");
            if (re > 0) { found++; if (re == 1) changed++; }
            int rl = PatchOne(ref s, labelFn,
                              "if (guest_control_menu_label(cpu)) return;",
                              "Input mapper Controls row label.",
                              "guest_control_menu_label");
            if (rl > 0) { found++; if (rl == 1) changed++; }
            int rb = PatchOne(ref s, clickFn,
                              "if (guest_control_menu_click(cpu)) return;",
                              "Input mapper Controls row click.",
                              "guest_control_menu_click");
            if (rb > 0) { found++; if (rb == 1) changed++; }
            int ra = PatchOne(ref s, actionFn,
                              "if (guest_control_menu_action(cpu)) return;",
                              "Input mapper Controls row action guard.",
                              "guest_control_menu_action");
            if (ra > 0) { found++; if (ra == 1) changed++; }
            int rm = PatchOne(ref s, modeFn,
                              "guest_force_control_mode(cpu);",
                              "Force accelerometer control scheme.",
                              "guest_force_control_mode");
            if (rm > 0) { found++; if (rm == 1) changed++; }
            if (changed > 0) File.WriteAllText(path, s);
            return found;
        }

        /* 3.3.7 / 3.4.1 CCamera::update: note the camera as soon as it is
         * passed in, then run the host filter after the engine's matrix build. */
        private static int PatchCameraHD(ref string src, string fn, string tailFn)
        {
            string marker = "void " + fn + "(CPU *cpu)";
            int at = src.IndexOf(marker, StringComparison.Ordinal);
            if (at < 0) return 0;
            if (src.IndexOf("camera_filter_last", at,
                            Math.Min(5000, src.Length - at),
                            StringComparison.Ordinal) >= 0)
                return 2;

            string decl = "extern void camera_note_cam(uint32_t cam);\n" +
                          "extern void camera_filter_last(void);\n";
            src = src.Insert(at, decl);
            at = src.IndexOf(marker, at + decl.Length, StringComparison.Ordinal);
            if (at < 0) throw new InvalidDataException("CCamera::update marker shifted");

            string prologue =
                marker + "\n{\n" +
                "    const uint32_t entry_lr = cpu->r[14];\n" +
                "    uint32_t shc = 0; (void)shc; (void)entry_lr;\n";
            int pp = src.IndexOf(prologue, at, StringComparison.Ordinal);
            if (pp < 0) throw new InvalidDataException("CCamera::update prologue not found");
            src = src.Insert(pp + prologue.Length, "    camera_note_cam(cpu->r[0]);\n");

            string tail = "        return " + tailFn + "(cpu);\n";
            int tp = src.IndexOf(tail, at, StringComparison.Ordinal);
            if (tp < 0) throw new InvalidDataException("CCamera::update build tail not found");
            src = src.Remove(tp, tail.Length).Insert(tp,
                "        " + tailFn + "(cpu);\n" +
                "        camera_filter_last();\n" +
                "        return;\n");
            return 1;
        }

        /* Hook CCamera::update into the host view-matrix filter.  The camera
         * target only changes on 40 ms ticks; the host filter spreads that
         * correction over real time for smooth steering at high FPS. */
        private static int PatchCamera(ref string src)
        {
            string marker = "void fn_00151c40(CPU *cpu)";
            int at = src.IndexOf(marker, StringComparison.Ordinal);
            if (at < 0) return 0;
            if (src.IndexOf("camera_filter_last", at,
                            Math.Min(5000, src.Length - at),
                            StringComparison.Ordinal) >= 0)
                return 2;

            string decl = "extern void camera_note_cam(uint32_t cam);\n" +
                          "extern void camera_filter_last(void);\n";
            src = src.Insert(at, decl);
            at = src.IndexOf(marker, at + decl.Length, StringComparison.Ordinal);
            if (at < 0) throw new InvalidDataException("CCamera::update marker shifted");

            string hook = "L_00151c7c:;\n";
            int hp = src.IndexOf(hook, at, StringComparison.Ordinal);
            if (hp < 0) throw new InvalidDataException("CCamera::update hook label not found");
            src = src.Insert(hp + hook.Length, "    camera_note_cam(cpu->r[4]);\n");

            at = src.IndexOf(marker, StringComparison.Ordinal);
            string tail = "        return fn_00151be0(cpu);\n";
            int tp = src.IndexOf(tail, at, StringComparison.Ordinal);
            if (tp < 0) throw new InvalidDataException("CCamera::update build tail not found");
            src = src.Remove(tp, tail.Length).Insert(tp,
                "        fn_00151be0(cpu);\n" +
                "        camera_filter_last();\n" +
                "        return;\n");
            return 1;
        }

        /* 0 = target not in this chunk, 1 = rewritten, 2 = already patched. */
        private static int PatchOne(ref string src, string fn, string call, string why,
                                    string sentinel = "guest_cmatrix")
        {
            string marker = "void " + fn + "(CPU *cpu)";
            int at = src.IndexOf(marker, StringComparison.Ordinal);
            if (at < 0) return 0;
            if (sentinel != null &&
                src.IndexOf(sentinel, at, Math.Min(400, src.Length - at),
                            StringComparison.Ordinal) >= 0)
                return 2;
            string prologue =
                marker + "\n{\n" +
                "    const uint32_t entry_lr = cpu->r[14];\n" +
                "    uint32_t shc = 0; (void)shc; (void)entry_lr;\n";
            if (src.IndexOf(prologue, at, StringComparison.Ordinal) < 0)
                throw new InvalidDataException("Generated prologue not found for " + fn);
            src = src.Replace(prologue,
                              prologue + "    /* " + why + " */\n    " + call + "\n");
            return 1;
        }

        private static int Run(string exe, string args, string workDir, string toolchainBin,
                               Action<string> log, bool pumpUi,
                               int pct0, int pct1, Action<string, int> progress, string phase)
        {
            var psi = new ProcessStartInfo(exe, args);
            psi.WorkingDirectory = workDir;
            psi.UseShellExecute = false;
            psi.CreateNoWindow = true;
            psi.RedirectStandardOutput = true;
            psi.RedirectStandardError = true;
            string path = Environment.GetEnvironmentVariable("PATH") ?? "";
            if (toolchainBin != null) path = toolchainBin + ";" + path;
            psi.EnvironmentVariables["PATH"] = path;

            using (var p = new Process())
            {
                p.StartInfo = psi;
                p.OutputDataReceived += delegate(object s, DataReceivedEventArgs e)
                { if (e.Data != null) log(e.Data); };
                p.ErrorDataReceived += delegate(object s, DataReceivedEventArgs e)
                { if (e.Data != null) log(e.Data); };
                p.Start();
                p.BeginOutputReadLine();
                p.BeginErrorReadLine();

                DateTime start = DateTime.UtcNow;
                while (!p.WaitForExit(200))
                {
                    if (pumpUi) Application.DoEvents();
                    int elapsed = (int)(DateTime.UtcNow - start).TotalSeconds;
                    int span = Math.Max(1, pct1 - pct0);
                    int pct = pct0 + Math.Min(span - 1, elapsed / 9); // slow crawl; compile dominates
                    progress(phase + "... " + (elapsed / 60) + "m " + (elapsed % 60) + "s", pct);
                }
                p.WaitForExit();
                return p.ExitCode;
            }
        }

        public static string Hash(Stream s)
        {
            using (SHA256 sha = SHA256.Create())
            {
                byte[] h = sha.ComputeHash(s);
                var sb = new StringBuilder(h.Length * 2);
                foreach (byte b in h) sb.Append(b.ToString("x2"));
                return sb.ToString();
            }
        }

        private static void CreateShortcut(string path, string exe, string workDir)
        {
            try
            {
                Type shellType = Type.GetTypeFromProgID("WScript.Shell");
                object shell = Activator.CreateInstance(shellType);
                object link = shellType.InvokeMember("CreateShortcut", BindingFlags.InvokeMethod,
                                                     null, shell, new object[] { path });
                Type lt = link.GetType();
                lt.InvokeMember("TargetPath", BindingFlags.SetProperty, null, link, new object[] { exe });
                lt.InvokeMember("WorkingDirectory", BindingFlags.SetProperty, null, link, new object[] { workDir });
                lt.InvokeMember("IconLocation", BindingFlags.SetProperty, null, link, new object[] { exe + ",0" });
                lt.InvokeMember("Description", BindingFlags.SetProperty, null, link, new object[] { "Asphalt 5" });
                lt.InvokeMember("Save", BindingFlags.InvokeMethod, null, link, null);
            }
            catch { /* shortcuts are optional */ }
        }

        public static void OpenFolder(string path)
        {
            try { Process.Start("explorer.exe", "\"" + path + "\""); } catch { }
        }

        public static void Play(InstallResult r)
        {
            var psi = new ProcessStartInfo(r.GameExe);
            psi.WorkingDirectory = r.InstallDir;
            psi.UseShellExecute = true;
            Process.Start(psi);
        }
    }

    internal sealed class SetupForm : Form
    {
        private readonly TextBox _apk = new TextBox();
        private readonly TextBox _dir = new TextBox();
        private readonly CheckBox _shortcut = new CheckBox();
        private readonly Button _install = new Button();
        private readonly Button _open = new Button();
        private readonly Button _play = new Button();
        private readonly ProgressBar _bar = new ProgressBar();
        private readonly Label _status = new Label();
        private readonly Label _hint = new Label();
        private InstallResult _result;
        private string _logPath;

        public SetupForm(Options opts)
        {
            Text = "Asphalt 5 - Setup";
            FormBorderStyle = FormBorderStyle.FixedDialog;
            MaximizeBox = false;
            MinimizeBox = false;
            StartPosition = FormStartPosition.CenterScreen;
            ClientSize = new Size(680, 500);
            AutoScaleMode = AutoScaleMode.None;
            Font = new Font("Segoe UI", 9f);
            BackColor = Color.FromArgb(245, 247, 250);

            var title = new Label();
            title.Text = "Asphalt 5 - Windows port";
            title.Font = new Font("Segoe UI Semibold", 16f, FontStyle.Bold);
            title.ForeColor = Color.FromArgb(20, 30, 45);
            title.SetBounds(24, 18, 620, 34);
            Controls.Add(title);

            var intro = new Label();
            intro.Text = "This setup builds the game from your own Asphalt 5 APK.\n" +
                         "You must own the game. Build time: usually 3-20 minutes.";
            intro.ForeColor = Color.FromArgb(70, 80, 95);
            intro.SetBounds(26, 56, 630, 38);
            Controls.Add(intro);

            var g1 = new GroupBox();
            g1.Text = "1. Original APK";
            g1.SetBounds(24, 104, 632, 76);
            Controls.Add(g1);

            _apk.SetBounds(16, 30, 500, 26);
            _apk.Text = opts.Apk;
            g1.Controls.Add(_apk);
            var browseApk = new Button();
            browseApk.Text = "Browse...";
            browseApk.SetBounds(524, 29, 92, 28);
            browseApk.Click += delegate
            {
                using (var d = new OpenFileDialog())
                {
                    d.Title = "Select the Asphalt 5 APK";
                    d.Filter = "Android package (*.apk)|*.apk|All files (*.*)|*.*";
                    if (File.Exists(_apk.Text)) d.FileName = _apk.Text;
                    if (d.ShowDialog(this) == DialogResult.OK) _apk.Text = d.FileName;
                }
            };
            g1.Controls.Add(browseApk);

            var g2 = new GroupBox();
            g2.Text = "2. Install location";
            g2.SetBounds(24, 190, 632, 76);
            Controls.Add(g2);

            _dir.SetBounds(16, 30, 500, 26);
            _dir.Text = opts.Dir.Length > 0 ? opts.Dir : Paths.DefaultInstallDir;
            g2.Controls.Add(_dir);
            var browseDir = new Button();
            browseDir.Text = "Browse...";
            browseDir.SetBounds(524, 29, 92, 28);
            browseDir.Click += delegate
            {
                using (var d = new FolderBrowserDialog())
                {
                    d.Description = "Choose where to install Asphalt 5";
                    d.SelectedPath = _dir.Text;
                    if (d.ShowDialog(this) == DialogResult.OK) _dir.Text = d.SelectedPath;
                }
            };
            g2.Controls.Add(browseDir);

            _shortcut.Text = "Create Desktop and Start Menu shortcuts";
            _shortcut.SetBounds(28, 278, 400, 24);
            _shortcut.Checked = true;
            Controls.Add(_shortcut);

            _install.Text = "Install";
            _install.SetBounds(520, 272, 136, 34);
            _install.Click += delegate { DoInstall(); };
            Controls.Add(_install);

            _bar.SetBounds(24, 322, 632, 18);
            _bar.Minimum = 0; _bar.Maximum = 100;
            Controls.Add(_bar);

            _status.Text = "Ready.";
            _status.ForeColor = Color.FromArgb(70, 80, 95);
            _status.SetBounds(26, 344, 630, 20);
            Controls.Add(_status);

            var g3 = new GroupBox();
            g3.Text = "3. Finish";
            g3.SetBounds(24, 370, 632, 112);
            Controls.Add(g3);

            _hint.Text = "3.4.1 and 3.3.7 download the official pack on first launch.\n" +
                         "3.2.4: copy your GloftA5HD folder into gamefiles\\GloftA5HD.";
            _hint.ForeColor = Color.FromArgb(70, 80, 95);
            _hint.SetBounds(16, 20, 600, 34);
            g3.Controls.Add(_hint);

            _open.Text = "Open gamefiles";
            _open.SetBounds(16, 64, 130, 28);
            _open.Enabled = false;
            _open.Click += delegate { if (_result != null) Installer.OpenFolder(_result.GameFiles); };
            g3.Controls.Add(_open);

            _play.Text = "Play";
            _play.SetBounds(154, 64, 100, 28);
            _play.Enabled = false;
            _play.Click += delegate { if (_result != null) Installer.Play(_result); };
            g3.Controls.Add(_play);

            var close = new Button();
            close.Text = "Close";
            close.SetBounds(536, 64, 80, 28);
            close.Click += delegate { Close(); };
            g3.Controls.Add(close);

            AllowDrop = true;
            DragEnter += delegate(object sender, DragEventArgs e)
            {
                if (e.Data.GetDataPresent(DataFormats.FileDrop)) e.Effect = DragDropEffects.Copy;
            };
            DragDrop += delegate(object sender, DragEventArgs e)
            {
                string[] files = e.Data.GetData(DataFormats.FileDrop) as string[];
                if (files != null && files.Length > 0) _apk.Text = files[0];
            };

            FormClosing += delegate(object sender, FormClosingEventArgs e)
            {
                if (!_install.Enabled)
                {
                    e.Cancel = true;
                    MessageBox.Show(this,
                        "The installer is still building the game.\n" +
                        "Please wait for it to finish.",
                        "Asphalt 5 setup", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            };

            AcceptButton = _install;
            if (_apk.Text.Length == 0) _apk.Text = Paths.FindApkNearby();
        }

        private void DoInstall()
        {
            _install.Enabled = false;
            _play.Enabled = false;
            _open.Enabled = false;
            _result = null;
            _logPath = Path.Combine(Paths.DataRoot, "install.log");
            StreamWriter log = null;
            try
            {
                Directory.CreateDirectory(_dir.Text.Trim());
                Directory.CreateDirectory(Paths.DataRoot);
                log = new StreamWriter(_logPath, false, Encoding.UTF8);
                log.AutoFlush = true;
                Action<string> logLine = delegate(string s)
                {
                    try { log.WriteLine(DateTime.Now.ToString("HH:mm:ss") + "  " + s); } catch { }
                };
                Action<string, int> progress = delegate(string msg, int pct)
                {
                    _status.Text = msg;
                    _bar.Style = (pct >= 40 && pct < 95) ? ProgressBarStyle.Marquee : ProgressBarStyle.Blocks;
                    _bar.Value = Math.Max(0, Math.Min(100, pct));
                    Application.DoEvents();
                };
                try
                {
                    _result = Installer.Run(_apk.Text.Trim(), _dir.Text.Trim(), _shortcut.Checked,
                                            false, false,
                                            progress, logLine);
                }
                catch (InvalidDataException ex)
                {
                    if (MessageBox.Show(this, ex.Message + "\n\nBuild anyway?",
                            "Unsupported APK", MessageBoxButtons.YesNo,
                            MessageBoxIcon.Warning) != DialogResult.Yes)
                        throw;
                    _result = Installer.Run(_apk.Text.Trim(), _dir.Text.Trim(), _shortcut.Checked,
                                            true, false,
                                            progress, logLine);
                }
                _bar.Style = ProgressBarStyle.Blocks;
                _bar.Value = 100;
                _status.Text = "Installed. " + ((_result.Is337 || _result.Is341)
                    ? "The game downloads its data on first launch."
                    : "Copy your GloftA5HD folder into the gamefiles folder.");
                _play.Enabled = true;
                _open.Enabled = true;
                _hint.Text = (_result.Is337 || _result.Is341)
                    ? "Game data is downloaded by the game on first launch."
                    : "Game data folder:\n" + Path.Combine(_result.GameFiles, _result.DataName);
                if (MessageBox.Show(this,
                        "Installation complete.\n\n" +
                        ((_result.Is337 || _result.Is341)
                            ? "The game will download its official data pack on first launch."
                            : "Copy your GloftA5HD folder into:\n" + Path.Combine(_result.GameFiles, _result.DataName)) +
                        "\n\nOpen the install folder now?", "Asphalt 5",
                        MessageBoxButtons.YesNo, MessageBoxIcon.Information) == DialogResult.Yes)
                    Installer.OpenFolder(_result.GameFiles);
            }
            catch (Exception ex)
            {
                _bar.Style = ProgressBarStyle.Blocks;
                _bar.Value = 0;
                _status.Text = "Installation failed. See install.log.";
                MessageBox.Show(this, ex.Message + "\n\nLog: " + _logPath, "Asphalt 5 setup",
                                MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            finally
            {
                if (log != null) log.Close();
                _install.Enabled = true;
            }
        }
    }

    internal static class Program
    {
        [STAThread]
        private static int Main(string[] args)
        {
            Options o = Options.Parse(args);
            if (o.Silent) return Silent(o);

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new SetupForm(o));
            return 0;
        }

        private static int Silent(Options o)
        {
            StreamWriter log = null;
            try
            {
                if (o.Log.Length > 0)
                    log = new StreamWriter(o.Log, false, Encoding.UTF8);
                Action<string> logLine = delegate(string s)
                {
                    if (log != null) { log.WriteLine(DateTime.Now.ToString("HH:mm:ss") + "  " + s); log.Flush(); }
                };
                Action<string, int> progress = delegate(string msg, int pct)
                {
                    logLine(string.Format("[{0,3}%] {1}", pct, msg));
                };
                logLine("Silent install");
                InstallResult r = Installer.Run(o.Apk, o.Dir, o.Shortcut, o.Force, o.KeepBuild,
                                                progress, logLine);
                logLine("OK " + r.GameExe);
                return 0;
            }
            catch (Exception ex)
            {
                if (log != null) { log.WriteLine("ERROR " + ex); log.Flush(); }
                return 1;
            }
            finally
            {
                if (log != null) log.Close();
            }
        }
    }
}

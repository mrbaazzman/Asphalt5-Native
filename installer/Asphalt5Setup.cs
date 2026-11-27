// Asphalt 5 - Windows setup
//
// Installs Asphalt 5 Native using the user's own Android APK (3.2.4, 3.3.7, or
// 3.4.1).  No APK, libasphalt5.so, game data, MinGW compiler, Python runtime,
// or obfuscated payload is shipped inside the installer.
//
// At install time it:
//   1. validates the user's APK (SHA-256 of libasphalt5.so),
//   2. extracts the matching pre-built host engine binary to <install>\Asphalt5.exe,
//   3. embeds libasphalt5.so (and 3.3.7/3.4.1 installer UI + manifest) from the
//      user's APK into <install>\Asphalt5.exe,
//   4. creates <install>\gamefiles\<DataName> and optional shortcuts.
//
// Silent mode:
//   Asphalt5Setup.exe --silent --apk <file.apk> --dir <dir>
//                     [--shortcut] [--force] [--log <file>]

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using System.Security.Cryptography;
using System.Text;
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

        public static string FindApkNearby()
        {
            try
            {
                string[] dirs = new string[]
                {
                    BaseDir,
                    Path.Combine(BaseDir, "original"),
                    Path.Combine(BaseDir, "..")
                };
                foreach (string d in dirs)
                {
                    if (!Directory.Exists(d)) continue;
                    string[] hits = Directory.GetFiles(d, "*.apk");
                    if (hits.Length == 1) return Path.GetFullPath(hits[0]);
                }
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
        public string EngineName = "Asphalt5_324.exe";
        public string SoEntry = "";
        public string ExpectedSha = "";
        public string DataName = "GloftA5HD";
        public string DataUrl = "";
        public long DataBytes;
        public string DataSha = "";
        public long DataUncompressed;

        public bool UsesInstaller { get { return Is337 || Is341; } }
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
    }

    internal static class ShellShortcut
    {
        [ComImport]
        [Guid("00021401-0000-0000-C000-000000000046")]
        private class CShellLink { }

        [ComImport]
        [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
        [Guid("000214F9-0000-0000-C000-000000000046")]
        private interface IShellLinkW
        {
            void GetPath([Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pszFile, int cchMaxPath, IntPtr pfd, int fFlags);
            void GetIDList(out IntPtr ppidl);
            void SetIDList(IntPtr pidl);
            void GetDescription([Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pszName, int cchMaxName);
            void SetDescription([MarshalAs(UnmanagedType.LPWStr)] string pszName);
            void GetWorkingDirectory([Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pszDir, int cchMaxPath);
            void SetWorkingDirectory([MarshalAs(UnmanagedType.LPWStr)] string pszDir);
            void GetArguments([Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pszArgs, int cchMaxPath);
            void SetArguments([MarshalAs(UnmanagedType.LPWStr)] string pszArgs);
            void GetHotkey(out short pwHotkey);
            void SetHotkey(short wHotkey);
            void GetShowCmd(out int piShowCmd);
            void SetShowCmd(int iShowCmd);
            void GetIconLocation([Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pszIconPath, int cchIconPath, out int piIcon);
            void SetIconLocation([MarshalAs(UnmanagedType.LPWStr)] string pszIconPath, int iIcon);
            void SetRelativePath([MarshalAs(UnmanagedType.LPWStr)] string pszPathRel, int dwReserved);
            void Resolve(IntPtr hwnd, int fFlags);
            void SetPath([MarshalAs(UnmanagedType.LPWStr)] string pszFile);
        }

        public static void Create(string linkPath, string targetExe, string workDir, string description)
        {
            try
            {
                var link = (IShellLinkW)new CShellLink();
                link.SetPath(targetExe);
                link.SetWorkingDirectory(workDir);
                link.SetIconLocation(targetExe, 0);
                link.SetDescription(description);
                var file = (IPersistFile)link;
                Directory.CreateDirectory(Path.GetDirectoryName(linkPath));
                file.Save(linkPath, false);
            }
            catch { /* shortcuts are optional */ }
        }
    }

    internal static class Installer
    {
        public static InstallResult Run(string apk, string dir, bool shortcut, bool force,
                                        Action<string, int> progress, Action<string> log)
        {
            if (string.IsNullOrWhiteSpace(apk) || !File.Exists(apk))
                throw new FileNotFoundException("Select the original Asphalt 5 APK first.", apk);
            if (string.IsNullOrWhiteSpace(dir))
                throw new ArgumentException("Choose an install folder.");

            dir = Path.GetFullPath(dir);
            log("Install dir: " + dir);

            progress("Checking the APK...", 10);
            ApkProfile profile = DetectProfile(apk, force, log);
            log("Detected " + profile.Label + " (libasphalt5.so " + profile.ExpectedSha.Substring(0, 12) + "...)");

            Directory.CreateDirectory(dir);
            string dstExe = Path.Combine(dir, Paths.GameExe);

            progress("Installing game executable...", 35);
            WriteEngineExe(profile.EngineName, dstExe, log);

            progress("Reading APK resources...", 60);
            using (ZipArchive zip = ZipFile.OpenRead(apk))
            {
                if (profile.UsesInstaller)
                    AppendEmbeddedUi(dstExe, zip, profile, log);

                ZipArchiveEntry soEntry = zip.GetEntry(profile.SoEntry);
                if (soEntry == null)
                    throw new InvalidDataException("APK is missing " + profile.SoEntry);
                byte[] soBytes = ReadEntryBytes(soEntry);
                AppendEmbeddedSo(dstExe, soBytes, log);
            }
            log("Installed " + dstExe);

            progress("Preparing gamefiles folder...", 85);
            string gamefiles = Path.Combine(dir, "gamefiles");
            string dataDir = Path.Combine(gamefiles, profile.DataName);
            Directory.CreateDirectory(dataDir);
            if (profile.UsesInstaller)
                log("The game will download its data on first launch (or place files in " + dataDir + ").");
            else
                log("Place your GloftA5HD files in " + dataDir);

            if (shortcut)
            {
                progress("Creating shortcuts...", 95);
                ShellShortcut.Create(
                    Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory), "Asphalt 5.lnk"),
                    dstExe, dir, "Asphalt 5");
                ShellShortcut.Create(
                    Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Programs), "Asphalt 5.lnk"),
                    dstExe, dir, "Asphalt 5");
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

        private static void WriteEngineExe(string engineName, string outPath, Action<string> log)
        {
            string external = Path.Combine(Paths.BaseDir, "engines", engineName);
            if (File.Exists(external))
            {
                log("Using external engine: " + external);
                File.Copy(external, outPath, true);
                return;
            }

            Stream res = Assembly.GetExecutingAssembly().GetManifestResourceStream("engines.zip");
            if (res == null)
                throw new FileNotFoundException("Missing engine runtime payload (" + engineName + ").");

            using (res)
            using (var zip = new ZipArchive(res, ZipArchiveMode.Read))
            {
                ZipArchiveEntry e = zip.GetEntry(engineName);
                if (e == null)
                    throw new NotSupportedException(
                        "This setup package does not include the engine for " + engineName + ".");
                log("Extracting " + engineName);
                e.ExtractToFile(outPath, true);
            }
        }

        private static byte[] ReadEntryBytes(ZipArchiveEntry e)
        {
            using (Stream s = e.Open())
            using (var ms = new MemoryStream())
            {
                s.CopyTo(ms);
                return ms.ToArray();
            }
        }

        private static ApkProfile Profile337(string label)
        {
            return new ApkProfile
            {
                Is337 = true,
                Label = label,
                EngineName = "Asphalt5_337.exe",
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
                EngineName = "Asphalt5_341.exe",
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
                EngineName = "Asphalt5_324.exe",
                SoEntry = "lib/armeabi-v7a/libasphalt5.so",
                ExpectedSha = Paths.ExpectedSha,
                DataName = "GloftA5HD"
            };
        }

        public static ApkProfile TryDetectProfileQuiet(string apk)
        {
            try
            {
                if (string.IsNullOrWhiteSpace(apk) || !File.Exists(apk)) return null;
                return DetectProfile(apk, false, delegate(string s) { });
            }
            catch { return null; }
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
                return Profile341("Asphalt 5 HD 3.4.1 (Android Market)");
            if (hasHd && string.Equals(shaHd, Paths.ExpectedSha337, StringComparison.OrdinalIgnoreCase))
                return Profile337("Asphalt 5 HD 3.3.7 (Galaxy Tab)");
            if (has324 && string.Equals(sha324, Paths.ExpectedSha, StringComparison.OrdinalIgnoreCase))
                return Profile324("Asphalt 5 HD 3.2.4 (Sony Ericsson)");

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

        private static void AppendEmbeddedUi(string exePath, ZipArchive apkZip, ApkProfile profile,
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
            var entries = new List<KeyValuePair<string, byte[]>>();
            long total = 0;
            foreach (string name in assets)
            {
                ZipArchiveEntry e = apkZip.GetEntry("res/raw/" + name);
                if (e == null)
                    throw new InvalidDataException("APK is missing res/raw/" + name);
                byte[] data = ReadEntryBytes(e);
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

        private static void AppendEmbeddedSo(string exePath, byte[] data, Action<string> log)
        {
            using (FileStream fs = new FileStream(exePath, FileMode.Append, FileAccess.Write))
            {
                fs.Write(data, 0, data.Length);
                fs.Write(new byte[] { (byte)'A', (byte)'5', (byte)'S', (byte)'O', 0, 0, 0, 0 }, 0, 8);
                fs.Write(BitConverter.GetBytes((long)data.Length), 0, 8);
            }
            log("Appended libasphalt5.so (" + data.Length + " bytes) to the executable");
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
        private readonly Label _apkInfo = new Label();
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
            try { Icon = Icon.ExtractAssociatedIcon(Application.ExecutablePath); } catch { }
            FormBorderStyle = FormBorderStyle.FixedDialog;
            MaximizeBox = false;
            MinimizeBox = true;
            StartPosition = FormStartPosition.CenterScreen;
            ClientSize = new Size(680, 536);
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
            intro.Text = "Installs Asphalt 5 using your own Android APK (3.2.4, 3.3.7, or 3.4.1).\n" +
                         "You must own the game. No APK or game data is redistributed.";
            intro.ForeColor = Color.FromArgb(70, 80, 95);
            intro.SetBounds(26, 56, 630, 38);
            Controls.Add(intro);

            var g1 = new GroupBox();
            g1.Text = "1. Original APK";
            g1.SetBounds(24, 102, 632, 92);
            Controls.Add(g1);

            _apk.SetBounds(16, 26, 500, 26);
            _apk.Text = opts.Apk;
            _apk.TextChanged += delegate { OnApkChanged(); };
            g1.Controls.Add(_apk);
            var browseApk = new Button();
            browseApk.Text = "Browse...";
            browseApk.SetBounds(524, 25, 92, 28);
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

            _apkInfo.Text = "Drop your Asphalt 5 APK here or click Browse.";
            _apkInfo.ForeColor = Color.FromArgb(90, 100, 115);
            _apkInfo.SetBounds(16, 60, 600, 20);
            g1.Controls.Add(_apkInfo);

            var g2 = new GroupBox();
            g2.Text = "2. Install location";
            g2.SetBounds(24, 204, 632, 76);
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
            _shortcut.SetBounds(28, 294, 400, 24);
            _shortcut.Checked = true;
            Controls.Add(_shortcut);

            _install.Text = "Install";
            _install.SetBounds(520, 288, 136, 34);
            _install.Click += delegate { DoInstall(); };
            Controls.Add(_install);

            _bar.SetBounds(24, 338, 632, 18);
            _bar.Minimum = 0; _bar.Maximum = 100;
            Controls.Add(_bar);

            _status.Text = "Ready.";
            _status.ForeColor = Color.FromArgb(70, 80, 95);
            _status.SetBounds(26, 360, 630, 22);
            Controls.Add(_status);

            var g3 = new GroupBox();
            g3.Text = "3. Finish";
            g3.SetBounds(24, 388, 632, 128);
            Controls.Add(g3);

            _hint.Text = "3.2.4: copy your GloftA5HD folder into gamefiles\\GloftA5HD.\n" +
                         "3.3.7 / 3.4.1: click Play to download data on first launch (or add data manually).";
            _hint.ForeColor = Color.FromArgb(70, 80, 95);
            _hint.AutoEllipsis = true;
            _hint.SetBounds(16, 22, 600, 44);
            g3.Controls.Add(_hint);

            _open.Text = "Open gamefiles";
            _open.SetBounds(16, 80, 130, 28);
            _open.Enabled = false;
            _open.Click += delegate { if (_result != null) Installer.OpenFolder(_result.GameFiles); };
            g3.Controls.Add(_open);

            _play.Text = "Play";
            _play.SetBounds(154, 80, 100, 28);
            _play.Enabled = false;
            _play.Click += delegate { if (_result != null) Installer.Play(_result); };
            g3.Controls.Add(_play);

            var close = new Button();
            close.Text = "Close";
            close.SetBounds(536, 80, 80, 28);
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

            AcceptButton = _install;
            if (_apk.Text.Length == 0) _apk.Text = Paths.FindApkNearby();
            OnApkChanged();
        }

        private void OnApkChanged()
        {
            string p = _apk.Text.Trim();
            if (p.Length == 0)
            {
                _apkInfo.Text = "Drop your Asphalt 5 APK here or click Browse.";
                _apkInfo.ForeColor = Color.FromArgb(90, 100, 115);
                return;
            }
            if (!File.Exists(p))
            {
                _apkInfo.Text = "APK file not found.";
                _apkInfo.ForeColor = Color.FromArgb(165, 50, 40);
                return;
            }
            ApkProfile prof = Installer.TryDetectProfileQuiet(p);
            if (prof == null)
            {
                _apkInfo.Text = "Unrecognized APK (supported: 3.2.4 SE, 3.3.7 Galaxy Tab, 3.4.1 Market).";
                _apkInfo.ForeColor = Color.FromArgb(170, 95, 20);
                return;
            }
            _apkInfo.Text = "Detected: " + prof.Label;
            _apkInfo.ForeColor = Color.FromArgb(20, 120, 60);
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
                    _bar.Value = Math.Max(0, Math.Min(100, pct));
                    Application.DoEvents();
                };

                try
                {
                    _result = Installer.Run(_apk.Text.Trim(), _dir.Text.Trim(), _shortcut.Checked,
                                            false, progress, logLine);
                }
                catch (InvalidDataException ex)
                {
                    if (ex.Message.IndexOf("Unsupported", StringComparison.OrdinalIgnoreCase) < 0 &&
                        ex.Message.IndexOf("not a supported", StringComparison.OrdinalIgnoreCase) < 0)
                        throw;
                    if (MessageBox.Show(this, ex.Message + "\n\nInstall anyway?",
                            "Unsupported APK", MessageBoxButtons.YesNo,
                            MessageBoxIcon.Warning) != DialogResult.Yes)
                        throw;
                    _result = Installer.Run(_apk.Text.Trim(), _dir.Text.Trim(), _shortcut.Checked,
                                            true, progress, logLine);
                }

                _bar.Value = 100;
                _status.Text = "Installed. " + ((_result.Is337 || _result.Is341)
                    ? "Click Play to launch and download data (or add data manually)."
                    : "Copy your GloftA5HD folder into gamefiles\\GloftA5HD.");
                _play.Enabled = true;
                _open.Enabled = true;
                _hint.Text = (_result.Is337 || _result.Is341)
                    ? "Ready to play (downloads on first launch, or copy data manually to):\n" + Path.Combine(_result.GameFiles, _result.DataName)
                    : "Copy your GloftA5HD folder into:\n" + Path.Combine(_result.GameFiles, _result.DataName);
                if (!_result.Is337 && !_result.Is341)
                {
                    MessageBox.Show(this,
                        "Installation complete.\n\n" +
                        "Copy your GloftA5HD folder into:\n" +
                        Path.Combine(_result.GameFiles, _result.DataName),
                        "Asphalt 5", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
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
                {
                    string logDir = Path.GetDirectoryName(Path.GetFullPath(o.Log));
                    if (!string.IsNullOrEmpty(logDir)) Directory.CreateDirectory(logDir);
                    log = new StreamWriter(o.Log, false, Encoding.UTF8);
                }
                Action<string> logLine = delegate(string s)
                {
                    if (log != null) { log.WriteLine(DateTime.Now.ToString("HH:mm:ss") + "  " + s); log.Flush(); }
                };
                Action<string, int> progress = delegate(string msg, int pct)
                {
                    logLine(string.Format("[{0,3}%] {1}", pct, msg));
                };
                logLine("Silent install");
                InstallResult r = Installer.Run(o.Apk, o.Dir, o.Shortcut, o.Force, progress, logLine);
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

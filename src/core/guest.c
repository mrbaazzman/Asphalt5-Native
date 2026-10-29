#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"

#include <windows.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>

uint8_t *g_mem = NULL;
uint32_t g_load_bias = 0;
int g_verbose = 1;
int g_instruction_budget = 0;

#define MEM_SIZE 0x100000000ull

/* ---- memory ---------------------------------------------------------- */

int guest_commit(uint32_t addr, uint32_t size, uint32_t protect)
{
    void *p = VirtualAlloc(g_mem + addr, size, MEM_COMMIT, protect);
    if (!p) {
        fprintf(stderr, "[guest] VirtualAlloc commit %08x+%x failed: %lu\n",
                addr, size, (unsigned long)GetLastError());
        return -1;
    }
    return 0;
}

int guest_mem_init(void)
{
    g_mem = (uint8_t *)VirtualAlloc(NULL, MEM_SIZE, MEM_RESERVE, PAGE_NOACCESS);
    if (!g_mem) {
        fprintf(stderr, "[guest] cannot reserve 4 GiB: %lu\n", (unsigned long)GetLastError());
        return -1;
    }
    /* ELF image, BSS, stacks, early heap, asset staging, synthetic objects. */
    if (guest_commit(0x00000000, 0x01000000, PAGE_EXECUTE_READWRITE) != 0) return -1;
    if (guest_commit(0x10000000, 0x01000000, PAGE_READWRITE) != 0) return -1;
    if (guest_commit(0x40000000, 0x01000000, PAGE_READWRITE) != 0) return -1;
    if (guest_commit(0x70000000, 0x00010000, PAGE_READWRITE) != 0) return -1;
    if (guest_commit(0xB0000000, 0x10000000, PAGE_READWRITE) != 0) return -1;
    /* The game's render-group packer can index slightly past the end of a
     * vertex chunk while assembling a frame.  Android's heap keeps those
     * pages mapped; commit the whole bump-heap arena so the GL driver never
     * faults on a read that the original platform tolerated. */
    if (guest_commit(0x11000000, 0x2F000000, PAGE_READWRITE) != 0) return -1;
    memset(g_mem, 0, 0x01000000);
    return 0;
}

void guest_mem_shutdown(void)
{
    if (g_mem) VirtualFree(g_mem, 0, MEM_RELEASE);
    g_mem = NULL;
}

/* ---- dispatch -------------------------------------------------------- */

#define HASH_BITS 15
#define HASH_SIZE (1u << HASH_BITS)
typedef struct { uint32_t addr; GuestFn fn; const char *name; } HashEnt;
static HashEnt g_hash[HASH_SIZE];
static size_t g_hash_used;

static uint32_t hash_addr(uint32_t a)
{
    a ^= a >> 16;
    a *= 0x7feb352du;
    a ^= a >> 15;
    return a & (HASH_SIZE - 1);
}

void guest_register_entry(uint32_t addr, GuestFn fn, const char *name)
{
    addr &= ~1u;
    uint32_t h = hash_addr(addr);
    for (uint32_t n = 0; n < HASH_SIZE; n++) {
        HashEnt *e = &g_hash[(h + n) & (HASH_SIZE - 1)];
        if (!e->fn) {
            e->addr = addr; e->fn = fn; e->name = name; g_hash_used++;
            return;
        }
        if (e->addr == addr) { e->fn = fn; e->name = name; return; }
    }
    fprintf(stderr, "[guest] dispatch table full at %08x\n", addr);
}

GuestFn guest_lookup(uint32_t addr)
{
    addr &= ~1u;
    uint32_t h = hash_addr(addr);
    for (uint32_t n = 0; n < HASH_SIZE; n++) {
        HashEnt *e = &g_hash[(h + n) & (HASH_SIZE - 1)];
        if (!e->fn) return NULL;
        if (e->addr == addr) return e->fn;
    }
    return NULL;
}

void guest_register_generated(void)
{
    for (size_t i = 0; i < g_generated_function_count; i++)
        guest_register_entry(g_generated_functions[i].addr,
                             g_generated_functions[i].fn,
                             g_generated_functions[i].name);
}

void guest_call(CPU *cpu, uint32_t addr)
{
    GuestFn fn = guest_lookup(addr);
    if (!fn) {
        guest_abort(cpu, "call to unmapped guest address %08x (lr=%08x sp=%08x)",
                    addr, cpu->r[14], cpu->r[13]);
        return;
    }
    cpu->pc = addr & ~1u;
    fn(cpu);
}

void guest_jump(CPU *cpu, uint32_t addr)
{
    GuestFn fn = guest_lookup(addr);
    if (!fn) {
        guest_abort(cpu, "jump to unmapped guest address %08x", addr);
        return;
    }
    cpu->pc = addr & ~1u;
    fn(cpu);
}

void guest_return_or_jump(CPU *cpu, uint32_t target, uint32_t entry_lr)
{
    if ((target & ~1u) == (entry_lr & ~1u)) return; /* normal return */
    guest_jump(cpu, target);
}

int guest_pc_write(CPU *cpu, uint32_t target, uint32_t entry_lr, uint32_t next_pc)
{
    if ((target & ~1u) == (entry_lr & ~1u)) return 1;
    /* ARM compilers implement indirect calls as: mov lr,pc; ldr pc,[...].
     * If LR is the next instruction, this is a call and must return here. */
    if ((cpu->r[14] & ~1u) == (next_pc & ~1u)) {
        guest_call(cpu, target);
        return 0;
    }
    guest_jump(cpu, target);
    return 1;
}

void guest_abort(CPU *cpu, const char *fmt, ...)
{
    va_list ap;
    char detail[768];
    va_start(ap, fmt);
    vsnprintf(detail, sizeof(detail), fmt, ap);
    va_end(ap);
    fprintf(stderr, "\n[guest] FATAL: %s", detail);
    if (cpu) {
        fprintf(stderr, "\n  pc=%08x lr=%08x sp=%08x cpsr=%08x\n",
                cpu->pc, cpu->r[14], cpu->r[13], cpu->cpsr);
        for (int i = 0; i < 13; i++) fprintf(stderr, "  r%-2d=%08x%s", i, cpu->r[i], (i % 4 == 3) ? "\n" : "");
        fprintf(stderr, "\n");
    }
    {
        char full[1024];
        snprintf(full, sizeof(full), "guest FATAL pc=%08x lr=%08x sp=%08x: %s",
                 cpu ? cpu->pc : 0, cpu ? cpu->r[14] : 0,
                 cpu ? cpu->r[13] : 0, detail);
        platform_crash_log(full);
    }
    fflush(stderr);
    ExitProcess(2);
}

void guest_unimplemented(CPU *cpu, uint32_t addr)
{
    fprintf(stderr, "[guest] unimplemented instruction at %08x (pc=%08x)\n", addr, cpu->pc);
    guest_abort(cpu, "unimplemented instruction");
}

/* The engine's CMatrix::Mult/PreMult/SetMult use the legacy VFPv2
 * short-vector form (FPSCR.Len=4).  Our translated VFP vector core covers it,
 * but these three helpers are the only users in the whole binary and any
 * rounding/lane difference corrupts every 3D transform.  Use the proven
 * scalar row-major equivalent instead (Mult: this=this*other,
 * PreMult: this=other*this, SetMult: this=a*b). */
static float cm_f(uint32_t a) { float v; __builtin_memcpy(&v, G(a), 4); return v; }
static void cm_s(uint32_t a, float v) { __builtin_memcpy(G(a), &v, 4); }
static void cm_mul(const float *a, const float *b, float *r)
{
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            float sum = 0.0f;
            for (int k = 0; k < 4; k++)
                sum += a[row * 4 + k] * b[k * 4 + col];
            r[row * 4 + col] = sum;
        }
    }
}
void guest_cmatrix_mul(CPU *cpu, int op)
{
    uint32_t dst = cpu->r[0];
    uint32_t m1 = cpu->r[1];
    uint32_t m2 = cpu->r[2];
    float a[16], b[16], r[16];
    uint32_t sa, sb;
    if (op == 0)      { sa = dst; sb = m1; }   /* this = this * other */
    else if (op == 1) { sa = m1;  sb = dst; }  /* this = other * this */
    else              { sa = m1;  sb = m2; }   /* this = a * b */
    for (int i = 0; i < 16; i++) { a[i] = cm_f(sa + (uint32_t)i * 4); b[i] = cm_f(sb + (uint32_t)i * 4); }
    cm_mul(a, b, r);
    for (int i = 0; i < 16; i++) cm_s(dst + (uint32_t)i * 4, r[i]);
}

/* Robust quaternion from the row-major rotation matrix at r0, written to r1.
 * The original uses a trace-based square-root method whose per-component sign
 * tests flip the camera roll near a 180-degree rotation, which made the menu
 * camera look behind itself. */
void guest_cmatrix_get_quaternion(CPU *cpu)
{
    uint32_t m = cpu->r[0], out = cpu->r[1];
    float r00 = cm_f(m + 0x00), r01 = cm_f(m + 0x04), r02 = cm_f(m + 0x08);
    float r10 = cm_f(m + 0x10), r11 = cm_f(m + 0x14), r12 = cm_f(m + 0x18);
    float r20 = cm_f(m + 0x20), r21 = cm_f(m + 0x24), r22 = cm_f(m + 0x28);
    float x, y, z, w;
    float tr = r00 + r11 + r22;
    if (tr > 0.0f) {
        float s = sqrtf(tr + 1.0f) * 2.0f;
        w = 0.25f * s;
        x = (r21 - r12) / s;
        y = (r02 - r20) / s;
        z = (r10 - r01) / s;
    } else if (r00 > r11 && r00 > r22) {
        float s = sqrtf(1.0f + r00 - r11 - r22) * 2.0f;
        w = (r21 - r12) / s;
        x = 0.25f * s;
        y = (r01 + r10) / s;
        z = (r02 + r20) / s;
    } else if (r11 > r22) {
        float s = sqrtf(1.0f + r11 - r00 - r22) * 2.0f;
        w = (r02 - r20) / s;
        x = (r01 + r10) / s;
        y = 0.25f * s;
        z = (r12 + r21) / s;
    } else {
        float s = sqrtf(1.0f + r22 - r00 - r11) * 2.0f;
        w = (r10 - r01) / s;
        x = (r02 + r20) / s;
        y = (r12 + r21) / s;
        z = 0.25f * s;
    }
    cm_s(out + 0, x);
    cm_s(out + 4, y);
    cm_s(out + 8, z);
    cm_s(out + 12, w);
}


/* ---- VFP compare ----------------------------------------------------- */

void vfp_set_cmp(CPU *c, double a, double b)
{
    uint32_t f = c->fpscr & 0x0FFFFFFFu;
    if (a != a || b != b) {              /* unordered: C=1 V=1 */
        f |= 0x20000000u | 0x10000000u;
    } else if (a == b) {
        f |= 0x40000000u | 0x20000000u;  /* Z=1 C=1 */
    } else if (a < b) {
        f |= 0x80000000u;                /* N=1 */
    } else {
        f |= 0x20000000u;                /* C=1 */
    }
    c->fpscr = f;
}

void vfp_set_cmp32(CPU *c, float a, float b)
{
    vfp_set_cmp(c, (double)a, (double)b);
}

/* ---- minimal ELF32 loader -------------------------------------------- */

typedef struct {
    uint8_t  e_ident[16];
    uint16_t e_type, e_machine;
    uint32_t e_version, e_entry, e_phoff, e_shoff, e_flags;
    uint16_t e_ehsize, e_phentsize, e_phnum, e_shentsize, e_shnum, e_shstrndx;
} Ehdr32;
typedef struct {
    uint32_t p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_flags, p_align;
} Phdr32;
typedef struct {
    uint32_t sh_name, sh_type, sh_flags, sh_addr, sh_offset, sh_size;
    uint32_t sh_link, sh_info, sh_addralign, sh_entsize;
} Shdr32;
typedef struct { uint32_t st_name, st_value, st_size; uint8_t st_info, st_other; uint16_t st_shndx; } Sym32;
typedef struct { uint32_t r_offset, r_info; } Rel32;

#define PT_LOAD 1
#define SHT_SYMTAB 2
#define SHT_REL 9
#define SHT_DYNSYM 11
#define SHT_INIT_ARRAY 14
#define STB_LOCAL 0

#define R_ARM_ABS32 2
#define R_ARM_RELATIVE 23
#define R_ARM_GLOB_DAT 21
#define R_ARM_JUMP_SLOT 22

static uint8_t *g_file;
static size_t g_file_size;
static Ehdr32 *g_eh;
static Shdr32 *g_sh;

static int read_file(const char *path, uint8_t **out, size_t *out_size)
{
    FILE *f = fopen(path, "rb");
    if (!f) return -1;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *p = (uint8_t *)malloc((size_t)n);
    if (!p) { fclose(f); return -1; }
    if (fread(p, 1, (size_t)n, f) != (size_t)n) { free(p); fclose(f); return -1; }
    fclose(f);
    *out = p; *out_size = (size_t)n;
    return 0;
}

static const char *dynstr(uint32_t off)
{
    Shdr32 *dynsym = NULL, *dynstrsh = NULL;
    for (int i = 0; i < g_eh->e_shnum; i++) {
        if (g_sh[i].sh_type == SHT_DYNSYM) dynsym = &g_sh[i];
    }
    if (!dynsym) return "";
    dynstrsh = &g_sh[dynsym->sh_link];
    if (off >= dynstrsh->sh_size) return "";
    return (const char *)(g_file + dynstrsh->sh_offset + off);
}

static uint32_t resolve_symbol(uint32_t sym_index)
{
    Shdr32 *dynsym = NULL;
    for (int i = 0; i < g_eh->e_shnum; i++)
        if (g_sh[i].sh_type == SHT_DYNSYM) { dynsym = &g_sh[i]; break; }
    if (!dynsym) return 0;
    Sym32 *s = (Sym32 *)(g_file + dynsym->sh_offset) + sym_index;
    if (s->st_shndx == 0) {
        const char *name = dynstr(s->st_name);
        uint32_t stub = guest_import_addr(name);
        if (!stub && g_verbose) fprintf(stderr, "[elf] unresolved import %s\n", name);
        return stub;
    }
    return (s->st_value & ~1u) + g_load_bias;
}

static int guest_load_elf_bytes(uint8_t *data, size_t size)
{
    g_file = data;
    g_file_size = size;
    g_eh = (Ehdr32 *)g_file;
    if (memcmp(g_eh->e_ident, "\x7f" "ELF", 4) != 0 || g_eh->e_ident[4] != 1 ||
        g_eh->e_machine != 40) {
        fprintf(stderr, "[elf] not a little-endian ARM ELF\n");
        return -1;
    }
    g_sh = (Shdr32 *)(g_file + g_eh->e_shoff);
    Phdr32 *ph = (Phdr32 *)(g_file + g_eh->e_phoff);
    for (int i = 0; i < g_eh->e_phnum; i++) {
        if (ph[i].p_type != PT_LOAD) continue;
        uint32_t dst = ph[i].p_vaddr + g_load_bias;
        uint32_t filesz = ph[i].p_filesz, memsz = ph[i].p_memsz;
        if (dst + memsz > 0x10000000u) {
            fprintf(stderr, "[elf] segment %08x+%x outside initial mapping\n", dst, memsz);
            return -1;
        }
        if (filesz) memcpy(g_mem + dst, g_file + ph[i].p_offset, filesz);
        if (memsz > filesz) memset(g_mem + dst + filesz, 0, memsz - filesz);
        if (g_verbose)
            fprintf(stderr, "[elf] LOAD %08x..%08x (%s)\n", dst, dst + memsz,
                    (ph[i].p_flags & 1) ? "RX" : "RW");
    }
    /* relocations */
    int nrel = 0;
    for (int i = 0; i < g_eh->e_shnum; i++) {
        Shdr32 *sec = &g_sh[i];
        if (sec->sh_type != SHT_REL) continue;
        Rel32 *r = (Rel32 *)(g_file + sec->sh_offset);
        uint32_t count = sec->sh_size / sizeof(Rel32);
        for (uint32_t j = 0; j < count; j++) {
            uint32_t type = r[j].r_info & 0xFF;
            uint32_t sym = r[j].r_info >> 8;
            uint32_t where = r[j].r_offset + g_load_bias;
            uint32_t addend = rd32(where);
            uint32_t val = 0;
            switch (type) {
            case R_ARM_RELATIVE: val = addend + g_load_bias; break;
            case R_ARM_ABS32:    val = addend + resolve_symbol(sym); break;
            case R_ARM_GLOB_DAT:
            case R_ARM_JUMP_SLOT: val = resolve_symbol(sym); break;
            default:
                if (g_verbose) fprintf(stderr, "[elf] unhandled reloc %u at %08x\n", type, where);
                continue;
            }
            wr32(where, val);
            nrel++;
        }
    }
    if (g_verbose) fprintf(stderr, "[elf] applied %d relocations\n", nrel);
    return 0;
}

int guest_load_elf(const char *path)
{
    uint8_t *data = NULL;
    size_t size = 0;
    if (read_file(path, &data, &size) != 0) {
        fprintf(stderr, "[elf] cannot read %s\n", path);
        return -1;
    }
    return guest_load_elf_bytes(data, size);
}

int guest_load_elf_auto(const char *path)
{
#ifdef _WIN32
    /* The installer appends the user's libasphalt5.so to Asphalt5.exe:
     *   [ELF bytes][8-byte magic "A5SO\0\0\0\0"][8-byte length, LE]
     * Load it from our own image so the install folder needs no .so. */
    {
        char exe[MAX_PATH];
        DWORD n = GetModuleFileNameA(NULL, exe, sizeof(exe));
        if (n > 0 && n < sizeof(exe)) {
            FILE *f = fopen(exe, "rb");
            if (f) {
                if (fseek(f, 0, SEEK_END) == 0) {
                    long total = ftell(f);
                    if (total > 16) {
                        unsigned char foot[16];
                        if (fseek(f, total - 16, SEEK_SET) == 0 &&
                            fread(foot, 1, 16, f) == 16 &&
                            memcmp(foot, "A5SO\0\0\0\0", 8) == 0) {
                            uint64_t len = 0;
                            memcpy(&len, foot + 8, 8);
                            if (len > 0 && (long)len + 16 <= total) {
                                uint8_t *buf = (uint8_t *)malloc((size_t)len);
                                if (buf &&
                                    fseek(f, total - 16 - (long)len, SEEK_SET) == 0 &&
                                    fread(buf, 1, (size_t)len, f) == (size_t)len) {
                                    fclose(f);
                                    if (g_verbose)
                                        fprintf(stderr, "[elf] using appended libasphalt5.so (%llu bytes)\n",
                                                (unsigned long long)len);
                                    return guest_load_elf_bytes(buf, (size_t)len);
                                }
                                free(buf);
                            }
                        }
                    }
                }
                fclose(f);
            }
        }
    }

    /* Legacy: Windows resource 111 (kept for compatibility). */
    HRSRC r = FindResourceA(NULL, MAKEINTRESOURCEA(111), RT_RCDATA);
    if (r) {
        HGLOBAL h = LoadResource(NULL, r);
        DWORD n = SizeofResource(NULL, r);
        void *p = h ? LockResource(h) : NULL;
        if (p && n > 0) {
            uint8_t *buf = (uint8_t *)malloc((size_t)n);
            if (buf) {
                memcpy(buf, p, (size_t)n);
                if (g_verbose) fprintf(stderr, "[elf] using embedded libasphalt5.so (%lu bytes)\n",
                                       (unsigned long)n);
                return guest_load_elf_bytes(buf, (size_t)n);
            }
        }
    }
#endif
    return guest_load_elf(path);
}

uint32_t guest_symbol(const char *name)
{
    Shdr32 *dynsym = NULL;
    for (int i = 0; i < g_eh->e_shnum; i++)
        if (g_sh[i].sh_type == SHT_DYNSYM) { dynsym = &g_sh[i]; break; }
    if (!dynsym) return 0;
    uint32_t count = dynsym->sh_size / sizeof(Sym32);
    Sym32 *s = (Sym32 *)(g_file + dynsym->sh_offset);
    for (uint32_t i = 0; i < count; i++) {
        if (s[i].st_shndx == 0) continue;
        if (strcmp(dynstr(s[i].st_name), name) == 0)
            return (s[i].st_value & ~1u) + g_load_bias;
    }
    return 0;
}

/* ---- guest heap ------------------------------------------------------ */

static uint32_t g_heap_top = 0x11000000u;
static uint32_t g_heap_end = 0x11000000u;

#define GHEAP_MAGIC 0x47554850u /* 'PHUG' */
#define GHEAP_FREE  1u
#define GHEAP_BINS  256
static uint32_t g_bins[GHEAP_BINS];
static SRWLOCK g_heap_lock = SRWLOCK_INIT;

static void heap_ensure(uint32_t end)
{
    if (end <= g_heap_end) return;
    uint32_t new_end = (end + 0xFFFFFu) & ~0xFFFFFu;
    if (new_end > 0x40000000u) {
        fprintf(stderr, "[guest] heap exhausted (top=%08x request=%08x)\n", g_heap_top, end);
        platform_crash_log("guest heap exhausted (commit limit)");
        ExitProcess(3);
    }
    if (guest_commit(g_heap_end, new_end - g_heap_end, PAGE_READWRITE) != 0) {
        platform_crash_log("guest heap commit failed");
        ExitProcess(3);
    }
    g_heap_end = new_end;
}

uint32_t guest_alloc(size_t n)
{
    /* Reject requests that cannot fit.  Without this, a negative/garbage
     * size wraps the rounded total and the bump pointer, and the guest
     * overwrites the end of the committed heap (seen when the GloftA5HD
     * data folder is missing). */
    if (n > 0x20000000u) {
        fprintf(stderr, "[guest] refusing huge allocation %llu (top=%08x)\n",
                (unsigned long long)n, g_heap_top);
        platform_crash_log("guest refusing huge allocation");
        ExitProcess(3);
    }
    uint32_t total = (uint32_t)((n + 15u + 16u) & ~15u);
    if (total < 32u) total = 32u;

    AcquireSRWLockExclusive(&g_heap_lock);

    /* Size-class reuse.  Block header: [0]=total, [4]=magic, [8]=next free,
     * [12]=flags; user data begins at +16.  Bins 0..254 hold exact 16-byte
     * size classes; bin 255 holds every block >= 4080 bytes. */
    int bin = (int)(total / 16u);
    if (bin >= GHEAP_BINS - 1) bin = GHEAP_BINS - 1;
    for (int i = bin; i < GHEAP_BINS; i++) {
        uint32_t b = g_bins[i];
        if (!b) continue;
        if (i == GHEAP_BINS - 1) {
            uint32_t prev = 0;
            while (b && rd32(b) < total) {
                prev = b;
                b = rd32(b + 8);
            }
            if (!b) continue;
            uint32_t next = rd32(b + 8);
            if (prev) wr32(prev + 8, next); else g_bins[i] = next;
        } else {
            g_bins[i] = rd32(b + 8);
        }
        uint32_t btotal = rd32(b);
        if (btotal >= total + 32u) {
            uint32_t rest = b + total;
            uint32_t rtotal = btotal - total;
            int rbin = (int)(rtotal / 16u);
            if (rbin >= GHEAP_BINS - 1) rbin = GHEAP_BINS - 1;
            wr32(rest, rtotal);
            wr32(rest + 4, GHEAP_MAGIC);
            wr32(rest + 8, g_bins[rbin]);
            wr32(rest + 12, GHEAP_FREE);
            g_bins[rbin] = rest;
            wr32(b, total);
        }
        wr32(b + 8, 0);
        wr32(b + 12, 0);
        ReleaseSRWLockExclusive(&g_heap_lock);
        return b + 16u;
    }

    uint32_t p = g_heap_top;
    if (p + total < p || p + total > 0x40000000u) {
        fprintf(stderr, "[guest] heap exhausted (n=%llu top=%08x total=%08x)\n",
                (unsigned long long)n, p, total);
        platform_crash_log("guest heap exhausted (bump)");
        ExitProcess(3);
    }
    heap_ensure(p + total);
    g_heap_top += total;
    wr32(p, total);
    wr32(p + 4, GHEAP_MAGIC);
    wr32(p + 8, 0);
    wr32(p + 12, 0);
    ReleaseSRWLockExclusive(&g_heap_lock);
    return p + 16u;
}

uint32_t guest_alloc_zero(size_t n)
{
    uint32_t p = guest_alloc(n);
    memset(G(p), 0, n);
    return p;
}

uint32_t guest_heap_top(void)
{
    return g_heap_top;
}

void guest_free(uint32_t p)
{
    if (!p || p < 0x11000010u || p >= g_heap_top) return;
    AcquireSRWLockExclusive(&g_heap_lock);
    uint32_t b = p - 16;
    uint32_t total = rd32(b);
    if (rd32(b + 4) == GHEAP_MAGIC && !(rd32(b + 12) & GHEAP_FREE) &&
        total >= 32u) {
        int bin = (int)(total / 16u);
        if (bin >= GHEAP_BINS - 1) bin = GHEAP_BINS - 1;
        wr32(b + 12, GHEAP_FREE);
        wr32(b + 8, g_bins[bin]);
        g_bins[bin] = b;
    }
    ReleaseSRWLockExclusive(&g_heap_lock);
}

uint32_t guest_realloc(uint32_t p, size_t n)
{
    if (!p) return guest_alloc(n);
    uint32_t total = rd32(p - 16);
    uint32_t old = total > 16 ? total - 16 : 0;
    if (n <= old) return p;
    uint32_t q = guest_alloc(n);
    memcpy(G(q), G(p), old < n ? old : n);
    guest_free(p);
    return q;
}

void guest_run_init_array(CPU *cpu)
{
    for (int i = 0; i < g_eh->e_shnum; i++) {
        if (g_sh[i].sh_type != SHT_INIT_ARRAY) continue;
        uint32_t *p = (uint32_t *)(g_mem + g_sh[i].sh_addr);
        uint32_t n = g_sh[i].sh_size / 4;
        for (uint32_t j = 0; j < n; j++) {
            if (!p[j]) continue;
            if (g_verbose) fprintf(stderr, "[elf] init_array[%u] = %08x\n", j, p[j]);
            cpu->r[14] = 0;
            guest_call(cpu, p[j]);
        }
    }
}

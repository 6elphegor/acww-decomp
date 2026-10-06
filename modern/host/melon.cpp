// Host build: the DS display (2D engines and 3D engine) rendered by melonDS (GPL-3.0; docs/host.md). A melonDS NDS
// object is created with both of its CPUs halted for good: the game runs natively, and this file feeds the GPU what
// the game writes - display and 3D registers (3D commands are executed at once, so the matrix and test results the
// game reads back are current), VRAM banks, palettes and OAM - and has it render one frame per VBlank.
// Built against a melonDS core patched for this (tools/host/melonds.patch: GPU3D::HostDrain and friends).

#include "NDS.h"
#include "GPU.h"
#include "GPU3D.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace melonDS;

extern "C" {
u8 *host_vram_bank(int i);
u32 host_vram_bank_size(int i);
}

static NDS *sNds;

#include "NDSCart.h"
#include <fstream>
#include <vector>
namespace melonDS::Platform { extern std::string gSavePath; }
extern "C" u8 *host_main_ram(void);
static bool sEmu7;
static u64 sOffset;  // melonDS's clock at the host's cycle 0
static void sync_vram(void);
extern "C" int melon_emu7(void) { return sEmu7; }

// emu7: the game's own ARM7 program runs in melonDS (sound, touch, RTC, firmware, save memory), on the main RAM
// the native ARM9 code uses. Otherwise both melonDS CPUs are halted and pxi7.c answers for the ARM7.
extern "C" void melon_init(const char *rom, const char *save, int emu7) {
    NDSArgs args{};
    args.Firmware = Firmware(0);
    args.JIT = std::nullopt;
    sNds = new NDS(std::move(args));
    sNds->Reset();
    sEmu7 = emu7;
    if (!emu7) {
        sNds->Start();
        sNds->ARM9.Halt(1);
        sNds->ARM7.Halt(1);
        return;
    }
    std::ifstream f(rom, std::ios::binary | std::ios::ate);
    u32 len = (u32)f.tellg();
    f.seekg(0);
    auto data = std::make_unique<u8[]>(len);
    f.read((char *)data.get(), len);
    NDSCart::NDSCartArgs cartArgs{};
    melonDS::Platform::gSavePath = save;
    std::ifstream s(save, std::ios::binary | std::ios::ate);
    if (s) {
        u32 sl = (u32)s.tellg();
        s.seekg(0);
        auto sram = std::make_unique<u8[]>(sl);
        s.read((char *)sram.get(), sl);
        cartArgs.SRAM = std::move(sram);
        cartArgs.SRAMLength = sl;
    }
    auto cart = NDSCart::ParseROM(std::move(data), len, nullptr, std::move(cartArgs));
    sNds->SetNDSCart(std::move(cart));
    sNds->RTC.SetDateTime(2026, 4, 1, 12, 0, 0);  // fixed, as in the test emulator
    sNds->SetupDirectBoot("acww.nds");
    sNds->Start();
    // the ARM7 program (0x02380000) and the system area (the last 4 KB) from melonDS's RAM; not the ARM9 program:
    // the game's own variables are where it would be
    u8 *ram = host_main_ram();
    u32 a7 = *(u32 *)&sNds->MainRAM[0x3ffe38] & 0x3fffff, n7 = *(u32 *)&sNds->MainRAM[0x3ffe3c];
    memcpy(ram + a7, sNds->MainRAM + a7, n7);
    memcpy(ram + 0x3ff000, sNds->MainRAM + 0x3ff000, 0x1000);
    sNds->HostSetMainRAM(ram);
    sNds->ARM9.Halt(1);
    sOffset = sNds->HostTimestamp();
}

// the IPC registers belong to melonDS's ARM9 side when the ARM7 is emulated
static int sIpcLog = -1;
static void ipc_log(const char *what, u32 addr, u32 v) {
    if (sIpcLog < 0) sIpcLog = getenv("ACWW_IPCLOG") ? 20000 : 0;
    if (sIpcLog <= 0 || addr != 0x04000180) return;
    sIpcLog--;
    fprintf(stderr, "ipc: %s %08x %08x (arm7 sees %04x, pc %08x, t %llu)\n", what, addr, v, sNds->ARM7IORead16(0x04000180),
            sNds->ARM7.R[15], (unsigned long long)(sNds->HostTimestamp() - sOffset));
}
extern "C" u32 melon_io_read32(u32 addr) { u32 v = sNds->ARM9IORead32(addr); ipc_log("read ", addr, v); return v; }
extern "C" void melon_io_write32(u32 addr, u32 v) { ipc_log("write", addr, v); sNds->ARM9IOWrite32(addr, v); }
extern "C" void melon_io_write16(u32 addr, u16 v) { sNds->ARM9IOWrite16(addr, v); }
// interrupts melonDS raised for the ARM9 (IPC sync, send FIFO empty, receive FIFO not empty): taken over
extern "C" u32 melon_take_arm9_irqs(void) {
    u32 m = sNds->IF[0] & 0x00070000;
    sNds->IF[0] &= ~m;
    return m;
}
extern "C" void melon_input(u32 keys, int touch, int x, int y) {
    sNds->SetKeyMask(~keys & 0xfff);
    if (touch) sNds->TouchScreen((u16)x, (u16)y);
    else sNds->ReleaseScreen();
}

extern "C" void melon_write8(u32 addr, u8 v) { sNds->ARM9IOWrite8(addr, v); }
extern "C" void melon_write16(u32 addr, u16 v) {
    if (getenv("ACWW_LOGDISP") && (addr == 0x04000304 || addr == 0x04000000 || addr == 0x04000002 || addr == 0x04001000))
        fprintf(stderr, "melon: %08x = %04x\n", addr, v);
    sNds->ARM9IOWrite16(addr, v);
}
static void gx_fifo_irq(void);
static u32 sGxFifo, sGxPort;
extern "C" void melon_write32(u32 addr, u32 v) {
    if (addr == 0x04000400) sGxFifo++; else if (addr >= 0x04000440 && addr < 0x04000600) sGxPort++;
    sNds->ARM9IOWrite32(addr, v);
    if (addr >= 0x04000400 && addr < 0x04000600) sNds->GPU.GPU3D.HostDrain();
    if (addr >= 0x04000400 && addr <= 0x04000600) gx_fifo_irq();
}
// the GX FIFO interrupt (IRQ 21) is level-triggered: GXSTAT bits 30-31 choose "less than half full" or "empty", and
// the FIFO is always empty here (commands run at once), so the line is up whenever one of them is selected
static int sGxFifoLevel;
static void gx_fifo_irq(void) {
    u32 mode = sNds->GPU.GPU3D.Read32(0x04000600) >> 30;
    sGxFifoLevel = mode == 1 || mode == 2;
}
extern "C" int melon_gx_fifo_irq_level(void) { return sGxFifoLevel; }

extern "C" u32 melon_read32(u32 addr) {
    sNds->GPU.GPU3D.HostDrain();
    return sNds->ARM9IORead32(addr);
}

// copy what changed in the host's VRAM banks into the GPU's (marking it dirty for the renderer's caches)
static void sync_vram(void) {
    GPU &g = sNds->GPU;
    for (int b = 0; b < 9; b++) {
        const u8 *src = host_vram_bank(b);
        u8 *dst = g.VRAM[b];
        u32 n = host_vram_bank_size(b);
        for (u32 off = 0; off < n; off += VRAMDirtyGranularity) {
            if (memcmp(dst + off, src + off, VRAMDirtyGranularity)) {
                memcpy(dst + off, src + off, VRAMDirtyGranularity);
                g.VRAMDirty[b][off / VRAMDirtyGranularity] = true;
            }
        }
    }
    memcpy(g.Palette, (const void *)0x05000000, sizeof g.Palette);
    memcpy(g.OAM, (const void *)0x07000000, sizeof g.OAM);
    g.HostMarkPaletteOAMDirty();
}

// emu7: melonDS's clock follows the host's virtual time (both count 33 MHz cycles from the start)
#include <time.h>
static u64 sSyncCalls, sSyncNs, sSyncCycles;
extern "C" void melon_sync(u64 host_cycles) {
    if (!sEmu7) return;
    u64 target = host_cycles + sOffset;
    if (sNds->HostTimestamp() >= target) return;
    struct timespec a, b;
    clock_gettime(CLOCK_MONOTONIC, &a);
    u64 start = sNds->HostTimestamp();
    while (sNds->HostTimestamp() < target) {
        if (sNds->HostFrameStarting) sync_vram();  // the game updates VRAM in VBlank: take it at the frame's start
        sNds->HostRun(target - sNds->HostTimestamp());
    }
    clock_gettime(CLOCK_MONOTONIC, &b);
    sSyncCalls++;
    sSyncCycles += sNds->HostTimestamp() - start;
    sSyncNs += (u64)(b.tv_sec - a.tv_sec) * 1000000000ull + (u64)(b.tv_nsec - a.tv_nsec);
    if (getenv("ACWW_SYNCSTATS") && (sSyncCalls & 0xffff) == 0)
        fprintf(stderr, "melon: %llu syncs, %llu cycles, %llu ms\n", (unsigned long long)sSyncCalls,
                (unsigned long long)sSyncCycles, (unsigned long long)(sSyncNs / 1000000));
}

extern "C" void melon_frame(void) {
    if (sEmu7) return;  // HostRun renders as it goes
    sync_vram();
    sNds->GPU.GPU3D.HostDrain();
    sNds->RunFrame();
}

// screen 0 top, 1 bottom: 256x192 pixels, 0x00RRGGBB
extern "C" const u32 *melon_screen(int screen) {
    return sNds->GPU.Framebuffer[sNds->GPU.FrontBuffer][screen].get();
}

static u64 fnv(const u8 *p, u32 n) { u64 h = 1469598103934665603ull; while (n--) h = (h ^ *p++) * 1099511628211ull; return h; }
extern "C" void melon_debug(void) {
    GPU &g = sNds->GPU;
    if (sEmu7) fprintf(stderr, "melon: arm7 pc %08x halted %d ipcsync9 %04x ipcsync7 %04x\n", sNds->ARM7.R[15], sNds->ARM7.Halted,
                       sNds->ARM9IORead16(0x04000180), sNds->ARM7IORead16(0x04000180));
    fprintf(stderr, "melon: bank hashes");
    for (int b = 0; b < 9; b++) fprintf(stderr, " %c:%016llx", 'A' + b, (unsigned long long)fnv(g.VRAM[b], host_vram_bank_size(b)));
    fprintf(stderr, " pal:%016llx", (unsigned long long)fnv(g.Palette, 2048));
    for (int fb = 0; fb < 2; fb++) for (int s = 0; s < 2; s++) {
        int nz = 0; const u32 *p = g.Framebuffer[fb][s].get();
        for (int i = 0; i < 256 * 192; i++) nz += (p[i] & 0xffffff) != 0;
        fprintf(stderr, " fb%d.%d:%d", fb, s, nz);
    }
    fprintf(stderr, " bld %08x %08x/%08x %08x bg %08x %08x", sNds->ARM9IORead32(0x04000050), sNds->ARM9IORead32(0x04000054),
            sNds->ARM9IORead32(0x04001050), sNds->ARM9IORead32(0x04001054), sNds->ARM9IORead32(0x04000008), sNds->ARM9IORead32(0x0400000c));
    fprintf(stderr, " front %d bright %04x/%04x\n", g.FrontBuffer, g.GPU2D_A.MasterBrightness, g.GPU2D_B.MasterBrightness);
    fprintf(stderr, "melon: gx fifo %u port %u gxstat %08x ", sGxFifo, sGxPort, sNds->ARM9IORead32(0x04000600));
    sGxFifo = sGxPort = 0;
    fprintf(stderr, "polys %u/%u dispcnt %08x/%08x vramcnt %02x %02x %02x %02x %02x %02x %02x %02x %02x powcnt %04x\n",
            g.GPU3D.NumPolygons, g.GPU3D.RenderNumPolygons, g.GPU2D_A.DispCnt, g.GPU2D_B.DispCnt, g.VRAMCNT[0],
            g.VRAMCNT[1], g.VRAMCNT[2], g.VRAMCNT[3], g.VRAMCNT[4], g.VRAMCNT[5], g.VRAMCNT[6], g.VRAMCNT[7],
            g.VRAMCNT[8], sNds->PowerControl9);
}

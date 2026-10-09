// Host build: the DS display (2D engines and 3D engine) rendered by melonDS (GPL-3.0; docs/host.md). A melonDS NDS
// object is created with both of its CPUs halted for good: the game runs natively, and this file feeds the GPU what
// the game writes - display and 3D registers (3D commands are executed at once, so the matrix and test results the
// game reads back are current), VRAM banks, palettes and OAM (the host objects: vram.c, include/host_mem.h) - and
// has it render one frame per VBlank.
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
void host_vram_flush(void);
extern unsigned char gHostPltt[0x800], gHostOam[0x800];  // include/host_mem.h
}

static NDS *sNds;

extern "C" void melon_init(void) {
    NDSArgs args{};
    args.Firmware = Firmware(0);
    args.JIT = std::nullopt;
    sNds = new NDS(std::move(args));
    sNds->Reset();
    sNds->Start();
    sNds->ARM9.Halt(1);
    sNds->ARM7.Halt(1);
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
    host_vram_flush();  // (the CPU's windows into the banks)
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
    static_assert(sizeof g.Palette == sizeof gHostPltt && sizeof g.OAM == sizeof gHostOam, "palette, OAM");
    memcpy(g.Palette, gHostPltt, sizeof g.Palette);
    memcpy(g.OAM, gHostOam, sizeof g.OAM);
    g.HostMarkPaletteOAMDirty();
}

extern "C" void melon_frame(void) {
    sync_vram();
    sNds->GPU.GPU3D.HostDrain();
    sNds->RunFrame();
}

// the 3D picture the coming frame shows (melonDS renders the next one during the frame, at line 215): 192 lines of
// 256 pixels, 6-bit red, green, blue in bits 0-5, 8-13, 16-21, alpha 0-31 in bits 24-28, before BG0HOFS's scroll -
// the own 2D renderer's BG0 (render.c)
extern "C" void melon_3d_lines(u32 *out) {
    GPU3D &g = sNds->GPU.GPU3D;
    if (g.AbortFrame) { memset(out, 0, 256 * 192 * 4); return; }
    for (int line = 0; line < 192; line++) memcpy(out + line * 256, g.GetCurrentRenderer().GetLine(line), 256 * 4);
}

// screen 0 top, 1 bottom: 256x192 pixels, 0x00RRGGBB
extern "C" const u32 *melon_screen(int screen) {
    return sNds->GPU.Framebuffer[sNds->GPU.FrontBuffer][screen].get();
}

static u64 fnv(const u8 *p, u32 n) { u64 h = 1469598103934665603ull; while (n--) h = (h ^ *p++) * 1099511628211ull; return h; }
extern "C" void melon_debug(void) {
    GPU &g = sNds->GPU;
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

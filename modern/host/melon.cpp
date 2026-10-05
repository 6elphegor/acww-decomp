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
extern "C" void melon_write32(u32 addr, u32 v) {
    sNds->ARM9IOWrite32(addr, v);
    if (addr >= 0x04000400 && addr < 0x04000600) sNds->GPU.GPU3D.HostDrain();
}
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

extern "C" void melon_frame(void) {
    sync_vram();
    sNds->GPU.GPU3D.HostDrain();
    sNds->RunFrame();
}

// screen 0 top, 1 bottom: 256x192 pixels, 0x00RRGGBB
extern "C" const u32 *melon_screen(int screen) {
    return sNds->GPU.Framebuffer[sNds->GPU.FrontBuffer][screen].get();
}

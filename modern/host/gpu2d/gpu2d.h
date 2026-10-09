// The project's own renderer for the DS's two 2D display engines (docs/portability.md 5.1). Plain C, no host or
// emulator dependencies: it is given the display registers as they are written, and at each frame the VRAM banks,
// the palettes, OAM and the 3D engine's output, and renders both screens.
//
// Written from the hardware's documented behaviour (GBATEK, "DS Video"): BG modes 0-6 (text BGs in 16 and 256
// colours with extended palettes, affine BGs, extended affine BGs with 16-bit map entries and 256-colour and
// direct-colour bitmaps, the large bitmap of mode 6), the 3D layer as BG0 of engine A, OBJs (normal, affine,
// double size, 1D and 2D mapping of tiles and bitmaps, extended OBJ palettes, semi-transparent OBJs, the OBJ window),
// the windows, colour special effects (alpha blending, brightness up and down), mosaic, the display modes (off,
// normal, VRAM display; main memory display is reported, not shown) and master brightness. Display capture is not
// implemented (the game doesn't use it: a capture request is reported once).
//
// The registers are kept per engine as the 0x70 bytes from 0x04000000 (engine A) and 0x04001000 (engine B), plus
// POWCNT1 (0x04000304) and VRAMCNT (0x04000240-0x04000249); other addresses are ignored. Nothing changes during a
// frame (the game's writes come between frames: there are no per-line effects), so a frame is rendered at once.

#ifndef GPU2D_H
#define GPU2D_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Gpu2dFrameInput {
    const uint8_t *bank[9];   // VRAM banks A-I (128, 128, 128, 128, 64, 16, 16, 32, 16 KB)
    const uint8_t *palette;   // 0x800 bytes: engine A BG, A OBJ, B BG, B OBJ (0x200 each)
    const uint8_t *oam;       // 0x800 bytes: engine A, engine B
    // the 3D engine's picture for this frame (engine A's BG0 when DISPCNT bit 3 is set): 192 lines of 256 pixels,
    // red bits 0-5, green 8-13, blue 16-21, alpha 24-28 (0-31; 0: no pixel), not scrolled; NULL: no 3D picture
    const uint32_t *lines3d;
} Gpu2dFrameInput;

void gpu2d_reset(void);
// register writes (addresses as on the DS; little-endian, unaligned halves are split)
void gpu2d_write8(uint32_t addr, uint8_t value);
void gpu2d_write16(uint32_t addr, uint16_t value);
void gpu2d_write32(uint32_t addr, uint32_t value);
uint32_t gpu2d_read32(uint32_t addr);  // what was written (diagnostics)

void gpu2d_render_frame(const Gpu2dFrameInput *in);
// screen 0 top, 1 bottom (POWCNT1 bit 15 decides which engine shows where): 256x192 pixels, 0xffRRGGBB
const uint32_t *gpu2d_screen(int screen);

// diagnostics: what made pixel (x, y) of a screen in the last frame, as text ("engine A: OBJ#12 over BG2, alpha")
void gpu2d_describe_pixel(int screen, int x, int y, char *buf, size_t size);
// ACWW_GPU2D_STATS-style census of the features the frames used (one line per feature with the first frame)
void gpu2d_print_features(void);

#ifdef __cplusplus
}
#endif

#endif

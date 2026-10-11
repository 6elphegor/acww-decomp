// Host build: the screens composited and shown by the GPU (wgpu_display.c, ACWW_RENDERER3D=wgpu; docs/portability.md
// 5.4). The 2D renderer draws its layers on the CPU (gpu2d.h, with the 3D layer deferred), the 3D engine its
// polygons on the GPU (gpu3d_wgpu.c); here the two are put together at the window's resolution - the 3D picture at
// ACWW_SCALE3D times the DS's - and presented, or read back for screenshots. Plain C types: the frontend includes it.
#ifndef HOST_WGPU_DISPLAY_H
#define HOST_WGPU_DISPLAY_H

#include <stdint.h>

// the WebGPU device (ACWW_WGPU_ADAPTER=gpu (default) | cpu: the software adapter, for headless tests); 0 if this
// build or this machine has none - or only a software one (llvmpipe, slower than the CPU's own renderers) unless
// `software_ok` or ACWW_WGPU_ADAPTER=cpu
int wdisp_init(int software_ok);
void *wdisp_device(void);  // WGPUDevice
void *wdisp_queue(void);   // WGPUQueue
// a frame: the 2D renderer's deferred pictures (gpu2d_deferred / gpu2d_deferred_lines of both screens) and the 3D
// picture it shows (gpu3d_wgpu_picture, a WGPUTextureView; `scale` times the DS's size)
void wdisp_frame(const uint32_t *const deferred[2], const uint32_t *const lines[2], void *picture3d, int scale);
// the same with the 2D renderer's pictures drawn by the GPU from what it recorded (a gpu2d.h Gpu2dGpuFrame; banks:
// VRAM A-I) in place of `deferred`
void wdisp_frame_2d(const void *gpuFrame, const uint8_t *const banks[9], const uint32_t *const lines[2],
                    void *picture3d, int scale);
// ... and those pictures read back (256x384 pixels, gpu2d_deferred's two words each), to check them; 0 if it failed
int wdisp_read_2d(uint32_t *out);
// the last frame's screens read back (256x384, 0x00RRGGBB: the top screen, then the bottom one)
const uint32_t *wdisp_screens(void);

// presenting to a window: its native handles (WDISP_X11: Display *, Window; WDISP_WAYLAND: wl_display *,
// wl_surface *); 0 if it can't
enum { WDISP_X11 = 1, WDISP_WAYLAND = 2 };
int wdisp_attach(int kind, void *display, uint64_t window, int vsync);
int wdisp_presenting(void);
// the last frame into the window, whose drawable is w x h pixels (the screens letterboxed in it)
void wdisp_present(int w, int h);
// the same picture read back (w x h, 0x00RRGGBB; ACWW_WINSHOT); 0 if it failed
int wdisp_read_window(int w, int h, uint32_t *out);

// where the screens (256x384) show in a w x h window: x, y, width, height (the largest that fits, centred)
static inline void wdisp_letterbox(int w, int h, float r[4]) {
    float s = (float)w / 256.0f < (float)h / 384.0f ? (float)w / 256.0f : (float)h / 384.0f;
    r[2] = 256.0f * s, r[3] = 384.0f * s;
    r[0] = ((float)w - r[2]) / 2.0f, r[1] = ((float)h - r[3]) / 2.0f;
}

#endif

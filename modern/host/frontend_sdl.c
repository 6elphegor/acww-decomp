// Host build: the in-process SDL2 frontend backend (frontend.h; HOST_FRONTEND_SDL, the 64-bit builds;
// docs/portability.md 4.1). A window with both screens, keyboard and game controller input, the mouse or a finger on
// the bottom screen as the touch panel, the sound through an SDL audio callback that reads the AcwwShm ring.
//
// Keys: arrows = D-pad, X = A, Z = B, S = X, A = Y, Q = L, W = R, Enter = Start, Right Shift = Select (by position:
// the same keys on other layouts). F11: window size 1x/2x/3x; Alt+Enter: full screen; M: mute.
// Game controllers (SDL's database): D-pad or left stick, the face buttons by position as on the DS (right = A,
// bottom = B, top = X, left = Y), shoulders or triggers = L / R, Start, Back = Select.
//
// The game's thread calls this at each VBlank, on whichever game stack is running: SDL (and the video driver under
// it) runs on a stack of its own instead (8 MB, a coroutine: frontend_backend_frame switches to it and back), so the
// game's 512 KB thread stacks needn't fit a GL driver's needs.
//
// With the screens on the GPU (ACWW_RENDERER3D=wgpu: render_on_gpu) the window is drawn by wgpu_display.c, through
// its native handles (X11 or Wayland), at the window's resolution; else by an SDL renderer from the AcwwShm pixels.
//
// Pacing stays the runtime's (hw.c, 60 Hz on the host clock); ACWW_VSYNC=1 also waits for the display's vsync.
// Testing without a display: SDL_VIDEODRIVER=dummy (or offscreen), SDL_AUDIODRIVER=dummy (or disk, with
// SDL_DISKAUDIOFILE), and ACWW_WINSHOT="frame:file.ppm;..." writes what the window shows (its whole drawable, at
// its size) at those frames.
#if HOST_FRONTEND_SDL

#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_syswm.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "coro.h"
#include "frontend.h"
#include "host.h"
#include "plat.h"
#include "render.h"
#include "wgpu_display.h"

static AcwwShm *sShm;
static SDL_Window *sWin;
static SDL_Renderer *sRen;
static SDL_Texture *sTex;
static int sGpu;  // the window drawn by wgpu_display.c
static SDL_AudioDeviceID sDev;
static int sScale = 2, sMute;
static SDL_GameController *sPads[4];

// ---- sound: the game makes it in step with its virtual time (paced to the host clock), the sound card plays it on
// its own clock. The queue between them is held near AUDIO_TARGET by playing up to 0.5% faster or slower (linear
// interpolation; not audible), which absorbs the clocks' drift and the game's frame-sized bursts. After a stall
// (the queue ran dry) it waits for half the target again; when far too much is queued it skips ahead. (The same as
// the viewer's, modern/host/viewer/viewer.c.)
#define AUDIO_TARGET 2200.0  // frames (67 ms), on top of what the device asks for at a time
static unsigned sDry, sSkips, sCalls;  // ACWW_AUDIO_INFO: printed at the end
static double sLevelSum;
static void audio_callback(void *user, Uint8 *stream, int len) {
    AcwwShm *shm = user;
    int16_t *out = (int16_t *)stream;
    uint32_t want = (uint32_t)len / 4, w = __atomic_load_n(&shm->audio_write, __ATOMIC_ACQUIRE);
    static uint32_t r;
    static double frac;
    static int primed, init;
    if (!init) { init = 1; r = w; }
    double target = AUDIO_TARGET + want;  // a margin above what one call takes
    uint32_t level = w - r;
    if (level > ACWW_AUDIO_FRAMES / 2 || level > 4 * target) {
        if (primed) sSkips++;
        r = w - (uint32_t)target;
        level = (uint32_t)target;
    }
    sLevelSum += level;
    sCalls++;
    if (!primed && level >= target / 2 + want) primed = 1;
    double err = (level - target) / target;
    double ratio = 1.0 + 0.005 * (err < -1 ? -1 : err > 1 ? 1 : err);
    int mute = __atomic_load_n(&sMute, __ATOMIC_RELAXED);
    uint32_t i = 0;
    for (; primed && i < want; i++) {
        if (w - r < 2) { primed = 0; sDry++; break; }  // ran dry
        const int16_t *a = &shm->audio[(r % ACWW_AUDIO_FRAMES) * 2], *b = &shm->audio[((r + 1) % ACWW_AUDIO_FRAMES) * 2];
        out[i * 2] = mute ? 0 : (int16_t)(a[0] + (b[0] - a[0]) * frac);
        out[i * 2 + 1] = mute ? 0 : (int16_t)(a[1] + (b[1] - a[1]) * frac);
        frac += ratio;
        while (frac >= 1.0) { frac -= 1.0; r++; }
    }
    memset(out + i * 2, 0, (want - i) * 4);
    __atomic_store_n(&shm->audio_read, r, __ATOMIC_RELEASE);
}

static void sdl_quit(void) {
    if (getenv("ACWW_AUDIO_INFO") && sCalls)
        fprintf(stderr, "frontend: sound: %u underruns, %u skips, mean queue %.0f frames\n", sDry, sSkips,
                sLevelSum / sCalls);
    if (sDev) SDL_CloseAudioDevice(sDev);
    sDev = 0;
    SDL_Quit();
}

static void open_audio(void) {
    if (getenv("ACWW_MUTE") || SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) return;
    SDL_AudioSpec want, have;
    memset(&want, 0, sizeof want);
    want.freq = ACWW_AUDIO_RATE;
    want.format = AUDIO_S16SYS;
    want.channels = 2;
    want.samples = getenv("ACWW_AUDIO_SAMPLES") ? (Uint16)atoi(getenv("ACWW_AUDIO_SAMPLES")) : 512;
    want.callback = audio_callback;
    want.userdata = sShm;
    sDev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);  // SDL converts to the device's rate and format
    if (!sDev) { fprintf(stderr, "frontend: no sound: %s\n", SDL_GetError()); return; }
    if (getenv("ACWW_AUDIO_INFO"))
        fprintf(stderr, "frontend: sound %d Hz, format %04x, %d channels, %d frames (%s)\n", have.freq, have.format,
                have.channels, have.samples, SDL_GetCurrentAudioDriver());
    SDL_PauseAudioDevice(sDev, 0);
}

// ---- the frontend's own stack
enum { FE_STACK = 8 * 1024 * 1024 };
static void *sFeSp, *sGameSp;
static void frame_body(void);
static void fe_main(void *arg) {
    (void)arg;
    for (;;) {
        frame_body();
        host_coro_switch(&sFeSp, sGameSp);
    }
}

AcwwShm *frontend_backend_open(const char *argv0) {
    (void)argv0;
    // SDL's SIGINT/SIGTERM handlers would replace the runtime's (debug_posix.c); the face buttons by position
    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
    SDL_SetHint(SDL_HINT_APP_NAME, "Animal Crossing: Wild World");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        fprintf(stderr, "frontend: no window (%s): running headless\n", SDL_GetError());
        return 0;
    }
    sShm = calloc(1, sizeof *sShm);
    void *stack = host_plat_stack_alloc(FE_STACK, 0);
    if (!sShm || !stack) { fprintf(stderr, "frontend: no memory\n"); SDL_Quit(); free(sShm); return sShm = 0; }
    sShm->magic = ACWW_SHM_MAGIC;
    sFeSp = host_coro_prepare(stack, FE_STACK, fe_main, 0);
    sWin = SDL_CreateWindow("Animal Crossing: Wild World (native)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                            256 * sScale, 384 * sScale, SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    int vsync = getenv("ACWW_VSYNC") && atoi(getenv("ACWW_VSYNC"));
    if (sWin && render_on_gpu()) {  // the GPU draws into the window
        SDL_SysWMinfo wm;
        SDL_VERSION(&wm.version);
        if (SDL_GetWindowWMInfo(sWin, &wm)) {
            if (wm.subsystem == SDL_SYSWM_X11)
                sGpu = wdisp_attach(WDISP_X11, wm.info.x11.display, wm.info.x11.window, vsync);
            else if (wm.subsystem == SDL_SYSWM_WAYLAND)
                sGpu = wdisp_attach(WDISP_WAYLAND, wm.info.wl.display, (uintptr_t)wm.info.wl.surface, vsync);
        }
        if (!sGpu) fprintf(stderr, "frontend: the GPU can't draw into the window: the screens are read back\n");
    }
    if (sWin && !sGpu) {
        sRen = SDL_CreateRenderer(sWin, -1, vsync ? SDL_RENDERER_PRESENTVSYNC : 0);
        if (!sRen) sRen = SDL_CreateRenderer(sWin, -1, SDL_RENDERER_SOFTWARE);
    }
    if (sRen) {
        SDL_RenderSetLogicalSize(sRen, 256, 384);  // letterboxed, the mouse in logical coordinates
        sTex = SDL_CreateTexture(sRen, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING, 256, 384);
    }
    if (!sTex && !sGpu) {
        fprintf(stderr, "frontend: no window (%s): running headless\n", SDL_GetError());
        SDL_Quit();
        free(sShm);
        return sShm = 0;
    }
    open_audio();
    atexit(sdl_quit);
    return sShm;
}

void frontend_backend_frame(AcwwShm *shm) {
    (void)shm;
    host_coro_switch(&sGameSp, sFeSp);
}

// (also called from the crash and SIGINT handlers: nothing here that isn't safe there; SDL_Quit runs at exit)
void frontend_backend_close(void) {}

// ---- input
static uint32_t keyboard_keys(void) {
    static const struct { SDL_Scancode sc; uint32_t bit; } map[] = {
        {SDL_SCANCODE_X, 1u << 0},      {SDL_SCANCODE_Z, 1u << 1},     {SDL_SCANCODE_RSHIFT, 1u << 2},
        {SDL_SCANCODE_RETURN, 1u << 3}, {SDL_SCANCODE_RIGHT, 1u << 4}, {SDL_SCANCODE_LEFT, 1u << 5},
        {SDL_SCANCODE_UP, 1u << 6},     {SDL_SCANCODE_DOWN, 1u << 7},  {SDL_SCANCODE_W, 1u << 8},
        {SDL_SCANCODE_Q, 1u << 9},      {SDL_SCANCODE_S, 1u << 10},    {SDL_SCANCODE_A, 1u << 11},
    };
    const Uint8 *st = SDL_GetKeyboardState(0);
    uint32_t k = 0;
    for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++)
        if (st[map[i].sc]) k |= map[i].bit;
    // (Alt+Enter is the full-screen toggle, not Start)
    if ((SDL_GetModState() & KMOD_ALT) && st[SDL_SCANCODE_RETURN]) k &= ~(1u << 3);
    return k;
}

static uint32_t pad_keys(void) {
    static const struct { SDL_GameControllerButton b; uint32_t bit; } map[] = {
        {SDL_CONTROLLER_BUTTON_B, 1u << 0},  // right face button: A
        {SDL_CONTROLLER_BUTTON_A, 1u << 1},  // bottom: B
        {SDL_CONTROLLER_BUTTON_Y, 1u << 10}, // top: X
        {SDL_CONTROLLER_BUTTON_X, 1u << 11}, // left: Y
        {SDL_CONTROLLER_BUTTON_BACK, 1u << 2},          {SDL_CONTROLLER_BUTTON_START, 1u << 3},
        {SDL_CONTROLLER_BUTTON_DPAD_RIGHT, 1u << 4},    {SDL_CONTROLLER_BUTTON_DPAD_LEFT, 1u << 5},
        {SDL_CONTROLLER_BUTTON_DPAD_UP, 1u << 6},       {SDL_CONTROLLER_BUTTON_DPAD_DOWN, 1u << 7},
        {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, 1u << 8}, {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, 1u << 9},
    };
    enum { DEAD = 16000 };
    uint32_t k = 0;
    for (int p = 0; p < 4; p++) {
        SDL_GameController *c = sPads[p];
        if (!c) continue;
        for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++)
            if (SDL_GameControllerGetButton(c, map[i].b)) k |= map[i].bit;
        int x = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTX), y = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTY);
        if (x > DEAD) k |= 1u << 4;
        if (x < -DEAD) k |= 1u << 5;
        if (y < -DEAD) k |= 1u << 6;
        if (y > DEAD) k |= 1u << 7;
        if (SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > DEAD) k |= 1u << 8;
        if (SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > DEAD) k |= 1u << 9;
    }
    return k;
}

static void pad_added(int index) {
    for (int p = 0; p < 4; p++) {
        if (sPads[p]) continue;
        sPads[p] = SDL_GameControllerOpen(index);
        if (sPads[p])
            fprintf(stderr, "frontend: controller %s\n", SDL_GameControllerName(sPads[p]));
        return;
    }
}

static void pad_removed(SDL_JoystickID id) {
    for (int p = 0; p < 4; p++) {
        if (sPads[p] && SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(sPads[p])) == id) {
            SDL_GameControllerClose(sPads[p]);
            sPads[p] = 0;
        }
    }
}

// the touch panel: the left mouse button or the first finger, in the window's logical coordinates (0..255,
// 0..383); the bottom screen is y 192..383
static struct { int held, x, y; } sMouse, sFinger;
static SDL_FingerID sFingerId;
// a point of the window (its coordinates) in the screens' (256x384); the SDL renderer's mouse events have them already
static void window_to_logical(int wx, int wy, int *x, int *y) {
    if (!sGpu) { *x = wx, *y = wy; return; }
    int w, h;
    float r[4];
    SDL_GetWindowSize(sWin, &w, &h);
    wdisp_letterbox(w, h, r);
    *x = (int)SDL_floorf(((float)wx - r[0]) * 256.0f / r[2]);
    *y = (int)SDL_floorf(((float)wy - r[1]) * 384.0f / r[3]);
}
static void finger_to_logical(float fx, float fy, int *x, int *y) {
    int w, h;
    SDL_GetWindowSize(sWin, &w, &h);
    if (sGpu) { window_to_logical((int)(fx * w), (int)(fy * h), x, y); return; }
    float lx, ly;
    SDL_RenderWindowToLogical(sRen, (int)(fx * w), (int)(fy * h), &lx, &ly);
    *x = (int)lx;
    *y = (int)ly;
}
static void update_touch(void) {
    int held = sFinger.held || sMouse.held;
    int x = sFinger.held ? sFinger.x : sMouse.x, y = sFinger.held ? sFinger.y : sMouse.y;
    if (held && y >= 192 && y < 384 && x >= 0 && x < 256) {
        sShm->touch_x = x;
        sShm->touch_y = y - 192;
        sShm->touch_down = 1;
    } else if (!held || y < 192) {
        sShm->touch_down = 0;  // (dragged off the side: held at the last point, as the viewer does)
    }
}

static void handle(const SDL_Event *e) {
    switch (e->type) {
    case SDL_QUIT: sShm->quit = 1; break;
    case SDL_KEYDOWN:
        if (e->key.repeat) break;
        if (e->key.keysym.scancode == SDL_SCANCODE_F11) {
            sScale = sScale % 3 + 1;
            SDL_SetWindowFullscreen(sWin, 0);
            SDL_SetWindowSize(sWin, 256 * sScale, 384 * sScale);
        } else if (e->key.keysym.scancode == SDL_SCANCODE_RETURN && (e->key.keysym.mod & KMOD_ALT)) {
            int full = (SDL_GetWindowFlags(sWin) & SDL_WINDOW_FULLSCREEN_DESKTOP) != 0;
            SDL_SetWindowFullscreen(sWin, full ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
        } else if (e->key.keysym.scancode == SDL_SCANCODE_M) {
            __atomic_store_n(&sMute, !sMute, __ATOMIC_RELAXED);
        }
        break;
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP:
        if (e->button.which == SDL_TOUCH_MOUSEID || e->button.button != SDL_BUTTON_LEFT) break;  // (fingers below)
        sMouse.held = e->type == SDL_MOUSEBUTTONDOWN;
        window_to_logical(e->button.x, e->button.y, &sMouse.x, &sMouse.y);
        break;
    case SDL_MOUSEMOTION:
        if (e->motion.which == SDL_TOUCH_MOUSEID) break;
        sMouse.held = (e->motion.state & SDL_BUTTON_LMASK) != 0;
        window_to_logical(e->motion.x, e->motion.y, &sMouse.x, &sMouse.y);
        break;
    case SDL_FINGERDOWN:
        if (sFinger.held) break;
        sFingerId = e->tfinger.fingerId;
        sFinger.held = 1;
        finger_to_logical(e->tfinger.x, e->tfinger.y, &sFinger.x, &sFinger.y);
        break;
    case SDL_FINGERMOTION:
        if (sFinger.held && e->tfinger.fingerId == sFingerId)
            finger_to_logical(e->tfinger.x, e->tfinger.y, &sFinger.x, &sFinger.y);
        break;
    case SDL_FINGERUP:
        if (sFinger.held && e->tfinger.fingerId == sFingerId) sFinger.held = 0;
        break;
    case SDL_CONTROLLERDEVICEADDED: pad_added(e->cdevice.which); break;
    case SDL_CONTROLLERDEVICEREMOVED: pad_removed(e->cdevice.which); break;
    default: break;
    }
}

// ---- ACWW_WINSHOT="frame:path.ppm;...": the window's drawable as presented (before the present: the back buffer
// is undefined after it)
static void write_ppm(const char *path, const uint32_t *px, int w, int h) {
    FILE *o = fopen(path, "wb");
    if (!o) return;
    fprintf(o, "P6\n%d %d\n255\n", w, h);
    for (int i = 0; i < w * h; i++) {
        unsigned char rgb[3] = {(unsigned char)(px[i] >> 16), (unsigned char)(px[i] >> 8), (unsigned char)px[i]};
        fwrite(rgb, 1, 3, o);
    }
    fclose(o);
}
static void window_shot(void) {
    static const char *spec;
    if (!spec) spec = getenv("ACWW_WINSHOT") ? getenv("ACWW_WINSHOT") : "";
    unsigned f = (unsigned)host_frame();
    for (const char *p = spec; *p;) {
        unsigned fr;
        char path[512];
        if (sscanf(p, "%u:%511[^;]", &fr, path) == 2 && fr == f && sGpu) {
            int w, h;
            SDL_GetWindowSizeInPixels(sWin, &w, &h);
            uint32_t *px = malloc((size_t)w * h * 4);
            if (px && wdisp_read_window(w, h, px)) write_ppm(path, px, w, h);
            free(px);
        } else if (sscanf(p, "%u:%511[^;]", &fr, path) == 2 && fr == f) {
            int w, h;
            SDL_GetRendererOutputSize(sRen, &w, &h);
            uint32_t *px = malloc((size_t)w * h * 4);
            // (the whole output: with the logical size the viewport is only the letterboxed picture)
            SDL_RenderSetLogicalSize(sRen, 0, 0);
            SDL_RenderSetViewport(sRen, 0);
            if (px && SDL_RenderReadPixels(sRen, 0, SDL_PIXELFORMAT_XRGB8888, px, w * 4) == 0) {
                write_ppm(path, px, w, h);
            } else {
                fprintf(stderr, "frontend: ACWW_WINSHOT: %s\n", SDL_GetError());
            }
            SDL_RenderSetLogicalSize(sRen, 256, 384);
            free(px);
        }
        p = strchr(p, ';');
        if (!p) break;
        p++;
    }
}

// one frame (on the frontend's stack): events, input, then the picture
static void frame_body(void) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) handle(&e);
    update_touch();
    sShm->keys = keyboard_keys() | pad_keys();
    if (sGpu) {
        int w, h;
        SDL_GetWindowSizeInPixels(sWin, &w, &h);
        window_shot();
        wdisp_present(w, h);
        return;
    }
    SDL_UpdateTexture(sTex, 0, sShm->pixels, 256 * 4);
    SDL_SetRenderDrawColor(sRen, 0, 0, 0, 255);
    SDL_RenderClear(sRen);
    SDL_RenderCopy(sRen, sTex, 0, 0);
    window_shot();
    SDL_RenderPresent(sRen);
}

#endif

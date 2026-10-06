// acww-viewer: shows the host build's screens (64-bit, SDL2) and sends the input back through shared memory
// (modern/host/frontend.h). Started by the game; argument: the shared memory name.
//
// Keys: arrows = D-pad, X = A, Z = B, S = X, A = Y, Q = L, W = R, Enter = Start, Right Shift = Select.
// Mouse on the bottom screen = touch. F11: window size 1x/2x/3x. M: mute.
//
// Sound: the game's mixed output (AcwwShm.audio, 32728 Hz stereo) to the default audio device, about 70 ms behind
// (audio_callback).

#include <SDL2/SDL.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

#include "../frontend.h"

static AcwwShm *sShm;
static volatile int sMute;

// The game makes sound in step with its virtual time (paced to the system clock); the sound card plays it on its
// own clock. The queue between them is held near AUDIO_TARGET by playing up to 0.5% faster or slower (linear
// interpolation; not audible), which absorbs the clocks' drift and the game's frame-sized bursts. After a stall
// (the queue ran dry) it waits for half the target again; when far too much is queued it skips ahead.
#define AUDIO_TARGET 2200.0  // frames (67 ms), on top of what the device asks for at a time
static unsigned sDry, sSkips;     // ACWW_AUDIO_INFO: printed at the end
static double sLevelSum;
static unsigned sCalls;
static void audio_callback(void *user, Uint8 *stream, int len) {
    (void)user;
    int16_t *out = (int16_t *)stream;
    uint32_t want = (uint32_t)len / 4, w = sShm->audio_write;
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
    uint32_t i = 0;
    for (; primed && i < want; i++) {
        if (w - r < 2) { primed = 0; sDry++; break; }  // ran dry
        const int16_t *a = &sShm->audio[(r % ACWW_AUDIO_FRAMES) * 2], *b = &sShm->audio[((r + 1) % ACWW_AUDIO_FRAMES) * 2];
        out[i * 2] = sMute ? 0 : (int16_t)(a[0] + (b[0] - a[0]) * frac);
        out[i * 2 + 1] = sMute ? 0 : (int16_t)(a[1] + (b[1] - a[1]) * frac);
        frac += ratio;
        while (frac >= 1.0) { frac -= 1.0; r++; }
    }
    memset(out + i * 2, 0, (want - i) * 4);
    sShm->audio_read = r;
}

static void audio_report(void) {
    if (getenv("ACWW_AUDIO_INFO") && sCalls)
        fprintf(stderr, "acww-viewer: sound: %u underruns, %u skips, mean queue %.0f frames\n", sDry, sSkips, sLevelSum / sCalls);
}

static uint32_t key_bit(SDL_Keycode k) {
    switch (k) {
    case SDLK_x: return 1u << 0;        // A
    case SDLK_z: return 1u << 1;        // B
    case SDLK_RSHIFT: return 1u << 2;   // Select
    case SDLK_RETURN: return 1u << 3;   // Start
    case SDLK_RIGHT: return 1u << 4;
    case SDLK_LEFT: return 1u << 5;
    case SDLK_UP: return 1u << 6;
    case SDLK_DOWN: return 1u << 7;
    case SDLK_w: return 1u << 8;        // R
    case SDLK_q: return 1u << 9;        // L
    case SDLK_s: return 1u << 10;       // X
    case SDLK_a: return 1u << 11;       // Y
    default: return 0;
    }
}

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: acww-viewer <shm name>\n"); return 1; }
    int fd = shm_open(argv[1], O_RDWR, 0);
    if (fd < 0) { perror(argv[1]); return 1; }
    AcwwShm *shm = mmap(0, sizeof(AcwwShm), PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    close(fd);
    if (shm == MAP_FAILED || shm->magic != ACWW_SHM_MAGIC) { fprintf(stderr, "acww-viewer: bad shared memory\n"); return 1; }
    if (SDL_Init(SDL_INIT_VIDEO) != 0) { fprintf(stderr, "acww-viewer: %s\n", SDL_GetError()); return 1; }
    sShm = shm;
    // sound: optional (no device, or ACWW_MUTE: silent)
    if (!getenv("ACWW_MUTE") && SDL_InitSubSystem(SDL_INIT_AUDIO) == 0) {
        SDL_AudioSpec want = {0}, have;
        want.freq = ACWW_AUDIO_RATE;
        want.format = AUDIO_S16SYS;
        want.channels = 2;
        want.samples = getenv("ACWW_AUDIO_SAMPLES") ? (Uint16)atoi(getenv("ACWW_AUDIO_SAMPLES")) : 512;
        want.callback = audio_callback;
        SDL_AudioDeviceID dev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);  // SDL converts to the device's rate
        if (dev) {
            if (getenv("ACWW_AUDIO_INFO"))
                fprintf(stderr, "acww-viewer: sound %d Hz, format %04x, %d channels, %d frames (%s)\n", have.freq, have.format,
                        have.channels, have.samples, SDL_GetCurrentAudioDriver());
            SDL_PauseAudioDevice(dev, 0);
        } else {
            fprintf(stderr, "acww-viewer: no sound: %s\n", SDL_GetError());
        }
    }
    int scale = 2;
    SDL_Window *win = SDL_CreateWindow("Animal Crossing: Wild World (native)", SDL_WINDOWPOS_CENTERED,
                                       SDL_WINDOWPOS_CENTERED, 256 * scale, 384 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_RenderSetLogicalSize(ren, 256, 384);
    SDL_Texture *tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING, 256, 384);
    uint32_t keys = 0, last = ~0u;
    pid_t parent = getppid();
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) { shm->quit = 1; audio_report(); return 0; }
            if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_F11) {
                scale = scale % 3 + 1;
                SDL_SetWindowSize(win, 256 * scale, 384 * scale);
            }
            if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_m && !e.key.repeat) sMute = !sMute;
            if (e.type == SDL_KEYDOWN) keys |= key_bit(e.key.keysym.sym);
            if (e.type == SDL_KEYUP) keys &= ~key_bit(e.key.keysym.sym);
            if (e.type == SDL_MOUSEBUTTONDOWN || e.type == SDL_MOUSEBUTTONUP || e.type == SDL_MOUSEMOTION) {
                int x = e.type == SDL_MOUSEMOTION ? e.motion.x : e.button.x;
                int y = e.type == SDL_MOUSEMOTION ? e.motion.y : e.button.y;
                uint32_t held = e.type == SDL_MOUSEMOTION ? (e.motion.state & SDL_BUTTON_LMASK) != 0
                                                          : e.type == SDL_MOUSEBUTTONDOWN;
                // logical coordinates (SDL_RenderSetLogicalSize maps the mouse)
                if (y >= 192 && y < 384 && x >= 0 && x < 256 && held) {
                    shm->touch_x = x;
                    shm->touch_y = y - 192;
                    shm->touch_down = 1;
                } else if (!held || y < 192) {
                    shm->touch_down = 0;
                }
            }
        }
        shm->keys = keys;
        if (shm->frame != last) {
            last = shm->frame;
            SDL_UpdateTexture(tex, 0, shm->pixels, 256 * 4);
        }
        SDL_RenderClear(ren);
        SDL_RenderCopy(ren, tex, 0, 0);
        SDL_RenderPresent(ren);
        if (getppid() != parent) { audio_report(); return 0; }  // the game is gone
    }
}

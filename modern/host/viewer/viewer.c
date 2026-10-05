// acww-viewer: shows the host build's screens (64-bit, SDL2) and sends the input back through shared memory
// (modern/host/frontend.h). Started by the game; argument: the shared memory name.
//
// Keys: arrows = D-pad, X = A, Z = B, S = X, A = Y, Q = L, W = R, Enter = Start, Right Shift = Select.
// Mouse on the bottom screen = touch. F11: window size 1x/2x/3x.

#include <SDL2/SDL.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

#include "../frontend.h"

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
    int scale = 2;
    SDL_Window *win = SDL_CreateWindow("Animal Crossing: Wild World (native)", SDL_WINDOWPOS_CENTERED,
                                       SDL_WINDOWPOS_CENTERED, 256 * scale, 384 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_RenderSetLogicalSize(ren, 256, 384);
    SDL_Texture *tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING, 256, 384);
    uint32_t keys = 0, last = ~0u;
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) { shm->quit = 1; return 0; }
            if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_F11) {
                scale = scale % 3 + 1;
                SDL_SetWindowSize(win, 256 * scale, 384 * scale);
            }
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
        if (kill(getppid(), 0) != 0) return 0;  // the game is gone
    }
}

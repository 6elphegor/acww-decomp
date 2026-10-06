// Host build: the game's side of the frontend. Frames go to a shared memory block that the viewer
// (modern/host/viewer/viewer.c, a 64-bit SDL program) shows; the viewer writes keys and the touch position back.
// The viewer is started here unless ACWW_HEADLESS is set (or there is no display, or it can't be found).

#define _GNU_SOURCE
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#include "frontend.h"
#include "host.h"

static AcwwShm *sShm;
static char sName[64];

const u32 *melon_screen(int screen);

void frontend_init(const char *argv0) {
    if (getenv("ACWW_HEADLESS") || (!getenv("DISPLAY") && !getenv("WAYLAND_DISPLAY"))) return;
    snprintf(sName, sizeof sName, "%s-%d", ACWW_SHM_NAME_DEFAULT, (int)getpid());
    int fd = shm_open(sName, O_RDWR | O_CREAT | O_TRUNC, 0600);
    if (fd < 0 || ftruncate(fd, sizeof(AcwwShm)) < 0) { perror("frontend: shm"); return; }
    sShm = mmap(0, sizeof(AcwwShm), PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    close(fd);
    if (sShm == MAP_FAILED) { sShm = 0; return; }
    memset(sShm, 0, sizeof *sShm);
    sShm->magic = ACWW_SHM_MAGIC;
    // the viewer: ACWW_VIEWER, or acww-viewer next to this program
    char viewer[1024];
    const char *v = getenv("ACWW_VIEWER");
    if (v) snprintf(viewer, sizeof viewer, "%s", v);
    else {
        snprintf(viewer, sizeof viewer, "%s", argv0);
        char *slash = strrchr(viewer, '/');
        snprintf(slash ? slash + 1 : viewer, sizeof viewer - (slash ? slash + 1 - viewer : 0), "acww-viewer");
    }
    pid_t pid = fork();
    if (pid == 0) {
        // the viewer is a 64-bit program: drop the 32-bit sysroot's library path
        unsetenv("LD_LIBRARY_PATH");
        execl(viewer, viewer, sName, (char *)0);
        perror(viewer);
        _exit(1);
    }
}

int frontend_touch(int *x, int *y);

// scripted keys for headless runs: ACWW_KEYS="frame:frames:mask;..." (mask: the bits of AcwwShm.keys, hex)
static u32 scripted_keys(void) {
    static const char *spec;
    if (!spec) spec = getenv("ACWW_KEYS") ? getenv("ACWW_KEYS") : "";
    u32 f = (u32)host_frame(), k = 0;
    for (const char *p = spec; *p;) {
        unsigned fr, n, m;
        if (sscanf(p, "%u:%u:%x", &fr, &n, &m) == 3 && f >= fr && f < fr + n) k |= m;
        p = strchr(p, ';');
        if (!p) break;
        p++;
    }
    return k;
}

// at each VBlank: publish the frame, take the input
void frontend_frame(void) {
    u16 keyinput = 0x3ff;  // KEYINPUT: released bits are 1
    // the ARM7's button word (0x027fffa8), OR-ed into KEYINPUT by PAD_Read: X bit 10, Y bit 11, debug bit 13
    // (released = 1); bit 15 clear = not folded
    u16 xy = 0x2c00;
    if (sShm) {
        for (int s = 0; s < 2; s++) memcpy(sShm->pixels + s * 256 * 192, melon_screen(s), 256 * 192 * 4);
        __sync_synchronize();
        sShm->frame++;
        if (sShm->quit) exit(0);
        u32 k = sShm->keys;
        keyinput = (u16)(~k & 0x3ff);
        xy = (u16)(0x2000 | (~k & 0x0c00));
    }
    u32 sk = scripted_keys();
    keyinput &= (u16)~(sk & 0x3ff);
    xy &= (u16)~(sk & 0x0c00);
    *(u16 *)host_io(0x04000130) = keyinput;
    extern int melon_emu7(void);
    extern void melon_input(u32 keys, int touch, int x, int y);
    extern int host_scripted_touch(int *x, int *y);
    if (melon_emu7()) {
        // the ARM7 writes the X/Y word and samples the touch screen itself
        int tx = 0, ty = 0, t = frontend_touch(&tx, &ty) || host_scripted_touch(&tx, &ty);
        melon_input((u32)(~keyinput & 0x3ff) | ((u32)(~xy >> 10) & 3) << 10, t, tx, ty);
    } else {
        *(volatile u16 *)0x027fffa8 = xy;
    }
}

// for the touch panel service (pxi7.c) and melonDS: the viewer's mouse on the bottom screen
int frontend_touch(int *x, int *y) {
    if (!sShm || !sShm->touch_down) return 0;
    *x = sShm->touch_x;
    *y = sShm->touch_y;
    return 1;
}

void frontend_shutdown(void) {
    if (sName[0]) shm_unlink(sName);
}

// Host build: loading an overlay resets its variables, as the DS does.
//
// On the DS, loading an overlay (FS_LoadOverlayImage + FS_StartOverlay) reads a fresh copy of its code and
// initialised data from the ROM, clears its bss and runs its static constructors. The host has every overlay linked
// into the program, each one's data, bss and constructors in ranges of their own (tools/host_order.py), so loading
// overlay N copies N's data back from a copy taken at start-up, clears N's bss and runs N's constructors (they don't
// run at start-up: they aren't in .init_array). Overlays that share an address range on the DS each keep their own
// variables here; each one is reset when it is loaded. ACWW_OVLOG=1 lists the loads.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "host.h"
#include "overlay.h"

static char **sPristine;  // per table entry: the data as linked
static unsigned char *sKeep;  // per table entry: not reset (ACWW_OVRESET)
static int sLog;

// ACWW_OVRESET=0 (for comparisons): the earlier behaviour - every overlay's constructors once at start-up, nothing
// reset on loads; ACWW_OVRESET=-5,9: that for the overlays listed only
static void parse_keep(void) {
    const char *e = getenv("ACWW_OVRESET");
    sKeep = calloc(gHostOverlayCount, 1);
    if (!sKeep) host_fatal("overlay data copy");
    if (!e) return;
    if (!strcmp(e, "0")) {
        memset(sKeep, 1, gHostOverlayCount);
        return;
    }
    if (*e != '-') return;
    for (const char *p = e + 1; *p;) {
        char *q;
        unsigned long id = strtoul(p, &q, 10);
        if (q == p) break;
        for (unsigned i = 0; i < gHostOverlayCount; i++) {
            if (gHostOverlays[i].id == id) sKeep[i] = 1;
        }
        p = *q == ',' ? q + 1 : q;
    }
}

__attribute__((constructor)) static void overlay_keep_ctors(void) {
    for (unsigned i = 0; i < gHostOverlayCount; i++) {
        if (!sKeep[i]) continue;
        for (HostOverlayCtor *c = gHostOverlays[i].init; c < gHostOverlays[i].initEnd; c++) {
            if (*c) (*c)();
        }
    }
}

// before the game's static constructors (the main program's may write to anything)
__attribute__((constructor(101))) static void overlay_snapshot(void) {
    sLog = getenv("ACWW_OVLOG") != NULL;
    parse_keep();
    sPristine = calloc(gHostOverlayCount, sizeof *sPristine);
    if (!sPristine) host_fatal("overlay data copy");
    size_t total = 0;
    for (unsigned i = 0; i < gHostOverlayCount; i++) {
        const HostOverlayRanges *o = &gHostOverlays[i];
        size_t n = (size_t)(o->dataEnd - o->data);
        total += n;
        if (n == 0) continue;
        sPristine[i] = malloc(n);
        if (!sPristine[i]) host_fatal("overlay data copy");
        memcpy(sPristine[i], o->data, n);
    }
    if (sLog) fprintf(stderr, "overlays: %u, %zu bytes of data kept\n", gHostOverlayCount, total);
}

void HostOverlay_Load(unsigned id) {
    for (unsigned i = 0; i < gHostOverlayCount; i++) {
        const HostOverlayRanges *o = &gHostOverlays[i];
        if (o->id != id || sKeep[i]) continue;
        if (sLog) {
            // what the reset undoes: data bytes changed since start-up, bss bytes not zero (the first of each)
            size_t nd = 0, nb = 0, fd = 0, fb = 0;
            for (char *p = o->data; p < o->dataEnd; p++) {
                if (*p != sPristine[i][p - o->data] && !nd++) fd = (size_t)(p - o->data);
            }
            for (char *p = o->bss; p < o->bssEnd; p++) {
                if (*p && !nb++) fb = (size_t)(p - o->bss);
            }
            fprintf(stderr, "frame %llu: overlay %u loaded: data %p+%#zx (%zu bytes changed, first at %p), bss "
                    "%p+%#zx (%zu bytes not zero, first at %p), %zu constructors\n",
                    (unsigned long long)host_frame(), id, (void *)o->data, (size_t)(o->dataEnd - o->data), nd,
                    (void *)(o->data + fd), (void *)o->bss, (size_t)(o->bssEnd - o->bss), nb, (void *)(o->bss + fb),
                    (size_t)(o->initEnd - o->init));
        }
        if (o->dataEnd > o->data) memcpy(o->data, sPristine[i], (size_t)(o->dataEnd - o->data));
        memset(o->bss, 0, (size_t)(o->bssEnd - o->bss));
        for (HostOverlayCtor *c = o->init; c < o->initEnd; c++) {
            if (*c) (*c)();
        }
        return;
    }
}

#ifndef GFX_SPLREAL_H
#define GFX_SPLREAL_H

// The SPL particle runtime's objects by their real members (NitroSystem's SPLManager / SPLEmitter / SPLParticle as
// pokeheartgold's include/library/spl_*.h describe them, with this game's two-word lists): the pointers typed, the
// other bytes as ranges. On the DS they are the sizes the code allocates (0x3c, 0x84, 0x44, 0x20, 0x14, 8); on
// 64-bit hosts the pointers make them larger. The many partial views of the SPL units (include/gfx/Spl*.h,
// EffectSplEmitter.h) take their 64-bit layouts from these (tools/host_view_layout.py).

#include "types.h"
#include "uptr.h"

struct SplRealParticle;
struct SplRealEmitter;

// a list: first node and count
struct SplRealPtclList {
    SplRealParticle *head;   // 0x00
    s32 count;               // 0x04
};
struct SplRealEmtList {
    SplRealEmitter *head;    // 0x00
    s32 count;               // 0x04
};

// SPLParticle (0x44)
struct SplRealParticle {
    SplRealParticle *next;   // 0x00
    SplRealParticle *prev;   // 0x04
    u8 body[0x3c];           // 0x08: position, velocity, rotation, life, scale, colour, alpha, emitter position ...
};

// SPLEmitter (0x84)
struct SplRealEmitter {
    SplRealEmitter *next;            // 0x00
    SplRealEmitter *prev;            // 0x04
    SplRealPtclList particles;       // 0x08
    SplRealPtclList childParticles;  // 0x10
    void *resource;                  // 0x18
    u8 body[0x5c];                   // 0x1c: state, position, velocity, axis, radius ... generation counters
    void (*callback)(SplRealEmitter *, u32);  // 0x78
    void *userData;                  // 0x7c
    u32 w80;                         // 0x80
};

// a resource's resolved blocks (Pool32 / RU, 0x20)
struct SplRealRes {
    void *hdr;                       // 0x00
    void *blk[6];                    // 0x04 .. 0x18: the optional animation blocks, the field handlers
    u16 numFields;                   // 0x1c
};

// a texture entry (TexEnt, 0x14)
struct SplRealTex {
    void *data;                      // 0x00
    u32 w4, w8, w12;                 // 0x04: VRAM keys
    u16 h16, h18;                    // 0x10
};

// a field handler entry (Item8, 8)
struct SplRealField {
    void *fn;                        // 0x00
    void *params;                    // 0x04
};

// SPLManager (0x3c)
struct SplRealManager {
    void *(*alloc)(u32);             // 0x00
    SplRealEmtList active;           // 0x04
    SplRealEmtList freeEmitters;     // 0x0c
    SplRealPtclList freeParticles;   // 0x14
    SplRealRes *res;                 // 0x1c
    SplRealTex *tex;                 // 0x20
    u16 numRes, numTex;              // 0x24
    u16 maxEmitters, maxParticles;   // 0x28
    u32 polyIds;                     // 0x2c
    u32 w30;                         // 0x30
    SplRealEmitter *cur;             // 0x34
    void *mtx;                       // 0x38
};

// (the types in every unit's debug information: tools/host_view_layout.py maps the views from them)
static struct {
    SplRealManager *m; SplRealEmitter *e; SplRealParticle *p; SplRealRes *r; SplRealTex *t; SplRealField *f;
} sSplRealTypes __attribute__((used, unused));

// the sizes the SPL code allocates (the DS's on the DS)
#define SPL_MANAGER_SIZE HOST_SIZED(0x3c, SplRealManager)
#define SPL_EMITTER_SIZE HOST_SIZED(0x84, SplRealEmitter)
#define SPL_PARTICLE_SIZE HOST_SIZED(0x44, SplRealParticle)
#define SPL_RES_SIZE HOST_SIZED(0x20, SplRealRes)
#define SPL_TEX_SIZE HOST_SIZED(0x14, SplRealTex)
#define SPL_FIELD_SIZE HOST_SIZED(8, SplRealField)

#endif

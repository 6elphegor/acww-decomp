#ifndef GFX_SPLPARTICLEVIEWS_H
#define GFX_SPLPARTICLEVIEWS_H

// SPL particle resource records (per-particle animation records, field parameters) and the animation context, as seen
// by src/autoload_2/unk_020fc984.cpp (particle generator / field handlers) and unk_020fe5c0.cpp.
#include "types.h"

struct Hdr;
struct Tab;
struct SclRec;

struct AnimRec {
    s16 s0, s2, s4;
    u8 t1, t2;
};

struct ColRec {
    u16 c0;
    u16 c2;
    u8 b4, b5, b6, b7;
    u16 f0 : 1;
    u16 f1 : 1;
    u16 f2 : 1;
    u16 frest : 13;
};

struct Col5 {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

struct AlphaRec {
    Col5 c;
    u8 b2;
    u8 p3;
    u8 t1, t2;
};

struct Ctx {
    Hdr *hdr;
    AnimRec *rec4;
    ColRec *rec8;
    AlphaRec *recc;
    Tab *rec10;
    SclRec *rec14;
};

struct CollF { s32 y; s16 coef; u16 type : 2; u16 rest : 14; };
struct ConvF { s32 x, y, z; s16 coef; };

#endif

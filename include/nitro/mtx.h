#ifndef NITRO_MTX_H
#define NITRO_MTX_H

// NitroSDK fx32 3x3 matrix (fx/fx_mtx33.c, itcm 0x01ff8000-0x01ffc538 and the SPL particle units in autoload_2).
// Self-contained (no types.h): the itcm C units define s32 as `signed long` and fx32 must stay `long` there.
// The union carries the spellings the units use: _00.._22, a[9] (and the SDK's m[3][3]).

typedef signed long fx32;

typedef union MtxFx33 {
    struct {
        /* 0x00 */ fx32 _00, _01, _02;
        /* 0x0c */ fx32 _10, _11, _12;
        /* 0x18 */ fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;

#endif

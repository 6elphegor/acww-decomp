#ifndef NITRO_GXOAM_H
#define NITRO_GXOAM_H

#include "types.h"

// NitroSDK GXOamAttr (nitro/gx/g2_oam.h; layout as in pret pokeheartgold): one 8-byte OAM entry, attr0/attr1 as one
// word or as halves / bitfields, then attr2 (char name, priority, palette) and the affine parameter slot _3.
// Users: main's OAM shadow buffers and the sprite cell walkers Oam_DrawCell / Oam_DrawObjRotated
// (src/main/unk_02087e70.cpp; a cell is an array of entries, _3 == 0xffff marks the last one), the ov002 menu button
// cell tables sButtonCells* (MenuTextButton::cells), and the OBJ entries the ov001 Wi-Fi utility gets from
// WfcObj_CreateSingle, and NNS_G2dArrangeOBJ1D (src/autoload_2/unk_02101de8.c).
// The bitfield struct of the second half comes first so that aggregate initializers fill attr01, then
// charNo / priority / cParam / _2 (the cell tables are written that way).
typedef struct GXOamAttr GXOamAttr;
struct GXOamAttr {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {
            u32 y : 8;
            u32 rsMode : 2;
            u32 objMode : 2;
            u32 mosaic : 1;
            u32 colorMode : 1;
            u32 shape : 2;

            u32 x : 9;
            u32 rsParam : 5;
            u32 size : 2;
        };
        struct {
            u32 _0 : 28;
            u32 flipH : 1;
            u32 flipV : 1;
            u32 _1 : 2;
        };
    };
    union {
        struct {
            u32 charNo : 10;
            u32 priority : 2;
            u32 cParam : 4;
            u32 _2 : 16;
        };
        struct {
            u16 attr2;
            u16 _3;
        };
        u32 attr23;
    };
};

#endif

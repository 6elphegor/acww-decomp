#ifndef GFX_BGMODELCACHE_H
#define GFX_BGMODELCACHE_H

// Background (acre) model cache: 31 acre model slots, 9 collision (bcl) slots and the ground/river animation
// resources. Methods in src/main/unk_02036c58.cpp; also used by src/main/unk_02034438.cpp.
#include "types.h"

struct BgAcreModel {
    /* 0x00 */ s32 acreId;
    /* 0x04 */ void *arc;
    /* 0x08 */ void *mdl;
    /* 0x0c */ void *bcl;
    /* 0x10 */ void *bsd;
    /* 0x14 */ void *jntAnm;
    /* 0x18 */ void *matAnm;
    /* 0x1c */ void *texSrtAnm;
    /* 0x20 */ void *tex;
    /* 0x24 */ u8 unk_24[4];
    /* 0x28 */ void *mgt;
    /* 0x2c */ s32 mgtCount;
};

struct BgAcreBcl {
    /* 0x0 */ s32 acreId;
    /* 0x4 */ void *bcl;
};

struct BgModelCache {
    /* 0x000 */ BgAcreModel acres[31];
    /* 0x5d0 */ BgAcreBcl bclCache[9];
    /* 0x618 */ u8 withAnims;
    /* 0x619 */ u8 pad_619[3];
    /* 0x61c */ s32 heapSize;
    /* 0x620 */ u8 pad_620[0x10];
    /* 0x630 */ s32 groundTex;
    /* 0x634 */ s32 groundMatAnm;
    /* 0x638 */ s32 groundTexSrtAnm;
    /* 0x63c */ s32 riverPatAnm;
    /* 0x640 */ s32 riverPatTex;
    /* 0x644 */ s32 beBPatAnm;
    /* 0x648 */ s32 beBPatTex;

    s32 getBeBPatTex();
    s32 getBeBPatAnm();
    s32 getRiverPatTex();
    s32 getRiverPatAnm();
    s32 getGroundTexSrtAnm();
    s32 getGroundMatAnm();
    s32 getGroundTex();
    BOOL reset();
    BgAcreModel *getAcre(s32 id);
    void *getAcreBcl(s32 id);
    void loadGroundAnims();
    void loadGroundTexture();
};

#endif

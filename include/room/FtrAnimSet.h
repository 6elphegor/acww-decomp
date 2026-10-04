#ifndef ROOM_FTRANIMSET_H
#define ROOM_FTRANIMSET_H

#include "types.h"

struct NNSG3dResAnmCommon;

// Five pairs of furniture animation resources (bca / bma / bva / bta / btp) plus the texture-copy flag.
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02206380-0x02206432).
struct FtrAnimSet {
    inline FtrAnimSet() { clear(); }
    ~FtrAnimSet();
    s32 getTexCopy();
    NNSG3dResAnmCommon *getBtp(u32 i);
    NNSG3dResAnmCommon *getBta(u32 i);
    NNSG3dResAnmCommon *getBva(u32 i);
    NNSG3dResAnmCommon *getBma(u32 i);
    NNSG3dResAnmCommon *getBca(u32 i);
    void setTexCopy(s32 v);
    void setBtp(void *v, u32 i);
    void setBta(void *v, u32 i);
    void setBva(void *v, u32 i);
    void setBma(void *v, u32 i);
    void setBca(void *v, u32 i);
    void clear();

    /* 0x00 */ void *bca[2];
    /* 0x08 */ void *bma[2];
    /* 0x10 */ void *bva[2];
    /* 0x18 */ void *bta[2];
    /* 0x20 */ void *btp[2];
    /* 0x28 */ s32 texCopy;
};

#endif // ROOM_FTRANIMSET_H

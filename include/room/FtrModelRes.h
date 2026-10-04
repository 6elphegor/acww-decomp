#ifndef ROOM_FTRMODELRES_H
#define ROOM_FTRMODELRES_H

// Furniture model loader: texture / archive files, the ModelResource and the animation set of one item. Methods at
// 0x022069ec..0x02206e0c in ov004 (unit src/ov004/unk_ov004_02204f24.cpp); Unk_ov004_02206e38 is the same object seen
// through its ctor (0x02206e38) / dtor (0x02206e1c), which carry the address name in symbols.txt.
#include "types.h"
#include "gfx/ModelResource.h"
#include "room/FtrAnimSet.h"

struct FtrModelRes {
    /* 0x00 */ void *texFile;
    /* 0x04 */ void *arcFile;
    /* 0x08 */ void *model;
    /* 0x0c */ void *texture;
    /* 0x10 */ ModelResource texLoader;
    /* 0x44 */ FtrAnimSet animSet;
    /* 0x70 */ u16 item;
    /* 0x72 */ u8 keepTexCopy;

    void release();
    void *getTexture();
    void *getModel();
    BOOL loadAsync(void *obj, s32 a, s32 flag);
    BOOL loadSync(void *obj, s32 a, s32 flag);
    void freeTexFile();
    FtrAnimSet *getAnimSet();
    BOOL loadFiles(void *obj, s32 id);
    char *makeTexPath(s32 id);
    char *makeArcPath(s32 id);
    BOOL isLoaded();
};

struct Unk_ov004_02206e38 {
    Unk_ov004_02206e38();
    ~Unk_ov004_02206e38();
    /* 0x00 */ u32 texFile;
    /* 0x04 */ u32 arcFile;
    /* 0x08 */ u32 model;
    /* 0x0c */ u32 texture;
    /* 0x10 */ ModelResource texLoader;
    /* 0x44 */ FtrAnimSet animSet;
    /* 0x70 */ u16 item;
    /* 0x72 */ u8 keepTexCopy;
};

#endif

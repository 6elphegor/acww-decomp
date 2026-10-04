#ifndef ROOM_FTRMODELRES_H
#define ROOM_FTRMODELRES_H

// Furniture model loader: texture / archive files, the ModelResource and the animation set of one item. Methods at
// 0x022069ec..0x02206e38 in ov004 (unit src/ov004/unk_ov004_02204f24.cpp; ctor 0x02206e38, dtor 0x02206e1c). FtrActor
// holds it as raw bytes (modelRes at 0x6c8) and calls the ctor/dtor through their symbols.
#include "types.h"
#include "gfx/ModelResource.h"
#include "room/FtrAnimSet.h"

struct FtrModelRes {
    FtrModelRes();
    ~FtrModelRes();
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

#endif

#ifndef TOWN_SCENEMAPMODULE_H
#define TOWN_SCENEMAPMODULE_H

#include "types.h"
#include "sys/ProcBase.h"

// Game process that builds the scene block map and owns its layout grids (vtable 0x020da3cc). Defined in
// src/main/unk_0204c50c.cpp; the destructor is implicit there (D1/D0 at the start of that unit).

class SceneMapModule : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x50 */ u16 moduleParam;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *ownedGrids;
    /* 0x58 */ s32 numOwnedGrids;

    s32 buildSceneMap(void *heap);
    void getHouseUnk(u32 *out, s32 n);
    void setOwnedGrid(u32 v, s32 idx);
    void freeOwnedGrids(void *heap);
    void allocOwnedGrids(void *heap);
    u32 *buildEntries(u32 *src, s32 n, void *heap);
    u32 loadLayoutGrid(u32 v, s32 idx, void *heap);
};

#endif

#ifndef FIELD_FIELDSTRUCTUREMGR_H
#define FIELD_FIELDSTRUCTUREMGR_H

#include "types.h"
#include "sys/ProcBase.h"

struct NNSG3dResTex;

// The field's structure manager process (house models, scene 0x022324ec) and the three static texture / model sets it
// loads; defined in src/ov003/unk_ov003_022187fc.cpp. The running manager is registered with
// FieldStructureMgr_Register (src/main/unk_020b0e60.cpp) and reached through FieldStructureMgr_Get.
class FieldStructureMgr : public GameProc {
public:
    FieldStructureMgr();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FieldStructureMgr();
};

// the player houses' texture (sPlayerHouseTex, 4 bytes on the DS); PlayerHouseTex_Get (src/ov003/unk_ov003_022187f8.cpp)
class PlayerHouseTex {
public:
    PlayerHouseTex();
    ~PlayerHouseTex();
    NNSG3dResTex *tex;
};

// the lit-up house decoration (sHouseLightUpDeco, 0x20 bytes on the DS): the event's models, texture and texture pattern
class HouseLightUpDeco {
public:
    HouseLightUpDeco();
    ~HouseLightUpDeco();
    /* 0x00 */ NNSG3dResTex *tex;
    /* 0x04 */ void *models[5];
    /* 0x18 */ void *texPattern;
    /* 0x1c */ u8 isLoaded;
};

// the villager houses' textures (sVillagerHouseTex, 0x28 bytes on the DS) and the door animations
class VillagerHouseTex {
public:
    VillagerHouseTex();
    ~VillagerHouseTex();
    /* 0x00 */ NNSG3dResTex *houseTextures[4];
    /* 0x10 */ NNSG3dResTex *lightTextures[4];
    /* 0x20 */ void *doorInAnim;
    /* 0x24 */ void *doorOutAnim;
};

#endif

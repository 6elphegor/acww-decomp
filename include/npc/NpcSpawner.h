#ifndef NPC_NPCSPAWNER_H
#define NPC_NPCSPAWNER_H

#include "types.h"
#include "sys/ProcBase.h"
#include "room/RoomFreeUnitMap.h"

struct VisitorSpawnEntry;

// Proc that spawns the villagers, visitors and house owner of the current scene (vtable 0x020e09a4, 0x78 bytes).
// Defined in src/main/unk_02082d74.cpp; the destructor is implicit (D1/D0 at 0x02082d74).
class NpcSpawner : public GameProc {
public:
    NpcSpawner() {}
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();

    // the visitors (special NPCs) of the scene
    BOOL pickVisitor();
    u16 *spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n);
    void setVisitorOverlay(u32 *p);
    void clearVisitorOverlay();
    void releaseVisitorOverlay();

    /* 0x50 */ RoomFreeUnitMap freeUnitMap;
    /* 0x70 */ u8 visitorOverlayLoaded;   // the spawned visitor's overlay is held
    /* 0x74 */ u32 visitorOverlayId;
};

#endif

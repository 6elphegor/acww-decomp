#ifndef NPC_NPCSPAWNER_H
#define NPC_NPCSPAWNER_H

#include "types.h"
#include "sys/ProcBase.h"
#include "room/RoomFreeUnitMap.h"

// Proc that spawns the villagers, visitors and house owner of the current scene (vtable 0x020e09a4, 0x78 bytes).
// Defined in src/main/unk_02082d74.cpp; the destructor is implicit (D1/D0 at 0x02082d74).
class NpcSpawner : public GameProc {
public:
    NpcSpawner() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    /* 0x50 */ RoomFreeUnitMap freeUnitMap;
    /* 0x70 */ u8 unk_freeUnitMapTail[8]; // 8 more bytes of NpcSpawner after the 0x20-byte map
};

#endif

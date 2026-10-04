#ifndef GAME_SCENEINFO_H
#define GAME_SCENEINFO_H

#include "types.h"
#include "town/SceneMapInfo.h"

struct SceneWarp;

// Map-scene description records. Every map-scene overlay (ov005-ov044) defines one SceneInfo with its spawn list, map
// grid and warp list; main's sSceneInfoTable (src/main/unk_020b4828.cpp) points to them and gCurSceneInfo is the
// current one. The spawn list is run by SceneInfo::runSpawnList (src/main/unk_020af514.cpp).

// 20-byte record of a spawn group: kind 0 = actor spawn, kind 1 = player spawn (ScenePlayerSpawn, unk_020af514.cpp).
struct SceneSpawnRecord {
    /* 0x00 */ u32 w[5];
};

// One group of a scene's spawn list; kind indexes sSceneSpawnGroupHandlers: 0 = actors (SceneSpawnGroup_SpawnActors,
// 20-byte records), 1 = players and camera (ScenePlayerSpawn records), 2 = processes ({u16 profile, u16 param} words,
// createProcs).
class SceneSpawnGroup {
public:
    BOOL createProcs(u8 *idx, u64 start);
    BOOL spawnPlayersAndCamera(u8 *idx, u32 lo, u32 hi);

    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 count;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ void *list;
};

class SceneSpawnList {
public:
    BOOL run(u8 *entryIdx, u8 *subIdx, u64 start);

    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ SceneSpawnGroup *groups;
};

// Static map objects (warps / doors) of the scene.
struct SceneWarpList {
    /* 0x00 */ SceneWarp *warps;
    /* 0x04 */ u32 count;
};

class SceneInfo {
public:
    BOOL runSpawnList(u8 *entryIdx, u8 *subIdx, u64 start);
    void createSceneMapModule();

    /* 0x00 */ SceneSpawnList *spawnList;
    /* 0x04 */ s32 isOutdoor;
    /* 0x08 */ SceneMapInfo *mapInfo;
    /* 0x0c */ SceneWarpList *warps;
    /* 0x10 */ s32 infoOverlayA;   // overlays acquired by FieldScene_AcquireInfoOverlays (-1 = none)
    /* 0x14 */ s32 infoOverlayB;
};

#endif

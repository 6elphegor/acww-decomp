#ifndef PROTO_PROTO_OV004_UNK_OV004_02213B90_H
#define PROTO_PROTO_OV004_UNK_OV004_02213B90_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02213b90.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "room/MuseumExhibitInfo.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitMsgFile
extern char sMuseumExhibitMsgFile[];
#endif
#ifndef PROTO_LOCAL_MuseumExhibitInfo_SpawnAutoTalk
void *MuseumExhibitInfo_SpawnAutoTalk();
#endif
#ifndef PROTO_LOCAL_MuseumExhibitInfo_ClearRegistry
void MuseumExhibitInfo_ClearRegistry(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sMuseumExhibitSpawnMsg
extern s16 sMuseumExhibitSpawnMsg;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitAutoTalkActive
extern u8 sMuseumExhibitAutoTalkActive;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitInfoCount
extern u8 sMuseumExhibitInfoCount;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitSpawnKind
extern u32 sMuseumExhibitSpawnKind;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitSpawnList
extern u8 *sMuseumExhibitSpawnList;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitSpawnCount
extern u32 sMuseumExhibitSpawnCount;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitSpawnFacingArc
extern u32 sMuseumExhibitSpawnFacingArc;
#endif
#ifndef PROTO_LOCAL_sMuseumExhibitInfos
extern MuseumExhibitInfo *sMuseumExhibitInfos[0x20];
#endif
#ifndef PROTO_LOCAL_MuseumExhibitInfo_Spawn
void MuseumExhibitInfo_Spawn(s32 a, void *b, s32 c, s32 d, s16 e, u8 *f, s32 g);
#endif
#ifndef PROTO_LOCAL_MuseumExhibitInfo_GetByIndex
void *MuseumExhibitInfo_GetByIndex(s32 i);
#endif
#ifndef PROTO_LOCAL_MuseumExhibitInfo_Create
MuseumExhibitInfo *MuseumExhibitInfo_Create(void);
#endif
}
#endif

#endif

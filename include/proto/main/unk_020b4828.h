#ifndef PROTO_PROTO_MAIN_UNK_020B4828_H
#define PROTO_PROTO_MAIN_UNK_020B4828_H

// Prototypes of the functions defined in src/main/unk_020b4828.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "game/SceneWarp.h"
#include "game/TouchPicker.h"
#include "gfx/VecFx32.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Scene_GetTouchPicker
TouchPicker *Scene_GetTouchPicker();
#endif
#ifndef PROTO_LOCAL_SceneWarp_RequestScene
BOOL SceneWarp_RequestScene(SceneWarp* e, u8 id);
#endif
#ifndef PROTO_LOCAL_SceneWarp_RequestFade
BOOL SceneWarp_RequestFade(SceneWarp* e, u8 id, u8 p, u8 q);
#endif
#ifndef PROTO_LOCAL_SceneWarp_RequestAt
BOOL SceneWarp_RequestAt(SceneWarp* e, u8 id, VecFx32* v, u32 w, s16 s, u8 p, u8 q);
#endif
#ifndef PROTO_LOCAL_SceneExit_ResolveSpecial
s32 SceneExit_ResolveSpecial(SceneWarp *a, s32 id, u8* type, VecFx32* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q);
#endif
#ifndef PROTO_LOCAL_SceneExit_Resolve
s32 SceneExit_Resolve(SceneWarp *a, s32 id, u8* type, VecFx32* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy);
#endif
#ifndef PROTO_LOCAL_SceneWarp_RequestExit
BOOL SceneWarp_RequestExit(SceneWarp *a, s32 id);
#endif
#ifndef PROTO_LOCAL_SceneExit_GetDoor
BOOL SceneExit_GetDoor(SceneWarp *unused, s32 id, u32* type, s16* s);
#endif
#ifndef PROTO_LOCAL_SceneExit_SnapPos
BOOL SceneExit_SnapPos(SceneWarp *a, s32 id, VecFx32* out, VecFx32* in);
#endif
#ifndef PROTO_LOCAL_Scene_SetSavedPos
BOOL Scene_SetSavedPos(SceneWarp *unused, s32 id, VecFx32* pos, u32 w, s16 s, s32 p, s32 q);
#endif
#ifndef PROTO_LOCAL_Scene_SavePlayerPos
void Scene_SavePlayerPos(SceneWarp *unused, s32 add);
#endif
#ifndef PROTO_LOCAL_Scene_SetTownReturnPos
BOOL Scene_SetTownReturnPos(SceneWarp *unused, s32 id, VecFx32* pos, u32 w, s16 s, s32 p, s32 q);
#endif
#ifndef PROTO_LOCAL_Scene_ResetTownReturnPos
void Scene_ResetTownReturnPos(SceneWarp *unused);
#endif
#ifndef PROTO_LOCAL_SceneWarp_Clear
void SceneWarp_Clear(SceneWarp *e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetScene
u8 SceneWarp_GetScene(SceneWarp *e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetPos
VecFx32* SceneWarp_GetPos(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetAngle
s32 SceneWarp_GetAngle(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetSpawnParam
u32 SceneWarp_GetSpawnParam(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_HasNoPos
BOOL SceneWarp_HasNoPos(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetFadeOut
u8 SceneWarp_GetFadeOut(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_SceneWarp_GetFadeIn
u8 SceneWarp_GetFadeIn(SceneWarp* e);
#endif
#ifndef PROTO_LOCAL_Scene_GetWarpRequest
SceneWarp *Scene_GetWarpRequest(void);
#endif
}
#endif

#endif

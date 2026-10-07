#ifndef PROTO_PROTO_OV097_UNK_0229B280_H
#define PROTO_PROTO_OV097_UNK_0229B280_H

// Prototypes of the functions defined in src/ov097/unk_0229b280.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/PocketMenu.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL__ZN10PocketMenu15actionUseCarpetEv
void _ZN10PocketMenu15actionUseCarpetEv(PocketMenu *self);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu18actionUseWallpaperEv
void _ZN10PocketMenu18actionUseWallpaperEv(PocketMenu *self);
#endif
#ifndef PROTO_LOCAL_PocketMenu_AddRoomItemOptions
void PocketMenu_AddRoomItemOptions(PocketMenu *self, s32 a);
#endif
#ifndef PROTO_LOCAL_PocketMenu_RequestDropIndoor
s32 PocketMenu_RequestDropIndoor(PocketMenu *self, s32 a);
#endif
#ifndef PROTO_LOCAL_PocketMenu_CanEditRoom
BOOL PocketMenu_CanEditRoom();
#endif
}
#endif

#endif

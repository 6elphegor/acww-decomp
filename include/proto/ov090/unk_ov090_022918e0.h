#ifndef PROTO_PROTO_OV090_UNK_OV090_022918E0_H
#define PROTO_PROTO_OV090_UNK_OV090_022918E0_H

// Prototypes of the functions defined in src/ov090/unk_ov090_022918e0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/MenuTabBar.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_MenuTabBar_Create
MenuTabBar *MenuTabBar_Create();
#endif
#ifndef PROTO_LOCAL_sTabBarOamCells
extern u32 sTabBarOamCells[32];
#endif
#ifndef PROTO_LOCAL_MenuTabBar_HitTestTouch
s32 MenuTabBar_HitTestTouch();
#endif
#ifndef PROTO_LOCAL_MenuTabBar_GetTabX
s32 MenuTabBar_GetTabX(s32 a);
#endif
#ifndef PROTO_LOCAL_MenuTabBar_PrevTab
u8 MenuTabBar_PrevTab(u8 a);
#endif
#ifndef PROTO_LOCAL_MenuTabBar_NextTab
u8 MenuTabBar_NextTab(u8 a);
#endif
#ifndef PROTO_LOCAL_MenuTabBar_TabFromX
s32 MenuTabBar_TabFromX(s32 a);
#endif
}
#ifndef PROTO_LOCAL_sTabSwitchCooldown
extern u8 sTabSwitchCooldown;
#endif
#endif

#endif

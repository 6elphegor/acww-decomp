#ifndef PROTO_PROTO_OV002_UNK_OV002_02200840_H
#define PROTO_PROTO_OV002_UNK_OV002_02200840_H

// Prototypes of the functions defined in src/ov002/unk_ov002_02200840.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/MenuProc.h"
#include "menu/MenuTween.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_MenuKeys_HasUp
BOOL MenuKeys_HasUp(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuKeys_HasDown
BOOL MenuKeys_HasDown(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuKeys_HasLeft
BOOL MenuKeys_HasLeft(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuKeys_HasRight
BOOL MenuKeys_HasRight(u32 v);
#endif
#ifndef PROTO_LOCAL__ZN9MenuTweenC2Ev
void *_ZN9MenuTweenC2Ev(MenuTween *self);
#endif
#ifndef PROTO_LOCAL__ZN8MenuProcC2Ev
void *_ZN8MenuProcC2Ev(MenuProc *self);
#endif
}
#endif

#endif

#ifndef PROTO_PROTO_MAIN_UNK_02065E88_H
#define PROTO_PROTO_MAIN_UNK_02065E88_H

// Prototypes of the functions defined in src/main/unk_02065e88.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "talk/TalkWindowState.h"
#include "types.h"
class TalkFrame;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_TalkFrame_SetupBgControl
void TalkFrame_SetupBgControl();
#endif
#ifndef PROTO_LOCAL_TalkFrame_ShowBg
void TalkFrame_ShowBg();
#endif
#ifndef PROTO_LOCAL_TalkFrame_HideBg
void TalkFrame_HideBg();
#endif
#ifndef PROTO_LOCAL_TalkWindow_CreateAll
void TalkWindow_CreateAll();
#endif
#ifndef PROTO_LOCAL_TalkWindow_DestroyAll
void TalkWindow_DestroyAll();
#endif
#ifndef PROTO_LOCAL_TalkWindow_UpdateAll
void TalkWindow_UpdateAll();
#endif
#ifndef PROTO_LOCAL_TalkWindow_DrawAll
void TalkWindow_DrawAll();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TalkFrame_FreeBuffers
void TalkFrame_FreeBuffers(TalkFrame *p);
#endif
#ifndef PROTO_LOCAL_TalkFrame_UploadBg
void TalkFrame_UploadBg(TalkFrame *p);
#endif
#ifndef PROTO_LOCAL_Talk_ColorTagToTextColor
u8 Talk_ColorTagToTextColor(u32 x);
#endif
#ifndef PROTO_LOCAL_TalkWindow_Get
TalkWindowState *TalkWindow_Get(s32 i);
#endif
#ifndef PROTO_LOCAL_Talk_IsAltTextEnabled
BOOL Talk_IsAltTextEnabled();
#endif
}
#endif

#endif

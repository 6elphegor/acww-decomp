#ifndef PROTO_PROTO_OV001_UNK_OV001_0222516C_H
#define PROTO_PROTO_OV001_UNK_OV001_0222516C_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0222516c.cpp (generated: tools/host_protos.py)

#include "types.h"
struct WfcTextCanvas;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sWfcFontPaths
extern void *sWfcFontPaths[2];
#endif
#ifndef PROTO_LOCAL_data_ov001_0222b894
extern char data_ov001_0222b894[];
#endif
#ifndef PROTO_LOCAL_data_ov001_0222b8a4
extern char data_ov001_0222b8a4[];
#endif
#ifndef PROTO_LOCAL_WfcText_Init
void WfcText_Init();
#endif
#ifndef PROTO_LOCAL_WfcText_Shutdown
void WfcText_Shutdown();
#endif
#ifndef PROTO_LOCAL_WfcText_RequestTransfer
void WfcText_RequestTransfer(void *o);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcText_CreateObjCanvas
WfcTextCanvas *WfcText_CreateObjCanvas(u32 mode, u32 w, u32 h, u32 a3, u32 *out, u32 slot);
#endif
#ifndef PROTO_LOCAL_WfcText_CreateBgCanvas
WfcTextCanvas *WfcText_CreateBgCanvas(u32 idx, u32 slot);
#endif
#ifndef PROTO_LOCAL_WfcText_BgTransferTask
void WfcText_BgTransferTask(u32 task, u8 *flag);
#endif
#ifndef PROTO_LOCAL_WfcText_DestroyBgCanvas
void WfcText_DestroyBgCanvas(u32 idx);
#endif
#ifndef PROTO_LOCAL_WfcText_DrawText
void WfcText_DrawText(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_WfcText_DrawChar
void WfcText_DrawChar(s32 a0, s32 a1, s32 a2, s32 a3, u16 a4, s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcText_DrawMonospace
void WfcText_DrawMonospace(s32 a0, s32 a1, s32 a2, s32 a3, s32 w, u16 *p, s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcText_DrawTextRect
void WfcText_DrawTextRect(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_WfcText_Clear
void WfcText_Clear(WfcTextCanvas *o, s32 a);
#endif
#ifndef PROTO_LOCAL_WfcText_ArrangeObj
void WfcText_ArrangeObj(WfcTextCanvas *o, s32 a1, s32 a2, void *h, s32 a4);
#endif
}
#endif

#endif

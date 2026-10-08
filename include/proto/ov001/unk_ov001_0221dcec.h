#ifndef PROTO_PROTO_OV001_UNK_OV001_0221DCEC_H
#define PROTO_PROTO_OV001_UNK_OV001_0221DCEC_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0221dcec.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/WfcConfigSlot.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcConfig_Init
void WfcConfig_Init();
#endif
#ifndef PROTO_LOCAL_WfcConfig_Shutdown
void WfcConfig_Shutdown();
#endif
#ifndef PROTO_LOCAL_WfcConfig_GetEdit
WfcConfigSlot *WfcConfig_GetEdit();
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditAutoIp
void WfcConfig_SetEditAutoIp(u32 v);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditAutoDns
void WfcConfig_SetEditAutoDns(u32 v);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditSsid
void WfcConfig_SetEditSsid(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditWepKey
void WfcConfig_SetEditWepKey(void *key);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditIp
void WfcConfig_SetEditIp(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditSubnetMask
void WfcConfig_SetEditSubnetMask(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditGateway
void WfcConfig_SetEditGateway(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditDns1
void WfcConfig_SetEditDns1(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_SetEditDns2
void WfcConfig_SetEditDns2(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_GetEditSsid
void WfcConfig_GetEditSsid(void *src);
#endif
#ifndef PROTO_LOCAL_WfcConfig_FormatEditIp
void WfcConfig_FormatEditIp(void *a);
#endif
#ifndef PROTO_LOCAL_WfcConfig_FormatEditSubnetMask
void WfcConfig_FormatEditSubnetMask(void *p);
#endif
#ifndef PROTO_LOCAL_WfcConfig_FormatEditGateway
void WfcConfig_FormatEditGateway(void *p);
#endif
#ifndef PROTO_LOCAL_WfcConfig_FormatEditDns1
void WfcConfig_FormatEditDns1(void *p);
#endif
#ifndef PROTO_LOCAL_WfcConfig_FormatEditDns2
void WfcConfig_FormatEditDns2(void *p);
#endif
#ifndef PROTO_LOCAL_WfcConfig_GetSlotStatus
u32 WfcConfig_GetSlotStatus(s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcConfig_BeginEdit
void WfcConfig_BeginEdit(s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcConfig_CommitEdit
void WfcConfig_CommitEdit();
#endif
#ifndef PROTO_LOCAL_WfcConfig_StoreSimpleStart
void WfcConfig_StoreSimpleStart(u8 *src);
#endif
#ifndef PROTO_LOCAL_WfcConfig_StoreAoss
void WfcConfig_StoreAoss(u8 *src);
#endif
#ifndef PROTO_LOCAL_WfcConfig_Get
WfcConfigData *WfcConfig_Get();
#endif
#ifndef PROTO_LOCAL_WfcConfig_EraseSlot
void WfcConfig_EraseSlot(s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcConfig_EraseAll
void WfcConfig_EraseAll();
#endif
#ifndef PROTO_LOCAL_WfcConfig_WriteSlot
void WfcConfig_WriteSlot(s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcUtil_ParseIpDigits
void WfcUtil_ParseIpDigits(u8 *s, u8 *out);
#endif
#ifndef PROTO_LOCAL_WfcUtil_HexDigitValue
u32 WfcUtil_HexDigitValue(u32 c);
#endif
#ifdef __cplusplus
}
#endif

#endif

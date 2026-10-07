#ifndef PROTO_PROTO_OV004_UNK_OV004_022264A0_H
#define PROTO_PROTO_OV004_UNK_OV004_022264A0_H

// Prototypes of the functions defined in src/ov004/unk_ov004_022264a0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct ObjA;
#ifdef __cplusplus
#include "types.h"
class CafeCoffeeSet;
class ObjB;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_UpdateMatrices
void CafeCoffeeSet_UpdateMatrices(void *ov);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SyncToBrewster
void CafeCoffeeSet_SyncToBrewster(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_StartEffectB
void CafeCoffeeSet_StartEffectB(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetFlagEF8
void CafeCoffeeSet_SetFlagEF8(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CafeCoffeeSet_Create
CafeCoffeeSet *CafeCoffeeSet_Create();
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_ChangeState
BOOL CafeCoffeeSet_ChangeState(void *ov, s32 n);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_UpdateState
void CafeCoffeeSet_UpdateState(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState00
BOOL CafeCoffeeSet_EnterState00(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_UpdateState00
void CafeCoffeeSet_UpdateState00(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState01
BOOL CafeCoffeeSet_EnterState01(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_UpdateState01
void CafeCoffeeSet_UpdateState01(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState02
BOOL CafeCoffeeSet_EnterState02(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_UpdateState02
void CafeCoffeeSet_UpdateState02(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState03
BOOL CafeCoffeeSet_EnterState03(ObjB *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState04
BOOL CafeCoffeeSet_EnterState04(ObjA *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState05
BOOL CafeCoffeeSet_EnterState05(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState06
BOOL CafeCoffeeSet_EnterState06(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState08
BOOL CafeCoffeeSet_EnterState08(ObjA *o);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_EnterState09
BOOL CafeCoffeeSet_EnterState09(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_LoadPart
void CafeCoffeeSet_LoadPart(void *ov, u32 idx, const char *id, const char *x);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_ReleasePart
void CafeCoffeeSet_ReleasePart(void *ov, u32 idx);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_InitPartAnim
void CafeCoffeeSet_InitPartAnim(void *ov, u32 idx);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState00
s32 CafeCoffeeSet_SetState00(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState01
s32 CafeCoffeeSet_SetState01(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState02
s32 CafeCoffeeSet_SetState02(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState03
s32 CafeCoffeeSet_SetState03(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState04
s32 CafeCoffeeSet_SetState04(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState05
s32 CafeCoffeeSet_SetState05(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState06
s32 CafeCoffeeSet_SetState06(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState07
s32 CafeCoffeeSet_SetState07(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState08
s32 CafeCoffeeSet_SetState08(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SetState09
s32 CafeCoffeeSet_SetState09(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_GetState
s32 CafeCoffeeSet_GetState(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_IsAnim0BAtFrame9
BOOL CafeCoffeeSet_IsAnim0BAtFrame9(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_IsAnim0CDone
BOOL CafeCoffeeSet_IsAnim0CDone(void);
#endif
#ifndef PROTO_LOCAL_CafeCoffeeSet_SwitchAnim
void CafeCoffeeSet_SwitchAnim(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8);
#endif
}
#endif

#endif

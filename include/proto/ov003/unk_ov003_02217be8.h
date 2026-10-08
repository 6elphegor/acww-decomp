#ifndef PROTO_PROTO_OV003_UNK_OV003_02217BE8_H
#define PROTO_PROTO_OV003_UNK_OV003_02217BE8_H

// Prototypes of the functions defined in src/ov003/unk_ov003_02217be8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/Model.h"
#include "types.h"
class FieldGround;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_ov003_022323f4
extern char data_ov003_022323f4[0xc];
#endif
#ifndef PROTO_LOCAL_data_ov003_02232400
extern char data_ov003_02232400[0x10];
#endif
#ifndef PROTO_LOCAL_sWaterMatNames
extern char *sWaterMatNames[2];
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_data_ov003_02235490
extern u8 data_ov003_02235490;
#endif
#ifndef PROTO_LOCAL_data_ov003_02235494
extern s32 data_ov003_02235494;
#endif
#ifndef PROTO_LOCAL_FieldGround_Create
FieldGround *FieldGround_Create();
#endif
#ifndef PROTO_LOCAL_FieldGround_SetWaterMatFlags
void FieldGround_SetWaterMatFlags(Model *o, s32 flag);
#endif
}
#endif

#endif

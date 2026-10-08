#ifndef PROTO_PROTO_OV121_UNK_OV121_02292360_H
#define PROTO_PROTO_OV121_UNK_OV121_02292360_H

// Prototypes of the functions defined in src/ov121/unk_ov121_02292360.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "nitro/gxoam.h"
#include "sys/ProcProfile.h"
#ifdef __cplusplus
class DesignTab;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sDesignTabIconCell
extern GXOamAttr sDesignTabIconCell;
#endif
#ifndef PROTO_LOCAL_sDesignTabTargetFrameCells
extern u32 sDesignTabTargetFrameCells[8];
#endif
#ifndef PROTO_LOCAL_sDesignItemBase
extern u16 sDesignItemBase[4];
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_DesignTab_Create
DesignTab *DesignTab_Create();
#endif
#ifndef PROTO_LOCAL_sDesignTabProfile
extern ProcProfile sDesignTabProfile;
#endif
}
#endif

#endif

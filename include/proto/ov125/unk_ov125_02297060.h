#ifndef PROTO_PROTO_OV125_UNK_OV125_02297060_H
#define PROTO_PROTO_OV125_UNK_OV125_02297060_H

// Prototypes of the functions defined in src/ov125/unk_ov125_02297060.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class PatternSelectMenu;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_PatternSelect_SetupBgLayers
void PatternSelect_SetupBgLayers();
#endif
#ifndef PROTO_LOCAL_PatternSelect_LoadPatternIcons
void PatternSelect_LoadPatternIcons();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PatternSelectMenu_Create
PatternSelectMenu *PatternSelectMenu_Create();
#endif
}
#ifndef PROTO_LOCAL_sPatternSelectIconCell
extern u16 sPatternSelectIconCell[4];
#endif
#endif

#endif

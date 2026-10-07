#ifndef PROTO_PROTO_MAIN_UNK_0205D1F8_H
#define PROTO_PROTO_MAIN_UNK_0205D1F8_H

// Prototypes of the functions defined in src/main/unk_0205d1f8.cpp (generated: tools/host_protos.py)

#include "types.h"
struct CharaFaceAnimWorkPool;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimWorkPool_Create
void CharaFaceAnimWorkPool_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimWorkPool_Destroy
void CharaFaceAnimWorkPool_Destroy();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CharaFaceAnimWork_GetHeapSize
u32 CharaFaceAnimWork_GetHeapSize();
#endif
}
#ifndef PROTO_LOCAL_sCharaFaceAnimWorkPool
extern CharaFaceAnimWorkPool sCharaFaceAnimWorkPool;
#endif
#endif

#endif

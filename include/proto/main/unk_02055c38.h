#ifndef PROTO_PROTO_MAIN_UNK_02055C38_H
#define PROTO_PROTO_MAIN_UNK_02055C38_H

// Prototypes of the functions defined in src/main/unk_02055c38.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/Mtx33.h"
#ifdef __cplusplus
#include "gfx/G3dResAccess.h"
#include "gfx/MatTexPatAnim.h"
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_G3dRes_FindDictIdx
s32 G3dRes_FindDictIdx(void *p, s32 a);
#endif
#ifndef PROTO_LOCAL__ZN12G3dResAccess11findTexDataEv
void *_ZN12G3dResAccess11findTexDataEv(G3dResAccess *self, s32 name);
#endif
#ifndef PROTO_LOCAL__ZN12G3dResAccess12findPlttDataEv
void *_ZN12G3dResAccess12findPlttDataEv(G3dResAccess *self, s32 name);
#endif
#ifndef PROTO_LOCAL_Model_BindMatTexByName
s32 Model_BindMatTexByName(u8 *hdr, const char *name, s32 p, s32 q, s32 r);
#endif
#ifndef PROTO_LOCAL_Model_BindMatTexByIdx
s32 Model_BindMatTexByIdx(u8 *hdr, const char *name, s32 p, s32 q, s32 r);
#endif
#ifndef PROTO_LOCAL_Anim_NormalizeVec
void Anim_NormalizeVec(VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_Anim_LerpRotMtx
void Anim_LerpRotMtx(Mtx33 *a, Mtx33 *b, Mtx33 *out, s32 t);
#endif
#ifndef PROTO_LOCAL_Anim_LerpVec
void Anim_LerpVec(VecFx32 *a, VecFx32 *b, VecFx32 *out, s32 t);
#endif
#ifndef PROTO_LOCAL__ZN13MatTexPatAnim13pauseMaterialEv
void _ZN13MatTexPatAnim13pauseMaterialEv(MatTexPatAnim *self, const char *matName);
#endif
#ifndef PROTO_LOCAL_MatTexPatAnim_ResumeMaterial
void MatTexPatAnim_ResumeMaterial(MatTexPatAnim *p, void *q);
#endif
}
#endif

#endif

#ifndef FIELD_UNK_OV003_02224BC4_ACTOR_H
#define FIELD_UNK_OV003_02224BC4_ACTOR_H

#include "types.h"
#include "sys/ProcBase.h"
#include "field/Unk_ov003_02224ba4_V3.h"

// View of the polymorphic actor returned by PlayerActor_GetCharacter, as used by the ov003 bottle-throw / insect
// spawn code (0x02224bc4..0x02225238, src/ov003/unk_ov003_02225108.cpp etc.); only the slots used there.
class Unk_ov003_02224bc4_Actor : public GameProc {
public:
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(Unk_ov003_02224ba4_V3 *out);

    /* 0x50 */ u8 pad_50[0xc];
    /* 0x5c */ Unk_ov003_02224ba4_V3 position;
    /* 0x68 */ u8 pad_68[0xb0 - 0x68];
    /* 0xb0 */ u32 actorFlags;
};

#endif

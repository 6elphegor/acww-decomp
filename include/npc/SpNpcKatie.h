#ifndef NPC_SPNPCKATIE_H
#define NPC_SPNPCKATIE_H

// Katie, the lost-girl special NPC (0x728 bytes): an SpNpcActor with her talk request at 0x658 and the escort state.
// Defined in src/main/unk_020c0324.cpp (inline constructor/destructor, vtable there).
#include "types.h"
#include "actor/SpNpcActor.h"
#include "talk/SpNpcKatieTalk.h"
#include "gfx/Unk_020bfe30_Vec.h"

class SpNpcKatie : public SpNpcActor {
public:
    SpNpcKatie() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual ~SpNpcKatie() {}
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 act;
    /* 0x658 */ SpNpcKatieTalk talk;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 escortDeclined;
    /* 0x70e */ u16 stuckTimer;
    /* 0x710 */ u16 waitTimer;
    /* 0x714 */ Unk_020bfe30_Vec prevPos;
    /* 0x720 */ s32 effectHandle;
    /* 0x724 */ u8 reunionStep;
};

#endif

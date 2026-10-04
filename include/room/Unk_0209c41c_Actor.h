#ifndef ROOM_UNK_0209C41C_ACTOR_H
#define ROOM_UNK_0209C41C_ACTOR_H

#include "types.h"
#include "game/NibblePair.h"

// Room object sync helpers: nibble-packed state bytes, sync record, and the actor interface whose vfunc_60 changes
// state (src/main/unk_0209c08c.cpp, unk_0209c390.cpp, unk_0209c3e0.cpp, unk_0209c4a8.cpp).

struct SceneExitResult {
    /* 0x00 */ u8 scene, fadeIn, fadeOut, d;
    /* 0x04 */ u16 e;
    /* 0x06 */ s16 f;
};

class Unk_0209c41c_Actor {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual BOOL vfunc_60(u32 v);
};

#endif // ROOM_UNK_0209C41C_ACTOR_H

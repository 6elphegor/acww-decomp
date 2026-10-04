#include "types.h"
#include "net/CommManager.h"

// TU185: 0x0209c3e0-0x0209c4a8. Three flag bytes in .bss (autoload_3 0x021d7274-0x021d7278) and their accessors.


extern "C" {
extern CommManager *gCommManager;
extern u8 gFieldSceneKind;

u8 sRoomObjSyncStates[3];
}

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

struct Unk_0209c41c_Pack {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" BOOL RoomObjSync_ChangeState(Unk_0209c41c_Actor *self, u8 v) {
    BOOL is1;
    if (gFieldSceneKind == 1) is1 = TRUE;
    else is1 = FALSE;
    if (is1) {
        if (self->vfunc_60(v)) {
            u8 idx = *((u8 *)self + 0xea);
            if (idx < 3) {
                if (gCommManager->isOnline()) {
                    Unk_0209c41c_Pack pk;
                    pk.lo = idx;
                    pk.hi = v;
                    CommManager *g = gCommManager;
                    g->beginRecord();
                    g->writeRecord((u8 *)&pk, 1);
                    g->endRecord(0x25, 4);
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void RoomObjSync_Reset() {
    u32 i = 0;
    u8 z = i;
    for (; i < 3; i++) sRoomObjSyncStates[i] = z;
}

extern "C" u32 RoomObjSync_GetState(u32 idx) {
    if (idx < 3) return sRoomObjSyncStates[idx];
    return 0;
}

extern "C" BOOL RoomObjSync_SetState(u32 idx, u8 v) {
    if (idx < 3) {
        sRoomObjSyncStates[idx] = v;
        return TRUE;
    }
    return FALSE;
}

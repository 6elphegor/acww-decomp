#include "types.h"
// Library base class; its code is ARM in autoload_2 and ITCM. It allocates its objects on a separate heap.
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

// Vtable at 0x020d8c74. Its constructor and destructor are inline, which is why derived constructors and destructors
// store two vtable pointers in a row.
class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate(s32 a);
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};


struct Unk_0203e22c_State {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ void *unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
};

class Character {
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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
};


struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ Character *unk_0c;
};

struct Unk_0203e5d0_List {
    /* 0x00 */ Unk_0203e5d0_Node *unk_00;
    /* 0x04 */ u32 unk_04;
    Unk_0203e5d0_List() {
        unk_00 = 0;
        unk_04 = 0;
    }
};

extern Unk_0203e5d0_List gCharacterList;
extern u32 data_021c39dc;
extern u32 data_021c39e0[4];
extern u8 data_020d96d0;

struct Unk_0203e938_Net {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 unk_64;
};

struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};

extern "C" {
extern Unk_0203e22c_State *gTalkRequestCurrent;
}

extern "C" {
extern u32 sTalkTargetId;
}

extern "C" {
extern u32 sTalkRequestFlags;
}

extern "C" {
extern u32 sTalkRequestList;
}

extern "C" {
extern Unk_0203e938_Net *volatile gCommManager;
}

extern "C" {
extern s16 data_020c905c;
}

extern "C" {
extern u8 gActorList[];
}

extern "C" {
void PrioList_Init(void *);
}

extern "C" {
void func_0203ebb0(void);
}

extern "C" {
void TalkRequestFlags_Clear(u32);
}

extern "C" {
BOOL func_02094960(void);
}

extern "C" {
void TalkRequest_SetTalkTarget(u32);
}

extern "C" {
BOOL func_02094c38(void);
}

extern "C" {
u32 func_0206ec6c(u32);
}

extern "C" {
BOOL MenuCtrl_IsIdle(void);
}

extern "C" {
BOOL func_02094e64(void);
}

extern "C" {
BOOL PlayerActor_RequestAct05(void);
}

extern "C" {
void MenuCtrl_RequestOpen(u32);
}

extern "C" {
s32 func_020b14f0(void);
}

extern "C" {
Unk_0203e22c_State *func_0203eb78(void);
}

extern "C" {
void func_020e79a0(void *, void *);
}

extern "C" {
s32 func_01ffcb0c(s32);
}

extern "C" {
u32 Talk_DetachRequest(s32);
}

extern "C" {
u32 Talk_AttachRequestToWindow0(s32);
}

extern "C" {
s32 Math_AngleXZ(Unk_0203e4f0_Vec *, Unk_0203e4f0_Vec *);
}

extern "C" {
long long func_020e9630(Unk_0203e4f0_Vec *);
}

extern "C" {
void *PrioList_FindById(void *, u32);
}

extern "C" {
void func_020652dc(void *, void *);
}

extern "C" {
void _ZN5Actor10postCreateEv(void *, s32);
}

extern "C" {
void func_0203eb04(u8 a, u32 aid, ...);
}

extern "C" {
void func_0203eab8(u32 idx);
}

extern "C" {
u32 func_0203eac8(u32 idx, u32 id);
}

extern "C" {
void func_0203ea08(u32);
}

extern "C" {
s32 func_0203ea74(u32);
}

extern "C" {
BOOL _ZN11CommManager7isMyAidEj(void *, u32);
}

extern "C" {
void *func_02095204(u32);
}

extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *);
}

extern "C" {
void _ZN11CommManager11beginRecordEv(void *);
}

extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *, void *, u32);
}

extern "C" {
void _ZN11CommManager9endRecordEjj(void *, u32, u32);
}

extern "C" {
BOOL func_020a62a0(void);
}

extern "C" {
void func_0203e938(u32 id, u8 x, u8 mode);
}

extern "C" {
void TalkRequestQueue_Reset(void);
}

extern "C" {
void func_0203eb38(void);
}

extern "C" {
Character *Character_FindByCharId(u32 id);
}


extern "C" void func_0203eb38(void) {
    for (s32 i = 0; i < 4; i++) {
        data_021c39e0[i] = 0;
    }
    data_021c39dc = 0;
    data_020d96d0 = 6;
}

extern "C" void func_0203eb04(u8 a, u32 aid, ...) {
    Unk_0203e938_Net *o = gCommManager;
    _ZN11CommManager11beginRecordEv(o);
    _ZN11CommManager11writeRecordEPhj(o, &a, 1);
    _ZN11CommManager9endRecordEjj(o, 0x17, aid);
}

extern "C" u32 func_0203eac8(u32 idx, u32 id) {
    if (data_021c39e0[idx] != 0) {
        return 0;
    }
    if (data_021c39dc == id) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        if (id == data_021c39e0[i]) {
            return 0;
        }
    }
    return 1;
}

extern "C" void func_0203eab8(u32 idx) {
    data_021c39e0[idx] = 0;
}

extern "C" s32 func_0203ea74(u32 id) {
    Unk_0203e938_Net *o = gCommManager;
    if (!_ZN11CommManager8isOnlineEv(o)) {
        return 2;
    }
    if (o->unk_64 == 0) {
        if (func_0203eac8((u8)o->unk_64, id)) {
            return 2;
        }
        return 0;
    }
    return 1;
}

extern "C" void func_0203ea08(u32 id) {
    Unk_0203e938_Net *o = gCommManager;
    if (_ZN11CommManager8isOnlineEv(o)) {
        if (o->unk_64 == 0) {
            data_021c39e0[o->unk_64] = id;
        } else {
            u8 buf[5];
            data_020d96d0 = 0;
            buf[0] = 0;
            buf[1] = id;
            buf[2] = id >> 8;
            buf[3] = id >> 16;
            buf[4] = id >> 24;
            Unk_0203e938_Net *p = gCommManager;
            _ZN11CommManager11beginRecordEv(p);
            _ZN11CommManager11writeRecordEPhj(p, buf, 5);
            _ZN11CommManager9endRecordEjj(p, 0x17, 0);
        }
    }
}

extern "C" void func_0203e9d8(void) {
    Unk_0203e938_Net *o = gCommManager;
    if (_ZN11CommManager8isOnlineEv(o)) {
        if (o->unk_64 == 0) {
            func_0203eab8(0);
        } else {
            func_0203eb04(3, 0);
        }
    }
}

extern "C" s32 func_0203e9ac(void) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        return 2;
    }
    if (func_020a62a0()) {
        return 2;
    }
    return 1;
}

extern "C" void func_0203e9a0(u32 id, u8 x) {
    func_0203e938(id, x, 4);
}

extern "C" void func_0203e994(u32 id, u8 x) {
    func_0203e938(id, x, 5);
}

extern "C" void func_0203e938(u32 id, u8 x, u8 mode) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[6];
        data_020d96d0 = mode;
        buf[0] = mode;
        buf[1] = id;
        buf[2] = id >> 8;
        buf[3] = id >> 16;
        buf[4] = id >> 24;
        buf[5] = x;
        Unk_0203e938_Net *o = gCommManager;
        _ZN11CommManager11beginRecordEv(o);
        _ZN11CommManager11writeRecordEPhj(o, buf, 6);
        _ZN11CommManager9endRecordEjj(o, 0x17, 6);
    }
}

extern "C" void func_0203e8ec(u8 *msg, u32 aid) {
    u32 id = (msg[4] << 24) | ((msg[3] << 16) | (msg[1] | (msg[2] << 8)));
    if (func_0203eac8((u8)aid, id)) {
        data_021c39e0[aid] = id;
        func_0203eb04(1, aid);
    } else {
        func_0203eb04(2, aid);
    }
}

extern "C" void func_0203e8e0(u8 *msg) {
    data_020d96d0 = msg[0];
}

extern "C" void func_0203e8d4(void *msg, u32 aid) {
    func_0203eab8((u8)aid);
}

extern "C" void func_0203e7d0(u8 *msg, u32 aid) {
    u32 r6 = msg[5];
    Character *o = Character_FindByCharId((msg[4] << 24) | ((msg[3] << 16) | (msg[1] | (msg[2] << 8))));
    void *w = func_02095204(aid);
    if (!o || !w) {
        if (msg[0] == 4) {
            if (!_ZN11CommManager7isMyAidEj(gCommManager, aid)) {
                func_0203eb04(2, aid);
            } else {
                data_020d96d0 = 2;
            }
        }
    } else if (msg[0] == 5) {
        o->vfunc_4c(r6, (u8)aid);
    } else {
        BOOL r5 = FALSE;
        switch (r6) {
        case 0:
            r5 = o->vfunc_48(w);
            break;
        case 5:
            r5 = o->acceptsInteractionOutOfRange(w);
            break;
        case 1:
            r5 = o->vfunc_58(w);
            break;
        }
        if (!_ZN11CommManager7isMyAidEj(gCommManager, aid)) {
            if (r5) {
                o->vfunc_4c(3, (u8)aid);
                func_0203eb04(1, aid);
            } else {
                func_0203eb04(2, aid);
            }
        } else {
            if (r5) {
                o->vfunc_4c(3, 4);
                data_020d96d0 = 1;
            } else {
                data_020d96d0 = 2;
            }
        }
    }
}


u8 data_020d96d0 = 6;
u32 data_021c39dc;
u32 data_021c39e0[4];

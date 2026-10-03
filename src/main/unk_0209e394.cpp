// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"

class TalkWindowState {
public:
    void *getChoiceList();
    void lockAdvance();
    void func_02067990();
    void unlockAdvance();
    void setNextMessage(u8 *a, void *b);
    void openChoices(s32 v);
    void detachRequest();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
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
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class SaveMenu;

// vtable 0x020e244c, size 0x4c
class SaveMenuTalk : public TalkMsgRequest {
public:
    SaveMenuTalk();
    virtual ~SaveMenuTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();

    void setOwner(SaveMenu *owner);

    /* 0x44 */ SaveMenu *unk_44;
    /* 0x48 */ u16 unk_48;
};

// vtable 0x020e23fc, size 0xa0
class SaveMenu : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void updateSaveB();
    void enterSaveB();
    void updateSaveA();
    void enterSaveA();
    void updateQuitting();
    void enterQuitting();
    void updateTalking();
    void enterTalking();
    void updateOpenTalk();
    void enterOpenTalk();
    void updateIdle();
    void enterIdle();
    void setState(s32 state);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ SaveMenuTalk unk_54;
};

typedef void (SaveMenu::*Unk_020e23fc_Fn)();
struct Unk_0209e840_Ent {
    Unk_020e23fc_Fn enter;
    Unk_020e23fc_Fn update;
};

struct Unk_0209ea1c_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

extern "C" SaveMenu *SaveMenu_Create();
extern "C" void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(TalkWindowState *o, TalkMsgRequest *p);
extern "C" void _ZN15TalkWindowState13func_0206799cEv(TalkWindowState *o, s32 v);

Unk_0209ea1c_Entry data_020e2394 = {(void *)SaveMenu_Create, 0xd5, 0xd0};

extern const s32 data_020d070c[22];
const s32 data_020d070c[22] = {0, 10000, 50000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 3200000, 6400000, 9999999};

Unk_0209e840_Ent sSaveMenuStates[6] = {
    {&SaveMenu::enterIdle, &SaveMenu::updateIdle},
    {&SaveMenu::enterOpenTalk, &SaveMenu::updateOpenTalk},
    {&SaveMenu::enterTalking, &SaveMenu::updateTalking},
    {&SaveMenu::enterQuitting, &SaveMenu::updateQuitting},
    {&SaveMenu::enterSaveA, &SaveMenu::updateSaveA},
    {&SaveMenu::enterSaveB, &SaveMenu::updateSaveB},
};

extern u8 gTalkMsgIndexEnd[];
extern void *data_020cbb18;
extern u16 gPad[];
extern u8 data_021c3cc0;
extern u8 data_021ed3ac[];
extern u8 data_021ed3a0;
extern u8 data_021ed448[];

extern "C" {
TalkWindowState *TalkWindow_Get(s32 v);
}

extern "C" {
s32 _ZN10ChoiceList9getResultEv(void *h);
}

extern "C" {
void _ZN10ChoiceList5resetEii(void *h, s32 a, s32 b);
}

extern "C" {
void _ZN10ChoiceList8setEntryEiPKhiS1_PKci(void *h, s32 a, u8 *b, s32 c, u8 *d, s32 e, s32 f);
}

extern "C" {
void _ZN10ChoiceList9loadTextsEv(void *h);
}

extern "C" {
s32 func_02073204();
}

extern "C" {
void func_020a5f48(s32 a, s32 b);
}

extern "C" {
void func_020a5f28();
}

extern "C" {
void func_020a5f18();
}

extern "C" {
void func_0209f230(s32 v);
}

extern "C" {
s32 func_020731d4();
}

extern "C" {
s32 func_02073230(s32 v);
}

extern "C" {
s32 func_020b4934();
}

extern "C" {
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
}

extern "C" {
void func_020b4a08(s32 a, s32 b);
}

extern "C" {
void func_020a08e8();
}

extern "C" {
s32 func_020a0984();
}

extern "C" {
void func_0203d86c();
}

extern "C" {
s32 func_0203d878();
}

extern "C" {
s32 func_020a0318();
}

extern "C" {
s32 func_020a0304();
}

extern "C" {
void _ZN10MsgRequest11setFileNameEPKc(void *p, u8 *q);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_0203d978();
}

extern "C" {
s32 func_0203d99c();
}

extern "C" {
s32 TalkRequest_IsActive();
}

extern "C" {
s32 _ZN12Unk_020cbb1813func_020729ccEj(void *p, s32 v);
}

extern "C" {
void func_020387b4();
}

extern "C" {
s32 func_0203d884();
}

extern "C" {
s16 *func_0209c37c(s32 a, s32 b);
}

extern "C" {
s32 PlayerData_GetCurrent();
}

extern "C" {
s32 _ZN12Unk_02097ff413func_02098320Ev();
}

extern "C" {
void func_02097410(s32 a, s32 b);
}

extern "C" {
s32 func_02097404();
}

extern "C" {
void func_020973ec(s32 v);
}

extern "C" {
s32 _ZN10PlayerData13func_02098750Ev(s32 v);
}

extern "C" {
s32 _ZN15PlayerInventory13getTotalBellsEi(s32 a, s32 b);
}

extern "C" {
void func_02097ac4(s32 a, s32 b, s32 c);
}

extern "C" {
void func_0209d498(void *p);
}

extern "C" {
s32 func_0209d3d0(void *a, void *b, s32 c);
}

extern "C" {
void func_0209d2c0(void *a, s32 b);
}

extern "C" {
void func_0209cf88(void *p);
}

extern "C" {
void MI_CpuCopy8(void *src, void *dst, s32 n);
}

extern "C" {
u32 func_02063b8c(s32 n);
}

extern "C" {
void func_0203ec54(void *p);
}

extern "C" {
void *func_0203ec4c(void *p);
}

extern "C" {
void func_0211a748(void *a, void *b, s32 c, s32 d, s32 e);
}

extern "C" {
void MI_CpuFill8(void *p, s32 v, s32 n);
}

extern "C" {
s32 func_02000b7c();
}

extern "C" {
s32 func_02063a04(void *a, void *b, s32 n);
}

extern "C" {
void func_0203ec18(void *p);
}

extern "C" {
void func_0203ec50(void *p);
}

static inline BOOL Unk_0209e7b4_Is2(u8 v) {
    if (v == 2) {
        return TRUE;
    }
    return FALSE;
}

// 4-byte record

class SaveRecord4 {
public:
    BOOL func_0209ea50();
    void func_0209ea60();
    void func_0209eacc(void *src);
    void func_0209eaf4();
    u8 getStamp();
    void setStamp(u8 v);
    void newStamp();
    BOOL isStateUnset();
    BOOL isStateValid();
    void setStateValidAlt();
    void markInterrupted();
    void clearState();
    void setStateValid();
    void func_0209eb8c();
    void func_0209eb90();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
};

extern "C" void func_0209eb08() {}

extern "C" void func_0209eb04() {}

void SaveRecord4::func_0209eaf4() {
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
}

void SaveRecord4::func_0209eacc(void *src) {
    u8 buf[8];
    if (src == 0) {
        func_0209cf88(buf);
        src = buf;
    }
    MI_CpuCopy8(src, this, 4);
    unk_03 = 1;
}

void SaveRecord4::func_0209ea60() {
    if (func_0209ea50() != 0) {
        u32 w[4];
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        w[3] = 0;
        func_0209d498(w);
        ((u8 *)w)[0xd] = unk_02;
        ((u8 *)w)[0xc] = unk_01;
        ((u8 *)w)[0xb] = unk_00;
        ((u8 *)w)[0xa] = 0;
        if (func_0209d3d0(&w[2], w, 0x3c) != 1) {
            ((u8 *)w)[0xa] = 6;
            func_0209d2c0(&w[2], 1);
            if (func_0209d3d0(&w[2], w, 0x3c) != 1) {
                unk_03 = 0;
            }
        } else {
            unk_03 = 0;
        }
    }
}

BOOL SaveRecord4::func_0209ea50() {
    if (unk_03 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" SaveMenu *SaveMenu_Create() {
    SaveMenu *p = new SaveMenu;
    return p;
}

BOOL SaveMenu::vfunc_00() {
    unk_54.setOwner(this);
    return TRUE;
}

BOOL SaveMenu::vfunc_0c() {
    return TRUE;
}

BOOL SaveMenu::onExecute() {
    s16 *p;
    s32 t;
    s32 r6;
    s32 r4;

    if (*func_0209c37c(0, 0x4b) != 0) {
        if (PlayerData_GetCurrent() != 0) {
            r4 = _ZN12Unk_02097ff413func_02098320Ev();
            switch (*func_0209c37c(0, 0x4b)) {
            case 0:
                break;
            case 1:
                func_02097410(r4, 1000000);
                break;
            case 2:
                func_02097410(r4, 10000000);
                break;
            case 3:
                func_02097410(r4, 100000000);
                break;
            case 4:
                func_02097410(r4, 500000000);
                break;
            case 5:
                func_02097410(r4, 999999999);
                break;
            }
        }
    }
    if (*func_0209c37c(0, 0x4c) != 0) {
        if (PlayerData_GetCurrent() != 0) {
            _ZN12Unk_02097ff413func_02098320Ev();
            if (*func_0209c37c(0, 0x4c) != 0) {
                t = *func_0209c37c(0, 0x4c);
                if (t < 1) {
                    t = 1;
                } else if (t > 0x15) {
                    t = 0x15;
                }
                s32 c = func_02097404();
                s32 v = data_020d070c[t];
                if (v > c) {
                    func_020973ec(v - 100);
                }
            }
        }
    }
    if (*func_0209c37c(0, 0x48) != 0) {
        r6 = PlayerData_GetCurrent();
        r4 = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(r6), 1);
        r4 += *func_0209c37c(0, 0x48);
        if (r4 < 0) {
            r4 = 0;
        } else if (r4 > 0x1869f) {
            r4 = 0x1869f;
        }
        func_02097ac4(_ZN10PlayerData13func_02098750Ev(r6), r4, 1);
        *func_0209c37c(0, 0x48) = 0;
    }
    if (sSaveMenuStates[unk_50].update != 0) {
        (this->*sSaveMenuStates[unk_50].update)();
    }
    return TRUE;
}

void SaveMenu::setState(s32 state) {
    if (sSaveMenuStates[state].enter != 0) {
        (this->*sSaveMenuStates[state].enter)();
    }
    unk_50 = state;
}

void SaveMenu::enterIdle() {}

void SaveMenu::updateIdle() {
    if ((gPad[1] & 8) != 0) {
        if (func_020b50e8() != 0x2d) {
            if (func_0203d978() == 0) {
                if (func_0203d99c() == 0) {
                    if (Unk_0209e7b4_Is2(data_021c3cc0) != 0) {
                        if (TalkRequest_IsActive() == 0) {
                            void *g = data_020cbb18;
                            if (_ZN12Unk_020cbb1813func_02072e44Ev(g) != 0 && _ZN12Unk_020cbb1813func_020729ccEj(g, 0) == 0) {
                                func_020387b4();
                            } else if (func_0203d884() != 0) {
                                setState(1);
                            }
                        }
                    }
                }
            }
        }
    }
}

void SaveMenu::enterOpenTalk() {}

void SaveMenu::updateOpenTalk() {
    if (func_0203d878() != 0) {
        TalkWindowState *o = TalkWindow_Get(0);
        SaveMenuTalk *p = &unk_54;
        p->vfunc_08();
        if (func_020a0318() != 0 || func_020a0304() != 0) {
            _ZN10MsgRequest11setFileNameEPKc(&unk_54, (u8 *)"sp_etc_sequence4");
            unk_54.unk_1e = 4;
        } else if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) != 0) {
            _ZN10MsgRequest11setFileNameEPKc(&unk_54, (u8 *)"sp_etc_sequence2");
            unk_54.unk_1e = 4;
        } else {
            _ZN10MsgRequest11setFileNameEPKc(&unk_54, (u8 *)"sp_etc_sequence2");
            unk_54.unk_1e = 0;
        }
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &unk_54);
        o->unk_08 = 1;
        setState(2);
    } else {
        setState(0);
    }
}

void SaveMenu::enterTalking() {}

void SaveMenu::updateTalking() {
    TalkWindowState *o = TalkWindow_Get(0);
    if (o->unk_04 == 0) {
        o->detachRequest();
        func_0203d86c();
        setState(0);
    }
}

void SaveMenu::enterQuitting() {}

void SaveMenu::updateQuitting() {
    TalkWindowState *o = TalkWindow_Get(0);
    if (o->unk_04 == 0) {
        o->detachRequest();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) != 0) {
            func_020b4a08(func_020b4934(), 0);
            func_020a08e8();
        } else {
            func_020a0984();
        }
    }
}

void SaveMenu::enterSaveA() {
    unk_54.unk_48 = 200;
    func_02073230(2);
}

void SaveMenu::updateSaveA() {
    TalkWindowState *o = (TalkWindowState *)unk_54.unk_3c;
    s32 r = func_02073204();
    if (r == 5 || r == 6) {
        o->func_02067990();
        o->unlockAdvance();
        if (r == 5) {
            func_020a5f48(0, 6);
            func_020a5f28();
            func_020a5f18();
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            func_0209f230(0);
            setState(3);
        } else {
            u8 b = 5;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            setState(2);
        }
        func_020731d4();
    }
}

void SaveMenu::enterSaveB() {
    unk_54.unk_48 = 200;
    func_02073230(3);
}

// SaveMenu

void SaveMenu::updateSaveB() {
    TalkWindowState *o = (TalkWindowState *)unk_54.unk_3c;
    s32 r = func_02073204();
    if (r == 5 || r == 6) {
        o->func_02067990();
        o->unlockAdvance();
        if (r == 5) {
            func_020a5f48(0, 6);
            func_020a5f28();
            func_020a5f18();
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            func_0209f230(1);
            setState(3);
        } else {
            u8 b = 5;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            setState(2);
        }
        func_020731d4();
    }
}

SaveMenuTalk::SaveMenuTalk() {}

SaveMenuTalk::~SaveMenuTalk() {}

void SaveMenuTalk::setOwner(SaveMenu *owner) {
    unk_44 = owner;
}

void SaveMenuTalk::vfunc_14() {
    if (unk_1e == 0) {
        TalkWindowState *o = (TalkWindowState *)unk_3c;
        void *h = o->getChoiceList();
        _ZN10ChoiceList5resetEii(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = gTalkMsgIndexEnd[0];
        _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 0, buf, 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = gTalkMsgIndexEnd[0];
        _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 1, &buf[2], 1, &buf[3], 0, 0);
        _ZN10ChoiceList9loadTextsEv(h);
        o->openChoices(1);
    }
}

// SaveMenuTalk

void SaveMenuTalk::vfunc_18() {
    TalkWindowState *o = (TalkWindowState *)unk_3c;
    s32 r = _ZN10ChoiceList9getResultEv(o->getChoiceList());
    switch (unk_1e) {
    case 4:
        switch (r) {
        case 0:
            o->lockAdvance();
            _ZN15TalkWindowState13func_0206799cEv(o, 1);
            unk_44->setState(4);
            break;
        case 1: {
            u8 b = 8;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            break;
        }
        }
        break;
    case 8:
        switch (r) {
        case 0:
            o->lockAdvance();
            _ZN15TalkWindowState13func_0206799cEv(o, 1);
            unk_44->setState(5);
            break;
        case 1:
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            break;
        }
        break;
    case 0:
        if (r == 0) {
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            unk_44->setState(3);
        }
        break;
    }
}


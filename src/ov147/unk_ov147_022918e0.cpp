#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov147_0229213c_Desc {
    u8 *unk_00;
    u8 *unk_04;
    u8 unk_08;
};

class ChoiceEntry {
public:
    void setMsgIndex(const u8 *p);
    void setBmgName(const void *p);
    void loadText();
    void setValue(const u8 *p);
    void *getText();
};

class ChoiceList {
public:
    void clear();
    ChoiceEntry *getEntry(s32 i);
    void setCount(s32 v);
    s32 setCancelToLast();
    s32 getResult();
    void reset(s32 a, s32 b);
    void setEntry(s32 a, const u8 *b, s32 c, const u8 *d, const char *e, s32 f);
    void loadTexts();
};

class Unk_020ddcf0;

class Unk_020660f8 {
public:
    ChoiceList *func_020679b4();
    void func_020679c0(s32 v);
    void func_02067a3c(s32 a, void *b);
    void func_02067a84(u8 *a, void *b);
    void func_02067934();
    void func_02067a78();
    void func_02067958();
    void func_02067978(Unk_020ddcf0 *p);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class PlayerData {
public:
    void *getPlayerId();
};

class SaveData {
public:
    s32 isValid();
    BOOL testFlag(u32 a);
};

class Unk_02065554 {
public:
    u8 func_02065578();
};

class Unk_0208f238 {
public:
    s32 func_0208f15c();
};

class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b87d0();
    u8 unk_04[0x20];
};

class MsgString {
public:
    u8 copy(MsgString *other);
};

class PlayerId {
public:
    void func_020940d0(MsgString *p);
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 unk_04[0x18];
};

extern "C" {
Unk_020660f8 *func_02067918(s32 a);
void func_0200212c(s32 a);
void func_0203d4c4(s32 a);
void func_0203d4c8(s32 a);
void func_020020b8(s32 a);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_02002398(s32 a, s32 b);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void File_LoadToBuffer(void *a, void *b, u32 n);
void MI_CpuCopy8(void *a, void *b, u32 n);
void MI_CpuFill8(void *a, s32 b, u32 n);
void Snd_PlaySe(s32 a);
u32 func_0209ccd0();
void *func_0208f158(void *p);
BOOL func_020978c8(void *t, s32 i);
s32 func_020978a4(void *t);
void *PlayerData_GetResident(void *t, s32 i);
void func_020a0420(s32 i);
void func_020a0364();
void func_020a0358();
void func_020a034c();
const void *Choice_GetBmgName(u32 i);

extern u8 data_021e7f8c[];
extern u8 data_021d735c[];
extern SaveData gSaveData;
extern u8 data_021edb5c;
extern u8 data_021c3cc0;
extern void *gCurrentHeap;
}

class Unk_ov147_022933e8;

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *s);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public MsgRequest {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual s32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov147_SceneEntry {
    Unk_ov147_022933e8 *(*factory)();
    u16 unk_04;
    u16 unk_06;
};

typedef void (Unk_ov147_022933e8::*Unk_ov147_022933e8_Fn)();
struct Unk_ov147_0229372c {
    Unk_ov147_022933e8_Fn enter;
    Unk_ov147_022933e8_Fn update;
};

// Sub-object at +0x54 of the scene (vtable 0x022934a4, size 0x48)
class Unk_ov147_022934a4 : public Unk_020ddcf0 {
public:
    Unk_ov147_022934a4();
    virtual ~Unk_ov147_022934a4();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();

    void func_ov147_0229246c(void *owner);
    u8 func_ov147_02291ce0();
    void func_ov147_02291cf8();
    void func_ov147_02291d34();
    void func_ov147_02291dbc();
    void func_ov147_02291dc8();
    void func_ov147_02291dd4();
    void func_ov147_02292074();
    void func_ov147_0229213c(Unk_ov147_0229213c_Desc *d);

    /* 0x44 */ Unk_ov147_022933e8 *unk_44;
};

// Object at +0xac of the scene (0x20 bytes, vtable 0x022935e8)
class Unk_ov147_022935e8 {
public:
    Unk_ov147_022935e8();
    virtual ~Unk_ov147_022935e8();
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;

    void func_ov147_02292c10();
    void func_ov147_02292c40();
    void func_ov147_02292c68();
    void func_ov147_02292c90();
    void func_ov147_02292c9c();
    void func_ov147_02292cb4();
    void func_ov147_02292cc0();
    void func_ov147_02292cdc();
    BOOL func_ov147_02292f54();
    void func_ov147_02292fc8();
    BOOL func_ov147_02292fd4();
    void func_ov147_02292fe8();
    void func_ov147_02292ff0(s32 v);
    void func_ov147_02292ff4();
    void func_ov147_02293068();
    void func_ov147_0229306c();
};

extern "C" {
extern u32 data_ov147_02297c8c[][8];
void _ZN18Unk_ov147_022935e8D1Ev();
void _ZN18Unk_ov147_022935e819func_ov147_02292c10Ev();
void _ZN18Unk_ov147_022935e819func_ov147_02292c68Ev();
void _ZN18Unk_ov147_022935e819func_ov147_02292c9cEv();
extern u16 data_ov147_02293c8c[];
extern u32 data_ov147_0229448c[][8];
extern u32 data_ov147_022937ec[][8];
extern u32 data_ov147_02293aac[][8];
extern u8 data_ov147_022938cc[];
extern const u8 data_ov147_022930bc[];
extern char *data_ov147_02293270;
extern Unk_ov147_0229372c data_ov147_0229372c[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern u8 *data_021c1b3c;

void func_020a4414(s32 a, s32 b, s32 c, s32 d);
void *func_020b4934();
void func_020b4f58(void *a, s32 b, s32 c, s32 d);
void func_020a08c4();
void func_020a0960();
void func_020a096c();
void func_0203d52c();
void InputMode_SetButtons();
void InputMode_SetTouch();
BOOL func_020e7500(void *p);
void func_02034d84(s32 a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0203d984();
void func_020a042c();
void func_0203cbb8();
void _ZN12Unk_0203c92c13func_0203c98cEv();
void func_0203d990();
s32 Main_TakeDwcInitResult();
s32 Save_CheckBackupError();
s32 func_0203d538();
void func_0203d520();
Unk_ov147_022933e8 *func_ov147_02292bf8();

}

// Data definition order below (and at the end of the file) and the declaration order of vfunc_14's statics
// reproduce the original data/bss order (mwcc heapsorts by size over the reversed creation order).
extern "C" u32 data_ov147_02293aac[15][8] = { 0 };
extern "C" char data_ov147_022933cc[] = "sp_etc_sequence1";
extern "C" const u8 data_ov147_022930bc[4] = { 0x2d, 0x2e, 0x2f, 0x2f };

static inline BOOL Unk_ov147_02291b28_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

static inline BOOL Unk_ov147_022924c0_IsTwo() {
    if (data_021c3cc0 == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov147_0229281c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022933e8, size 0xf4
class Unk_ov147_022933e8 : public GameProc {
public:
    Unk_ov147_022933e8();
    virtual ~Unk_ov147_022933e8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void func_ov147_022918e0(u32 *p, s32 x, s32 y);
    void func_ov147_02291914(u32 *p, s32 i);
    BOOL func_ov147_02291948();
    void func_ov147_022919c8();
    BOOL func_ov147_022919d8();
    void func_ov147_02291a9c();
    void func_ov147_02291ad8();
    void func_ov147_02291c08();
    void func_ov147_022924c0();
    void func_ov147_02292504();
    void func_ov147_0229250c();
    void func_ov147_02292550();
    void func_ov147_02292558();
    void func_ov147_022925a0();
    void func_ov147_022925a8();
    void func_ov147_022925ec();
    void func_ov147_022925f4();
    void func_ov147_02292638();
    void func_ov147_02292640();
    void func_ov147_02292688();
    void func_ov147_02292690();
    void func_ov147_022926d8();
    void func_ov147_022926e0();
    void func_ov147_0229270c();
    void func_ov147_02292710();
    void func_ov147_02292714();
    void func_ov147_02292718();
    void func_ov147_022927e8();
    void func_ov147_022927ec();
    void func_ov147_02292818();
    void func_ov147_0229281c();
    void func_ov147_0229297c();
    void func_ov147_02292988(s32 state);
    void func_ov147_022929c0();
    void func_ov147_022929dc();
    void func_ov147_02292a14(BOOL flag);
    void func_ov147_02291af4();
    void func_ov147_02291b14();
    void func_ov147_02291b28();

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_ov147_022934a4 unk_54;
    /* 0x9c */ u8 pad_9c[2];
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 pad_aa[2];
    /* 0xac */ Unk_ov147_022935e8 unk_ac;
    /* 0xcc */ Unk_020e45f8 unk_cc;
    /* 0xf0 */ u8 unk_f0;
    /* 0xf1 */ u8 pad_f1[3];
};
#define E(n) &Unk_ov147_022933e8::func_ov147_##n
extern "C" Unk_ov147_0229372c data_ov147_0229372c[12] = {
    { E(0229297c), E(0229281c) },
    { E(022927e8), E(02292718) },
    { E(02292714), E(02292710) },
    { E(0229270c), E(022926e0) },
    { E(022926d8), E(02292690) },
    { E(02292688), E(02292640) },
    { E(02292638), E(022925f4) },
    { E(022925ec), E(022925a8) },
    { E(02292504), E(022924c0) },
    { E(022925a0), E(02292558) },
    { E(02292550), E(0229250c) },
    { E(02292818), E(022927ec) },
};

extern "C" Unk_ov147_022933e8 *func_ov147_02292bf8() { return new Unk_ov147_022933e8(); }

Unk_ov147_022933e8::Unk_ov147_022933e8() {}

Unk_ov147_022933e8::~Unk_ov147_022933e8() {}

BOOL Unk_ov147_022933e8::vfunc_00() {
    unk_54.func_ov147_0229246c(this);
    func_0203cbb8();
    _ZN12Unk_0203c92c13func_0203c98cEv();
    func_0203d990();
    if (Main_TakeDwcInitResult() == 3) {
        unk_f0 = 1;
    }
    func_ov147_02292988(0);
    unk_a6 = 0;
    unk_a7 = 0;
    unk_ac.func_ov147_0229306c();
    if (Save_CheckBackupError() == 1) {
        unk_9e = 1;
    }
    func_ov147_02292a14(func_0203d538() != 0 ? TRUE : FALSE);
    if (func_0203d538() != 0) {
        unk_a6 = 6;
        func_0203d520();
    }
    return TRUE;
}

BOOL Unk_ov147_022933e8::vfunc_0c() {
    func_ov147_022929dc();
    unk_ac.func_ov147_02293068();
    unk_cc.func_020b87d0();
    func_0203d984();
    if (unk_50 == 7) {
        func_020a042c();
    }
    return TRUE;
}

BOOL Unk_ov147_022933e8::onExecute() {
    if (((Unk_ov147_0229372c *)((u8 *)data_ov147_0229372c + 8))[unk_50].enter) {
        (this->*data_ov147_0229372c[unk_50].update)();
    }
    func_ov147_02291b28();
    unk_ac.func_ov147_02292ff4();
    return TRUE;
}

void Unk_ov147_022933e8::func_ov147_02292a14(BOOL flag) {
    if (unk_9f == 0) {
        if (flag) {
            func_02034dd0(1, 0xf, 0);
            unk_9f = 2;
        } else {
            func_02034e10(2, 0, 0x7f, 0);
            unk_9f = 1;
        }
    }
}

void Unk_ov147_022933e8::func_ov147_022929dc() {
    u32 t = unk_9f;
    if (t != 0) {
        if (t == 1) {
            func_02034d84(0);
        } else if (t == 2) {
            func_02034d70(1);
        }
        func_02034dd0(1, 0xf, 0xf);
        unk_9f = 0;
    }
}

void Unk_ov147_022933e8::func_ov147_022929c0() {
    if (unk_9f == 1) {
        *(s32 *)(data_021c1b3c + 0x248) = 0xb;
    }
}

void Unk_ov147_022933e8::func_ov147_02292988(s32 state) {
    if (data_ov147_0229372c[state].enter) {
        (this->*data_ov147_0229372c[state].enter)();
    }
    unk_50 = state;
}

void Unk_ov147_022933e8::func_ov147_0229297c() { unk_a8 = 0xe10; }

void Unk_ov147_022933e8::func_ov147_0229281c() {
    if (gPad[1] != 0) {
        InputMode_SetButtons();
    } else if (Unk_ov147_0229281c_Both()) {
        InputMode_SetTouch();
    }
    u32 pad = gPad[1];
    if ((pad & 2) == 0 && (pad & 0x400) == 0 && (pad & 0x800) == 0) {
        if (unk_f0 != 0 || unk_9e != 0 || (pad & 8) != 0 || (pad & 1) != 0 || Unk_ov147_0229281c_Both()) {
            if (Unk_ov147_022924c0_IsTwo()) {
                u32 t = unk_a6;
                if (t != 0) {
                    if (t == 1) {
                        func_ov147_02291b14();
                        unk_a7 = 0xc;
                    } else if (unk_a7 == 0) {
                        func_ov147_02291af4();
                        unk_ac.func_ov147_02292fe8();
                        func_ov147_02292988(1);
                    }
                }
            }
        }
    }
    if (unk_a7 != 0) {
        unk_a7 = *(volatile u8 *)&unk_a7 - 1;
        if (unk_a7 == 0) {
            unk_ac.func_ov147_02292ff0(0);
        }
    }
    if ((u8)(unk_a6 + 0xfc) <= 1) {
        if (func_020e7500(&unk_a8) == 0) {
            unk_ac.func_ov147_02292fe8();
            func_ov147_02292988(0xb);
        }
    } else {
        unk_a8 = 0xe10;
    }
}

void Unk_ov147_022933e8::func_ov147_02292818() {}

void Unk_ov147_022933e8::func_ov147_022927ec() {
    if (unk_ac.func_ov147_02292fd4()) {
        func_0203d52c();
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_022927e8() {}

void Unk_ov147_022933e8::func_ov147_02292718() {
    if (unk_ac.func_ov147_02292fd4()) {
        Unk_020660f8 *r = func_02067918(0);
        unk_54.vfunc_08();
        if (unk_f0 != 0) {
            unk_54.setFileName(data_ov147_02293270);
            *((u8 *)this + 0x72) = 0x32;
            unk_f0 = 0;
        } else if (unk_9e != 0) {
            unk_54.setFileName("sp_etc_sequence2");
            *((u8 *)this + 0x72) = 9;
        } else if (gSaveData.testFlag(0x12)) {
            unk_54.setFileName(data_ov147_02293270);
            *((u8 *)this + 0x72) = 0x24;
        } else {
            unk_54.setFileName(data_ov147_02293270);
            *((u8 *)this + 0x72) = unk_54.func_ov147_02291ce0();
        }
        r->func_02067978(&unk_54);
        r->unk_08 = 1;
        func_ov147_02292988(2);
    }
}

void Unk_ov147_022933e8::func_ov147_02292714() {}

void Unk_ov147_022933e8::func_ov147_02292710() {}

void Unk_ov147_022933e8::func_ov147_0229270c() {}

void Unk_ov147_022933e8::func_ov147_022926e0() {
    Unk_020660f8 *r = func_02067918(0);
    if (r->unk_04 == 0) {
        r->func_02067958();
        func_ov147_02292988(0);
        unk_ac.func_ov147_02292ff0(1);
    }
}

void Unk_ov147_022933e8::func_ov147_022926d8() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292690() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_020660f8 *r = func_02067918(0);
        if (r->unk_04 == 0) {
            r->func_02067958();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a096c();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_02292688() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292640() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_020660f8 *r = func_02067918(0);
        if (r->unk_04 == 0) {
            r->func_02067958();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a0960();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_02292638() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022925f4() {
    Unk_020660f8 *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->func_02067958();
        func_020b4f58(func_020b4934(), 6, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_022925ec() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022925a8() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_020660f8 *r = func_02067918(0);
        if (r->unk_04 == 0) {
            r->func_02067958();
            func_020b4f58(func_020b4934(), 0x2d, 2, 0);
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_022925a0() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_02292558() {
    if (Unk_ov147_022924c0_IsTwo()) {
        Unk_020660f8 *r = func_02067918(0);
        if (r->unk_04 == 0) {
            r->func_02067958();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            func_020a08c4();
            func_ov147_022929dc();
        }
    }
}

void Unk_ov147_022933e8::func_ov147_02292550() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_0229250c() {
    Unk_020660f8 *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->func_02067958();
        func_020b4f58(func_020b4934(), 0x30, 2, 2);
        func_ov147_022929dc();
    }
}

void Unk_ov147_022933e8::func_ov147_02292504() { func_ov147_022929c0(); }

void Unk_ov147_022933e8::func_ov147_022924c0() {
    Unk_020660f8 *r = func_02067918(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->func_02067958();
        func_020a4414(2, 2, 0, 0);
        func_ov147_022929dc();
    }
}

Unk_ov147_022934a4::Unk_ov147_022934a4() {}

Unk_ov147_022934a4::~Unk_ov147_022934a4() {}

// ---- Unk_ov147_022934a4 ctor/dtor, Unk_ov147_022933e8 (part 2) ----

void Unk_ov147_022934a4::func_ov147_0229246c(void *owner) { unk_44 = (Unk_ov147_022933e8 *)owner; }

void Unk_ov147_022934a4::vfunc_14() {
    static u8 s258[4] = { 0x02, 0x0a, 0x0b, 0x05 };
    static u8 s260[4] = { 2, 0x37, 1, data_021edb5c };
    static u8 s250[4] = { 0x00, 0x0a, 0x0b, 0x05 };
    static u8 s268[4] = { data_021edb5c, 0x37, 1, data_021edb5c };
    static u8 s244[2] = { 0x12, 0x13 };
    static u8 s254[4] = { data_021edb5c, 0x37, 1, data_021edb5c };
    static u8 s27c[5] = { 0x01, 0x02, 0x0a, 0x0b, 0x05 };
    static u8 s284[5] = { data_021edb5c, 2, 0x37, 1, data_021edb5c };
    static u8 s274[4] = { 0x03, 0x18, 0x0e, 0x05 };
    static u8 s264[4] = { 0x09, 0x30, 0x00, 0x31 };
    static u8 s248[3] = { 0x18, 0x0e, 0x05 };
    static u8 s26c[4] = { 0x01, 0x0a, 0x0b, 0x05 };
    static u8 s25c[4] = { 0x03, 0x04, 0x0e, 0x05 };
    static u8 s278[4] = { 0x09, 0x03, 0x00, 0x31 };
    static u8 s28c[5] = { 0x03, 0x04, 0x18, 0x0e, 0x05 };
    static u8 s294[5] = { 0x09, 0x03, 0x30, 0x00, 0x31 };
    static u8 s24c[3] = { 0x30, 0x00, 0x31 };
    static u8 s240[2] = { data_021edb5c, 0x31 };
    static Unk_ov147_0229213c_Desc descs[9] = {
        { s258, s260, 4 },
        { s250, s268, 4 },
        { s26c, s254, 4 },
        { s27c, s284, 5 },
        { s274, s264, 4 },
        { s248, s24c, 3 },
        { s25c, s278, 4 },
        { s28c, s294, 5 },
        { s244, s240, 2 },
    };
    Unk_020660f8 *r5 = func_02067918(0);
    s32 r6 = func_020978a4(data_021d735c);
    s32 r0 = gSaveData.isValid();
    Unk_ov147_022933e8 *r2 = unk_44;
    if (r2->unk_9e != 0) {
        r5->func_02067a78();
        return;
    }
    switch (unk_1e) {
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (r6 <= 0 && r0 != 0) {
            func_ov147_0229213c(&descs[0]);
        } else if (r0 == 0) {
            func_ov147_0229213c(&descs[1]);
        } else if (r6 == 4) {
            func_ov147_0229213c(&descs[2]);
        } else {
            func_ov147_0229213c(&descs[3]);
        }
        break;
    case 1:
        if (r6 <= 0 && r0 != 0) {
            func_ov147_0229213c(&descs[4]);
        } else if (r0 == 0) {
            func_ov147_0229213c(&descs[5]);
        } else if (r6 == 4) {
            func_ov147_0229213c(&descs[6]);
        } else {
            func_ov147_0229213c(&descs[7]);
        }
        break;
    case 0x27:
        func_020a0358();
        r5->func_02067934();
        unk_44->func_ov147_02292988(7);
        break;
    case 3:
        func_ov147_02292074();
        break;
    case 6:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(4);
        break;
    case 0xb:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(5);
        break;
    case 5:
    case 0xa: {
        u8 v = 0x31;
        r5->func_02067a84(&v, data_ov147_02293270);
        break;
    }
    case 0x37:
        r2->func_ov147_02292988(3);
        break;
    case 0:
        func_ov147_0229213c(&descs[8]);
        break;
    case 0x30:
        func_ov147_0229213c(&descs[8]);
        break;
    case 0x35:
        func_ov147_0229213c(&descs[8]);
        break;
    case 0x24:
        r5->func_02067934();
        r5->func_02067a84(&data_021edb5c, 0);
        func_020a034c();
        unk_44->func_ov147_02292988(7);
        break;
    case 0x32:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(3);
        break;
    }
}

void Unk_ov147_022934a4::func_ov147_0229213c(Unk_ov147_0229213c_Desc *d) {
    Unk_020660f8 *sp0 = unk_3c;
    ChoiceList *sp10 = sp0->func_020679b4();
    u8 *r5 = d->unk_00;
    u8 *r6 = d->unk_04;
    u32 r7 = d->unk_08;
    sp10->reset(r7, r7 - 1);
    s32 r4;
    s32 z0 = 0;
    s32 z1 = 0;
    for (r4 = 0; r4 < (s32)r7; r4++) {
        s32 f = z0;
        u8 c = r5[r4];
        u8 t[2];
        if (c == 0x12 || c <= 1) {
            f = 1;
        }
        t[0] = c;
        t[1] = r6[r4];
        sp10->setEntry(r4, t, 1, &t[1], (const char *)z1, f);
    }
    sp10->loadTexts();
    sp0->func_020679c0(1);
}

void Unk_ov147_022934a4::func_ov147_02292074() {
    Unk_020660f8 *sp0 = unk_3c;
    ChoiceList *r6 = sp0->func_020679b4();
    r6->clear();
    s32 r5 = 0;
    s32 r4 = 0;
    u8 buf[3];
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            Unk_020e1c64 o;
            ((PlayerId *)((PlayerData *)PlayerData_GetResident(data_021d735c, r4))->getPlayerId())->func_020940d0((MsgString *)&o);
            ChoiceEntry *r7 = r6->getEntry(r5);
            buf[0] = 4;
            r7->setValue(&buf[0]);
            ((MsgString *)r7->getText())->copy((MsgString *)&o);
            r5++;
        }
    }
    ChoiceEntry *p = r6->getEntry(r5);
    buf[1] = 0x10;
    p->setMsgIndex(&buf[1]);
    p->setBmgName(Choice_GetBmgName(1));
    buf[2] = 0;
    p->setValue(&buf[2]);
    p->loadText();
    r6->setCount(r5 + 1);
    r6->setCancelToLast();
    sp0->func_020679c0(1);
}

void Unk_ov147_022934a4::vfunc_70() {
    if (unk_1e == 0x24 || unk_1e == 0x27) {
        Snd_PlaySe(0x3a);
    }
}

void Unk_ov147_022934a4::vfunc_18() {
    typedef void (Unk_ov147_022934a4::*Fn)();
    Unk_020660f8 *sp0 = func_02067918(0);
    s32 r5 = sp0->func_020679b4()->getResult();
    s32 sp4 = func_020978a4(data_021d735c);
    s32 sp8 = gSaveData.isValid();
    static Fn t0[4] = { 0, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t1[4] = { &Unk_ov147_022934a4::func_ov147_02291dd4, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t2[4] = { &Unk_ov147_022934a4::func_ov147_02291dc8, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t3[5] = { &Unk_ov147_022934a4::func_ov147_02291dc8, 0, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn *tbl[4] = { t0, t1, t2, t3 };
    s32 mode = 3;
    switch (unk_1e) {
    case 0:
        if (r5 == 0) {
            sp0->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(8);
        }
        break;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (sp4 <= 0 && sp8 != 0) {
            mode = 0;
        } else if (sp8 == 0) {
            mode = 1;
        } else if (sp4 == 4) {
            mode = 2;
        }
        {
            Fn *row = tbl[mode];
            if (row[r5]) {
                (this->*row[r5])();
            }
        }
        break;
    case 0x30:
        if (r5 == 0) {
            sp0->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(9);
        }
        break;
    case 0x32:
    case 0x33:
    case 0x34:
        break;
    case 0x35:
        if (r5 == 0) {
            unk_3c->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(10);
        }
        break;
    case 3:
        func_ov147_02291d34();
        break;
    }
}

void Unk_ov147_022934a4::func_ov147_02291dd4() {
    func_020a0364();
    unk_44->func_ov147_02292988(7);
}

void Unk_ov147_022934a4::func_ov147_02291dc8() {
    unk_44->func_ov147_02292988(6);
}

void Unk_ov147_022934a4::func_ov147_02291dbc() {
    unk_44->func_ov147_02292988(3);
}

void Unk_ov147_022934a4::func_ov147_02291d34() {
    Unk_020660f8 *r7 = func_02067918(0);
    s32 a = r7->func_020679b4()->getResult();
    u8 r6 = 0x31;
    s32 r5 = 0;
    s32 r4;
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            if (a == r5) {
                func_020a0420(r4);
                Unk_020e1c64 o;
                ((PlayerId *)((PlayerData *)PlayerData_GetResident(data_021d735c, r4))->getPlayerId())->func_020940d0((MsgString *)&o);
                r7->func_02067a3c(0, &o);
                r6 = 4;
            }
            r5++;
        }
    }
    u8 v = r6;
    r7->func_02067a84(&v, data_ov147_02293270);
}

// ---- Unk_ov147_022934a4 ----

void Unk_ov147_022934a4::func_ov147_02291cf8() {
    u8 *g = data_021e7f8c;
    if (((Unk_02065554 *)func_0208f158(g))->func_02065578()) {
        if (((Unk_0208f238 *)g)->func_0208f15c() == 0) {
            u8 v = 0x35;
            unk_3c->func_02067a84(&v, 0);
        }
    }
}

u8 Unk_ov147_022934a4::func_ov147_02291ce0() {
    return data_ov147_022930bc[func_0209ccd0()];
}

void Unk_ov147_022933e8::func_ov147_02291c08() {
    func_0203d4c8(1);
    func_0200226c(5, 0, 0, 0);
    func_02002398(5, 1);
    func_020026c4((void *)"menu/title/bg_us.bpl", (s32)gCurrentHeap, 5, 8, 8, 0xf);
    File_LoadToBuffer((void *)"menu/title/bg_us.bsc", data_ov147_02293c8c, 0x800);
    func_020024f0(data_ov147_02293c8c, 5, 0x800, 0);
    File_LoadToBuffer((void *)"menu/title/bg_us.bch", data_ov147_0229448c, 0x3800);
    MI_CpuFill8(data_ov147_02297c8c, 0, 0x3800);
    File_LoadToBuffer((void *)"menu/title/mask0.bch", data_ov147_022937ec, 0xe0);
    File_LoadToBuffer((void *)"menu/title/mask1.bch", data_ov147_02293aac, 0x1e0);
    File_LoadToBuffer((void *)"menu/title/mask2.bch", data_ov147_022938cc, 0x1e0);
    func_02002438(data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
}

void Unk_ov147_022933e8::func_ov147_02291b28() {
    switch (unk_a6) {
    case 0:
        if (Unk_ov147_02291b28_IsTwo(data_021c3cc0)) {
            func_ov147_02291c08();
            func_ov147_02291a9c();
        }
        break;
    case 6:
        if (Unk_ov147_02291b28_IsTwo(data_021c3cc0)) {
            unk_ac.func_ov147_02292ff0(1);
            unk_a8 = 0xe10;
            unk_a6 = 5;
        }
        break;
    case 1:
        if (func_ov147_022919d8()) {
            unk_a6 = 2;
            if (unk_a7 == 0) {
                unk_ac.func_ov147_02292ff0(0);
            }
        }
        break;
    case 2:
        if (unk_a4 != 0) {
            unk_a4 = *(volatile u16 *)&unk_a4 - 1;
        } else {
            func_ov147_022919c8();
            unk_ac.func_ov147_02292ff0(1);
        }
        break;
    case 3:
        if (func_ov147_02291948()) {
            unk_a6 = 4;
        }
        break;
    case 4:
    case 5:
        break;
    }
}

void Unk_ov147_022933e8::func_ov147_02291b14() {
    if (unk_a6 == 1) {
        unk_a0 = 0x64;
    }
}

void Unk_ov147_022933e8::func_ov147_02291af4() {
    if (unk_a6 == 2) {
        func_ov147_022919c8();
    } else {
        func_ov147_02291ad8();
    }
}

void Unk_ov147_022933e8::func_ov147_02291ad8() {
    func_0200212c(5);
    func_0203d4c4(1);
    unk_a6 = 5;
}

void Unk_ov147_022933e8::func_ov147_02291a9c() {
    unk_a6 = 1;
    unk_a0 = 0;
    unk_a4 = 0x4b0;
    MI_CpuFill8(data_ov147_02297c8c, 0, 0x3800);
    func_020020b8(5);
}

BOOL Unk_ov147_022933e8::func_ov147_022919d8() {
    s32 y;
    s32 r4 = unk_a0;
    if (r4 < 0x36) {
        r4 += 9;
        s32 r6 = 0;
        for (; r6 < 0xf && r4 >= 9; r6++, r4--) {
            u32 *p = data_ov147_02293aac[r6];
            s32 x = r4;
            y = 0;
            if (r4 > 0x1f) {
                y = r4 - 0x1f;
                x = 0x1f;
            }
            for (; x >= 0 && y < 0x18; x--, y++) {
                if (y < 0x15) {
                    func_ov147_022918e0(p, x, y);
                }
            }
        }
        unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
        unk_a0 = unk_a0 + 1;
        goto ret0;
    }
    MI_CpuCopy8(data_ov147_0229448c, data_ov147_02297c8c, 0x3800);
    unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
    return TRUE;
ret0:
    return FALSE;
}

void Unk_ov147_022933e8::func_ov147_022919c8() {
    unk_a0 = 7;
    unk_a6 = 3;
}

BOOL Unk_ov147_022933e8::func_ov147_02291948() {
    if (unk_a0 == 0) {
        func_0200212c(5);
        func_0203d4c4(1);
        return TRUE;
    }
    unk_a0 = unk_a0 - 1;
    u32 *p = data_ov147_022937ec[unk_a0];
    s32 i;
    for (i = 0; i < 0x1c0; i++) {
        func_ov147_02291914(p, i);
    }
    unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
    return FALSE;
}

void Unk_ov147_022933e8::func_ov147_02291914(u32 *p, s32 i) {
    u32 *src = data_ov147_0229448c[i];
    u32 *dst = data_ov147_02297c8c[i];
    s32 j;
    for (j = 0; j < 8; j++) {
        *dst++ = *src & *p;
        p++;
        src++;
    }
}

// ---- Unk_ov147_022933e8 (part 1) ----

void Unk_ov147_022933e8::func_ov147_022918e0(u32 *p, s32 x, s32 y) {
    s32 v = data_ov147_02293c8c[x + (y << 5)] & 0x3ff;
    if (v != 0x10 && v >= 0x140) {
        func_ov147_02291914(p, v - 0x140);
    }
}

extern "C" u32 data_ov147_022937ec[7][8] = { 0 };
extern "C" u16 data_ov147_02293c8c[0x400] = { 0 };
extern "C" u8 data_ov147_022938cc[0x1e0] = { 0 };
extern "C" Unk_ov147_SceneEntry data_ov147_022932dc = { func_ov147_02292bf8, 0xd4, 0xcf };
extern "C" char *data_ov147_02293270 = data_ov147_022933cc;
extern "C" u32 data_ov147_02297c8c[0x1c0][8] = { 0 };
extern "C" u32 data_ov147_0229448c[0x1c0][8] = { 0 };


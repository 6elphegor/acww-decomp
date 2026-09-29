#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_02014e60(void *, u16 *, s32, s32, s32);
void func_02014ce4(void *, u16 *, s32, s32, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void *func_0209750c();
s32 func_02098ffc();
void func_0207a4b8(void *);
void *func_0209978c();
s32 func_0209ad68();
void func_0209abb4(void *, s32);
void func_02099790();
void *func_02098750();
s32 func_02097edc();
void func_02097f30(void *, u16 *, s32, s32);
void *func_020986c8(void *);
void func_0203c42c(void *, u16 *, s32, s32);
void func_0202cd44(u16 *, void *);
void func_0201578c(void *, u16 *, s32, s32);
void func_0200303c(void *, s32, u32, u32);
s32 func_0209ac64(void *);
void func_0209909c(u16 *, s32, s32);
void func_0206338c(Unk_0202368c_Obj *, s32, s32);
void func_02063388(Unk_0202368c_Obj *);
void func_02062f94(u16 *, Unk_0202368c_Obj *, s32, s32, s32, s32, s32);
void *func_02080e18();
s32 func_02080450(void *, void *);
s32 func_0206ed18();
s32 func_0206ed38();
u16 *func_02097f6c(void *, s32);
void func_0202d20c(void *);
}

extern Unk_0201d2d0_Data data_020c7588;
extern Unk_0201d2d0_Data data_020c7578;
extern Unk_0201d2d0_Data data_020c7668;
extern Unk_0201d2d0_Data data_020c75b0;
extern Unk_0201d2d0_Data data_020c77b0;
extern Unk_0201d2d0_Data data_020c77b8;
extern Unk_0201d2d0_Data data_020c77c0;
extern Unk_0201d2d0_Data data_020c77d0;
extern Unk_0201d2d0_Data data_020c7898;
extern u32 data_020c77d8;
extern Unk_0201d2d0_Fn data_020d7a30;
extern Unk_0201d2d0_Fn data_020d79e0;
extern Unk_0201d2d0_Fn data_020d7998;
extern Unk_0201d2d0_Fn data_020d8010;
extern Unk_0201d2d0_Fn data_020d7c38;
extern Unk_0201d2d0_Fn data_020d7c58;
extern Unk_0201d2d0_Fn data_020d7c70;
extern u8 data_021bf8d4[];
extern u8 data_021bf2ec[];
extern u8 data_021bf844[];
extern u8 data_021bf8a4[];
extern u8 data_021bf874[];
extern u8 data_021bf85c[];
extern u8 data_021bf7e4[];
extern u8 data_021bf7cc[];
extern u8 data_021bf3ac[];
extern u8 data_021dfd8c[];

class Unk_0201d2d0 {
public:
    void func_02022f14();
    void func_02022f80(Unk_0201d2d0_Out *out);
    void func_02022fe0(Unk_0201d2d0_Out *out);
    void func_02023044();
    void func_020230b4(Unk_0201d2d0_Out *out);
    void func_02023118();
    void func_02023140(Unk_0201d2d0_Out *out);
    void func_020231b4();
    void func_020231cc(Unk_0201d2d0_Out *out);
    void func_02023248();
    void func_0202329c();
    void func_02023308(Unk_0201d2d0_Out *out);
    void func_020233b8();
    void func_02023428(Unk_0201d2d0_Out *out);
    void func_02023488(Unk_0201d2d0_Out *out);
    void func_020234e8(Unk_0201d2d0_Out *out);
    void func_02023548(Unk_0201d2d0_Out *out);
    void func_020235c0();
    void func_02023614();
    void func_0202368c(Unk_0201d2d0_Out *out);
    void func_02023800();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void *func_0202d114();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x128 - 0x122];
    u32 unk_128;
    u8 pad_12c[0x134 - 0x12c];
    u32 unk_134;
    u8 pad_138[0x156 - 0x138];
    u16 unk_156;
    u8 pad_158[0x178 - 0x158];
    Unk_0201d2d0_Fn unk_178;
    u8 pad_180[0x198 - 0x180];
    u16 unk_198;
};

void Unk_0201d2d0::func_02022f14() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x1f, 0x1f, data_021bf8d4);
    func_0201c938(this, &s, 1, 0x20, 0x20, data_021bf2ec);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d79e0);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_02022f80(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7588.unk_00, data_020c7588.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022fe0(Unk_0201d2d0_Out *out) {
    u32 v = data_020c7578.unk_04;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7578.unk_00, v, 2, v);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02023044() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_02098ffc() != -1) {
        func_0202d1d4(this, data_021bf844);
    } else {
        func_0202d1d4(this, data_021bf8a4);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_020230b4(Unk_0201d2d0_Out *out) {
    u32 v = data_020c7668.unk_04;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7668.unk_00, v, 1, v);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02023118() {
    void *p;
    func_0207a4b8(data_021dfd8c);
    p = func_0209978c();
    if (func_0209ad68() != 0) {
        func_0209abb4(p, 1);
    }
}

void Unk_0201d2d0::func_02023140(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75b0.unk_00, data_020c75b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7998;
}

void Unk_0201d2d0::func_020231b4() {
    func_0207a4b8(data_021dfd8c);
    func_02099790();
}

void Unk_0201d2d0::func_020231cc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77b0.unk_00, data_020c77b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
    unk_c4 = data_020d8010;
}

void Unk_0201d2d0::func_02023248() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf85c);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202329c() {
    void *a = func_0209750c();
    void *b = func_02098750();
    s32 c = func_02097edc();
    if (c == -1) {
        c = 0;
    }
    func_02014e60(this, &unk_198, 0, 5, 0);
    func_02097f30(b, &unk_198, c, 0);
    func_0203c42c(func_020986c8(a), &unk_198, 0, 1);
    func_0202d33c(data_020d7c38);
}

void Unk_0201d2d0::func_02023308(Unk_0201d2d0_Out *out) {
    u16 h[2];
    func_0202cd44(&h[0], func_0209750c());
    unk_198 = h[0];
    if (unk_198 == 0xfff1) {
        func_0202cd44(&h[1], 0);
        unk_198 = h[1];
    }
    if (unk_198 != 0xfff1) {
        func_0201578c(this, &unk_198, 1, 7);
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77b8.unk_00, data_020c77b8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020233b8() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_02098ffc() != -1) {
        func_0202d1d4(this, data_021bf844);
    } else {
        func_0202d1d4(this, data_021bf874);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02023428(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77c0.unk_00, data_020c77c0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02023488(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77d0.unk_00, data_020c77d0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020234e8(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7898.unk_00, data_020c7898.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02023548(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(func_020805c4(unk_fc->unk_82c)));
    switch (func_0209ac64(func_0202d114())) {
    case 0xe:
        unk_11e = 0xb;
        break;
    case 0x10:
        unk_11e = 0xd;
        break;
    default:
        unk_11e = 0xe;
        break;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020235c0() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf7e4);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02023614() {
    switch (func_0209ac64(func_0202d114())) {
    case 0xe:
    case 0x10: {
        s32 t = func_02098ffc();
        if (t >= 0) {
            func_0209909c(&unk_198, 0, t);
            func_0203c42c(func_020986c8(func_0209750c()), &unk_198, 0, 1);
        }
        func_02014e60(this, &unk_198, 0, 5, 0);
        func_0202d33c(data_020d7c58);
        break;
    }
    case 0x11:
        func_0202d20c(this);
        break;
    }
}

void Unk_0201d2d0::func_0202368c(Unk_0201d2d0_Out *out) {
    u16 h[2];
    Unk_0202368c_Obj o1, o2;
    func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(func_020805c4(unk_fc->unk_82c)));
    switch (func_0209ac64(func_0202d114())) {
    case 0xe: {
        unk_11e = 0xa;
        func_0206338c(&o1, 0, 0);
        func_02062f94(&h[0], &o1, 0, 0, 1, 1, 0);
        unk_198 = h[0];
        func_02063388(&o1);
        func_0201578c(this, &unk_198, 0, 7);
        func_0209abb4(func_0202d114(), 1);
        break;
    }
    case 0x10: {
        unk_11e = 0xc;
        func_0206338c(&o2, 3, 0);
        func_02062f94(&h[1], &o2, 0, 0, 1, 1, 0);
        unk_198 = h[1];
        func_02063388(&o2);
        func_0201578c(this, &unk_198, 0, 7);
        func_0209abb4(func_0202d114(), 1);
        break;
    }
    case 0x11:
        if (unk_128 != 0 && func_02080450(unk_fc->unk_82c, func_02080e18())) {
            unk_178 = data_020d7a30;
            unk_134 = unk_128;
            unk_11e = 0xe;
        } else {
            unk_11e = 0x16;
        }
        func_0209abb4(func_0202d114(), 1);
        break;
    default:
        unk_11e = 0xa;
        break;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02023800() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() != 0) {
        s32 t = func_0206ed38();
        func_0209750c();
        unk_120 = *func_02097f6c(func_02098750(), t);
        h = 0xfff1;
        func_0209909c(&h, 0, t);
        func_0202d1d4(this, data_021bf7cc);
        func_02014ce4(this, &unk_120, 0, 5, 0);
    } else {
        func_0202d1d4(this, data_021bf3ac);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

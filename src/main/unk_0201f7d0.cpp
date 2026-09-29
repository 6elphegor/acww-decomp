#include "types.h"

class Unk_0201f7d0;

struct Unk_0201f7d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201f7d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201f7d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201f7d0_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

struct Unk_0201fb54_Date {
    u32 a;
    u32 b;
};

typedef void (Unk_0201f7d0::*Unk_0201f7d0_Fn)();
typedef void (Unk_0201f7d0::*Unk_0201f7d0_OutFn)(Unk_0201f7d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_020679c0(void *, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_02014f74(void *);
void func_02080a98(u32);
s32 func_0206ed18();
u32 func_0206ecf0();
void func_02080c20(u32, u32, s32);
void func_0207f20c(void *, u32, s32, void *);
void func_0201511c(void *, s32, void *, s32, s32);
void func_020151d0(void *, s32);
s32 func_02080a74(u32);
s32 func_02063b8c(s32);
void func_0209d498(void *);
s32 func_0209ce68(s32, s32, s32, s32);
void func_0206d9fc(void *);
void func_02079568(void *, void *);
void func_02014558(void *);
void func_02014f38(void *, s32);
}

extern Unk_0201f7d0_Data data_020c78b0;
extern Unk_0201f7d0_Data data_020c7828;
extern Unk_0201f7d0_Data data_020c7670;
extern Unk_0201f7d0_Fn data_020d7ed0;
extern Unk_0201f7d0_Fn data_020d7e50;
extern Unk_0201f7d0_Fn data_020d79c8;
extern Unk_0201f7d0_Fn data_020d7d28;
extern Unk_0201f7d0_Fn data_020d7d40;
extern Unk_0201f7d0_Fn data_020d7ca0;
extern Unk_0201f7d0_Fn data_020d7ab0;
extern Unk_0201f7d0_Fn data_020d7d60;
extern u8 data_021bec28[];
extern u8 data_021bebf8[];
extern u8 data_021bebc8[];
extern u8 data_021be6c0[];
extern u8 data_021bebb0[];
extern u8 data_021bebe0[];
extern u8 data_021bec40[];
extern u8 data_021be730[];
extern u8 data_020c74fc[];
extern u8 data_021be668[];
extern u8 data_020c7500[];
extern u8 data_021bed90[];
extern u8 data_021beda8[];
extern u8 data_021bed78[];
extern u8 data_021bed60[];
extern u8 data_021dfd8c[];

class Unk_0201f7d0 {
public:
    void func_0201f7d0();
    void func_0201f83c(Unk_0201f7d0_Out *out);
    void func_0201f89c(Unk_0201f7d0_Out *out);
    void func_0201f90c();
    void func_0201f964();
    void func_0201f9c0();
    void func_0201f9f8(Unk_0201f7d0_Out *out);
    void func_0201fa58(Unk_0201f7d0_Out *out);
    void func_0201fb20();
    void func_0201fb54(Unk_0201f7d0_Out *out);
    void func_0201fc48();
    void func_0201fcb0(Unk_0201f7d0_Out *out);
    void func_0201fd10(Unk_0201f7d0_Out *out);
    void func_0201fd70(Unk_0201f7d0_Out *out);
    void func_0201fdd0(Unk_0201f7d0_Out *out);
    void func_0201fe30();
    void func_0201fe5c(Unk_0201f7d0_Out *out);
    void func_0201fed0();
    void func_0201ff3c(Unk_0201f7d0_Out *out);
    void func_0201ff9c();
    void func_0201fff4();
    void func_02020010();
    void func_02020030();
    void func_02020084(Unk_0201f7d0_Out *out);
    BOOL func_02020320();
    void func_0202d1c0(Unk_0201f7d0_Fn fn);
    void func_0202d33c(Unk_0201f7d0_Fn fn);
    void func_0202d328(Unk_0201f7d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201f7d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201f7d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201f7d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
};

#define MK(D, a, b, c, d) func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), a, b, c, d)

void Unk_0201f7d0::func_0201f7d0() {
    Unk_0201f7d0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x5a, 0x5a, data_021bec28);
    func_0201c938(this, &s, 1, 0x6f, 0x6f, data_021bebf8);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ed0);
    func_020679c0(unk_3c, 1);
}

void Unk_0201f7d0::func_0201f83c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 7, 3);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201f89c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 2, data_020c78b0.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

void Unk_0201f7d0::func_0201f90c() {
    u8 b;
    Unk_0201f7d0_Out out;
    func_0201f964();
    func_0202d1d4(this, data_021bebc8);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201f7d0::func_0201f964() {
    void *r4;
    void *r5;
    if (func_0206ed18() != 0) {
        r4 = unk_fc->unk_82c;
        if (unk_128 != 0) {
            func_02080c20(unk_128, func_0206ecf0(), 16);
        } else {
            u32 r = func_0206ecf0();
            func_0207f20c(r4, r, 16, func_0209888c(func_0209750c()));
        }
    }
}

void Unk_0201f7d0::func_0201f9c0() {
    func_0201511c(this, 0x17, data_021be6c0, 0x10, 0);
    func_020151d0(this, 6);
    func_0202d33c(data_020d7e50);
}

void Unk_0201f7d0::func_0201f9f8(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, data_020c78b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201fa58(Unk_0201f7d0_Out *out) {
    if (func_02020320() != 0) {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    } else {
        if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
            func_0202d1d4(this, data_021bebb0);
        } else if (func_02063b8c(100) < 30) {
            func_0202d1d4(this, data_021bebe0);
        } else {
            func_0202d1d4(this, data_021bec40);
        }
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
        if (unk_ac) {
            (this->*unk_ac)(out);
        }
    }
}

void Unk_0201f7d0::func_0201fb20() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}

void Unk_0201f7d0::func_0201fb54(Unk_0201f7d0_Out *out) {
    u32 r5;
    void *r7 = unk_fc->unk_82c;
    if (func_02020320() == 0) {
        Unk_0201fb54_Date d;
        d.a = 0;
        d.b = 0;
        r5 = func_02063b8c(10) & 1;
        func_0209d498(&d);
        if (r5 == 0) {
            u8 v = ((u8 *)&d)[2];
            if (v < 0x13) {
                r5 = 2;
            } else if (v < 0x14) {
                r5 = 0;
            } else if (v < 0x16) {
                r5 = 1;
            } else {
                r5 = 2;
            }
        } else {
            u8 v = ((u8 *)&d)[3];
            if (v != 0) {
                r5 = (v - 1) / 7;
            } else {
                r5 = 0;
            }
            if (func_0209ce68(((u8 *)&d)[5], ((u8 *)&d)[4], 6, 5) != -1 && r5 >= 2) {
                r5--;
            }
            if (r5 >= 5) {
                r5 = 0;
            }
            r5 += 3;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(r7)), data_020c7828.unk_00, data_020c7828.unk_04, r5, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    unk_c4 = data_020d79c8;
}

void Unk_0201f7d0::func_0201fc48() {
    Unk_0201f7d0_S s;
    func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
    func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7d28);
    func_020679c0(unk_3c, 1);
}

void Unk_0201f7d0::func_0201fcb0(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0x11, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201fd10(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xe, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201fd70(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xc, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201fdd0(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xa, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201fe30() {
    func_0206d9fc(this);
    func_02079568(data_021dfd8c, func_020805c4(unk_fc->unk_82c));
}

void Unk_0201f7d0::func_0201fe5c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 8, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7d40;
}

void Unk_0201f7d0::func_0201fed0() {
    Unk_0201f7d0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x44, 0x44, data_021bed90);
    func_0201c938(this, &s, 1, 0x52, 0x52, data_021beda8);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ca0);
    func_020679c0(unk_3c, 1);
}

void Unk_0201f7d0::func_0201ff3c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 6, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201f7d0::func_0201ff9c() {
    u8 b;
    Unk_0201f7d0_Out out;
    func_0202d1d4(this, data_021bed78);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
    func_02014f74(this);
}

void Unk_0201f7d0::func_0201fff4() {
    func_02014558(this);
    func_0202d328(data_020d7ab0);
}

void Unk_0201f7d0::func_02020010() {
    func_02014f38(this, 3);
    func_0202d33c(data_020d7d60);
}

void Unk_0201f7d0::func_02020030() {
    u8 b;
    Unk_0201f7d0_Out out;
    func_0202d1d4(this, data_021bed60);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201f7d0::func_02020084(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0x14, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

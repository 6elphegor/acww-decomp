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

struct Unk_0202ab90_Parent {
    u8 pad_00[0x820];
    u8 unk_820;
    u8 pad_821[0x82c - 0x821];
    void *unk_82c;
};

struct Unk_0202ac98_Buf {
    u16 unk_00;
    u8 unk_02;
};

struct Unk_0202b208_Obj {
    u8 pad_00[0x88];
    u8 unk_88[0x18];
    u8 unk_a0;
};

struct Unk_0201d2d0_H120 {
    u16 unk_00;
    u16 pad;
    u32 unk_04;
    void *unk_08;
};

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0202d1d4(void *, void *);
s32 func_0202d114(void *);
void func_0202d120(void *, void *);
void func_02067abc(void *, u8 *, u32);
void func_020157b8(void *, void *, s32);
void func_0201577c(void *, s32, u8 *, void *, u8 *);
void func_0202b4ac(void *, s32, void *);
void func_0202b4e8(void *, s32, u32);
void *func_0209750c();
void *func_0209888c(void *);
void *func_0201c7f8(void *);
s32 func_02080dd8(void *);
s32 func_02080aa8(void *);
void func_02080abc(void *);
s32 func_02098ffc();
void func_0209cf88(void *);
s32 func_020796f8(void *, void *);
s32 func_020030b4(void *);
u32 func_02002ff8(void *);
void func_0202cdf4(u16 *);
void func_0207ceb4(void *, void *);
void func_0207e268(void *);
void func_0209a610();
u32 func_0209b354();
s32 func_0204be70(void *);
u32 func_0205b4f8();
s32 func_02063b74(s32);
s32 func_02063b8c(u32);
s32 func_0209b334(s32);
s32 func_02098f90(void *, u32);
u32 func_02099048(s32);
s32 func_0207f4a4(void *, void *, void *, s32);
void *func_02021738(void *, void *, s32, void *);
void func_020215f8();
void *func_0207fae4(void *);
u8 func_02081318(void *);
s32 func_0207a914(void *, void *, void *);
s32 func_0209865c(void *);
void func_0209d498(void *);
s32 func_0209acb8(s32);
s32 func_0209ac1c(s32);
void *func_02099db4(s32, s32);
void *func_0209a4f0(void *);
s32 func_0209abc4(void *);
s32 func_0209ac44(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0209ac64(void *);
void *func_02098750(void *);
s32 func_0209ab94(void *);
s32 func_0202cee4(void *, s32);
void *func_0202ceb0(void *);
s32 func_02065578(void *);
void func_02065c94(void *);
s32 func_0209ad68(void *);
s32 func_02099ed4(void *, void *);
void func_0202ac98(u16 *, s32);
s32 func_0202ac7c(s32);
s32 func_02097d1c(void *, s32);
void func_02015958(void *, s32, s32, s32, s32, s32);
}

extern Unk_0201d2d0_Data data_020c7570;
extern Unk_0201d2d0_Data data_020c7850;
extern Unk_0201d2d0_Data data_020c75b8;
extern Unk_0201d2d0_Data data_020c7598;
extern Unk_0201d2d0_Data data_020c76e0;
extern Unk_0201d2d0_Data data_020c76f8;
extern Unk_0201d2d0_Data data_020c76d8;
extern Unk_0201d2d0_Data data_020d7a80;
extern u32 data_020d888c[];
extern u32 data_020c7b08[];
extern u8 data_020c7518[];
extern u8 data_020c7508[];
extern u8 data_020d8a88[];
extern u8 data_021dfd8c[];
extern u8 data_021bf064[];
extern u8 data_021befd4[];
extern u8 data_021bf334[];
extern u8 data_021bf37c[];
extern u8 data_021bf964[];
extern u8 data_021be650[];

typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

class Unk_0201d2d0 {
public:
    BOOL func_0202ab90();
    BOOL func_0202ad04();
    BOOL func_0202ad84();
    BOOL func_0202ae30();
    BOOL func_0202aed8();
    BOOL func_0202af68();
    BOOL func_0202b048();
    void func_0202b0b4(Unk_0201d2d0_Out *out);
    void func_0202b208();
    void func_0202b410();
    void func_0202b444();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0202ab90_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0201d2d0_H120 unk_120;
    u32 unk_12c;
    u32 unk_130;
    void *unk_134;
    u8 pad_138[0x15c - 0x138];
    void *unk_15c;
    u8 pad_160[0x198 - 0x160];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};

BOOL Unk_0201d2d0::func_0202ab90() {
    void *r6 = unk_fc->unk_82c;
    u16 v;
    func_0207e268(r6);
    func_0209a610();
    func_0202ac98(&v, func_0209b354());
    unk_120.unk_00 = v;
    if (unk_120.unk_00 != 0xfff1) {
        s32 t = func_02063b74(0xccd) + 0xccd;
        t *= func_0204be70(&unk_120);
        unk_19c = (t >> 14) + func_0205b4f8() * 3;
        unk_19c = func_0202ac7c(unk_19c);
        if (unk_19c <= func_02097d1c(func_02098750(func_0209750c()), 1)) {
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(r6)), data_020c7570.unk_00, data_020c7570.unk_04, 0, 0);
            func_02015958(this, unk_19c, 1, 10, 1, 0);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 func_0202ac7c(s32 x) {
    x = (x + 5) / 10 * 10;
    if (x < 10) {
        x = 10;
    }
    return x;
}

extern "C" void func_0202ac98(u16 *out, s32 idx) {
    Unk_0202ac98_Buf buf;
    s32 i, n;
    *out = 0xfff1;
    if (func_0209b334(idx) == 0 && (u32)idx < 5) {
        if (func_02098f90(&buf, data_020c7b08[idx]) > 0) {
            n = func_02063b8c(buf.unk_02);
            for (i = 0; i < 15; i++) {
                if ((buf.unk_00 >> i) & 1) {
                    if (n == 0) {
                        *out = func_02099048(i);
                        break;
                    }
                    n--;
                }
            }
        }
    }
}

BOOL Unk_0201d2d0::func_0202ad04() {
    u16 v;
    if (func_02098ffc() != -1) {
        func_0202cdf4(&v);
        unk_198 = v;
        unk_19a = 0;
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7850.unk_00, data_020c7850.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202ad84() {
    u16 v[2];
    void *r4;
    if (func_02098ffc() != -1) {
        r4 = unk_fc->unk_82c;
        func_0207ceb4(v, r4);
        unk_198 = v[0];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&v[1]);
            unk_198 = v[1];
            unk_19a = 0;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(r4)), data_020c75b8.unk_00, data_020c75b8.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202ae30() {
    void *r6 = unk_fc->unk_82c;
    s32 flag = 0;
    s32 i;
    u32 buf[8];
    s32 n;
    for (i = 0; i < 8; i++) {
        buf[i] = flag;
    }
    n = func_0207f4a4(r6, buf, func_0209888c(func_0209750c()), 2);
    if (n > 0) {
        unk_134 = func_02021738(r6, buf, n, (void *)func_020215f8);
    }
    if (unk_134 == 0) {
        flag = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7598.unk_00, data_020c7598.unk_04, flag, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_0202aed8() {
    u32 v;
    func_0209cf88(&v);
    if (unk_120.unk_08 != 0 && func_02080dd8(unk_120.unk_08) >= 0 && func_020796f8(data_021dfd8c, &v)) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76e0.unk_00, data_020c76e0.unk_04, 0, 0);
        func_0202d1d4(this, data_021bf064);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202af68() {
    s32 r4 = 0;
    u32 r6;
    if (unk_120.unk_08 != 0) {
        r6 = 0;
        if (func_02080aa8(unk_120.unk_08) == 0) {
            if (func_02080dd8(unk_120.unk_08) >= 0x50) {
                if (func_02098ffc() != -1) {
                    func_02080abc(unk_120.unk_08);
                    r4 = 1;
                } else {
                    r4 = 2;
                }
            } else {
                r4 = 3;
            }
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76f8.unk_00, data_020c76f8.unk_04, r4, 0);
        if (func_020030b4(func_020805c4(unk_fc->unk_82c))) {
            r6 = func_02002ff8(func_020805c4(unk_fc->unk_82c));
        }
        unk_198 = r6 < 0x9c ? 0x47d8 + r6 * 4 : 0x47d8;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202b048() {
    Unk_0202ab90_Parent *p = unk_fc;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(p->unk_82c)), data_020c76d8.unk_00, 9, p->unk_820 & 1, data_020c76d8.unk_04);
    func_0202d1d4(this, data_021befd4);
    return TRUE;
}

void Unk_0201d2d0::func_0202b0b4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data local = data_020d7a80;
    u32 t = func_02003098(func_020805c4(unk_fc->unk_82c));
    u32 r7 = 0;
    void *r6;
    s32 i;
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, 0);
    if (func_0201c7f8(unk_fc)) {
        r6 = ((Unk_0202ab90_Parent *)func_0201c7f8(unk_fc))->unk_82c;
        r7 = func_02003098(func_020805c4(r6));
        func_0202d048(this, &unk_130, &unk_12c, r6, 0);
    }
    if (r7 < 6) {
        local.unk_00 = data_020d888c[r7];
    }
    if (local.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, t, local.unk_00, local.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_020157b8(this, func_020805c4(unk_fc->unk_82c), 0);
    if (func_0201c7f8(unk_fc)) {
        func_020157b8(this, func_020805c4(((Unk_0202ab90_Parent *)func_0201c7f8(unk_fc))->unk_82c), 1);
    }
    for (i = 0; i < 5; i++) {
        func_0202b4e8(this, i + 2, data_020c7518[i]);
    }
}

void Unk_0201d2d0::func_0202b208() {
    void *r6 = func_0209750c();
    void *r7 = unk_fc->unk_82c;
    void *r4 = (void *)func_0209865c(r6);
    u32 v = func_0207a914(data_021dfd8c, r7, r6);
    Unk_0201d2d0_Out out;
    u8 b;
    u32 buf[2];
    if (v < 0x16) {
        buf[0] = 0;
        buf[1] = 0;
        func_0209d498(buf);
        switch (func_0209acb8(v)) {
        case 0:
            break;
        case 1:
            unk_15c = func_02099db4((s32)r4, func_0209ac1c(v));
            if (unk_15c != 0) {
                if (func_0209abc4(func_0209a4f0(unk_15c)) == 0) {
                    if (func_0209d3d0((void *)func_0209ac44(func_0209a4f0(unk_15c)), buf, 0x3f) == -1) {
                        func_0202d1d4(this, data_021bf334);
                        func_0202d120(this, func_0209a4f0(unk_15c));
                    } else {
                        switch (func_0209ac64(func_0209a4f0(unk_15c))) {
                        case 10:
                            r4 = func_02098750(r6);
                            if (func_0202cee4(r4, func_0209ab94(func_0209a4f0(unk_15c))) == -1) {
                                func_0202d1d4(this, data_021bf37c);
                                func_0202d120(this, func_0209a4f0(unk_15c));
                            }
                            break;
                        case 19:
                            r4 = func_0202ceb0(func_02098750(r6));
                            if (r4 != 0 && func_02065578(r4) == 8) {
                                func_02065c94(r4);
                                func_0202d1d4(this, data_021bf37c);
                                func_0202d120(this, func_0209a4f0(unk_15c));
                            }
                            break;
                        }
                    }
                }
            }
            break;
        case 3: {
            u8 *p = (u8 *)r4 + 0x88;
            void *q = p + 0xc;
            void *s = p + 0x18;
            if (func_0209ad68(q) != 0 && func_0209ac64(q) == 0x15 && func_0209abc4(q) == 0 && func_02099ed4(p, func_020805c4(r7)) != 0 && func_0209d3d0(buf, s, 0x3f) == 1) {
                func_0202d1d4(this, data_021bf964);
                func_0202d120(this, q);
            }
            break;
        }
        }
    }
    if (func_0202d114(this) == 0) {
        func_0202d1d4(this, data_021be650);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202b410() {
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, 0);
}

void Unk_0201d2d0::func_0202b444() {
    void *r4 = unk_fc->unk_82c;
    u8 buf[2];
    s32 i;
    if (r4 != 0) {
        buf[0] = func_02081318(func_0207fae4(r4));
        buf[1] = 0;
        func_0201577c(this, 0, buf, data_020d8a88, &buf[1]);
        func_0202b4ac(this, 6, r4);
    }
    for (i = 0; i < 4; i++) {
        func_0202b4e8(this, i + 7, data_020c7508[i]);
    }
}

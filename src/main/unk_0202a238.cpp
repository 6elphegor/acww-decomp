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

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x820];
    u8 unk_820;
    u8 pad_821[0x82c - 0x821];
    void *unk_82c;
};

struct Unk_0202a750_S {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0201d568_S {
    u8 pad_00[0x20];
    volatile u8 unk_20;
    s8 unk_21;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
typedef s32 (Unk_0201d2d0::*Unk_0202a750_Fn)();

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0200303c(void *, s32, u32, u32);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
s32 func_020b30e0(void *, void *, u8 *);
s32 func_02063b8c(s32);
s32 func_02063b74(s32);
s32 func_0206ed18();
u32 func_0206ecf0();
void func_0207fb04(void *, u32, s32);
s32 func_02080f94(u32);
void func_02080b80(void *, u32, s32);
void *func_0209750c();
void *func_0209888c(void *);
void func_0207f1a8(void *, u32, s32, void *);
void func_02115fb4(void *, s32, s32);
void func_0201511c(void *, s32, void *, s32, s32);
void func_020151d0(void *, s32);
s32 func_02116048(void *, void *, s32);
s32 func_02020a00(void *, void *, s32);
s32 func_0202b4e8(void *, s32, s32);
s32 func_0201578c(void *, void *, u32, u32);
void func_0207e268(void *);
void *func_0209a610();
void *func_0209b354();
s32 func_02098ffc();
void func_0207ceb4(void *, void *);
void func_0202cdf4(void *);
s32 func_0204be70(void *);
s32 func_0205b4f8();
s32 func_0202ac7c(s32);
void *func_02098750(void *);
s32 func_02097d1c(void *, s32);
void func_02015958(void *, s32, u32, s32, s32, s32);
void func_0202ac98(void *, void *);
}

extern u8 data_020c7538[];
extern u32 data_020c76e0, data_020c7a38[];
extern Unk_0201d2d0_Data data_020c76d8, data_020c77a0, data_020c7600;
extern u8 data_021bf07c[], data_021bf0f4[], data_021bf034[], data_021bf004[], data_021befec[], data_021bf04c[], data_021bf01c[], data_021be6c0[];
extern Unk_0201d2d0_Fn data_020d7ad8, data_020d7db0, data_020d7da8, data_020d7ac8;
extern Unk_0202a750_Fn data_020d7a08, data_020d79e8, data_020d7918, data_020d7a18, data_020d7920, data_020d7910, data_020d79f0, data_020d7be0, data_020d7d98;
extern Unk_0201d2d0_Fn data_020d7ee8, data_020d7cb0, data_020d7c98, data_020d7d30, data_020d7ae0;

class Unk_0201d2d0 {
public:
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    void func_0202a2b8(Unk_0201d2d0_Out *out);
    void func_0202a30c();
    void func_0202a378(Unk_0201d2d0_Out *out);
    void func_0202a3e4(Unk_0201d2d0_Out *out);
    void func_0202a468();
    void func_0202a4d4(Unk_0201d2d0_Out *out);
    void func_0202a540();
    void func_0202a54c();
    void func_0202a618(s32);
    void func_0202a680(Unk_0201d2d0_Out *out);
    void func_0202a6e0();
    void func_0202a750(Unk_0201d2d0_Out *out);
    BOOL func_0202a994();
    BOOL func_0202aac8();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0202a750_S unk_120;
    u8 pad_12c[0x168 - 0x12c];
    Unk_0201d2d0_Fn unk_168;
    Unk_0201d2d0_Fn unk_170;
    Unk_0201d2d0_Fn unk_178;
    Unk_0201d2d0_Fn unk_180;
    Unk_0201d2d0_Fn unk_188;
    u8 pad_190[0x198 - 0x190];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};

extern "C" BOOL func_0202a238(void *a, void *b, u32 c) {
    s32 base, mask, i, j, k, r;
    u8 v;
    if (c < 6) {
        base = data_020c7538[c];
    } else {
        base = 0;
    }
    mask = 0xff;
    k = 8;
    for (i = 0; i < 8; i++) {
        r = func_02063b8c(k);
        for (j = 0; j < 8; j++) {
            if ((mask >> j) & 1) {
                if (r == 0) {
                    v = j + base;
                    if (func_020b30e0(a, b, &v)) {
                        return TRUE;
                    }
                    mask = (u8)(mask & ~(1 << j));
                    break;
                }
                r--;
            }
        }
        k--;
    }
    return FALSE;
}

void Unk_0201d2d0::func_0202a2b8(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    unk_11e = 2;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202a30c() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x45, 0x45, data_021bf07c);
    func_0201c938(this, &s, 1, 0x46, 0x46, data_021bf0f4);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ad8);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_0202a378(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    if (unk_fc->unk_820 == 0) {
        unk_11e = 2;
    } else {
        unk_11e = 3;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202a3e4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Parent *p = unk_fc;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(p->unk_82c)), data_020c76d8.unk_00, 5, p->unk_820 & 1, data_020c76d8.unk_04);
    unk_11e += 7;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_fc->unk_820 = (unk_fc->unk_820 + 1) & 1;
}

void Unk_0201d2d0::func_0202a468() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4a, 0x4a, data_021bf034);
    func_0201c938(this, &s, 1, 0x49, 0x49, data_021bf004);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7db0);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_0202a4d4(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    if (unk_fc->unk_820 == 0) {
        unk_11e = 6;
    } else {
        unk_11e = 11;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202a540() {
    func_0202a618(0);
}

void Unk_0201d2d0::func_0202a54c() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *p;
    if (func_0206ed18()) {
        p = unk_fc->unk_82c;
        func_0202d1d4(this, data_021bf01c);
        if (unk_fc->unk_820 == 0) {
            func_0207fb04(p, func_0206ecf0(), 10);
        } else if (unk_120.unk_08 != 0 && func_02080f94(unk_120.unk_08)) {
            func_02080b80((void *)unk_120.unk_08, func_0206ecf0(), 16);
        } else {
            u32 v = func_0206ecf0();
            func_0207f1a8(p, v, 16, func_0209888c(func_0209750c()));
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202a618(s32) {
    func_02115fb4(data_021be6c0, 0, 0x20);
    if (unk_fc->unk_820 == 0) {
        func_0201511c(this, 0x15, data_021be6c0, 10, 0);
    } else {
        func_0201511c(this, 0x16, data_021be6c0, 16, 0);
    }
    func_020151d0(this, 6);
    func_0202d33c(data_020d7da8);
}

void Unk_0201d2d0::func_0202a680(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76d8.unk_00, 4, 1, data_020c76d8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202a6e0() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4b, 0x4f, data_021befec);
    func_0201c938(this, &s, 1, 0x50, 0x54, data_021bf04c);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ac8);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_0202a750(Unk_0201d2d0_Out *out) {
    static Unk_0202a750_Fn tbl[9] = { data_020d7a08, data_020d79e8, data_020d7918, data_020d7a18, data_020d7920, data_020d7910, data_020d79f0, data_020d7be0, data_020d7d98 };
    s32 r, i;
    u8 arr[9];
    r = 0;
    func_02116048(data_020c7a38, arr, 9);
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, r);
    while (r == 0) {
        i = func_02020a00(this, arr, 9);
        if (i >= 0 && i < 9) {
            r = (this->*tbl[i])();
            if (r == 0) {
                arr[i] = 0;
            }
        } else {
            (this->*tbl[func_02063b8c(2)])();
            break;
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_0202b4e8(this, 4, 3);
    func_0202b4e8(this, 6, 4);
    if (unk_120.unk_00 != 0xfff1) {
        func_0201578c(this, &unk_120, 0, 7);
    }
    if (unk_198 != 0xfff1) {
        func_0201578c(this, &unk_198, 1, 7);
        func_0201578c(this, &unk_198, 2, 7);
    }
    unk_168 = data_020d7ee8;
    unk_170 = data_020d7cb0;
    unk_178 = data_020d7c98;
    unk_180 = data_020d7d30;
    unk_188 = data_020d7ae0;
}

BOOL Unk_0201d2d0::func_0202a994() {
    void *p = unk_fc->unk_82c;
    u16 buf[2];
    s32 t, u;
    func_0207e268(p);
    func_0209a610();
    func_0209b354();
    if (func_02098ffc() != -1) {
        func_0207ceb4(&buf[0], p);
        unk_198 = buf[0];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&buf[1]);
            unk_198 = buf[1];
            unk_19a = 0;
        }
        if (unk_198 != 0xfff1) {
            t = func_02063b74(0xccd) + 0xccd;
            t = (t * func_0204be70(&unk_198)) >> 12;
            u = func_0205b4f8() * 3;
            if (t <= u) {
                u = 0;
            }
            unk_19c = func_0202ac7c(t - u);
            if (unk_19c > 0xbb8) {
                unk_19c = 0xbb8;
            }
            if (unk_19c <= func_02097d1c(func_02098750(func_0209750c()), 1)) {
                func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(p)), data_020c77a0.unk_00, data_020c77a0.unk_04, 0, 0);
                func_02015958(this, unk_19c, 2, 10, 1, 0);
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202aac8() {
    void *p = unk_fc->unk_82c;
    u16 buf[3];
    func_0207e268(p);
    func_0209a610();
    func_0202ac98(&buf[0], func_0209b354());
    unk_120.unk_00 = buf[0];
    if (unk_120.unk_00 != 0xfff1) {
        func_0207ceb4(&buf[1], p);
        unk_198 = buf[1];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&buf[2]);
            unk_198 = buf[2];
            unk_19a = 0;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(p)), data_020c7600.unk_00, data_020c7600.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}

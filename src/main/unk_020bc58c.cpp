#include "types.h"

struct Unk_020bc754_Slot {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[0x18];
    s32 unk_24;
    u8 unk_28[0xc];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    u8 unk_40[0x1d];
    s8 unk_5d;
    u8 unk_5e[0x16];
};

struct Unk_020bccc8_Entry {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a[2];
};

struct Unk_020bca5c_Elem {
    u8 unk_00[0x14];
};

struct Unk_020bc754_Vec {
    s32 x, y, z;
};

struct Unk_02065cd4 {
    Unk_02065cd4();
    ~Unk_02065cd4();
    u8 unk_00[0xf4];
};

struct Unk_0206338c {
    Unk_0206338c(u32 a, u32 b);
    ~Unk_0206338c();
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02062f94_Ret {
    u16 v;
    Unk_02062f94_Ret();
};

struct Unk_020bc99c_Loc {
    u8 a;
    u8 pad;
    u16 b;
};

struct Unk_020bcb04_Ent {
    u16 id;
    u8 pad[10];
};

class Unk_020bc58c {
public:
    void func_020bc58c();
    void func_020bc5cc();
    void func_020bc628();
    void func_020bc6e4();
    void func_020bc718(s32 id);
    Unk_020bc754_Slot *func_020bc754(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg);
    s32 func_020bc814(s32 kind, s32 arg);
    void func_020bc928();
    void func_020bc960();
    void func_020bc99c();
    Unk_020bca5c_Elem *func_020bca5c(s32 i);
    void func_020bca6c(s32 i);
    void func_020bcadc(BOOL a);
    void func_020bcb04();
    void func_020bcba4();
    void func_020bcbac();
    s32 func_020bcbd8(s32 id);
    s32 func_020bcbfc(s32 kind, s32 idx);
    void func_020bcc64(s32 k);
    s32 func_020bccc8(s32 t);
    void func_020bcdd8();
    void func_020bce4c();
    void func_020bce8c();
    void func_020bc18c();
    void func_020bbb58();

    Unk_020bc754_Slot unk_0000[0x3c];
    Unk_020bccc8_Entry unk_1b30[5];
    u8 unk_1b6c[0x2eb8 - 0x1b6c];
    u8 unk_2eb8[0x2f08 - 0x2eb8];
    s32 unk_2f08;
    s32 unk_2f0c;
    s32 unk_2f10;
    s32 unk_2f14;
    u16 unk_2f18;
    u16 unk_2f1a;
    s32 unk_2f1c;
    s32 unk_2f20;
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    u8 unk_2f28;
    u8 unk_2f29[0x2f54 - 0x2f29];
    s32 unk_2f54;
    Unk_020bca5c_Elem unk_2f58[4];
    u8 unk_2fa8[0x10];
};

extern "C" {
extern s32 data_021f1448[];
extern s32 data_020d11a8[];
extern s32 data_020d16f0[];
extern s8 data_020d16f5[];
extern u8 data_021d735c[];
extern u8 data_021d7350[];
extern u8 data_020e4630[];
extern u8 data_020e6794[];
extern u8 data_020e4634[];

void func_02064928(s32 a);
s32 func_02063b8c(s32 a);
void func_020be0f4(Unk_020bc754_Slot *s);
void func_020be44c(Unk_020bc754_Slot *s);
void func_020be314(Unk_020bc754_Slot *s, s32 a);
void func_020bd978(void *a, s32 b, void *c);
void func_020bd9a0(void *a, void *b);
s32 func_020bd774(void *a, s32 b);
void func_020bd868(void *a, void *b, s32 c);
void func_020bdb68(void *a, s32 b);
void func_020bd6f0(Unk_020bca5c_Elem *a, s32 b, s32 c, s32 d);
void func_020bd6a8(void *a, s32 b);
void func_020bd69c(void *a, s32 b);
void func_0209cf88(void *a);
void func_0209cf18(void *a);
s32 func_0209cd00(void *a, void *b);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
u32 func_0209cf00();
void *func_02097868(void *p, u32 i);
u32 func_02098044(void *p, u32 n);
u32 func_0209888c(void *p);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void func_02065588(void *a, u32 b, s32 c);
u32 func_02096aac(void *c);
void func_02097ff4(void *p, u32 n);
void func_02062f94(u16 *ret, Unk_0206338c q, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_020bc8a0();
s32 func_020947f0(s32 i);
void func_020947c0(void *p, s32 i);
void func_0209e120(void *p, u32 n);
void func_0209d498(void *p);
void func_02116048(const void *src, void *dst, u32 size);
s32 func_0203f52c(void *a, void *b, s32 c);
BOOL func_0203f2e0(u32 a, void *b, s32 c);
}

void Unk_020bc58c::func_020bce8c() {
    Unk_020bccc8_Entry *p, *end = &unk_1b30[5];
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (id != 0x34) {
            s32 r;
            s32 flag = p->unk_08;
            r = func_020bd774(unk_2eb8, id);
            if (flag == 0) {
                func_020bdb68(unk_1b6c, id);
                func_020bd9a0(p, unk_1b6c);
                p->unk_08 = 1;
                p->unk_09 = 0;
            }
            if (r == 0) {
                func_020bd868(unk_2eb8, unk_1b6c, id);
            }
        }
    }
}

void Unk_020bc58c::func_020bce4c() {
    Unk_020bccc8_Entry *end = &unk_1b30[5], *p;
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (p->unk_09 != 0) {
            if (id == 0x34) {
                p->unk_09 = 0;
            } else if (p->unk_08 == 0) {
                func_020bdb68(unk_1b6c, id);
            }
        }
    }
}

void Unk_020bc58c::func_020bcdd8() {
    Unk_020bccc8_Entry *p, *end = &unk_1b30[5];
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (p->unk_09 != 0) {
            if (id != 0x34) {
                s32 r;
                s32 flag = p->unk_08;
                r = func_020bd774(unk_2eb8, id);
                if (flag == 0) {
                    func_020bd9a0(p, unk_1b6c);
                    p->unk_08 = 1;
                }
                if (r == 0) {
                    func_020bd868(unk_2eb8, unk_1b6c, id);
                }
            }
            p->unk_09 = 0;
        }
    }
}

s32 Unk_020bc58c::func_020bccc8(s32 t) {
    s32 grp;
    BOOL ok;
    grp = data_020d16f0[t * 4];
    ok = FALSE;
    if (grp == 6) {
        ok = TRUE;
    } else if (t == unk_1b30[grp].unk_00) {
        ok = TRUE;
    } else {
        BOOL c0 = unk_1b30[0].unk_04 > 0 ? 1 : ok;
        BOOL c1 = unk_1b30[1].unk_04 > 0 ? 1 : 0;
        BOOL c2 = unk_1b30[2].unk_04 > 0 ? 1 : 0;
        BOOL c3 = unk_1b30[3].unk_04 > 0 ? 1 : 0;
        BOOL c4 = unk_1b30[4].unk_04 > 0 ? 1 : 0;
        if (grp == 0) {
            if (c0 == 0 && c3 == 0) ok = TRUE; else ok = FALSE;
        } else if (grp == 1) {
            if (c1 == 0 && c4 == 0) ok = TRUE; else ok = FALSE;
        } else if (grp == 2) {
            if (c2 == 0 && c3 == 0 && c4 == 0) ok = TRUE; else ok = FALSE;
        } else if (grp == 3) {
            if (c3 == 0 && c0 == 0 && c2 == 0 && c4 == 0) ok = TRUE; else ok = FALSE;
        } else if (grp == 4) {
            if (c4 == 0 && c1 == 0 && c2 == 0 && c3 == 0) ok = TRUE; else ok = FALSE;
        }
    }
    if (ok == 0) grp = 5;
    return grp;
}

void Unk_020bc58c::func_020bcc64(s32 k) {
    if (k == 0) {
        unk_1b30[3].unk_00 = 0x34;
        return;
    }
    if (k == 1) {
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 2) {
        unk_1b30[3].unk_00 = 0x34;
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 3) {
        unk_1b30[0].unk_00 = 0x34;
        unk_1b30[2].unk_00 = 0x34;
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 4) {
        unk_1b30[1].unk_00 = 0x34;
        unk_1b30[2].unk_00 = 0x34;
        unk_1b30[3].unk_00 = 0x34;
    }
}

s32 Unk_020bc58c::func_020bcbfc(s32 kind, s32 idx) {
    s32 r = 0x3c;
    if (idx != 0x3c) {
        if (unk_0000[idx].unk_00 == 0xd) r = idx;
    } else if (kind == 9) {
        Unk_020bc754_Slot *p = &unk_0000[0x2e];
        s32 i;
        for (i = 0x2e; i <= 0x3a; i++, p++) {
            if (p->unk_00 == 0xd) {
                r = i;
                break;
            }
        }
    } else if (unk_2f14 < 0x1e) {
        s32 i;
        Unk_020bc754_Slot *p = &unk_0000[0];
        for (i = 0; i < 0x1e; p++, i++) {
            if (p->unk_00 == 0xd) {
                r = i;
                break;
            }
        }
    }
    return r;
}

s32 Unk_020bc58c::func_020bcbd8(s32 id) {
    s32 r = 0x3c;
    s32 i;
    Unk_020bc754_Slot *p = unk_0000;
    for (i = 0; i < 0x3c; i++, p++) {
        if (id == p->unk_00) {
            r = i;
            break;
        }
    }
    return r;
}

void Unk_020bc58c::func_020bcbac() {
    func_020bcb04();
    func_020bc628();
    func_020bc18c();
    func_020bbb58();
    unk_2f24 = 0;
}

void Unk_020bc58c::func_020bcba4() {
    func_020bc6e4();
}

void Unk_020bc58c::func_020bcb04() {
    u32 a[2];
    u32 b[2];
    u32 c[2];
    Unk_020bcb04_Ent arr[7];
    Unk_020bcb04_Ent *p, *end;
    unk_2f26 = 0;
    unk_2f27 = 0;
    unk_2f28 = 0;
    a[0] = 0;
    a[1] = 0;
    func_0209d498(a);
    func_02116048(a, b, 8);
    end = arr + func_0203f52c(arr, b, 0);
    for (p = arr; p < end; p++) {
        u32 id = p->id;
        BOOL ok;
        func_02116048(a, c, 8);
        if (func_0203f2e0(id, c, 0)) ok = TRUE; else ok = FALSE;
        if (ok) {
            if (id == 0x44) {
                unk_2f26 = 1;
            } else if (id == 0x45) {
                unk_2f27 = 1;
            } else if (id == 0x13 || id == 0xf) {
                unk_2f28 = 1;
            }
        }
    }
}

void Unk_020bc58c::func_020bcadc(BOOL a) {
    if (a) {
        func_0209e120(data_021d7350, 9);
        func_020bcb04();
        func_020bc99c();
    }
}

void Unk_020bc58c::func_020bca6c(s32 i) {
    s32 j = 0;
    if (i < 4) j = i;
    s32 v = func_020947f0(i);
    if (v != 0) {
        u16 buf[4];
        func_020947c0(buf, i);
        s32 flag = 0;
        if (buf[0] >= 0x137b && buf[0] <= 0x137b) flag = 1;
        func_020bd6f0(func_020bca5c(j), i, v, flag);
        func_020bd6a8(unk_2fa8, i);
    } else {
        func_020bd69c(unk_2fa8, i);
    }
}

Unk_020bca5c_Elem *Unk_020bc58c::func_020bca5c(s32 i) {
    return &unk_2f58[i];
}

void Unk_020bc58c::func_020bc99c() {
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = func_02097868(data_021d735c, i);
        if (o != NULL && func_02098044(o, 0x32) != 0) {
            Unk_02065cd4 ctx;
            Unk_020bc99c_Loc l;
            l.a = func_02063b8c(3);
            func_020656dc(&ctx, &l, data_020e4630, data_020e6794, data_020e4634, func_0209888c(o));
            Unk_0206338c q(0, 4);
            func_02062f94(&l.b, q, 0, 0, 1, 1, 0);
            func_02065588(&ctx, l.b, 1);
            if (func_02096aac(&ctx) != 0) {
                func_02097ff4(o, 0x32);
            }
        }
    }
}

void Unk_020bc58c::func_020bc960() {
    func_0209cf18(&unk_2f18);
    unk_2f1c = func_0209cf00();
    unk_2f1a = unk_2f18;
    unk_2f20 = unk_2f1c;
}

void Unk_020bc58c::func_020bc928() {
    unk_2f1a = unk_2f18;
    unk_2f20 = unk_2f1c;
    func_0209cf18(&unk_2f18);
    unk_2f1c = func_0209cf00();
}

extern "C" s32 func_020bc8a0() {
    u8 buf[12];
    buf[2] = 1;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 0;
    func_0209cf88(buf + 6);
    func_0209cf18(buf);
    s32 t = func_0209cd00(buf + 6, buf + 2);
    if (buf[1] < 12) t--;
    if (t < 0) t = 0;
    t = t * 100 + 0x974;
    t = ((t % 0xb89) << 12) / 100;
    t = func_01ffc5a4(t, 0x1d87b);
    t = (t * 0x1c - 0x800) >> 12;
    if (t < 0) t = 0x1b;
    if (t > 0x1b) t = 0x1b;
    return t + 3;
}

s32 Unk_020bc58c::func_020bc814(s32 kind, s32 arg) {
    s32 r = data_020d11a8[kind];
    if (kind == 4) {
        r = func_020bc8a0();
    } else if (kind == 7) {
        if (func_02063b8c(2) != 0) r = 0x28;
    } else if (kind == 5) {
        if ((arg & 1) != 0) r = 0x21;
    } else if (kind == 9) {
        s32 v = (arg & 0xf) + 0x1d;
        if ((u32)(v - 0x1d) <= 1) {
            r = 0x2d;
        } else if (v == 0x21 || v == 0x24 || v == 0x27 || v == 0x2a) {
            r = 0x2b;
        } else {
            r = 0x2c;
        }
    } else if (kind == 2) {
        s32 v = arg & 0xf;
        if (v == 0) r = 0x2f;
        else if (v == 1) r = 0x31;
        else r = 0x30;
    }
    return r;
}

Unk_020bc754_Slot *Unk_020bc58c::func_020bc754(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg) {
    s32 t = func_020bc814(kind, arg);
    Unk_020bc754_Slot *slot = NULL;
    s32 grp = func_020bccc8(t);
    if (grp != 5) {
        s32 n = func_020bcbfc(kind, idx);
        if (n != 0x3c) {
            if (grp != 6) {
                func_020bd978(&unk_1b30[grp], t, unk_2eb8);
                func_020bcc64(grp);
            }
            slot = &unk_0000[n];
            func_020be44c(slot);
            unk_0000[n].unk_00 = kind;
            slot->unk_04 = 1;
            slot->unk_24 = grp;
            slot->unk_08 = t;
            slot->unk_5d = data_020d16f5[t * 16];
            if (vec != NULL) {
                slot->unk_34 = vec->x;
                slot->unk_38 = vec->y;
                slot->unk_3c = vec->z;
            }
            func_020be314(slot, arg);
            unk_2f14++;
        }
    }
    return slot;
}

void Unk_020bc58c::func_020bc718(s32 id) {
    Unk_020bc754_Slot *p, *end = &unk_0000[0x3c];
    for (p = &unk_0000[0]; p < end; p++) {
        if (id == p->unk_00) {
            func_020be0f4(p);
            unk_2f14--;
        }
    }
}

void Unk_020bc58c::func_020bc6e4() {
    Unk_020bc754_Slot *p, *end = &unk_0000[0x3c];
    for (p = &unk_0000[0]; p < end; p++) {
        if (p->unk_00 != 0xd) {
            func_020be0f4(p);
            unk_2f14--;
        }
    }
}

void Unk_020bc58c::func_020bc628() {
    BOOL a, b;
    s32 v = data_021f1448[9];
    a = (v == 3);
    b = (v == 4);
    if (a || b) {
        s32 w = data_021f1448[13];
        s32 idx = 0xd;
        if (w == 1) idx = 0;
        else if (w == 2) idx = 1;
        unk_2f08 = 0x6400;
        unk_2f0c = 0x32;
        if (idx != 0xd) {
            s32 n = a ? 15 : 20;
            s32 i;
            for (i = 0; i < n; i++) {
                func_020bc754(idx, 0x3c, NULL, 1);
            }
        }
        if (a) unk_2f54 = 0x800;
        else unk_2f54 = 0x1000;
    } else {
        unk_2f08 = 0;
        unk_2f0c = 0;
        unk_2f54 = 0;
    }
}

void Unk_020bc58c::func_020bc5cc() {
    if (unk_2f10 <= 0) unk_2f10 = 0x32;
    unk_2f10--;
    if (unk_2f10 <= 0) {
        if (func_02063b8c(8) == 0) {
            func_020bc754(8, 0x3b, NULL, 0);
        }
        func_02064928(0);
        unk_2f10 = func_02063b8c(200) + 10;
    }
}

void Unk_020bc58c::func_020bc58c() {
    if (unk_2f10 <= 0) unk_2f10 = 0x32;
    unk_2f10--;
    if (unk_2f10 <= 0) {
        func_02064928(0);
        unk_2f10 = func_02063b8c(200) + 10;
    }
}

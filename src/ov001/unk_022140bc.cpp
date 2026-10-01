// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02214154_S {
    u32 unk_00;
    u32 *unk_04;
    u8 name[12];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov001_02214358_T {
    u32 v[5];
};

extern "C" {
extern Unk_ov001_02214154_S *data_ov001_0222de7c;
extern u8 data_ov001_0222af7c[];
extern u8 data_ov001_0222afa4[];
extern u16 data_ov001_0222af88[];
extern u16 data_ov001_0222a070[];
extern u8 data_ov001_0222a074[];
extern u8 data_ov001_0222afb8[];
extern u8 func_02111df8[];

s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_0220c5f0(s32 *p, u32 a);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_0220c618(u32 a, u32 b);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_0221dd08(void *a, void *b);
s32 func_ov001_02225238(u32 a, u32 b);
s32 func_ov001_02225254(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
s32 func_ov001_0222516c(u32 a);
s32 func_ov001_02208244();
s32 func_ov001_022267c8(void *a);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225d58(void *a);
s32 func_ov001_0220bf40();
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_0220bfac();
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_0220bf98();
s32 func_ov001_0220bf84(u32 a);
s32 func_ov001_0220bf70(u32 a);
s32 func_ov001_0220bf5c(u32 a);
s32 func_020fedcc(void *a);
s32 func_02116048(void *a, void *b, u32 c);
s32 func_02115fb4(void *a, u32 b, u32 c);
s32 func_0212b770(void *a);

void func_ov001_02214bf4();
void func_ov001_022140bc();
void func_ov001_02214114();
s32 func_ov001_02214154();
void func_ov001_022142c8();
void func_ov001_02214358();
void func_ov001_02214418();
void func_ov001_02214488();
void func_ov001_022144e8();
void func_ov001_022145d0();
void func_ov001_0221467c();
void func_ov001_02214738();
void func_ov001_0221477c();
void func_ov001_022147a4();
s32 func_ov001_022147a8(s32 a);
void func_ov001_0221484c();
void func_ov001_02217e40();

#pragma thumb off

void func_ov001_022140bc() {
    if (func_ov001_022206f8()) return;
    *data_ov001_0222de7c->unk_04 &= 0xc1fffcff;
    func_ov001_0220c668((void *)func_ov001_02214bf4);
}

void func_ov001_02214114() {
    if (func_ov001_02220714()) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_022140bc);
}

s32 func_ov001_02214154() {
    s32 i = 0, off = i, z = i, j;
    Unk_ov001_02214154_S *g;
    u8 tbl[4];
    s32 v;
    u8 out[4];
    tbl[0] = data_ov001_0222af7c[0];
    tbl[1] = data_ov001_0222af7c[1];
    tbl[2] = data_ov001_0222af7c[2];
    tbl[3] = data_ov001_0222af7c[3];
    g = data_ov001_0222de7c;
    for (; i < 4; i++, off += 3) {
        u8 *p = g->name + off;
        if (*p != 0x20) {
            for (j = z; j < 3; j++) {
                u32 a = p[j];
                u32 b = tbl[j];
                if (a > b) return 0;
                if (a < b) break;
            }
        }
    }
    func_ov001_0221dd08(g->name, out);
    func_ov001_0220c5f0(&v, 0);
    if (v == 1) {
        BOOL seen = FALSE;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 8; j++) {
                if (seen) {
                    if (out[i] & (1 << (7 - j))) return 0;
                } else {
                    if ((out[i] & (1 << (7 - j))) == 0) seen = TRUE;
                }
            }
        }
        return 1;
    }
    if (func_020fedcc(out) != 0) return 1;
    return 0;
}

void func_ov001_022142c8() {
    u8 *p;
    s32 i;
    s32 j;
    s32 off;
    i = 0; off = i;
    for (; i < 4; i++, off += 3) {
        p = data_ov001_0222de7c->name + off;
        for (j = 0; j < 3; j++) {
            u32 c = p[j];
            if (c == 0x30 || c == 0x20 || c == 0) {
                p[j] = (j == 2) ? 0x30 : 0x20;
            } else {
                break;
            }
        }
    }
    func_ov001_022144e8();
}

void func_ov001_02214358() {
    Unk_ov001_02214358_T t = *(Unk_ov001_02214358_T *)data_ov001_0222afa4;
    s32 v;
    if (func_ov001_022206f8()) return;
    if (data_ov001_0222de7c->unk_15 == 0) {
        *data_ov001_0222de7c->unk_04 &= 0xc1fffcff;
        func_ov001_0220c668((void *)func_ov001_02214bf4);
        return;
    }
    func_ov001_0220c5f0(&v, 0);
    ((void (*)(void *))t.v[v])(data_ov001_0222de7c->name);
    func_ov001_0220c668((void *)func_ov001_022145d0);
}

void func_ov001_02214418() {
    data_ov001_0222de7c->unk_15 = func_ov001_02220714();
    switch (data_ov001_0222de7c->unk_15) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_ov001_0221e9a0(0xe);
        break;
    default:
        return;
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02214358);
}

void func_ov001_02214488() {
    s32 idx = data_ov001_0222de7c->unk_14;
    if (idx > 3) idx = 3;
    u32 t = data_ov001_0222a074[idx * 3 + 2];
    u32 *reg = data_ov001_0222de7c->unk_04;
    *reg = ((t & 0x1ff) << 16) | ((*reg & 0xfe00ff00) | 0x28);
}

void func_ov001_022144e8() {
    u16 v[6];
    s32 i;
    u8 *q;
    v[0] = data_ov001_0222af88[0];
    v[1] = data_ov001_0222af88[1];
    v[2] = data_ov001_0222af88[2];
    v[3] = data_ov001_0222af88[3];
    v[2] = data_ov001_0222a070[0];
    v[3] = data_ov001_0222a070[1];
    func_ov001_02225238(data_ov001_0222de7c->unk_00, 0);
    v[5] = 0;
    q = data_ov001_0222a074;
    for (i = 0; i < 12; i++, q++) {
        Unk_ov001_02214154_S *g = data_ov001_0222de7c;
        u32 t;
        v[4] = g->name[i];
        t = *q;
        v[0] = t;
        func_ov001_02225254(g->unk_00, t, v[1], v[2], v[3], 2, 0x480, &v[4]);
    }
    func_ov001_0222516c(data_ov001_0222de7c->unk_00);
}

void func_ov001_022145d0() {
    s32 v;
    func_ov001_02208244();
    func_ov001_022267c8((void *)data_ov001_0222de7c->unk_04);
    func_ov001_022253d4(0);
    func_ov001_02208594(data_ov001_0222afb8, (void *)func_02111df8);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c5f0(&v, 0);
    if (v >= 3) v = v + 1;
    func_ov001_0220c654(2, 1);
    func_ov001_0220c618(0, v + 3);
    func_ov001_0220c668((void *)func_ov001_02217e40);
    func_ov001_02225d58((void *)&data_ov001_0222de7c);
}

void func_ov001_0221467c() {
    if (func_ov001_0220bf40()) return;
    u32 t = data_ov001_0222de7c->unk_15;
    if (t == 0) {
        func_ov001_0220c668((void *)func_ov001_022145d0);
        return;
    }
    if (t == 2) {
        func_ov001_02220778(0x2f, 3, 1, -1, 0);
        func_ov001_0220c668((void *)func_ov001_02214114);
        return;
    }
    func_ov001_02220778(0x9b, 2, 1, -1, 0);
    func_ov001_0220c668((void *)func_ov001_02214418);
}

void func_ov001_02214738() {
    if (func_ov001_022250e0(1)) return;
    func_ov001_0220bfac();
    func_ov001_0221e9a0(0x15);
    func_ov001_0220c668((void *)func_ov001_0221467c);
}

void func_ov001_0221477c() {
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02214738);
}

void func_ov001_022147a4() {
}

s32 func_ov001_022147a8(s32 n) {
    u8 buf[4];
    s32 i;
    Unk_ov001_02214154_S *g = data_ov001_0222de7c;
    u8 *p = &g->name[g->unk_14 * 3];
    u32 c = *p;
    u8 *q;
    if (c != 0 && c != 0x20) return 1;
    func_02116048(p, buf, 3);
    buf[3] = 0;
    q = buf;
    for (i = 0; i < 3; i++) {
        if (*q != 0) break;
        *q++ = 0x20;
    }
    if (func_0212b770(buf) >= n) return 1;
    return 0;
}

void func_ov001_0221484c() {
    s32 r = func_ov001_0220bf98();
    Unk_ov001_02214154_S *g;
    switch (r) {
    case 0:
        return;
    case 0x10:
        g = data_ov001_0222de7c;
        if (g->unk_14 == 0 && g->name[2] == 0) goto end;
        func_ov001_0221e9a0(3);
        {
            u32 k = data_ov001_0222de7c->unk_14;
            if (data_ov001_0222de7c->name[k * 3 + 2] == 0) data_ov001_0222de7c->unk_14 = k - 1;
        }
        func_02115fb4(&data_ov001_0222de7c->name[data_ov001_0222de7c->unk_14 * 3], 0, 3);
        g = data_ov001_0222de7c;
        if (g->unk_14 == 0 && g->name[2] == 0) func_ov001_0220bf84(0);
        func_ov001_0220bf70(1);
        func_ov001_0220bf5c(0);
        goto end;
    case 0x11: {
        g = data_ov001_0222de7c;
        u32 k = g->unk_14;
        if (k >= 3) goto end;
        if (g->name[k * 3 + 2] == 0) goto end;
        func_ov001_0221e9a0(1);
        data_ov001_0222de7c->unk_14 = data_ov001_0222de7c->unk_14 + 1;
        func_ov001_0220bf5c(0);
        goto end;
    }
    case 0x12:
        data_ov001_0222de7c->unk_15 = 0;
        func_ov001_0221e9a0(7);
        func_ov001_0220c668((void *)func_ov001_0221477c);
        return;
    case 0x13:
        if (func_ov001_02214154()) {
            func_ov001_0221e9a0(6);
            data_ov001_0222de7c->unk_15 = 1;
        } else {
            data_ov001_0222de7c->unk_15 = 2;
            func_ov001_0221e9a0(9);
        }
        data_ov001_0222de7c->unk_14 = 3;
        {
            volatile u32 *reg = data_ov001_0222de7c->unk_04;
            *reg = (*reg & 0xc1fffcff) | 0x200;
        }
        func_ov001_02214488();
        func_ov001_022142c8();
        func_ov001_0220c668((void *)func_ov001_0221477c);
        return;
    default: {
        if (data_ov001_0222de7c->unk_14 == 3) {
            if (func_ov001_022147a8(0x1a) != 0) goto end;
        }
        func_ov001_0221e9a0(1);
        {
            Unk_ov001_02214154_S *h = data_ov001_0222de7c;
            u32 idx = h->unk_14;
            u8 *base = h->name;
            u32 lr = idx * 3;
            u8 *ip = base + (lr + 2);
            u32 t = *ip;
            if (t == 0) {
                *ip = r;
            } else {
                u8 *p1 = base + (lr + 1);
                u32 c = *p1;
                if (c == 0) {
                    *p1 = t;
                    *ip = r;
                    if (func_ov001_022147a8(0x1a) != 0) {
                        if (data_ov001_0222de7c->unk_14 < 3) data_ov001_0222de7c->unk_14++;
                    }
                } else {
                    base[lr] = c;
                    *p1 = *ip;
                    *ip = r;
                    if (data_ov001_0222de7c->unk_14 < 3) data_ov001_0222de7c->unk_14++;
                }
            }
        }
        func_ov001_0220bf84(1);
        if (data_ov001_0222de7c->unk_14 < 3) {
            func_ov001_0220bf5c(1);
        } else {
            func_ov001_0220bf5c(0);
        }
        if (data_ov001_0222de7c->unk_14 == 3) {
            if (func_ov001_022147a8(0x1a) != 0) func_ov001_0220bf70(0);
        }
    }
    }
end:
    func_ov001_022144e8();
    func_ov001_02214488();
}

#pragma thumb reset

}

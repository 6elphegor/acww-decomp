// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0221d2f0_State {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1a;
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
};

struct Unk_ov001_0221d744_Ent {
    u8 unk_00[0x20];
    u8 unk_20[6];
    u16 unk_26;
    u8 unk_28;
    u8 unk_29;
};

struct Unk_ov001_0221d744_Tlv {
    u8 type;
    u8 len;
    u16 pad;
    u8 *data;
};

struct Unk_ov001_0221d744_Buf {
    u8 cnt;
    u8 pad[3];
    Unk_ov001_0221d744_Tlv v[16];
};

struct Unk_ov001_0221db6c_Blob { u32 v[17]; };

struct Unk_ov001_0221d744_Node {
    u8 unk_00[4];
    u8 unk_04[6];
    u8 unk_0a[2];
    u8 unk_0c;
    u8 unk_0d[0x1f];
    u16 unk_2c;
    u8 unk_2e[0xe];
    u16 unk_3c;
};

struct Unk_ov001_0221d744_List {
    u8 unk_00[0xe];
    u16 unk_0e;
    Unk_ov001_0221d744_Node *unk_10[0x10];
    u16 unk_50[1];
};

extern "C" {
extern u8 data_ov001_0222a460[];
extern Unk_ov001_0221d2f0_State *data_ov001_0222dee8;
extern u8 data_ov001_0222a2a8[];
extern u8 data_ov001_0222a2a4[];
extern u8 data_ov001_0222a2b0[];
extern u8 data_ov001_0222a2ac[];
extern u8 data_ov001_0222a2b8[];
extern u8 *data_ov001_0222deec;

s32 func_ov001_02226118(void *);
s32 func_ov001_02225f40(void *);
s32 func_ov001_0221d270(s32);
s32 func_ov001_0221cfc0(s32);
s32 func_ov001_0221d134();
s32 func_ov001_0221d0e0(s32);
s32 func_ov001_0221d244(s32);
s32 func_ov001_0221d1cc();
s32 func_ov001_0221e93c();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0221e980(s32);
s32 func_ov001_02226fd0(s32, s32);
s32 func_ov001_022247e0(s32);
s32 func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
s32 func_ov001_02225970(s32, s32, void *);
s32 func_ov001_02224b14(s32, s32, s32);
s32 func_ov001_02224558(s32, s32, s32, s32);
s32 func_ov001_022244d8(s32, s32, s32);
s32 func_ov001_02227094(s32, void *, s32, s32);
s32 func_02114594(void *, s32);
s32 func_02128930(void *, void *, s32);
s32 func_02116048(void *, void *, s32);
s32 func_0211f488(void *, void *);
s32 func_0206d49c(void *);
s32 func_0211faa0(void *);
s32 func_021202b4(void *);
s32 func_0212026c(void *);
s32 func_0211fdd4(void *, void *);
s32 func_02115e30(s32, void *, s32);
s32 func_021202f4(void *, void *, s32);
s32 func_0211f5f4();
BOOL func_ov001_0221db28();
void func_ov001_0221d970(u16 *);
void func_ov001_0221d744(Unk_ov001_0221d744_List *);
void func_ov001_0221d3c8();
void func_ov001_0221d2f0();
}

#pragma thumb off

extern "C" {

void func_ov001_0221d2f0() {
    u16 pt[2];
    if (func_ov001_02226118(data_ov001_0222a460) != 0) {
        func_ov001_02225f40(pt);
        Unk_ov001_0221d2f0_State *s = data_ov001_0222dee8;
        if ((s32)pt[0] >= (s32)s->unk_10 - 0x1e) {
            s32 v = s->unk_18 + ((s32)pt[1] - (s32)s->unk_16);
            if (v < 0) {
                v = 0;
            } else {
                s32 m = s->unk_19 - data_ov001_0222a2a8[s->unk_1b];
                if (v >= m) v = m;
            }
            func_ov001_0221d270(v);
            func_ov001_0221cfc0(v);
            data_ov001_0222dee8->unk_1d = 2;
            return;
        }
    }
    func_ov001_0221e93c();
    data_ov001_0222dee8->unk_1c = 0;
    data_ov001_0222dee8->unk_1d = 3;
}


void func_ov001_0221d3c8() {
    data_ov001_0222dee8->unk_1d = 0;
    Unk_ov001_0221d2f0_State *s = data_ov001_0222dee8;
    switch (s->unk_1c) {
    case 0:
        if (s->unk_1e != 0) return;
        switch (func_ov001_0221d134()) {
        case 1:
            if (data_ov001_0222dee8->unk_1b == 0) return;
            func_ov001_0221e9a0(0x16);
            func_ov001_0221e980(0);
            data_ov001_0222dee8->unk_1d = 1;
            func_ov001_02225f40(&data_ov001_0222dee8->unk_14);
            {
                Unk_ov001_0221d2f0_State *t = data_ov001_0222dee8;
                t->unk_18 = t->unk_1a;
            }
            data_ov001_0222dee8->unk_1c = 1;
            break;
        case 2:
            func_ov001_0221d244(2);
            break;
        case 3:
            func_ov001_0221d244(3);
            break;
        case 4:
            func_ov001_0221d1cc();
            break;
        }
        break;
    case 1:
        func_ov001_0221d2f0();
        break;
    case 2:
        if (func_ov001_0221d0e0(2) != 2) {
            data_ov001_0222dee8->unk_1d = 5;
            data_ov001_0222dee8->unk_1c = 0;
            return;
        }
        if (func_ov001_0221d134() != 2) return;
        func_ov001_0221d244(2);
        break;
    case 3:
        if (func_ov001_0221d0e0(3) != 3) {
            data_ov001_0222dee8->unk_1d = 7;
            data_ov001_0222dee8->unk_1c = 0;
            return;
        }
        if (func_ov001_0221d134() != 3) return;
        func_ov001_0221d244(3);
        break;
    }
}

void func_ov001_0221d5b8() {
    data_ov001_0222dee8->unk_1e = 1;
}

void func_ov001_0221d5d0() {
    data_ov001_0222dee8->unk_1e = 0;
}

s32 func_ov001_0221d5e8(s32 a) {
    return func_ov001_0221cfc0(a);
}

u32 func_ov001_0221d5f4() {
    return data_ov001_0222dee8->unk_1d;
}

u32 func_ov001_0221d608() {
    return data_ov001_0222dee8->unk_1a;
}

void func_ov001_0221d61c() {
    func_ov001_02226fd0(0, data_ov001_0222dee8->unk_0c);
    func_ov001_022247e0(data_ov001_0222dee8->unk_00);
    func_ov001_02225d58(&data_ov001_0222dee8);
}

void func_ov001_0221d660(u32 a, u32 b, s32 c, s32 d, u32 e) {
    data_ov001_0222dee8 = (Unk_ov001_0221d2f0_State *)func_ov001_02225db0(0x20, 4);
    data_ov001_0222dee8->unk_1b = a;
    data_ov001_0222dee8->unk_19 = b;
    data_ov001_0222dee8->unk_1a = e;
    func_ov001_02225970(c, d, &data_ov001_0222dee8->unk_10);
    data_ov001_0222dee8->unk_00 = func_ov001_02224b14(0, data_ov001_0222a2a4[a], 1);
    func_ov001_02224558(data_ov001_0222dee8->unk_00, -1, c, d + e);
    func_ov001_022244d8(data_ov001_0222dee8->unk_00, -1, 1);
    data_ov001_0222dee8->unk_0c = func_ov001_02227094(0, (void *)func_ov001_0221d3c8, 0, 0x80);
}


void func_ov001_0221d744(Unk_ov001_0221d744_List *p) {
    Unk_ov001_0221d744_Ent *tbl;
    Unk_ov001_0221d744_Buf buf;
    s32 i;
    tbl = (Unk_ov001_0221d744_Ent *)(data_ov001_0222deec + 0x1300);
    func_02114594(data_ov001_0222deec + 0xf00, 0x400);
    for (i = 0; i < p->unk_0e; i++) {
        Unk_ov001_0221d744_Node *n = p->unk_10[i];
        if (n->unk_0c != 0 && n->unk_3c == 0) {
            s32 j = 0;
            Unk_ov001_0221d744_Ent *e = tbl;
            do {
                if (func_02128930(n->unk_04, e->unk_20, 6) == 0) break;
                e++;
                j++;
            } while (j < 20);
            if (j == 20) {
                j = 0;
                e = tbl;
                do {
                    if (func_02128930(e->unk_20, data_ov001_0222a2b0, 6) == 0) break;
                    e++;
                    j++;
                } while (j < 20);
                if (j == 20) return;
            }
            e = tbl + j;
            func_02116048(n->unk_04, e->unk_20, 6);
            func_02116048(&n->unk_0c, e, 0x20);
            e->unk_26 = p->unk_50[i];
            if ((n->unk_2c & 0x10) == 0) {
                e->unk_28 = 0;
            } else {
                e->unk_28 = 1;
                func_0211f488(&buf, n);
                s32 k;
                s32 cnt = buf.cnt;
                for (k = 0; k < cnt; k++) {
                    if (buf.v[k].type == 0x30) {
                        e->unk_28 = 2;
                        break;
                    }
                    if (buf.v[k].type == 0xdd && buf.v[k].len >= 4 && func_02128930(buf.v[k].data, data_ov001_0222a2ac, 4) == 0) {
                        e->unk_28 = 2;
                        break;
                    }
                }
            }
        }
    }
}


void func_ov001_0221d970(u16 *p) {
    if (p[1] != 0) return;
    if (data_ov001_0222deec[0x1e48] != 0) return;
    if (p[0] != 0x26) return;
    switch (p[4]) {
    case 5:
        func_ov001_0221d744((Unk_ov001_0221d744_List *)p);
        func_ov001_0221db28();
        break;
    case 4:
        func_ov001_0221db28();
        break;
    default:
        func_0206d49c(p);
        break;
    }
}

s32 func_ov001_0221da0c(Unk_ov001_0221d744_Ent **out) {
    s32 cnt = 0;
    s32 i = 0;
    *out = (Unk_ov001_0221d744_Ent *)(data_ov001_0222deec + 0x1300);
    Unk_ov001_0221d744_Ent *e = *out;
    for (; i < 20; i++, e++) {
        if (func_02128930(e->unk_20, data_ov001_0222a2b0, 6) != 0) cnt++;
    }
    return cnt;
}

BOOL func_ov001_0221da70() {
    data_ov001_0222deec[0x1e48] = 1;
    func_0211faa0(data_ov001_0222deec + 0x168c);
    if (*(u16 *)(data_ov001_0222deec + 0x168c) != 2) {
        if (func_021202b4((void *)func_ov001_0221d970) != 2) return FALSE;
        do {
            func_0211faa0(data_ov001_0222deec + 0x168c);
        } while (*(u16 *)(data_ov001_0222deec + 0x168c) != 2);
    }
    if (func_0212026c((void *)func_ov001_0221d970) != 2) return FALSE;
    return TRUE;
}

BOOL func_ov001_0221db28() {
    if (func_0211fdd4((void *)func_ov001_0221d970, data_ov001_0222deec + 0x1648) == 2) return TRUE;
    return FALSE;
}

BOOL func_ov001_0221db6c() {
    volatile u16 z = 0;
    func_02115e30(z, data_ov001_0222deec + 0x1300, 0x348);
    if (func_021202f4(data_ov001_0222deec, (void *)func_ov001_0221d970, 3) != 2) return FALSE;
    u8 *g;
    do {
        func_0211faa0(data_ov001_0222deec + 0x168c);
        g = data_ov001_0222deec;
    } while (*(u16 *)(g + 0x168c) != 2);
    *(Unk_ov001_0221db6c_Blob *)(g + 0x1648) = *(Unk_ov001_0221db6c_Blob *)data_ov001_0222a2b8;
    *(u32 *)(g + 0x1648) = (u32)(g + 0xf00);
    *(u16 *)(data_ov001_0222deec + 0x1650) = func_0211f5f4();
    if (func_ov001_0221db28() != 0) return TRUE;
    return FALSE;
}

}

#pragma thumb reset

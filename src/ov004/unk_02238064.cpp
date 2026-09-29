#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void func_02133ef8(void *p, s32 n);
s32 func_020639e8(char *buf, const char *fmt, ...);
BOOL func_02063f18(char *s);
s32 func_020641ec(char *s, s32 a, s32 b, s32 c);
u32 func_0209c25c(void *self, void *p);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0205c054();
void func_0205c038();
u32 func_0209c0ac(void *self);
BOOL func_0209c0d0(void *self, u32 a, char *s);
void func_0209c0c8(void *self);
u32 func_0209c348(u32 self);
void func_020555ec(void *self, u32 a, s32 b);
BOOL func_02054800(void *self, u32 a);
void func_02054720(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02054710(void *self);
BOOL func_02055bcc(void *self, u32 a, u32 b);
void func_02055b38(void *self, s32 a, s32 b, s32 c, s32 d);
u32 func_020554c0(void *self);
void func_02055a9c(void *self, u32 a);
void func_02003cbc(void *self);
u32 func_02106788(u32 a);
u32 func_021067a4(u32 a, s32 b);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, s32 b);
u32 func_02106654();
u32 func_02106670(u32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
u32 func_ov004_02237440();
void func_ov004_022378e4(void *m);
void func_ov004_0223756c(void *m);
}

extern u8 data_021f482c[];
extern u8 data_ov004_0224ecc8[];
extern u8 data_ov004_022523f4[];
extern char data_ov004_0224ef74[], data_ov004_0224ef88[], data_ov004_0224ef9c[], data_ov004_0224efb0[];
extern char data_ov004_0224efc4[], data_ov004_0224efd8[], data_ov004_0224efec[], data_ov004_0224f000[];
extern char data_ov004_0224f014[], data_ov004_0224f028[], data_ov004_0224f03c[], data_ov004_0224f048[];
extern char data_ov004_0224f054[], data_ov004_0224f060[];
struct Unk_ov004_022380a4_Tbl {
    void (*f)(void *);
    u32 v;
};
extern Unk_ov004_022380a4_Tbl data_ov004_0224edac[];

extern "C" {
void func_ov004_02238498(void *m, u8 *s);
s32 func_ov004_02238448();

// clamp x/z of the slot position against its bounds
void func_ov004_02238064(void *m, u8 *s, s32 *p) {
    s32 *hi = (s32 *)(s + 0x60);
    s32 *lo = (s32 *)(s + 0x58);
    s32 *v = (s32 *)(s + 0x2c8);
    if (v[0] < lo[0] || v[0] > hi[0]) v[0] = p[0];
    if (v[2] < lo[1] || v[2] > hi[1]) v[2] = p[2];
}

void func_ov004_022380a4(u8 *m, u8 *s) {
    u32 sp8;
    u32 res;
    u32 sp10;
    u8 *mdl;
    u8 *rec;
    u32 sp1c;
    res = func_0209c25c(m + 0x180, s + 0x284);
    mdl = s + 0x288;
    char nm[0x10];
    char pth[0x18];
    char buf3[0x24];
    u32 tmp;
    u8 *r6;
    BOOL ok;
    s32 t;

    func_02133ef8(nm, 0x11);
    func_02133ef8(pth + 1, 0x17);
    t = *(s8 *)(s + 0x196);
    if (t == 0x25 && s[0x22] == 0) {
        func_020639e8(nm, data_ov004_0224ef74);
        data_ov004_0224ecc8[t * 4] = 1;
    } else if (t == 0x18) {
        func_020639e8(nm, data_ov004_0224ef88, 0x3c);
    } else if (t == 0x23) {
        func_020639e8(nm, data_ov004_0224ef9c);
    } else if (t == 0x38) {
        func_020639e8(nm, data_ov004_0224efb0);
    } else if (t < 10) {
        func_020639e8(nm, data_ov004_0224efc4, t);
    } else if (t < 0x14) {
        func_020639e8(nm, data_ov004_0224efd8, t);
    } else if (t < 0x1e) {
        func_020639e8(nm, data_ov004_0224efec, t);
    } else if (t < 0x28) {
        func_020639e8(nm, data_ov004_0224f000, t);
    } else if (t < 0x32) {
        func_020639e8(nm, data_ov004_0224f014, t);
    } else {
        func_020639e8(nm, data_ov004_0224f028, t);
    }
    func_020639e8(pth + 1, data_ov004_0224f03c, nm);
    if (func_02063f18(pth + 1)) {
        if (func_0209c0d0(mdl, res, pth + 1)) {
            r6 = s + 0xb0;
            func_020555ec(r6, func_0209c0ac(mdl), 0);
            rec = data_ov004_0224ecc8 + t * 4;
            if (*rec) {
                func_020639e8(pth + 1, data_ov004_0224f048, nm);
            } else {
                func_020639e8(pth + 1, data_ov004_0224f054, nm);
            }
            if (func_02063f18(pth + 1)) {
                sp10 = func_0209c348(res);
                if (t == 0x38) {
                    tmp = *(u32 *)(m + 0x19c) = func_020641ec(pth + 1, *(s32 *)data_021f482c, 4, 0);
                } else if (t == 0x23) {
                    tmp = *(u32 *)(m + 0x198) = func_020641ec(pth + 1, *(s32 *)data_021f482c, 4, 0);
                } else {
                    tmp = func_020641ec(pth + 1, sp10, 4, 0);
                }
                if (tmp) {
                    ok = TRUE;
                    if (*rec) {
                        sp8 = func_021067a4(func_02106788(tmp), 0);
                    } else {
                        sp8 = func_021065f8(func_021065dc(tmp), 0);
                    }
                    if (func_02054800(r6, sp10)) {
                        s32 k = 0x1000;
                        if (t == 0x35 || t == 9) k = 0;
                        func_02054720(r6, sp8, 0, k, 0, 0);
                        func_02054710(r6);
                    }
                    if (t == 0x18) {
                        func_020639e8(buf3, data_ov004_0224f060, 0x3c);
                        ok = FALSE;
                        if (func_02063f18(buf3)) {
                            if (func_020641ec(buf3, sp10, 4, ok)) {
                                sp1c = func_02106670(func_02106654(), ok);
                                if (func_02055bcc(s, *(u32 *)(r6 + 0x5c), sp10)) {
                                    func_02055b38(s, sp1c, ok, 0x1000, ok);
                                    func_02055a9c(s, func_020554c0(r6));
                                    ok = TRUE;
                                }
                            }
                        }
                    }
                    if (ok) {
                        data_ov004_0224edac[t].f(s);
                        func_02003cbc(s + 0x24);
                        *(u32 *)(s + 0x2d4) = data_ov004_0224edac[t].v;
                        *(u32 *)(s + 0x198) = 2;
                    }
                }
            }
        }
    }
}

BOOL func_ov004_02238390(u8 *m) {
    func_0209c1a4(m + 0x180, 0x20, 0x400, 0x40, 0x9c4, (void *)func_0205c054, (void *)func_0205c038, 0);
    func_ov004_022378e4(m);
    return TRUE;
}

BOOL func_ov004_022383d8(u8 *m, u8 v) {
    s32 i = func_ov004_02238448();
    BOOL z = FALSE;
    u8 *p;
    if (i != -1) {
    p = data_ov004_022523f4 + i * 0x2d8;
    p[0x196] = v;
    *(s32 *)(p + 0x198) = 1;
    func_0209c25c(m + 0x180, p + 0x284);
    func_0209c0c8(p + 0x288);
    func_ov004_02238498(m, p);
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1c) = 0;
    return TRUE;
    }
    return z;
}

s32 func_ov004_02238448() {
    u8 *p = data_ov004_022523f4;
    u8 i;
    for (i = 0; i < 0x20; p += 0x2d8, i++) {
        if (*(u32 *)(p + 0x198) == 0) return i;
    }
    return -1;
}

void *func_ov004_0223847c() {
    void *m = Unk_020d8c7c_Base::operator new(0x1a0);
    if (m) func_ov004_0223756c(m);
}

struct Unk_ov004_02238498_Pad {
    u32 v[0xa9];
    Unk_ov004_02238498_Pad() {}
    ~Unk_ov004_02238498_Pad() {}
};

void func_ov004_02238498(void *m, u8 *s) {
    Unk_ov004_02238498_Pad pad;
    s32 *v = (s32 *)(s + 0x2c8);
    u32 r = func_ov004_02237440();
    switch (*(s8 *)(s + 0x196)) {
    case 0x0:
        v[0] = 0x176; v[1] = 0x13; v[2] = 0x71;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x1:
        v[0] = 0x170; v[1] = 0x13; v[2] = 0x9c;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x2:
        v[0] = 0x17f; v[1] = 0x13; v[2] = 0x85;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x3:
        v[0] = 0x177; v[1] = 0x13; v[2] = 0xd0;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x4:
        v[0] = 0x184; v[1] = 0x13; v[2] = 0xb5;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x5:
        v[0] = 0x187; v[1] = 0x13; v[2] = 0xe4;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x6:
        v[0] = 0x178; v[1] = 0x13; v[2] = 0xfb;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x7:
        v[0] = 0x170; v[1] = 0x13; v[2] = 0x123;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x8:
        v[0] = 0x128; v[1] = 0x40; v[2] = 0x66;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x9:
        v[0] = 0x82; v[1] = 0x1c; v[2] = 0x1aa;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0xa:
        v[0] = 0xd0; v[1] = 0x13; v[2] = 0xfc;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0xb:
        v[0] = 0x86; v[1] = 0x26; v[2] = 0x1a6;
        *(u8 *)(s + 0x22) = r & 0xe;
        break;
    case 0xc:
        v[0] = 0x146; v[1] = 0x8; v[2] = 0xf6;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0xd:
        v[0] = 0x185; v[1] = 0x8; v[2] = 0x140;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0xe:
        v[0] = 0xb5; v[1] = 0x13; v[2] = 0x141;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0xf:
        v[0] = 0x181; v[1] = 0x13; v[2] = 0x13f;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x10:
        v[0] = 0x8e; v[1] = 0x24; v[2] = 0xd1;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x11:
        v[0] = 0x8a; v[1] = 0x1a; v[2] = 0xd5;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x12:
        v[0] = 0xbe; v[1] = 0x1a; v[2] = 0x4d;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x13:
        v[0] = 0xb8; v[1] = 0x22; v[2] = 0x4b;
        *(u8 *)(s + 0x22) = r & 0x1a;
        break;
    case 0x14:
        v[0] = 0xf1; v[1] = 0x24; v[2] = 0x3d;
        *(u8 *)(s + 0x22) = r & 0x1b;
        break;
    case 0x15:
        v[0] = 0x16c; v[1] = 0x14; v[2] = 0xd2;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x16:
        v[0] = 0x132; v[1] = 0x14; v[2] = 0x10d;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x17:
        v[0] = 0x178; v[1] = 0x14; v[2] = 0x122;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x18:
        v[0] = 0x89; v[1] = 0x9; v[2] = 0x104;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x19:
        v[0] = 0x7a; v[1] = 0x0; v[2] = 0x12c;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x1a:
        v[0] = 0xaa; v[1] = 0x13; v[2] = 0xfa;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x1b:
        v[0] = 0x15e; v[1] = 0x8; v[2] = 0x118;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x1c:
        v[0] = 0x19f; v[1] = 0x8; v[2] = 0x11a;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x1d:
        v[0] = 0x16f; v[1] = 0x8; v[2] = 0xf2;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x1e:
        v[0] = 0xe2; v[1] = 0x8; v[2] = 0x13e;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x1f:
        v[0] = 0x1a2; v[1] = 0x24; v[2] = 0x4c;
        *(u8 *)(s + 0x22) = r & 0x1e;
        break;
    case 0x20:
        v[0] = 0x91; v[1] = 0x13; v[2] = 0xdf;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x21:
        v[0] = 0x82; v[1] = 0x18; v[2] = 0x65;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x22:
        v[0] = 0x88; v[1] = 0x22; v[2] = 0x62;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x23: case 0x38:
        v[0] = 0x165; v[1] = 0x8; v[2] = 0xec;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x24:
        v[0] = 0xae; v[1] = 0x2a; v[2] = 0xcd;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x25:
        v[0] = 0x53; v[1] = 0x13; v[2] = 0x146;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x26:
        v[0] = 0xeb; v[1] = 0x16; v[2] = 0x42;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x27:
        v[0] = 0x122; v[1] = 0x22; v[2] = 0x52;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x28:
        v[0] = 0x128; v[1] = 0x18; v[2] = 0x55;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x29:
        v[0] = 0x15e; v[1] = 0x16; v[2] = 0x47;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2a:
        v[0] = 0x164; v[1] = 0x20; v[2] = 0x43;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x2b:
        v[0] = 0x82; v[1] = 0x21; v[2] = 0x138;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2c:
        v[0] = 0x19c; v[1] = 0x16; v[2] = 0x51;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2d:
        v[0] = 0xaa; v[1] = 0x1a; v[2] = 0xd3;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2e:
        v[0] = 0x79; v[1] = 0x1a; v[2] = 0xe8;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2f:
        v[0] = 0x7d; v[1] = 0x2a; v[2] = 0xe2;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x30:
        v[0] = 0x12c; v[1] = 0x0; v[2] = 0x12c;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x31:
        v[0] = 0x0; v[1] = 0x0; v[2] = 0x0;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x32:
        v[0] = 0xb4; v[1] = 0x19; v[2] = 0xfa;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x33:
        v[0] = 0x118; v[1] = 0x23; v[2] = 0xf0;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x34:
        v[0] = 0x14a; v[1] = 0x0; v[2] = 0xb4;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x35:
        v[0] = 0x96; v[1] = 0x29; v[2] = 0x133;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x36:
        v[0] = 0x134; v[1] = 0x8; v[2] = 0x11e;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x37:
        v[0] = 0x128; v[1] = 0x8; v[2] = 0x136;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    }
    v[0] = func_01ffcb0c(v[0] << 12, 0x100);
    v[1] = func_01ffcb0c(v[1] << 12, 0x100);
    v[2] = func_01ffcb0c(v[2] << 12, 0x100);
}
}

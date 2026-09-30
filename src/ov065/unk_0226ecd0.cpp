// mwcc-flags: -O4,p
#include "types.h"

// ov065_026: HTTP-ish connect/redirect task (0x0226ecd0..0x0226f7c8)

struct Unk_ov065_0226ecfc_Glob {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x100];
    void *(*unk_108)(const void *tag, u32 size);
    void (*unk_10c)(const void *tag, void *p, u32 z);
    u32 pad110;
    char *unk_114;
    char *unk_118;
    u8 pad11c[0x1dc - 0x11c];
    u8 unk_1dc[4];
};

struct Unk_ov065_0226ecfc_Ctx {
    u8 pad00[0x24];
    s32 unk_24;
    u8 pad28[0x938 - 0x28];
    s32 unk_938;
    u8 pad93c[0x968 - 0x93c];
    u8 unk_968[0x9d4 - 0x968];
    s32 unk_9d4;
};

struct Unk_ov065_0226ecfc_Req {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void *(*unk_10)(const void *tag, u32 size);
    void (*unk_14)(const void *tag, void *p, u32 z);
    s32 unk_18;
    s32 unk_1c;
};

struct Unk_ov065_0226ecfc_Out {
    u8 unk_00;
    u8 unk_01;
    u8 pad02[0x14];
    u8 unk_16;
    u8 pad17[0x24 - 0x17];
    void *(*unk_24)(const void *tag, u32 size);
    void (*unk_28)(const void *tag, void *p, u32 z);
};

extern Unk_ov065_0226ecfc_Ctx *data_ov065_0229061c;
extern Unk_ov065_0226ecfc_Glob *data_ov065_02290620;
extern Unk_ov065_0226ecfc_Req data_ov065_02290624;
extern Unk_ov065_0226ecfc_Out data_ov065_02290644;
extern char *data_ov065_0228babc;
extern char *data_ov065_0228b778;
extern s32 data_0220064c;

extern char data_ov065_0228bae4[];
extern char data_ov065_0228bafc[];
extern char data_ov065_0228bb00[];
extern char data_ov065_0228bb08[];
extern char data_ov065_0228bb10[];
extern char data_ov065_0228bb2c[];
extern char data_ov065_0228bb38[];
extern char data_ov065_0228bb58[];
extern char data_ov065_0228bb5c[];
extern char data_ov065_0228bb64[];
extern char data_ov065_0228bb6c[];
extern char data_ov065_0228bb74[];
extern char data_ov065_0228bb84[];
extern char data_ov065_0228bb90[];
extern char data_ov065_0228bb98[];
extern char data_ov065_0228bba0[];

extern "C" {
void func_02114480(void *p);
void func_02114410(void *p);
void func_02113788(void *p);
void func_021132e0(s32 t);
s32 func_01ffa2ec(void);
void func_01ffa3d4(s32 v);
void func_020ff0bc(u64 *out);
s32 func_0212b770(const char *s);
s32 func_0212a438(const char *s);
s32 func_0212a190(const char *a, const char *b);
void func_0212a2ec(char *dst, const char *src, u32 n);
void func_02115fb4(void *p, s32 v, u32 n);
void func_02116048(const void *src, void *dst, u32 n);

s32 func_ov065_0226e4dc(Unk_ov065_0226ecfc_Ctx *c);
s32 func_ov065_0226ebe4(Unk_ov065_0226ecfc_Ctx *c, Unk_ov065_0226ecfc_Req *r);
s32 func_ov065_0226eb6c(Unk_ov065_0226ecfc_Ctx *c);
s32 func_ov065_0226eacc(Unk_ov065_0226ecfc_Ctx *c);
s32 func_ov065_0226eca0(s32 v);
s32 func_ov065_0226ded4(void *tbl, s32 n, s32 a, s32 b);
char *func_ov065_0226de90(void *tbl, s32 n, const char *name);
s32 func_ov065_0226de4c(void *tbl, s32 n, const char *name, char *out, s32 cap);
s32 func_ov065_0226d158(Unk_ov065_0226ecfc_Ctx *c, const char *a, const char *b, void *tbl, s32 n, s32 k);
s32 func_ov065_0226e2e4(Unk_ov065_0226ecfc_Ctx *c, const char *a, const char *b, s32 n);
s32 func_ov065_0226e274(Unk_ov065_0226ecfc_Ctx *c, char *p);
s32 func_ov065_0226dd2c(Unk_ov065_0226ecfc_Out *o, Unk_ov065_0226ecfc_Ctx *c);
s32 func_ov065_0226dbd0(void);
s32 func_ov065_0226db98(void);
s32 func_ov065_0226dbfc(void);
s32 func_ov065_0226db28(s32 *out);
u8 *func_ov065_0226ab5c(u16 *out);
}

struct Unk_ov065_0226ecfc_Tk {
    u64 tick;
    u32 x[3];
};

struct Unk_ov065_0226ecfc_Buf {
    char buf[0x21];
    s32 e;
};

struct Unk_ov065_0226ecfc_PN {
    u16 port;
    char num[4];
};

struct Unk_ov065_0226ecfc_Pad2 {
    u32 v[3];
    Unk_ov065_0226ecfc_Pad2() {}
    ~Unk_ov065_0226ecfc_Pad2() {}
};

struct Unk_ov065_0226ecfc_Pad {
    u8 v[0x1c4];
    Unk_ov065_0226ecfc_Pad() {}
    ~Unk_ov065_0226ecfc_Pad() {}
};

extern "C" s32 func_ov065_0226ecd0(void) {
    Unk_ov065_0226ecfc_Glob *g;
    s32 r;
    func_02114480(data_ov065_02290620->unk_1dc);
    r = data_ov065_02290620->unk_00;
    func_02114410(data_ov065_02290620->unk_1dc);
    return r;
}

extern "C" void func_ov065_0226ecfc(void) {
    char *a = 0;
    s32 n1;
    char *b = 0;
    s32 n2;
    char *c = 0;
    s32 t;
    char *p1;
    char *p2;
    char *loc1;
    char *loc2;
    Unk_ov065_0226ecfc_Ctx *cx;
    s32 v;
    s32 n3;
    s32 n;
    char *p;
    Unk_ov065_0226ecfc_PN pn;
    Unk_ov065_0226ecfc_Tk tk;
    Unk_ov065_0226ecfc_Buf bb;
    Unk_ov065_0226ecfc_Pad pad;

    for (;;) {
        data_ov065_02290624.unk_00 = data_ov065_0228babc;
        data_ov065_02290624.unk_04 = 1;
        data_ov065_02290624.unk_08 = 0;
        data_ov065_02290624.unk_0c = 0x1000;
        data_ov065_02290624.unk_10 = data_ov065_02290620->unk_108;
        data_ov065_02290624.unk_14 = data_ov065_02290620->unk_10c;
        data_ov065_02290624.unk_1c = 0x4e20;
        data_ov065_02290620->unk_04 = -2;
        if (func_ov065_0226ebe4(data_ov065_0229061c, &data_ov065_02290624)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        if (func_ov065_0226eb6c(data_ov065_0229061c)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        func_ov065_0226eacc(data_ov065_0229061c);
        if (data_ov065_0229061c->unk_9d4) {
            func_02113788(data_ov065_0229061c->unk_968);
        }
        cx = data_ov065_0229061c;
        switch (cx->unk_24) {
        case 2:
            data_ov065_02290620->unk_04 = -1;
        default:
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(3);
            goto end;
        case 8:
            break;
        }
        if (func_ov065_0226ded4(data_ov065_02290620->unk_08, 0x20, 0, cx->unk_938) != 1) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        v = func_0212b770(func_ov065_0226de90(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb2c));
        if (data_0220064c == 0x22) {
            func_ov065_0226eca0(2);
            goto end;
        }
        if (v == 200) {
        } else if (v == 0x12e) {
        if (data_ov065_02290620->unk_118 != 0) {
            data_ov065_02290620->unk_04 = -6;
            func_ov065_0226e4dc(data_ov065_0229061c);
            data_ov065_02290624.unk_00 = data_ov065_0228b778;
            data_ov065_02290624.unk_04 = 0;
            data_ov065_02290624.unk_08 = 0;
            data_ov065_02290624.unk_0c = 0x200;
            data_ov065_02290624.unk_10 = data_ov065_02290620->unk_108;
            data_ov065_02290624.unk_14 = data_ov065_02290620->unk_10c;
            data_ov065_02290624.unk_1c = 0x4e20;
            if (func_0212a190(data_ov065_02290624.unk_00, data_ov065_0228bb38)) {
                data_ov065_02290624.unk_18 = 1;
            }
            if (func_ov065_0226ebe4(data_ov065_0229061c, &data_ov065_02290624)) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(1);
                goto end;
            }
            if (func_ov065_0226d158(data_ov065_0229061c, data_ov065_0228bb58, data_ov065_0228bb58,
                                    data_ov065_02290620->unk_08, 0x20, 1)) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(8);
                goto end;
            }
            if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb5c, data_ov065_0228bb64, 7)) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(8);
                goto end;
            }
            {
                s32 ie = func_01ffa2ec();
                func_02115fb4(bb.buf, 0, 0x21);
                func_ov065_0226ab5c(&pn.port);
                func_02116048(func_ov065_0226ab5c(0), bb.buf, pn.port);
                func_01ffa3d4(ie);
            }
            if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb6c, bb.buf, func_0212a438(bb.buf))) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(8);
                goto end;
            }
            p = data_ov065_02290620->unk_118;
            if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb74, p, func_0212a438(p))) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(8);
                goto end;
            }
            data_ov065_02290620->unk_10c(data_ov065_0228bb10, data_ov065_02290620->unk_118, 0);
            data_ov065_02290620->unk_118 = 0;
            if (func_ov065_0226eb6c(data_ov065_0229061c)) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(1);
                goto end;
            }
            func_ov065_0226eacc(data_ov065_0229061c);
            if (data_ov065_0229061c->unk_9d4) {
                func_02113788(data_ov065_0229061c->unk_968);
            }
            switch (data_ov065_0229061c->unk_24) {
            case 2:
                data_ov065_02290620->unk_04 = -1;
            default:
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(3);
                goto end;
            case 8:
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(7);
                goto end;
            }
        } else {
            loc1 = func_ov065_0226de90(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb84);
            if (loc1 == 0) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(2);
                goto end;
            }
            data_ov065_02290620->unk_114 =
                (char *)data_ov065_02290620->unk_108(data_ov065_0228bae4, func_0212a438(loc1) + 1);
            p1 = data_ov065_02290620->unk_114;
            if (p1 == 0) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(4);
                goto end;
            }
            func_0212a2ec(p1, loc1, func_0212a438(loc1));
        }
        } else {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(10);
            goto end;
        }
        func_ov065_0226e4dc(data_ov065_0229061c);
        func_020ff0bc(&tk.tick);
        if (tk.tick == 0) {
            data_ov065_02290620->unk_04 = -3;
            data_ov065_02290644.unk_00 = 0;
            data_ov065_02290644.unk_01 = 0;
            data_ov065_02290644.unk_16 = 0;
            data_ov065_02290644.unk_24 = data_ov065_02290620->unk_108;
            data_ov065_02290644.unk_28 = data_ov065_02290620->unk_10c;
            if (func_ov065_0226dd2c(&data_ov065_02290644, data_ov065_0229061c)) {
                func_ov065_0226eca0(5);
                goto end;
            }
            func_ov065_0226dbd0();
            if (func_ov065_0226db98() != 0x14) {
                if (func_ov065_0226db98() == 9) {
                    data_ov065_02290620->unk_04 = -1;
                } else {
                    func_ov065_0226db28(&bb.e);
                    data_ov065_02290620->unk_04 = bb.e;
                }
                func_ov065_0226eca0(6);
                goto end;
            }
            func_ov065_0226dbfc();
        }
        if (v == 200) {
            data_ov065_02290620->unk_04 = 0;
            func_ov065_0226eca0(0xb);
            goto end;
        }
        data_ov065_02290620->unk_04 = -4;
        data_ov065_02290624.unk_00 = data_ov065_0228b778;
        data_ov065_02290624.unk_04 = 0;
        data_ov065_02290624.unk_08 = 0;
        data_ov065_02290624.unk_0c = 0x1000;
        data_ov065_02290624.unk_10 = data_ov065_02290620->unk_108;
        data_ov065_02290624.unk_14 = data_ov065_02290620->unk_10c;
        data_ov065_02290624.unk_1c = 0x9c40;
        if (func_0212a190(data_ov065_02290624.unk_00, data_ov065_0228bb38)) {
            data_ov065_02290624.unk_18 = 1;
        }
        if (func_ov065_0226ebe4(data_ov065_0229061c, &data_ov065_02290624)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        if (func_ov065_0226d158(data_ov065_0229061c, data_ov065_0228bb58, data_ov065_0228bb58,
                                data_ov065_02290620->unk_08, 0x20, 1)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(8);
            goto end;
        }
        if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb5c, data_ov065_0228bb90, 5)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(8);
            goto end;
        }
        {
            s32 ie = func_01ffa2ec();
            func_02115fb4(bb.buf, 0, 0x21);
            func_ov065_0226ab5c(&pn.port);
            func_02116048(func_ov065_0226ab5c(0), bb.buf, pn.port);
            func_01ffa3d4(ie);
        }
        if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb6c, bb.buf, func_0212a438(bb.buf))) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(8);
            goto end;
        }
        p = data_ov065_02290620->unk_114;
        if (func_ov065_0226e2e4(data_ov065_0229061c, data_ov065_0228bb98, p, func_0212a438(p))) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(8);
            goto end;
        }
        data_ov065_02290620->unk_10c(data_ov065_0228bae4, data_ov065_02290620->unk_114, 0);
        data_ov065_02290620->unk_114 = 0;
        if (func_ov065_0226eb6c(data_ov065_0229061c)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        func_ov065_0226eacc(data_ov065_0229061c);
        if (data_ov065_0229061c->unk_9d4) {
            func_02113788(data_ov065_0229061c->unk_968);
        }
        cx = data_ov065_0229061c;
        switch (cx->unk_24) {
        case 2:
            data_ov065_02290620->unk_04 = -1;
        default:
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(3);
            goto end;
        case 8:
            break;
        }
        if (func_ov065_0226ded4(data_ov065_02290620->unk_08, 0x20, 0, cx->unk_938) != 1) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        v = func_0212b770(func_ov065_0226de90(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb2c));
        if (data_0220064c == 0x22) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        if (v != 200) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        if (func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bba0, pn.num, 4) <= 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        v = func_0212b770(pn.num);
        if (data_0220064c == 0x22) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        if (v >= 100) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(6);
            goto end;
        }
        n1 = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bafc, 0, 0);
        if (n1 <= 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        n2 = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb00, 0, 0);
        if (n2 <= 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        n3 = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb08, 0, 0);
        a = (char *)data_ov065_02290620->unk_108(data_ov065_0228bafc, n1 + 1);
        if (a == 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(4);
            goto end;
        }
        b = (char *)data_ov065_02290620->unk_108(data_ov065_0228bb00, n2 + 1);
        if (b == 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(4);
            goto end;
        }
        if (n3 > 0) {
            c = (char *)data_ov065_02290620->unk_108(data_ov065_0228bb08, n3 + 1);
            if (c == 0) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(4);
                goto end;
            }
        }
        n = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bafc, a, n1 + 1);
        if (n < 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        a[n] = 0;
        n = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb00, b, n2 + 1);
        if (n < 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(9);
            goto end;
        }
        b[n] = 0;
        t = 0;
        if (n3 > 0) {
            n = func_ov065_0226de4c(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb08, c, n3 + 1);
            if (n < 0) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(9);
                goto end;
            }
            c[n] = 0;
            t = func_0212b770(c);
            if (data_0220064c == 0x22) {
                func_ov065_0226e4dc(data_ov065_0229061c);
                func_ov065_0226eca0(9);
                goto end;
            }
            t = t * 1000;
            if (t > 0x2bf20) {
                t = 0x2bf20;
            }
        }
        func_ov065_0226e4dc(data_ov065_0229061c);
        data_ov065_02290620->unk_04 = -5;
        data_ov065_02290624.unk_00 = a;
        data_ov065_02290624.unk_04 = 0;
        data_ov065_02290624.unk_08 = 0;
        data_ov065_02290624.unk_0c = 0x1000;
        data_ov065_02290624.unk_10 = data_ov065_02290620->unk_108;
        data_ov065_02290624.unk_14 = data_ov065_02290620->unk_10c;
        data_ov065_02290624.unk_1c = 0x1d4c0;
        if (func_ov065_0226ebe4(data_ov065_0229061c, &data_ov065_02290624)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        if (func_ov065_0226e274(data_ov065_0229061c, b)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(8);
            goto end;
        }
        if (func_ov065_0226eb6c(data_ov065_0229061c)) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(1);
            goto end;
        }
        func_ov065_0226eacc(data_ov065_0229061c);
        if (data_ov065_0229061c->unk_9d4) {
            func_02113788(data_ov065_0229061c->unk_968);
        }
        cx = data_ov065_0229061c;
        switch (cx->unk_24) {
        case 2:
            data_ov065_02290620->unk_04 = -1;
        default:
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(3);
            goto end;
        case 8:
            break;
        }
        if (func_ov065_0226ded4(data_ov065_02290620->unk_08, 0x20, 1, cx->unk_938) != 1) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        loc2 = func_ov065_0226de90(data_ov065_02290620->unk_08, 0x20, data_ov065_0228bb84);
        if (loc2 == 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(2);
            goto end;
        }
        data_ov065_02290620->unk_118 =
            (char *)data_ov065_02290620->unk_108(data_ov065_0228bb10, func_0212a438(loc2) + 1);
        p2 = data_ov065_02290620->unk_118;
        if (p2 == 0) {
            func_ov065_0226e4dc(data_ov065_0229061c);
            func_ov065_0226eca0(4);
            goto end;
        }
        func_0212a2ec(p2, loc2, func_0212a438(loc2));
        func_ov065_0226e4dc(data_ov065_0229061c);
        func_021132e0(t);
    }
end:
    if (a) {
        data_ov065_02290620->unk_10c(data_ov065_0228bafc, a, 0);
    }
    if (b) {
        data_ov065_02290620->unk_10c(data_ov065_0228bb00, b, 0);
    }
    if (c) {
        data_ov065_02290620->unk_10c(data_ov065_0228bb08, c, 0);
    }
}

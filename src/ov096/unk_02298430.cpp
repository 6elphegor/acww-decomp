#include "types.h"

struct Unk_ov096_02294c40 {
    u8 unk_00[0x9c];
    s32 unk_9c;
    s32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u16 unk_ac;
    u16 unk_ae;
    u8 unk_b0;
    u8 unk_b1;
    u8 unk_b2;
    u8 unk_b3;
    u8 unk_b4;
    u8 unk_b5;
    u8 unk_b6;
    u8 unk_b7[2];
    u8 unk_b9;
    u8 unk_ba;
    u8 unk_bb;
    u8 unk_bc;
    u8 unk_bd;
    u8 unk_be;
    u8 unk_bf;
    u8 unk_c0;
    volatile u8 unk_c1;
    u8 unk_c2;
    u8 unk_c3;
    s32 unk_c4;
    u8 unk_c8[0x23c0 - 0xc8];
    u8 unk_23c0[0x2498 - 0x23c0];
    u8 unk_2498[0x24fc - 0x2498];
    u8 unk_24fc[0x27f0 - 0x24fc];
    u8 unk_27f0[0x27fc - 0x27f0];
    u8 unk_27fc[0x2b14 - 0x27fc];
    u8 unk_2b14[8];
};

typedef Unk_ov096_02294c40 S;

static inline BOOL IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_020e416c;

void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
s32 func_ov094_022934d8(void *p, s32 a);
s32 func_ov094_02292e30(void *p);
s32 func_ov094_02293c1c(void *p);
void func_ov094_0229272c(void *p);
s32 func_ov094_02292738(void *p);
void func_ov094_02292864(void *p);
void func_ov094_02292774(void *p, s32 a);

void func_ov002_022006e4(void *p, s32 a);
void func_ov002_02200a58(void *p, u32 a);
void func_ov002_02200a50(void *p, u32 a);
void func_ov002_02200a60(void *p, u32 a);
void func_ov002_02200980(void *p);
void func_ov002_022016e4(void *p, u32 v);
s32 func_ov002_022016cc(void *p);
s32 func_ov002_022017a4(void *p);
s32 func_ov002_022017b4(void *p);
s32 func_ov002_02201438(void *p, u32 a);
s32 func_ov002_022013e4(void *self, s32 p, u32 v);
u32 func_ov002_02201490(void *p);
s32 func_ov002_02203f08(void *p);
s32 func_ov002_02203f78(void *p, s32 a);
s32 func_ov002_02203f28(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
s32 func_ov002_02204234(void *p, s32 a);
s32 func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, s32 x);
s32 func_ov002_02202718(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);

BOOL func_0206ef0c();
BOOL func_0206ef00();
s32 func_0206ed68();
s32 func_02042d10(s32 a);
s32 func_02042830(s32 a);
void func_02042820(s32 a);
s32 func_0200402c(s32 a);
s32 func_02094b48(u16 *p);
s32 func_020951ac();
void *func_0209750c();
void func_0209801c(void *p, u32 a);
s32 func_0208d534(void *p);
void func_0208d644(void *p);

void func_ov096_022973a0(S *s, u32 a);
void func_ov096_022973cc(S *s, u32 a);
void func_ov096_0229751c(S *s);
void func_ov096_02297548(S *s);
s32 func_ov096_02297d50(S *s, u32 id);
s32 func_ov096_02297cc0(S *s, u32 id);
s32 func_ov096_02297c68(S *s, u32 id);
s32 func_ov096_02294d9c(S *s, u32 a);
s32 func_ov096_02294dac(S *s, u32 a);
s32 func_ov096_02294dbc(S *s, u32 a);
void func_ov096_02294ed4(S *s);
void func_ov096_02294ef4(S *s);
void func_ov096_02294f14(S *s);
u32 func_ov096_022982f0(S *s, u32 id);
u32 func_ov096_022982c0(S *s, u32 id);
u32 func_ov096_0229826c(S *s, u32 id);
void func_ov096_02298334(S *s, u32 a, u32 b, void *c);
void func_ov096_0229838c(S *s, u32 a, u32 b, u32 c, u8 d);
void func_ov096_0229806c(S *s, u32 id);
void func_ov096_02296898(S *s);
void func_ov096_02296910(S *s);
void func_ov096_02296964(S *s);
void func_ov096_02297160(S *s);
void func_ov096_022972ec(S *s, u32 a);
void func_ov096_02297358(S *s, u32 a, u32 b);
void func_ov096_02296708(S *s);
void func_ov096_0229673c(S *s);
void func_ov096_02295a44(S *s, u32 a);
void func_ov096_022956a0(S *s, u32 a);
void func_ov096_02295d28(S *s);
s32 func_ov096_02296d88(S *s, u32 a);
s32 func_ov096_02296dbc(S *s, u32 a, u32 b);
u32 func_ov096_02296e70(S *s, u32 a, u32 b);
void func_ov096_022974b8(S *s, u32 a, u32 b);
void func_ov096_022974f4(S *s);
void func_ov096_02297750(S *s, u32 a);
void func_ov096_02297804(S *s);
void func_ov096_02297834(S *s, u32 a);
void func_ov096_022978ac(S *s);
void func_ov096_022975d4(S *s);
u32 func_ov096_02297b9c(S *s, u32 id);
s32 func_ov096_02298c4c(S *s);
void func_ov096_0229865c(S *s);
void func_ov096_0229862c(S *s);
void func_ov096_02298644(S *s);
void func_ov096_0229867c(S *s);
void func_ov096_022986b0(S *s);
void func_ov096_022988b8(S *s);
void func_ov096_0229895c(S *s);
void func_ov096_02298cd8(S *s);
void func_ov096_022985b8(S *s);

void func_ov096_02298430(S *s, u32 a)
{
    s->unk_b4 = a;
    func_ov002_022006e4((u8 *)s + 0x23c0, 1);
    if (s->unk_bb == 0) {
        func_ov096_022973a0(s, a);
    } else {
        func_ov096_022973cc(s, a);
    }
    switch (s->unk_b1) {
    case 1:
        s->unk_ba = 0xc;
        break;
    case 2:
        s->unk_ba = 0xb;
        break;
    }
    func_ov096_0229751c(s);
    func_ov094_02292380();
}

void func_ov096_0229849c(S *s, u32 a)
{
    s->unk_b4 = a;
    func_ov002_022006e4((u8 *)s + 0x23c0, 1);
    func_ov096_022973cc(s, a);
    switch (s->unk_b1) {
    case 1:
        func_ov002_02200a58(s, 6);
        break;
    case 2:
        func_ov002_02200a58(s, 5);
        break;
    }
    func_ov096_02297548(s);
    func_ov096_02294d9c(s, 0x4000);
    func_ov094_02292380();
    s->unk_b9 = 0x26;
}

void func_ov096_02298504(S *s, u32 a)
{
    s32 r6, r7;
    s->unk_b2 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_9c = func_ov096_02297d50(s, s->unk_b2) - r6;
    s->unk_a0 = func_ov096_02297cc0(s, s->unk_b2) - r7;
    s->unk_b3 = a;
    func_ov002_022006b8(s->unk_23c0);
    func_ov002_022006c0(s->unk_23c0);
    s->unk_c2 = 2;
    func_ov096_022985b8(s);
    if (func_ov096_02297c68(s, a)) {
        func_ov096_02294d9c(s, 4);
    } else {
        func_ov096_02294dac(s, 4);
    }
    if (func_ov096_022982f0(s, a) == 0 && a != 0x24) {
        func_ov096_02294ed4(s);
    }
    func_ov094_0229238c();
}

void func_ov096_022985b8(S *s)
{
    func_ov096_02294d9c(s, 0x10000);
    if (func_ov096_022982f0(s, s->unk_b2)) {
        func_ov002_022016e4(s->unk_27f0, 0x22);
        func_ov096_02295a44(s, s->unk_b2);
        if (func_ov002_022016cc(s->unk_27f0) == 0) {
            func_ov096_02294dac(s, 0x10000);
        }
    }
}

void func_ov096_0229860c(S *s)
{
    if (func_0206ef0c()) {
        func_ov096_02298644(s);
    } else {
        func_ov096_0229862c(s);
    }
}

void func_ov096_0229862c(S *s)
{
    func_ov096_02296910(s);
    func_ov002_02200a58(s, 0x19);
}

void func_ov096_02298644(S *s)
{
    func_ov096_02296898(s);
    func_ov002_02200a58(s, 8);
}

void func_ov096_0229865c(S *s)
{
    if (func_0206ef0c()) {
        func_ov096_022986b0(s);
    } else {
        func_ov096_0229867c(s);
    }
}

void func_ov096_0229867c(S *s)
{
    s->unk_b3 = 0x26;
    func_ov096_02296964(s);
    func_ov002_02200980(s);
    func_ov096_022975d4(s);
    func_ov002_02200a58(s, 0xa);
    func_ov096_02297834(s, s->unk_b5);
}

void func_ov096_022986b0(S *s)
{
    func_ov096_02296898(s);
    func_ov096_022978ac(s);
    func_ov002_02200a58(s, 0);
}

void func_ov096_022986cc(S *s)
{
    switch (func_02042d10(s->unk_c4)) {
    case 1:
        if (func_ov096_02294dbc(s, 0x1000)) {
            func_ov094_022934d8((u8 *)s + 0x358, func_ov096_0229826c(s, s->unk_b6));
            func_ov096_0229865c(s);
        } else {
            func_ov096_02297160(s);
            func_ov096_0229865c(s);
        }
        break;
    case 2:
        if (func_ov096_02294dbc(s, 0x1000) == 0) {
            func_ov096_022972ec(s, 1);
        }
        func_ov096_0229865c(s);
        func_ov096_02298334(s, 8, 0xff, 0);
        func_0200402c(0x73);
        break;
    default:
        return;
    }
    func_02042820(s->unk_c4);
    s->unk_c4 = -1;
}

void func_ov096_02298768(S *s)
{
    switch (func_02042830(s->unk_c4)) {
    case 1:
        if (func_ov096_02294dbc(s, 0x1000)) {
            func_ov094_022934d8((u8 *)s + 0x358, func_ov096_0229826c(s, s->unk_b6));
            func_ov096_0229865c(s);
        } else {
            func_ov096_02297160(s);
            func_ov096_0229865c(s);
        }
        break;
    case 2:
        if (func_ov096_02294dbc(s, 0x1000) == 0) {
            func_ov096_022972ec(s, 1);
        }
        func_ov096_0229865c(s);
        func_ov096_02298334(s, 3, 0xff, 0);
        func_0200402c(0x73);
        break;
    default:
        return;
    }
    func_02042820(s->unk_c4);
    s->unk_c4 = -1;
}

void func_ov096_02298804(S *s)
{
    if (s->unk_c1 != 0) {
        s32 r;
        s->unk_c1 = s->unk_c1 - 1;
        r = s->unk_c1 % 5;
        if (r != 0) {
            if (r == 3) {
                func_ov096_02297750(s, s->unk_b6);
            }
        } else {
            func_ov096_02297804(s);
        }
        if (s->unk_c1 == 0) {
            func_ov096_0229806c(s, s->unk_b6);
        }
    } else {
        func_ov002_02200a58(s, 0x2f);
        func_ov096_022988b8(s);
    }
}

void func_ov096_02298870(S *s)
{
    u16 t;
    func_0200402c(0x40);
    func_ov096_02294ef4(s);
    t = func_ov096_02297b9c(s, s->unk_b6);
    if (func_02094b48(&t)) {
        func_ov096_0229806c(s, s->unk_b6);
        func_ov002_02200a58(s, 0x2f);
    }
}

void func_ov096_022988b8(S *s)
{
    if (func_020951ac()) {
        func_ov096_0229865c(s);
    }
}

void func_ov096_022988d0(S *s)
{
    if (func_ov094_02292e30((u8 *)s + 0x358)) {
        void *p = func_0209750c();
        u32 v = s->unk_ac;
        if (v == 0x136a) {
            func_0209801c(p, 0x27);
        } else if (v == 0x137b) {
            func_0209801c(p, 0x28);
        }
        s->unk_b0 = 0;
        func_ov096_02297358(s, s->unk_b6, 1);
        func_ov096_0229865c(s);
    }
}

void func_ov096_02298934(S *s)
{
    if (func_ov094_02293c1c((u8 *)s + 0xdb8)) {
        func_ov096_02297160(s);
        func_ov096_0229865c(s);
    }
}

void func_ov096_0229895c(S *s)
{
    if (func_ov096_02296d88(s, s->unk_c0) == 0) {
        func_ov096_02297160(s);
        func_ov094_0229272c((u8 *)s + 0xde0);
        func_ov096_0229865c(s);
    }
}

void func_ov096_0229898c(S *s)
{
    if (func_ov094_02292738((u8 *)s + 0xde0)) {
        func_ov096_02297160(s);
        func_ov094_02292864((u8 *)s + 0xde0);
        if (s->unk_ac != 0xfff1) {
            if (func_ov096_02294dbc(s, 0x8000)) {
                func_ov096_0229838c(s, 0x24, s->unk_b4, s->unk_ac, 0);
                return;
            }
            func_ov096_022974b8(s, s->unk_ac, 0);
            func_ov096_022972ec(s, 1);
        }
        func_ov002_02200a58(s, 0x27);
        func_ov096_0229895c(s);
    }
}

void func_ov096_02298a14(S *s)
{
    u32 r4;
    s->unk_a4 = func_ov096_02297d50(s, 0x24);
    s->unk_a8 = func_ov096_02297cc0(s, 0x24);
    r4 = s->unk_c0;
    if (r4 != 5 || IsZero(data_020e416c)) {
        func_ov096_02294ef4(s);
    }
    if (func_ov096_02296dbc(s, r4, s->unk_ac)) {
        func_ov002_02200a58(s, 0x26);
        s->unk_ac = func_ov096_02296e70(s, r4, s->unk_ac);
        func_ov094_02292774((u8 *)s + 0xde0, 1);
    }
}

void func_ov096_02298aa0(S *s)
{
    if (func_ov002_022017a4(s->unk_24fc)) {
        if (func_ov096_02294dbc(s, 0x200)) {
            if (func_ov002_02201438(s->unk_24fc, s->unk_be) == 1) {
                func_ov096_02294f14(s);
                return;
            }
        }
        if (func_ov002_022013e4(s->unk_24fc, func_0206ed68(), s->unk_be) == 2) {
            s->unk_bd = s->unk_bd + 1;
            if (s->unk_bd >= func_ov002_02201490(s->unk_24fc)) {
                s->unk_bd = 0;
            }
            func_ov096_022956a0(s, 0);
        } else {
            func_ov096_0229865c(s);
        }
    }
}

void func_ov096_02298b34(S *s)
{
    if (func_ov096_02298c4c(s)) {
        func_ov096_02296898(s);
        func_ov002_02200a58(s, 0x24);
    }
}

void func_ov096_02298b54(S *s)
{
    if (func_ov002_022017b4((u8 *)s + 0x24fc)) {
        func_ov096_0229860c(s);
    }
}

void func_ov096_02298b74(S *s)
{
    if (func_ov002_02203f08(s->unk_2b14)) {
        if (func_0208d534(s->unk_2498)) {
            s32 r4 = func_ov002_02203f78(s->unk_2b14, 1);
            func_ov002_02202a40(s->unk_2498, r4, func_ov002_02203f28(s->unk_2b14, 1));
        }
    } else {
        func_ov096_02296898(s);
        func_ov002_02200a50(s, 9);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov096_02298bdc(S *s)
{
    if (func_ov002_02204234((u8 *)s + 0x27fc, 1)) {
        func_ov002_02200a58(s, s->unk_ba);
        func_0208d644((u8 *)s + 0x2498);
    }
}

void func_ov096_02298c10(S *s)
{
    if (func_ov002_022017a4((u8 *)s + 0x24fc)) {
        func_ov096_02295d28(s);
    }
}

void func_ov096_02298c30(S *s)
{
    if (func_ov096_02298c4c(s)) {
        func_ov002_02200a58(s, 0x1f);
    }
}

s32 func_ov096_02298c4c(S *s)
{
    if (func_ov002_02201a28(s->unk_24fc)) {
        func_ov002_02202064(s->unk_24fc, 0);
        func_ov002_022006e4(s->unk_23c0, 1);
        if (func_0208d534(s->unk_2498)) {
            func_ov096_02296708(s);
        }
        return 1;
    }
    return 0;
}

void func_ov096_02298c9c(S *s)
{
    if (func_ov002_022017b4((u8 *)s + 0x24fc)) {
        if (func_0206ef00()) {
            func_ov096_0229673c(s);
            func_ov002_02200a58(s, 0xd);
        } else {
            func_ov002_02200a58(s, 4);
        }
    }
}

void func_ov096_02298cd8(S *s)
{
    func_ov096_02297358(s, s->unk_b4, 1);
    if (func_ov096_02294dbc(s, 0x2000)) {
        func_ov096_0229838c(s, s->unk_b4, s->unk_b9, s->unk_ae, 0);
        func_ov096_02294d9c(s, 0x2000);
    } else {
        func_ov094_02292398();
        func_ov096_0229865c(s);
    }
}

void func_ov096_02298d34(S *s)
{
    if (func_ov002_02202718((u8 *)s + 0x2480)) {
        if (func_ov096_022982c0(s, s->unk_b4) || func_ov096_02294dbc(s, 0x2000)) {
            s->unk_a4 = func_ov096_02297d50(s, s->unk_b4);
            s->unk_a8 = func_ov096_02297cc0(s, s->unk_b4);
            func_ov002_02200a58(s, 0x1c);
        } else {
            func_ov096_02298cd8(s);
        }
    } else {
        func_ov096_022974f4(s);
    }
}
}

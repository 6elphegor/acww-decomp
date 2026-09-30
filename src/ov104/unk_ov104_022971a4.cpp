#include "types.h"

struct Unk_ov104_022974d0_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov104_022971a4 {
    u8 pad_000[0x94];
    s32 unk_094;
    s32 unk_098;
    s32 unk_09c;
    u8 pad_0a0[0xb0 - 0xa0];
    u16 unk_0b0;
    u8 pad_0b2[2];
    u8 unk_0b4;
    u8 unk_0b5;
    u8 unk_0b6;
    u8 pad_0b7;
    u8 unk_0b8;
    u8 unk_0b9;
    u8 pad_0ba[0xbf - 0xba];
    volatile u8 unk_0bf;
    u8 pad_0c0[0x2e0 - 0xc0];
    u8 unk_2e0[0xd40 - 0x2e0];
    u8 unk_d40[0xd68 - 0xd40];
    u8 unk_d68[0x2348 - 0xd68];
    u8 unk_2348[0x2408 - 0x2348];
    u8 unk_2408[0x2420 - 0x2408];
    u8 unk_2420[0x2484 - 0x2420];
    u8 unk_2484[0x288c - 0x2484];
    u8 unk_288c[0x2a9c - 0x288c];
    u8 unk_2a9c[0x2b0c - 0x2a9c];
    u8 unk_2b0c[0xf4 * 10];
    u8 pad_3464[0x3e1c - 0x2b0c - 0xf4 * 10];
    u8 unk_3e1c[4];
};

typedef Unk_ov104_022971a4 S;

extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u32 data_021f482c;
extern u8 data_ov104_022981d0[];
extern u8 data_ov104_022981f0[];
extern u8 data_ov104_02298214[];

extern "C" {
BOOL func_ov002_02200680(void *p);
void func_ov002_02200840(void *p, s32 a, s32 b, s32 c);
void func_ov002_02200850(void *p, s32 a);
void func_ov002_022008c4(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_022008e0(void *p, s32 a, s32 b, s32 c, s32 d);
u32 func_ov002_022008fc(void *p, s32 a);
u32 func_ov002_02200908(void *p, s32 a);
s32 func_ov002_02200914(void *p);
s32 func_ov002_02200920(void *p);
BOOL func_ov002_02200a14(void *p, s32 a);
void func_ov002_02200a50(void *p, s32 s);
void func_ov002_02200a58(void *p, s32 s);
void func_ov002_02200a60(void *p, s32 s);
void func_ov002_02200a68(void *p);
void func_ov002_022006a4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_022006e4(void *p, s32 a);
BOOL func_ov002_0220071c(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, s32 a);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_022034c4(void *p, s32 a);
void func_ov002_02203900(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203ec8(void *p, s32 a);

void func_ov092_02291ce4(void *p, s32 a, s32 b);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_022937a0(void *p);
void func_ov094_02293d18(void *p, void *q);
void func_ov094_02293d2c(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02294644(void *p, s32 a);

void func_ov104_02294dfc(S *s, u32 a);
void func_ov104_02294e0c(S *s, u32 a);
BOOL func_ov104_02294e1c(S *s, u32 a);
void func_ov104_02294e8c(S *s);
u32 func_ov104_02295290(S *s, void *p);
u32 func_ov104_02295310(S *s, void *p, s32 a);
u32 func_ov104_022953e0(S *s, void *p);
u32 func_ov104_022950f8(S *s, void *p);
u32 func_ov104_0229514c(S *s, void *p);
void func_ov104_02295490(S *s);
void func_ov104_022954d8(S *s);
void func_ov104_02295534(S *s, s32 a);
void func_ov104_02295590(S *s);
void func_ov104_022955c8(S *s);
void func_ov104_02295e0c(S *s);
void func_ov104_022959a8(S *s, u32 a, s32 b);
u32 func_ov104_0229638c(S *s, u32 a);
void func_ov104_022962c4(S *s);
BOOL func_ov104_02296138(S *s);
s32 func_ov104_02296450(S *s, s32 a, s32 b, s32 c);
void func_ov104_022966b0(S *s, u32 a);
void func_ov104_022966f8(S *s, s32 a);
void func_ov104_02296790(S *s);
void func_ov104_022967b0(S *s);
void func_ov104_02297af4(S *s);
void func_ov104_02297960(S *s);
void func_ov104_022960b8(S *s);
void func_ov104_02296524(S *s);

void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(void *a, u32 b, s32 c);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_02065af0(u32 a);
void func_02065c94(void *p);
void func_0206d2e0(void *p, u32 a, s32 b, s32 c, s32 d);
void func_0206d394(void *p);
void func_0206d39c(void *p, s32 a);
void func_0206ea3c(u32 a);
s32 func_0206e90c();
s32 func_0206e98c();
void func_0206ecf8(s32 a);
BOOL func_0206ef0c();
void func_02096b74();
s32 func_02096914(void *p, s32 a);
void func_020968e0();
s32 func_0209750c();
s32 func_02098044(s32 a, s32 b);
void func_02099a98();
s32 func_020ed174(void *p);
void func_020ed188(void *p);
}


static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

extern "C" {
void func_ov104_022971a4(S *s) {
    if (func_ov002_02200680(s->unk_2348)) {
        if (s->unk_0bf != 0) {
            s->unk_0bf = s->unk_0bf - 1;
        } else {
            func_ov104_022959a8(s, s->unk_0b5, 1);
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov104_022971ec(S *s) {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 6);
    } else if (func_ov104_02294e1c(s, 4)) {
        if (func_ov104_02296138(s)) {
            func_ov104_022966b0(s, s->unk_0b5);
            func_ov002_02202064(s->unk_2484, 0);
            func_ov002_022006e4(s->unk_2348, 1);
        }
    }
}

void func_ov104_02297248(S *s) {
    if (data_021f4770 == 0) {
        if (func_ov104_02294e1c(s, 4)) {
            func_ov002_02200a58(s, 3);
            func_ov104_02297af4(s);
        } else {
            func_ov002_02200a58(s, 0);
            func_ov002_022006a4(s->unk_2348, 0x3c);
        }
    } else {
        if (func_ov104_02294e1c(s, 4)) {
            if (func_ov104_02296138(s)) {
                func_ov104_022966b0(s, s->unk_0b5);
                return;
            }
            if (func_ov002_02200680(s->unk_2348)) {
                if (s->unk_0bf != 0) {
                    s->unk_0bf = s->unk_0bf - 1;
                } else {
                    func_ov104_022959a8(s, s->unk_0b5, 1);
                    func_ov002_02200a58(s, 2);
                }
                return;
            }
        }
        func_ov002_022006c0(s->unk_2348);
    }
}

void func_ov104_022972f4(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov104_022967b0(s);
    } else if (Both()) {
        s32 r = func_ov104_02296450(s, data_021ef5f0, data_021ef5ec + 0x10, 1);
        if (r != 0x21) {
            func_ov104_022966f8(s, r);
        } else if (func_ov002_02203110(s->unk_3e1c, 9)) {
            func_ov104_022954d8(s);
        } else if (func_ov002_02203110(s->unk_3e1c, 7)) {
            func_ov104_02295490(s);
        }
    }
}

void func_ov104_02297388(S *s) {
    func_ov094_02292ae0(s->unk_d68);
    func_ov002_02203920(s->unk_3e1c);
    func_ov002_022034c4(s->unk_3e1c, 0x65);
}

void func_ov104_022973b4(S *s) {
    u32 t = data_021f482c;
    func_020026c4(data_ov104_022981d0, t, 4, 4, 4, 4);
    func_02002654(data_ov104_022981f0, t, 4);
    func_0200261c(data_ov104_02298214, t, 4, 0x1e2, 0x1e2, 0x227);
}

void func_ov104_02297408(S *s) {
    func_ov094_02292d1c(s->unk_d68, 0);
}

void func_ov104_0229741c() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void func_ov104_02297450(S *s) {
    func_ov002_02201b58(s->unk_2484);
    func_ov094_02292aa4(s->unk_d68);
    if (func_ov002_0220071c(s->unk_2348)) {
        func_ov104_022960b8(s);
    }
}

void func_ov104_02297488(S *s) {
    func_ov104_02296524(s);
    func_ov094_02292acc(s->unk_d68);
    func_ov094_022939a0(s->unk_2e0);
    func_ov094_0229462c(s->unk_d40);
    func_ov002_02203900(s->unk_3e1c);
}

void func_ov104_022974c8(S *s) {
    func_ov104_02297450(s);
}

void func_ov104_022974d0(S *s) {
    func_ov104_02297488(s);
    ((Unk_ov104_022974d0_Vt *)s->unk_2420)->vfunc_0c();
}

void func_ov104_022974ec(S *s) {
    func_ov104_02296524(s);
    func_ov094_02292a80(s->unk_d68);
    func_ov094_02293998(s->unk_2e0);
    func_ov002_02201b04(s->unk_2484);
    func_0206d394(s->unk_288c);
    func_ov002_02203900(s->unk_3e1c);
}

void func_ov104_02297538(S *s) {
    s32 i;
    s->unk_094 = 0;
    func_ov094_022939c0(s->unk_2e0, 2);
    func_ov094_02294644(s->unk_d40, 1);
    func_ov094_02292d30(s->unk_d68, 6);
    s->unk_0b6 = 0x21;
    func_ov002_022027a4(s->unk_2408);
    s->unk_0b4 = 0;
    s->unk_0b8 = 0xb;
    func_ov002_02202310(s->unk_2484, 3, 0, 0);
    func_0206d39c(s->unk_288c, 3);
    for (i = 0; i < 10; i++) {
        func_02065c94(s->unk_2b0c + i * 0xf4);
    }
    func_ov104_022955c8(s);
    s->unk_0bf = 0;
}

void func_ov104_022975e0(S *s) {
    func_ov002_02200840(s, 4, 0, -16);
    s->unk_09c = func_ov002_02200914(s);
}

void func_ov104_02297600(S *s) {
    func_ov002_02200840(s, 6, 0, -16);
    s->unk_098 = func_ov002_02200920(s);
}

void func_ov104_02297620(S *s) {
    func_ov002_02200840(s, 3, 0, 0);
    func_ov002_02200840(s, 4, 0, 0);
}

void func_ov104_02297640(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov104_02294dfc(s, 0x80);
        func_ov104_02297960(s);
    } else {
        func_ov104_02297620(s);
    }
}

void func_ov104_02297678(S *s) {
    func_ov002_022008c4(s, 3, 0, 0, 0x30);
    func_ov104_02297620(s);
    func_ov002_02200a50(s, 10);
}

void func_ov104_022976a4(S *s) {
    if (func_ov002_02200908(s, 0)) {
        func_ov002_02200a60(s, 2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(s, 5);
        } else {
            func_ov002_02200a58(s, 9);
        }
    } else {
        func_ov104_02297620(s);
    }
}

void func_ov104_022976e4(S *s) {
    u32 t = func_ov104_0229638c(s, s->unk_0b9);
    func_02065af0(t);
    func_0206d2e0(s->unk_288c, t, 3, 4, 1);
    func_ov002_022008e0(s, 3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov104_02297620(s);
    func_ov002_02200a50(s, 8);
    func_ov002_02203ec8(s->unk_2a9c, 0x88);
    func_ov104_02294e0c(s, 0x80);
}

void func_ov104_02297758(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(6);
        func_ov104_02294dfc(s, 2);
        if (func_ov104_02294e1c(s, 0x100)) {
            func_ov002_02200a50(s, 7);
            func_ov104_022976e4(s);
        } else {
            func_ov104_02294dfc(s, 1);
            func_ov002_02200a60(s, 5);
        }
    } else {
        func_ov104_02297600(s);
    }
}

void func_ov104_022977b4(S *s) {
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(4);
        func_ov104_02294dfc(s, 0x200);
        func_ov002_022008c4(s, 8, 0, 0, 0x30);
        func_ov002_02200a50(s, 6);
        func_ov104_02297758(s);
    } else {
        func_ov104_022975e0(s);
    }
}

void func_ov104_02297804(S *s) {
    func_ov002_022006e4(s->unk_2348, 1);
    func_ov104_02295e0c(s);
    if (!func_ov104_02294e1c(s, 0x100)) {
        func_ov092_02291ce4((void *)func_020ed174(s), 0x44, 1);
    }
    func_ov002_022008c4(s, 2, 0, 2, 0x30);
    func_ov002_02200850(s, 0xc0);
    func_ov002_02200a50(s, 5);
}

void func_ov104_02297864(S *s) {
    if (func_ov002_02200908(s, 0)) {
        func_ov002_02200a60(s, 2);
        func_ov104_02296790(s);
    }
    func_ov104_022975e0(s);
}

void func_ov104_0229788c(S *s) {
    u32 r = func_ov002_02200908(s, 0);
    func_ov104_02297600(s);
    if (r != 0) {
        func_ov104_022973b4(s);
        func_ov002_022008e0(s, 2, 0, 2, 0x30);
        func_ov002_02200850(s, 0xc0);
        func_020020b8(4);
        func_ov104_02294e0c(s, 0x200);
        func_ov104_022975e0(s);
        func_ov002_02200a50(s, 3);
    }
}

void func_ov104_022978ec(S *s) {
    func_ov104_02297388(s);
    func_ov094_022937a0(s->unk_2e0);
    func_ov094_02293d2c(s->unk_d40);
    func_ov094_02293d18(s->unk_d40, s->unk_2b0c);
    func_ov104_022962c4(s);
    func_ov002_022008e0(s, 8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(s, 2);
    func_ov104_02294e0c(s, 1);
    func_ov104_02294e0c(s, 2);
    func_ov104_02297600(s);
}

void func_ov104_02297960(S *s) {
    func_ov104_0229741c();
    func_ov104_02297408(s);
    func_ov002_02200a50(s, 1);
}

void func_ov104_0229797c(S *s) {
    func_ov104_02294e8c(s);
    func_ov002_02200a68(s);
}

BOOL func_ov104_02297990(S *s) {
    u32 r4;
    if (func_ov104_02294e1c(s, 0x400)) {
        func_ov104_02295590(s);
        func_0206ecf8(0);
    } else if (func_ov104_02294e1c(s, 0x800)) {
        if (func_ov104_02294e1c(s, 0x1000)) return TRUE;
        if ((s->unk_0b0 & 4) != 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
        }
        func_ov104_02295534(s, 1);
        func_0206ea3c(s->unk_0b0);
    } else {
        func_0206ecf8(1);
        r4 = 0;
        if (func_02096914(s->unk_2b0c, 10) <= 0) r4 = 4;
        if (func_02098044(func_0209750c(), 1)) {
            r4 |= func_ov104_022950f8(s, s->unk_2b0c);
        }
        r4 |= func_ov104_022953e0(s, s->unk_2b0c);
        r4 |= func_ov104_02295310(s, s->unk_2b0c, 0);
        if ((r4 & 4) != 0) {
            func_0206ecf8(0);
        } else if ((r4 & 0x10) != 0) {
            func_02096b74();
            r4 |= func_ov104_02295290(s, s->unk_2b0c);
            if ((r4 & 0x20) != 0) {
                r4 |= func_ov104_0229514c(s, s->unk_2b0c);
            }
        }
        func_ov104_02295534(s, 0);
        func_0206ea3c(r4);
        if (func_0206e98c() == 1 || func_0206e90c() != 0) {
            func_02099a98();
        }
    }
    func_020968e0();
    func_020ed188(s);
    return TRUE;
}
}

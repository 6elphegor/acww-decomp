#include "types.h"

struct S2f0 { u32 f0; u8 f4; u8 pad[3]; u32 f8; u16 fc; };
struct S394 { u8 b[0x22]; u16 h22; u16 h24; };
struct SCB { u8 pad[0x64]; u32 f64; u32 f68; };

extern "C" {
extern S2f0* data_021ef2f0;
extern S2f0* data_021eda68;
extern u8 data_020e416c;
extern u8 data_020d0c8c[];
extern S394 data_021ef394;
extern u8 data_021ef3b4[];
extern u8 data_020e41dc[];
extern u8 data_021f4770;
extern u16 data_021f4778;
extern u16 data_021f477c;
extern u8 data_021c3cc0;
extern u8 data_021c3cb8;
extern u8 data_021ef378[];
extern u32 data_021c5388;
extern u32 data_021ce63c;
extern SCB* data_020cbb18;
extern u32 data_020dc520;
extern u32 data_021ef2d8;
extern u8 data_021eda64;
extern u8 data_020e4174;
extern u8 data_021ef2d4;
extern u32 data_021ef2ec;
extern u32 data_021ef2e4;
extern S2f0* data_020e4280[];
extern u8 data_021eda50[];
extern u8 data_021eda58[];
extern u32 data_021f482c;
extern u8 data_021e5890[];
extern u16 data_020d0c0c[];

s32 func_020b50e8();
BOOL func_020b4fe4(s32);
s32 func_020b49a8(void*);
void func_020b49ac(void*);
s32 func_020b50b4();
void func_020b60dc(s32, u32, u32, u32);
void func_02095300(s32, s32);
void func_020952f0(s32);
void func_0209524c(s32, s32);
s32 func_020952e0(s32);
void func_020729a8(void*, s32);
BOOL func_02072e88(void*, s32);
s32 func_020afab8(void*, void*, void*, u32, u32);
void func_020afad0(void*);
s32 func_020a5ef8();
void func_020a5ee8(s32);
BOOL func_020974a0(s32);
void func_02098a58();
s32 func_02036c58();
void func_02037108(s32, s32);
void func_0205351c(s32);
void func_020621a4(s32);
void func_020b4968(s32, s32);
s32 func_020b4944(s32);
s32 func_020b4934();
s32 func_020b493c(s32);
void func_020b5c0c();
void func_020b5d3c();
void func_020b5d4c();
void func_020b5c54();
void func_020b5d00(u8 *obj);
void func_020b69a8();
void func_020b6990();
void func_02038158();
s32 func_020559d0();
void func_020559d8();
void func_02038168();
void func_02053780();
void func_020b83e0();
void func_020b8494();
void func_0205369c();
void func_0210fcb8(u32);
void func_0210fbc4(u32);
void func_021101f4(u32);
void func_02110088(u32);
void func_0210f900(u32);
void func_0210f884(u32);
void func_020015a0(u32);
void func_0200158c(u32);
void func_020b7f80();
void func_020014f4(u32);
void func_020014bc(u32);
void func_02110ea4(u32, u32, u32, u32);
void func_02110e00(const void *);
void func_01ff8ccc();
void func_02034044();
void func_02088d58();
void func_02030518();
void func_02089118();
u64 func_01ffa6b4();
u32 func_02132ef8(u64, u64);
void func_020739b8(s32);
void func_020a5c30();
void func_02045c68();
}
extern "C" u8 data_020e4170;

extern "C" {
u8 func_020a5f08();
void func_020a5f18(s32);
void func_02041104();
void func_0203e6e4();
void func_0203e308();
void func_02038fb0();
void func_0203498c();
void func_0209035c();
void func_02089124();
void func_02034938();
void func_0205b848();
void func_02081d00();
void func_02077e30();
void func_02081784();
void func_0205fff4();
void func_0205ed9c();
void func_0205f054();
void func_0205d798();
void func_0205df58();
void func_0205c8dc();
void func_0205eec8();
void func_0205d300();
void func_0205d1b8();
void func_0205d440();
void func_0205cdcc();
void func_0205c62c();
void func_020716cc();
void func_020716f0();
void func_0205350c();
void func_02062194();
void func_020abe10();
void func_020ac3a4();
void func_02036cec();
void func_02071770();
void func_0205c644(u32);
void func_0205cde4(u32);
void func_0205d458(u32);
void func_0205d1d0(u32);
void func_0205d318(u32);
void func_0205eee0(u32);
void func_0205c8f4(u32);
void func_0205df70(u32);
void func_0205f06c(u32);
void func_0205d7b0(u32);
void func_0205edb8(u32);
void func_0206000c(u32);
void func_020ac500(s32);
void func_020abe58();
void func_02077e4c();
void func_02081d08();
void func_0205b864(u32);
void func_0209c540();
void func_020b49b4(s32);
void func_020ac750();
void func_0208e974();
void func_020040cc();
s32 func_020b5298(u32);
BOOL func_020b52c0(s32);
BOOL func_020b52e4(s32);
BOOL func_020b530c(s32);
s32 func_020b533c(u32);
void func_020b54b0(s32);
}

class Unk_020b5844 {
public:
    BOOL func_020b5844(u32, u32);
    BOOL func_020b58b0(u32, u32);
    BOOL func_020b58d8(u32, u32);
    BOOL func_020b58f0(u32, u32);
    BOOL func_020b59f8(u32, u32);
    BOOL func_020b5af4(u32, u32);
};

extern "C" {

s32 func_020b5284(void) { return func_020b5298(func_020b50e8()); }

s32 func_020b5298(u32 x) {
    if (x >= 0x1a && x <= 0x1f) return x - 0x1a;
    return -1;
}

BOOL func_020b52ac(void) { return func_020b52c0(func_020b50e8()); }

BOOL func_020b52c0(s32 x) {
    switch (x) {
    case 6:
    case 7:
        return TRUE;
    }
    return FALSE;
}

BOOL func_020b52d0(void) { return func_020b52e4(func_020b50e8()); }

BOOL func_020b52e4(s32 x) {
    if ((u8)(x + 0xfa) <= 2) return TRUE;
    return FALSE;
}

BOOL func_020b52f8(void) { return func_020b530c(func_020b50e8()); }

BOOL func_020b530c(s32 x) {
    s32 v = func_020b533c(x);
    BOOL r = FALSE;
    if (v != -1) r = TRUE;
    return r;
}

s32 func_020b5328(void) { return func_020b533c(func_020b50e8()); }

s32 func_020b533c(u32 x) {
    if (x >= 1 && x <= 5) return x - 1;
    return -1;
}

u32 func_020b5350(void) {
    u32 r = 0;
    if (data_021ef2f0 != NULL) r = data_021ef2f0->f8;
    return r;
}

u8 func_020b5364(BOOL a) {
    u8 r = 0;
    if (data_021eda68 != NULL) {
        u16 x = data_021eda68->fc;
        BOOL c3 = TRUE;
        BOOL c2 = TRUE;
        u8 m = data_020e416c;
        BOOL A = (m == 0) ? TRUE : FALSE;
        if (!A) {
            BOOL B = (m == 1) ? TRUE : FALSE;
            if (!B) c2 = FALSE;
        }
        if (!c2) {
            if (!a || x != 5) c3 = FALSE;
        }
        if (c3) {
            s32 idx = func_020b50e8();
            if (func_020b4fe4(idx)) r = data_020d0c8c[idx];
        }
    }
    return r;
}

void func_020b53d0(void) {}

void func_020b53d4(s32 unused, u8* src) {
    u8* dst = (u8*)&data_021ef394;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        *dst = *src;
        dst++; src++;
    }
}

void func_020b53ec(u16 v) { data_021ef394.h22 = v; }

void func_020b53f8(u32 v) { data_021ef3b4[6] = v & 0x1f; }

s32 func_020b5408(void) { func_02038158(); return func_020559d0(); }

}

extern "C" {
extern u32 reg_4000000;
extern u32 reg_4001000;
extern u32 reg_4000358;

void func_020b541c(void) {
    func_02053780();
    func_020b83e0();
    func_020b8494();
    func_0205369c();
    func_0210fcb8(7);
    func_0210fbc4(0x10);
    func_021101f4(0x20);
    func_02110088(0x40);
    func_0210f900(0x80);
    func_0210f884(0x100);
    reg_4000000 &= 0xffcfffef;
    reg_4001000 &= 0xffcfffef;
    func_020015a0(0);
    func_0200158c(1);
    reg_4000000 &= 0xc7ffffff;
    func_020b7f80();
    func_020014f4(0x11);
    func_020014bc(0x10);
    func_020559d8();
    func_02038168();
}

void func_020b54b0(s32 unused) {
    S394* a = &data_021ef394;
    u8* b = data_021ef3b4;
    func_02110ea4(b[0], 1, b[1], a->h22);
    reg_4000358 = a->h24 | (b[6] << 16);
    func_02110e00(a);
}

void func_020b54ec(s32 a) {
    func_020b53d4(a, data_020e41dc);
    BOOL b;
    if (data_020e416c == 1) b = TRUE; else b = FALSE;
    if (b) data_021ef3b4[0] = 0;
    else data_021ef3b4[0] = 1;
    data_021ef3b4[1] = 8;
    data_021ef394.h22 = 0xd2;
    data_021ef394.h24 = 0x7fff;
    data_021ef3b4[6] = 0;
    func_020b54b0(a);
}

void func_020b554c(void) {}

BOOL func_020b5550(s32 a) {
    func_020b54b0(a);
    func_01ff8ccc();
    s32 r0 = func_020b50b4();
    func_020b60dc(r0, (u8)data_021f4778, (u8)data_021f477c, data_021f4770 ? 1 : 0);
    func_02034044();
    func_02088d58();
    return TRUE;
}

BOOL func_020b55a0(void) {
    func_02030518();
    func_02089118();
    BOOL b;
    if (data_021c3cc0 == 2) b = TRUE; else b = FALSE;
    if (!b && data_021c3cb8 == 0) return TRUE;
    if (func_020b4fe4(func_020b49a8(data_021ef378))) {
        s32 r4 = func_020b4944(func_020b4934());
        func_020b4968(r4, func_020b493c(func_020b4934()));
    }
    return TRUE;
}

}

extern "C" {

BOOL func_020b5604(void) {
    func_02034938();
    func_020b50b4();
    func_020b6990();
    data_021c5388 = 0;
    func_0205b848();
    func_02081d00();
    func_02077e30();
    func_02081784();
    func_0205fff4();
    func_0205ed9c();
    func_0205f054();
    func_0205d798();
    func_0205df58();
    func_0205c8dc();
    func_0205eec8();
    func_0205d300();
    func_0205d1b8();
    func_0205d440();
    func_0205cdcc();
    func_0205c62c();
    func_020716cc();
    func_020716f0();
    func_0205350c();
    func_02062194();
    func_020abe10();
    func_020ac3a4();
    func_02036c58();
    func_02036cec();
    func_020b5408();
    data_021ce63c = 0;
    if (func_020b50e8() == 6) {
        u32 i = 0;
        SCB* p = data_020cbb18;
        for (; i < 4; i++) {
            if (i == 0) {
                func_02095300(0, p->f68);
                p->f68 = 0;
            } else {
                func_020952f0(i);
            }
        }
    } else if (func_020b50e8() == 7) {
        s32 i = 2;
        for (; i >= 0; i--) func_020952f0(i + 1);
    } else if (func_020b50e8() == 0xe) {
        s32 v = func_020a5ef8();
        if (v > 0 && v < 4) {
            if (func_020974a0(v + 3)) func_02098a58();
            func_020952f0(v);
        }
        func_020a5ee8(4);
    }
    func_020b5c0c();
    data_021ef2f0 = 0;
    func_020b5d3c();
    data_020e416c = 2;
    return TRUE;
}

}

extern "C" s32 func_020b5730(Unk_020b5844* self) {
    typedef BOOL (Unk_020b5844::*M)(u32, u32);
    static M tbl[6] = {
        &Unk_020b5844::func_020b5af4, &Unk_020b5844::func_020b59f8, &Unk_020b5844::func_020b58f0,
        &Unk_020b5844::func_020b58d8, &Unk_020b5844::func_020b58b0, &Unk_020b5844::func_020b5844,
    };
    u64 start = func_01ffa6b4();
    u32 fail = 0;
    for (;;) {
        u32 idx = data_021eda64 - 1;
        if (idx >= 6) break;
        if ((self->*tbl[idx])((u32)start, (u32)(start >> 32))) {
            data_021eda64++;
            if (data_021eda64 > 6) break;
            u64 now = func_01ffa6b4();
            u64 d = (now - start) << 6;
            if (func_02132ef8(d, 0x82ea) > 0x28) {
                fail = 1;
                break;
            }
        } else {
            fail = 1;
            break;
        }
    }
    if (fail) {
        func_020739b8(0);
        func_020a5c30();
        func_02045c68();
        return -1;
    }
    return 1;
}

extern "C" u16 reg_4000008;

BOOL Unk_020b5844::func_020b5844(u32, u32) {
    func_020b54ec((s32)this);
    func_0209035c();
    reg_4000008 = (reg_4000008 & ~3) | 2;
    func_02089124();
    data_021ce63c = 0;
    func_020b49ac(data_021ef378);
    data_020dc520 = 3;
    func_0203e308();
    if (func_020b50e8() == 0x2e || func_020b50e8() == 0xd || func_020b50e8() == 0x2f)
        func_02038fb0();
    func_0203498c();
    return TRUE;
}

BOOL Unk_020b5844::func_020b58b0(u32 a, u32 b) {
    return func_020afab8((void*)data_021ef2f0, data_021eda50, data_021eda58, a, b);
}

BOOL Unk_020b5844::func_020b58d8(u32, u32) {
    func_020afad0((void*)data_021ef2f0);
    return TRUE;
}

BOOL Unk_020b5844::func_020b58f0(u32, u32) {
    s32 t = func_02036c58();
    func_02037108(t, data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_0205351c(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_020621a4(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_020716cc();
    func_02071770();
    func_0205c644(data_021f482c);
    func_0205cde4(data_021f482c);
    func_0205d458(data_021f482c);
    func_0205d1d0(data_021f482c);
    func_0205d318(data_021f482c);
    func_0205eee0(data_021f482c);
    func_0205c8f4(data_021f482c);
    func_0205df70(data_021f482c);
    func_0205f06c(data_021f482c);
    func_0205d7b0(data_021f482c);
    func_0205edb8(data_021f482c);
    func_0206000c(data_021f482c);
    func_020ac500(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_020abe58();
    func_02077e4c();
    func_02081d08();
    func_02081784();
    func_0205b864(data_021f482c);
    func_0209c540();
    if (func_020b50e8() == 0x2c || func_020b50e8() == 0x2d) {
        func_020b49b4(func_020b4934());
    }
    func_020ac750();
    return TRUE;
}

BOOL Unk_020b5844::func_020b59f8(u32, u32) {
    func_020b541c();
    func_02041104();
    func_0208e974();
    func_020040cc();
    SCB* p = data_020cbb18;
    s32 i;
    if (func_02072e88(p, p->f64)) {
        for (i = 0; i < 4; i++) func_0209524c(i, 4);
    } else if (func_020b52ac()) {
        func_020729a8(p, 4);
        for (i = 0; i < 4; i++) func_0209524c(i, i);
    } else {
        func_020729a8(p, 1);
        for (i = 0; i < 4; i++) func_0209524c(i, 4);
    }
    if (func_020b52ac()) {
        if (func_020b50e8() == 6) {
            p->f68 = 4;
            for (i = 3; i >= 0; i--) func_02095300(i, i);
        } else if (func_020b50e8() == 7) {
            s32 a = p->f68;
            s32 b = func_020952e0(a);
            s32 c = 0;
            for (i = 3; i >= 0; i--) {
                if (i != a) {
                    if (c == b) c++;
                    func_02095300(i, c);
                    c++;
                }
            }
        }
    } else if (func_020b50e8() == 0x2c) {
        SCB* q = data_020cbb18;
        q->f64 = 4;
        q->f68 = 4;
        for (i = 3; i >= 0; i--) func_020952f0(i);
    }
    return TRUE;
}

BOOL Unk_020b5844::func_020b5af4(u32, u32) {
    func_02041104();
    u8 m = data_020e4170;
    u8 r0 = func_020a5f08();
    if (m == 0x2e || m == 0xd || m == 0xc || m == 0xe || m == 0x2f) {
        if (r0 != 4) func_020a5f18(4);
    }
    func_0203e6e4();
    data_020e4174 = data_020e4170;
    data_020e4170 = func_020b49a8(data_021ef378);
    func_020b5d4c();
    data_021c5388 = (u32)&data_021ef2e4;
    func_020b50b4();
    func_020b69a8();
    data_021ef2d4 = 0;
    data_021ef2ec = data_020e4170;
    func_020b5c54();
    data_021ef2f0 = data_020e4280[data_020e4170];
    func_020b5d00((u8 *)data_021ef2f0);
    return TRUE;
}

struct B5890 { u8 pad[0x14]; u8 lo : 2; u8 idx : 6; };
extern "C" u16 func_020b5b98(void) {
    s32 idx = ((struct B5890*)data_021e5890)->idx;
    if (idx < 0xc) return data_020d0c0c[idx];
    return data_020d0c0c[0];
}

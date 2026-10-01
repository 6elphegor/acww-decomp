#include "types.h"

struct Unk_02007ebc_Mtx {
    s32 m[12];
};

struct Unk_02007ebc_Vec {
    s32 x, y, z;
};

struct Unk_02007c5c_Mtx {
    s32 m[12];
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(u32 a, u32 b, u32 c);

    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e[0x1c - 0x0e];
};

class Unk_02007694;

extern "C" {
void func_02115fb4(void *p, u32 v, u32 n);
void func_020323d8(void *p);
u16 func_0203ef38(void *a, void *b);
void func_02010a50(Unk_02007694 *o, u32 a);
void func_0203ee38(Unk_02007ebc_Vec *out, Unk_02007ebc_Vec *in);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffb898(Unk_02007ebc_Vec *v, Unk_02007ebc_Mtx *m, Unk_02007ebc_Vec *out);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
BOOL func_02056654(void *p);
BOOL func_0206ec6c();
void func_0203d7f8();
extern u8 data_020c630c[];
extern u8 data_020c6278[];
extern u8 data_020c6840[];
extern u8 data_020c67ac[];
extern u8 data_020c6718[];
}

class Unk_02007694 {
public:
    // handlers dispatched by func_020076f0
    void func_02007ca8();
    void func_02007c98();
    void func_02007c9c();
    void func_02007ca0();
    void func_02007ca4();
    void func_02007cac();
    void func_02007cb0();
    void func_0200d3f0(u32 a);
    void func_0200cee0(u32 a);
    void func_0200cdfc(u32 a);
    void func_0200c460(u32 a);
    void func_02211e04(u32 a);
    void func_0200c0b8(u32 a);
    void func_022246bc(u32 a);
    void func_02224224(u32 a);
    void func_02223ca0(u32 a);
    void func_02223a70(u32 a);
    void func_022237fc(u32 a);
    void func_0200b9bc(u32 a);
    void func_022115bc(u32 a);
    void func_0200ad58(u32 a);
    void func_0200a450(u32 a);
    void func_02222d74(u32 a);
    void func_022223a8(u32 a);
    void func_02222280(u32 a);
    void func_02221fdc(u32 a);
    void func_02221d2c(u32 a);
    void func_02221ae4(u32 a);
    void func_0222189c(u32 a);
    void func_02221768(u32 a);
    void func_02221558(u32 a);
    void func_0222148c(u32 a);
    void func_0222113c(u32 a);
    void func_02210708(u32 a);
    void func_02210404(u32 a);
    void func_020095b8(u32 a);
    void func_0220fdac(u32 a);
    void func_0220f33c(u32 a);
    void func_0220efd8(u32 a);
    void func_0220ecb8(u32 a);
    void func_0220e970(u32 a);
    void func_0220e43c(u32 a);
    void func_0220c2dc(u32 a);
    void func_0220ba90(u32 a);
    void func_0220ab20(u32 a);
    void func_0220a5e4(u32 a);
    void func_02209ef4(u32 a);
    void func_02209284(u32 a);
    void func_02208fb0(u32 a);
    void func_02208904(u32 a);
    void func_02208358(u32 a);
    void func_0220714c(u32 a);
    void func_02206e94(u32 a);
    void func_0221fa98(u32 a);
    void func_02206710(u32 a);
    void func_0220646c(u32 a);
    void func_022061e0(u32 a);
    void func_0226a910(u32 a);
    void func_0226a80c(u32 a);

    // other methods
    void func_02007694(u32 a);
    void func_020076b0(u32 a);
    void func_020076dc();
    void func_020076f0(u32 a);
    u8 func_02007c08(u32 a);
    u8 func_02007c14(u32 a);
    void func_02007c20(u32 a, u32 b);
    u8 func_02007c50(u32 a);
    void func_02007c5c();
    void func_02007cb4();
    void func_02007cdc();
    void func_02007d00(u32 a);
    void func_02007d14(Unk_0200e2c0 *p);
    u32 func_02007d30(u32 a, u32 b, u32 c);
    void func_02007d6c();
    void func_02007d88();
    void func_02007dc8(u32 a);
    void func_02007df4();
    u32 func_02007e08(u32 a, u32 b);
    void func_02007e40();
    void func_02007e5c();
    void func_02007f7c();

    // external callees
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_0201065c();
    void func_0200ce98(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_02010358(u32 a, u32 b, u32 c);
    u32 func_0200e248(Unk_0200e2c0 *p);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    BOOL func_0200f4c0(u32 a);
    void func_0200c358(u32 a, u32 b, u32 c);
    void func_02002b84(Unk_02007c5c_Mtx *out);

    u8 unk_00[0x5c];
    u8 unk_5c[0x98 - 0x5c];
    u32 unk_98;
    u8 unk_9c[8];
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 unk_b0[0xc4 - 0xb0];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 unk_d2[0x294 - 0xd2];
    Unk_02007c5c_Mtx unk_294;
    u8 unk_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 unk_2d8[0x694 - 0x2d8];
    Unk_02007ebc_Mtx unk_694;
    u8 unk_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 unk_704[0x7a0 - 0x704];
    u8 unk_7a0[0x30];
    u8 unk_7d0[0x1c];
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u8 unk_7fc[0x820 - 0x7fc];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 unk_838[0xc80 - 0x838];
    u16 unk_c80;
};

void Unk_02007694::func_02007694(u32 a) {
    if (data_020c630c[a]) {
        func_02010a50(this, 0);
    }
}

void Unk_02007694::func_020076b0(u32 a) {
    if (data_020c6278[a]) {
        unk_98 = 0;
        u32 t = unk_a8;
        unk_a4 = 0;
        unk_a8 = t;
        unk_ac = 0;
    }
}

void Unk_02007694::func_020076dc() {
    func_02115fb4(unk_7d0 + 0, 0, 0x1c);
}

void Unk_02007694::func_020076f0(u32 a) {
    static void (Unk_02007694::*tbl[147])(u32) = {
        &Unk_02007694::func_0200d3f0, &Unk_02007694::func_0200cee0, &Unk_02007694::func_0200cdfc,
        0, &Unk_02007694::func_0200c460, 0,
        &Unk_02007694::func_02211e04, &Unk_02007694::func_0200c0b8, &Unk_02007694::func_022246bc,
        0, &Unk_02007694::func_02224224, 0,
        0, &Unk_02007694::func_02223ca0, &Unk_02007694::func_02223a70,
        &Unk_02007694::func_022237fc, 0, 0,
        0, 0, &Unk_02007694::func_0200b9bc,
        0, 0, &Unk_02007694::func_022115bc,
        0, &Unk_02007694::func_0200ad58, &Unk_02007694::func_0200a450,
        0, 0, &Unk_02007694::func_02222d74,
        0, 0, 0,
        0, &Unk_02007694::func_022223a8, &Unk_02007694::func_02222280,
        &Unk_02007694::func_02221fdc, &Unk_02007694::func_02221d2c, &Unk_02007694::func_02221ae4,
        &Unk_02007694::func_0222189c, &Unk_02007694::func_02221768, &Unk_02007694::func_02221558,
        &Unk_02007694::func_0222148c, 0, &Unk_02007694::func_0222113c,
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
        &Unk_02007694::func_02210708, &Unk_02007694::func_02210404, 0,
        &Unk_02007694::func_020095b8, 0, 0,
        0, 0, 0,
        &Unk_02007694::func_0220fdac, 0, 0,
        0, &Unk_02007694::func_0220f33c, &Unk_02007694::func_0220efd8,
        &Unk_02007694::func_0220ecb8, &Unk_02007694::func_0220e970, 0,
        0, &Unk_02007694::func_0220e43c, 0,
        0, 0, 0,
        0, 0, 0,
        &Unk_02007694::func_0220c2dc, &Unk_02007694::func_0220ba90, 0,
        0, 0, 0,
        &Unk_02007694::func_0220ab20, &Unk_02007694::func_0220a5e4, &Unk_02007694::func_02209ef4,
        0, 0, &Unk_02007694::func_02209284,
        &Unk_02007694::func_02208fb0, 0, 0,
        &Unk_02007694::func_02208904, 0, &Unk_02007694::func_02208358,
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
        0, &Unk_02007694::func_0220714c, &Unk_02007694::func_02206e94,
        0, 0, 0,
        0, 0, 0,
        0, &Unk_02007694::func_0221fa98, 0,
        0, 0, &Unk_02007694::func_02206710,
        &Unk_02007694::func_0220646c, &Unk_02007694::func_022061e0, 0,
        0, 0, 0,
        &Unk_02007694::func_0226a910, &Unk_02007694::func_0226a80c, 0,
        0, 0, 0,
        0, 0, 0,
        0, (void (Unk_02007694::*)(u32))&Unk_02007694::func_02007ca8, 0,
    };
    void (Unk_02007694::*fn)(u32) = tbl[unk_7ec];
    if (fn) {
        (this->*fn)(a);
    }
    func_0200ec1c(0x1c);
}

u8 Unk_02007694::func_02007c08(u32 a) {
    return data_020c6840[a];
}

u8 Unk_02007694::func_02007c14(u32 a) {
    return data_020c67ac[a];
}

void Unk_02007694::func_02007c20(u32 a, u32 b) {
    u8 r = func_02007c50(a);
    if (r) {
        func_02007c50(b);
        if (!r) {
            func_020323d8(unk_7a0);
        }
    }
}

u8 Unk_02007694::func_02007c50(u32 a) {
    return data_020c6718[a];
}

void Unk_02007694::func_02007c5c() {
    Unk_02007c5c_Mtx m;
    unk_d0 = func_0203ef38(unk_c4, unk_5c);
    func_02002b84(&m);
    unk_294 = m;
}

void Unk_02007694::func_02007c98() {}
void Unk_02007694::func_02007c9c() {}
void Unk_02007694::func_02007ca0() {}
void Unk_02007694::func_02007ca4() {}
void Unk_02007694::func_02007ca8() {}
void Unk_02007694::func_02007cac() {}
void Unk_02007694::func_02007cb0() {}

void Unk_02007694::func_02007cb4() {
    func_020109c4();
    func_02010914();
    func_0201071c();
    func_0201065c();
    func_02007cdc();
}

void Unk_02007694::func_02007cdc() {
    if (func_0206ec6c()) {
        func_0203d7f8();
        func_0200ce98(3, 1, -1);
    }
}

void Unk_02007694::func_02007d00(u32 a) {
    func_0200ce98(3, 5, a);
}

void Unk_02007694::func_02007d14(Unk_0200e2c0 *p) {
    u16 v = p->unk_0c;
    func_020103b4(0, v, v);
    func_0200e870();
}

u32 Unk_02007694::func_02007d30(u32 a, u32 b, u32 c) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(0x90, b, c);
    m.unk_0c = a;
    u32 r = func_0200e248(&m);
    return r;
}

void Unk_02007694::func_02007d6c() {
    func_02010914();
    func_0201071c();
    func_02007d88();
}

void Unk_02007694::func_02007d88() {
    if (func_02056654(unk_2cc)) {
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200c358(3, 5, -1);
    }
}

void Unk_02007694::func_02007dc8(u32 a) {
    if (unk_7ec == 0x85) {
    } else if (unk_7ec == 0x86) {
        unk_c80 = a;
    } else {
        func_02007e08(6, a);
    }
}

void Unk_02007694::func_02007df4() {
    func_02010358(0x80, 3, 0);
}

u32 Unk_02007694::func_02007e08(u32 a, u32 b) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(0x86, a, b);
    u32 r = func_0200e248(&m);
    return r;
}

void Unk_02007694::func_02007e40() {
    func_02007f7c();
    func_0201071c();
    func_02007e5c();
}

void Unk_02007694::func_02007e5c() {
    if (func_0200f4c0(0x800)) {
        if (func_02056654(unk_2cc)) {
            if (unk_700 == 0x7e) {
                func_02010358(0x7f, 0, 0);
                func_0200ecdc(0x6e);
            } else {
                func_02007e08(6, -1);
                func_0200ec1c(0xd);
            }
        }
    }
}

extern "C" void func_02007ebc(Unk_02007ebc_Vec *out, Unk_02007694 *obj, s32 n) {
    Unk_02007ebc_Mtx m = obj->unk_694;
    s32 tx = m.m[9];
    s32 ty = m.m[10];
    s32 tz = m.m[11];
    m.m[11] = 0;
    m.m[10] = 0;
    m.m[9] = 0;
    Unk_02007ebc_Mtx m2 = m;
    Unk_02007ebc_Vec in;
    Unk_02007ebc_Vec res;
    in.x = 0x320;
    in.z = 0;
    if (obj->unk_700 == 0x7e) {
        if (n <= 10) {
            in.y = 0;
        } else {
            in.y = -0xa00;
        }
    } else {
        in.y = -((0xa000 - func_01ffc5a4(n * 0x5000, 0x15000)) >> 4);
    }
    func_01ffb898(&in, &m2, &res);
    tx += res.x;
    ty += res.y;
    tz += res.z;
    Unk_02007ebc_Vec fin = {tx, ty, tz};
    func_0203ee38(out, &fin);
}

void Unk_02007694::func_02007f7c() {
    Unk_02007ebc_Vec v;
    func_02010914();
    s32 n = ((u32)unk_2d4 << 4) >> 16;
    s32 t = 0x1000;
    if (unk_700 == 0x7e) {
        if (n == 10) {
            func_0200ec30(0xd);
        }
    } else {
        s32 c = unk_82c;
        if (n >= 9) {
            t = c - 0x155;
            if (t < 0) {
                t = 0;
            }
        }
    }
    unk_82c = t;
    unk_830 = t;
    unk_834 = t;
    func_02007ebc(&v, this, n);
    func_020e7870(&unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&unk_828, v.z, 0x800, 0x2000, 0x333);
}

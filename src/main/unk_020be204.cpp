#include "types.h"

struct Unk_020be204_Vec {
    s32 x, y, z;
};

struct Unk_020bca5c_Rec {
    u32 unk_00;
    Unk_020be204_Vec unk_04;
};

extern "C" {
s32 func_020bebfc(s32 a, s32 b);
void func_020bee28(Unk_020be204_Vec *v, s32 a, s32 b, BOOL c);
void func_01ffca8c(Unk_020be204_Vec *a, Unk_020be204_Vec *b, Unk_020be204_Vec *c);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
void func_020e9888(Unk_020be204_Vec *v, s32 a);
u32 func_02063b8c(u32 n);
s32 func_02063b74(s32 n);
void func_02089270(void *p);
s32 func_020891d8(void *p);
void func_020bd0d4(void *a, u32 b, u32 c, void *d);
Unk_020bca5c_Rec *func_020bca5c(void *a, u32 b);
Unk_020be204_Vec func_020bffc0(Unk_020be204_Vec *v);
s32 func_02094348();
s32 func_020bc754(void *a, u32 b, u32 c, void *d, u32 e);
void func_02064928(u32 a);
extern s8 data_020d0e00[];
extern u32 data_020d1a28;
extern s32 data_020c8cb8;
extern s32 data_021c309c[];
extern u8 data_021f44ac[];
extern u8 data_021f4880[];
extern u8 data_021f14e0[];
}

class Unk_020be204 {
public:
    void func_020be204();
    void func_020be314(u32 a);
    void func_020be428();
    void func_020be44c();
    Unk_020be204 *func_020be4b0();
    void func_020be4d0();
    void func_020be4d8();
    void func_020be58c(u32 a);
    void func_020be61c();
    void func_020be624();
    void func_020be6f0(u32 a);
    void func_020be7b4();
    void func_020be7bc();
    void func_020be7c0();
    void func_020be7dc();
    void func_020be820();
    void func_020be970();
    void func_020be9e8();
    void func_020bea24(u32 a);
    void func_020beac8(u32 a);

    // other methods
    void func_020be094();
    void func_020bec00();
    void func_020bec40();
    void func_020beb88(s32 a);
    void func_020bdd24(u32 a, u32 b);
    void func_020bfe38();
    void func_020bfcd0();
    void func_020bfb68();
    void func_020bfa1c();
    void func_020bf634();
    void func_020bf4b4();
    void func_020bf1d8();
    void func_020bef98();
    void func_020bef2c();
    void func_020bfec0(u32 a);
    void func_020bfd7c(u32 a);
    void func_020bfbf8(u32 a);
    void func_020bfa90(u32 a);
    void func_020bf664(u32 a);
    void func_020bf5d8(u32 a);
    void func_020bf3bc(u32 a);
    void func_020bf15c(u32 a);
    void func_020bef44(u32 a);
    void func_020beb40(u32 a);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10[5];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x32 */ u8 unk_32[2];
    /* 0x34 */ Unk_020be204_Vec unk_34;
    /* 0x40 */ Unk_020be204_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u16 unk_54;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 unk_5d;
    /* 0x5e */ u8 unk_5e[2];
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
};

static inline void Unk_020be204_Set(Unk_020be204_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline BOOL Unk_020be204_Outside(Unk_020be204_Vec *v) {
    BOOL r = v->y < -0xa000 || v->y > 0xca000 || v->x < -0xa000 || v->x > 0x10a000;
    return r;
}

static inline BOOL Unk_020be204_Bit(u32 v, u32 n) {
    BOOL r = ((v >> n) & 1) ? TRUE : FALSE;
    return r;
}

void Unk_020be204::func_020be204() {
    static void (Unk_020be204::*tbl[13])() = {
        &Unk_020be204::func_020bfe38, &Unk_020be204::func_020bfcd0, &Unk_020be204::func_020bfb68,
        &Unk_020be204::func_020bfa1c, &Unk_020be204::func_020bf634, &Unk_020be204::func_020bf4b4,
        &Unk_020be204::func_020bf1d8, &Unk_020be204::func_020bef98, &Unk_020be204::func_020bef2c,
        &Unk_020be204::func_020be9e8, &Unk_020be204::func_020be7bc, &Unk_020be204::func_020be624,
        &Unk_020be204::func_020be4d8,
    };
    void (Unk_020be204::*fn)() = tbl[unk_00];
    if (fn) {
        (this->*fn)();
    }
}

void Unk_020be204::func_020be314(u32 a) {
    static void (Unk_020be204::*tbl[13])(u32) = {
        &Unk_020be204::func_020bfec0, &Unk_020be204::func_020bfd7c, &Unk_020be204::func_020bfbf8,
        &Unk_020be204::func_020bfa90, &Unk_020be204::func_020bf664, &Unk_020be204::func_020bf5d8,
        &Unk_020be204::func_020bf3bc, &Unk_020be204::func_020bf15c, &Unk_020be204::func_020bef44,
        &Unk_020be204::func_020beb40, (void (Unk_020be204::*)(u32))&Unk_020be204::func_020be7c0,
        &Unk_020be204::func_020be6f0, &Unk_020be204::func_020be58c,
    };
    void (Unk_020be204::*fn)(u32) = tbl[unk_00];
    if (fn) {
        (this->*fn)(a);
    }
}

void Unk_020be204::func_020be428() {
    unk_00 = 0xd;
    unk_04 = 0;
    unk_08 = 0x34;
    unk_0c = 0x2e;
    unk_24 = 5;
    unk_4c = 0x1000;
    unk_50 = 0x1000;
    unk_54 = 0;
}

void Unk_020be204::func_020be44c() {
    u32 z = 0;
    u32 m = ~z;
    unk_4c = 0x1000;
    unk_50 = 0x1000;
    unk_34.x = 0;
    unk_34.y = 0;
    unk_34.z = 0;
    unk_40.x = 0;
    unk_40.y = 0;
    unk_40.z = 0;
    unk_54 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_2e = 1;
    unk_2f = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = m;
    unk_5c = 0;
    *(s8 *)&unk_5d = m;
    unk_60 = 0;
    unk_64 = 0;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
}

Unk_020be204 *Unk_020be204::func_020be4b0() {
    func_02089270(&unk_10);
    func_020be44c();
    func_020be428();
    return this;
}

void Unk_020be204::func_020be4d0() {
    func_020be094();
}

void Unk_020be204::func_020be4d8() {
    if (unk_64 > 0) {
        unk_64--;
        if (unk_64 <= 0 && (unk_60 & 3) == 0) {
            func_020bd0d4(data_021f44ac, 7, 0x805, data_021f4880);
        }
    } else {
        Unk_020be204_Vec *pos = &unk_34;
        Unk_020be204_Vec *vel = &unk_40;
        vel->x += unk_6c;
        vel->y += unk_70;
        func_020e9888(vel, 0xfc3);
        func_01ffca8c(pos, vel, pos);
        if (Unk_020be204_Outside(pos)) {
            unk_04 = 3;
        }
    }
}

void Unk_020be204::func_020be58c(u32 a) {
    unk_60 = a;
    unk_64 = data_020d0e00[a & 3] + 0x14;
    unk_0c = 0x2c;
    unk_58 = 2;
    s32 y = (func_02063b8c(0x38) + 0x90) << 12;
    unk_34.x = -0x8000;
    unk_34.y = y;
    unk_34.z = 0;
    unk_40.x = 0x1000;
    unk_40.y = 0x2000;
    unk_40.z = 0;
    unk_40.x += func_02063b74(0x8000);
    unk_40.y -= func_02063b74(0x2000);
    unk_6c = -0x666;
    unk_70 = 0xcd;
    unk_6c += 0x8cd;
    unk_70 -= 0x666;
}

void Unk_020be204::func_020be61c() {
    func_020be094();
}

void Unk_020be204::func_020be624() {
    u32 flags = unk_68;
    unk_60--;
    if ((s32)unk_60 < 0) {
        Unk_020be204_Vec *pos = &unk_34;
        Unk_020be204_Vec *vel = &unk_40;
        if ((s32)unk_60 == -2) {
            u32 t = (flags >> 4) & 0xf;
            if (t == 1) {
                vel->x = 0x2800;
            } else if (t == 2) {
                vel->x = -0x2800;
            }
        }
        func_01ffca8c(pos, vel, pos);
        if (Unk_020be204_Outside(pos) || unk_30) {
            unk_04 = 3;
        }
    }
    if (unk_31 && !((flags >> 31) & 1) && unk_34.y < 0xc0000) {
        unk_31 = 0;
    }
}

void Unk_020be204::func_020be6f0(u32 a) {
    Unk_020bca5c_Rec *rec = func_020bca5c(data_021f14e0, a & 0xf);
    s32 id;
    unk_0c = 0x2d;
    unk_58 = 2;
    unk_60 = 0x18;
    id = rec->unk_00;
    unk_64 = id;
    Unk_020be204_Vec *pos = &rec->unk_04;
    const Unk_020be204_Vec &vt = func_020bffc0(pos);
    Unk_020be204_Vec *p34 = &unk_34;
    p34->x = vt.x;
    p34->y = 0xc5000;
    p34->z = 0;
    Unk_020be204_Vec *p40 = &unk_40;
    p40->x = 0;
    p40->y = -0xc000;
    p40->z = 0;
    s32 lim = data_020c8cb8 * 2;
    if (id == func_02094348() && pos->z < lim) {
        unk_2f = 1;
    }
    s32 d = pos->z - data_021c309c[2];
    BOOL far = (d < -0x14000 || d > 0xf000) ? TRUE : FALSE;
    a |= far << 31;
    if (far || unk_34.y >= 0xc0000) {
        unk_31 = 1;
    }
    unk_68 = a;
}

void Unk_020be204::func_020be7b4() {
    func_020be094();
}

void Unk_020be204::func_020be7bc() {
}

void Unk_020be204::func_020be7c0() {
    unk_34.x = 0xb0000;
    unk_34.y = 0x67000;
    unk_0c = 0x15;
    unk_58 = 3;
}

void Unk_020be204::func_020be7dc() {
    u32 t = unk_0c;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (!m && !((unk_60 >> 30) & 1)) {
        func_020bec00();
    }
    func_020be094();
}

static inline u32 Unk_020be820_Nib(s32 v) {
    return (v - 0x1d) & 0xf;
}

void Unk_020be204::func_020be820() {
    s32 lim;
    u32 flags = unk_60;
    BOOL b31 = Unk_020be204_Bit(flags, 31);
    BOOL done = FALSE;
    if (unk_31) {
        unk_68++;
        if ((s32)unk_68 > 6) {
            done = TRUE;
        }
    } else {
        lim = 0xc0000 - unk_34.z;
        s32 r = func_020bebfc(lim, unk_64);
        if (r <= 0x20000) {
            unk_50 = func_01ffc5a4(0x20000, r);
            unk_70 = 0xc0000 - func_02133150(r, 2);
        } else {
            if (r < lim) {
                unk_50 = 0x1000;
            } else {
                unk_50 = func_01ffcb0c(unk_50, 0x14cd);
                if (unk_50 >= 0xa000) {
                    unk_50 = 0xa000;
                    unk_31 = 1;
                }
                r = lim;
            }
            unk_70 = 0xc0000 - (r - func_01ffc5a4(0x10000, unk_50));
        }
        func_020bee28(&unk_34, unk_6c, unk_70, b31);
    }
    if (done) {
        u32 m, a;
        unk_04 = 3;
        m = (flags >> 8) & 3;
        if ((unk_60 >> 31) & 1) {
            m = (m & 3) << 8;
            a = m | 0x80000000;
            m |= 0xc0000001;
        } else {
            s32 c = unk_0c;
            m = (m & 3) << 8;
            a = m | Unk_020be820_Nib(c - 2);
            m |= Unk_020be820_Nib(c - 1) | 0x40000000;
        }
        Unk_020be204_Vec v;
        v.x = unk_6c;
        v.y = unk_34.z - 0x2000;
        v.z = 0;
        func_020bc754(data_021f14e0, 9, 0x3c, &v, a);
        func_020bc754(data_021f14e0, 9, 0x3c, &v, m);
    }
}

void Unk_020be204::func_020be970() {
    u32 flags = unk_60;
    BOOL r4 = ((flags >> 30) & 1) ? FALSE : TRUE;
    BOOL r6 = Unk_020be204_Bit(flags, 31);
    if (func_020891d8(&unk_10)) {
        if (r4) {
            func_020bec00();
        }
        unk_04 = 3;
    } else {
        func_020beb88(-1);
        func_020bee28(&unk_34, unk_6c, unk_70, r6);
        if (r4) {
            func_020bec40();
        }
    }
    if (unk_64 == 0x1d) {
        unk_60 |= data_020d1a28;
    }
}

void Unk_020be204::func_020be9e8() {
    unk_64++;
    u32 t = unk_0c;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (m) {
        func_020be820();
    } else {
        func_020be970();
    }
}

void Unk_020be204::func_020bea24(u32 a) {
    BOOL b = Unk_020be204_Bit(a, 31);
    s32 x, y;
    if (b) {
        x = func_02063b8c(0x60) + 0x50;
        if ((a >> 28) & 1) {
            y = 0;
        } else {
            y = func_02063b8c(0x20);
        }
        y += 0x52;
    } else {
        x = func_02063b8c(0xa0) + 0x30;
        y = func_02063b8c(0x60) + 0x32;
    }
    unk_6c = x << 12;
    unk_70 = 0xbf000;
    unk_34.z = y << 12;
    func_020bee28(&unk_34, unk_6c, unk_70, b);
    unk_40.x = 0;
    unk_40.y = -0x3800;
    unk_40.z = 0;
    unk_50 = 0xa000;
    u32 m = (a >> 8) & 3;
    if (b) {
        m = 1;
    } else {
        m += 2;
    }
    func_020bdd24(m, 0x802);
}

void Unk_020be204::func_020beac8(u32 a) {
    BOOL b = Unk_020be204_Bit(a, 31);
    func_020beb88(0);
    unk_6c = unk_34.x;
    unk_70 = unk_34.y;
    func_020bee28(&unk_34, unk_6c, unk_70, b);
    u32 r2 = b ? 0x804 : 0x803;
    u32 m = (a >> 8) & 3;
    func_020bdd24(b ? 1 : m + 2, r2);
    if (b) {
        unk_5c = 4;
        func_02064928(m + 5);
    } else {
        func_02064928(m + 1);
    }
}

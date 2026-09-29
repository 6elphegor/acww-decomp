#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022321e8_Vec {
    s32 x, y, z;
};

struct Unk_ov004_022321e8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual void *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0d1c : public Unk_020e0d08 {
public:
    Unk_020e0d1c();
    ~Unk_020e0d1c();
    virtual void *vfunc_00();
    virtual u32 vfunc_04();
    /* 0x40 */ Unk_ov004_022321e8_Vec unk_40;
};

// vtable 0x0224e6e8
class Unk_ov004_0224e6e8 : public Unk_020e0d1c {
public:
    Unk_ov004_0224e6e8();
    ~Unk_ov004_0224e6e8();
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    /* 0x4c */ s32 unk_4c;
};

// element of the 5-entry array in the big object (0x64 bytes)
struct Unk_ov004_02232624_Elem {
    Unk_ov004_0224e6e8 unk_00;
    u8 unk_50[0x14];
};

// vtable 0x0224e774, root of the state-object family
class Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e774();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual ~Unk_ov004_0224e774();

    /* 0x004 */ Unk_ov004_0224e6e8 unk_04;
    /* 0x054 */ u32 unk_54[4];
    /* 0x064 */ u8 unk_64[0x100 - 0x64];
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ Unk_ov004_022321e8_Bits unk_104;
    /* 0x108 */ s32 unk_108;
    /* 0x10c */ u8 pad_10c[0x158 - 0x10c];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x1a8 - 0x160];
    /* 0x1a8 */ Unk_ov004_022321e8_Vec unk_1a8;
    /* 0x1b4 */ u8 pad_1b4[0x1c0 - 0x1b4];
    /* 0x1c0 */ s16 unk_1c0;
    /* 0x1c2 */ u8 pad_1c2[4];
    /* 0x1c6 */ u8 unk_1c6;
    /* 0x1c7 */ u8 pad_1c7[0x1eb - 0x1c7];
    /* 0x1eb */ u8 unk_1eb;
    /* 0x1ec */ u8 pad_1ec[2];
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 pad_1ef[0x1fc - 0x1ef];
    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ s8 unk_1fe;
    /* 0x1ff */ u8 pad_1ff;
    /* 0x200 */ s16 unk_200;
    /* 0x202 */ u8 pad_202[0x20c - 0x202];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ u8 pad_210[0x21c - 0x210];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u8 pad_220[0x22e - 0x220];
    /* 0x22e */ u8 unk_22e;
    /* 0x22f */ u8 unk_22f;
    /* 0x230 */ u8 pad_230[0x250 - 0x230];
    /* 0x250 */ s16 unk_250;
    /* 0x252 */ u8 pad_252[2];
    /* 0x254 */ u8 unk_254;
};

// vtable 0x0224e864
class Unk_ov004_0224e864 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e864();
    virtual ~Unk_ov004_0224e864();
};

// vtable 0x0224e87c: big object, 0x810 bytes
class Unk_ov004_0224e87c : public Unk_020d8c7c {
public:
    Unk_ov004_0224e87c();
    virtual ~Unk_ov004_0224e87c();

    /* 0x050 */ Unk_ov004_02232624_Elem unk_50[5];
    /* 0x244 */ Unk_ov004_0224e6e8 unk_244;
    /* 0x294 */ u8 pad_294[0x2a8 - 0x294];
    /* 0x2a8 */ u32 unk_2a8[0x550 / 4];
    /* 0x7f8 */ u32 unk_7f8[6];
};

typedef Unk_ov004_0224e774 Obj;
typedef Unk_ov004_022321e8_Vec V3;

class Unk_ov004_0224e6fc : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e6fc();
    virtual ~Unk_ov004_0224e6fc();
};

class Unk_ov004_0224e714 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e714();
    virtual ~Unk_ov004_0224e714();
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 unk_257;
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class Unk_ov004_0224e75c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e75c();
    virtual ~Unk_ov004_0224e75c();
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 unk_257;
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class Unk_ov004_0224e78c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e78c();
    virtual ~Unk_ov004_0224e78c();
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 unk_257;
    /* 0x258 */ u8 unk_258;
};

class Unk_ov004_0224e81c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e81c();
    virtual ~Unk_ov004_0224e81c();
    /* 0x255 */ u8 unk_255;
};

class Unk_ov004_0224e7a4 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7a4();
    virtual ~Unk_ov004_0224e7a4();
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 pad_256[0x264 - 0x256];
    /* 0x264 */ u8 unk_264;
};

class Unk_ov004_0224e7bc : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7bc();
    virtual ~Unk_ov004_0224e7bc();
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 pad_256[0x270 - 0x256];
    /* 0x270 */ u8 unk_270;
};

class Unk_ov004_0224e7ec : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e7ec();
    virtual ~Unk_ov004_0224e7ec();
};

class Unk_ov004_0224e84c : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e84c();
    virtual ~Unk_ov004_0224e84c();
};

#define MINUS1 (-1)
extern "C" {
extern s16 data_02135f44[];
extern u8 data_ov004_022402ef[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_021065dc(u32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_020565e8(void *p, s32 a);
s32 func_ov004_02231e28(u16 a, u16 b);
s32 func_ov004_02231c68(Obj *o);
s32 func_ov004_02231d54(V3 *v, s32 a);
void func_ov004_022321cc(Obj *o);
void func_0205436c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
void func_020b6df4(void *p);
void func_020b6e10(void *p);
void *__cxa_vec_ctor(void *, s32, s32, void *, void *);
void __cxa_vec_cleanup(void *, s32, s32, void *);

s32 func_ov004_02232220(Obj *o);
void func_ov004_022325c8(s32 *p, s32 a, u32 ang);
void func_ov004_0223259c(s32 *p, s32 a, u32 ang);
void func_ov004_0223257c(s32 *p, s32 a, s32 ang);
void func_ov004_02232270(Obj *o, u32 a);
void func_ov004_0223230c(Obj *o, s32 f, u32 a, u32 b);
void func_ov004_022323b4(Obj *o);

void func_ov004_022321e8(Obj *o, s32 i) {
    s32 t = func_021065dc(o->unk_54[i]);
    s32 r = func_021065f8(t, 0);
    func_0205436c(o->unk_64, r, 2, 0, 0x1000, 0, 0);
}

s32 func_ov004_02232220(Obj *o) {
    BOOL r = FALSE;
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (func_020565e8(&o->unk_100, o->unk_104.mid)) {
                func_ov004_022321cc(o);
                r = TRUE;
            }
        }
    }
    return r;
}

void func_ov004_02232270(Obj *o, u32 a) {
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (func_020565e8(&o->unk_100, a)) {
                o->unk_108 = (u32)((a - 1) << 16) >> 4;
            }
        } else {
            if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
                if (a == 10) {
                    func_ov004_022321e8(o, 2);
                } else {
                    func_ov004_022321e8(o, 1);
                }
                o->unk_22e = 1;
            }
        }
    } else {
        if (func_020565e8(&o->unk_100, a)) {
            o->unk_108 = (u32)((a - 1) << 16) >> 4;
        }
    }
}

void func_ov004_0223230c(Obj *o, s32 f, u32 a, u32 b) {
    s32 t = func_ov004_02231e28(a, b);
    o->unk_200 = t * 0xb6;
    if (f != 0) {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        } else {
            o->unk_1fe = 3;
        }
    } else {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_1fe = 3;
        } else {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        }
    }
}

void func_ov004_022323b4(Obj *o) {
    if (o->unk_1ee != 1) {
        if (o->unk_1fd == 0) {
            if (func_ov004_02231e28(0, 100) < 0x4b) {
                o->unk_1fd = 1;
            } else {
                o->unk_1fd = 2;
                return;
            }
        } else {
            if (o->unk_1eb >= 4) {
                o->unk_1fd = 1;
                o->unk_1fc = 0;
                o->unk_1eb = 0;
            }
        }
        if (o->unk_1fd == 1) {
            if (o->unk_1ee == 5) {
                o->unk_1ee = 4;
            }
            if (o->unk_1fc == 0) {
                V3 l;
                l.x = o->unk_1a8.x;
                l.y = o->unk_1a8.y;
                l.z = o->unk_1a8.z;
                func_ov004_0223257c(&l.x, ((s32)data_ov004_022402ef[o->unk_15c * 17] << 12) >> 7, o->unk_1c0);
                s32 r = func_ov004_02231d54(&l, o->unk_1c0);
                func_ov004_0223230c(o, r, 2, 6);
                o->unk_1fc = 1;
                o->unk_250 = 0;
                o->unk_250 = o->unk_250 + o->unk_200;
            }
            if (o->unk_200 * o->unk_250 < 0) {
                if (func_ov004_02232220(o)) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 0) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 1) {
                    if (o->unk_22e == 0) {
                        o->unk_1fd = 2;
                    }
                }
            } else {
                o->unk_22f = 0;
                o->unk_1c0 = o->unk_1c0 + o->unk_200;
                o->unk_250 = o->unk_250 + o->unk_200;
                func_ov004_02232270(o, (u16)o->unk_1fe);
                if (o->unk_1ee == 4) {
                    o->unk_158 = 0;
                }
            }
        } else if (o->unk_1fd == 2) {
            func_ov004_02232220(o);
        }
    }
}

void func_ov004_02232548(Obj *o) {
    if (func_ov004_02231c68(o)) {
        func_ov004_022323b4(o);
    } else {
        o->unk_1fc = 0;
        o->unk_1fd = 0;
        func_ov004_02232220(o);
    }
}

void func_ov004_0223257c(s32 *p, s32 a, s32 ang) {
    func_ov004_022325c8(p, a, ang);
    p += 2;
    func_ov004_0223259c(p, a, ang);
}

void func_ov004_0223259c(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx + 1]);
}

void func_ov004_022325c8(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx]);
}
}

Unk_ov004_0224e6e8::~Unk_ov004_0224e6e8() {
}

Unk_ov004_0224e6e8::Unk_ov004_0224e6e8() {
    unk_4c = 0;
}

Unk_ov004_0224e87c::~Unk_ov004_0224e87c() {
    func_0209c2d8(unk_7f8);
    __cxa_vec_cleanup(unk_2a8, 2, 0x2a8, (void *)func_020b6df4);
}

Unk_ov004_0224e87c::Unk_ov004_0224e87c() {
    __cxa_vec_ctor(unk_2a8, 2, 0x2a8, (void *)func_020b6e10, (void *)func_020b6df4);
    func_0209c2dc(unk_7f8);
}

Unk_ov004_0224e6fc::~Unk_ov004_0224e6fc() {
}

Unk_ov004_0224e6fc::Unk_ov004_0224e6fc() {
}

Unk_ov004_0224e714::~Unk_ov004_0224e714() {
}

Unk_ov004_0224e714::Unk_ov004_0224e714() {
    unk_258 = 0;
    unk_257 = 0;
    unk_255 = 0;
    unk_256 = 1;
    unk_259 = 0;
}

Unk_ov004_0224e75c::~Unk_ov004_0224e75c() {
}

Unk_ov004_0224e75c::Unk_ov004_0224e75c() {
    unk_255 = 0;
    unk_257 = 0;
    unk_259 = 0;
}

Unk_ov004_0224e78c::~Unk_ov004_0224e78c() {
}

Unk_ov004_0224e78c::Unk_ov004_0224e78c() {
    unk_255 = 0;
    unk_256 = 0;
    unk_258 = 0;
}

Unk_ov004_0224e81c::~Unk_ov004_0224e81c() {
}

Unk_ov004_0224e81c::Unk_ov004_0224e81c() {
    unk_255 = 0;
}

Unk_ov004_0224e7a4::~Unk_ov004_0224e7a4() {
}

Unk_ov004_0224e7a4::Unk_ov004_0224e7a4() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0xa3;
    unk_264 = 0;
}

Unk_ov004_0224e7bc::~Unk_ov004_0224e7bc() {
}

Unk_ov004_0224e7bc::Unk_ov004_0224e7bc() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_270 = 0;
}

Unk_ov004_0224e7ec::~Unk_ov004_0224e7ec() {
}

Unk_ov004_0224e7ec::Unk_ov004_0224e7ec() {
}

Unk_ov004_0224e84c::~Unk_ov004_0224e84c() {
}

Unk_ov004_0224e84c::Unk_ov004_0224e84c() {
    *(u8 *)&unk_21c = 2;
}

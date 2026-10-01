#include "types.h"

extern "C" {
// Other files
void *_ZN12Unk_020e0d9813func_020898b8Ev(void *p);
void _ZN12Unk_020e0d988vfunc_0cEv(void *p);
s32 _ZN12Unk_020e0d988vfunc_08Ev(void *p);
void *_ZN12Unk_0208927013func_02089248Ev(void *p);
s32 _ZN12Unk_020e0d9813func_0208989cEv(void *p);
s32 _ZN12Unk_020e0d9813func_02089884Ev(void *p);
s32 _ZN12Unk_0208927013func_02089228Ei(void *p, s32 v);
s32 _ZN12Unk_0208927013func_02089210Ei(void *p, s32 v);
void func_02087e70(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void _ZN12Unk_020e451c13func_020b7a24Ev(void *p);
}

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();

    /* 0x00 */ u8 unk_00[0x14];
};

// Root of the chain; vfunc_10 is its function at 0x02089f6c
class Unk_020e0db4 {
public:
    virtual ~Unk_020e0db4();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 a, s32 b);
};

// Base of Unk_020e451c (ctor func_02089e60, dtor func_02089d9c), 0xbc bytes
class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 a);
    virtual ~Unk_020e0d98();

    /* 0x04 */ u8 unk_04[0xb8];
};

class Unk_020e451c : public Unk_020e0d98 {
public:
    Unk_020e451c();
    virtual ~Unk_020e451c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    /* 0xbc */ Unk_02089270 unk_bc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 unk_d5;
    /* 0xd6 */ u8 unk_d6;
    /* 0xd7 */ u8 unk_d7;
    /* 0xd8 */ u8 unk_d8;
};

Unk_020e451c::Unk_020e451c() : Unk_020e0d98(1) {
    unk_d0 = 0;
    unk_d4 = 0;
    unk_d5 = 0;
    unk_d6 = 0;
    unk_d7 = 0;
    unk_d8 = 0;
}

Unk_020e451c::~Unk_020e451c() {
}

void Unk_020e451c::vfunc_08() {
    s32 r7, y;
    s32 r4 = 0;
    if (unk_d0 < 0x19) {
        if (unk_d5 != 0) {
            void *a = _ZN12Unk_0208927013func_02089248Ev(&unk_bc);
            r7 = (s32)_ZN12Unk_020e0d9813func_020898b8Ev(this);
            r4 = _ZN12Unk_020e0d9813func_0208989cEv(this);
            s32 b = _ZN12Unk_020e0d9813func_02089884Ev(this);
            r4 = r4 + _ZN12Unk_0208927013func_02089228Ei((void *)r7, -1) + _ZN12Unk_0208927013func_02089228Ei(&unk_bc, -1);
            y = b + _ZN12Unk_0208927013func_02089210Ei((void *)r7, -1) + _ZN12Unk_0208927013func_02089210Ei(&unk_bc, -1);
            func_02087e70(0, (u32)a, r4, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            r4 = 1;
        }
        _ZN12Unk_020e0d988vfunc_08Ev(this);
    }
    unk_d6 = r4;
}

void Unk_020e451c::vfunc_0c() {
    unk_d7 = unk_d6;
    _ZN12Unk_020e0d988vfunc_0cEv(this);
    _ZN12Unk_020e451c13func_020b7a24Ev(this);
}

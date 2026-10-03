// mwcc-flags: -nothumb -O4,p
// RC_020f24c0 (companion of RC_020f30fc): autoload_2 0x020f24c0-0x020f30fc = the scene-class part of G008a, code unchanged (the
// sound-channel part 0x020f30fc-0x020f3e50 moved to RC_020f30fc). PARTIAL: second half of the scene-class file (31 vtables at
// 0x0213b2c8-0x0213b914: classes 0x0213b338, 0x0213b574, 0x0213b2d0, the mid-level base 0x0213b8b4, the base class 0x0213b8e8 with its
// helpers up to its constructor 0x020f3078). All functions extern "C" under their symbols.txt names with the object first; classes only
// DECLARE virtuals, no vtable is emitted; all data and callees are extern. Superseded by RC_020f0fb4 (the whole file as real classes).
#include "types.h"

class SubObj {
public:
    virtual void vfunc_00();
};

struct Obj {
    /* 0x00 */ u32 *vptr;
    /* 0x04 */ s8 id;
    /* 0x05 */ u8 f5;
    /* 0x06 */ u8 f6;
    /* 0x07 */ u8 pad7[0x15];
    /* 0x1c */ u8 state;
    /* 0x1d */ u8 f1d;
};

struct Bytes4 {
    u8 b0, b1, b2, b3;
};

struct Player {
    /* 0x00 */ u8 pad0[0x15];
    /* 0x15 */ Bytes4 unk_15;
};

struct F30 {
    u8 pad[0x3c];
    u8 f3c;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x28];
    /* 0x28 */ void *f28;
    /* 0x2c */ Obj *f2c;
    /* 0x30 */ F30 *f30;
    /* 0x34 */ u8 pad1[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad2[0x14];
    /* 0x62 */ u8 f62;
    /* 0x63 */ u8 pad3[0x10];
    /* 0x73 */ u8 f73;
};

extern "C" {
extern Glob data_021f5b80;
extern Player data_021f59f4;
extern Bytes4 data_0213b2c4;
extern u32 data_0213b2d0[];
extern u32 data_0213b338[];
extern u32 data_0213b574[];
extern u32 data_0213b8b4[];
extern u32 data_0213b8e8[];

void _ZdlPv(void *p);
void *func_020edc88(void);
void *func_020ed960(void);
void *func_020ed978(u32 a);
BOOL func_020edd58(Player *o, u32 a, u32 b, Bytes4 s);
void func_0210be44(void *p);
void func_0210bd58(void *a, u32 b);
void *func_0210bd4c(void *a);
void func_0210cc14(s32 a, void *b);
void func_0210a388(s32 a, void *b, u32 c);
void func_0210a460(s32 a, s32 b);
void func_020f0838(Glob *g, s32 v);
void func_020f0df8(Glob *g);
void func_020f2aec(Obj *self);
void func_020f2b34(Obj *self);
void func_020f2b60(Obj *self);
void func_020f2b9c(Obj *self);
void func_020f2be4(Obj *self);
void func_020f2c2c(Obj *self);
void func_020f2c58(Obj *self, s32 v);
void func_020f2ca8(Obj *self);
void func_020f2cd4(Obj *self, u32 a, s32 b);
Obj *func_020f29c8(Obj *self);
Obj *func_020f2a94(Obj *self);
void func_020f2dcc(Obj *self);
void func_020f2dec(Obj *self, s32 v);
void func_020f2fac(Obj *self);
Obj *func_020f2fc8(Obj *self);
Obj *func_020f3078(Obj *self);
void func_020f44f0(s32 v);
void func_020f4468(void);
void func_020f5070(F30 *a, s32 b);
void func_020f831c(void *p);
void func_020f833c(void *p);
void func_020f8290(void *p, s32 v);
void func_020f0980(Glob *g);
void func_020f0dec(Glob *g);
void func_020f443c(void);
void func_020efc84(Glob *g, s32 a, s32 b);
void func_020edd20(Player *p, s32 v);
void func_020efa64(Glob *g);
void func_020f51b4(F30 *v);
void func_0210a310(s32 a, s32 b);
void func_020f2eac(Obj *self, s32 v);
}

extern "C" Obj *func_020f3078(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = self;
    data_021f5b80.f4d = 0;
    data_021f5b80.f30->f3c = 0;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 210);
    func_020efc84(&data_021f5b80, 127, 127);
    func_0210a460(15, 100);
    self->id = -1;
    self->f5 = 0;
    self->f6 = 0;
    func_020f44f0(0);
    return self;
}

extern "C" Obj *func_020f3040(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    return self;
}

extern "C" Obj *func_020f3000(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    _ZdlPv(self);
    return self;
}

extern "C" Obj *func_020f2fc8(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    return self;
}

extern "C" void func_020f2fc4(void) {
}

extern "C" void func_020f2fc0(void) {
}

extern "C" void func_020f2fac(Obj *self) {
    return func_020efa64(&data_021f5b80);
}

extern "C" void func_020f2f6c(Obj *self) {
    func_020f51b4(data_021f5b80.f30);
    data_021f5b80.f4d = 1;
    func_020f2eac(self, 15);
    self->f5 = 1;
}

extern "C" void func_020f2eac(Obj *self, s32 v) {
    func_0210a310(11, v);
    func_0210a310(2, v);
    func_0210a310(4, v);
    func_0210a310(5, v);
    func_0210a310(6, v);
    func_0210a310(7, v);
    func_0210a310(8, v);
    func_0210a310(9, v);
    func_0210a310(10, v);
    func_0210a310(12, v);
    func_0210a310(15, v);
    func_0210a310(16, v);
    func_0210a310(17, v);
    func_0210a310(18, v);
    func_0210a310(19, v);
}

extern "C" void func_020f2e58(Obj *self) {
    func_020f443c();
    void *t = func_020edc88();
    func_020edd20(&data_021f59f4, 1);
    if (data_021f5b80.f62 != 0) return;
    func_0210bd58(t, 1);
    func_020f0dec(&data_021f5b80);
}

extern "C" void func_020f2dec(Obj *self, s32 a) {
    s32 r;
    switch (a) {
    case 0:
    case 4:
        r = 133;
        break;
    case 1:
    case 3:
        r = 134;
        break;
    case 2:
        r = 135;
        break;
    }
    func_020f0980(&data_021f5b80);
    func_020f0838(&data_021f5b80, r);
    self->f6 = 1;
}

extern "C" void func_020f2dcc(Obj *self) {
    func_020ed978((u32)func_020ed960());
    self->f6 = 0;
}

extern "C" void func_020f2dc8(void) {
}

extern "C" void func_020f2cd4(Obj *self, u32 a, s32 b) {
    void *t = func_020edc88();
    if (data_021f5b80.f62 == 0) {
        func_020f0df8(&data_021f5b80);
        func_0210a388(0, t, a);
        func_0210be44(t);
    }
    Bytes4 q = data_0213b2c4;
    q.b0 = b;
    data_021f59f4.unk_15 = q;
    func_020edd58(&data_021f59f4, 0, 0, q);
    func_020f4468();
    func_0210be44(t);
}

extern "C" void func_020f2ca8(Obj *self) {
    func_0210a388(4, func_020edc88(), 0x206c);
}

extern "C" void func_020f2c58(Obj *self, s32 n) {
    void *t = func_020edc88();
    for (s32 i = 0; i < n; i++) {
        func_0210a388(11, t, 0x650c);
    }
}

extern "C" void func_020f2c2c(Obj *self) {
    func_0210a388(5, func_020edc88(), 0x31ac);
}

extern "C" void func_020f2be4(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 2; i++) {
        func_0210a388(6, t, 0x7a4c);
    }
}

extern "C" void func_020f2b9c(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 4; i++) {
        func_0210a388(17, t, 0x356c);
    }
}

extern "C" void func_020f2b60(Obj *self) {
    void *t = func_020edc88();
    func_0210a388(18, t, 0x5ecc);
    func_0210a388(19, t, 0x46bc);
}

extern "C" void func_020f2b34(Obj *self) {
    func_0210a388(13, func_020edc88(), 0x1f4c);
}

extern "C" void func_020f2aec(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 2; i++) {
        func_0210a388(12, t, 0x8cc);
    }
}

extern "C" Obj *func_020f2a94(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b8b4;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 1;
    func_020f44f0(1);
    data_021f5b80.f73 = 0;
    return self;
}

extern "C" Obj *func_020f2a3c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b8b4;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 1;
    func_020f44f0(1);
    data_021f5b80.f73 = 0;
    return self;
}

extern "C" Obj *func_020f2a18(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f29ec(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" Obj *func_020f29c8(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    return self;
}

extern "C" void func_020f2968(Obj *self) {
    func_020f2cd4(self, 0x21ef8, 1);
    func_020f2c58(self, 3);
    func_020f2b34(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" void func_020f2938(Obj *self, s32 a) {
    func_020ed978((u32)func_020ed960());
    func_020f2dec(self, a);
}

extern "C" void func_020f2910(Obj *self) {
    func_020f2dcc(self);
    func_020f0838(&data_021f5b80, 143);
}

extern "C" void func_020f28c0(Obj *self, s32 a) {
    func_020ed978((u32)func_020ed960());
    if (a != 0) {
        if (a == 1) {
            func_020f0838(&data_021f5b80, 178);
        }
    } else {
        func_020f0838(&data_021f5b80, 143);
    }
}

extern "C" Obj *func_020f2878(Obj *self) {
    func_020f2a94(self);
    self->vptr = data_0213b2d0;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 2;
    return self;
}

extern "C" Obj *func_020f2854(Obj *self) {
    self->vptr = data_0213b2d0;
    func_020f29c8(self);
    return self;
}

extern "C" Obj *func_020f2828(Obj *self) {
    self->vptr = data_0213b2d0;
    func_020f29c8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f27d0(Obj *self) {
    func_020f2cd4(self, 0x1f340, 2);
    func_020f2c58(self, 2);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f2788(Obj *self) {
    func_020f2a94(self);
    self->vptr = data_0213b574;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 3;
    return self;
}

extern "C" Obj *func_020f2764(Obj *self) {
    self->vptr = data_0213b574;
    func_020f29c8(self);
    return self;
}

extern "C" Obj *func_020f2738(Obj *self) {
    self->vptr = data_0213b574;
    func_020f29c8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f26d8(Obj *self) {
    func_020f2cd4(self, 0x21ef8, 3);
    func_020f2c58(self, 2);
    func_020f2b34(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f269c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b338;
    func_020f833c((u8 *)self + 8);
    self->id = 10;
    self->state = 0;
    return self;
}

extern "C" Obj *func_020f266c(Obj *self) {
    self->vptr = data_0213b338;
    func_020f831c((u8 *)self + 8);
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2634(Obj *self) {
    self->vptr = data_0213b338;
    func_020f831c((u8 *)self + 8);
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f2568(Obj *self) {
    func_020f2cd4(self, 0x10ea0, 5);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2b9c(self);
    func_020f2b60(self);
    void *t = func_020edc88();
    func_0210cc14(9, t);
    func_0210be44(t);
    self->f1d = (u8)(u32)func_0210bd4c(t);
    func_020f0838(&data_021f5b80, 144);
    func_020f2aec(self);
    func_0210be44(t);
    self->state = 1;
    data_021f5b80.f62 = 0;
    func_020f8290((u8 *)self + 8, 1);
    func_0210a460(18, 63);
    func_0210a460(19, 63);
}

extern "C" void func_020f2544(Obj *self) {
    func_020f2fac(self);
    ((SubObj *)((u8 *)self + 8))->vfunc_00();
}

extern "C" void func_020f2534(Obj *self, s32 v) {
    return func_020f8290((u8 *)self + 8, v);
}

extern "C" void func_020f24fc(Obj *self, s32 a) {
    func_020ed978(self->f1d);
    func_020f2dec(self, a);
    self->state = 2;
}

extern "C" void func_020f24c0(Obj *self) {
    func_020f2dcc(self);
    func_020f0838(&data_021f5b80, 144);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    self->state = 1;
}


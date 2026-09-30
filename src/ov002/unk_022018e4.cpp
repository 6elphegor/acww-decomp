#include "types.h"

struct Unk_ov002_022018e4_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

struct Unk_ov002_022018e4_Ent {
    u8 pad[0x48];
};

struct Unk_ov002_022018e4_Pad {
    s32 v[1];
    Unk_ov002_022018e4_Pad() {}
    ~Unk_ov002_022018e4_Pad() {}
};

struct Unk_ov002_022018e4_Arg {
    u8 v;
};

struct Unk_ov002_022018e4 {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1a;
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u8 unk_20;
    volatile u8 unk_21;
    u8 unk_22[2];
    u32 unk_24;
    Unk_ov002_022018e4_Ent unk_28[5];
    Unk_ov002_022018e4_Vt unk_190;
    u8 pad_194[0x6c];
    Unk_ov002_022018e4_Vt unk_200;
    u8 pad_204[0xb8];
    u32 unk_2bc[16];
};

typedef Unk_ov002_022018e4 Self;

extern "C" {
extern u32 data_021f482c;
extern u32 data_021dfd8c;
extern u32 data_021d735c;
extern s32 data_ov002_02204544[];
extern u32 data_ov002_0220457c[];
extern u32 data_ov002_02204590[];
extern u32 data_ov002_022045a4[];
extern u32 data_ov002_022045c0[];

void func_ov002_022013ac(s32, s32, s32);
void func_ov002_022013c4(Self *, s32);
void func_ov002_022013cc(Self *, s32);
BOOL func_ov002_022013d4(Self *, s32);
s32 func_ov002_0220144c(Self *, s32, s32);
void func_ov002_02201534(Self *, Unk_ov002_022018e4_Arg *);
void func_ov002_02201728(Self *);
void func_ov002_02201784(Self *);
BOOL func_ov002_0220128c(s32);
BOOL func_ov002_0220127c(s32);
void func_ov002_02200edc(void *, s32, s32, s32, s32);
void func_ov002_02200f18(void *, s32, s32, s32, s32);
BOOL func_ov002_02200f54(void *, s32);
BOOL func_ov002_0220102c(void *, s32);
void func_ov002_02200d78(void *, s32, s32, s32);
s32 func_ov002_02201140(void *);
void func_ov002_022022e0(Self *, s32, s32);
void func_ov002_02202520(void *, s32);

void func_0207bf60(void *);
s32 func_020805c4();
void func_02094030(void *);
void func_02094018(void *);
void func_02002fc8(s32, void *);
void func_020a7bd8(s32, void *);
void func_02097868(void *);
s32 func_0209888c();
void func_020940d0(s32, void *);
BOOL func_0206ef00();
void func_0200402c(s32);
void func_0200212c(s32);
s32 func_0206fa1c(void *);
void func_0206fab4(void *, s32, s32);
s32 func_0200273c(s32);
void func_0200140c();
void func_0200142c();
void func_02002700(s32);
void func_020013e0();
void func_020013cc(s32);
void func_020020b8(s32);
void func_02089a5c(void *, s32);
void func_0208e288(void *, s32, s32);
void func_02089ad8(void *, s32, s32);
void func_02002398(s32, u32);
void func_0200226c(s32, s32, s32, s32);
u8 *func_020641ec(u32, u32, s32, s32);
void func_02115e48(void *, void *, s32);
void func_02115e30(s32, void *, s32);
void func_020024f0(void *, s32, s32, s32);
void func_020e85fc(u32, void *);
void func_020026c4(void *, u32, s32, s32, s32, s32);
void func_0200261c(void *, u32, s32, s32, s32, s32);
void func_020021fc(s32, s32, s32);
void func_ov002_02201984(s32, s32);
void func_ov002_02201938(s32, s32);
void func_ov002_02201958(s32, s32);
void func_ov002_022019a4(s32, s32);
void func_ov002_02201ad8(Self *, s32);
s32 func_ov002_02201cb0(Self *);
s32 func_ov002_02201ca4(Self *);
void func_ov002_02201df0(Self *);
void func_ov002_02201f18(Self *);
void func_ov002_02202018(Self *, u32);
void func_ov002_02202098(Self *, s32);
void func_ov002_022021d8(Self *, s32, s32);
void func_ov002_022021f4(Self *, s32, s32);
void func_ov002_02201cb8(Self *);
void func_ov002_02201d24(Self *);
void func_ov002_02201e40(Self *);
void func_ov002_02201ea4(Self *);
}

extern "C" {

void func_ov002_022018e4(s32 unused, s32 x, u32 id) {
    if (id >= 1 && id < 5) {
        func_ov002_02201984(x, id - 1);
    } else if (id >= 5 && id < 0xd) {
        func_ov002_02201938(x, id - 5);
    } else {
        switch (id) {
        case 0xd:
            func_ov002_022013ac(unused, x, 0x25);
            break;
        case 0xe:
            func_ov002_022013ac(unused, x, 0x1e);
            break;
        case 0xf:
            func_ov002_022013ac(unused, x, 0x27);
            break;
        }
    }
}

void func_ov002_02201938(s32 x, s32 y) {
    func_0207bf60(&data_021dfd8c);
    func_ov002_02201958(x, func_020805c4());
}

void func_ov002_02201958(s32 a, s32 b) {
    u32 buf[7];
    func_02094030(buf);
    func_02002fc8(b, buf);
    func_020a7bd8(a, buf);
    func_02094018(buf);
}

void func_ov002_02201984(s32 x, s32 y) {
    func_02097868(&data_021d735c);
    func_ov002_022019a4(x, func_0209888c());
}

void func_ov002_022019a4(s32 a, s32 b) {
    u32 buf[7];
    func_02094030(buf);
    func_020940d0(b, buf);
    func_020a7bd8(a, buf);
    func_02094018(buf);
}

BOOL func_ov002_022019d0(Self *self, s32 p, u8 *pos, u32 n) {
    if (p != 0) {
        if (func_ov002_0220128c(p)) {
            if (*pos > n) {
                *pos = *pos - 1;
            } else {
                *pos = self->unk_1c - 1;
            }
            return TRUE;
        }
        if (func_ov002_0220127c(p)) {
            s32 t = *pos + 1;
            if (t < self->unk_1c) {
                *pos = t;
            } else {
                *pos = n;
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_ov002_02201a28(Self *self) {
    u32 v = self->unk_1e;
    if (v != 0) {
        self->unk_1e = v - 1;
        return FALSE;
    }
    return TRUE;
}

void func_ov002_02201a3c(Self *self, u32 x) {
    func_ov002_02201ad8(self, x);
    if (func_ov002_0220144c(self, self->unk_20, (u8)x) == 0xf) {
        func_0200402c(0x2a);
    } else {
        func_0200402c(0x29);
    }
}

u8 func_ov002_02201a70(Self *self, s32 x) {
    s32 t = self->unk_1c - 1;
    func_ov002_02201ad8(self, t);
    if (x == 0) {
        func_ov002_022013cc(self, 0x10);
    } else {
        func_0200402c(0x2a);
    }
    return t;
}

void func_ov002_02201aa0(Self *self, s32 a, s32 b) {
    func_ov002_02201ad8(self, a);
    if (b == 0) {
        func_ov002_022013cc(self, 0x10);
    } else if (self->unk_1c - 1 == a) {
        func_0200402c(0x2a);
    } else {
        func_0200402c(0x29);
    }
}

void func_ov002_02201ad8(Self *self, s32 x) {
    func_ov002_022013cc(self, 8);
    if (func_0206ef00()) {
        self->unk_1e = 2;
    } else {
        self->unk_1e = 5;
    }
    self->unk_1f = x;
}

void func_ov002_02201b04(Self *self) {
    self->unk_17 = 0;
    if (self->unk_16 != 0) {
        func_0200212c(self->unk_1a);
        self->unk_16 = 0;
    }
    func_ov002_02201784(self);
}

void func_ov002_02201b28(Self *self) {
    if (func_ov002_022013d4(self, 1)) {
        self->unk_190.vfunc_08();
        self->unk_200.vfunc_08();
    }
}

void func_ov002_02201b58(Self *self) {
    func_ov002_02201784(self);
    if (func_ov002_022013d4(self, 8)) {
        func_ov002_022013c4(self, 8);
        func_ov002_02202520(&self->unk_28[self->unk_1f], 0xf);
        func_0206fab4(&self->unk_28[self->unk_1f], 0, 0);
    }
    switch (self->unk_17) {
    case 1:
        switch (self->unk_16) {
        case 0:
            func_ov002_02202018(self, 1);
            self->unk_17 = 0;
            func_ov002_02201728(self);
            break;
        case 1:
        case 2:
            self->unk_17 = 0;
            break;
        case 3:
            func_ov002_02202018(self, 4);
            break;
        }
        break;
    case 2:
        switch (self->unk_16) {
        case 3:
            func_ov002_02202018(self, 4);
            self->unk_17 = 0;
            break;
        case 1:
            func_0200212c(self->unk_1a);
            func_ov002_02202018(self, 0);
            self->unk_17 = 0;
            break;
        case 0:
        case 2:
            self->unk_17 = 0;
            break;
        }
        break;
    }
    switch (self->unk_16) {
    case 1:
        func_ov002_02201ea4(self);
        break;
    case 4:
        func_ov002_02201e40(self);
        break;
    case 2:
        func_ov002_02201d24(self);
        break;
    case 5:
        func_ov002_02201cb8(self);
        break;
    case 0:
    case 3:
        break;
    }
}

void func_ov002_02201c6c(Self *self) {
    s32 max = 0;
    s32 i = 0;
    Unk_ov002_022018e4_Ent *e = self->unk_28;
    for (; i < self->unk_1c; i++) {
        s32 v = func_0206fa1c(&e[i]);
        if (v > max) max = v;
    }
    self->unk_1b = (max + 7) >> 3;
}

s32 func_ov002_02201ca4(Self *self) {
    return (self->unk_1c * 2 + 2) << 3;
}

s32 func_ov002_02201cb0(Self *self) {
    return (self->unk_1b + 4) << 3;
}

void func_ov002_02201cb8(Self *self) {
    if (self->unk_18 == 0) {
        s32 r = func_0200273c(self->unk_1a);
        func_ov002_02200edc(self->unk_2bc, r, 3, 0, 0x30);
        func_ov002_02201df0(self);
        self->unk_18 = self->unk_18 + 1;
    }
    if (func_ov002_02200f54(self->unk_2bc, 0)) {
        func_0200140c();
        func_ov002_022013c4(self, 1);
        func_0200212c(self->unk_1a);
        func_ov002_02202018(self, 0);
    } else {
        func_ov002_02201df0(self);
    }
}

void func_ov002_02201d24(Self *self) {
    if (self->unk_18 == 0) {
        func_ov002_02201f18(self);
        func_0200142c();
        func_02002700(self->unk_1a);
        func_020013e0();
        func_020013cc(-6);
        s32 r = func_0200273c(self->unk_1a);
        func_ov002_02200f18(self->unk_2bc, r, 5, 0, 0x30);
        func_020020b8(self->unk_1a);
        func_ov002_022013cc(self, 1);
        self->unk_21 = 2;
        func_ov002_02201df0(self);
        self->unk_18 = self->unk_18 + 1;
    } else {
        if (func_ov002_0220102c(self->unk_2bc, 0)) {
            func_ov002_02202018(self, 3);
            if (self->unk_21 != 0) {
                self->unk_21 = 1;
            }
        }
        if (self->unk_21 != 0) {
            self->unk_21 = self->unk_21 - 1;
            if (self->unk_21 == 0) {
                func_02089a5c(&self->unk_200, 0);
            }
        }
        func_ov002_02201df0(self);
    }
}

void func_ov002_02201df0(Self *self) {
    func_ov002_02200d78(self->unk_2bc, self->unk_1a, -self->unk_08, -self->unk_0c);
    s32 r = func_ov002_02201140(self->unk_2bc);
    func_0208e288(&self->unk_190, 0, r);
    func_02089ad8(&self->unk_200, 0, -(r >> 2));
}

void func_ov002_02201e40(Self *self) {
    Unk_ov002_022018e4_Pad pad;
    if (self->unk_18 == 0) {
        s32 x;
        if (self->unk_19 != 0) {
            x = self->unk_08 - 0xb;
        } else {
            x = self->unk_08 + 0xb;
        }
        if (x > 0) x = 0;
        if (-x + func_ov002_02201cb0(self) > 0xff) {
            x = func_ov002_02201cb0(self) - 0xff;
        }
        func_ov002_022021f4(self, x, self->unk_0c - 0xb);
        self->unk_18 = self->unk_18 + 1;
    } else {
        func_0200212c(self->unk_1a);
        func_ov002_02202018(self, 0);
    }
}

namespace Unk_ov002_02201ea4_Ns {
s32 func_ov002_02202018(Self *, u32);
}

void func_ov002_02201ea4(Self *self) {
    if (self->unk_18 == 0) {
        func_ov002_02201f18(self);
        func_020020b8(self->unk_1a);
    }
    s32 d = data_ov002_02204544[self->unk_18];
    s32 x;
    if (self->unk_19 != 0) {
        x = self->unk_08 - d;
    } else {
        x = self->unk_08 + d;
    }
    if (x > 0) x = 0;
    if (-x + func_ov002_02201cb0(self) > 0xff) {
        x = func_ov002_02201cb0(self) - 0xff;
    }
    func_ov002_022021f4(self, x, self->unk_0c - d);
    self->unk_18 = self->unk_18 + 1;
    if (self->unk_18 >= 3) {
        Unk_ov002_02201ea4_Ns::func_ov002_02202018(self, 3);
    }
}

void func_ov002_02201f18(Self *self) {
    func_02002398(self->unk_1a, self->unk_10);
    func_0200226c(self->unk_1a, 0, 0, 0);
    u32 heap = data_021f482c;
    u8 *buf = func_020641ec(self->unk_24, heap, -4, 0);
    u32 n = self->unk_1c;
    if (n != 5) {
        u16 v = *(u16 *)(buf + 0x22);
        u16 *src = (u16 *)(buf + 0x280);
        u16 *dst = (u16 *)(buf + (n << 7));
        dst[0] = src[0];
        dst[1] = src[1];
        dst[0xf] = src[0xf];
        dst[0x10] = src[0x10];
        u8 *t = buf + (((self->unk_1c << 1) + 1) << 6);
        u8 *q = buf + 0x2c0;
        func_02115e48(q, t, 0x40);
        n = self->unk_1c;
        volatile u16 tmp[1];
        tmp[0] = v;
        func_02115e30(tmp[0], buf + (((n << 1) + 2) << 6), (5 - n) << 7);
    }
    if (self->unk_1b != 0xd) {
        u8 *s;
        u8 *d;
        s32 i;
        s32 k;
        d = buf + (self->unk_1b + 1) * 2;
        s = buf + 0x1c;
        k = self->unk_1c * 2 + 2;
        func_02115e48(s, d, 0x1e);
        d += 0x42;
        s += 0x42;
        for (i = 1; i < k - 1; i++) {
            func_02115e48(s, d, 0x1e);
            d += 0x40;
            s += 0x40;
        }
        func_02115e48(s - 2, d - 2, 0x1e);
    }
    func_020024f0(buf, self->unk_1a, 0x800, 0);
    func_020e85fc(heap, buf);
}

void func_ov002_02202018(Self *self, u32 x) {
    if (func_ov002_022013d4(self, 2) && x == 1) {
        x = 2;
        func_ov002_022013c4(self, x);
    } else if (func_ov002_022013d4(self, 4) && x == 4) {
        x = 5;
        func_ov002_022013c4(self, 4);
    }
    self->unk_16 = x;
    self->unk_18 = 0;
}

void func_ov002_02202064(Self *self, s32 x) {
    self->unk_17 = 2;
    if (x != 0) {
        func_ov002_022013cc(self, 4);
    }
    if (func_ov002_022013d4(self, 0x10)) {
        func_ov002_022013c4(self, 0x10);
    } else {
        func_0200402c(0x14);
    }
}

void func_ov002_02202098(Self *self, s32 x) {
    self->unk_17 = 1;
    func_0200212c(self->unk_1a);
    if (x != 0) {
        func_ov002_022013cc(self, 2);
    }
    func_0200402c(0x13);
    func_ov002_022013c4(self, 0x10);
}

void func_ov002_022020cc(Self *self, Unk_ov002_022018e4_Arg a, s32 x) {
    func_ov002_02201534(self, &a);
    func_ov002_022022e0(self, 0, -12);
    func_ov002_02202098(self, x);
}

void func_ov002_022020fc(Self *self) {
    u32 h = data_021f482c;
    func_020026c4(data_ov002_0220457c, h, self->unk_1a, 0xe, 0xe, 0xe);
    func_0200261c(data_ov002_02204590, h, self->unk_1a, 0x26e, 0x26e, 0x27d);
}

void func_ov002_02202144(Self *self) {
    u32 h = data_021f482c;
    func_020026c4(data_ov002_022045a4, h, self->unk_1a, 0, 3, 3);
    func_0200261c(data_ov002_022045c0, h, self->unk_1a, 0x242, 0x242, 0x2d7);
}

void func_ov002_02202190(Self *self, s32 x, s32 y) {
    s32 a = func_ov002_02201cb0(self);
    s32 b = func_ov002_02201ca4(self);
    if (x < 0) x = 0;
    if (y < 10) y = 10;
    if (x + a > 0xff) x = 0xff - a;
    if (y + b > 0xb6) y = 0xb6 - b;
    func_ov002_022021d8(self, x, y);
}

void func_ov002_022021d8(Self *self, s32 x, s32 y) {
    func_ov002_022021f4(self, x, y);
    self->unk_08 = -x;
    self->unk_0c = -y;
}

void func_ov002_022021f4(Self *self, s32 x, s32 y) {
    func_020021fc(self->unk_1a, x, y);
}

}

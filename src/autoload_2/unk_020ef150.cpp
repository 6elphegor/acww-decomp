// mwcc-flags: -nothumb -O4,p
// G006a: autoload_2 0x020ef150-0x020f0dec (45 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// The sound/BGM manager of the game (object data_021f5b80, "SndMgr" here): volume ramps, sound-id dispatch,
// BGM change/fade handling. PARTIAL unit: only extern "C" functions under their symbols.txt names, no data,
// no vtable (the class SndObj only DECLARES its virtuals), all data and callees extern.
#include "types.h"

struct Ramp {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class SndObj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28(u32 a, u32 b);

    /* 0x04 */ s8 unk_04;
};

struct SndHandle {
    /* 0x00 */ u8 unk_00[0x38];
    /* 0x38 */ u16 unk_38;
    /* 0x3a */ u16 unk_3a;
};

struct SndMgr {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Ramp unk_04;
    /* 0x10 */ Ramp unk_10;
    /* 0x1c */ Ramp unk_1c;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ SndObj *unk_2c;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ SndHandle *unk_34;
    /* 0x38 */ SndHandle *unk_38;
    /* 0x3c */ SndHandle *unk_3c;
    /* 0x40 */ SndHandle *unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ SndHandle *unk_48;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x4e */ u8 unk_4e[6];
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62[2];
    /* 0x64 */ u16 unk_64;
    /* 0x66 */ u16 unk_66;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s16 unk_6c;
    /* 0x6e */ u16 unk_6e;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
    /* 0x72 */ u8 unk_72;
    /* 0x73 */ u8 unk_73;
    /* 0x74 */ u8 unk_74;
    /* 0x75 */ u8 unk_75;
};

struct SndEnt {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
};

extern "C" {
extern u16 data_021f5b70;
extern u8 data_021f5b5c;
extern u32 data_021f5b7c;
extern u16 data_0213b200;
extern SndEnt data_0213b204[];

s32 func_01ffc5a4(s32 a, s32 b); // FX_Div
void func_020edad0(u16 a, u16 b, void *out);
void func_020eda30(void *p, u32 a);
void func_020eda80(void *p, u32 a, s32 b, s32 c, u32 d, u32 e);
void func_020edb00(u16 a, u16 b);
void func_0210a0e8(void *p, u32 a, u32 b);
void func_0210a118(void *p, u32 a, u32 b);
void func_0210a148(void *p, u32 a, u32 b);
void func_0210a26c(void *p, u32 a);
void func_0210a460(u32 a, u32 b);
void func_0210a378(void *p);
s32 func_0210d010(void *p, u32 a);
u32 func_0210e648(void *p);
void *func_020f4500(void);
void func_020f45b8(void *p, u32 a);

u16 func_020ef6c8(SndMgr *self, u16 id);
u8 func_020ef7a0(SndMgr *self, u8 v);
void func_020effd4(SndMgr *self);
s16 func_020ef7b0(Ramp *r);
void func_020ef7f8(Ramp *r, s16 target, u32 frames);
void func_020ef83c(Ramp *r, s32 v);
void func_020efc0c(SndMgr *self, s32 v);
void func_020efc84(SndMgr *self, s32 a, s32 b);
void func_020efd80(SndMgr *self, u32 flag);
void func_020f0988(SndMgr *self, s32 a, u32 b);
void func_0210a214(void *p, s32 v, u32 w);
void func_0210e6b8(void *p, s32 v, u32 w);
void func_0210e704(void *p, s32 v);
void func_0210e730(void *p, u32 a, u32 b);
s32 func_0210e5fc(void *p);
void func_0210cc4c(void *a, u32 b);
u32 func_020edc88(void);
void func_0210a2a0(s32 a, s32 b, u32 c);
void func_020f00d0(SndMgr *self);
void func_020f00e0(SndMgr *self, u32 a, u32 b);

void func_020f0858(SndMgr *self, s32 a, u8 b, s32 c);
}

static inline BOOL isSet(void *p) {
    return p != NULL;
}

extern "C" void func_020f0a68(SndMgr *self, s32 id) {
    if (self->unk_4d != 0) {
        return;
    }
    switch (id) {
        case 3:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 21:
        case 25:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 0x85f:
        case 0x865:
        case 0x866:
        case 0x867:
        case 0x868:
        case 0x869:
        case 0x86a:
        case 0x86b:
        case 0x86c:
        case 0x86d:
        case 0x86e:
        case 0x87f:
        case 0x880:
        case 0x881:
        case 0x882:
            func_020edad0(id % 1000, id / 1000, &self->unk_38);
            func_020efd80(self, 0);
            break;
        case 0x861:
            func_020edad0(id % 1000, id / 1000, &self->unk_40);
            func_020efd80(self, 0);
            break;
        case 1:
        case 2:
            self->unk_72 = 15;
            func_020edb00(id % 1000, id / 1000);
            break;
        default:
            func_020edb00(id % 1000, id / 1000);
            break;
    }
}

extern "C" void func_020f09d8(SndMgr *self, s32 a) {
    func_020edad0(a % 1000, a / 1000, &self->unk_38);
    if (a == 0x862) {
        func_0210a26c(&self->unk_38, 0);
    }
    func_020efd80(self, 1);
}

extern "C" void func_020f0988(SndMgr *self, s32 a, u32 b) {
    func_0210a2a0(a / 1000, a % 1000, b);
}

extern "C" void func_020f0980(SndMgr *self, u32 v) {
    self->unk_44 = v;
}

extern "C" void func_020f0858(SndMgr *self, s32 a, u8 x, s32 y) {
    switch (self->unk_44) {
        case 3: {
            y -= 400;
            double k = 1.38;
            x = (u8)((double)x * k);
            if (x > 127) {
                x = 127;
            }
            break;
        }
        case 4: {
            y += 600;
            double k = 1.23;
            x = (u8)((double)x * k);
            if (x > 127) {
                x = 127;
            }
            break;
        }
    }
    func_020edad0(a % 1000, a / 1000, &self->unk_48);
    if (isSet(self->unk_48)) {
        func_0210a26c(&self->unk_48, x);
        func_0210a118(&self->unk_48, 15, y);
    }
}

extern "C" void func_020f0838(SndMgr *self, void *a) {
    func_0210cc4c(a, func_020edc88());
}

extern "C" u16 func_020f07f0(SndMgr *self, u32 n) {
    self->unk_54 = self->unk_58 * self->unk_54 + self->unk_5c;
    if (n == 0) {
        return self->unk_54 >> 16;
    }
    return ((self->unk_54 >> 16) * n) >> 16;
}

extern "C" void func_020f0720(SndMgr *self, u32 k) {
    switch (k) {
        case 0:
        case 1:
            func_0210e730(&self->unk_34, k, 0);
            if (k != 0) {
                return;
            }
            self->unk_68 = func_0210e5fc(&self->unk_34);
            return;
    }
    self->unk_2c->vfunc_28(0, k);
    if (k >= 176 && k <= 245) {
        func_020f00e0(self, k, 0);
        return;
    }
    func_020f00e0(self, k, 127);
    if (k < 22) {
        return;
    }
    if (k <= 45) {
        self->unk_75 = 1;
    }
}

extern "C" void func_020f06b4(SndMgr *self, s32 v) {
    SndHandle *h = self->unk_34;
    if (isSet(h)) {
        if (self->unk_2c->unk_04 == 51) {
            v += 1;
        }
        func_0210e704(&self->unk_34, v);
        return;
    }
    func_020f00d0(self);
    self->unk_2c->vfunc_28(1, 9999);
}

extern "C" void func_020f0658(SndMgr *self, s32 v, u32 w) {
    if (v > 127) {
        v = 127;
    } else if (v < 0) {
        v = 0;
    }
    SndHandle *h = self->unk_34;
    if (isSet(h)) {
        func_0210e6b8(&self->unk_34, v, w);
        return;
    }
    func_0210a214(&self->unk_3c, v, w);
}

extern "C" void func_020f0508(SndMgr *self, s32 k) {
    func_020ef83c(&self->unk_04, 127);
    switch (k) {
        case 1:
            self->unk_64 = 0x84;
            break;
        case 2:
            self->unk_64 = 24;
            break;
        case 3:
            self->unk_64 = 0x1800;
            break;
        case 4:
            self->unk_64 = 0x700;
            break;
        case 5:
            self->unk_64 = 99;
            break;
        case 6:
            self->unk_64 = 0xff18;
            break;
        case 11:
            self->unk_64 = 0xff9c;
            break;
        case 12:
            self->unk_64 = 0xff84;
            break;
        case 13:
            self->unk_64 = 0xe79c;
            break;
        case 14:
            self->unk_64 = 0xf89c;
            break;
        case 15:
            self->unk_64 = 0xf8ff;
            break;
        default:
            return;
    }
    if (k >= 6) {
        func_0210a148(&self->unk_3c, self->unk_64, 0);
        return;
    }
    func_020ef7f8(&self->unk_04, 0, 15);
}

extern "C" void func_020f0474(SndMgr *self, u32 k) {
    func_020ef83c(&self->unk_04, 0);
    switch (k) {
        case 1:
            self->unk_64 = 0x84;
            break;
        case 2:
            self->unk_64 = 24;
            break;
        case 3:
            self->unk_64 = 0x1800;
            break;
        case 4:
            self->unk_64 = 0x700;
            break;
        case 5:
            self->unk_64 = 99;
            break;
    }
    func_020ef7f8(&self->unk_04, 127, 15);
}

extern "C" void func_020f0110(SndMgr *self, u32 st) {
    if (self->unk_73 != st) {
        self->unk_75 = 1;
        switch (self->unk_73) {
            case 0:
                self->unk_74 = st;
                if (self->unk_6c > 0 || self->unk_04.unk_02 != 0) {
                    self->unk_75 = 0;
                }
                break;
            case 11:
                switch (st) {
                    case 12:
                        self->unk_74 = 1;
                        break;
                    case 13:
                        self->unk_74 = 3;
                        break;
                }
                break;
            case 12:
                self->unk_74 = 2;
                break;
            case 13:
                self->unk_74 = 4;
                break;
        }
        self->unk_73 = st;
    }
    if (self->unk_75 == 0) {
        return;
    }
    SndObj *o = self->unk_2c;
    if (o == NULL) {
        return;
    }
    s32 t = o->unk_04;
    if (t != 1 && t != 3 && t != 60) {
        return;
    }
    SndHandle *h = self->unk_3c;
    if (!isSet(h)) {
        return;
    }
    u16 idx = h->unk_38 - 22;
    if (idx > 23) {
        return;
    }
    self->unk_6c = -1;
    func_020ef7f8(&self->unk_04, 0, 0);
    u32 mode;
    SndEnt *e;
    u32 mask;
    u32 flag;
    u32 a;
    a = data_0213b204[idx].a;
    e = &data_0213b204[idx];
    if (a == 0 && e->b == 0 && e->c == 0 && e->d == 0) {
        return;
    }
    mask = 255;
    flag = 0;
    mode = self->unk_74;
    switch (mode) {
        case 1:
            mask = (u16)(a | e->b);
            flag = 1;
            self->unk_6c = 200;
            self->unk_64 = e->c;
            self->unk_6e = e->b;
            self->unk_74 = 12;
            break;
        case 2:
            mask = (u16)(a | e->c);
            flag = 1;
            self->unk_6c = 200;
            self->unk_64 = e->b;
            self->unk_6e = e->c;
            self->unk_74 = 11;
            break;
        case 3:
            mask = (u16)(a | e->b);
            flag = 1;
            self->unk_6c = 200;
            self->unk_64 = e->d;
            self->unk_6e = e->b;
            self->unk_74 = 13;
            break;
        case 4:
            mask = (u16)(a | e->d);
            flag = 1;
            self->unk_6c = 200;
            self->unk_64 = e->b;
            self->unk_6e = e->d;
            self->unk_74 = 11;
            break;
        case 11:
            mask = (u16)(a | e->b);
            flag = 1;
            self->unk_64 = mask;
            break;
        case 12:
            mask = (u16)(a | e->c);
            flag = 1;
            self->unk_64 = mask;
            break;
        case 13:
            mask = (u16)(a | e->d);
            flag = 1;
            self->unk_64 = mask;
            break;
    }
    if (flag == 0) {
        return;
    }
    func_0210a148(&self->unk_3c, (u16)~mask, 0);
    self->unk_75 = 0;
}

extern "C" void func_020f00e0(SndMgr *self, u32 a, u32 b) {
    func_0210d010(&self->unk_3c, a);
    func_0210a26c(&self->unk_3c, b);
}

extern "C" void func_020f00d0(SndMgr *self) {
    func_0210a378(&self->unk_3c);
}

extern "C" void func_020effd4(SndMgr *self) {
    SndObj *o = self->unk_2c;
    if (o == NULL) {
        return;
    }
    s32 t = o->unk_04;
    if (t >= 40 && t < 50) {
        if (self->unk_04.unk_02 != 0) {
            func_0210a148(&self->unk_3c, self->unk_64, func_020ef7b0(&self->unk_04));
        }
    }
    if (t != 1 && t != 3) {
        return;
    }
    s16 c = self->unk_6c;
    if (c > 0) {
        self->unk_6c = c - 1;
    } else if (c == 0) {
        func_020ef83c(&self->unk_04, 0);
        func_020ef7f8(&self->unk_04, 127, 600);
        self->unk_6c = -1;
    }
    if (self->unk_04.unk_02 == 0) {
        return;
    }
    s32 v = func_020ef7b0(&self->unk_04);
    func_0210a148(&self->unk_3c, self->unk_64, v);
    func_0210a148(&self->unk_3c, self->unk_6e, 127 - v);
}

extern "C" void func_020efe70(SndMgr *self) {
    SndObj *o = self->unk_2c;
    if (o == NULL) {
        return;
    }
    if (o->unk_04 == 50) {
        u32 r = func_0210e648(&self->unk_34);
        s32 vol = ((u32)(self->unk_68 - r) * 20) / 1000;
        if (r != 0) {
            if (vol > 127) {
                func_020efc84(self, 0, 0);
            } else if (vol == 127) {
                func_020ef83c(&self->unk_04, 0);
                func_020ef7f8(&self->unk_04, 127, 160);
            }
        }
        if (self->unk_04.unk_02 != 0) {
            s32 v = func_020ef7b0(&self->unk_04);
            func_020efc84(self, v, v);
        }
    }
    if (self->unk_2c->unk_04 == 51) {
        if (self->unk_04.unk_02 != 0) {
            s32 v = func_020ef7b0(&self->unk_04);
            func_020efc84(self, v, v);
        }
    }
    if (self->unk_10.unk_02 != 0) {
        s32 a = func_020ef7b0(&self->unk_10);
        s32 b = func_020ef7b0(&self->unk_1c);
        func_020efc84(self, a, b);
        return;
    }
    if (self->unk_1c.unk_02 != 0) {
        func_020efc0c(self, func_020ef7b0(&self->unk_1c));
    }
}

extern "C" void func_020efd80(SndMgr *self, u32 flag) {
    s32 v = self->unk_70 - 128;
    if (v < -128) {
        v = -128;
    } else if (v > 127) {
        v = 127;
    }
    if (flag == 0) {
        func_0210a0e8(&self->unk_38, 255, v);
        func_0210a0e8(&self->unk_40, 255, v);
        return;
    }
    SndHandle *h = self->unk_38;
    if (!isSet(h)) {
        return;
    }
    switch (h->unk_3a) {
        case 11:
        case 146:
        case 147:
        case 179:
            func_0210a0e8(&self->unk_38, 255, v);
            break;
    }
}

extern "C" void func_020efc84(SndMgr *self, s32 a, s32 b) {
    if (a > 127) {
        a = 127;
    } else if (a < 0) {
        a = 0;
    }
    if (b > 127) {
        b = 127;
    } else if (b < 0) {
        b = 0;
    }
    s32 h = a >> 1;
    func_0210a460(4, a);
    func_0210a460(7, a);
    func_0210a460(13, a);
    func_0210a460(9, a);
    func_0210a460(8, b);
    func_0210a460(11, b);
    if (self->unk_61 != 0) {
        return;
    }
    func_0210a460(5, b);
    func_0210a460(6, b);
    func_0210a460(16, b);
    func_0210a460(17, b);
    func_0210a460(18, h);
    func_0210a460(19, h);
    func_0210a460(20, b);
}

extern "C" void func_020efc0c(SndMgr *self, s32 v) {
    if (v > 127) {
        v = 127;
    } else if (v < 0) {
        v = 0;
    }
    func_0210a460(5, v);
    func_0210a460(6, v);
    func_0210a460(16, v);
    func_0210a460(17, v);
    func_0210a460(18, v);
    func_0210a460(19, v);
    func_0210a460(20, v);
}

extern "C" void func_020efbbc(SndMgr *self) {
    self->unk_60 = 1;
    func_020ef83c(&self->unk_10, 127);
    func_020ef83c(&self->unk_1c, 127);
    func_020ef7f8(&self->unk_10, 70, 15);
    func_020ef7f8(&self->unk_1c, 40, 15);
}

extern "C" void func_020efb6c(SndMgr *self) {
    self->unk_60 = 0;
    func_020ef83c(&self->unk_10, 70);
    func_020ef83c(&self->unk_1c, 40);
    func_020ef7f8(&self->unk_10, 127, 5);
    func_020ef7f8(&self->unk_1c, 127, 5);
}

extern "C" void func_020efb28(SndMgr *self) {
    self->unk_61 = 1;
    if (self->unk_60 != 0) {
        return;
    }
    func_020ef83c(&self->unk_1c, 127);
    func_020ef7f8(&self->unk_1c, 40, 15);
}

extern "C" void func_020efae4(SndMgr *self) {
    self->unk_61 = 0;
    if (self->unk_60 != 0) {
        return;
    }
    func_020ef83c(&self->unk_1c, 40);
    func_020ef7f8(&self->unk_1c, 127, 15);
}

extern "C" void func_020efab8(SndMgr *self) {
    func_020ef83c(&self->unk_04, 0);
    func_020ef7f8(&self->unk_04, 127, 60);
}

extern "C" void *func_020efaa4(SndMgr *self) {
    if (self->unk_00 != 0) {
        return (void *)(self->unk_00 + 20);
    }
    return NULL;
}

extern "C" void func_020efa64(SndMgr *self, u32 a) {
    u8 c = self->unk_72;
    if (c != 0) {
        self->unk_72 = c - 1;
        return;
    }
    if (c != 0) {
        return;
    }
    func_020f45b8(func_020f4500(), a);
}

extern "C" void func_020efa30(SndMgr *self, u8 v) {
    if (self->unk_70 == v) {
        return;
    }
    self->unk_70 = v;
    func_020efd80(self, 1);
}

extern "C" void func_020efa1c(SndMgr *self, u8 v) {
    self->unk_70 = v;
    func_020efd80(self, 1);
}

extern "C" void func_020ef9fc(SndMgr *self, u32 v) {
    switch (v) {
        case 1:
            self->unk_71 = 1;
            break;
        default:
            self->unk_71 = 0;
            break;
    }
}

extern "C" void func_020ef994(SndMgr *self, u32 id) {
    u16 t = id - 1;
    if (t > 36) {
        func_020edb00(44, 0);
        return;
    }
    u8 m = self->unk_71;
    if (m == 0) {
    } else if (m == 1) {
        t = t + 36;
    }
    func_020edb00(t, 3);
}

extern "C" void func_020ef93c(SndMgr *self, s32 v) {
    s32 a;
    s32 b;
    if (v < 0) {
        a = 16;
        b = 80;
    } else {
        a = v * 2 + 16;
        b = v + 80;
    }
    if (a > 127) {
        a = 127;
    }
    if (b > 127) {
        b = 127;
    }
    func_0210a26c(&self->unk_38, a);
    func_0210a26c(&self->unk_40, b);
}

extern "C" void func_020ef908(SndMgr *self, u32 a) {
    func_020eda80(&self->unk_40, 10, -1, -1, 0, a);
}

extern "C" void func_020ef8d4(SndMgr *self, u32 a) {
    func_020eda80(&self->unk_40, 10, -1, -1, 0, a);
}

extern "C" void func_020ef8c0(SndMgr *self) {
    func_020eda30(&self->unk_40, 0);
}

extern "C" void func_020ef8a8(SndMgr *self) {
    func_020edad0(45, 0, &self->unk_38);
}

extern "C" void func_020ef894(SndMgr *self) {
    func_020f0988(self, 45, 1);
}

extern "C" void func_020ef850(SndMgr *self, u16 a, u32 b) {
    func_020edad0(a, 0, &self->unk_38);
    func_0210a0e8(&self->unk_38, data_0213b200, b);
}

extern "C" void func_020ef83c(Ramp *r, s32 v) {
    r->unk_04 = v << 12;
    r->unk_02 = 0;
}

extern "C" void func_020ef7f8(Ramp *r, s16 target, u32 frames) {
    r->unk_00 = target;
    r->unk_02 = frames;
    s32 t = r->unk_00 << 12;
    s32 d = t - r->unk_04;
    if (frames == 0) {
        r->unk_04 = t;
        return;
    }
    r->unk_08 = func_01ffc5a4(d, frames << 12);
}

extern "C" s16 func_020ef7b0(Ramp *r) {
    if (r->unk_02 != 0) {
        r->unk_02--;
        if (r->unk_02 != 0) {
            r->unk_04 += r->unk_08;
        } else {
            r->unk_04 = r->unk_00 << 12;
        }
    }
    return (s16)(r->unk_04 >> 12);
}

extern "C" u8 func_020ef7a0(SndMgr *self, u8 v) {
    if (v > 127) {
        v = 127;
    }
    return v;
}

extern "C" void func_020ef728(SndMgr *self) {
    if (data_021f5b70 != 0) {
        u16 a = func_020ef6c8(self, data_021f5b70);
        u8 b = func_020ef7a0(self, data_021f5b5c);
        func_020f0858(self, (u16)(a + 1), b, data_021f5b7c);
    }
    data_021f5b70 = 0;
}

extern "C" u16 func_020ef6c8(SndMgr *self, u16 id) {
    switch (self->unk_44) {
        case 0:
        case 4:
            id = id + 206;
            break;
        case 1:
        case 3:
            id = id + 301;
            break;
        case 2:
            id = id + 396;
            break;
    }
    return id;
}

extern "C" s32 func_020ef150(s32 a, s32 b) {
    s32 r = 95;
    switch (a) {
        case 42:
            switch (b) {
                case 1: r = 59; break;
                case 2: r = 60; break;
                case 3: r = 61; break;
                case 4: r = 62; break;
                case 5: r = 63; break;
                case 6: r = 64; break;
                case 7: r = 65; break;
                case 8: r = 66; break;
                case 9: r = 67; break;
                case 10: r = 68; break;
                case 11: r = 0; break;
                case 12: r = 3; break;
                case 13: r = 7; break;
                case 14: r = 8; break;
                case 15: r = 12; break;
                case 16: r = 13; break;
                case 17: r = 14; break;
                case 18: r = 17; break;
                case 19: r = 22; break;
                case 20: r = 25; break;
                case 21: r = 27; break;
                case 22: r = 29; break;
                case 23: r = 30; break;
                case 24: r = 33; break;
                case 25: r = 42; break;
                case 26: r = 44; break;
                case 27: r = 28; break;
                case 28: r = 45; break;
                case 29: r = 46; break;
                case 30: r = 51; break;
                case 31: r = 54; break;
                case 32: r = 55; break;
                case 33: r = 56; break;
                case 34: r = 28; break;
                case 35: r = 57; break;
                case 36: r = 58; break;
                case 0:
                case 42:
                    r = 95;
                    break;
            }
            break;
        case 1: r = 59; break;
        case 2: r = 60; break;
        case 3: r = 61; break;
        case 4: r = 62; break;
        case 5: r = 63; break;
        case 6: r = 64; break;
        case 7: r = 65; break;
        case 8: r = 66; break;
        case 9: r = 67; break;
        case 10: r = 68; break;
        case 11:
            r = 0;
            switch (b) {
                case 24:
                    r = 1;
                    break;
                case 31:
                    r = 2;
                    break;
            }
            break;
        case 12:
            r = 3;
            switch (b) {
                case 15:
                    r = 4;
                    break;
                case 19:
                    r = 5;
                    break;
                case 35:
                    r = 6;
                    break;
            }
            break;
        case 13: r = 7; break;
        case 14:
            r = 8;
            if (b == 25) {
                r = 9;
            }
            break;
        case 15:
            r = 10;
            switch (b) {
                case 19:
                    r = 11;
                    break;
                case 28:
                    r = 12;
                    break;
            }
            break;
        case 16: r = 13; break;
        case 17:
            r = 14;
            if (b == 25) {
                r = 15;
            }
            break;
        case 18:
            r = 16;
            switch (b) {
                case 15:
                    r = 17;
                    break;
                case 19:
                    r = 18;
                    break;
                case 25:
                    r = 19;
                    break;
            }
            break;
        case 19:
            r = 20;
            switch (b) {
                case 24: r = 21; break;
                case 28: r = 22; break;
                case 29: r = 23; break;
                case 30: r = 24; break;
                case 42: r = 0; break;
            }
            break;
        case 20:
            r = 25;
            if (b == 31) {
                r = 26;
            }
            break;
        case 21:
            r = 27;
            if (b == 19) {
                r = 28;
            }
            break;
        case 22: r = 29; break;
        case 23:
            r = 30;
            switch (b) {
                case 15:
                    r = 31;
                    break;
                case 35:
                    r = 32;
                    break;
            }
            break;
        case 24: r = 33; break;
        case 25:
            r = 37;
            switch (b) {
                case 16: r = 38; break;
                case 18: r = 39; break;
                case 21: r = 40; break;
                case 24: r = 41; break;
                case 25: r = 42; break;
                case 28: r = 43; break;
            }
            break;
        case 26: r = 44; break;
        case 28: r = 45; break;
        case 29:
            r = 46;
            switch (b) {
                case 19:
                    r = 47;
                    break;
                case 25:
                    r = 48;
                    break;
                case 31:
                    r = 49;
                    break;
            }
            break;
        case 30:
            r = 50;
            switch (b) {
                case 18:
                    r = 51;
                    break;
                case 25:
                    r = 52;
                    break;
            }
            break;
        case 31:
            r = 53;
            if (b == 28) {
                r = 54;
            }
            break;
        case 32: r = 55; break;
        case 33: r = 56; break;
        case 34: r = 28; break;
        case 35: r = 57; break;
        case 36: r = 58; break;
    }
    return r;
}


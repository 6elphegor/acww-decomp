#include "types.h"

struct Unk_ov003_0221a4a0_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0221a4a0_V2 {
    s32 a, b;
};

struct Unk_ov003_0221a4a0_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

struct Unk_ov003_0221a4a0 {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u8 pad_28[8];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s16 unk_48;
    /* 0x4a */ u16 pad_4a;
    /* 0x4c */ s16 unk_4c;
    /* 0x4e */ u16 unk_4e;
    /* 0x50 */ s16 unk_50;
    /* 0x52 */ s16 unk_52;
    /* 0x54 */ Unk_ov003_0221a4a0_V3 unk_54;
    /* 0x60 */ u8 unk_60[0x40];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 pad_a1[3];
};

extern "C" {
extern Unk_ov003_0221a4a0_V3 data_ov003_02235948;
extern u8 data_020e12cc[];
extern s16 data_02135f44[];
extern s32 data_ov003_0222f5c4[];
extern s32 data_ov003_0222f608[];

void func_020339bc(Unk_ov003_0221a4a0_Buf *b, void *pos, s32 a, s32 c);
void func_02033988(Unk_ov003_0221a4a0_Buf *b);
void func_01ffca8c(void *a, void *b, void *out);
void func_01ffd070(Unk_ov003_0221a4a0_V3 *out, void *m, Unk_ov003_0221a4a0_V3 *v);
s32 func_0208fc88(s32 id, void *v, s32 c, void *cb);
void func_0208fb00(s32 a, void *fn);
void func_020b8e20(s32 a);
void func_020b8e38(void);
void func_ov003_022122fc(void *p);
void func_ov003_0221b228(Unk_ov003_0221a4a0 *p);
s32 func_ov003_0221b46c(Unk_ov003_0221a4a0 *p);
s32 func_ov003_0221b214(Unk_ov003_0221a4a0 *p);
u32 func_ov003_022195b8(void *p);
s32 func_0204ed8c(void *out, s32 x, s32 z);
s32 func_02133150(s32 a, s32 b);
void *func_0209750c(void);
void func_0209801c(void *p, s32 a);
void func_ov003_0221caf0(s32 a, s32 b, u32 c, s32 d);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
void func_ov003_02226428(void *p);
s32 func_ov003_02219ae0(u32 a, u32 b, void *p);
void func_02043b9c(void);
void func_ov003_0221a664(void *p);
}

extern "C" void func_ov003_0221a4a0(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_Buf b;
    Unk_ov003_0221a4a0_V3 v;
    func_020339bc(&b, &self->unk_18, 0, 0);
    if (b.unk_30 != 0) {
        if (self->unk_4c == 0) {
            func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
            s32 t = b.unk_3c;
            if (self->unk_1c < t) {
                self->unk_34 = 0;
                data_ov003_02235948.x = self->unk_18;
                data_ov003_02235948.y = self->unk_1c;
                data_ov003_02235948.z = self->unk_20;
                data_ov003_02235948.y = t;
                func_0208fc88(0x45, &data_ov003_02235948, 0, data_020e12cc);
                func_0208fc88(0x4a, &data_ov003_02235948, 0, data_020e12cc);
                func_0208fb00(2, (void *)func_ov003_0221a664);
                self->unk_4c = 1;
                self->unk_50 = 12;
                self->unk_1c = self->unk_1c - 0x2000;
                func_020b8e20(1);
            }
        } else {
            self->unk_50 = self->unk_50 - 1;
            if (self->unk_50 < 0) {
                func_020b8e38();
                func_ov003_022122fc(&self->unk_18);
                self->unk_a0 = 0;
                func_ov003_0221b228(self);
            }
        }
    } else {
        if (self->unk_4c == 0) {
            func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
            if (self->unk_1c < 0) {
                self->unk_1c = 0;
                self->unk_50 = func_ov003_022195b8(&self->unk_10);
                func_0204ed8c(&v, self->unk_10, self->unk_14);
                s32 r5 = func_02133150(v.z - self->unk_20, 8);
                self->unk_30 = func_02133150(v.x - self->unk_18, 8);
                self->unk_34 = 0x1000;
                self->unk_38 = r5;
                self->unk_4c = 1;
                func_020b8e20(0);
            }
        } else {
            self->unk_34 = self->unk_34 - 0x400;
            func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
            if (self->unk_1c < 0) {
                self->unk_1c = 0;
                self->unk_30 = 0;
                self->unk_34 = 0;
                self->unk_38 = 0;
                func_020b8e38();
                if (self->unk_50 == 0) {
                    if (self->unk_08 == 0x137b) {
                        func_0209801c(func_0209750c(), 0x30);
                    }
                    func_ov003_0221caf0(self->unk_10, self->unk_14, self->unk_08, 0);
                }
                self->unk_a0 = 0;
                func_ov003_0221b228(self);
            }
        }
    }
    func_02033988(&b);
}

extern "C" void func_ov003_0221a648(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V3 *p)
{
    self->unk_18 = p->x;
    self->unk_1c = p->y;
    self->unk_20 = p->z;
    self->unk_30 = 0;
    self->unk_34 = -0xc00;
    self->unk_38 = 0;
}

struct Unk_ov003_0221a664_Obj {
    s32 pad_00;
    Unk_ov003_0221a4a0_V3 pos;
};

extern "C" void func_ov003_0221a664(void *p)
{
    Unk_ov003_0221a664_Obj *o = (Unk_ov003_0221a664_Obj *)p;
    Unk_ov003_0221a4a0_V3 *d = &o->pos;
    o->pos.x = data_ov003_02235948.x;
    d->y = data_ov003_02235948.y;
    d->z = data_ov003_02235948.z;
}

extern "C" void func_ov003_0221a67c(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_V3 v;
    Unk_ov003_0221a4a0_V3 out;
    self->unk_50 = self->unk_50 + 0x2000;
    s32 h = data_02135f44[((u16)self->unk_50 >> 4) * 2] >> 1;
    v.x = (h * data_02135f44[((u16)self->unk_48 >> 4) * 2]) >> 12;
    v.y = 0;
    v.z = (h * data_02135f44[((u16)self->unk_48 >> 4) * 2 + 1]) >> 12;
    func_01ffd070(&out, &self->unk_54, &v);
    self->unk_18 = out.x;
    self->unk_1c = out.y;
    self->unk_20 = out.z;
    if (self->unk_50 < 0) {
        func_ov003_0221b228(self);
    }
}

extern "C" void func_ov003_0221a704(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    func_ov003_0221caf0(p->a, p->b, 0xfff1, 0);
}

extern "C" void func_ov003_0221a72c(Unk_ov003_0221a4a0 *self)
{
    u32 r = (u16)self->unk_4e;
    if ((r >= 6 && r <= 10) || r >= 0x12) {
        self->unk_3c = self->unk_3c - 0x19a;
    }
    if (self->unk_3c <= 0) {
        self->unk_3c = 0;
        func_ov003_0221b228(self);
    }
    self->unk_44 = self->unk_3c;
}

extern "C" void func_ov003_0221a768(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    func_0204ed8c(&self->unk_18, p->a, p->b);
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    self->unk_30 = 0;
    self->unk_34 = 0;
    self->unk_38 = 0;
    func_ov003_0221b46c(self);
}

extern "C" void func_ov003_0221a798(Unk_ov003_0221a4a0 *self)
{
    volatile u16 tmp;
    self->unk_3c = self->unk_3c + 0x19a;
    if (self->unk_3c >= 0x1000) {
        self->unk_3c = 0x1000;
    }
    self->unk_44 = self->unk_3c;
    self->unk_34 = self->unk_34 - 0x400;
    func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
    if (self->unk_1c < 0) {
        self->unk_1c = 0;
        self->unk_30 = 0;
        self->unk_34 = 0;
        self->unk_38 = 0;
        if (self->unk_4c == 0) {
            BOOL r = FALSE;
            tmp = 0xfff1;
            tmp = self->unk_0a;
            u32 a = tmp;
            u32 c = tmp;
            if (c >= 0x1492 && a <= 0x14fd) {
                r = TRUE;
            }
            if (r) {
                func_02003e70(self->unk_60, 0x70, 0x7f, 0);
            }
        }
        self->unk_4c = 1;
        func_ov003_0221b228(self);
    }
}

extern "C" void func_ov003_0221a840(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, u32 w)
{
    Unk_ov003_0221a4a0_V3 v;
    volatile u16 tmp;
    func_0204ed8c(&v, p->a, p->b);
    s32 r6 = func_02133150(v.z - q->z, 8);
    self->unk_30 = func_02133150(v.x - q->x, 8);
    self->unk_34 = 0x1000;
    self->unk_38 = r6;
    self->unk_18 = q->x;
    self->unk_1c = q->y;
    self->unk_20 = q->z;
    s32 z = 0;
    self->unk_3c = z;
    self->unk_40 = 0x1000;
    self->unk_44 = z;
    self->unk_a0 = z;
    tmp = 0xfff1;
    tmp = w;
    u32 a = tmp;
    u32 c = tmp;
    if (c >= 0x1492 && a <= 0x14fd) {
        z = 1;
    }
    func_02003e70(self->unk_60, z ? 0x74 : 0x75, 0x7f, 0);
}

extern "C" void func_ov003_0221a8dc(Unk_ov003_0221a4a0 *self)
{
    self->unk_34 = self->unk_34 - 0x400;
    func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
    if (self->unk_1c < 0) {
        self->unk_1c = 0;
        self->unk_30 = 0;
        self->unk_34 = 0;
        self->unk_38 = 0;
        func_ov003_0221b228(self);
    }
}

extern "C" void func_ov003_0221a918(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, u32 ang)
{
    func_0204ed8c(&self->unk_18, p->a, p->b);
    s32 i = ((u16)ang >> 4) * 2;
    self->unk_30 = (data_02135f44[i] << 10) >> 12;
    self->unk_34 = 0x1000;
    self->unk_38 = (data_02135f44[i + 1] << 10) >> 12;
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    self->unk_a0 = 0;
    func_ov003_0221caf0(p->a, p->b, 0xfff1, 0);
}

extern "C" void func_ov003_0221a978(Unk_ov003_0221a4a0 *self)
{
    switch (self->unk_4c) {
    case 0:
        self->unk_34 = self->unk_34 - 0x400;
        func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
        if (self->unk_1c < 0) {
            s32 z = 0;
            self->unk_1c = z;
            self->unk_30 = z;
            self->unk_34 = 0x1000;
            self->unk_38 = z;
            self->unk_4c = 1;
        }
        break;
    case 1:
        self->unk_34 = self->unk_34 - 0x400;
        func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
        if (self->unk_1c < 0) {
            self->unk_1c = 0;
            self->unk_30 = 0;
            self->unk_34 = 0;
            self->unk_38 = 0;
            self->unk_4c = 2;
            self->unk_50 = 20;
        }
        break;
    case 2:
        self->unk_50 = self->unk_50 - 1;
        if (self->unk_50 < 0) {
            func_ov003_02226428(&self->unk_18);
            self->unk_50 = 30;
            self->unk_4c = 3;
        }
        break;
    case 3:
        self->unk_50 = self->unk_50 - 1;
        if (self->unk_50 < 0) {
            self->unk_4c = 4;
        }
        break;
    default:
        self->unk_52 = self->unk_52 - 1;
        if (self->unk_52 < 0) {
            func_ov003_0221b214(self);
        }
        break;
    }
}

extern "C" void func_ov003_0221aa6c(Unk_ov003_0221a4a0 *self, s32 a, Unk_ov003_0221a4a0_V3 *p)
{
    self->unk_30 = 0;
    self->unk_34 = 0x800;
    self->unk_38 = 0x300;
    self->unk_18 = p->x;
    self->unk_1c = p->y;
    self->unk_20 = p->z;
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    func_02003e70(self->unk_60, 0x7d6, 0x7f, 0);
    func_ov003_0221b46c(self);
    func_02043b9c();
}

static inline s32 Unk_ov003_0221aabc_Idx(s32 a) { return ((u16)a >> 4) * 2; }

extern "C" void func_ov003_0221aabc(Unk_ov003_0221a4a0 *self)
{
    func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
    self->unk_4e = self->unk_4e + 0x888;
    self->unk_24 = data_02135f44[((u16)(s16)self->unk_4e >> 4) * 2] >> 1;
    if (self->unk_1c < 0) {
        self->unk_1c = 0;
        self->unk_30 = 0;
        self->unk_34 = 0;
        self->unk_38 = 0;
        func_ov003_0221b228(self);
    }
}

extern "C" void func_ov003_0221ab14(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q)
{
    Unk_ov003_0221a4a0_V3 v;
    func_0204ed8c(&v, p->a, p->b);
    s32 r7 = func_02133150(v.z - q->z, 0x1e);
    s32 r6 = -func_02133150(q->y, 0x1e);
    self->unk_30 = func_02133150(v.x - q->x, 0x1e);
    self->unk_34 = r6;
    self->unk_38 = r7;
    self->unk_18 = q->x;
    self->unk_1c = q->y;
    self->unk_20 = q->z;
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    if (self->unk_48 != 0) {
        func_ov003_0221b46c(self);
    }
    func_02003e70(self->unk_60, 0x7eb, 0x7f, 0);
}

extern "C" void func_ov003_0221ab94(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_V3 v;
    volatile u16 tmp;
    self->unk_34 = self->unk_34 - 0x400;
    func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
    if (self->unk_1c < 0) {
        if (self->unk_4c == 0) {
            func_0204ed8c(&v, self->unk_10, self->unk_14);
            s32 r5 = func_02133150(v.z - self->unk_20, 8);
            self->unk_30 = func_02133150(v.x - self->unk_18, 8);
            self->unk_34 = 0x1000;
            self->unk_38 = r5;
            self->unk_4c = 1;
            tmp = 0xfff1;
            tmp = self->unk_08;
            s32 z = 0;
            u32 a = tmp;
            u32 c = tmp;
            if (c >= 0x1492 && a <= 0x14fd) {
                z = 1;
            }
            if (z) {
                func_02003e70(self->unk_60, 0x70, 0x7f, 0);
            }
        } else {
            self->unk_30 = 0;
            self->unk_34 = 0;
            self->unk_38 = 0;
            func_ov003_0221b228(self);
        }
        self->unk_1c = 0;
    }
}

extern "C" void func_ov003_0221ac54(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, s32 skip)
{
    volatile u16 tmp;
    s32 z = 0;
    self->unk_30 = z;
    self->unk_34 = 0x800;
    self->unk_38 = 0x300;
    self->unk_18 = q->x;
    self->unk_1c = q->y;
    self->unk_20 = q->z;
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    if (self->unk_48 != 0) {
        self->unk_a0 = z;
    }
    if (skip == 0) {
        tmp = 0xfff1;
        tmp = self->unk_08;
        BOOL r = FALSE;
        u32 a = tmp;
        u32 c = tmp;
        if (c >= 0x1492 && a <= 0x14fd) {
            r = TRUE;
        }
        func_02003e70(self->unk_60, r ? 0x74 : 0x7d6, 0x7f, 0);
    }
}

extern "C" void func_ov003_0221ace0(Unk_ov003_0221a4a0 *self)
{
    if ((u16)self->unk_4e >= 0x10) {
        self->unk_4e = 0x10;
        func_ov003_0221b228(self);
    }
    self->unk_3c = data_ov003_0222f5c4[(u16)self->unk_4e];
    self->unk_44 = self->unk_3c;
    self->unk_40 = data_ov003_0222f608[(u16)self->unk_4e];
}

extern "C" void func_ov003_0221ad28(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    struct Pad { s32 v[2]; Pad() {} ~Pad() {} } pad;
    volatile u16 tmp;
    func_0204ed8c(&self->unk_18, p->a, p->b);
    s32 z = 0;
    self->unk_3c = z;
    self->unk_40 = z;
    self->unk_44 = z;
    s32 id = 0x813;
    tmp = 0xfff1;
    tmp = self->unk_08;
    u32 a = tmp;
    u32 c = tmp;
    if (c >= 0xa7 && a <= 0xc6) {
        z = 1;
    }
    if (z) {
        id = 0x7f0;
    }
    func_02003e70(self->unk_60, id, 0x7f, 0);
}

static inline BOOL Unk_ov003_0221ad84_Chk(volatile u16 *p, u32 &vr)
{
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    s32 f1 = 0;
    u32 v = *p;
    u32 w = *p;
    vr = v;
    if (w <= 5) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) &&
            (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}

extern "C" void func_ov003_0221ad84(Unk_ov003_0221a4a0 *self)
{
    self->unk_3c = self->unk_3c - 0x154;
    if (self->unk_3c < 0) {
        volatile u16 tmp;
        Unk_ov003_0221a4a0_V2 pos;
        tmp = 0xfff1;
        self->unk_3c = 0;
        tmp = self->unk_0a;
        u32 v;
        if (Unk_ov003_0221ad84_Chk(&tmp, v) || (v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) ||
            (v >= 0x2f && v <= 0x56) || (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 ||
            (v >= 0x6a && v <= 0x6c) || v == 0x6d || (v >= 0xc8 && v <= 0xcf) || (v >= 0xd4 && v <= 0xda)) {
            pos.a = self->unk_10;
            pos.b = self->unk_14;
            if (func_ov003_02219ae0(self->unk_00, self->unk_0a, &pos)) {
                self->unk_a0 = 0;
                func_ov003_0221b228(self);
            }
        } else {
            func_ov003_0221b228(self);
        }
    }
    self->unk_44 = self->unk_3c;
}

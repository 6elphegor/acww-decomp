#include "types.h"

struct Unk_ov003_0221aed4_Raw2 {
    s32 x, z;
};

struct Unk_ov003_0221aed4_P2 {
    s32 x, z;
    Unk_ov003_0221aed4_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_0221aed4_P2(const Unk_ov003_0221aed4_P2 &o) { x = o.x; z = o.z; }
    Unk_ov003_0221aed4_P2(const Unk_ov003_0221aed4_Raw2 &o) { x = o.x; z = o.z; }
};

struct Unk_ov003_0221aed4_V3 {
    s32 x, y, z;
    Unk_ov003_0221aed4_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0221aed4_V3(const Unk_ov003_0221aed4_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

typedef Unk_ov003_0221aed4_P2 P2;
typedef Unk_ov003_0221aed4_V3 V3;


struct Unk_ov003_0221aed4_Raw3 {
    s32 x, y, z;
};

struct Unk_ov003_0221b65c_Tmp {
    s32 x, y, z;
    Unk_ov003_0221b65c_Tmp() {}
    ~Unk_ov003_0221b65c_Tmp() {}
};

struct Unk_ov003_0221aed4_Fx {
    /* 0x00 */ s32 unk_00;
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
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s16 unk_48;
    /* 0x4a */ s16 unk_4a;
    /* 0x4c */ s16 unk_4c;
    /* 0x4e */ s16 unk_4e;
    /* 0x50 */ s16 unk_50;
    /* 0x52 */ s16 unk_52;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60[0x40];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
};

struct Unk_ov003_0221b4b8_Obj {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Unk_ov003_0221aed4_Raw2 unk_08;
    /* 0x10 */ s32 unk_10;
};

struct Unk_ov003_0221b5e4_Sub {
    u8 pad[0xd4];
    u32 unk_d4;
};

struct Unk_ov003_0221b5e4_Mid {
    u8 pad[0x2c];
    Unk_ov003_0221b5e4_Sub *unk_2c;
};

struct Unk_ov003_0221b5e4_Kind {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov003_0221b5e4_Obj {
    /* 0x00 */ Unk_ov003_0221b5e4_Kind *unk_00;
    /* 0x04 */ Unk_ov003_0221b5e4_Mid *unk_04;
    /* 0x08 */ u8 unk_08[0xb0];
    /* 0xb8 */ s32 *unk_b8;
    /* 0xbc */ u8 pad_bc[4];
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ Unk_ov003_0221aed4_Raw2 unk_cc;
    /* 0xd4 */ s32 unk_d4;
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ s32 unk_dc;
    /* 0xe0 */ u8 pad_e0[0x138 - 0xe0];
    /* 0x138 */ s32 unk_138[3];
    /* 0x144 */ s32 unk_144;
    /* 0x148 */ s32 unk_148;
};

struct Unk_ov003_0221b7d4_Rec {
    s32 x, y, z;
};

struct Unk_ov003_0221b7d4_Pos {
    s32 x, y, z;
    Unk_ov003_0221b7d4_Pos() {}
};

struct Unk_ov003_0221b7d4_Ent {
    u8 pad_00[8];
    u16 unk_08;
    u16 unk_0a;
};

extern "C" {
extern u8 *data_ov003_02235930;
extern u32 data_ov003_02234684[][4];
extern void *data_ov003_02235938;
extern Unk_ov003_0221b7d4_Rec *data_ov003_0223291c[];

void func_0204ed8c(void *out, s32 x, s32 z);
BOOL func_0204e3a0(void *g, s32 x, s32 z);
s32 func_ov003_0221caf0(s32 a, s32 b, u32 c, s32 d);
void func_01ffca8c(void *a, void *b, void *c);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
void *func_0204ebd8(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 func_0204e88c(void *g, s32 x, s32 z);
s32 func_0204a9c8(void *c);
s32 func_02044098(void *c, void *p, s32 a, s32 b);
s32 func_0204403c(void *c, void *p);
s32 func_02044014(void *p);
s32 func_02133150(s32 a, s32 b);
s32 func_02045354(void *p, s32 a);
Unk_ov003_0221b7d4_Ent *func_02045214(s32 i);
s32 func_02045220(u8 a, s32 b);
s32 func_02045570(void *p);
s32 func_02045460(void *p);
void *func_0204da0c();
s32 func_02045510(const P2 &p, s32 a, s32 b);
void func_020e85fc(void *heap, void *p);
void *func_020641ec(void *s, void *heap, s32 a, s32 b);
void *func_021065dc(void *p);
void *func_021065f8(void *p, s32 a);
void func_02054720(void *self, s32 a, s32 b, s32 c, u16 d, u16 e);
void func_02054710(void *self);
s32 func_0204af08(void *c);
s32 func_02043ba8();
s32 func_ov003_0221ba50(void *self, s32 a);
s32 func_ov003_0221ba28(s32 a, void *p);
s32 func_ov003_0221b93c(void *c, s32 a, P2 p);
s32 func_ov003_0221b8bc(s32 a, P2 p);
s32 func_ov003_02219a9c(s32 a, s32 v, P2 p, V3 q, s16 t, s32 x);
s32 func_ov003_02219a5c(s32 a, s32 v, P2 p, V3 q, s32 w);

void func_ov003_0221ad28(Unk_ov003_0221aed4_Fx *self, P2 p);
void func_ov003_0221ac54(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q, s32 a);
void func_ov003_0221ab14(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void func_ov003_0221aa6c(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void func_ov003_0221a918(Unk_ov003_0221aed4_Fx *self, P2 p, s16 a);
void func_ov003_0221a840(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void func_ov003_0221a768(Unk_ov003_0221aed4_Fx *self, P2 p);
void func_ov003_0221a704(Unk_ov003_0221aed4_Fx *self, P2 p);
void func_ov003_0221a648(Unk_ov003_0221aed4_Fx *self, V3 q);
void func_ov003_0221a42c(Unk_ov003_0221aed4_Fx *self, P2 p, s32 a);

s32 func_ov003_0221b160(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void func_ov003_0221aed4(Unk_ov003_0221aed4_Fx *self, P2 p, void *g);
void func_ov003_0221af28(Unk_ov003_0221aed4_Fx *self, P2 p);
void func_ov003_0221af8c(Unk_ov003_0221aed4_Fx *self, P2 p, void *g, s32 flag);
void func_ov003_0221b228(Unk_ov003_0221aed4_Fx *self);
void func_ov003_0221b46c(Unk_ov003_0221aed4_Fx *self);
void func_ov003_0221b73c(u16 *cell, s32 a, P2 p);
void func_ov003_0221b7d4(u16 *cell, s32 a, P2 p);
}

extern "C" void func_ov003_0221aed4(Unk_ov003_0221aed4_Fx *self, P2 p, void *g)
{
    func_0204ed8c(&self->unk_18, p.x, p.z);
    if (func_0204e3a0(g, p.x, p.z) == 0) {
        self->unk_08 = 0xfc;
    } else {
        self->unk_08 = 0xfd;
    }
    self->unk_3c = 0x1000;
    self->unk_40 = 0x1000;
    self->unk_44 = 0x1000;
    self->unk_30 = 0;
    self->unk_34 = 0;
    self->unk_38 = 0;
    func_ov003_0221caf0(p.x, p.z, 0xfff1, 0);
}

extern "C" void func_ov003_0221af28(Unk_ov003_0221aed4_Fx *self, P2 p)
{
    func_0204ed8c(&self->unk_18, p.x, p.z);
    self->unk_3c = 0;
    self->unk_40 = 0x1000;
    self->unk_44 = 0;
    self->unk_30 = 0;
    self->unk_34 = 0;
    self->unk_38 = 0;
    self->unk_a0 = 0;
    self->unk_a1 = 1;
}

extern "C" void func_ov003_0221af60(Unk_ov003_0221aed4_Fx *self)
{
    self->unk_3c = self->unk_3c + 0x571;
    if (self->unk_3c >= 0x1000) {
        self->unk_3c = 0x1000;
        func_ov003_0221b228(self);
    }
    self->unk_44 = self->unk_3c;
}

extern "C" void func_ov003_0221af8c(Unk_ov003_0221aed4_Fx *self, P2 p, void *g, s32 flag)
{
    func_0204ed8c(&self->unk_18, p.x, p.z);
    self->unk_3c = 0;
    self->unk_40 = 0x1000;
    self->unk_44 = 0;
    self->unk_30 = 0;
    self->unk_34 = 0;
    self->unk_38 = 0;
    s32 x = p.x;
    s32 z = p.z;
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    u16 *c = (u16 *)func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
    if (c != 0) {
        s32 r = func_0204e88c(g, p.x, p.z);
        if (func_0204a9c8(c) != 0) {
            Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
            func_02044098(c, &q, 0, 0);
        } else {
            BOOL f = FALSE;
            u32 v = *c;
            if (v >= 0x21 && v <= 0x24) f = TRUE;
            if (f || (v >= 0x1f && v <= 0x20)) {
                Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
                func_0204403c(c, &q);
            } else if (v == 0xe2) {
                Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
                func_02044014(&q);
            } else if (r != 0 || (v >= 0xd4 && v <= 0xda) || (v >= 0xdb && v <= 0xe1)) {
                if (flag != 0) {
                    self->unk_a0 = 0;
                    self->unk_a1 = 1;
                }
            }
        }
        if (func_0204e88c(g, p.x, p.z) != 0) {
            func_ov003_0221caf0(p.x, p.z, 0xfff1, 0);
        }
    }
}

extern "C" void func_ov003_0221b090(Unk_ov003_0221aed4_Fx *self)
{
    self->unk_3c = self->unk_3c + 0x19a;
    if (self->unk_3c >= 0x1000) {
        self->unk_3c = 0x1000;
    }
    self->unk_44 = self->unk_3c;
    self->unk_34 = self->unk_34 - 0x400;
    func_01ffca8c(&self->unk_18, &self->unk_30, &self->unk_18);
    if (self->unk_1c < 0) {
        self->unk_1c = 0;
        if (self->unk_4c == 0) {
            self->unk_4c = 1;
            self->unk_30 = (self->unk_30 * 0x4cd) >> 12;
            self->unk_34 = 0x600;
            self->unk_38 = (self->unk_38 * 0x4cd) >> 12;
            volatile u16 t = 0xfff1;
            t = self->unk_08;
            BOOL f = FALSE;
            u32 a = t;
            u32 b = t;
            if (b >= 0x1492 && a <= 0x14fd) f = TRUE;
            if (f) {
                func_02003e70(self->unk_60, 0x70, 0x7f, 0);
            }
        } else {
            self->unk_4c = 2;
            self->unk_30 = 0;
            self->unk_34 = 0;
            self->unk_38 = 0;
            func_ov003_0221b228(self);
        }
    }
}

extern "C" s32 func_ov003_0221b160(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q)
{
    Unk_ov003_0221aed4_Raw3 t;
    func_0204ed8c(&t, p.x, p.z);
    s32 a = func_02133150(t.z - q.z, 9);
    self->unk_30 = func_02133150(t.x - q.x, 9);
    self->unk_34 = 0x1000;
    self->unk_38 = a;
    self->unk_18 = q.x;
    self->unk_1c = q.y;
    self->unk_20 = q.z;
    BOOL f = FALSE;
    s32 k = -1;
    self->unk_3c = 0;
    self->unk_40 = 0x1000;
    self->unk_44 = 0;
    volatile u16 w = 0xfff1;
    w = self->unk_08;
    u32 a1 = w;
    u32 b1 = w;
    if (b1 >= 0x1492 && a1 <= 0x14fd) f = TRUE;
    if (f) {
        if (self->unk_0c == 0xd) {
            u32 h = *(volatile u16 *)&self->unk_08;
            if (h >= 0x149b) k = 0x815;
        } else {
            k = 0x74;
        }
    } else {
        k = 0x75;
    }
    if (k >= 0) {
        func_02003e70(self->unk_60, k, 0x7f, 0);
    }
}

extern "C" void func_ov003_0221b214(Unk_ov003_0221aed4_Fx *self)
{
    self->unk_04 = 0;
    self->unk_0c = 0xf;
    self->unk_08 = 0xfff1;
    self->unk_0a = 0xfff1;
}

extern "C" void func_ov003_0221b228(Unk_ov003_0221aed4_Fx *self)
{
    func_ov003_0221b46c(self);
    self->unk_04 = 0;
    self->unk_0c = 0xf;
    self->unk_08 = 0xfff1;
    self->unk_0a = 0xfff1;
}

extern "C" void func_ov003_0221b248(Unk_ov003_0221aed4_Fx *self, s32 a, P2 p, V3 pos, s32 kind, u16 w, s32 x, s16 y, s32 z)
{
    self->unk_00 = a;
    self->unk_04 = 1;
    self->unk_0c = kind;
    self->unk_10 = p.x;
    self->unk_14 = p.z;
    self->unk_48 = y;
    self->unk_4a = 0;
    self->unk_54 = pos.x;
    self->unk_58 = pos.y;
    self->unk_5c = pos.z;
    self->unk_a0 = 1;
    self->unk_a1 = 0;
    self->unk_24 = 0;
    self->unk_28 = 0;
    self->unk_2c = 0;
    {
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unk_10;
        t.z = self->unk_14;
        s32 i = func_02045354(&t, 0);
        if (i >= 0) {
            self->unk_0a = func_02045214(i)->unk_0a;
        } else {
            self->unk_0a = 0xfff1;
        }
    }
    self->unk_08 = w;
    self->unk_4c = 0;
    self->unk_4e = 0;
    self->unk_50 = 0;
    self->unk_52 = 0x1f;
    switch (kind) {
    case 0:
    case 13:
        func_ov003_0221b160(self, p, pos);
        break;
    case 1:
        func_ov003_0221af8c(self, p, (void *)x, z);
        break;
    case 2:
        func_ov003_0221af28(self, p);
        break;
    case 3:
        func_ov003_0221aed4(self, p, (void *)x);
        break;
    case 4:
        func_ov003_0221ad28(self, p);
        break;
    case 5:
        func_ov003_0221ac54(self, p, pos, z);
        break;
    case 6:
        func_ov003_0221ab14(self, p, pos);
        break;
    case 7:
        func_ov003_0221aa6c(self, p, pos);
        break;
    case 8:
        func_ov003_0221a918(self, p, y);
        break;
    case 9:
        func_ov003_0221a840(self, p, pos);
        break;
    case 10:
        func_ov003_0221a768(self, p);
        break;
    case 11:
        func_ov003_0221a704(self, p);
        break;
    case 12:
        func_ov003_0221a648(self, pos);
        break;
    case 14:
        func_ov003_0221a42c(self, p, x);
        break;
    }
}

extern "C" void func_ov003_0221b46c(Unk_ov003_0221aed4_Fx *self)
{
    if (self->unk_a0 != 0) {
        self->unk_a0 = 0;
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unk_10;
        t.z = self->unk_14;
        func_02045570(&t);
    } else if (self->unk_a1 != 0) {
        self->unk_a1 = 0;
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unk_10;
        t.z = self->unk_14;
        func_02045460(&t);
    }
}

extern "C" void func_ov003_0221b4b8(Unk_ov003_0221b4b8_Obj *self)
{
    if (self->unk_10 != 1) {
        void *g = func_0204da0c();
        if (g != 0) {
            s32 x = self->unk_08.x;
            s32 z = self->unk_08.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            void *c = func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (c != 0) {
                func_ov003_0221b73c((u16 *)c, self->unk_04, P2(self->unk_08));
            }
        }
    }
    func_02045510(P2(self->unk_08), self->unk_04, 0);
    self->unk_00 = 0;
}

extern "C" s32 func_ov003_0221b518(void *self, u32 a, u32 b)
{
    return data_ov003_02234684[a][b];
}

extern "C" void func_ov003_0221b528(u32 (*arr)[4])
{
    void *heap = data_ov003_02235938;
    s32 i = 0;
    for (; i < 8; i++) {
        s32 j = 0;
        for (; j < 4; j++) {
            if (arr[i][j] != 0) {
                func_020e85fc(heap, (void *)arr[i][j]);
                arr[i][j] = 0;
            }
        }
    }
}

extern "C" void func_ov003_0221b570(u32 (*arr)[4])
{
    s32 i = 0;
    for (; i < 8; i++) {
        s32 j = 0;
        for (; j < 4; j++) {
            s32 v = func_ov003_0221b518(arr, i, j);
            if (v != 0) {
                arr[i][j] = (u32)func_020641ec((void *)v, data_ov003_02235938, 4, 0);
                void *r = func_021065dc((void *)arr[i][j]);
                *(u32 *)((u8 *)&arr[i][j] + 0x80) = (u32)func_021065f8(r, 0);
            } else {
                arr[i][j] = 0;
                *(u32 *)((u8 *)&arr[i][j] + 0x80) = 0;
            }
        }
    }
}

extern "C" void func_ov003_0221b5e4(Unk_ov003_0221b5e4_Obj *self)
{
    Unk_ov003_0221b5e4_Sub *s = self->unk_04->unk_2c;
    if (self->unk_00->unk_01 == 2) {
        switch (s->unk_d4) {
        case 0:
        case 1:
        case 2:
        case 3:
            *self->unk_b8 = 0;
            break;
        }
    }
}

extern "C" void func_ov003_0221b618(Unk_ov003_0221b5e4_Obj *self)
{
    self->unk_00 = 0;
    self->unk_d8 = 0;
    self->unk_cc.x = -1;
    self->unk_cc.z = -1;
    for (s32 i = 0; i < 3; i++) {
        self->unk_138[i] = -1;
    }
    self->unk_144 = 0;
    self->unk_148 = 0;
}

extern "C" s32 func_ov003_0221b65c(Unk_ov003_0221b5e4_Obj *self, s32 a, P2 p, s32 kind, s32 idx, s32 last)
{
    func_0204da0c();
    BOOL f = TRUE;
    u8 *tbl = data_ov003_02235930 + 0x696c;
    if (kind == 2) f = FALSE;
    func_02054720(&self->unk_08, *(s32 *)(tbl + kind * 16 + 0x80 + idx * 4), f, 0x1000, 0, 0);
    if (self->unk_d4 == 8) {
        func_02054710(&self->unk_08);
    }
    self->unk_d4 = kind;
    self->unk_04 = (Unk_ov003_0221b5e4_Mid *)a;
    self->unk_cc.x = p.x;
    self->unk_cc.z = p.z;
    Unk_ov003_0221b65c_Tmp t;
    func_0204ed8c(&t, p.x, p.z);
    self->unk_c0 = t.x;
    self->unk_c4 = t.y;
    self->unk_c8 = t.z;
    self->unk_d8 = 0x1f000;
    self->unk_dc = 0;
    func_ov003_0221ba50(self, last);
}

extern "C" void func_ov003_0221b718(Unk_ov003_0221b5e4_Obj *self, void *cell)
{
    func_ov003_0221b73c((u16 *)cell, (s32)self->unk_04, P2(self->unk_cc));
}

extern "C" void func_ov003_0221b73c(u16 *cell, s32 a, P2 p)
{
    BOOL f = FALSE;
    u32 t = *cell;
    if (t >= 0x2f && t <= 0x56) f = TRUE;
    if (f || (t >= 0xc8 && t <= 0xcf) || (t >= 0x57 && t <= 0x5b)) {
        if (func_0204af08(cell) != 0) {
            func_ov003_0221b93c(cell, a, p);
        }
    } else if (t == 0x67 || t == 0x6b) {
        if (func_02043ba8() != 0) {
            func_ov003_0221b8bc(a, p);
        }
    } else if ((t >= 0x66 && t <= 0x68) || (t >= 0x6a && t <= 0x6c)) {
        func_ov003_0221b7d4(cell, a, p);
    }
}

extern "C" void func_ov003_0221b7d4(u16 *cell, s32 a, P2 p)
{
    s32 rec = func_02045220((u8)a, 0);
    if (rec >= 0) {
        volatile s32 fl = 0;
        Unk_ov003_0221b7d4_Rec *tbl;
        BOOL f = FALSE;
        u32 t = *cell;
        if (t >= 0x66 && t <= 0x68) f = TRUE;
        if (f) {
            tbl = data_ov003_0223291c[0];
            if (t == 0x66) fl = 1;
        } else if (t >= 0x6a && t <= 0x6c) {
            tbl = data_ov003_0223291c[1];
            if (t == 0x6a) fl = 1;
        }
        Unk_ov003_0221aed4_Raw3 d;
        func_0204ed8c(&d, p.x, p.z);
        s32 idx = func_ov003_0221ba28(a, &d);
        tbl = tbl + idx;
        Unk_ov003_0221b7d4_Ent *e = func_02045214(rec);
        Unk_ov003_0221aed4_Raw3 pv[1];
        Unk_ov003_0221aed4_Raw3 &pos = pv[0];
        pos.x = d.x + tbl->x;
        pos.y = d.y + tbl->y;
        pos.z = d.z + tbl->z;
        volatile u16 tt[3];
        tt[2] = e->unk_08;
        tt[0] = tt[1] = tt[2];
        s32 hi = tt[0] >> 8;
        s32 lo = tt[1] & 0xff;
        if (fl == 0) {
            func_ov003_02219a9c(a, e->unk_0a, P2(hi, lo), V3(pos.x, pos.y, pos.z), 0, 0);
        } else {
            func_ov003_02219a5c(a, e->unk_0a, P2(hi, lo), V3(pos.x, pos.y, pos.z), 0);
        }
    }
}

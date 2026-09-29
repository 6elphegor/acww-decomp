#include "types.h"

struct Unk_02009d5c_Sub { u32 unk_00; u8 unk_04; u32 unk_08; u32 unk_0c; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; Unk_02009d5c_Sub unk_0c; };

struct Unk_0200e2e0 { u8 pad_00[0xc]; Unk_02009d5c_Sub unk_0c; };
struct Unk_02009a78_Vec { s32 x, y, z; };
struct Unk_02009624_Pair { u32 unk_00; u16 unk_04; u8 unk_06; };

extern u8 data_020e416c;
struct Unk_02006d14_Data;
extern "C" {
extern Unk_02006d14_Data* data_020cbb18;
extern s16 data_02135f44[];
extern u32 data_020d5e4c[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
u16 func_0207694c(void* p);
void func_02076964(void* p, u32 v);
BOOL func_020729bc(Unk_02006d14_Data* p, u32 v);
void func_02098738(void* p, void* q);
BOOL func_02056654(void* p);
BOOL func_020565e8(void* p, u32 v);
void func_02053f20(void* p);
u32 func_02057278(u16* p);
u32 func_020572b0(u32 v);
u32 func_020572e0(void* p);
BOOL func_02057304(Unk_02009a78_Vec* p);
BOOL func_02057328(void* p);
u32 func_02057378(void* p);
u32 func_020573b4();
u32 func_020573cc(u32 a, void* p);
u32 func_020573f4(void* p);
void func_02057418(void* p, u32 a, u8 b, u32 c, void* d, u32 e);
void func_0200e2e0(Unk_0200e2e0* p);
void func_0200e2c0(Unk_0200e2e0* p, u32 a, u32 b, u32 c);
void func_0200e2d0(Unk_0200e2e0* p);
void func_02010a7c(u16* out, void* p);
void func_02010a58(void* p, void* q);
s32 func_02010a34(void* p, void* q);
s32 func_02010d68(s32 a, s32 b);
void func_02010d98(void* out, s32 a);
void func_02009e5c(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d);
void func_02009bfc(u32* p);
void func_020096d0(void* p, u16* out);
void func_020096e0(void* p, u32 v);
}

struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02009a78_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0x230 - 0x9c];
    u8 unk_230[0x9c];
    u8 unk_2cc[4];
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02009624_Pair unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x81c - 0x800];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x82c - 0x820];
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e7 - 0x838];
    s8 unk_8e7;
    u8 pad_8e8[4];
    u8 unk_8ec[4];

    s32 func_020095f8(u32 a);
    void func_02009624(Unk_02006d14_Item* item, u32 old);
    s32 func_020096e8(u16 a, u32 b, u32 c);
    void func_02009724();
    void func_02009740();
    void func_020097d8(Unk_02006d14_Item* item, u32 old);
    s32 func_02009800(u32 a, u32 b);
    void func_02009838();
    void func_02009854();
    void func_02009888(Unk_02006d14_Item* item, u32 old);
    s32 func_020098a4(u32 a, u32 b);
    void func_020098dc();
    void func_020098f8();
    void func_02009948(Unk_02006d14_Item* item, u32 old);
    s32 func_0200995c(u32 a, u32 b);
    void func_02009994();
    void func_020099dc();
    void func_02009a38();
    void func_02009a78();
    s32 func_02009bd0(u32 a);
    void func_02009bdc(Unk_02006d14_Item* item, u32 old);
    s32 func_02009c04(u32 a, u32 b);
    void func_02009c3c();
    void func_02009c58();
    void func_02009c94(Unk_02006d14_Item* item, u32 old);
    s32 func_02009cb0(u32 a, u32 b);
    void func_02009ce8();
    void func_02009d04();
    void func_02009d2c();
    void func_02009d5c(Unk_02006d14_Item* item, u32 old);
    s32 func_02009df8(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void func_02009e68();
    void func_02009d58();
    void func_02009c90();
    void func_02009944();
    void func_02009884();
    void func_020097d4();
    void func_02009ed8();

    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_0200e248(Unk_0200e2e0* p);
    void func_0200ecdc(u32 a);
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_020109ac();
    u32 func_02007c08(u32 a);
    void func_0200bd60(u32 a, u32 b, s32 c);
    void func_0200f32c();
    void func_0200ec1c(u32 a);
    void func_0200f004(u32 a);
    void func_0200eee4(u32* p);
    void func_0200a82c(u8* p, u32 a);
    void func_0200a7b4();
    void* func_02010d20();
    s32 func_0200e35c(s16* a, Unk_02009a78_Vec* b, s32* c, s16* d);
};


extern "C" void func_020096d0(void* p, u16* out)
{
    *out = func_0207694c(p);
}

extern "C" void func_020096e0(void* p, u32 v)
{
    func_02076964(p, v);
}

extern "C" void func_02009bfc(u32* p)
{
    *p = 0;
}

extern "C" void func_02009e5c(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d)
{
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
    p->unk_0c = d;
}

s32 Unk_02006d14::func_020095f8(u32 a)
{
    u16 v;
    func_020096d0(unk_8ec, &v);
    return func_020096e8(v, 6, a);
}

static inline BOOL Unk_02009624_Check()
{
    if (data_020e416c == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_02009624(Unk_02006d14_Item* item, u32 old)
{
    u16* q = (u16*)&item->unk_0c;
    if (Unk_02009624_Check()) {
        u16 buf[2];
        func_02010a7c(buf, this);
        void* r = func_02010d20();
        buf[1] = 0xfff1;
        func_02098738(r, &buf[1]);
        func_02010358(0x13, 5, 5);
        func_02098738(r, buf);
    }
    Unk_02009624_Pair* d = &unk_7d0;
    d->unk_00 = 0x1000;
    d->unk_04 = *q;
    if (old == 0x10) {
        d->unk_06 = 1;
    } else {
        d->unk_06 = 0;
    }
    if (d->unk_04 != 0xfff1) {
        func_0200ecdc(0x31);
    } else {
        func_0200ecdc(0x78);
    }
    func_020096e0(unk_8ec, *q);
}

s32 Unk_02006d14::func_020096e8(u16 a, u32 b, u32 c)
{
    Unk_0200e2e0 obj;
    s32 r;
    func_0200e2e0(&obj);
    func_0200e2c0(&obj, 0x3f, b, c);
    *(u16*)&obj.unk_0c = a;
    r = func_0200e248(&obj);
    func_0200e2d0(&obj);
    return r;
}

void Unk_02006d14::func_02009724()
{
    func_02010914();
    func_0201071c();
    func_02009740();
}

void Unk_02006d14::func_02009740()
{
    u16 v[2];
    if (func_02056654(unk_2cc)) {
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200bd60(3, 5, -1);
        if (unk_8e7 >= 0) {
            func_02057278(v);
            switch (v[0]) {
            case 0x1373:
                unk_8e7 = 3;
                break;
            case 0x1375:
                unk_8e7 = 2;
                break;
            case 0x1377:
                unk_8e7 = 1;
                break;
            }
        }
        func_02057378(this);
    }
}

void Unk_02006d14::func_020097d8(Unk_02006d14_Item* item, u32 old)
{
    func_02010358(0x2c, 3, 0);
    func_020573cc(func_020573b4(), this);
    func_0200ecdc(0x4f);
}

#define REQ(name, id) \
s32 Unk_02006d14::name(u32 a, u32 b) \
{ \
    Unk_0200e2e0 obj; \
    s32 r; \
    func_0200e2e0(&obj); \
    func_0200e2c0(&obj, id, a, b); \
    r = func_0200e248(&obj); \
    func_0200e2d0(&obj); \
    return r; \
}
REQ(func_02009800, 0x35)
REQ(func_020098a4, 0x34)
REQ(func_0200995c, 0x33)
REQ(func_02009c04, 0x32)
REQ(func_02009cb0, 0x31)

void Unk_02006d14::func_02009838()
{
    func_02010914();
    func_0201071c();
    func_02009854();
}

void Unk_02006d14::func_02009854()
{
    if (func_02056654(unk_2cc)) {
        if (func_020573b4() == 5) {
            func_02009800(6, -1);
        }
    }
}

void Unk_02006d14::func_02009888(Unk_02006d14_Item* item, u32 old)
{
    func_02010358(0x2b, 3, 0);
    func_020573cc(4, this);
}

void Unk_02006d14::func_020098dc()
{
    func_02010914();
    func_0201071c();
    func_020098f8();
}

void Unk_02006d14::func_020098f8()
{
    if (func_02056654(unk_2cc)) {
        if (func_020573f4(this) == 0) {
            if (func_020572e0(this) != 1) {
                return;
            }
            func_020573cc(3, this);
        }
        if (func_020572b0(3) == 0) {
            func_020098a4(6, -1);
        }
    }
}

void Unk_02006d14::func_02009948(Unk_02006d14_Item* item, u32 old)
{
    func_02010358(0x2a, 3, 0);
}

void Unk_02006d14::func_02009994()
{
    func_02009a78();
    func_02009a38();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_020109c4();
    } else {
        func_020109ac();
    }
    func_0201071c();
    func_020099dc();
}

void Unk_02006d14::func_020099dc()
{
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        if (unk_98 == 0) {
            func_0200995c(6, -1);
        }
    } else {
        unk_7f8 = 0;
        if (unk_98 == 0) {
            func_0200bd60(3, 5, -1);
        }
    }
}

void Unk_02006d14::func_02009a38()
{
    s32 r = func_01ffcb0c(unk_98, 0x3ae1);
    if (r <= (s32)unk_2d0) {
        unk_2dc = r;
    }
    func_02053f20(unk_230);
    func_0200f32c();
}

struct Unk_02009a78_Locals { Unk_02009a78_Vec cur; Unk_02009a78_Vec pos; Unk_02009a78_Vec diff; };

void Unk_02006d14::func_02009a78()
{
    u32* r4 = (u32*)((u8*)this + 0x7d0);
    s16 ang[3];
    s32 dist;
    Unk_02009a78_Locals L;
    Unk_02009a78_Vec* pv = &unk_5c;
    L.cur = *pv;
    ang[2] = unk_8e;
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        if (!func_02057304(&L.pos)) {
            return;
        }
        L.diff.x = L.pos.x - unk_5c.x;
        L.diff.z = L.pos.z - unk_5c.z;
        if (func_02057328(this)) {
            *r4 = 0;
        } else {
            *r4 = func_02010d68(*r4, 0x333);
        }
        ang[1] = func_020e7b98(L.diff.x, L.diff.z);
    } else {
        if (!func_0200e35c(ang, &L.pos, &L.pos.z, &ang[1])) {
            func_02010a34(this, data_020d5e4c);
            return;
        }
        if (L.pos.x != unk_5c.x || L.pos.z != unk_5c.z) {
            s32 t;
            L.diff.x = L.pos.x - unk_5c.x;
            L.diff.z = L.pos.z - unk_5c.z;
            *r4 = func_02010d68(*r4, 0x333);
            t = func_020e7b98(L.diff.x, L.diff.z);
            if (func_020e780c(t, ang[2]) >= 0x4000) {
                *r4 = 0;
            } else {
                ang[1] = t;
            }
        } else {
            *r4 = 0;
        }
    }
    if (*r4 != 0) {
        func_02010d98((void*)&ang[2], ang[1]);
        func_02010a58(this, (void*)&ang[2]);
    }
    s32 t2 = func_01ffcb0c(*r4, data_02135f44[(((u16)(s16)(ang[2] - ang[1])) >> 4) * 2 + 1]);
    if (t2 < 0) {
        t2 = -t2;
    }
    dist = t2;
    func_02010a34(this, &dist);
}

s32 Unk_02006d14::func_02009bd0(u32 a)
{
    return func_02009c04(6, a);
}

void Unk_02006d14::func_02009bdc(Unk_02006d14_Item* item, u32 old)
{
    func_020103b4(1, 3, 0);
    func_02009bfc((u32*)&unk_7d0);
}

void Unk_02006d14::func_02009c3c()
{
    func_02010914();
    func_0201071c();
    func_02009c58();
}

void Unk_02006d14::func_02009c58()
{
    if (func_020573f4(this) == 0) {
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200bd60(7, 5, -1);
    }
}

void Unk_02006d14::func_02009c94(Unk_02006d14_Item* item, u32 old)
{
    func_020103b4(0x29, 3, 0);
    func_020573cc(2, this);
}

void Unk_02006d14::func_02009ce8()
{
    func_02009d2c();
    func_0201071c();
    func_02009d04();
}

void Unk_02006d14::func_02009d04()
{
    if (func_02056654(unk_2cc)) {
        func_02009cb0(6, -1);
    }
}

void Unk_02006d14::func_02009d2c()
{
    if (func_020565e8(unk_2cc, 8)) {
        func_0200ecdc(0x63);
    }
    func_02010914();
}

void Unk_02006d14::func_02009d5c(Unk_02006d14_Item* item, u32 old)
{
    Unk_02009d5c_Sub* s = &item->unk_0c;
    func_02057418(&unk_81c, item->unk_0c.unk_00, s->unk_04, s->unk_08, this, s->unk_0c);
    func_02010358(0x28, 3, 0);
    func_020573cc(1, this);
    func_0200ecdc(0x4f);
    if (unk_81c == 0x1373 || unk_81c == 0x1375 || unk_81c == 0x1377 || unk_81c == 0x1379 || unk_81c == 0x136a || unk_81c == 0x137b) {
        unk_8e7 = -1;
    } else {
        unk_8e7 = 0;
    }
}

s32 Unk_02006d14::func_02009df8(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g)
{
    Unk_0200e2e0 obj;
    s32 r;
    func_0200e2e0(&obj);
    func_0200e2c0(&obj, 0x30, f, g);
    unk_81e = *p;
    unk_81c = unk_81e;
    func_02009e5c(&obj.unk_0c, b, c, d, e);
    r = func_0200e248(&obj);
    func_0200e2d0(&obj);
    return r;
}

void Unk_02006d14::func_02009e68()
{
    func_02010914();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0201071c();
        func_02009ed8();
        u8* p = (u8*)&unk_7d0;
        func_0200a82c(p + 1, p[0]);
    } else {
        u8* p = (u8*)&unk_7d0;
        u32 v[2];
        u32 hi = p[3];
        u32 lo = p[2];
        v[0] = lo;
        v[1] = hi;
        func_0200eee4(v);
        func_0201071c();
        func_02009ed8();
        func_0200a7b4();
    }
}

void Unk_02006d14::func_02009ed8()
{
    u32 x;
    s32 t;
    if (unk_700 != 0x18) {
        unk_82c = 0;
        unk_830 = 0;
        unk_834 = 0;
        func_0200ec1c(0xd);
    } else {
        x = (unk_2d4 << 4) >> 16;
        if (x < 6) {
            t = 0x1000 - func_02133150(x << 12, 6);
            if (t < 0) {
                t = 0;
                func_0200ec1c(0xd);
            }
            unk_82c = t;
            unk_830 = t;
            unk_834 = t;
            func_0200f004(t);
        } else {
            unk_82c = 0;
            unk_830 = 0;
            unk_834 = 0;
        }
    }
}

void Unk_02006d14::func_020097d4()
{
}

void Unk_02006d14::func_02009884()
{
}

void Unk_02006d14::func_02009944()
{
}

void Unk_02006d14::func_02009c90()
{
}

void Unk_02006d14::func_02009d58()
{
}

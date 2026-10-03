#include "types.h"

struct Unk_0205f1e8_Vec {
    s32 x, y, z;
};

struct Unk_0205f7f4_Mtx {
    s32 v[12];
};

class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    GroundInfo() {}
    GroundInfo *initAtPos(Unk_0205f1e8_Vec *v, s32 a, s32 b);
    ~GroundInfo();
};

class Unk_0205f6b4_Obj {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0205f6b4_Obj() {}
    Unk_0205f6b4_Obj *func_020339bc(Unk_0205f1e8_Vec *v, s32 a, s32 b);
};

extern "C" {
extern void *data_021c61c8;
extern u8 *gCommManager;
extern s16 data_02135f44[];
extern u8 data_021c7468[];

s32 func_0205ef74(u8 *p);
s32 File_LoadToBuffer(void *path, void *dst, u32 size);
s32 func_0205ef60(u8 *p);
char *func_0205f034(u32 x);
s32 func_0205f030();
s32 func_0205f02c();
s32 func_0205f018();
void func_0205ef88(u8 *p, u8 v);
s32 func_0205efa0(u32 *a, u32 i);
void func_020e885c(void *p);
void func_020e877c(void *p);
void *Heap_AllocAligned(void *h, s32 size, s32 align);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0205bcb4();
s32 func_0205bcd0();
void func_0205efa8(u32 *a);
void func_0205efd0(u32 *a);
void NetBuf_WriteU16(void *p, s32 v);
void CommRecord_PackSource(void *p, s32 a, u8 b);
BOOL NetArea_IsLocalOwner();
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *q, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL func_020729cc(void *p, s32 h);
u16 NetBuf_ReadU16();
void CommRecord_UnpackSource(void *p, u8 *a, u8 *b);
BOOL SceneId_IsTown(u32 v);
void *TownBlockMap_Get();
void *HouseRoomMaps_GetForScene(u32 v);
void BlockMap_SetItemAtUnit(void *o, u16 *v, s32 a, s32 b, s32 c);
void BlockMap_SetBuriedAtUnit(void *o, s32 a, s32 b);
void BlockMap_ClearBuriedAtUnit(void *o, s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 Effect_Create(s32 kind, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 Effect_SetPosition(s32 h, Unk_0205f1e8_Vec *v, void *a, s32 b);
s32 Effect_End(s32 h);
void func_020e9790(Unk_0205f1e8_Vec *out, Unk_0205f1e8_Vec *in, s32 n);
void VEC_Add(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
void VEC_Subtract(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b, Unk_0205f1e8_Vec *out);
s32 func_020e9650(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
void func_020e9768(Unk_0205f1e8_Vec *v, s32 n);
void func_020e8388(Unk_0205f7f4_Mtx *m, s32 x, s32 y, s32 z);
void FieldFish_StartCastSplash();
void *func_0205fd94(u8 *tbl, u32 idx);
void WorldCurve_FromCurved(void *p, Unk_0205f1e8_Vec *v);
void WorldCurve_ToCurved(Unk_0205f1e8_Vec *a, Unk_0205f1e8_Vec *b);
s32 func_0205fbb8(void *p);
void func_0205553c(void *e, s32 a);
void GroundInfo_Destruct(void *p);
}

class Unk_0205f360 {
public:
    void func_0205f2fc();
    void func_0205f92c(s32 state);
    void func_0205f360();
    void func_0205f388();
    void func_0205f3c4();
    void func_0205f400();
    void func_0205f4e4();
    void func_0205f52c();
    void func_0205f6b4();
    void func_0205f77c();
    void func_0205f7ec();
    void func_0205f7f0();

    u8 pad_00[8];
    Unk_0205f1e8_Vec unk_08;
    s32 unk_14;
    s32 unk_18;
    Unk_0205f1e8_Vec unk_1c;
    u8 *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
    s32 unk_3c;
};

struct Unk_0205f014 {
    u32 unk_00[4];
    Unk_0205f014();
    ~Unk_0205f014();
};

Unk_0205f014 data_021c73d4;
char data_021c73e4[0x14];

extern "C" BOOL func_0205f144(u8 *p);

extern "C" BOOL func_0205f1e8(Unk_0205f1e8_Vec *a, s32 k, Unk_0205f1e8_Vec *b, s32 *c, u8 flag)
{
    s32 m, n, d, r1, r2;
    if (flag) {
        m = 0xccd;
        n = 5;
    } else {
        m = 0xccd;
        n = 0xa;
    }
    d = _s32_div_f(0x1000, n);
    r1 = func_020e7870(&b->x, a->x, d, m, 0x19a);
    r2 = r1 + func_020e7870(&b->z, a->z, d, m, 0x19a);
    if (*c < 0 && flag) {
        func_020e7870(&b->y, a->y, d, 0xccd, 0x52);
    } else {
        b->y += *c;
        *c -= k;
    }
    return r2 == 0 ? TRUE : FALSE;
}

extern "C" BOOL func_0205f144(u8 *p)
{
    struct {
        u8 t[2];
        u16 h[2];
    } l;
    void *o;
    BOOL r6;
    s32 x, y;
    u16 id = NetBuf_ReadU16();
    CommRecord_UnpackSource(p + 2, &l.t[0], &l.t[1]);
    r6 = l.t[1] ? TRUE : FALSE;
    x = *(s8 *)(p + 3);
    y = *(s8 *)(p + 4);
    if (SceneId_IsTown(l.t[0])) {
        o = TownBlockMap_Get();
        if (o != 0) {
            l.h[0] = id;
            BlockMap_SetItemAtUnit(o, &l.h[0], x, y, 0);
            if (r6) {
                BlockMap_SetBuriedAtUnit(o, x, y);
            } else {
                BlockMap_ClearBuriedAtUnit(o, x, y);
            }
            return TRUE;
        }
    } else {
        o = HouseRoomMaps_GetForScene(l.t[0]);
        if (o != 0) {
            l.h[1] = id;
            BlockMap_SetItemAtUnit(o, &l.h[1], x, y, 0);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0205f100(u8 *p)
{
    if (func_0205f144(p)) {
        if (_ZN11CommManager8isOnlineEv((void *)gCommManager)) {
            void *q = (void *)gCommManager;
            _ZN11CommManager11beginRecordEv(q);
            _ZN11CommManager11writeRecordEPhj(q, p, 5);
            _ZN11CommManager9endRecordEjj(q, 0x12, 4);
        }
    }
}

extern "C" void func_0205f094(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    u8 buf[5];
    NetBuf_WriteU16(buf, d);
    CommRecord_PackSource(buf + 2, c, e ? 1 : 0);
    buf[3] = a;
    buf[4] = b;
    if (NetArea_IsLocalOwner()) {
        func_0205f100(buf);
    } else {
        void *q = (void *)gCommManager;
        _ZN11CommManager11beginRecordEv(q);
        _ZN11CommManager11writeRecordEPhj(q, buf, 5);
        _ZN11CommManager9endRecordEjj(q, 0x13, 6);
    }
}

extern "C" void func_0205f06c()
{
    func_0205bcd0();
    func_0205efd0(data_021c73d4.unk_00);
    if (data_021c61c8) {
        func_020e877c(data_021c61c8);
    }
}

extern "C" void func_0205f054()
{
    func_0205efa8(data_021c73d4.unk_00);
    func_0205bcb4();
}

char *func_0205f034(u32 x)
{
    func_020639e8(data_021c73e4, "/PPal/%d/%d.nsbtx", x >> 5, x);
    return data_021c73e4;
}

extern "C" s32 func_0205f030()
{
    return 0xe4;
}

extern "C" s32 func_0205f02c()
{
    return 0xd4;
}

extern "C" s32 func_0205f018()
{
    s32 a = func_0205f030();
    return a + func_0205f02c();
}

Unk_0205f014::Unk_0205f014() {}

Unk_0205f014::~Unk_0205f014() {}

extern "C" void func_0205efd0(u32 *out)
{
    void *h = data_021c61c8;
    u32 n = gCommManager[0x6c];
    u32 i;
    for (i = 0; i < n; i++) {
        out[i] = (u32)Heap_AllocAligned(h, func_0205f018(), 4);
    }
}

extern "C" void func_0205efa8(u32 *a)
{
    s32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        a[i] = z;
    }
    if (data_021c61c8) {
        func_020e885c(data_021c61c8);
    }
}

extern "C" s32 func_0205efa0(u32 *a, u32 i)
{
    return a[i];
}

extern "C" void func_0205ef98(u8 *p)
{
    *p = 4;
}

extern "C" void func_0205ef94()
{
}

extern "C" void func_0205ef8c(u8 *p, u8 v)
{
    func_0205ef88(p, v);
}

extern "C" void func_0205ef88(u8 *p, u8 v)
{
    *p = v;
}

extern "C" s32 func_0205ef74(u8 *p)
{
    return func_0205efa0(data_021c73d4.unk_00, *p);
}

extern "C" s32 func_0205ef60(u8 *p)
{
    s32 a = func_0205ef74(p);
    return a + func_0205f030();
}

extern "C" void func_0205ef34(u32 x, u32 y) {
    u32 dst = func_0205ef74((u8 *)x);
    void *path = (void *)func_0205f034(y);
    File_LoadToBuffer(path, (void *)dst, func_0205f030());
}

extern "C" void func_0205ef08(u32 x, u32 y) {
    u32 dst = func_0205ef60((u8 *)x);
    void *path = (void *)func_0205f034(y);
    File_LoadToBuffer(path, (void *)dst, func_0205f02c());
}


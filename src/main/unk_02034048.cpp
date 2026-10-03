#include "types.h"

// 2-byte element (0xfff1 = none), constructed by __sinit; destructor is in another unit (0x02004b60)
class ItemId {
public:
    u16 unk_00;

    ItemId() { unk_00 = 0xfff1; }
    ~ItemId();
};

struct Unk_02034250_Id {
    u16 v;
};

extern "C" {
extern u8 gFieldSceneKind;
extern void *gCommManager;
extern u8 data_021d735c[];
extern u8 data_021e58a8[];

void *RoomShell_GetPrevCarpet();
void *RoomShell_GetPrevWallpaper();
void *RoomShell_SetCarpet(u16 *id, s32 a, s32 b);
void *RoomShell_SetWallpaper(u16 *id, s32 a, s32 b);
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 _ZN10PlayerData11getPlayerIdEv();
u32 func_02097740(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 Scene_GetCurrent();
BOOL SceneId_IsHouseRoom(s32 a);
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *q, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
void *_ZN9HouseData13func_02060550Ei(void *a, s32 b);
void _ZN9HouseRoom13func_02060808EPtj(void *a, void *b, s32 c);
void _ZN9HouseRoom13func_020607e0EPtj(void *a, void *b, s32 c);

BOOL func_0203411c(u32 i, u16 *v);
BOOL func_0203414c(u32 i, u16 *v);
void func_02034320(u16 *id, s32 a, s32 b, s32 c);
void func_020343b0(u16 *out, s32 a);
void *func_02034250(u16 *id, s32 a, s32 b, s32 c);
void *func_020342cc(u16 *id, s32 a, s32 b, s32 c);
void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e);
}

extern ItemId data_021c1a44;
extern ItemId data_021c1a6c[0x33];
extern ItemId data_021c1ad4[0x33];

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

struct Unk_02034320_Pkt {
    u16 a;
    u16 b;
};

struct Unk_02034048_Pkt {
    u16 unk_00;
    u16 id : 6;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
};

extern "C" void func_020343b0(u16 *out, s32 a) {
    u32 x = a & 7;
    u32 y = 0;
    if (PlayerData_GetCurrent()) {
        y = func_02097740(data_021d735c, _ZN10PlayerData11getPlayerIdEv()) & 3;
    }
    Item_SetDesign(out, y, x);
}

extern "C" void func_02034320(u16 *id, s32 a, s32 b, s32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        Unk_02034320_Pkt pkt;
        pkt.a = *id;
        pkt.b = (pkt.b & ~0x3f) | (Scene_GetCurrent() & 0x3f);
        pkt.b = (pkt.b & ~0x40) | ((b & 1) << 6);
        pkt.b = (pkt.b & ~0x80) | (((u16)a & 1) << 7);
        pkt.b = (pkt.b & ~0x100) | ((c & 1) << 8);
        void *obj = gCommManager;
        _ZN11CommManager11beginRecordEv(obj);
        _ZN11CommManager11writeRecordEPhj(obj, &pkt, 4);
        _ZN11CommManager9endRecordEjj(obj, 0x14, 4);
    }
}

extern "C" void *func_020342cc(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        r = RoomShell_SetWallpaper(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 1, b);
        }
        return r;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void *func_020342a4(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_020342cc(&id, b, c, d);
}

extern "C" void *func_02034250(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        r = RoomShell_SetCarpet(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 0, b);
        }
        return r;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void *func_02034228(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_02034250(&id, b, c, d);
}

extern "C" BOOL func_020341f4(s32 a) {
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        func_020342cc((u16 *)RoomShell_GetPrevWallpaper(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020341c0(s32 a) {
    if (Unk_020341c0_IsOne(gFieldSceneKind)) {
        func_02034250((u16 *)RoomShell_GetPrevCarpet(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e)
{
    if (c != 0) {
        func_020342cc(a, b, d, e);
    } else {
        func_02034250(a, b, d, e);
    }
}

extern "C" void func_02034164()
{
    u32 i;
    for (i = 0; i < 0x33; i++) {
        data_021c1ad4[i].unk_00 = 0xfff1;
        data_021c1a6c[i].unk_00 = data_021c1ad4[i].unk_00;
    }
}

extern "C" BOOL func_0203414c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1a6c[i].unk_00 = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *func_02034134(u32 i)
{
    if (i < 0x33) {
        return &data_021c1a6c[i].unk_00;
    }
    return &data_021c1a44.unk_00;
}

extern "C" BOOL func_0203411c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1ad4[i].unk_00 = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *func_02034104(u32 i)
{
    if (i < 0x33) {
        return &data_021c1ad4[i].unk_00;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void func_02034048(Unk_02034048_Pkt *p)
{
    u16 tmp = p->unk_00;
    u8 id = p->id;
    u32 f7 = p->f7;
    BOOL f6;
    if (p->f6 != 0) {
        f6 = TRUE;
    } else {
        f6 = FALSE;
    }
    s32 f8;
    if (p->f8 != 0) {
        f8 = 1;
    } else {
        f8 = 0;
    }
    if (p->id == Scene_GetCurrent()) {
        func_02034194(&tmp, f7, f6, f8, 0);
    } else if (SceneId_IsHouseRoom(id)) {
        void *r = _ZN9HouseData13func_02060550Ei(data_021e58a8, id);
        if (r != NULL) {
            if (f6) {
                _ZN9HouseRoom13func_02060808EPtj(r, &tmp, f7);
                func_0203414c(id, &tmp);
            } else {
                _ZN9HouseRoom13func_020607e0EPtj(r, &tmp, f7);
                func_0203411c(id, &tmp);
            }
        }
    } else if (f6) {
        func_0203414c(id, &tmp);
    } else {
        func_0203411c(id, &tmp);
    }
}

ItemId data_021c1a44;
ItemId data_021c1a6c[0x33];
ItemId data_021c1ad4[0x33];

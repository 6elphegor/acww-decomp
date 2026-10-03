#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgString;

// buffer interface (destination-side, member at +4)
class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// ---------------------------------------------------------------------------------------------------------------------

// Fixed 0x29 byte string holder
class Unk_020e0470 : public EncodedString {
public:
    Unk_020e0470();
    virtual ~Unk_020e0470();
    virtual u32 capacity();
    virtual u8 *data();

    s32 func_0206f828();

    /* 0x0e */ u8 unk_0e[0x29];
};

// String buffer wrapping a text renderer (TextLabel) at +0x3c
class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 func_0206fa1c();
    void func_0206f904(u8 a, u8 b, u32 c, u32 d);
    void func_0206fa28(s32 v);
    void func_0206fa4c();
    void func_0206fa74(s32 a, s32 b);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb04(u32 a, u32 b, u8 x, u8 y);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fbe4(u32 id, u8 x, u8 y);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
};

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u8 data_020de390;
}

extern "C" {
extern u32 data_020de394[];
}

extern "C" {
extern u32 gMelodyEditPattern[];
}

extern "C" {
extern u32 data_021ed2f8[];
}

extern "C" {
extern u32 data_021dfd8c[];
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
extern void *gCommManager;
}

extern "C" {
extern u8 data_021eceac[];
}

extern "C" {
extern u8 data_021e7f8c[];
}

extern "C" {
extern u8 data_021ed210[];
}

extern "C" {
extern u8 data_021ed22e[];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern u32 data_020c7c1c;
}

extern "C" {
typedef void (*Unk_0206f804_Fn)(u8 *, u32);
}

extern "C" {
extern Unk_0206f804_Fn data_020de3a8[];
}

extern "C" {
extern GameFontDesc gFontD;
}

extern "C" {
extern GameFontDesc gFontB;
}

extern "C" {
extern GameFontDesc gFontC;
}

extern "C" {
extern Unk_0206fd10_Mtx data_021cb69c;
}

extern "C" {
extern Unk_0206fde4_Mtx data_021cb6cc[];
}

extern "C" {
s32 Snd_PlaySe(u32 a);
}

extern "C" {
void *Hud_GetCountdown();
}

extern "C" {
s32 func_0208c134(void *a, u32 b, u32 c);
}

extern "C" {
s32 MI_CpuCopy8(void *src, void *dst, u32 n);
}

extern "C" {
void Melody_Pack(void *a, void *b);
}

extern "C" {
void Melody_ApplyEditPattern();
}

extern "C" {
void SaveVillagers_ClearTuneRequester(void *a);
}

extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
s32 LetterDelivery_QueueOutgoing(void *obj, s32 v);
}

extern "C" {
BOOL LetterDelivery_HasFreeOutgoingSlot(void);
}

extern "C" {
void func_020728d4(void *p);
}

extern "C" {
void func_020728a4(void *p, void *d, s32 n);
}

extern "C" {
void func_02072824(void *p, s32 a, s32 b);
}

extern "C" {
void func_02096f44(void *p);
}

extern "C" {
void func_02065c94();
}

extern "C" {
void *func_0208f158(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_0208f1a8(void *p, s32 v);
}

extern "C" {
void NetBuf_UnpackPair20(void *a, void *b, void *c);
}

extern "C" {
s32 FishCatch_StartRelease(u8 a, u32 b, void *c);
}

extern "C" {
s32 BottleThrow_SetTarget(void *a, u8 b);
}

extern "C" {
u8 *func_02095204(u8 x);
}

extern "C" {
BOOL HeldInsect_GetStage(u8 x);
}

extern "C" {
void HeldInsect_Start(u32 a, u8 b);
}

extern "C" {
s32 HeldInsect_Release(u8 a, s32 b);
}

extern "C" {
s32 Bbs_AddPost(void *p);
}

extern "C" {
s32 func_020512e0(const u8 *str, s32 len);
}

extern "C" {
s32 func_020512f8(const u8 *str, s32 len);
}

extern "C" {
BOOL func_020a78a4(Unk_020e0470 *buf, const void *src, s32 len);
}

extern "C" {
BOOL StrBuf_GetBytes(Unk_020e0470 *buf, u8 *dst, s32 size);
}

extern "C" {
void String_FormatNumber(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void String_Load(void *a, u8 *b, void *c);
}

extern "C" {
void String_Load2d(void *a, u8 *b, u32 c);
}

extern "C" {
u32 Msg_MeasureWidth(u32 arg);
}

extern "C" {
void _ZdlPv(void *p);
}

extern "C" {
TextLabel *MsgTextLabel_CreateBuffer(u32 a, u32 b, u32 c);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, u32 b, u32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
s32 Gfx2d_GetLayerBgIndex(u32 id);
}

extern "C" {
s32 Gfx2d_IsMainScreenLayer(u32 id);
}

extern "C" {
void func_01ffb46c(void *a, void *b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void MTX_Concat43(void *a, void *b, void *c);
}

extern "C" {
void MTX_Identity43_(void *p);
}

extern "C" {
s32 Item_GetFossilGroup(u16 *p);
}

extern "C" {
BOOL func_02070358(u32 a, u16 *p);
}

extern "C" {
void func_0206f53c(u32 x);
}

extern "C" {
void func_0206f56c(u8 *p);
}

extern "C" {
void func_0206f5a0(u8 *p);
}

extern "C" {
void func_0206f5ac(u8 *p, u32 code);
}

extern "C" {
void func_0206f604(u32 a, u32 b, ...);
}

extern "C" {
void func_0206f638(u8 v);
}

extern "C" {
u8 func_0206f644();
}

extern "C" {
void func_0206f650();
}

extern "C" {
void func_0206f668(u8 *p);
}

extern "C" {
void func_0206f6b8(u8 *p);
}

extern "C" {
void func_0206f6fc(u8 *p, u32 id);
}

extern "C" {
void func_0206f770(u8 *p, u32 id);
}

extern "C" {
void func_0206f7d0(u8 *p);
}

extern "C" {
void func_0206f804(u8 *p, u32 x);
}

extern "C" {
void func_0206f81c();
}

extern "C" {
BOOL func_0206f88c(MsgString *a, u8 *b, s32 len);
}

extern "C" {
void func_0206f920(MsgString *dst, const void *s, s32 len, BOOL a, u8 b);
}

extern "C" {
void func_0206f964(MsgString *a, u8 *b);
}

extern "C" {
void func_0206f994(MsgString *dst, const void *s, s32 len);
}

extern "C" {
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void func_0206f9e4(void *a, void *c, u8 v);
}

extern "C" {
void func_0206f9fc(void *a, u8 v);
}

extern "C" {
void func_0206fa10(void *a, u8 *p);
}

extern "C" {
void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);
}

extern "C" {
void func_0206fd64(void *a);
}

extern "C" {
void func_0206fd84(Unk_0206fd10_Vec *v);
}

extern "C" {
void func_0206fdb4(void *a, Unk_0206fd10_Vec *v);
}

extern "C" {
void func_0206fde4(u32 i);
}

extern "C" {
void func_0206fe0c(u32 i);
}

extern "C" {
s32 func_0206fe34(u32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
// prototypes (test harness)
void func_0206fa10(void *a, u8 *p);
void func_0206f9fc(void *a, u8 v);
void func_0206f9e4(void *a, void *c, u8 v);
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void func_0206f994(MsgString *dst, const void *s, s32 len);
void func_0206f964(MsgString *a, u8 *b);
void func_0206f920(MsgString *dst, const void *s, s32 len, BOOL a, u8 b);
BOOL func_0206f88c(MsgString *a, u8 *b, s32 len);


void Unk_020e0488::func_0206fbe4(u32 id, u8 x, u8 y) {
    s32 t = Gfx2d_GetLayerBgIndex(id);
    if (unk_3c != NULL) {
        unk_3c->unk_2c = t;
        if (Gfx2d_IsMainScreenLayer(id) != 0) {
            unk_3c->unk_50 = 2;
        } else {
            unk_3c->unk_50 = 1;
        }
        if (t == 4) {
            unk_3c->unk_55 = 1;
        } else {
            unk_3c->unk_55 = 0;
        }
        unk_3c->unk_39 = y;
        unk_3c->unk_38 = x;
    }
}

void Unk_020e0488::func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = MsgTextLabel_CreateVram(a, b, 2);
    func_0206fbe4(id, x, y);
    if (flag != 0) {
        unk_3c->unk_28 = &gFontC;
    }
}

void Unk_020e0488::func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = MsgTextLabel_CreateVram(a, b, 1);
    func_0206fbe4(id, x, y);
    if (flag != 0) {
        unk_3c->unk_28 = &gFontD;
    } else {
        unk_3c->unk_28 = &gFontB;
    }
}

void Unk_020e0488::func_0206fb04(u32 a, u32 b, u8 x, u8 y) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = MsgTextLabel_CreateBuffer(a, b, 2);
    if (unk_3c != NULL) {
        unk_3c->unk_39 = y;
        unk_3c->unk_38 = x;
        unk_3c->unk_58 = 2;
    }
}

void Unk_020e0488::func_0206fab4(s32 a, s32 b) {
    TextLabel *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        if (b != 0) {
            unk_3c->unk_57 = 1;
        } else {
            unk_3c->unk_57 = 0;
        }
        if (a != 0) {
            unk_3c->alignCenter();
        } else {
            unk_3c->unk_30 = 0;
        }
        unk_3c->requestRedraw();
    }
}

void Unk_020e0488::func_0206fa74(s32 a, s32 b) {
    TextLabel *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        if (a != 0) {
            unk_3c->alignCenter();
        } else {
            unk_3c->unk_30 = 0;
        }
        unk_3c->unk_30 = unk_3c->unk_30 + b;
        unk_3c->requestRedraw();
    }
}

void Unk_020e0488::func_0206fa4c() {
    TextLabel *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        unk_3c->alignRight();
        unk_3c->requestRedraw();
    }
}

void Unk_020e0488::func_0206fa28(s32 v) {
    TextLabel *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        unk_3c->unk_30 = v;
        unk_3c->requestRedraw();
    }
}

u32 Unk_020e0488::func_0206fa1c() { return Msg_MeasureWidth((u32)this + 0x12); }

void func_0206fa10(void *a, u8 *p) { String_Load2d(a, p, 0); }

void func_0206f9fc(void *a, u8 v) {
    u8 t = v;
    func_0206fa10(a, &t);
}

void func_0206f9e4(void *a, void *c, u8 v) {
    u8 t = v;
    String_Load(a, &t, c);
}

void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e) { String_FormatNumber(o, a, b, c, d, e); }

void func_0206f994(MsgString *dst, const void *s, s32 len) {
    Unk_020e0470 l;
    func_020a78a4(&l, s, len);
    dst->fromEncoded(&l, 0, 0);
}

void func_0206f964(MsgString *a, u8 *b) {
    Unk_020e0470 l;
    l.fromMsgString(a);
    StrBuf_GetBytes(&l, b, 0x29);
}

void func_0206f920(MsgString *dst, const void *s, s32 len, BOOL a, u8 b) {
    if (a == 0) {
        b = 0;
    }
    Unk_020e0470 l;
    func_020a78a4(&l, s, len);
    dst->fromEncoded(&l, a, b);
}

void Unk_020e0488::func_0206f904(u8 a, u8 b, u32 c, u32 d) {
    if (unk_3c != NULL) {
        unk_3c->setHighlight(a, b, c, d);
    }
}

BOOL func_0206f88c(MsgString *a, u8 *b, s32 len) {
    Unk_020e0470 l;
    l.fromMsgString(a);
    s32 n = func_020512f8(b, len);
    if (n != func_020512f8(l.unk_0e, len)) {
        return FALSE;
    }
    s32 i = 0;
    while (i < n) {
        u32 x = b[i];
        u32 y = l.unk_0e[i];
        if (x == 0x8d) {
            x = 0xb1;
        }
        if (y == 0x8d) {
            y = 0xb1;
        }
        if (x != y) {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

Unk_020e0470::Unk_020e0470() {}

Unk_020e0470::~Unk_020e0470() {}

u32 Unk_020e0470::capacity() { return 0x29; }

u8 *Unk_020e0470::data() { return unk_0e; }

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}

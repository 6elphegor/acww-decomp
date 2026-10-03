#include "types.h"

// ======== types of unk_020742f4.cpp ========


struct Unk_02074c4c_Color {
    u8 r, g, b;
    u8 col[2];
};
// ======== types of unk_02074c4c.cpp ========

struct Unk_02074c4c_G { u8 pad[0x64]; u32 unk_64; u32 unk_68; };
// ======== types of unk_02075558.cpp ========

struct Unk_02075558_Obj {
    u32 pad_00[0x19];
    void *unk_64;
};struct Unk_02075bc4_Buf {
    u8 kind : 2;
    u8 pad0 : 6;
    u8 pad1 : 7;
    u8 flag : 1;
    u16 pos;
    u16 id;
    u16 pad2;
};
struct Unk_02075bc4_Q {
    u8 a : 3;
    u8 pad0 : 5;
    u8 pad1 : 7;
    u8 b : 1;
    u8 c : 1;
    u8 pad2 : 7;
};
struct Unk_02075bc4_Pt {
    s32 x, y;
};


struct Unk_02075680_Pad {
    s32 v[1];
    Unk_02075680_Pad() {}
    ~Unk_02075680_Pad() {}
};
// ======== types of unk_02075e60.cpp ========
struct Unk_02075e98_Nib { u8 lo : 4; u8 hi : 4; };

// ======== types of unk_020767f8.cpp ========
struct Unk_02076d68_E;

struct Unk_02076d68_E {
    u8 b[0x1c];
};

struct Unk_020767f8_Tag {
    u8 b;
    u16 h;
};

struct Unk_02076c24_S {
    s32 unk_00;
    u8 unk_04;
    u8 pad[3];
    u8 unk_08[4];
};

struct Unk_02076fc8_D {
    u8 a, b, c;
};


class EncodedStringBase;
class EncodedString {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 unk_04[10];
};

class Unk_020e055c : public EncodedString {
public:
    Unk_020e055c();
    virtual ~Unk_020e055c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_0e[0xb2];
};
// ======== types of unk_02077138.cpp ========


class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// Source-side text buffer of 0xc1 bytes.
class Unk_020e0574 : public MsgString {
public:
    Unk_020e0574();
    virtual ~Unk_020e0574();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[0xaf];
};

// Record of 0xc0 data bytes plus a few state bytes.
class Unk_020772cc {
public:
    Unk_020772cc();
    ~Unk_020772cc();

    void func_020772cc();
    BOOL func_020772dc();
    void func_020772f0(s32 i);
    BOOL func_02077310(s32 i);
    u8 func_02077330();
    u8 func_02077338();
    u8 func_02077340();
    void func_02077348(u8 *src);

    /* 0x00 */ u8 unk_00[0xc0];
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3;
};

class Unk_02077198 {
public:
    Unk_02077198();
    ~Unk_02077198();

    void func_02077198(s32 idx);
    void func_020771d8(u16 v);
    u16 func_020771e4();
    Unk_020772cc *func_020771f0();
    u8 func_02077230();
    void func_0207723c();
    void func_02077264();
    Unk_020772cc *func_02077278(s32 idx);
    Unk_020772cc *func_02077280(s32 idx);

    /* 0x000 */ Unk_020772cc unk_000[15];
    /* 0xb7c */ u16 unk_b7c;
    /* 0xb7e */ u8 unk_b7e;
};
// ======== types of unk_02077a54.cpp ========


struct Unk_020781ec_Elem {
    u8 pad_00[0x1d];
    u8 unk_1d;
    u8 pad_1e[0x2c - 0x1e];
};

struct Unk_020781ec_Data {
    Unk_020781ec_Elem unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u8 pad_165[3];
    s32 unk_168;
    s8 unk_16c;
};

class Unk_021cc7d0 {
public:
    s32 unk_00;
    u8 pad_04[0x78];
    Unk_021cc7d0() { unk_00 = -1; }
    ~Unk_021cc7d0();
};

// ======== unk_02077a54.cpp ========
namespace n7 {

typedef u32 Unk_02077a54_Fn;extern "C" {
extern void *gCommManager;
}
extern "C" {
extern void *data_021cc8b0[];
}
extern "C" {
extern void *data_021cc914[];
}
extern "C" {
extern void *data_021cc8e8[];
}
extern "C" {
extern void *data_021c61a4;
}
extern "C" {
extern void *data_021c61a8;
}
extern "C" {
extern void *data_021c61ac;
}
extern "C" {
extern u8 data_020e416c;
}
extern "C" {
extern void *gSceneBlockMap;
}
extern "C" {
extern void *gCurrentHeap;
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *);
}
extern "C" {
void _ZN11CommManager11beginRecordEv(void *);
}
extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *, void *, s32);
}
extern "C" {
void _ZN11CommManager9endRecordEjj(void *, s32, s32);
}
extern "C" {
void func_02077ab4(u8 *, s32, s32);
}
extern "C" {
void *func_02077c0c(void **, s32);
}
extern "C" {
void *func_02077cd4(void **, s32);
}
extern "C" {
void *func_02077dc4(void **, s32);
}
extern "C" {
void func_02077b98(void **);
}
extern "C" {
void func_02077bd4(void **);
}
extern "C" {
void func_02077c68(void **);
}
extern "C" {
void func_02077ca4(void **);
}
extern "C" {
void func_02077d30(void **);
}
extern "C" {
void func_02077d58(void **);
}
extern "C" {
void func_020e885c(void *);
}
extern "C" {
void func_020e877c(void *);
}
extern "C" {
void *FrameHeap_Create(s32, void *);
}
extern "C" {
void *Heap_AllocAligned(void *, s32, s32);
}
extern "C" {
void File_LoadToBuffer(void *, void *, s32);
}
extern "C" {
void func_0205b944();
}
extern "C" {
void func_0205b960();
}
extern "C" {
void func_0205b9a4();
}
extern "C" {
void func_0205b9c0();
}
extern "C" {
void func_0205ba00();
}
extern "C" {
void func_0205ba1c();
}
extern "C" {
void func_0205b8a0();
}
extern "C" {
void func_0205b8c0(void *);
}
extern "C" {
s32 func_02084fbc();
}
extern "C" {
s32 func_020812f4();
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 func_020b491c(s32);
}
extern "C" {
s32 func_020b4928(s32);
}
extern "C" {
void FieldPos_ToUnit(s32 *, s32 *, s32);
}
extern "C" {
void *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, s32);
}
extern "C" {
BOOL func_0204e418(void *, s32, s32);
}
extern "C" {
BOOL Item_IsNormalItem(void *);
}
extern "C" {
BOOL func_020780e4(s32, s32);
}
extern "C" {
s32 func_02078104(s32, s32);
}
extern "C" {
BOOL func_02077eb0(s32, s32, s32, s32 *, s32 *);
}
extern "C" {
BOOL func_02077f68(s32, s32, void *);
}
extern "C" {
BOOL Item_IsFurniture(void *);
}
extern "C" {
BOOL Item_IsTreeStage0(void *);
}
extern "C" {
s32 NpcRegistry_FindAt(s32, s32);
}
extern "C" {
void *func_020947f0(s32);
}
extern "C" {
s32 func_020951ec(s32);
}
extern "C" {
struct Unk_020781ec_Data *func_020783f8();
}
extern "C" {
void *func_020784f4(void *);
}
extern "C" {
s32 func_020784e0(void *);
}
extern "C" {
s32 func_02078384(void *);
}
extern "C" {
s32 func_020783d4(void *);
}
extern "C" {
s32 func_02078400(void *);
}
extern "C" {
void *func_020805c4(void *);
}
extern "C" {
BOOL func_020030b4(void *);
}
extern "C" {
s32 Villager_GetResidentStatus(void *);
}
extern "C" {
s32 Villager_PickShownFurniture(void *);
}
extern "C" {
void *Villager_GetMemory(void *, s32);
}
extern "C" {
BOOL func_02080f94(void *);
}
extern "C" {
void func_02080a88(void *);
}
extern "C" {
void func_02080a54(void *);
}
extern "C" {
void func_02080a18(void *);
}
extern "C" {
void func_020809dc(void *);
}
extern "C" {
void func_020809a0(void *);
}
extern "C" {
void func_02080964(void *);
}
extern "C" {
void func_02080930(void *);
}
extern "C" {
void func_02080078(void *, s32);
}
extern "C" {
void func_0207ff14(void *, s32);
}
extern "C" {
void func_02077a54(s32 a, s32 b);
}
extern "C" {
void func_02077a9c(s32 *a, s32 *b, u8 *p);
}
extern "C" {
void func_02077ab4(u8 *p, s32 a, s32 b);
}
extern "C" {
void *func_02077ac4(s32 *p);
}
extern "C" {
void func_02077ad8(s32 *p, s32 x);
}
extern "C" {
void func_02077af8();
}
extern "C" {
void func_02077afc(s32 *p);
}
extern "C" {
void *func_02077b04(s32 *p);
}
extern "C" {
void func_02077b18(s32 *p, s32 x);
}
extern "C" {
void func_02077b38();
}
extern "C" {
void func_02077b3c(s32 *p);
}
extern "C" {
void *func_02077b44(s32 *p);
}
extern "C" {
void func_02077b58(s32 *p, void *dst);
}
extern "C" {
void func_02077b84(s32 *p, s32 v);
}
extern "C" {
void func_02077b80(s32 *p, s32 v);
}


static inline BOOL Unk_02077d58_IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}extern "C" {
void func_02077c2c(void *);
}
extern "C" {
void func_02077cdc();
}
extern "C" {
void func_02077dcc();
}
extern "C" {
static inline s32 Unk_02077d58_Count()
{
    s32 t;
    if (Unk_02077d58_IsZero(data_020e416c)) {
        t = func_020812f4();
    } else {
        t = func_020b491c(func_020b50e8());
        t -= func_020b4928(func_020b50e8());
    }
    return t;
}
}
extern "C" {
void func_02077de4(void *);
}
extern "C" {
void func_02077cf4(void *);
}
extern "C" {
void func_02077c2c(void *);
}
extern "C" {
static inline BOOL Unk_02077f68_R(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
}
extern "C" {
static inline BOOL Unk_02077f68_C2(u16 *p)
{
    BOOL k2 = TRUE, k1 = TRUE;
    u32 v = *p;
    if (v != 0x25 && v != 0x5c) k1 = FALSE;
    if (!k1) {
        if (v != 0xc7) k2 = FALSE;
    }
    return k2;
}
}
extern "C" {
static inline BOOL Unk_02077f68_C9(u16 *p)
{
    BOOL h = TRUE, g = TRUE, f = TRUE, e = TRUE, d = TRUE, cc = TRUE, b = TRUE, a = FALSE;
    u32 v = *p;
    if (v <= 5) a = TRUE;
    if (!a) {
        if (v < 6 || v > 11) b = FALSE;
    }
    if (!b) {
        if (v < 12 || v > 17) cc = FALSE;
    }
    if (!cc) {
        if ((v < 18 || v > 25) && v != 0x1c) d = FALSE;
    }
    if (!d) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) e = FALSE;
    }
    if (!e) {
        if (v != 0x1a) f = FALSE;
    }
    if (!f) {
        if (v != 0xa4) g = FALSE;
    }
    if (!g) {
        if (v != 0x1d) h = FALSE;
    }
    return h;
}
}


extern "C" void func_02077ab4(u8 *p, s32 a, s32 b)
{
    *p = ((a << 4) & 0xf0) | (b & 0xf);
}
extern "C" void func_02077a9c(s32 *a, s32 *b, u8 *p)
{
    *a = (*p >> 4) & 0xf;
    *b = *p & 0xf;
}
extern "C" void func_02077a54(s32 a, s32 b)
{
    u8 buf;
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        func_02077ab4(&buf, a, b);
        void *t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &buf, 1);
        _ZN11CommManager9endRecordEjj(t, 0x36, 4);
    }
}
}

// ======== unk_02077138.cpp ========
namespace n6 {
extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}
extern "C" {
void Mem_Clear(void *p, u32 n);
}
extern "C" {
void func_02076fc8(u32 a, const char *s);
}
extern "C" {
u16 NetBuf_ReadU16(void *p);
}
extern "C" {
void NetBuf_WriteU16(void *p, u16 v);
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *g);
}
extern "C" {
s32 _ZN11CommManager11beginRecordEv(void *g);
}
extern "C" {
s32 _ZN11CommManager11writeRecordEPhj(void *g, void *p, s32 n);
}
extern "C" {
s32 _ZN11CommManager9endRecordEjj(void *g, s32 a, s32 b);
}
extern "C" {
u32 func_0207e334(u32 a);
}
extern "C" {
BOOL SaveVillagers_IsValidIndex(u32 a);
}
extern "C" {
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
}
extern "C" {
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
}
extern "C" {
void _ZN9MsgString5clearEv(void *p);
}
extern "C" {
extern void *gCommManager;
}
extern "C" {
extern char *data_020e0544;
}
extern "C" {
void func_02077a9c(u32 *o0, u32 *o1, u8 *src);
}
extern "C" {
void func_02077ab4(u8 *out, s32 a, s32 b);
}
extern "C" {
void func_02077404(s32 *out, u16 *dst, u8 *src);
}
extern "C" {
void func_02077428(u8 *out, s32 a, u16 *src);
}
extern "C" {
void func_02077488(u32 a, u16 *b);
}
extern "C" {
void func_02077508(u8 *out, s32 a, u16 *b);
}
extern "C" {
void func_02077558(u32 a, u16 *b);
}
extern "C" {
void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e);
}
extern "C" {
void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e);
}
extern "C" {
void func_020776fc(u32 a, u32 b, u32 c);
}
extern "C" {
void func_02077734(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020777a0(u8 *out, s32 a, s32 b, u32 c);
}
extern "C" {
void func_020777f0(u32 a, u32 b, u32 c);
}
extern "C" {
void func_0207785c(u8 *out, s32 a, s32 b, u16 *c);
}
extern "C" {
void func_020778b4(u32 a, u32 b, u32 c);
}
extern "C" {
void func_02077944(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020773b8(u32 a, u16 *b);
}
extern "C" {
void func_020779d4(u32 a, u32 b);
}
extern "C" {
void func_02077a54(u32 a, u32 b);
}


static inline BOOL R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}



extern "C" void func_02077a1c(u32 a, u32 b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_02077a54(a, b);
        }
    }
}

extern "C" void func_020779d4(u32 a, u32 b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 1);
        _ZN11CommManager9endRecordEjj(g, 0x37, 4);
    }
}

extern "C" void func_0207799c(u32 a, u32 b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_020779d4(a, b);
        }
    }
}

extern "C" void func_02077944(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 1);
        _ZN11CommManager11writeRecordEPhj(g, &c, 1);
        _ZN11CommManager9endRecordEjj(g, 0x38, 4);
    }
}

extern "C" void func_0207790c(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_02077944(a, b, c);
        }
    }
}

extern "C" void func_020778b4(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 1);
        _ZN11CommManager11writeRecordEPhj(g, &c, 1);
        _ZN11CommManager9endRecordEjj(g, 0x39, 4);
    }
}

extern "C" void func_0207787c(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_020778b4(a, b, c);
        }
    }
}

extern "C" void func_0207785c(u8 *out, s32 a, s32 b, u16 *c) {
    func_02077ab4(out + 2, a, b);
    NetBuf_WriteU16(out, *c);
}

extern "C" void func_0207783c(u32 *o0, u32 *o1, u16 *o2, u8 *src) {
    func_02077a9c(o0, o1, src + 2);
    *o2 = NetBuf_ReadU16(src);
}

extern "C" void func_020777f0(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[3];
        func_0207785c(buf, a, b, (u16 *)c);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 3);
        _ZN11CommManager9endRecordEjj(g, 0x3e, 4);
    }
}

extern "C" void func_020777b8(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_020777f0(a, b, c);
        }
    }
}

extern "C" void func_020777a0(u8 *out, s32 a, s32 b, u32 c) {
    out[0] = ((a << 4) & 0xf0) | (b & 0xf);
    out[1] = c;
}

extern "C" void func_02077780(s32 *o0, u8 *o1, u8 *o2, u8 *src) {
    *o0 = (src[0] >> 4) & 0xf;
    *o1 = src[0] & 0xf;
    *o2 = src[1];
}

extern "C" void func_02077734(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[2];
        func_020777a0(buf, a, c, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 2);
        _ZN11CommManager9endRecordEjj(g, 0x3c, 4);
    }
}

extern "C" void func_020776fc(u32 a, u32 b, u32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_02077734(a, b, c);
        }
    }
}
extern "C" void func_020776f0(u32 a, u32 b) { func_020776fc(a, b, 0); }
extern "C" void func_020776e4(u32 a) { func_020776fc(a, 0, 1); }
extern "C" void func_020776d8(u32 a) { func_020776fc(a, 1, 2); }
extern "C" void func_020776cc(u32 a, u32 b) { func_020776fc(a, b, 3); }
extern "C" void func_020776c0(u32 a, u32 b) { func_020776fc(a, b, 4); }

extern "C" void func_020776b4(u32 a, u32 b) { func_020776fc(a, b, 5); }

extern "C" void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e) {
    out[2] = (d & 7) | (((a << 4) & 0xf0) | ((e & 1) << 3));
    out[3] = b;
    NetBuf_WriteU16(out, *c);
}

extern "C" void func_0207764c(s32 *o0, u8 *o1, u16 *o2, s32 *o3, u8 *o4, u8 *src) {
    *o0 = (src[2] >> 4) & 0xf;
    *o3 = src[2] & 7;
    *o4 = (src[2] >> 3) & 1;
    *o1 = src[3];
    *o2 = NetBuf_ReadU16(src);
}

extern "C" void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[4];
        func_02077684(buf, a, b, (u16 *)c, d, e ? 1 : 0);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 4);
        _ZN11CommManager9endRecordEjj(g, 0x3d, 4);
    }
}

extern "C" void func_020775a0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_020775e8(a, b, c, d, e);
        }
    }
}

extern "C" void func_02077558(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf[3];
        func_02077508(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 3);
        _ZN11CommManager9endRecordEjj(g, 0x3f, 4);
    }
}

extern "C" void func_02077520(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_02077558(a, b);
        }
    }
}

extern "C" void func_02077508(u8 *out, s32 a, u16 *b) {
    NetBuf_WriteU16(out, *b);
    out[2] = a;
}

extern "C" void func_020774f0(s32 *out, u16 *dst, u8 *src) {
    *out = src[2];
    *dst = NetBuf_ReadU16(src);
}

extern "C" void func_02077488(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        if (R1(b, 0x11a8, 0x12a7)) {
            u8 buf[3];
            func_02077508(buf, a, b);
            void *g = gCommManager;
            _ZN11CommManager11beginRecordEv(g);
            _ZN11CommManager11writeRecordEPhj(g, buf, 3);
            _ZN11CommManager9endRecordEjj(g, 0x3a, 4);
        }
    }
}

extern "C" void func_02077450(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_02077488(a, b);
        }
    }
}

extern "C" void func_02077428(u8 *out, s32 a, u16 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        NetBuf_WriteU16(out + i * 2, *src);
        src++;
    }
    out[8] = a;
}

extern "C" void func_02077404(s32 *out, u16 *dst, u8 *src) {
    s32 i;
    *out = src[8];
    for (i = 0; i < 4; i++) {
        *dst = NetBuf_ReadU16(src + i * 2);
        dst++;
    }
}

extern "C" void func_020773b8(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) && b) {
        u8 buf[9];
        func_02077428(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 9);
        _ZN11CommManager9endRecordEjj(g, 0x3b, 4);
    }
}

extern "C" void func_02077380(u32 a, u16 *b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        a = func_0207e334(a);
        if (SaveVillagers_IsValidIndex(a)) {
            func_020773b8(a, b);
        }
    }
}}

Unk_020772cc::Unk_020772cc() {
    using namespace n6;}
namespace n6 {
}

Unk_020772cc::~Unk_020772cc() {
    using namespace n6;}
namespace n6 {


// ---------------------------------------------------------------------------
extern "C" u8 *func_02077374(u8 *p) { return p; }}

void Unk_020772cc::func_02077348(u8 *src) {
    using namespace n6;
    unk_c0 = src[0];
    unk_c1 = src[1];
    unk_c2 = src[2];
    unk_c3 = 0;
    Mem_Clear(this, 0xc0);
}
namespace n6 {
}

u8 Unk_020772cc::func_02077340() {
    using namespace n6; return unk_c0; }
namespace n6 {
}

u8 Unk_020772cc::func_02077338() {
    using namespace n6; return unk_c1; }
namespace n6 {
}

u8 Unk_020772cc::func_02077330() {
    using namespace n6; return unk_c2; }
namespace n6 {
}

BOOL Unk_020772cc::func_02077310(s32 i) {
    using namespace n6;
    if (i < 0 || i >= 4) return TRUE;
    if (unk_c3 & (1 << i)) return TRUE;
    return FALSE;
}
namespace n6 {
}

void Unk_020772cc::func_020772f0(s32 i) {
    using namespace n6;
    if (i >= 0 && i < 4) {
        unk_c3 |= (u8)(1 << i);
    }
}
namespace n6 {
}

BOOL Unk_020772cc::func_020772dc() {
    using namespace n6;
    if (unk_c3 & 0x10) return TRUE;
    return FALSE;
}
namespace n6 {
}


void Unk_020772cc::func_020772cc() {
    using namespace n6; unk_c3 |= 0x10; }
namespace n6 {
}

Unk_02077198::Unk_02077198() {
    using namespace n6;}
namespace n6 {
}


Unk_02077198::~Unk_02077198() {
    using namespace n6;}
namespace n6 {
}

Unk_020772cc *Unk_02077198::func_02077280(s32 idx) {
    using namespace n6; return &unk_000[idx]; }
namespace n6 {
}


Unk_020772cc *Unk_02077198::func_02077278(s32 idx) {
    using namespace n6; return func_02077280(idx); }
namespace n6 {
}


void Unk_02077198::func_02077264() {
    using namespace n6;
    unk_b7e = 0;
    unk_b7c = 0;
}
namespace n6 {
}


void Unk_02077198::func_0207723c() {
    using namespace n6;
    func_02077264();
    func_02076fc8(0, data_020e0544);
    func_02076fc8(1, data_020e0544);
}
namespace n6 {
}


u8 Unk_02077198::func_02077230() {
    using namespace n6; return unk_b7e; }
namespace n6 {
}


Unk_020772cc *Unk_02077198::func_020771f0() {
    using namespace n6;
    if (unk_b7e < 15) {
        unk_b7e++;
        return &unk_000[unk_b7e - 1];
    } else {
        func_02077198(0);
        unk_b7e = 15;
        return &unk_000[unk_b7e - 1];
    }
}
namespace n6 {
}

u16 Unk_02077198::func_020771e4() {
    using namespace n6; return unk_b7c; }
namespace n6 {
}


void Unk_02077198::func_020771d8(u16 v) {
    using namespace n6; unk_b7c = v; }
namespace n6 {
}


void Unk_02077198::func_02077198(s32 idx) {
    using namespace n6;
    s32 i;
    for (i = idx; i < unk_b7e - 1; i++) {
        MI_CpuCopy8(&unk_000[i + 1], &unk_000[i], 0xc4);
    }
    unk_b7e--;
}
namespace n6 {
}

Unk_020e0574::Unk_020e0574() {
    using namespace n6; clear(); }
namespace n6 {
}

Unk_020e0574::~Unk_020e0574() {
    using namespace n6;}
namespace n6 {
}

u32 Unk_020e0574::vfunc_08() {
    using namespace n6; return 0xc1; }
namespace n6 {
}


u8 *Unk_020e0574::vfunc_0c() {
    using namespace n6; return unk_12; }
namespace n6 {
}

// ======== unk_020767f8.cpp ========
namespace n5 {
struct Unk_02076f28_T;
struct Unk_02076ff0_Obj;
struct Unk_02077040_A;
struct Unk_02077040_B;
extern "C" {
void MI_CpuCopy8(const void *, void *, u32);
}
extern "C" {
void _ZN11CommManager13appendControlEPvj(void *ctx, const void *p, u32 n);
}
extern "C" {
void *_ZN12Unk_0209ada413func_0209ada4Ev(void *);
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ada0Ev(void *);
}
extern "C" {
void *func_0207aa78(s32 i);
}
extern "C" {
void func_0207857c(void *p, u32 v);
}
extern "C" {
void *func_02078578(void *p);
}
extern "C" {
u32 func_02078580(void *p);
}
extern "C" {
u32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
}
extern "C" {
u32 _ZN12Unk_0209ada413func_0209ab94Ev(void *);
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ad54EhPth(void *a, u32 b, u32 c, u32 d);
}
extern "C" {
extern u8 *gCommManager;
}
extern "C" {
extern u8 *gNetHeap;
}
extern "C" {
s32 Net_GetMode(void);
}
extern "C" {
s32 Net_GetMyAid(void);
}
extern "C" {
BOOL _ZN11CommManager12isSlotActiveEi(void *g, s32 i);
}
extern "C" {
BOOL _ZN11CommManager7isMyAidEj(void *g, s32 i);
}
extern "C" {
BOOL _ZN11CommManager13getSendCreditEi(void *g, s32 i);
}
extern "C" {
void Heap_Free(void *g, s32 a);
}
extern "C" {
void Heap_AllocAligned(void *g, s32 a, s32 b);
}
extern "C" {
void OverlayMgr_GetInfo(void *p);
}
extern "C" {
void FS_LoadOverlayImage(void *p);
}
extern "C" {
void FS_StartOverlay(void *p);
}
extern "C" {
void FS_EndOverlay(void *p);
}
extern "C" {
void func_020e9d94(void);
}
extern "C" {
void func_020ea3dc(void);
}
extern "C" {
void func_020ea3c4(void);
}
extern "C" {
void func_020ea418(void *p, u32 v);
}
extern "C" {
void func_020ea3d0(void *p, u32 v);
}
extern "C" {
void Mem_Clear(void *p, u32 n);
}
extern "C" {
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
}
extern "C" {
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
}
extern "C" {
s32 func_020e9d7c(void);
}
extern "C" {
u64 func_020ea34c(u32 a);
}
extern "C" {
BOOL func_020ea358(u32 ctx, void *out, u64 key);
}
extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}
extern "C" {
s32 func_020e9d88(void *p, void *q);
}
extern "C" {
void _ZN12Unk_0207719813func_02077230Ev(void *p);
}
extern "C" {
void *_ZN12Unk_0207719813func_020771f0Ev(void *p);
}
extern "C" {
void Clock_GetDate(void *p);
}
extern "C" {
void _ZN12Unk_020772cc13func_02077348EPh(void *p, void *q);
}
extern "C" {
void _ZN12Unk_020772cc13func_020772ccEv(void *p);
}
extern "C" {
u8 *func_02077374(void *p);
}
extern "C" {
void _ZN12Unk_020e0574C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0574D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0488C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0488D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0470C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0470D1Ev(void *p);
}
extern "C" {
void *Msg_SkipLines(void *p, s32 i);
}
extern "C" {
void _ZN9MsgString7setLineEPh(void *p, void *q);
}
extern "C" {
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *p, void *q);
}
extern "C" {
void _ZN9MsgString5clearEv(void *p);
}
extern "C" {
void StrBuf_GetBytes(void *p, void *q, u32 n);
}
extern "C" {
s32 _ZN12Unk_020e047013func_0206f828Ev(void *p);
}
extern "C" {
void MailText_LoadBbs(void *a, void *b, u32 c);
}
extern "C" {
void func_020a791c(void *p);
}
extern "C" {
void func_020a78ac(void *p);
}
extern "C" {
void _ZdlPv(void *);
}
extern "C" {
void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e);
}
extern "C" {
void _ZN13DwcFriendDataD1Ev(void *p);
}
extern "C" {
void _ZN13DwcFriendDataC1Ev(void *p);
}
extern "C" {
void FriendEntry_GetFriendData(void *p);
}
extern "C" {
void FriendEntry_Clear(void *p);
}
extern "C" {
void DwcFriendData_Clear(void *p);
}
extern "C" {
void *FriendEntry_Copy(void *p, void *q);
}
extern "C" {
void *FriendEntry_Destruct(void *p);
}
extern "C" {
void *FriendEntry_Construct(void *p);
}
extern "C" {
BOOL DwcFriendData_IsValid(void);
}
extern "C" {
void NetBuf_Unpack20(u8 *p, u32 *out, u8 *out2);
}
extern "C" {
void NetBuf_UnpackPair20(u8 *p, u32 *out, u32 *x);
}
extern "C" {
void NetBuf_PackPair20(u8 *p, s32 v, s32 x);
}
extern "C" {
void NetBuf_Pack20(u8 *p, s32 v, u8 hi);
}
extern "C" {
BOOL func_02077040(void *self, void *p);
}
extern "C" {
BOOL Comm_HasSendCredit(u32 mask);
}
extern "C" {
u64 _ll_mul(u64 a, u64 b);
}
extern "C" {
Unk_02076d68_E *FriendList_GetEntries(void);
}
extern "C" {
u32 DwcFriendData_GetBytes(void *);
}
extern "C" {
void func_02077118(void *a, u32 b, u32 c);
}
extern "C" {
s32 DwcFriendData_IsFriendKey(void);
}
extern "C" {
extern u8 data_021e87d8[];
}
extern "C" {
extern u8 data_021edb68[];
}



struct Unk_02076f28_T {
    s32 a, b, c;
    ~Unk_02076f28_T() { _ZN13DwcFriendDataD1Ev(this); }
};

struct Unk_02076ff0_Obj {
    u32 pad[0xd8 / 4];
    Unk_02076ff0_Obj() { _ZN12Unk_020e0574C1Ev(this); }
    ~Unk_02076ff0_Obj() { _ZN12Unk_020e0574D1Ev(this); }
};

struct Unk_02077040_A { u32 pad[0x40 / 4]; Unk_02077040_A() { _ZN12Unk_020e0488C1Ev(this); } ~Unk_02077040_A() { _ZN12Unk_020e0488D1Ev(this); } };
struct Unk_02077040_B { u32 pad[0x3c / 4]; Unk_02077040_B() { _ZN12Unk_020e0470C1Ev(this); } ~Unk_02077040_B() { _ZN12Unk_020e0470D1Ev(this); } };


extern "C" void func_02077118(void *a, u32 b, u32 c) {
    volatile u8 v = *data_021edb68;
    v = (u8)b;
    MailText_LoadBbs(a, (void *)&v, c);
}}


Unk_020e055c::Unk_020e055c() {
    using namespace n5;}
namespace n5 {
}

Unk_020e055c::~Unk_020e055c() {
    using namespace n5;}
namespace n5 {
}

u32 Unk_020e055c::vfunc_08() {
    using namespace n5; return 0xc0; }
namespace n5 {
}

u8 *Unk_020e055c::vfunc_0c() {
    using namespace n5; return unk_0e; }
namespace n5 {


extern "C" BOOL func_02077040(void *self, void *r1) {
    Unk_02077040_A o1;
    Unk_02077040_B o2;
    u8 *buf = func_02077374(self);
    s32 n = 0;
    s32 i = n;
    for (; i < 6; i++) {
        void *e = Msg_SkipLines((u8 *)r1 + 0x12, i);
        if (e != NULL) {
            _ZN9MsgString7setLineEPh(&o1, e);
            _ZN13EncodedString13fromMsgStringEP9MsgString(&o2, &o1);
            StrBuf_GetBytes(&o2, buf + n, 0x28);
            n = n + _ZN12Unk_020e047013func_0206f828Ev(&o2);
            buf[n] = 0x86;
            n = n + 1;
        } else {
            _ZN9MsgString5clearEv(&o1);
            buf[n] = 0x86;
            n++;
        }
    }
    return TRUE;
}

extern "C" void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_02076ff0_Obj o;
    u8 l[3];
    func_02077118(&o, a, b);
    void *r = _ZN12Unk_0207719813func_020771f0Ev(data_021e87d8);
    l[2] = c;
    l[1] = d;
    l[0] = e;
    _ZN12Unk_020772cc13func_02077348EPh(r, l);
    func_02077040(r, &o);
}

extern "C" void func_02076fc8(u32 a, u32 b) {
    Unk_02076fc8_D d;
    Clock_GetDate(&d);
    func_02076ff0(a, b, d.c, d.b, d.a);
}

extern "C" void func_02076f88(void *dst) {
    u32 loc;
    void *r = _ZN12Unk_0207719813func_020771f0Ev(data_021e87d8);
    Clock_GetDate(&loc);
    _ZN12Unk_020772cc13func_02077348EPh(r, &loc);
    _ZN12Unk_020772cc13func_020772ccEv(r);
    MI_CpuCopy8(dst, func_02077374(r), 0xc0);
}

extern "C" void func_02076f78(void) { _ZN12Unk_0207719813func_02077230Ev(data_021e87d8); }

extern "C" void _ZN13DwcFriendDataC1Ev(void *) {}
extern "C" void _ZN13DwcFriendDataD1Ev(void *) {}

extern "C" void *DwcFriendData_Copy(void *p, void *q) {
    MI_CpuCopy8(q, p, 12);
    return p;
}

extern "C" s32 DwcFriendData_Compare(void *self, Unk_02076f28_T *src) {
    Unk_02076f28_T t = *src;
    return func_020e9d88(self, &t);
}

extern "C" void DwcFriendData_Clear(void *p) { MI_CpuFill8(p, 0, 0xc); }

extern "C" BOOL DwcFriendData_IsValid(void) {
    if (func_020e9d7c() != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL DwcFriendData_IsFriendKey(void) {
    if (func_020e9d7c() == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL DwcFriendData_FromCodeDigits(void *out, u8 *data, u32 ctx) {
    u8 tmp[12];
    u64 acc = 0;
    u64 i = 0;
    do {
        u64 m = _ll_mul(acc, 10);
        acc = m + (u32)data[i];
        i++;
    } while (i < 12);
    if (!func_020ea358(ctx, tmp, acc)) {
        return FALSE;
    }
    MI_CpuCopy8(tmp, out, 12);
    return TRUE;
}

extern "C" BOOL DwcFriendData_ToCodeDigits(u32 a, u8 *buf) {
    u64 v;
    s32 i;
    if (func_020e9d7c() != 2) {
        return FALSE;
    }
    v = func_020ea34c(a);
    for (i = 11; i >= 0; i--) {
        buf[i] = (u8)(v % 10);
        v = v / 10;
    }
    return TRUE;
}

extern "C" BOOL DwcFriendData_IsNotFriendKey(void) {
    if (DwcFriendData_IsFriendKey() == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 DwcFriendData_GetBytes(void *) {}

extern "C" void *FriendList_Construct(void *p) {
    __cxa_vec_ctor(p, 0x20, 0x1c, FriendEntry_Construct, FriendEntry_Destruct);
    return p;
}

extern "C" void *FriendList_Destruct(void *p) {
    __cxa_vec_cleanup(p, 0x20, 0x1c, FriendEntry_Destruct);
    return p;
}

extern "C" void FriendList_Clear(Unk_02076d68_E *base) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        FriendEntry_Clear(&base[i]);
    }
}

extern "C" Unk_02076d68_E *FriendList_GetEntries(void) {}

extern "C" void FriendList_Compact(void) {
    Unk_02076d68_E *base = FriendList_GetEntries();
    s32 i, n;
    n = 0;
    i = n;
    for (; i < 0x20; i++) {
        Unk_02076d68_E *e = &base[i];
        FriendEntry_GetFriendData(e);
        if (DwcFriendData_IsValid()) {
            if (i != n) {
                FriendEntry_Copy(&base[n], e);
                FriendEntry_Clear(e);
            }
            n++;
        }
    }
}
extern "C" void FriendList_SetChecksum(u8 *p, u16 v) { *(u16 *)(p + 0x380) = v; }

extern "C" u16 FriendList_GetChecksum(u8 *p) { return *(u16 *)(p + 0x380); }

extern "C" void *FriendEntry_Construct(void *p) {
    _ZN13DwcFriendDataC1Ev(p);
    return p;
}

extern "C" void *FriendEntry_Destruct(void *p) {
    _ZN13DwcFriendDataD1Ev(p);
    return p;
}

extern "C" void *FriendEntry_Copy(void *p, void *q) {
    MI_CpuCopy8(q, p, 0x1c);
    return p;
}


extern "C" void FriendEntry_Clear(void *pp) {
    u8 *p = (u8 *)pp;
    DwcFriendData_Clear(p);
    Mem_Clear(p + 0xc, 8);
    Mem_Clear(p + 0x14, 8);
}
extern "C" void FriendEntry_GetFriendData(void *p) {}
extern "C" u8 *func_02076cec(u8 *p) { return p + 0xc; }

extern "C" u8 *func_02076ce8(u8 *p) { return p + 0x14; }

extern "C" u8 *PlayerWifiData_Construct(u8 *p) {
    _ZN13DwcFriendDataC1Ev(p + 0x40);
    return p;
}

extern "C" u8 *PlayerWifiData_Destruct(u8 *p) {
    _ZN13DwcFriendDataD1Ev(p + 0x40);
    return p;
}

extern "C" void PlayerWifiData_Create(u8 *p) {
    func_020ea418(p, 0x41444d45);
    u32 r = DwcFriendData_GetBytes(p + 0x40);
    func_020ea3d0(p, r);
}
extern "C" void func_02076c94(void) { func_020ea3c4(); }
extern "C" void func_02076c8c(void) { func_020ea3dc(); }

extern "C" void func_02076c84(void) { func_020e9d94(); }

extern "C" void PlayerWifiData_GetDwcUserData(void) {}

extern "C" u8 *PlayerWifiData_GetOwnFriendData(u8 *p) { return p + 0x40; }

extern "C" void PlayerWifiData_SetChecksum(u8 *p, u16 v) { *(u16 *)(p + 0x4c) = v; }

extern "C" u16 PlayerWifiData_GetChecksum(u8 *p) { return *(u16 *)(p + 0x4c); }

}
Unk_021cc7d0::~Unk_021cc7d0() {}
namespace n5 {

extern "C" void OverlayHandle_Unload(Unk_02076c24_S *s) {
    FS_EndOverlay(s->unk_08);
    s->unk_00 = -1;
}

extern "C" void OverlayHandle_Load(Unk_02076c24_S *s, s32 v) {
    s->unk_04 = 1;
    s->unk_00 = v;
    OverlayMgr_GetInfo(s->unk_08);
    FS_LoadOverlayImage(s->unk_08);
    FS_StartOverlay(s->unk_08);
    s->unk_04 = 0;
}

extern "C" s32 Comm_AidToPeerIndex(s32 x) {
    if (x >= Net_GetMyAid()) {
        x--;
    }
    return x;
}

extern "C" void CommPacket_SetAckHeader(u8 *p, s32 a) { *p = a & 3; }

extern "C" void CommPacket_SetHeader(u8 *p, s32 a, s32 b) { *p = ((b & 0x1f) << 2) | 0x80 | (a & 3); }

extern "C" BOOL CommPacket_IsControl(u8 *p) {
    if ((*p & 0x80) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 CommPacket_GetAck(u8 *p) { return *p & 3; }

extern "C" u32 CommPacket_GetType(u8 *p) { return (*p >> 2) & 0x1f; }

extern "C" void NetHeap_Alloc(s32 a, s32 b) { Heap_AllocAligned(gNetHeap, a, b); }

extern "C" void NetHeap_Free(s32 a) { Heap_Free(gNetHeap, a); }

extern "C" BOOL Comm_HasSendCredit(u32 mask) {
    s32 i = 3;
    void *g = gCommManager;
    u32 one = 1;
    for (; i >= 0; i--) {
        if (!_ZN11CommManager12isSlotActiveEi(g, i)) continue;
        if (_ZN11CommManager7isMyAidEj(g, i)) continue;
        u32 t = (u16)(one << i);
        t &= mask;
        if (t == 0) continue;
        if (_ZN11CommManager13getSendCreditEi(g, i)) continue;
        return FALSE;
    }
    return TRUE;
}

extern "C" void Comm_HasSendCreditAll(void) { Comm_HasSendCredit(0xf); }

extern "C" BOOL Comm_IsWifi(void) {
    s32 r = Net_GetMode();
    switch (r) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

extern "C" void CommRecord_PackSource(u8 *p, s32 v, s32 w) { p[0] = ((w << 6) & 0xc0) | (v & 0x3f); }

extern "C" void CommRecord_UnpackSource(u8 *p, u8 *a, u8 *out) {
    if (out != NULL) {
        *out = ((u32)p[0] >> 6) & 3;
    }
    *a = p[0] & 0x3f;
}

extern "C" void NetBuf_Pack20(u8 *p, s32 v, u8 hi) {
    p[0] = ((hi << 4) & 0xf0) | ((v >> 16) & 0xf);
    p[1] = v >> 8;
    p[2] = v;
}

extern "C" void NetBuf_Unpack20(u8 *p, u32 *out, u8 *out2) {
    if (out2 != NULL) {
        *out2 = ((u32)p[0] >> 4) & 0xf;
    }
    *out = (p[2] & 0xff) | (((p[0] << 16) & 0xf0000) | ((p[1] << 8) & 0xff00));
}

extern "C" void NetBuf_PackPair20(u8 *p, s32 v, s32 x) {
    p[0] = v >> 8;
    p[1] = v;
    NetBuf_Pack20(p + 2, x, (u8)((v >> 16) & 0xf));
}

extern "C" void NetBuf_UnpackPair20(u8 *p, u32 *out, u32 *x) {
    u8 t;
    NetBuf_Unpack20(p + 2, x, &t);
    *out = (p[1] & 0xff) | (((t << 16) & 0xf0000) | ((p[0] << 8) & 0xff00));
}

extern "C" void NetBuf_PackTriple20(u8 *p, s32 a, s32 x, s32 y, u8 z) {
    NetBuf_PackPair20(p, a, x + 0x80000);
    NetBuf_Pack20(p + 5, y, z);
}

extern "C" void NetBuf_UnpackTriple20(u8 *p, u32 *out, s32 *x, u32 *y, u8 *z) {
    NetBuf_UnpackPair20(p, out, (u32 *)x);
    *x = *x - 0x80000;
    NetBuf_Unpack20(p + 5, y, z);
}

extern "C" void NetBuf_WriteS16B(void *dst, s16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" s16 NetBuf_ReadS16B(void *src) {
    s16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void NetBuf_WriteS16(void *dst, s16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" s16 NetBuf_ReadS16(void *src) {
    s16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void NetBuf_WriteU16(void *dst, u16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" u16 NetBuf_ReadU16(void *src) {
    u16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void CommRecord_SetLength(void *dst, u16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" u16 CommRecord_GetLength(void *src) {
    u16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void CommBlock_WriteAct00(void) {}

extern "C" void CommBlock_WriteAct01(void) {
    Unk_020767f8_Tag t;
    u32 v;
    Unk_020767f8_Tag *tp = &t;
    void *p;
    s32 i;
    void *ctx;
    t.b = 3;
    i = 0;
    ctx = gCommManager;
    for (; i < 8; i++) {
        p = func_0207aa78(i);
        if (p != NULL) {
            t.b = (u8)func_02078580(p);
        } else {
            t.b = 3;
        }
        _ZN11CommManager13appendControlEPvj(ctx, &t.b, 1);
        _ZN11CommManager13appendControlEPvj(ctx, func_02078578(p), 12);
        v = *(u32 *)((u8 *)p + 0x20);
        _ZN11CommManager13appendControlEPvj(ctx, &v, 4);
        t.h = *(u16 *)((u8 *)p + 0x24);
        _ZN11CommManager13appendControlEPvj(ctx, &t.h, 2);
    }
}

extern "C" void CommBlock_ReadAct00(void) {}

// ---------------------------------------------------------------------------
extern "C" void CommBlock_ReadAct01(u8 *buf) {
    Unk_020767f8_Tag t;
    u8 obj[0x10];
    u32 v;
    u32 z8 = 0, zc = 0, z10 = 0;
    Unk_020767f8_Tag *tp = &t;
    s32 i;
    t.b = 3;
    _ZN12Unk_0209ada413func_0209ada4Ev(obj);
    for (i = 0; i < 8; i++) {
        void *p = func_0207aa78(i);
        t.b = 3;
        MI_CpuCopy8(buf, &t.b, 1);
        func_0207857c(p, t.b);
        MI_CpuCopy8(buf + 1, obj, 12);
        void *q = func_02078578(p);
        u32 a = _ZN12Unk_0209ada413func_0209ac64Ev(obj);
        u32 b = _ZN12Unk_0209ada413func_0209ab94Ev(obj);
        _ZN12Unk_0209ada413func_0209ad54EhPth(q, a, b, z8);
        v = zc;
        MI_CpuCopy8(buf + 13, &v, 4);
        *(u32 *)((u8 *)p + 0x20) = v;
        t.h = z10;
        MI_CpuCopy8(buf + 17, &t.h, 2);
        *(u16 *)((u8 *)p + 0x24) = t.h;
        buf += 0x13;
    }
    _ZN12Unk_0209ada413func_0209ada0Ev(obj);
}

}

// ======== unk_02075e60.cpp ========
namespace n4 {
class CommManager;
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern u8 data_020e416c;
}
extern "C" {
extern u8 sInsectCatchResult;
}
extern "C" {
extern void *gCurrentHeap;
}
extern "C" {
extern void (*sCommBlockWriters[])(u32);
}
extern "C" {
extern void (*sCommBlockReaders[])(u8 *, u32);
}
extern "C" {
extern u8 sCommSyncVarVarSizes[];
}
extern "C" {
extern u16 sCommSyncVarVarOffsets[];
}
extern "C" {
extern void (*sCommSyncVarInitHandlers[])(void *);
}
extern "C" {
extern void (*sCommSyncVarPackHandlers[])(void *, u32, u32);
}
extern "C" {
s32 _ZN11CommManager10readRecordEPhj(CommManager *g, void *out, u32 idx);
}
extern "C" {
void Insect_CancelCatch(u32 v);
}
extern "C" {
u32 Insect_NetClaim(u32 v);
}
extern "C" {
s32 Insect_OnClaimGranted(u32 v);
}
extern "C" {
s32 _ZN11CommManager14isSyncVarDirtyEi(CommManager *g, u32 i);
}
extern "C" {
void *_ZN11CommManager10getSyncVarEj(CommManager *g, u32 i);
}
extern "C" {
void _ZN11CommManager15setSyncVarDirtyEij(CommManager *g, u32 i, s32 v);
}
extern "C" {
void _ZN11CommManager11beginRecordEv(CommManager *g);
}
extern "C" {
void _ZN11CommManager11writeRecordEPhj(CommManager *g, void *p, s32 n);
}
extern "C" {
void _ZN11CommManager9endRecordEjj(CommManager *g, u32 a, u32 b);
}
extern "C" {
void func_020ac7e8(u32 a);
}
extern "C" {
void func_020ac7f8(void *p, u32 a);
}
extern "C" {
void func_0209c3cc(void *p);
}
extern "C" {
void func_020b1234(void *p, u32 a);
}
extern "C" {
void func_020b1260(void *p, u32 a);
}
extern "C" {
void func_020b1388(void *p);
}
extern "C" {
void func_02051f40(u32 a);
}
extern "C" {
void func_02051f50(u32 a);
}
extern "C" {
void func_02051f68(void *p, u32 a);
}
extern "C" {
void func_02051fcc(void *p);
}
extern "C" {
void func_020520d0(u32 a, void *p);
}
extern "C" {
void func_02052134(u32 a, void *p);
}
extern "C" {
void func_020520a8(u32 a, void *p);
}
extern "C" {
void func_0205218c(void *p);
}
extern "C" {
void func_020521fc(void *p);
}
extern "C" {
void func_0203eb60(void *p, u32 a);
}
extern "C" {
void *Heap_AllocTail(void *g, u32 a);
}
extern "C" {
void Heap_Free(void *g, void *p);
}
extern "C" {
void func_0206f804(void *p, u32 a);
}
extern "C" {
void func_02070560(void *p);
}
extern "C" {
void func_02034048(void *p);
}
extern "C" {
void *NetHeap_Alloc(u32 a, u32 b);
}
extern "C" {
void _ZN11CommManager13setSyncVarBufEPh(CommManager *g, void *p);
}
extern "C" {
void MI_CpuFill8(void *p, u32 a, u32 b);
}
extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}
extern "C" {
s32 func_02063a04(void *a, void *b, u32 n);
}
extern "C" {
void func_020842c0(u32 a, u32 b);
}
extern "C" {
void func_020843c4(u32 a, u32 b);
}
extern "C" {
void func_02084404(u32 a, u32 b);
}
extern "C" {
void func_020954f8(u32 a, u32 b);
}
extern "C" {
void func_02038828(u32 a, u32 b, u32 c);
}
extern "C" {
void InsectNetSync_PackVar(u32 a, u32 b, u32 c);
}
extern "C" {
void NetBuf_WriteS16B(u32 a, s32 b);
}
extern "C" {
void NetBuf_PackPair20(u32 a, s32 b, s32 c);
}
extern "C" {
s32 _Z20NetOverlay_AssertAnyv();
}
extern "C" {
s32 Net_IsReadyToSend();
}
extern "C" {
void _ZN11CommManager15clearControlLenEv(CommManager *g);
}
extern "C" {
s32 _ZN11CommManager10getSendBufEi(CommManager *g, u32 n);
}
extern "C" {
void CommPacket_SetHeader(s32 p, u32 a, u32 b);
}
extern "C" {
void _ZN11CommManager13setControlLenEj(CommManager *g, u32 n);
}
extern "C" {
u32 _ZN11CommManager13getControlLenEv(CommManager *g);
}
extern "C" {
void CommSyncVar_InitVar(u32 i);
}
extern "C" {
u32 CommSyncVar_GetVarSize(u32 i);
}
extern "C" {
void CommSyncVar_PackAngle(u32 a, s16 *b);
}
extern "C" {
void CommSyncVar_PackPos(u32 a, s32 *b);
}
extern "C" {
static inline BOOL Unk_02075e60_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}


class CommManager {
public:
    /* 0x00 */ u8 unk_00[0x64];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 unk_68[0x8];
    /* 0x70 */ void *unk_70;
};
extern "C" s32 CommBlock_BuildPacket(u32 a) {
    struct { u16 len; u8 hdr[3]; } l;
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() == 0) {
        return 0;
    }
    CommManager *g = gCommManager;
    _ZN11CommManager15clearControlLenEv(g);
    CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0xd);
    _ZN11CommManager13setControlLenEj(g, 1);
    s32 i = 0;
    goto test0;
loop0:
    {
        u32 s = _ZN11CommManager13getControlLenEv(g);
        u8 *dst = (u8 *)_ZN11CommManager10getSendBufEi(g, 4) + s;
        _ZN11CommManager13setControlLenEj(g, s + 3);
        sCommBlockWriters[i](a);
        u32 e = _ZN11CommManager13getControlLenEv(g);
        if (e <= s + 3) {
            _ZN11CommManager13setControlLenEj(g, s);
        } else {
            l.len = e - s - 3;
            MI_CpuCopy8(&l.len, l.hdr, 2);
            l.hdr[2] = i;
            MI_CpuCopy8(l.hdr, dst, 3);
        }
    }
    i++;
test0:
    if (i < 2) goto loop0;
    return 1;
}
extern "C" void CommBlock_ParseAll(u8 *p, u32 n) {
    struct { u8 id; u8 pad; u16 len; } h;
    u8 buf[3];
    while (n != 0) {
        MI_CpuCopy8(p, buf, 3);
        p += 3;
        n -= 3;
        MI_CpuCopy8(buf, &h.len, 2);
        MI_CpuCopy8(buf + 2, &h.id, 1);
        u32 len = h.len;
        u32 id = *(volatile u8 *)&h.id;
        sCommBlockReaders[id](p, len);
        p += len;
        n -= len;
    }
}
extern "C" u32 CommSyncVar_GetVarSize(u32 i) { return sCommSyncVarVarSizes[i]; }
extern "C" u32 CommSyncVar_GetVarOffset(u32 i) { return sCommSyncVarVarOffsets[i]; }
extern "C" void CommSyncVar_InitVillager0(u32 a) { func_02084404(a, 0xc); }
extern "C" void CommSyncVar_InitVillager1(u32 a) { func_02084404(a, 0xd); }
extern "C" void CommSyncVar_InitVillager2(u32 a) { func_02084404(a, 0xe); }
extern "C" void CommSyncVar_InitVillager3(u32 a) { func_02084404(a, 0xf); }
extern "C" void CommSyncVar_InitVillager4(u32 a) { func_02084404(a, 0x10); }
extern "C" void CommSyncVar_InitVillager5(u32 a) { func_02084404(a, 0x11); }
extern "C" void CommSyncVar_InitVillager6(u32 a) { func_02084404(a, 0x12); }
extern "C" void CommSyncVar_InitVillager7(u32 a) { func_02084404(a, 0x13); }
extern "C" void CommSyncVar_InitVar(u32 i) {
    void (*f)(void *) = sCommSyncVarInitHandlers[i];
    if (f) {
        void *o = _ZN11CommManager10getSyncVarEj(gCommManager, i);
        f(o);
    }
}
extern "C" void CommSyncVar_PackPos(u32 a, s32 *b) { NetBuf_PackPair20(a, b[0], b[2]); }
extern "C" void CommSyncVar_PackPlayerPos0(u32 a, s32 *b) { CommSyncVar_PackPos(a, b); }
extern "C" void CommSyncVar_PackPlayerPos1(u32 a, s32 *b) { CommSyncVar_PackPos(a, b); }
extern "C" void CommSyncVar_PackPlayerPos2(u32 a, s32 *b) { CommSyncVar_PackPos(a, b); }
extern "C" void CommSyncVar_PackPlayerPos3(u32 a, s32 *b) { CommSyncVar_PackPos(a, b); }
extern "C" void CommSyncVar_PackAngle(u32 a, s16 *b) { NetBuf_WriteS16B(a, *b); }
extern "C" void CommSyncVar_PackPlayerAngle0(u32 a, s16 *b) { CommSyncVar_PackAngle(a, b); }
extern "C" void CommSyncVar_PackPlayerAngle1(u32 a, s16 *b) { CommSyncVar_PackAngle(a, b); }
extern "C" void CommSyncVar_PackPlayerAngle2(u32 a, s16 *b) { CommSyncVar_PackAngle(a, b); }
extern "C" void CommSyncVar_PackPlayerAngle3(u32 a, s16 *b) { CommSyncVar_PackAngle(a, b); }
extern "C" void CommSyncVar_PackVar08(u32 a) { func_020954f8(a, 0x8); }
extern "C" void CommSyncVar_PackVar09(u32 a) { func_020954f8(a, 0x9); }
extern "C" void CommSyncVar_PackVar0A(u32 a) { func_020954f8(a, 0xa); }
extern "C" void CommSyncVar_PackVar0B(u32 a) { func_020954f8(a, 0xb); }
extern "C" void CommSyncVar_PackVillager0(u32 a) { func_020843c4(a, 0xc); }
extern "C" void CommSyncVar_PackVillager1(u32 a) { func_020843c4(a, 0xd); }
extern "C" void CommSyncVar_PackVillager2(u32 a) { func_020843c4(a, 0xe); }
extern "C" void CommSyncVar_PackVillager3(u32 a) { func_020843c4(a, 0xf); }
extern "C" void CommSyncVar_PackVillager4(u32 a) { func_020843c4(a, 0x10); }
extern "C" void CommSyncVar_PackVillager5(u32 a) { func_020843c4(a, 0x11); }
extern "C" void CommSyncVar_PackVillager6(u32 a) { func_020843c4(a, 0x12); }
extern "C" void CommSyncVar_PackVillager7(u32 a) { func_020843c4(a, 0x13); }
extern "C" void CommSyncVar_PackPlayerMsg0(u32 a, u32 b) { func_02038828(a, 0x14, b); }
extern "C" void CommSyncVar_PackPlayerMsg1(u32 a, u32 b) { func_02038828(a, 0x15, b); }
extern "C" void CommSyncVar_PackPlayerMsg2(u32 a, u32 b) { func_02038828(a, 0x16, b); }
extern "C" void CommSyncVar_PackPlayerMsg3(u32 a, u32 b) { func_02038828(a, 0x17, b); }
extern "C" void CommSyncVar_PackVar18(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x18, b); }
extern "C" void CommSyncVar_PackVar19(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x19, b); }
extern "C" void CommSyncVar_PackVar1A(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1a, b); }
extern "C" void CommSyncVar_PackVar1B(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1b, b); }
extern "C" void CommSyncVar_PackVar1C(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1c, b); }
extern "C" void CommSyncVar_PackVar1D(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1d, b); }
extern "C" void CommSyncVar_PackVar1E(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1e, b); }
extern "C" void CommSyncVar_PackVar1F(u32 a, u32 b) { InsectNetSync_PackVar(a, 0x1f, b); }
extern "C" void CommSyncVar_PackSpNpc00(u32 a) { func_020842c0(a, 0x20); }
extern "C" void CommSyncVar_PackSpNpc01(u32 a) { func_020842c0(a, 0x21); }
extern "C" void CommSyncVar_PackSpNpc02(u32 a) { func_020842c0(a, 0x22); }
extern "C" void CommSyncVar_PackSpNpc03(u32 a) { func_020842c0(a, 0x23); }
extern "C" void CommSyncVar_PackSpNpc04(u32 a) { func_020842c0(a, 0x24); }
extern "C" void CommSyncVar_PackSpNpc05(u32 a) { func_020842c0(a, 0x25); }
extern "C" void CommSyncVar_PackSpNpc06(u32 a) { func_020842c0(a, 0x26); }
extern "C" void CommSyncVar_PackSpNpc07(u32 a) { func_020842c0(a, 0x27); }
extern "C" void CommSyncVar_PackSpNpc08(u32 a) { func_020842c0(a, 0x28); }
extern "C" void CommSyncVar_PackSpNpc09(u32 a) { func_020842c0(a, 0x29); }
extern "C" void CommSyncVar_PackSpNpc0A(u32 a) { func_020842c0(a, 0x2a); }
extern "C" void CommSyncVar_PackSpNpc0B(u32 a) { func_020842c0(a, 0x2b); }
extern "C" void CommSyncVar_PackSpNpc0C(u32 a) { func_020842c0(a, 0x2c); }
extern "C" void CommSyncVar_PackSpNpc0D(u32 a) { func_020842c0(a, 0x2d); }
extern "C" void CommSyncVar_PackSpNpc0E(u32 a) { func_020842c0(a, 0x2e); }
extern "C" void CommSyncVar_PackSpNpc0F(u32 a) { func_020842c0(a, 0x2f); }
extern "C" void CommSyncVar_PackSpNpc10(u32 a) { func_020842c0(a, 0x30); }
extern "C" void CommSyncVar_PackSpNpc11(u32 a) { func_020842c0(a, 0x31); }
extern "C" void CommSyncVar_PackSpNpc12(u32 a) { func_020842c0(a, 0x32); }
extern "C" void CommSyncVar_PackSpNpc13(u32 a) { func_020842c0(a, 0x33); }
extern "C" void CommSyncVar_PackSpNpc14(u32 a) { func_020842c0(a, 0x34); }
extern "C" void CommSyncVar_PackSpNpc15(u32 a) { func_020842c0(a, 0x35); }
extern "C" void CommSyncVar_PackSpNpc16(u32 a) { func_020842c0(a, 0x36); }
extern "C" void CommSyncVar_PackSpNpc17(u32 a) { func_020842c0(a, 0x37); }
extern "C" void CommSyncVar_PackSpNpc18(u32 a) { func_020842c0(a, 0x38); }
extern "C" void CommSyncVar_PackSpNpc19(u32 a) { func_020842c0(a, 0x39); }
extern "C" void CommSyncVar_PackSpNpc1A(u32 a) { func_020842c0(a, 0x3a); }
extern "C" void CommSyncVar_PackSpNpc1B(u32 a) { func_020842c0(a, 0x3b); }
extern "C" void CommSyncVar_PackSpNpc1C(u32 a) { func_020842c0(a, 0x3c); }
extern "C" void CommSyncVar_PackSpNpc1D(u32 a) { func_020842c0(a, 0x3d); }
extern "C" void CommSyncVar_PackSpNpc1E(u32 a) { func_020842c0(a, 0x3e); }
extern "C" void CommSyncVar_PackSpNpc1F(u32 a) { func_020842c0(a, 0x3f); }
extern "C" void CommSyncVar_PackSpNpc20(u32 a) { func_020842c0(a, 0x40); }
extern "C" void CommSyncVar_PackSpNpc21(u32 a) { func_020842c0(a, 0x41); }
extern "C" void CommSyncVar_PackSpNpc22(u32 a) { func_020842c0(a, 0x42); }
extern "C" void CommSyncVar_PackSpNpc23(u32 a) { func_020842c0(a, 0x43); }
extern "C" void CommSyncVar_PackSpNpc24(u32 a) { func_020842c0(a, 0x44); }
extern "C" void CommSyncVar_PackSpNpc25(u32 a) { func_020842c0(a, 0x45); }
extern "C" void CommSyncVar_SetVar(u32 a, u32 b, u32 c, s32 d) {
    CommManager *g = gCommManager;
    s32 r = _ZN11CommManager14isSyncVarDirtyEi(g, a);
    u32 sz = CommSyncVar_GetVarSize(a);
    void *obj = _ZN11CommManager10getSyncVarEj(g, a);
    if (r == 0 && d == 0) {
        MI_CpuCopy8(obj, g->unk_70, sz);
    }
    sCommSyncVarPackHandlers[a](obj, b, c);
    if (d != 0) {
        _ZN11CommManager15setSyncVarDirtyEij(g, a, 1);
    } else if (r == 0) {
        CommManager *h = gCommManager;
        s32 v = func_02063a04(obj, h->unk_70, sz);
        _ZN11CommManager15setSyncVarDirtyEij(h, a, v);
    }
}
extern "C" void CommSyncVar_Init() {
    void *p = NetHeap_Alloc(0x68c, 4);
    _ZN11CommManager13setSyncVarBufEPh(gCommManager, p);
    if (p) {
        MI_CpuFill8(p, 0, 0x68c);
    }
    for (s32 i = 0; i < 0x46; i++) {
        CommSyncVar_InitVar(i);
    }
}
extern "C" void CommRecv_RoomWallFloor(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_02034048(buf);
}
extern "C" void CommRecv_PatternMove(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_02070560(buf);
}
extern "C" void CommRecv_SubCommand(u32 a, u32 b, u32 c, u32 d) {
    void *g = gCurrentHeap;
    void *r = Heap_AllocTail(g, a);
    _ZN11CommManager10readRecordEPhj(gCommManager, r, a);
    func_0206f804(r, d);
    Heap_Free(g, r);
}
extern "C" void CommRecv_CharInteract(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_0203eb60(buf, d);
}
extern "C" void CommRecv_FurnitureState(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_020521fc(buf);
}
extern "C" void CommRecv_HouseRoomFlag(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_0205218c(buf);
}
extern "C" void CommRecv_RoomItemSet(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 4);
    func_020520a8(c, buf);
}
extern "C" void CommRecv_FurnitureRemove(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 4);
    func_02052134(c, buf);
}
extern "C" void CommRecv_FurniturePlace(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 4);
    func_020520d0(c, buf);
}
extern "C" void CommRecv_FurnitureUseRequest(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_02051fcc(buf);
}
extern "C" void CommRecv_SpotReserveRequest(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 3);
    func_02051f68(buf, d);
}
extern "C" void CommRecv_SpotReserveGranted() { func_02051f50(1); }
extern "C" void CommRecv_SpotReserveDenied() { func_02051f50(0); }
extern "C" void CommRecv_SpotRelease(u32 a, u32 b, u32 c, u32 d) { func_02051f40(d); }
extern "C" void CommRecv_BuildingState(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_020b1388(buf);
}
extern "C" void CommRecv_BuildingEnter(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_020b1260(buf, d);
}
extern "C" void CommRecv_BuildingLeave(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_020b1234(buf, d);
}
extern "C" void CommRecv_Act25(u32 a) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_0209c3cc(buf);
}
extern "C" void CommRecv_ShopPurchase(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, a);
    func_020ac7f8(buf, d);
}
extern "C" void CommRecv_ShopPurchaseAck(u32 a, u32 b, u32 c, u32 d) { func_020ac7e8(d); }
extern "C" void CommRecv_FieldActorClaimRequest(u32 a, u32 b, u32 c, u32 d) {
    struct L { volatile u8 b; volatile u8 f; } l;
    l.f = 1;
    CommManager *g = gCommManager;
    _ZN11CommManager10readRecordEPhj(g, (void *)&l, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        l.f = Insect_NetClaim(l.b);
    }
    _ZN11CommManager11beginRecordEv(g);
    if (l.f == 0) {
        l.b &= 0xf;
        l.b |= d << 4;
        l.b += 0x10;
        g = gCommManager;
        _ZN11CommManager11writeRecordEPhj(g, (void *)&l, 1);
        _ZN11CommManager9endRecordEjj(g, 0x29, 7);
    } else {
        g = gCommManager;
        _ZN11CommManager11writeRecordEPhj(g, (void *)&l.f, 1);
        _ZN11CommManager9endRecordEjj(g, 0x29, d);
    }
}
extern "C" void CommRecv_FieldActorClaimResult(u32 a) {
    volatile u8 n;
    if (Unk_02075e60_IsZero(data_020e416c)) {
        CommManager *g = gCommManager;
        _ZN11CommManager10readRecordEPhj(g, (void *)&n, a);
        u32 v = n;
        u32 h = (v << 20) >> 24;
        n = (v & 0xf) | 0x10;
        u32 t = n;
        if (t == 1) {
            sInsectCatchResult = 1;
        } else {
            h--;
            if (h == (u32)g->unk_64) {
                sInsectCatchResult = 0;
                Insect_OnClaimGranted(t);
            } else {
                sInsectCatchResult = 1;
            }
        }
    }
}
extern "C" void CommRecv_FieldActorRelease(u32 a) {
    u8 b;
    _ZN11CommManager10readRecordEPhj(gCommManager, &b, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        Insect_CancelCatch(b);
    }
}
}

// ======== unk_02075558.cpp ========
namespace n3 {
extern "C" {
s32 func_020b50e8();
}
extern "C" {
void *SaveManager_Get();
}
extern "C" {
s32 func_020a028c(void *, s32, s32);
}
extern "C" {
s32 func_020a0254(s32);
}
extern "C" {
s32 func_020a0284(void *, s32, s32);
}
extern "C" {
s32 func_020a5f9c(void *, u32);
}
extern "C" {
void _ZN11CommManager10readRecordEPhj(void *, void *, s32);
}
extern "C" {
void func_02077404(u32 *, u16 *, void *);
}
extern "C" {
void *SaveVillagers_Get(void *, u32);
}
extern "C" {
void *func_0207d074(void *, s32);
}
extern "C" {
void func_020774f0(u32 *, u16 *, void *);
}
extern "C" {
s32 _ZN23VillagerDataProfileView8setShirtEPt(void *, u16 *);
}
extern "C" {
void Villager_GetPlan();
}
extern "C" {
void *func_0209a60c();
}
extern "C" {
void *func_0209a940(void *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
}
extern "C" {
u16 *func_0209a8e8(void *);
}
extern "C" {
s32 func_0207764c(u32 *, u8 *, u16 *, s32 *, u8 *, u32 *);
}
extern "C" {
void func_0207e310(void *);
}
extern "C" {
void func_02078578();
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ad80Ev();
}
extern "C" {
void *PlayerData_GetBySessionSlot(void *);
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *);
}
extern "C" {
s32 func_0209a9f0(void *, u32, u16 *, void *, s32);
}
extern "C" {
void func_02077780(u32 *, u8 *, u8 *, u16 *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209abb4Eh(void *, u32);
}
extern "C" {
s32 func_0209aaa0(void *);
}
extern "C" {
s32 func_0209a944(void *);
}
extern "C" {
s32 func_0209a8c8(void *, u32);
}
extern "C" {
s32 func_0209a8b4(void *, u32);
}
extern "C" {
void func_0207783c(u32 *, u32 *, u16 *, u8 *);
}
extern "C" {
void *Villager_GetMemory(void *, u32);
}
extern "C" {
s32 func_02080f94(void *);
}
extern "C" {
s32 _ZN14VillagerMemory15setReceivedItemEPt(void *, u16 *);
}
extern "C" {
void func_02077a9c(u32 *, u32 *, void *);
}
extern "C" {
s32 _ZN14VillagerMemory13setFriendshipEa(void *, s32);
}
extern "C" {
s32 _ZN14VillagerMemory13setImpressionEi(void *, u32);
}
extern "C" {
s32 func_02080ecc(void *, void *, u8 *, s32);
}
extern "C" {
s32 VillagerMemory_InitForPlayer(void *, void *, u8 *, s32);
}
extern "C" {
s32 func_0209c4a8(void *, s32);
}
extern "C" {
s32 func_0209c4bc(void *);
}
extern "C" {
s32 func_0209c4e4(void *, s32);
}
extern "C" {
s32 func_02044490(void *, s32);
}
extern "C" {
s32 func_020945b4(u32, s32);
}
extern "C" {
s32 func_020945d4(u32, s32);
}
extern "C" {
s32 func_0209549c(u8 *, u8 *, u8 *);
}
extern "C" {
s32 _ZN10PlayerData12setHairStyleEh(void *, u32);
}
extern "C" {
s32 _ZN10PlayerData12setHairColorEh(void *, u32);
}
extern "C" {
s32 FishDisplay_OnNetPacket(void *, s32);
}
extern "C" {
s32 func_020954c8(void *, u16 *, u32 *);
}
extern "C" {
s32 PlayerActor_SetClothing(u16 *, u32, void *);
}
extern "C" {
void *_ZN10PlayerData11getHeldItemEv(void *);
}
extern "C" {
s32 Item_IsFurniture(u16 *);
}
extern "C" {
s32 Item_GetFurnitureIndex(void *);
}
extern "C" {
s32 _ZN10PlayerData11setHeldItemEPt(void *, u16 *);
}
extern "C" {
u16 ItemInfo_GetHoldableIndex(u16 *);
}
extern "C" {
s32 func_020946f0(s32, void *);
}
extern "C" {
void HeldInsect_Remove(u32, s32);
}
extern "C" {
void Insect_OnNetRemove(u32);
}
extern "C" {
void *TownBlockMap_Get();
}
extern "C" {
u16 *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, u32);
}
extern "C" {
s32 func_020453e8(Unk_02075bc4_Pt *, u32);
}
extern "C" {
s32 func_0204510c(Unk_02075bc4_Pt *, void *);
}
extern "C" {
Unk_02075bc4_Q *func_02045214();
}
extern "C" {
s32 func_02044774(void *, BOOL, void *);
}
extern "C" {
extern void *gCommManager;
}
extern "C" {
extern u32 data_021dfd8c[];
}
extern "C" {
extern u8 data_021d7352[];
}
extern "C" {
extern u8 data_020e416c;
}


static inline void *G() { return gCommManager; }

static inline BOOL Unk_02075680_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02075d38_Same(BOOL a) {
    return a;
}

static inline BOOL Unk_02075e1c_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}



extern "C" void CommRecv_FieldActorRemove(u32 n) {
    u8 buf;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, n);
    if (Unk_02075e1c_IsZero(data_020e416c)) {
        if (buf < 4) {
            HeldInsect_Remove(buf, 0);
        } else {
            Insect_OnNetRemove(buf);
        }
    }
}

extern "C" void CommRecv_FishDisplay(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[8];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, n);
    FishDisplay_OnNetPacket(buf, d);
}

extern "C" void CommRecv_ClothesChange(s32 n, s32 b, s32 c, void *d) {
    u16 h, v;
    u8 buf[4];
    u32 k;
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, n);
    func_020954c8(buf, &h, &k);
    v = h;
    switch (k) {
    case 0:
    case 1:
    case 2:
        PlayerActor_SetClothing(&v, k, d);
        break;
    case 3: {
        void *r7 = PlayerData_GetBySessionSlot(d);
        u16 *r5 = (u16 *)_ZN10PlayerData11getHeldItemEv(r7);
        BOOL same;
        if (Item_IsFurniture(&v) != 0) {
            s32 r6 = Item_GetFurnitureIndex(&v);
            if (r6 == Item_GetFurnitureIndex(r5)) same = TRUE; else same = FALSE;
        } else {
            if (v == *r5) same = TRUE; else same = FALSE;
        }
        if (!same) {
            u16 r = ItemInfo_GetHoldableIndex(&v);
            _ZN10PlayerData11setHeldItemEPt(r7, &v);
            func_020946f0(r + 1, d);
        }
        break;
    }
    }
}

extern "C" void CommRecv_HairChange(s32 n, s32 b, s32 c, void *d) {
    u8 buf[3];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, n);
    func_0209549c(&buf[0], &buf[1], &buf[2]);
    void *r4 = PlayerData_GetBySessionSlot(d);
    _ZN10PlayerData12setHairStyleEh(r4, buf[1]);
    _ZN10PlayerData12setHairColorEh(r4, buf[2]);
}

extern "C" void CommRecv_FaceChange(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, n);
    func_020945d4(buf[0], d);
}

extern "C" void CommRecv_TanChange(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, n);
    func_020945b4(buf[0], d);
}

extern "C" void CommRecv_ItemActionRequest(s32 a, s32 b, s32 c, void *d) {
    void *grid;
    volatile u16 c1, b1, c2, b2, a1, a2;
    Unk_02075bc4_Buf buf;
    Unk_02075bc4_Pt pt, pt2;
    grid = TownBlockMap_Get();
    if (grid != NULL) {
        BOOL ok;
        _ZN11CommManager10readRecordEPhj(gCommManager, &buf, 8);
        ok = FALSE;
        a1 = buf.pos;
        u16 t1 = a1;
        b1 = t1;
        c1 = t1;
        s32 x = c1 >> 8;
        s32 y = b1 & 0xff;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), buf.flag);
        if (cell != NULL) {
            if (*cell == buf.id) {
                a2 = buf.pos;
                u16 t2 = a2;
                b2 = t2;
                c2 = t2;
                s32 x2, y2;
                pt.x = x2 = c2 >> 8;
                pt.y = y2 = b2 & 0xff;
                if (func_020453e8(&pt, buf.flag) < 0) {
                    pt2.x = x2;
                    pt2.y = y2;
                    if (func_0204510c(&pt2, d) != 0) ok = TRUE;
                } else {
                    Unk_02075bc4_Q *q = func_02045214();
                    if (q->a == buf.kind) {
                        if (q->b != 0) {
                            if (q->c == 0) ok = TRUE;
                        }
                    }
                }
            }
        }
        func_02044774(&buf, ok, d);
    }
}

extern "C" void CommRecv_ItemActionResult(s32 a, s32 b, s32 c) {
    u8 buf[14];
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 0xe);
    func_02044490(buf, c);
}

extern "C" void CommRecv_ObjectUseRequest(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, 1);
    func_0209c4e4(&buf, d);
}

extern "C" void CommRecv_ObjectUseReply() {
    u32 buf;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, 1);
    func_0209c4bc(&buf);
}

extern "C" void CommRecv_ObjectUseRelease(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, 1);
    func_0209c4a8(&buf, d);
}

extern "C" void CommRecv_VillagerMemoryInit(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = Villager_GetMemory(r0, x);
        if (r5 != NULL) {
            void *r1 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetBySessionSlot(d));
            VillagerMemory_InitForPlayer(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void CommRecv_VillagerMemorySetPlayer(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = Villager_GetMemory(r0, x);
        if (r5 != NULL) {
            void *r1 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetBySessionSlot(d));
            func_02080ecc(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void CommRecv_VillagerImpression() {
    u8 b[2];
    u32 id, x;
    void *r5 = gCommManager;
    _ZN11CommManager10readRecordEPhj(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = Villager_GetMemory(r0, x);
        if (r4 != NULL) {
            _ZN11CommManager10readRecordEPhj(r5, b + 1, 1);
            _ZN14VillagerMemory13setImpressionEi(r4, b[1]);
        }
    }
}

extern "C" void CommRecv_VillagerFriendship() {
    s8 b[2];
    u32 id, x;
    void *r5 = gCommManager;
    _ZN11CommManager10readRecordEPhj(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = Villager_GetMemory(r0, x);
        if (r4 != NULL) {
            _ZN11CommManager10readRecordEPhj(r5, b + 1, 1);
            _ZN14VillagerMemory13setFriendshipEa(r4, b[1]);
        }
    }
}

extern "C" void CommRecv_VillagerReceivedItem() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    u32 k;
    l.x = 0xfff1;
    _ZN11CommManager10readRecordEPhj(gCommManager, l.y, 3);
    func_0207783c(&id, &k, &l.x, l.y);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = Villager_GetMemory(r0, k);
        if (r4 != NULL) {
            if (func_02080f94(r4) != 0) {
                _ZN14VillagerMemory15setReceivedItemEPt(r4, &l.x);
            }
        }
    }
}

extern "C" void CommRecv_Act3C() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 id;
    l.a = 6;
    l.b = 0;
    _ZN11CommManager10readRecordEPhj(gCommManager, &l.c, 2);
    func_02077780(&id, &l.a, &l.b, &l.c);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        Villager_GetPlan();
        u8 *r4 = (u8 *)func_0209a60c();
        switch (l.a) {
        case 0:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a940(r4), l.b);
            }
            break;
        case 1:
            func_0209aaa0(r4);
            break;
        case 2:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a944(r4);
            }
            break;
        case 3:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a8c8(r4, l.b);
            }
            break;
        case 4:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a8b4(r4, l.b);
            }
        case 5:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                *(r4 + 0x26) = l.b;
            }
            break;
        }
    }
}

extern "C" void CommRecv_Act3D() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 buf;
    u32 id;
    s32 n;
    l.a = 0x16;
    l.c = 0xfff1;
    n = 4;
    l.b = 0;
    _ZN11CommManager10readRecordEPhj(gCommManager, &buf, 4);
    func_0207764c(&id, &l.a, &l.c, &n, &l.b, &buf);
    void *r6 = SaveVillagers_Get(data_021dfd8c, id);
    if (r6 != NULL) {
        Villager_GetPlan();
        void *r7 = func_0209a60c();
        void *r4 = NULL;
        BOOL t = l.b ? TRUE : FALSE;
        BOOL r5 = t ? TRUE : FALSE;
        func_0207e310(r6);
        func_02078578();
        _ZN12Unk_0209ada413func_0209ad80Ev();
        if (n < 4) {
            void *q = PlayerData_GetBySessionSlot((void *)n);
            if (q != NULL) {
                r4 = _ZN10PlayerData11getPlayerIdEv(q);
            }
        }
        func_0209a9f0(r7, l.a, &l.c, r4, r5);
    }
}

extern "C" void CommRecv_Act3F() {
    struct { u16 x; u8 y[4]; } l;
    u32 id;
    l.x = 0xfff1;
    _ZN11CommManager10readRecordEPhj(gCommManager, l.y, 4);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        Villager_GetPlan();
        void *r5 = func_0209a60c();
        void *r4 = func_0209a940(r5);
        if (_ZN12Unk_0209ada413func_0209ad68Ev(r4)) {
            if (_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 0) {
                if (Unk_02075680_R(&l.x, 0x12b0, 0x12e7)) goto set;
            }
            if (_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 1) {
                if (Unk_02075680_R(&l.x, 0x12e8, 0x131f)) {
                set:
                    u16 *p = func_0209a8e8(r5);
                    *p = l.x;
                }
            }
        }
    }
}

extern "C" void CommRecv_VillagerShirt() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    Unk_02075680_Pad pad;
    l.x = 0xfff1;
    _ZN11CommManager10readRecordEPhj(gCommManager, l.y, 3);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = SaveVillagers_Get(data_021dfd8c, id);
    if (r0 != NULL) {
        BOOL r4 = Unk_02075680_R(&l.x, 0x11a8, 0x12a7);
        if (r4) _ZN23VillagerDataProfileView8setShirtEPt(r0, &l.x);
    }
}

extern "C" void CommRecv_VillagerItems() {
    u32 id;
    u16 arr[4];
    u8 buf[9];
    void *r5;
    s32 i;
    arr[0] = 0xfff1;
    arr[1] = 0xfff1;
    arr[2] = 0xfff1;
    arr[3] = 0xfff1;
    _ZN11CommManager10readRecordEPhj(gCommManager, buf, 9);
    func_02077404(&id, arr, buf);
    r5 = SaveVillagers_Get(data_021dfd8c, id);
    if (r5 != NULL) {
        for (i = 0; i < 4; i++) {
            u16 *p = (u16 *)func_0207d074(r5, i);
            if (p != NULL) {
                *p = arr[i];
            }
        }
    }
}

extern "C" void CommRecv_PeerNetState(s32 a, s32 b, s32 c, void *d) {
    u8 v;
    _ZN11CommManager10readRecordEPhj(gCommManager, &v, 1);
    func_020a5f9c(d, v);
}

extern "C" void CommRecv_OwnNetState() {
    Unk_02075558_Obj *o = (Unk_02075558_Obj *)gCommManager;
    u8 b;
    _ZN11CommManager10readRecordEPhj(o, &b, 1);
    func_020a5f9c(o->unk_64, b);
}

extern "C" void CommRecv_Act02(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a0284(SaveManager_Get(), d, 1);
        }
    }
}

extern "C" void CommRecv_Act03() {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            SaveManager_Get();
            func_020a0254(1);
        }
    }
}

extern "C" void CommRecv_Act04(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a028c(SaveManager_Get(), d, 1);
        }
    }
}}

// ======== unk_02074c4c.cpp ========
namespace n2 {
extern "C" {
extern Unk_02074c4c_G *gCommManager;
}
extern "C" {
extern void (*sCommRecvHandlers[])(u32, u32, u32, u32);
}
extern "C" {
s32 _Z20NetOverlay_AssertAnyv();
}
extern "C" {
BOOL Net_IsReadyToSend();
}
extern "C" {
BOOL Comm_HasSendCredit(u32);
}
extern "C" {
void _ZN11CommManager7isMyAidEj(void *, s32);
}
extern "C" {
u8 *_ZN11CommManager10getSendBufEi(void *, s32);
}
extern "C" {
void CommPacket_SetHeader(void *, s32, s32);
}
extern "C" {
BOOL _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(void *, void *, u32, u32, u32, u32, u32, u32, u32, u32);
}
extern "C" {
s32 Comm_GetRemoteMask();
}
extern "C" {
u32 _ZN11CommManager13getControlLenEv(void *);
}
extern "C" {
void *_ZN11CommManager13getSyncVarBufEv(void *);
}
extern "C" {
u32 PlayerSession_GetDataIndex(u32);
}
extern "C" {
u32 PlayerData_Get(u32);
}
extern "C" {
void func_02133ef8(void *, u32);
}
extern "C" {
void *func_0208f0b0(u32);
}
extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}
extern "C" {
BOOL _ZN12Unk_0208f23813func_0208f1c0Ev(void *);
}
extern "C" {
void *SaveManager_GetTownCompressBuf();
}
extern "C" {
u32 _ZN18TownCompressBuffer7getSizeEv();
}
extern "C" {
BOOL _ZN11CommManager12isSlotActiveEi(void *, s32);
}
extern "C" {
void _ZN11CommManager10setReadPtrEPh(void *);
}
extern "C" {
void _ZN11CommManager10readRecordEPhj(void *, void *, u32);
}
extern "C" {
u32 NetBuf_ReadU16(void *);
}
extern "C" {
void CommRecord_UnpackSource(void *, void *, void *);
}
extern "C" {
void func_0205f094(s32, s32, u32, u32, u32);
}
extern "C" {
void func_0205f144(void *);
}
extern "C" {
u32 _ZN11CommManager10getAuxBufBEv(void *);
}
extern "C" {
void _ZN11CommManager10setAuxLenBEj(void *, void *);
}
extern "C" {
u32 _ZN11CommManager10getAuxBufAEv(void *);
}
extern "C" {
void _ZN11CommManager10setAuxLenAEj(void *, void *);
}
extern "C" {
void func_020a5dd8();
}
extern "C" {
void func_020a5e94(u32);
}
extern "C" {
void func_020a5ea4(u32);
}
extern "C" {
void func_020a5eb4(u32, u32);
}
extern "C" {
void func_020a66f4(void *);
}
extern "C" {
void func_020a66ac(void *, void *, void *, void *);
}
extern "C" {
void func_020a5f48(u32, u32);
}
extern "C" {
void func_020a5f38();
}
extern "C" {
void func_020a5f5c();
}
extern "C" {
void func_020a66f0(void *);
}
extern "C" {
void func_020a68a8(void *);
}
extern "C" {
void func_020a6858(void *, void *, void *, void *, void *);
}
extern "C" {
void func_020a6388(u32, u32, u32, u32, u32);
}
extern "C" {
void func_020a6898(void *);
}
extern "C" {
void func_020a63a8(u32, u32);
}
extern "C" {
void func_020a6848(void *);
}
extern "C" {
void func_020a6804(void *, void *, void *, void *, void *, void *);
}
extern "C" {
void func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
void func_020a6838(void *);
}
extern "C" {
void func_020a6970(void *);
}
extern "C" {
void func_020a6960(void *, void *);
}
extern "C" {
void func_020a6430(u32, u32);
}
extern "C" {
void func_020a696c(void *);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
u32 SaveManager_Get();
}
extern "C" {
void func_020a02a8(u32, u32);
}
extern "C" {
void func_020a024c(u32, u32, u32);
}
extern "C" {
void Comm_RemoveMember(u32);
}
extern "C" {
BOOL CommSend_Chunked(u8 *p, void *data, u32 size, u32 type, u32 mask);
}


extern "C" void CommRecv_PlayerLeft() {
    u8 t;
    _ZN11CommManager10readRecordEPhj(gCommManager, &t, 1);
    Comm_RemoveMember(t);
}
extern "C" void CommRecv_Act06(u32 a, u32 b, u32 c, u32 d) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get()) {
            func_020a024c(SaveManager_Get(), d, 1);
        }
    }
}
extern "C" void CommRecv_Act07() {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get()) {
            func_020a02a8(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommRecv_Act08(u32 a, u32 b, u32 c, u32 d) {
    u8 t[2];
    func_020a6970(t);
    _ZN11CommManager10readRecordEPhj(gCommManager, t, 1);
    func_020a6960(t, t + 1);
    func_020a6430(d, t[1]);
    func_020a696c(t);
}
extern "C" void CommRecv_SlotStatus() {
    struct { u8 t[4]; u32 pad; u32 w1; u32 w2; } l;
    func_020a6848(l.t + 3);
    _ZN11CommManager10readRecordEPhj(gCommManager, l.t + 3, 2);
    func_020a6804(l.t + 3, &l.w1, l.t, l.t + 1, l.t + 2, &l.w2);
    func_020a63bc(l.w1, l.t[0], l.t[1], l.t[2], l.w2);
    func_020a6838(l.t + 3);
}
extern "C" void CommRecv_Act0A(u32 a, u32 b, u32 c, u32 d) {
    u8 t[4];
    _ZN11CommManager10readRecordEPhj(gCommManager, t, 1);
    func_020a63a8(d, t[0]);
}
extern "C" void CommRecv_Act0B(u32 a, u32 b, u32 c, u32 d) {
    struct { u8 t[4]; u32 pad; u32 w; } l;
    func_020a68a8(l.t + 3);
    _ZN11CommManager10readRecordEPhj(gCommManager, l.t + 3, 2);
    func_020a6858(l.t + 3, l.t, l.t + 1, l.t + 2, &l.w);
    func_020a6388(d, l.t[0], l.t[1], l.t[2], l.w);
    func_020a6898(l.t + 3);
}
extern "C" void CommRecv_Act0C(u32 a, u32 b, u32 c, u32 d) {
    s32 v[5];
    func_020a66f4(v);
    Unk_02074c4c_G *g = gCommManager;
    _ZN11CommManager10readRecordEPhj(g, v, 1);
    func_020a66ac(v, v + 1, v + 2, v + 3);
    if (d == 0) func_020a5f48(g->unk_64, v[1]);
    else func_020a5f48(d, v[1]);
    if (v[2] < 4) func_020a5f38();
    if (v[3] < 4) func_020a5f5c();
    func_020a66f0(v);
}
extern "C" void CommRecv_Act0D(u32 a, u32 b, u32 c, u32 d) { func_020a5eb4(d, 1); }
extern "C" void CommRecv_Act0E(u32 a, u32 b, u32 c, u32 d) { func_020a5ea4(d); }
extern "C" void CommRecv_Act0F(u32 n) {
    void *g = gCommManager;
    _ZN11CommManager10readRecordEPhj(g, (void *)_ZN11CommManager10getAuxBufAEv(g), n);
    _ZN11CommManager10setAuxLenAEj(g, (void *)n);
    func_020a5dd8();
}
extern "C" void CommRecv_Act10(u32 n) {
    void *g = gCommManager;
    _ZN11CommManager10readRecordEPhj(g, (void *)_ZN11CommManager10getAuxBufBEv(g), n);
    _ZN11CommManager10setAuxLenBEj(g, (void *)n);
}
extern "C" void CommRecv_Act11() { func_020a5e94(1); }
extern "C" void CommRecv_ItemSet(u32 n) {
    u32 i = 0;
    void *g = gCommManager;
    u8 buf[5];
    while (i < n) {
        _ZN11CommManager10readRecordEPhj(g, buf, 5);
        func_0205f144(buf);
        i += 5;
    }
}
extern "C" void CommRecv_ItemSetRequest(u32 n) {
    u32 i = 0;
    void *g = gCommManager;
    s32 z = 0;
    u8 buf[7];
    while (i < n) {
        _ZN11CommManager10readRecordEPhj(g, buf + 2, 5);
        u32 v = NetBuf_ReadU16(buf + 2);
        CommRecord_UnpackSource(buf + 4, buf, buf + 1);
        func_0205f094(((s8 *)buf)[5], ((s8 *)buf)[6], buf[0], v, buf[1] ? 1 : z);
        i += 5;
    }
}
extern "C" void CommRecv_Dispatch(u32 idx, u32 x, u32 a, u32 b, u8 c, u32 d) {
    _ZN11CommManager10setReadPtrEPh(gCommManager);
    sCommRecvHandlers[idx](a, b, c, d);
}
extern "C" BOOL CommSend_MemberInfo(u32 a) {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(a)) {
            void *g = gCommManager;
            _ZN11CommManager7isMyAidEj(g, 0);
            u8 *b = _ZN11CommManager10getSendBufEi(g, 4);
            CommPacket_SetHeader(b, 0, 0);
            u32 m = 0;
            u32 i = 0;
            for (i = 0; i < 4; i++) {
                if (_ZN11CommManager12isSlotActiveEi(g, i)) {
                    m |= (u8)(1 << i);
                }
            }
            m &= 0xf;
            u32 r = (u8)m;
            r |= (((u8)PlayerSession_GetDataIndex(0)) << 6) & 0xc0;
            b[1] = r;
            g = gCommManager;
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL CommSend_Chunked(u8 *p, void *data, u32 size, u32 type, u32 maskw) {
    u32 cnt = size / 0xffb;
    u32 rem = size % 0xffb;
    if (rem != 0) cnt++;
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(*(u16 *)&maskw)) {
            u32 off = *p * 0xffb;
            u32 left = size - off;
            if (left > 0xffb) left = 0xffb;
            void *g = gCommManager;
            u8 *b = _ZN11CommManager10getSendBufEi(g, 4);
            CommPacket_SetHeader(b, 0, type);
            MI_CpuCopy8(&off, b + 1, 4);
            MI_CpuCopy8((u8 *)data + off, b + 5, left);
            if (_ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), left + 5, *(u16 *)&maskw, 0, 0, 0, 0, 0, 0)) {
                (*p)++;
            }
        }
    }
    if (*p >= cnt) return TRUE;
    return FALSE;
}
extern "C" void CommSend_TownChunk(u8 *p, u32 v) {
    void *d = SaveManager_GetTownCompressBuf();
    u32 n = _ZN18TownCompressBuffer7getSizeEv();
    u32 sz;
    if (n == 0) sz = 0x15fe4; else sz = n + 4;
    CommSend_Chunked(p, d, sz, 1, v);
}
extern "C" BOOL CommSend_VillagerTransfer(u8 *p) {
    void *d = func_0208f0b0(4);
    if (_ZN12Unk_0208f23813func_0208f1c0Ev(d)) {
        return CommSend_Chunked(p, d, 0x84c, 2, 1);
    }
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(1)) {
            void *g = gCommManager;
            CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 2);
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL CommSend_VillagerTransferReply(s32 a, void *b, s32 c, void *d, s32 e, void *f) {
    s32 vals[3];
    void *ptrs[3];
    u8 *bufs[3];
    s32 offs[3];
    u16 masks[3];
    u32 i;
    s32 mode;
    void *g;
    _Z20NetOverlay_AssertAnyv();
    if (!Net_IsReadyToSend()) goto fail;
    vals[0] = a; vals[1] = c; vals[2] = e;
    ptrs[0] = b; ptrs[1] = d; ptrs[2] = f;
    func_02133ef8(bufs, 0xc);
    func_02133ef8(offs, 0xc);
    func_02133ef8(masks, 6);
    i = 0;
    g = gCommManager;
    for (; i < 3; i++) {
        mode = vals[i];
        if (mode != 3) {
            bufs[i] = _ZN11CommManager10getSendBufEi(g, i + 1);
            u8 *bb = bufs[i];
            CommPacket_SetHeader(bb, 0, 3);
            offs[i] = offs[i] + 1;
            if (mode == 0) {
                bb[1] = 0;
                offs[i] = offs[i] + 1;
            } else if (mode == 1) {
                bb[1] = 1;
                offs[i] = offs[i] + 1;
            } else {
                MI_CpuCopy8(func_0208f0b0((u32)ptrs[i]), bb + 1, 0x84c);
                offs[i] = offs[i] + 0x84c;
            }
            masks[i] = 1 << (i + 1);
        }
    }
    if (a == 3 && c == 3) {
        if (e == 3) goto yes;
    }
    if (Comm_HasSendCredit((u16)(masks[0] | masks[1] | masks[2]))) {
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, bufs[0], offs[0], masks[0], (u32)bufs[1], offs[1], masks[1], (u32)bufs[2], offs[2], masks[2]);
    }
    return FALSE;
yes:
    return TRUE;
fail:
    return FALSE;
}
extern "C" void CommSend_PlayerData(u8 *p, u32 v) {
    CommSend_Chunked(p, (void *)PlayerData_Get(PlayerSession_GetDataIndex(gCommManager->unk_68)), 0x228c, 4, v);
}
extern "C" void CommSend_SyncVarChunk(u8 *p, u32 v) {
    CommSend_Chunked(p, _ZN11CommManager13getSyncVarBufEv(gCommManager), 0x68c, 0xc, v);
}
extern "C" BOOL CommSend_BuiltPacket(u32 a) {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(a)) {
            void *g = gCommManager;
            u8 *b = _ZN11CommManager10getSendBufEi(g, 4);
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, b, _ZN11CommManager13getControlLenEv(g), a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL CommCtrl_SendAct08() {
    u32 a = Comm_GetRemoteMask();
    if (a != 0) {
        _Z20NetOverlay_AssertAnyv();
        if (Net_IsReadyToSend()) {
            if (Comm_HasSendCredit(a)) {
                void *g = gCommManager;
                _ZN11CommManager7isMyAidEj(g, 0);
                u8 *b = _ZN11CommManager10getSendBufEi(g, 4);
                CommPacket_SetHeader(b, 0, 8);
                b[1] = 1;
                return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
            }
        }
        return FALSE;
    }
    return TRUE;
}
extern "C" BOOL CommCtrl_SendAct07() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(1)) {
            void *g = gCommManager;
            CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 7);
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL CommSend_JoinDone(u32 a) {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(a)) {
            void *g = gCommManager;
            CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0xb);
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL CommSend_JoinReady() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend()) {
        if (Comm_HasSendCredit(1)) {
            void *g = gCommManager;
            _ZN11CommManager7isMyAidEj(g, 0);
            CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 9);
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
}

// ======== unk_020742f4.cpp ========
namespace n1 {
struct CommManager;
extern "C" {
extern void (*sCommCtrlHandlers[])(void *, s32, s32);
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 SaveManager_Get();
}
extern "C" {
s32 func_020a0208(s32, s32);
}
extern "C" {
s32 func_020a0228(s32);
}
extern "C" {
s32 func_020a024c(s32, s32, s32);
}
extern "C" {
s32 func_020a02b0(s32, s32);
}
extern "C" {
s32 func_020a023c(s32, s32, s32);
}
extern "C" {
s32 func_020a0244(s32, s32, s32);
}
extern "C" {
s32 func_020a02b8(s32, s32);
}
extern "C" {
s32 func_020a0294(s32);
}
extern "C" {
s32 func_020a0298(s32, s32);
}
extern "C" {
s32 func_020a02a0(s32, s32);
}
extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}
extern "C" {
s32 PlayerData_GetCurrent();
}
extern "C" {
s32 func_02097a04(s32);
}
extern "C" {
s32 _ZN12Unk_020e282413func_020a148cEv(s32);
}
extern "C" {
s32 PlayerSession_SetDataIndex(s32, s32);
}
extern "C" {
void func_020a68a8(void *);
}
extern "C" {
void func_020a6898(void *);
}
extern "C" {
void func_020a6858(void *, u8 *, u8 *, u8 *, u32 *);
}
extern "C" {
void func_020a6878(void *, u32, u32, u32, u32);
}
extern "C" {
s32 func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
u32 Net_GetMyAid();
}
extern "C" {
s32 func_020a027c(s32, s32, s32);
}
extern "C" {
void CommBlock_ParseAll(void *, s32, s32);
}
extern "C" {
s32 _ZN11CommManager13getSyncVarBufEv(CommManager *);
}
extern "C" {
s32 _ZN11CommManager14getPendingModeEv(CommManager *);
}
extern "C" {
s32 _ZN11CommManager14setPendingModeEj(CommManager *, u32);
}
extern "C" {
s32 func_020a5cfc(s32);
}
extern "C" {
s32 func_020a5f9c(s32, u32);
}
extern "C" {
s32 func_020a5f7c(u16);
}
extern "C" {
s32 PlayerData_Get(s32);
}
extern "C" {
s32 func_0208f0b0(s32);
}
extern "C" {
s32 func_0208f1dc(s32);
}
extern "C" {
s32 _ZN12Unk_020e282413func_020a1464Ejh(s32, s32, s32);
}
extern "C" {
s32 SaveManager_GetTownCompressBuf();
}
extern "C" {
s32 _ZN18TownCompressBuffer7getSizeEv(s32);
}
extern "C" {
s32 _ZN18TownCompressThread5startEj(s32, s32);
}
extern "C" {
s32 SaveManager_GetTownCompressThread();
}
extern "C" {
s32 func_020a02c8(s32, u16);
}
extern "C" {
s32 func_020a02c0(s32, u8);
}
extern "C" {
void _Z20NetOverlay_AssertAnyv();
}
extern "C" {
u32 Net_IsReadyToSend();
}
extern "C" {
u32 Comm_HasSendCredit(u32);
}
extern "C" {
s32 _ZN11CommManager7isMyAidEj(CommManager *, s32);
}
extern "C" {
s32 _ZN11CommManager10getSendBufEi(CommManager *, s32);
}
extern "C" {
s32 CommPacket_SetHeader(s32, s32, s32);
}
extern "C" {
s32 _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(CommManager *, s32, u32, u32, s32, s32, s32, s32, s32, s32);
}
extern "C" {
s32 PlayerSession_GetDataIndex(s32);
}
extern "C" {
s32 CommSend_Chunked(void *, s32, s32, s32, s32);
}
extern "C" {
void Comm_GetRemoteMask();
}
extern "C" {
s32 func_020a5e74(u32, u8 *, u8 *, u8 *);
}
extern "C" {
s32 Clock_GetDateTime(void *);
}


struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    volatile s32 unk_68;
};
extern "C" s32 CommSend_DateTime(u32 a) {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(a) != 0) {
        CommManager *g = gCommManager;
        _ZN11CommManager7isMyAidEj(g, 0);
        u8 *p = (u8 *)_ZN11CommManager10getSendBufEi(g, 4);
        CommPacket_SetHeader((s32)p, 0, 0xa);
        u32 t[2];
        t[0] = 0;
        t[1] = 0;
        Clock_GetDateTime(t);
        MI_CpuCopy8(t, p + 1, 8);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 9, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct0E(u8 a, u32 b) {
    if (b != 0) {
        _Z20NetOverlay_AssertAnyv();
        if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(b) != 0) {
            CommManager *g = gCommManager;
            u8 *p = (u8 *)_ZN11CommManager10getSendBufEi(g, 4);
            CommPacket_SetHeader((s32)p, 0, 0xe);
            p[1] = a;
            return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 2, b, 0, 0, 0, 0, 0, 0);
        }
        return 0;
    }
    return 1;
}
extern "C" s32 CommSend_SlotStatusAll(s32 a) {
    u16 m = 1 << a;
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(m) != 0) {
        u8 *p = (u8 *)_ZN11CommManager10getSendBufEi(gCommManager, 4);
        u32 len = 0;
        u32 j;
        CommPacket_SetHeader((s32)p, 0, 0xf);
        p++;
        len++;
        for (j = 0; j < 4; j++) {
            struct {
                u8 r, g, b;
                u8 col[2];
            } l;
            func_020a5e74(j, &l.r, &l.g, &l.b);
            func_020a68a8(l.col);
            func_020a6878(l.col, l.r, l.g, l.b, 7);
            MI_CpuCopy8(l.col, p, 2);
            p += 2;
            len += 2;
            func_020a6898(l.col);
        }
        CommManager *g = gCommManager;
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), len, m, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct10() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(1) != 0) {
        CommManager *g = gCommManager;
        _ZN11CommManager7isMyAidEj(g, 0);
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x10);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct11() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(1) != 0) {
        CommManager *g = gCommManager;
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x11);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct12(u32 a) {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(a) != 0) {
        CommManager *g = gCommManager;
        _ZN11CommManager7isMyAidEj(g, 0);
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x12);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct13() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(1) != 0) {
        CommManager *g = gCommManager;
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x13);
        Comm_GetRemoteMask();
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommCtrl_SendAct14() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(1) != 0) {
        CommManager *g = gCommManager;
        _ZN11CommManager7isMyAidEj(g, 0);
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x14);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 CommSend_PlayerDataToHost(void *a) {
    s32 r = PlayerData_Get(PlayerSession_GetDataIndex(gCommManager->unk_68));
    return CommSend_Chunked(a, r, 0x228c, 0x15, 1);
}
extern "C" s32 CommSend_LetterStorageToHost(void *a) {
    s32 r = func_02097a04(PlayerData_Get(PlayerSession_GetDataIndex(gCommManager->unk_68)));
    return CommSend_Chunked(a, r, 0x477c, 0x16, 1);
}
extern "C" s32 CommCtrl_SendAct17() {
    _Z20NetOverlay_AssertAnyv();
    if (Net_IsReadyToSend() != 0 && Comm_HasSendCredit(1) != 0) {
        CommManager *g = gCommManager;
        _ZN11CommManager7isMyAidEj(g, 0);
        CommPacket_SetHeader(_ZN11CommManager10getSendBufEi(g, 4), 0, 0x17);
        return _ZN11CommManager11sendPacketsEPhjjS0_jtS0_jt(g, _ZN11CommManager10getSendBufEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" void CommCtrl_RecvMemberInfo(u8 *a) {
    if (func_020b50e8() == 0xc) {
        if (SaveManager_Get() != 0) {
            s32 v = *a;
            func_020a02c8(SaveManager_Get(), v & 0xf);
            func_020a02c0(SaveManager_Get(), (v >> 6) & 3);
        }
    }
}
extern "C" void CommCtrl_RecvTownChunk(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0xc) {
        MI_CpuCopy8(a, &n, 4);
        s32 p = SaveManager_GetTownCompressBuf();
        MI_CpuCopy8(a + 4, (void *)(p + n), b - 4);
        s32 r = _ZN18TownCompressBuffer7getSizeEv(p);
        u32 lim;
        if (r == 0) {
            lim = 0x15fe4;
        } else {
            lim = r + 4;
        }
        if (n + (b - 4) >= lim) {
            _ZN18TownCompressThread5startEj(SaveManager_GetTownCompressThread(), 0);
        }
    }
}
extern "C" void CommCtrl_RecvVillagerTransfer(u8 *a, s32 b, s32 c) {
    u32 n;
    if (b != 0) {
        MI_CpuCopy8(a, &n, 4);
        s32 q = func_0208f0b0(c);
        MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
    } else {
        func_0208f1dc(func_0208f0b0(c));
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (SaveManager_Get() != 0) {
            _ZN12Unk_020e282413func_020a1464Ejh(SaveManager_Get(), c, 1);
        }
    }
}
extern "C" void CommCtrl_RecvVillagerTransferReply(u8 *a, s32 b) {
    if (b == 1) {
        if (*a != 0) {
            func_0208f1dc(func_0208f0b0(4));
        }
    } else {
        MI_CpuCopy8(a, (void *)func_0208f0b0(4), 0x84c);
    }
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            _ZN12Unk_020e282413func_020a1464Ejh(SaveManager_Get(), gCommManager->unk_64, 1);
        }
    }
}
extern "C" void CommCtrl_RecvVisitorPlayerData(u8 *a, s32 b, s32 c) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 t = c + 3;
    s32 q = PlayerData_Get(t);
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
    PlayerSession_SetDataIndex(c, t);
}
extern "C" void CommCtrl_RecvNetState(u8 *a, s32 b, s32 c) {
    func_020a5f9c(c, *a);
}
extern "C" void CommCtrl_Act06(u8 *a) {
    s32 v = *a;
    func_020a5f9c(3, v & 7);
    func_020a5f7c((v >> 4) & 0xf);
}
extern "C" void CommCtrl_Act07() {
    func_020a5cfc(1);
}
extern "C" void CommCtrl_Act08(u8 *a) {
    CommManager *g = gCommManager;
    if (_ZN11CommManager14getPendingModeEv(g) == 3) {
        _ZN11CommManager14setPendingModeEj(g, *a);
    }
}
extern "C" void CommCtrl_RecvJoinReady() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (SaveManager_Get() != 0) {
            func_020a02a0(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommCtrl_RecvDateTime(void *a) {
    if (func_020b50e8() == 0xc) {
        if (SaveManager_Get() != 0) {
            MI_CpuCopy8(a, (void *)func_020a0294(SaveManager_Get()), 8);
            func_020a0298(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommCtrl_RecvJoinDone() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (SaveManager_Get() != 0) {
            func_020a02b8(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommCtrl_RecvSyncVarChunk(u8 *a, s32 b) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 q = _ZN11CommManager13getSyncVarBufEv(gCommManager);
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
}
extern "C" void CommCtrl_RecvStateBlocks(void *a, s32 b, s32 c) {
    CommBlock_ParseAll(a, b, c);
}
extern "C" void CommCtrl_Act0E(u8 *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e || func_020b50e8() == 9) {
        s32 p = SaveManager_Get();
        if (p != 0) {
            if (Net_GetMyAid() == 0) {
                func_020a027c(p, c, *a);
            } else {
                func_020a027c(p, 0, *a);
            }
        }
    }
}
extern "C" void CommCtrl_RecvSlotStatusAll(u8 *a) {
    struct {
        u8 r, g, b;
        u8 col[2];
    } l;
    u32 out;
    u32 i;
    for (i = 0; i < 4; i++) {
        func_020a68a8(l.col);
        MI_CpuCopy8(a, l.col, 2);
        func_020a6858(l.col, &l.r, &l.g, &l.b, &out);
        func_020a63bc(i, l.r, l.g, l.b, out);
        a += 2;
        func_020a6898(l.col);
    }
}
extern "C" void CommCtrl_Act10(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a0244(SaveManager_Get(), c, 1);
        }
    }
}
extern "C" void CommCtrl_Act11(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a023c(SaveManager_Get(), c, 1);
        }
    }
}
extern "C" void CommCtrl_Act12() {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a02b0(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommCtrl_Act13(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a024c(SaveManager_Get(), c, 1);
        }
    }
}
extern "C" void CommCtrl_Act14(void *a, s32 b, s32 c) {
    func_020a0228(c);
}
extern "C" void CommCtrl_RecvPlayerDataToHost(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            MI_CpuCopy8(a, &n, 4);
            s32 r = _ZN12Unk_020e282413func_020a148cEv(SaveManager_Get());
            CommManager *g = gCommManager;
            g->unk_68 = 0;
            PlayerSession_SetDataIndex(g->unk_68, r);
            s32 q = PlayerData_GetCurrent();
            MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
        }
    }
}
extern "C" void CommCtrl_RecvLetterStorageToHost(u8 *a, s32 b) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 q = func_02097a04(PlayerData_GetCurrent());
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
}
extern "C" void CommCtrl_Act17() {
    if (func_020b50e8() == 0x2e) {
        if (SaveManager_Get() != 0) {
            func_020a0208(SaveManager_Get(), 1);
        }
    }
}
extern "C" void CommCtrl_Dispatch(void *a, s32 b, s32 c, u32 idx) {
    sCommCtrlHandlers[idx](a, b, c);
}
}

// ======== data ========
namespace n0 {
extern "C" {
typedef void (*FPT_data_020cbb1c)(u32);
typedef void (*FPT_data_020cbb24)(u8 *, u32);
typedef void (*FPT_data_020cbb74)(void *, s32, s32);
typedef void (*FPT_data_020cbc60)(u32, u32, u32, u32);
typedef void (*FPT_data_020cbd60)(void *);
typedef void (*FPT_data_020cbe78)(void *, u32, u32);
void CommCtrl_Act17(void);
void CommCtrl_RecvLetterStorageToHost(void);
void CommCtrl_RecvPlayerDataToHost(void);
void CommCtrl_Act14(void);
void CommCtrl_Act13(void);
void CommCtrl_Act12(void);
void CommCtrl_Act11(void);
void CommCtrl_Act10(void);
void CommCtrl_RecvSlotStatusAll(void);
void CommCtrl_Act0E(void);
void CommCtrl_RecvStateBlocks(void);
void CommCtrl_RecvSyncVarChunk(void);
void CommCtrl_RecvJoinDone(void);
void CommCtrl_RecvDateTime(void);
void CommCtrl_RecvJoinReady(void);
void CommCtrl_Act08(void);
void CommCtrl_Act07(void);
void CommCtrl_Act06(void);
void CommCtrl_RecvNetState(void);
void CommCtrl_RecvVisitorPlayerData(void);
void CommCtrl_RecvVillagerTransferReply(void);
void CommCtrl_RecvVillagerTransfer(void);
void CommCtrl_RecvTownChunk(void);
void CommCtrl_RecvMemberInfo(void);
void CommRecv_ItemSetRequest(void);
void CommRecv_ItemSet(void);
void CommRecv_Act11(void);
void CommRecv_Act10(void);
void CommRecv_Act0F(void);
void CommRecv_Act0E(void);
void CommRecv_Act0D(void);
void CommRecv_Act0C(void);
void CommRecv_Act0B(void);
void CommRecv_Act0A(void);
void CommRecv_SlotStatus(void);
void CommRecv_Act08(void);
void CommRecv_Act07(void);
void CommRecv_Act06(void);
void CommRecv_PlayerLeft(void);
void CommRecv_Act04(void);
void CommRecv_Act03(void);
void CommRecv_Act02(void);
void CommRecv_OwnNetState(void);
void CommRecv_PeerNetState(void);
void CommRecv_VillagerItems(void);
void CommRecv_VillagerShirt(void);
void CommRecv_Act3F(void);
void CommRecv_Act3D(void);
void CommRecv_Act3C(void);
void CommRecv_VillagerReceivedItem(void);
void CommRecv_VillagerFriendship(void);
void CommRecv_VillagerImpression(void);
void CommRecv_VillagerMemorySetPlayer(void);
void CommRecv_VillagerMemoryInit(void);
void CommRecv_ObjectUseRelease(void);
void CommRecv_ObjectUseReply(void);
void CommRecv_ObjectUseRequest(void);
void CommRecv_ItemActionResult(void);
void CommRecv_ItemActionRequest(void);
void CommRecv_TanChange(void);
void CommRecv_FaceChange(void);
void CommRecv_HairChange(void);
void CommRecv_ClothesChange(void);
void CommRecv_FishDisplay(void);
void CommRecv_FieldActorRemove(void);
void CommRecv_FieldActorRelease(void);
void CommRecv_FieldActorClaimResult(void);
void CommRecv_FieldActorClaimRequest(void);
void CommRecv_ShopPurchaseAck(void);
void CommRecv_ShopPurchase(void);
void CommRecv_Act25(void);
void CommRecv_BuildingLeave(void);
void CommRecv_BuildingEnter(void);
void CommRecv_BuildingState(void);
void CommRecv_SpotRelease(void);
void CommRecv_SpotReserveDenied(void);
void CommRecv_SpotReserveGranted(void);
void CommRecv_SpotReserveRequest(void);
void CommRecv_FurnitureUseRequest(void);
void CommRecv_FurniturePlace(void);
void CommRecv_FurnitureRemove(void);
void CommRecv_RoomItemSet(void);
void CommRecv_HouseRoomFlag(void);
void CommRecv_FurnitureState(void);
void CommRecv_CharInteract(void);
void CommRecv_SubCommand(void);
void CommRecv_PatternMove(void);
void CommRecv_RoomWallFloor(void);
void CommSyncVar_PackSpNpc25(void);
void CommSyncVar_PackSpNpc24(void);
void CommSyncVar_PackSpNpc23(void);
void CommSyncVar_PackSpNpc22(void);
void CommSyncVar_PackSpNpc21(void);
void CommSyncVar_PackSpNpc20(void);
void CommSyncVar_PackSpNpc1F(void);
void CommSyncVar_PackSpNpc1E(void);
void CommSyncVar_PackSpNpc1D(void);
void CommSyncVar_PackSpNpc1C(void);
void CommSyncVar_PackSpNpc1B(void);
void CommSyncVar_PackSpNpc1A(void);
void CommSyncVar_PackSpNpc19(void);
void CommSyncVar_PackSpNpc18(void);
void CommSyncVar_PackSpNpc17(void);
void CommSyncVar_PackSpNpc16(void);
void CommSyncVar_PackSpNpc15(void);
void CommSyncVar_PackSpNpc14(void);
void CommSyncVar_PackSpNpc13(void);
void CommSyncVar_PackSpNpc12(void);
void CommSyncVar_PackSpNpc11(void);
void CommSyncVar_PackSpNpc10(void);
void CommSyncVar_PackSpNpc0F(void);
void CommSyncVar_PackSpNpc0E(void);
void CommSyncVar_PackSpNpc0D(void);
void CommSyncVar_PackSpNpc0C(void);
void CommSyncVar_PackSpNpc0B(void);
void CommSyncVar_PackSpNpc0A(void);
void CommSyncVar_PackSpNpc09(void);
void CommSyncVar_PackSpNpc08(void);
void CommSyncVar_PackSpNpc07(void);
void CommSyncVar_PackSpNpc06(void);
void CommSyncVar_PackSpNpc05(void);
void CommSyncVar_PackSpNpc04(void);
void CommSyncVar_PackSpNpc03(void);
void CommSyncVar_PackSpNpc02(void);
void CommSyncVar_PackSpNpc01(void);
void CommSyncVar_PackSpNpc00(void);
void CommSyncVar_PackVar1F(void);
void CommSyncVar_PackVar1E(void);
void CommSyncVar_PackVar1D(void);
void CommSyncVar_PackVar1C(void);
void CommSyncVar_PackVar1B(void);
void CommSyncVar_PackVar1A(void);
void CommSyncVar_PackVar19(void);
void CommSyncVar_PackVar18(void);
void CommSyncVar_PackPlayerMsg3(void);
void CommSyncVar_PackPlayerMsg2(void);
void CommSyncVar_PackPlayerMsg1(void);
void CommSyncVar_PackPlayerMsg0(void);
void CommSyncVar_PackVillager7(void);
void CommSyncVar_PackVillager6(void);
void CommSyncVar_PackVillager5(void);
void CommSyncVar_PackVillager4(void);
void CommSyncVar_PackVillager3(void);
void CommSyncVar_PackVillager2(void);
void CommSyncVar_PackVillager1(void);
void CommSyncVar_PackVillager0(void);
void CommSyncVar_PackVar0B(void);
void CommSyncVar_PackVar0A(void);
void CommSyncVar_PackVar09(void);
void CommSyncVar_PackVar08(void);
void CommSyncVar_PackPlayerAngle3(void);
void CommSyncVar_PackPlayerAngle2(void);
void CommSyncVar_PackPlayerAngle1(void);
void CommSyncVar_PackPlayerAngle0(void);
void CommSyncVar_PackPlayerPos3(void);
void CommSyncVar_PackPlayerPos2(void);
void CommSyncVar_PackPlayerPos1(void);
void CommSyncVar_PackPlayerPos0(void);
void CommSyncVar_InitVillager7(void);
void CommSyncVar_InitVillager6(void);
void CommSyncVar_InitVillager5(void);
void CommSyncVar_InitVillager4(void);
void CommSyncVar_InitVillager3(void);
void CommSyncVar_InitVillager2(void);
void CommSyncVar_InitVillager1(void);
void CommSyncVar_InitVillager0(void);
void CommBlock_ReadAct01(void);
void CommBlock_ReadAct00(void);
void CommBlock_WriteAct01(void);
void CommBlock_WriteAct00(void);
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbb1c sCommBlockWriters[2];
const FPT_data_020cbb1c sCommBlockWriters[2] = {
    (FPT_data_020cbb1c)CommBlock_WriteAct00,
    (FPT_data_020cbb1c)CommBlock_WriteAct01
};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbb24 sCommBlockReaders[2];
const FPT_data_020cbb24 sCommBlockReaders[2] = {
    (FPT_data_020cbb24)CommBlock_ReadAct00,
    (FPT_data_020cbb24)CommBlock_ReadAct01
};
}
}
namespace n0 {
extern "C" {
extern const u8 sCommSyncVarVarSizes[72];
const u8 sCommSyncVarVarSizes[72] = {0x5, 0x5, 0x5, 0x5, 0x2, 0x2, 0x2, 0x2, 0xc, 0xc, 0xc, 0xc, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x29, 0x29, 0x29, 0x29, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x0, 0x0};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbd60 sCommSyncVarInitHandlers[70];
const FPT_data_020cbd60 sCommSyncVarInitHandlers[70] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (FPT_data_020cbd60)CommSyncVar_InitVillager0,
    (FPT_data_020cbd60)CommSyncVar_InitVillager1,
    (FPT_data_020cbd60)CommSyncVar_InitVillager2,
    (FPT_data_020cbd60)CommSyncVar_InitVillager3,
    (FPT_data_020cbd60)CommSyncVar_InitVillager4,
    (FPT_data_020cbd60)CommSyncVar_InitVillager5,
    (FPT_data_020cbd60)CommSyncVar_InitVillager6,
    (FPT_data_020cbd60)CommSyncVar_InitVillager7,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
}
}
extern char data_020e0548[];
char *data_020e0544 = data_020e0548;
char data_020e0548[] = "bbs_default";
namespace n0 {
extern "C" {
extern const FPT_data_020cbb74 sCommCtrlHandlers[24];
const FPT_data_020cbb74 sCommCtrlHandlers[24] = {
    (FPT_data_020cbb74)CommCtrl_RecvMemberInfo,
    (FPT_data_020cbb74)CommCtrl_RecvTownChunk,
    (FPT_data_020cbb74)CommCtrl_RecvVillagerTransfer,
    (FPT_data_020cbb74)CommCtrl_RecvVillagerTransferReply,
    (FPT_data_020cbb74)CommCtrl_RecvVisitorPlayerData,
    (FPT_data_020cbb74)CommCtrl_RecvNetState,
    (FPT_data_020cbb74)CommCtrl_Act06,
    (FPT_data_020cbb74)CommCtrl_Act07,
    (FPT_data_020cbb74)CommCtrl_Act08,
    (FPT_data_020cbb74)CommCtrl_RecvJoinReady,
    (FPT_data_020cbb74)CommCtrl_RecvDateTime,
    (FPT_data_020cbb74)CommCtrl_RecvJoinDone,
    (FPT_data_020cbb74)CommCtrl_RecvSyncVarChunk,
    (FPT_data_020cbb74)CommCtrl_RecvStateBlocks,
    (FPT_data_020cbb74)CommCtrl_Act0E,
    (FPT_data_020cbb74)CommCtrl_RecvSlotStatusAll,
    (FPT_data_020cbb74)CommCtrl_Act10,
    (FPT_data_020cbb74)CommCtrl_Act11,
    (FPT_data_020cbb74)CommCtrl_Act12,
    (FPT_data_020cbb74)CommCtrl_Act13,
    (FPT_data_020cbb74)CommCtrl_Act14,
    (FPT_data_020cbb74)CommCtrl_RecvPlayerDataToHost,
    (FPT_data_020cbb74)CommCtrl_RecvLetterStorageToHost,
    (FPT_data_020cbb74)CommCtrl_Act17
};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbc60 sCommRecvHandlers[64];
const FPT_data_020cbc60 sCommRecvHandlers[64] = {
    (FPT_data_020cbc60)CommRecv_PeerNetState,
    (FPT_data_020cbc60)CommRecv_OwnNetState,
    (FPT_data_020cbc60)CommRecv_Act02,
    (FPT_data_020cbc60)CommRecv_Act03,
    (FPT_data_020cbc60)CommRecv_Act04,
    (FPT_data_020cbc60)CommRecv_PlayerLeft,
    (FPT_data_020cbc60)CommRecv_Act06,
    (FPT_data_020cbc60)CommRecv_Act07,
    (FPT_data_020cbc60)CommRecv_Act08,
    (FPT_data_020cbc60)CommRecv_SlotStatus,
    (FPT_data_020cbc60)CommRecv_Act0A,
    (FPT_data_020cbc60)CommRecv_Act0B,
    (FPT_data_020cbc60)CommRecv_Act0C,
    (FPT_data_020cbc60)CommRecv_Act0D,
    (FPT_data_020cbc60)CommRecv_Act0E,
    (FPT_data_020cbc60)CommRecv_Act0F,
    (FPT_data_020cbc60)CommRecv_Act10,
    (FPT_data_020cbc60)CommRecv_Act11,
    (FPT_data_020cbc60)CommRecv_ItemSet,
    (FPT_data_020cbc60)CommRecv_ItemSetRequest,
    (FPT_data_020cbc60)CommRecv_RoomWallFloor,
    (FPT_data_020cbc60)CommRecv_PatternMove,
    (FPT_data_020cbc60)CommRecv_SubCommand,
    (FPT_data_020cbc60)CommRecv_CharInteract,
    (FPT_data_020cbc60)CommRecv_FurnitureState,
    (FPT_data_020cbc60)CommRecv_HouseRoomFlag,
    (FPT_data_020cbc60)CommRecv_RoomItemSet,
    (FPT_data_020cbc60)CommRecv_FurnitureRemove,
    (FPT_data_020cbc60)CommRecv_FurniturePlace,
    (FPT_data_020cbc60)CommRecv_FurnitureUseRequest,
    (FPT_data_020cbc60)CommRecv_SpotReserveRequest,
    (FPT_data_020cbc60)CommRecv_SpotReserveGranted,
    (FPT_data_020cbc60)CommRecv_SpotReserveDenied,
    (FPT_data_020cbc60)CommRecv_SpotRelease,
    (FPT_data_020cbc60)CommRecv_BuildingState,
    (FPT_data_020cbc60)CommRecv_BuildingEnter,
    (FPT_data_020cbc60)CommRecv_BuildingLeave,
    (FPT_data_020cbc60)CommRecv_Act25,
    (FPT_data_020cbc60)CommRecv_ShopPurchase,
    (FPT_data_020cbc60)CommRecv_ShopPurchaseAck,
    (FPT_data_020cbc60)CommRecv_FieldActorClaimRequest,
    (FPT_data_020cbc60)CommRecv_FieldActorClaimResult,
    (FPT_data_020cbc60)CommRecv_FishDisplay,
    (FPT_data_020cbc60)CommRecv_ClothesChange,
    (FPT_data_020cbc60)CommRecv_HairChange,
    (FPT_data_020cbc60)CommRecv_FaceChange,
    (FPT_data_020cbc60)CommRecv_TanChange,
    (FPT_data_020cbc60)CommRecv_FieldActorRelease,
    (FPT_data_020cbc60)CommRecv_FieldActorRemove,
    (FPT_data_020cbc60)CommRecv_ItemActionRequest,
    (FPT_data_020cbc60)CommRecv_ItemActionResult,
    (FPT_data_020cbc60)CommRecv_ObjectUseRequest,
    (FPT_data_020cbc60)CommRecv_ObjectUseReply,
    (FPT_data_020cbc60)CommRecv_ObjectUseRelease,
    (FPT_data_020cbc60)CommRecv_VillagerMemoryInit,
    (FPT_data_020cbc60)CommRecv_VillagerMemorySetPlayer,
    (FPT_data_020cbc60)CommRecv_VillagerImpression,
    (FPT_data_020cbc60)CommRecv_VillagerFriendship,
    (FPT_data_020cbc60)CommRecv_VillagerShirt,
    (FPT_data_020cbc60)CommRecv_VillagerItems,
    (FPT_data_020cbc60)CommRecv_Act3C,
    (FPT_data_020cbc60)CommRecv_Act3D,
    (FPT_data_020cbc60)CommRecv_VillagerReceivedItem,
    (FPT_data_020cbc60)CommRecv_Act3F
};
}
}
Unk_021cc7d0 gOverlayHandle;
namespace n0 {
extern "C" {
extern const FPT_data_020cbe78 sCommSyncVarPackHandlers[70];
const FPT_data_020cbe78 sCommSyncVarPackHandlers[70] = {
    (FPT_data_020cbe78)CommSyncVar_PackPlayerPos0,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerPos1,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerPos2,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerPos3,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerAngle0,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerAngle1,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerAngle2,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerAngle3,
    (FPT_data_020cbe78)CommSyncVar_PackVar08,
    (FPT_data_020cbe78)CommSyncVar_PackVar09,
    (FPT_data_020cbe78)CommSyncVar_PackVar0A,
    (FPT_data_020cbe78)CommSyncVar_PackVar0B,
    (FPT_data_020cbe78)CommSyncVar_PackVillager0,
    (FPT_data_020cbe78)CommSyncVar_PackVillager1,
    (FPT_data_020cbe78)CommSyncVar_PackVillager2,
    (FPT_data_020cbe78)CommSyncVar_PackVillager3,
    (FPT_data_020cbe78)CommSyncVar_PackVillager4,
    (FPT_data_020cbe78)CommSyncVar_PackVillager5,
    (FPT_data_020cbe78)CommSyncVar_PackVillager6,
    (FPT_data_020cbe78)CommSyncVar_PackVillager7,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerMsg0,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerMsg1,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerMsg2,
    (FPT_data_020cbe78)CommSyncVar_PackPlayerMsg3,
    (FPT_data_020cbe78)CommSyncVar_PackVar18,
    (FPT_data_020cbe78)CommSyncVar_PackVar19,
    (FPT_data_020cbe78)CommSyncVar_PackVar1A,
    (FPT_data_020cbe78)CommSyncVar_PackVar1B,
    (FPT_data_020cbe78)CommSyncVar_PackVar1C,
    (FPT_data_020cbe78)CommSyncVar_PackVar1D,
    (FPT_data_020cbe78)CommSyncVar_PackVar1E,
    (FPT_data_020cbe78)CommSyncVar_PackVar1F,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc00,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc01,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc02,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc03,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc04,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc05,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc06,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc07,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc08,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc09,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0A,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0B,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0C,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0D,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0E,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc0F,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc10,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc11,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc12,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc13,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc14,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc15,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc16,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc17,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc18,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc19,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1A,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1B,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1C,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1D,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1E,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc1F,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc20,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc21,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc22,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc23,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc24,
    (FPT_data_020cbe78)CommSyncVar_PackSpNpc25
};
}
}
namespace n0 {
extern "C" {
extern const u16 sCommSyncVarVarOffsets[70];
const u16 sCommSyncVarVarOffsets[70] = {0x0, 0x5, 0xa, 0xf, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x28, 0x34, 0x40, 0x4c, 0x6a, 0x88, 0xa6, 0xc4, 0xe2, 0x100, 0x11e, 0x13c, 0x165, 0x18e, 0x1b7, 0x1e0, 0x1e7, 0x1ee, 0x1f5, 0x1fc, 0x203, 0x20a, 0x211, 0x218, 0x236, 0x254, 0x272, 0x290, 0x2ae, 0x2cc, 0x2ea, 0x308, 0x326, 0x344, 0x362, 0x380, 0x39e, 0x3bc, 0x3da, 0x3f8, 0x416, 0x434, 0x452, 0x470, 0x48e, 0x4ac, 0x4ca, 0x4e8, 0x506, 0x524, 0x542, 0x560, 0x57e, 0x59c, 0x5ba, 0x5d8, 0x5f6, 0x614, 0x632, 0x650, 0x66e};
}
}

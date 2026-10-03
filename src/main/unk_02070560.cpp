#include "types.h"

// U125: design (pattern) storage and display helpers, 0x02070560-0x020720f8

class CommManager;
class EncodedString16Buf;
class Unk_020942c8;

namespace U125_calls {
extern "C" void func_020a78a4(EncodedString16Buf *o, u8 *src, s32 n);
extern "C" BOOL _ZN8PlayerId13func_020941e8EPS_(Unk_020942c8 *self, Unk_020942c8 *o);
}

// ======== types of unk_0206fe80.cpp ========
struct Unk_02070248_Str {
    Unk_02070248_Str();
    ~Unk_02070248_Str();
    u32 pad[7];
};
struct Unk_02070248_Big {
    Unk_02070248_Big();
    ~Unk_02070248_Big();
    u8 d[0xf4];
};
struct Unk_020702ec_Date {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};
struct Unk_0206fe80_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
};
class MuseumData {
public:
    s32 getDonationPercent();
    BOOL isFishComplete();
    BOOL isPaintingsComplete();
    BOOL isFossilsComplete();
    BOOL isInsectsComplete();
    BOOL isComplete();
    BOOL getDonorName(s32 x, u16 *id);
    void releasePlayerDonations(u32 v);
    void donate(u16 *id);
    BOOL sendCompletionLetters();
    void checkCompletionLetters();
    BOOL isDonated(u16 *id);
    u32 getDonationState(u16 *id);
    u32 getDonor(u16 *id);
    u8 *getEntry(u16 *id, s32 *out);
    void markFormerResident(u16 *id);
    void clearEntry(u16 *id);
    void clear();
    void func_0207054c();
    MuseumData *func_02070550();

    u8 unk_00[0x1b];
    u8 unk_1b[0x1d];
    u8 unk_38[0x1d];
    u8 unk_55[0xb];
    u8 unk_60;
    u8 unk_61;
    u8 unk_62;
    u8 unk_63;
};

// ======== types of unk_02070790.cpp ========
struct Unk_02070790_Game {
    u8 pad[0x64];
    s32 unk_64;
};
struct Unk_02070e4c_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
    u32 f : 3;
};
struct ItemId {
    u16 v;
    u16 pad;
    ItemId() : v(0xfff1) {}
    ~ItemId();
};
struct Unk_020707ec_Grid {
    u8 *cells;
    s32 w;
    s32 h;
};
struct Unk_020707ec_Rooms {
    u8 pad[0x44];
};
class HouseData;
class HouseRoom;
class HouseRoom {
public:
    u8 pad[0x448];
    void func_020607e0(u16 *src, u32 flag);
    void func_02060808(u16 *src, u32 flag);
    u16 *func_02060834(s32 *out);
    u16 *func_02060850(s32 *out);
};
class HouseData {
public:
    HouseRoom *func_0206052c(s32 idx);
};

// ======== types of unk_0207116c.cpp ========
struct Unk_02071460_Tbl { u8 pad[0xc]; u8 t[1]; };
struct Unk_020716a8 {
    u8 *unk_00;
    u8 *unk_04[16];
    Unk_020716a8();
    ~Unk_020716a8();
    void func_0207164c();
    void func_0207166c();
    void func_020716b8();
};
struct Unk_02071630 {
    u32 unk_00;
    Unk_02071630();
    ~Unk_02071630();
};
struct Unk_020718a4 {
    Unk_02071630 unk_00;
    Unk_020716a8 unk_04;
    Unk_020718a4();
    ~Unk_020718a4();
    void func_020718c0();
    u8 *func_020716d4(s32 i);
    void func_02071770();
    void func_020716f0();
    BOOL func_020718e8(s32 n);
    void func_02071460();
    void *func_020718e4();
    void func_0207185c(s32 bit);
    BOOL func_02071834(s32 bit);
    u32 func_020716e0(s32 i);
    u32 func_020716e8(s32 a, s32 b);
};
struct Unk_02071460_Buf { u32 v[0xb1]; };
struct Unk_020719b0_B8 { u8 v[8]; };
struct Unk_020719b0_B16 { u8 v[16]; };
struct Unk_020719b0_B512 { u32 v[128]; };
struct Unk_020719b0 {
    Unk_020719b0_B512 a;
    u16 b;
    Unk_020719b0_B8 c;
    u16 d;
    Unk_020719b0_B8 e;
    s8 f;
    u8 g;
    Unk_020719b0_B16 h;
    u8 i;
};

// ======== types of unk_02071ae0.cpp ========
struct Unk_02071b10_Id16 {
    u8 b[16];
};
struct Unk_02071fa4_Id8 {
    u8 b[8];
};
class Unk_020942c8 {
public:
    Unk_020942c8();
    ~Unk_020942c8();
    u16 unk_00;
    Unk_02071fa4_Id8 unk_02;
    u16 unk_0a;
    Unk_02071fa4_Id8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    BOOL func_020941e8(Unk_020942c8 *o);
};
class EncodedString16Buf {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void capacity();
    virtual void data();
    EncodedString16Buf();
    virtual ~EncodedString16Buf();
    void copyTo(u8 *dst, s32 n);
    void StrBuf_SetBytes(u8 *src, s32 n);
    u8 unk_04[0x20];
};
class Unk_02071ed0 : public Unk_020942c8 {
public:
    Unk_02071ed0();
    ~Unk_02071ed0();
    Unk_02071b10_Id16 unk_16;
    struct {
        u8 lo : 4;
        u8 hi : 4;
    } unk_26;

    void func_02071ed0(u32 v);
    u8 func_02071ee8();
    void func_02071ef4(u8 *src);
    void func_02071f08(EncodedString16Buf *o);
    void func_02071f1c(void *x);
    void func_02071f48(u8 *dst);
    void func_02071f5c(EncodedString16Buf *o);
    void func_02071f70(void *x);
    Unk_020942c8 *func_02071fa0();
    void func_02071fa4(Unk_020942c8 *src);
    void func_02071ff0();
    void func_0207200c(u32 v);
    u8 func_0207202c();
    void func_02072040();
    BOOL func_02072084(Unk_02071ed0 *o);
};
class Pattern {
public:
    Pattern();
    ~Pattern();
    long long unk_00[0x40];
    Unk_02071ed0 unk_200;

    Unk_02071ed0 *func_02071e04();
    void func_02071e10(u32 v);
    void func_02071e3c(void *dst);
    u8 *func_02071e58();
    BOOL func_02071e8c(Pattern *o);
};
class Unk_02071ae0 {
public:
    Pattern unk_00;
    Unk_02071ae0();
    ~Unk_02071ae0();
};
class Unk_02071c1c {
public:
    Unk_02071c1c();
    ~Unk_02071c1c();
    u8 unk_00[8];
    u32 func_02071c1c(u32 i);
    void func_02071c2c(u32 a, u32 b);
    void func_02071c44();
};
class AbleSistersPatterns {
public:
    AbleSistersPatterns();
    ~AbleSistersPatterns();
    Pattern unk_00[8];

    Pattern *func_02071b00(u8 i);
    void func_02071b10();
};
class PlayerPatterns {
public:
    PlayerPatterns();
    ~PlayerPatterns();
    Pattern unk_00[8];
    Unk_02071c1c unk_1140;

    Unk_02071c1c *func_02071c5c();
    Pattern *func_02071c68(u32 i);
    Pattern *func_02071c88(u8 i);
    void func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b);
    void func_02071d08(Unk_020942c8 *a);
};
struct Unk_020720f8_Data {
    u32 v;
    u8 f;
};
enum Unk_020720f8_Id { Unk_020720f8_Id_0 = 0 };

// record table object data_021cbcfc (0x1c bytes)
class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    u32 unk_00[7];
};

struct Unk_02071408 {
    RecordFile unk_00;
    Unk_02071408();
    ~Unk_02071408();
};

// design object data_021cc028 (0x228 bytes)
struct Unk_02071990 {
    Pattern unk_00;
    Unk_02071990();
    ~Unk_02071990();
};


// ======== unk_02071ae0.cpp ========
namespace n4 {
extern "C" {
extern u32 OVERLAY_65_ID[];
}
extern "C" {
extern u32 OVERLAY_66_ID[];
}
extern "C" {
extern u32 OVERLAY_67_ID[];
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03cc;
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern Unk_020720f8_Data gOverlayHandle;
}
extern "C" {
void *Mem_Alloc(u32 n);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void func_020712dc(void *p);
}
extern "C" {
void func_0207131c(void *p);
}
extern "C" {
BOOL func_020712a0(void *t, void *buf, s16 i);
}
extern "C" {
BOOL func_020712e0(void *t, void *buf, s16 i);
}
extern "C" {
void func_020712c4(void *t);
}
extern "C" {
void func_02071304(void *t);
}
extern "C" {
void *func_02071320(void);
}
extern "C" {
void func_02071328(void *t, Unk_02071ed0 *s, s32 id);
}
extern "C" {
Unk_020942c8 *func_0209409c(Unk_020942c8 *p);
}
extern "C" {
void func_02063950(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN8PlayerId13func_02094128Et(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN6TownId13func_02094094EPS_(Unk_020942c8 *a, Unk_020942c8 *b);
}
extern "C" {
s32 memcmp(void *a, void *b, u32 n);
}
extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}
extern "C" {
s32 Comm_AidToPeerIndex(s32 i);
}
extern "C" {
s32 Comm_IsWifi();
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void *func_020716cc();
}
extern "C" {
void _ZN12Unk_020718a413func_020716d4Ei(void *p, u32 v);
}
extern "C" {
s32 Fatal_Trap();
}
extern "C" {
void _ZN13EncodedString13fromMsgStringEP9MsgString(EncodedString16Buf *o, void *x);
}
extern "C" {
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *dst, EncodedString16Buf *o, u32 a, u32 b);
}


}
BOOL Unk_02071ed0::func_02072084(Unk_02071ed0 *o) {
    using namespace n4;
    if (unk_26.lo == o->unk_26.lo && unk_26.hi == o->unk_26.hi && unk_00 == o->unk_00 &&
        memcmp(&unk_02, &o->unk_02, 8) == 0 && U125_calls::_ZN8PlayerId13func_020941e8EPS_(this, o) != 0) {
        for (u32 i = 0; i < 16; i++) {
            if (unk_16.b[i] != o->unk_16.b[i]) return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}
namespace n4 {
}
Unk_02071ed0::Unk_02071ed0() {
    using namespace n4;}
namespace n4 {
}
Unk_02071ed0::~Unk_02071ed0() {
    using namespace n4;}
namespace n4 {
}
void Unk_02071ed0::func_02072040() {
    using namespace n4;
    void *p = func_020716cc();
    _ZN12Unk_020718a413func_020716d4Ei(p, func_0207202c());
}
namespace n4 {
}
u8 Unk_02071ed0::func_0207202c() {
    using namespace n4;
    u8 f = *(u8 *)&unk_26;
    u32 t = (u32)(f << 24) >> 28;
    t &= 0xf;
    return t;
}
namespace n4 {
}
void Unk_02071ed0::func_0207200c(u32 v) {
    using namespace n4;
    u8 &f = *(u8 *)&unk_26;
    u32 t = v & 0xf;
    f = (f & ~0xf0) | ((u8)t & 0xf) << 4;
}
namespace n4 {
}
void Unk_02071ed0::func_02071ff0() {
    using namespace n4;
    func_02071fa4((Unk_020942c8 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
}
namespace n4 {
}
void Unk_02071ed0::func_02071fa4(Unk_020942c8 *src) {
    using namespace n4;
    unk_00 = src->unk_00;
    unk_02 = src->unk_02;
    unk_0a = src->unk_0a;
    unk_0c = src->unk_0c;
    unk_14 = src->unk_14;
    unk_15 = src->unk_15;
}
namespace n4 {
}
Unk_020942c8 *Unk_02071ed0::func_02071fa0() {
    using namespace n4; return this; }
namespace n4 {
}
void Unk_02071ed0::func_02071f70(void *x) {
    using namespace n4;
    EncodedString16Buf s;
    func_02071f5c(&s);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(x, &s, 0, 0);
}
namespace n4 {
}
void Unk_02071ed0::func_02071f5c(EncodedString16Buf *o) {
    using namespace n4;
    U125_calls::func_020a78a4(o, unk_16.b, 16);
}
namespace n4 {
}
void Unk_02071ed0::func_02071f48(u8 *dst) {
    using namespace n4;
    *(Unk_02071b10_Id16 *)dst = *(Unk_02071b10_Id16 *)&unk_16;
}
namespace n4 {
}
void Unk_02071ed0::func_02071f1c(void *x) {
    using namespace n4;
    EncodedString16Buf s;
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, x);
    func_02071f08(&s);
}
namespace n4 {
}
void Unk_02071ed0::func_02071f08(EncodedString16Buf *o) {
    using namespace n4;
    o->copyTo(unk_16.b, 16);
}
namespace n4 {
}
void Unk_02071ed0::func_02071ef4(u8 *src) {
    using namespace n4;
    *(Unk_02071b10_Id16 *)&unk_16 = *(Unk_02071b10_Id16 *)src;
}
namespace n4 {
}
u8 Unk_02071ed0::func_02071ee8() {
    using namespace n4;
    return unk_26.lo;
}
namespace n4 {
}
void Unk_02071ed0::func_02071ed0(u32 v) {
    using namespace n4;
    u8 &f = *(u8 *)&unk_26;
    f = (f & ~0xf) | ((u8)v & 0xf);
}
namespace n4 {
}
BOOL Pattern::func_02071e8c(Pattern *o) {
    using namespace n4;
    if (unk_200.func_02072084(&o->unk_200)) {
        u32 *p = (u32 *)this;
        u32 *q = (u32 *)o;
        for (u32 i = 0; i < 0x80; i++) {
            if (*p != *q) return FALSE;
            p++;
            q++;
        }
        return TRUE;
    }
    return FALSE;
}
namespace n4 {
}
Pattern::Pattern() {
    using namespace n4;}
namespace n4 {
}
Pattern::~Pattern() {
    using namespace n4;}
namespace n4 {
}
u8 *Pattern::func_02071e58() {
    using namespace n4; return (u8 *)this; }
namespace n4 {
}
void Pattern::func_02071e3c(void *dst) {
    using namespace n4;
    MI_CpuCopy8(dst, func_02071e58(), 0x200);
}
namespace n4 {
}
void Pattern::func_02071e10(u32 v) {
    using namespace n4;
    u8 b = v | (v << 4);
    u32 w = (b << 24) | ((b << 16) | (b | (b << 8)));
    u32 *p = (u32 *)this;
    u32 *end = (u32 *)((u8 *)this + 0x200);
    while (p < end) *p++ = w;
}
namespace n4 {
}
Unk_02071ed0 *Pattern::func_02071e04() {
    using namespace n4;
    return &unk_200;
}
namespace n4 {
}
PlayerPatterns::PlayerPatterns() {
    using namespace n4;}
namespace n4 {
}
PlayerPatterns::~PlayerPatterns() {
    using namespace n4;}
namespace n4 {
}
void PlayerPatterns::func_02071d08(Unk_020942c8 *a) {
    using namespace n4;
    void *t = Mem_Alloc(0x1000);
    if (t) {
        if (t) func_0207131c(t);
        func_02071304(t);
        for (s16 i = 0; (u32)i < 8; i++) {
            func_020712e0(t, func_02071c88(i)->func_02071e58(), i);
            void *tbl = func_02071320();
            func_02071328(tbl, func_02071c88(i)->func_02071e04(), i);
            func_02071c88(i)->func_02071e04()->func_02071fa4(a);
        }
        Mem_Free(t);
    }
    unk_1140.func_02071c44();
}
namespace n4 {
}
void PlayerPatterns::func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b) {
    using namespace n4;
    for (u8 i = 0; i < 8; i++) {
        Unk_02071ed0 *s = func_02071c88(i)->func_02071e04();
        Unk_020942c8 *base = s->func_02071fa0();
        Unk_020942c8 *p = func_0209409c(base);
        if (p->unk_00 == b->unk_00) {
            if (memcmp(&p->unk_02, &b->unk_02, 8) == 0) {
                if (U125_calls::_ZN8PlayerId13func_020941e8EPS_(base, a)) {
                    _ZN6TownId13func_02094094EPS_(s->func_02071fa0(), func_0209409c(a));
                }
            }
        }
    }
}
namespace n4 {
}
Pattern *PlayerPatterns::func_02071c88(u8 i) {
    using namespace n4;
    return &unk_00[i & 7];
}
namespace n4 {
}
Pattern *PlayerPatterns::func_02071c68(u32 i) {
    using namespace n4;
    return &unk_00[unk_1140.func_02071c1c(i)];
}
namespace n4 {
}
Unk_02071c1c *PlayerPatterns::func_02071c5c() {
    using namespace n4;
    return &unk_1140;
}
namespace n4 {
}
Unk_02071c1c::Unk_02071c1c() {
    using namespace n4;}
namespace n4 {
}
Unk_02071c1c::~Unk_02071c1c() {
    using namespace n4;}
namespace n4 {
}
void Unk_02071c1c::func_02071c44() {
    using namespace n4;
    for (u8 i = 0; i < 8; i++) unk_00[i] = i;
}
namespace n4 {
}
void Unk_02071c1c::func_02071c2c(u32 a, u32 b) {
    using namespace n4;
    u8 t = unk_00[a & 7];
    unk_00[a & 7] = unk_00[b & 7];
    unk_00[b & 7] = t;
}
namespace n4 {
}
u32 Unk_02071c1c::func_02071c1c(u32 i) {
    using namespace n4;
    return (u8)(unk_00[i & 7] & 7);
}
namespace n4 {
}
AbleSistersPatterns::AbleSistersPatterns() {
    using namespace n4;}
namespace n4 {
}
AbleSistersPatterns::~AbleSistersPatterns() {
    using namespace n4;}
namespace n4 {
}
// ---- callers first
void AbleSistersPatterns::func_02071b10() {
    using namespace n4;
    void *t = Mem_Alloc(0x1000);
    if (t) {
        if (t) func_020712dc(t);
        func_020712c4(t);
        u16 g1 = data_020cb6f4;
        u16 g2 = data_020d03cc;
        for (s16 i = 0; (u32)i < 8; i++) {
            func_020712a0(t, func_02071b00(i)->func_02071e58(), i);
            void *tbl = func_02071320();
            func_02071328(tbl, func_02071b00(i)->func_02071e04(), i + 8);
            func_02063950(func_0209409c(func_02071b00(i)->func_02071e04()->func_02071fa0()), g1);
            _ZN8PlayerId13func_02094128Et(func_02071b00(i)->func_02071e04()->func_02071fa0(), g2);
        }
        Mem_Free(t);
    }
}
namespace n4 {
}
Pattern *AbleSistersPatterns::func_02071b00(u8 i) {
    using namespace n4;
    return &unk_00[i & 7];
}
namespace n4 {
}
Unk_02071ae0::Unk_02071ae0() {
    using namespace n4;}
namespace n4 {
}
Unk_02071ae0::~Unk_02071ae0() {
    using namespace n4;}
namespace n4 {
}

// ======== unk_0207116c.cpp ========
namespace n3 {
extern "C" {
void Gfx2d_TilesToLinear4bpp(void *src, void *dst, s32 w, s32 h);
}
extern "C" {
void Gfx2d_TilesInRow32ToLinear(void *src, void *dst, s32 x, s32 w, s32 h);
}
extern "C" {
void File_LoadToBuffer(char *name, void *p, u32 size);
}
extern "C" {
s32 func_020639e8(char *buf, const char *fmt, ...);
}
extern "C" {
void *File_Load(void *p);
}
extern "C" {
void *_ZN10RecordFile9getRecordEj(void *, s32);
}
extern "C" {
s32 _ZN10RecordFile5closeEv(void *);
}
extern "C" {
s32 _ZN10RecordFile4openEPvii(void *, void *, s32, s32);
}
extern "C" {
void _ZN10RecordFileD1Ev(void *);
}
extern "C" {
void _ZN10RecordFileC1Ev(void *);
}
extern "C" {
s32 PlayerData_GetBySessionSlot(s32 a);
}
extern "C" {
s32 _ZN10PlayerData8getIndexEv(s32 p);
}
extern "C" {
void func_02070628(u32 a, s32 b);
}
extern "C" {
void func_020705a0(s32 a);
}
extern "C" {
s32 func_020b50e8(void);
}
extern "C" {
s32 func_020b5184(void);
}
extern "C" {
void *BuildingList_FindByItem(u32 a);
}
extern "C" {
void GateHouse_ApplyTownFlag(void);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void *Mem_Alloc(u32 size);
}
extern "C" {
void Heap_Free(void *heap, void *p);
}
extern "C" {
void *Heap_Alloc(void *heap, u32 size);
}
extern "C" {
void func_0203c928(void *p);
}
extern "C" {
void func_0203c764(void *self, u16 *p, void *q);
}
extern "C" {
void *PlayerData_GetResident(void *tbl, s32 i);
}
extern "C" {
void *_ZN10PlayerData13func_020986d4Ev(void *p);
}
extern "C" {
void *_ZN14PlayerPatterns13func_02071c88Eh(void *p, u32 i);
}
extern "C" {
void *func_0203c6e4(void *unused);
}
extern "C" {
void *_ZN7Pattern13func_02071e58Ev(void *p);
}
extern "C" {
void *func_0203c6d0(void *unused);
}
extern "C" {
void *_ZN7Pattern13func_02071e04Ev(void *p);
}
extern "C" {
void *_ZN12Unk_02071ed013func_02072040Ev(void *p);
}
extern "C" {
void *func_0203c6c8(void *);
}
extern "C" {
s32 Gfx3d_LoadTexAndPltt(void *a, u32 b);
}
extern "C" {
void *ResCache_GetTex(void *a, u32 key);
}
extern "C" {
s32 func_0203c6f8(void *a, void *b);
}
extern "C" {
void *_ZN19AbleSistersPatterns13func_02071b00Eh(void *tbl, u32 i);
}
extern "C" {
void _ZN15TexPatVramTasksC1Ev(void *p);
}
extern "C" {
void *_ZN12Unk_02071ed013func_02071fa0Ev(void *p);
}
extern "C" {
void *func_0209409c(void *p);
}
extern "C" {
void func_02063950(u16 *p, u16 v);
}
extern "C" {
void _ZN8PlayerId13func_02094128Et(void *p, u16 v);
}
extern "C" {
void _ZN7PatternD1Ev(void *p);
}
extern "C" {
void _ZN7PatternC1Ev(void *p);
}
extern "C" {
void _ZN12Unk_02071ed013func_02071f1cEPv(void *a, void *b);
}
extern "C" {
void _ZN12Unk_02071ed013func_0207200cEj(void *a, u32 b);
}
extern "C" {
void _ZN12Unk_02071ed013func_02071ed0Ej(void *a, u32 b);
}
extern "C" {
void _ZN12Unk_02071ed013func_02071fa4EP12Unk_020942c8(void *a, void *b);
}
extern "C" {
void _ZN9MsgString3setEPh(void *dst, void *src);
}
extern "C" {
void _ZN8PlayerId13func_020940a0EP9MsgString(void *a, void *b);
}
extern "C" {
void _ZN6TownId13func_02094094EPS_(void *a, void *b);
}
extern "C" {
void func_020638a0(void *a, void *b);
}
extern "C" {
void _ZN12Unk_020e1c64C1Ev(void *);
}
extern "C" {
void _ZN12Unk_020e1c64D1Ev(void *);
}
extern "C" {
void _ZN8PlayerIdC1EPv(void *);
}
extern "C" {
void _ZN8PlayerIdC1Ev(void *);
}
extern "C" {
void func_020639bc(void *);
}
extern "C" {
void func_020639b8(void *);
}
extern "C" {
void _ZN12Unk_020dd38cC2Ev(void *);
}
extern "C" {
void _ZN12Unk_020dd38cD1Ev(void *);
}
extern "C" {
void _ZN8ItemNameC1Ev(void *);
}
extern "C" {
void _ZN8ItemNameD1Ev(void *);
}
extern "C" {
extern u8 data_020e416c[];
}
extern "C" {
extern char data_020e04ac[];
}
extern "C" {
extern char data_020e04c4[];
}
extern "C" {
extern char data_020e04dc[];
}
extern "C" {
extern char data_020e04f8[];
}
extern "C" {
extern char data_020e0514[];
}
extern "C" {
extern char data_020e0524[];
}
extern "C" {
extern u8 data_021cbcfc[];
}
extern "C" {
extern u32 data_021cbd18[8];
}
extern "C" {
extern u32 data_021cbd80[4][8];
}
extern "C" {
extern u8 data_021cbd38[];
}
extern "C" {
extern u8 data_021cc028[];
}
extern "C" {
extern u8 data_021cbc9c;
}
extern "C" {
extern u8 data_021cbcac[4];
}
extern "C" {
extern Unk_02071460_Tbl gSaveData;
}
extern "C" {
extern void *gCurrentHeap;
}
extern "C" {
extern u8 *data_021cbcb8;
}
extern "C" {
extern u8 *data_021cbcb0;
}
extern "C" {
extern u8 *data_021cbca4;
}
extern "C" {
extern u8 *data_021cbcb4;
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03d0;
}
extern "C" {
void func_020715e4(void *p);
}
extern "C" {
void func_02071458(void *p);
}
extern "C" {
void *func_020716cc(void);
}
extern "C" {
void *func_02071320(void);
}
static inline BOOL Unk_0207116c_Eq1(u8 *p) { return *p == 1 ? TRUE : FALSE; }
static inline BOOL Unk_0207116c_Eq0(u8 *p) { return *p == 0 ? TRUE : FALSE; }
namespace Unk_020718c0_Calls {
extern "C" s32 func_02071870(void *p);
}
namespace Unk_02071a50_Calls {
extern "C" void *func_02071a4c(void *p);
extern "C" void func_02063990(void *p, void *q);
extern "C" u16 data_020d03d4;
struct Unk_021d7350 {
    u16 unk_00;
    u16 unk_02[1];
};
extern "C" Unk_021d7350 gSaveData;
}

extern "C" void func_02071a50(void *self);
extern "C" void func_02071a4c(void);
extern "C" void func_020719b0(Unk_020719b0 *dst, Unk_020719b0 *src);
extern "C" void *func_020718dc(void);
extern "C" void func_02071870(void *p);
extern "C" void *func_020716cc(void);
extern "C" u8 *func_02071640(u8 **self, s32 i);
extern "C" void func_020715e4(void *p);
extern "C" void func_02071458(void *p);
extern "C" u32 func_02071438(void *self, s32 a, s32 b);
extern "C" u32 func_02071428(void *self, s32 i);
extern "C" void func_020713f0(void *p);
extern "C" s32 func_020713e8(void *p);
extern "C" BOOL func_02071328(void *tbl, void *dst, s32 idx);
extern "C" void *func_02071320(void);
extern "C" void func_0207131c(void *p);
extern "C" void func_02071304(void *p);
extern "C" BOOL func_020712e0(void *a, void *b, s32 x);
extern "C" void func_020712dc(void *p);
extern "C" void func_020712c4(void *p);
extern "C" BOOL func_020712a0(void *a, void *b, s32 x);
extern "C" void func_0207129c(void *p);
extern "C" void func_02071284(void *p);
extern "C" BOOL func_02071270(void *a, void *b);
extern "C" void func_0207126c(void *p);
extern "C" void func_02071240(void *dst, s32 n);
extern "C" BOOL func_0207122c(void *a, void *b);
extern "C" BOOL func_0207116c(s32 cmd, s32 x);

extern "C" void func_02071a50(void *self) {
    void *buf = Mem_Alloc(0x200);
    if (buf != 0) {
        if (buf != 0) func_0207129c(buf);
        func_02071284(buf);
        func_02071270(buf, _ZN7Pattern13func_02071e58Ev(Unk_02071a50_Calls::func_02071a4c(self)));
        void *g = func_02071320();
        func_02071328(g, _ZN7Pattern13func_02071e04Ev(Unk_02071a50_Calls::func_02071a4c(self)), 0x10);
        Unk_02071a50_Calls::func_02063990(
            func_0209409c(_ZN12Unk_02071ed013func_02071fa0Ev(_ZN7Pattern13func_02071e04Ev(Unk_02071a50_Calls::func_02071a4c(self)))),
            Unk_02071a50_Calls::gSaveData.unk_02);
        _ZN8PlayerId13func_02094128Et(_ZN12Unk_02071ed013func_02071fa0Ev(_ZN7Pattern13func_02071e04Ev(Unk_02071a50_Calls::func_02071a4c(self))),
                      Unk_02071a50_Calls::data_020d03d4);
        Mem_Free(buf);
    }
}
extern "C" void func_02071a4c(void) {}
extern "C" void func_020719b0(Unk_020719b0 *dst, Unk_020719b0 *src) {
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    dst->f = src->f;
    dst->g = src->g;
    dst->h = src->h;
    dst->i = src->i;
}
}
Unk_02071990::Unk_02071990() {
    using namespace n3;}
namespace n3 {
}
Unk_02071990::~Unk_02071990() {
    using namespace n3;}
namespace n3 {
}
BOOL Unk_020718a4::func_020718e8(s32 n) {
    using namespace n3;
    if ((u32)n < 0x20) {
        void *buf = Mem_Alloc(0x200);
        if (buf != 0) {
            if (buf != 0) func_0207126c(buf);
            func_02071240(buf, n);
            func_0207122c(buf, _ZN7Pattern13func_02071e58Ev(func_020718e4()));
            void *g = func_02071320();
            func_02071328(g, _ZN7Pattern13func_02071e04Ev(func_020718e4()), n + 0x12);
            func_02063950((u16 *)func_0209409c(_ZN12Unk_02071ed013func_02071fa0Ev(_ZN7Pattern13func_02071e04Ev(func_020718e4()))), data_020cb6f4);
            _ZN8PlayerId13func_02094128Et(_ZN12Unk_02071ed013func_02071fa0Ev(_ZN7Pattern13func_02071e04Ev(func_020718e4())), data_020d03d0);
            Mem_Free(buf);
        }
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
void *Unk_020718a4::func_020718e4() {
    using namespace n3; return this; }
namespace n3 {
extern "C" void *func_020718dc(void) { return data_021cc028; }
}
void Unk_020718a4::func_020718c0() {
    using namespace n3;
    unk_04.func_020716b8();
    func_020715e4(this);
    Unk_020718c0_Calls::func_02071870(this);
}
namespace n3 {
}
Unk_020718a4::Unk_020718a4() {
    using namespace n3; func_020718c0(); }
namespace n3 {
}
Unk_020718a4::~Unk_020718a4() {
    using namespace n3;}
namespace n3 {
extern "C" void func_02071870(void *p) {
    u32 i;
    for (i = 0; i < 4; i++) data_021cbcac[i] = 0;
    data_021cbc9c = 0;
}
}
void Unk_020718a4::func_0207185c(s32 bit) {
    using namespace n3; data_021cbc9c |= 1 << bit; }
namespace n3 {
}
BOOL Unk_020718a4::func_02071834(s32 bit) {
    using namespace n3;
    BOOL r;
    if (((data_021cbc9c >> bit) & 1) == 0) r = FALSE; else r = TRUE;
    data_021cbc9c &= ~(1 << bit);
    return r;
}
namespace n3 {
}
void Unk_020718a4::func_02071770() {
    using namespace n3;
    func_020718c0();
    unk_04.func_0207166c();
    func_02071460();
    void *h = gCurrentHeap;
    u8 *a, *b, *c, *d;
    u32 i, j;
    data_021cbcb8 = (u8 *)Heap_Alloc(h, 0x1620);
    b = (u8 *)Heap_Alloc(h, 0x1c0);
    data_021cbcb0 = b;
    a = data_021cbcb8;
    for (i = 0; i < 8; i++) {
        if (a != 0) func_0203c928(a);
        if (b != 0) _ZN15TexPatVramTasksC1Ev(b);
        a += 0x2c4;
        b += 0x38;
    }
    data_021cbca4 = (u8 *)Heap_Alloc(h, 0x1620);
    d = (u8 *)Heap_Alloc(h, 0x1c0);
    data_021cbcb4 = d;
    c = data_021cbca4;
    for (j = 0; j < 8; j++) {
        if (c != 0) func_0203c928(c);
        if (d != 0) _ZN15TexPatVramTasksC1Ev(d);
        c += 0x2c4;
        d += 0x38;
    }
}
namespace n3 {
}
void Unk_020718a4::func_020716f0() {
    using namespace n3;
    unk_04.func_0207164c();
    n3::func_02071458(this);
    void *h = gCurrentHeap;
    if (data_021cbcb8 != 0) {
        Heap_Free(h, data_021cbcb8);
        data_021cbcb8 = 0;
    }
    if (data_021cbcb0 != 0) {
        Heap_Free(h, data_021cbcb0);
        data_021cbcb0 = 0;
    }
    if (data_021cbca4 != 0) {
        Heap_Free(h, data_021cbca4);
        data_021cbca4 = 0;
    }
    if (data_021cbcb4 != 0) {
        Heap_Free(h, data_021cbcb4);
        data_021cbcb4 = 0;
    }
}
namespace n3 {
}
u32 Unk_020718a4::func_020716e8(s32 a, s32 b) {
    using namespace n3; return func_02071438(this, a, b); }
namespace n3 {
}
u32 Unk_020718a4::func_020716e0(s32 i) {
    using namespace n3; return func_02071428(this, i); }
namespace n3 {
}
u8 *Unk_020718a4::func_020716d4(s32 i) {
    using namespace n3; return func_02071640((u8 **)&unk_04, i); }
namespace n3 {
extern "C" void *func_020716cc(void) { return data_021cbd38; }
}
void Unk_020716a8::func_020716b8() {
    using namespace n3;
    unk_00 = 0;
    for (u32 i = 0; i < 16; i++) unk_04[i] = 0;
}
namespace n3 {
}
Unk_020716a8::Unk_020716a8() {
    using namespace n3; func_020716b8(); }
namespace n3 {
}
Unk_020716a8::~Unk_020716a8() {
    using namespace n3;}
namespace n3 {
}
void Unk_020716a8::func_0207166c() {
    using namespace n3;
    if (unk_00 == 0) {
        unk_00 = (u8 *)File_Load((void *)"/menu/desi/b_myd_ten0_obj.bpl");
        if (unk_00 != 0) {
            for (u32 i = 0; i < 16; i++) unk_04[i] = unk_00 + i * 32;
        }
    }
}
namespace n3 {
}
void Unk_020716a8::func_0207164c() {
    using namespace n3;
    if (unk_00 != 0) {
        Mem_Free(unk_00);
        unk_00 = 0;
    }
    func_020716b8();
}
namespace n3 {
extern "C" u8 *func_02071640(u8 **self, s32 i) { return *(u8 **)((u8 *)self + ((i & 15) << 2) + 4); }
}
Unk_02071630::Unk_02071630() {
    using namespace n3; func_020715e4(this); }
namespace n3 {
}
Unk_02071630::~Unk_02071630() {
    using namespace n3;}
namespace n3 {
extern "C" void func_020715e4(void *p) {
    u8 i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 8; j++) data_021cbd80[i][j] = 0;
    for (j = 0; j < 8; j++) data_021cbd18[j] = 0;
}
}
void Unk_020718a4::func_02071460() {
    using namespace n3;
    Unk_02071460_Buf *a = (Unk_02071460_Buf *)Mem_Alloc(0x2c4);
    Unk_02071460_Buf *b = (Unk_02071460_Buf *)Mem_Alloc(0x2c4);
    if (a != 0) {
        if (b != 0) {
            u8 i, j;
            u32 k1, k2;
            u16 v;
            s32 t;
            void *e;
            u32 *row;
            u8 *src, *p;
            u16 *q, *sp;
            if (a != 0) func_0203c928(a);
            if (b != 0) func_0203c928(b);
            v = 0x11a8;
            func_0203c764(a, &v, 0);
            i = 0;
        loop1:
            {
                j = 0;
                row = (u32 *)data_021cbd80 + i * 8;
            loop0:
                e = _ZN14PlayerPatterns13func_02071c88Eh(_ZN10PlayerData13func_020986d4Ev(PlayerData_GetResident(((Unk_02071460_Tbl *)(u32)&gSaveData)->t, i)), j);
                *b = *a;
                p = (u8 *)func_0203c6e4(b);
                src = (u8 *)_ZN7Pattern13func_02071e58Ev(e);
                for (k1 = 0; k1 < 0x200; k1++) *p++ = *src++;
                q = (u16 *)func_0203c6d0(b);
                sp = (u16 *)_ZN12Unk_02071ed013func_02072040Ev(_ZN7Pattern13func_02071e04Ev(e));
                for (k2 = 0; k2 < 0x10; k2++) *q++ = *sp++;
                if (Gfx3d_LoadTexAndPltt(func_0203c6c8(b), 0)) {
                    row[j] = (u32)ResCache_GetTex(func_0203c6c8(b), 0x4e554c4c);
                }
                j++;
                if (j < 8) goto loop0;
            }
            i++;
            if (i < 4) goto loop1;
            t = func_020b50e8();
            if (t == 10) {
                for (j = 0; j < 8; j++) {
                    func_0203c6f8(b, _ZN19AbleSistersPatterns13func_02071b00Eh((u8 *)&gSaveData + 0xfafc, j));
                    if (Gfx3d_LoadTexAndPltt(func_0203c6c8(b), 0)) {
                        data_021cbd18[j] = (u32)ResCache_GetTex(func_0203c6c8(b), 0x4e554c4c);
                    }
                }
            }
            Mem_Free(a);
            Mem_Free(b);
        }
    }
}
namespace n3 {
extern "C" void func_02071458(void *p) { func_020715e4(p); }
extern "C" u32 func_02071438(void *self, s32 a, s32 b) { return data_021cbd80[a & 3][b & 7]; }
extern "C" u32 func_02071428(void *self, s32 i) { return data_021cbd18[i & 7]; }
}
Unk_02071408::Unk_02071408() {
    using namespace n3;}
namespace n3 {
}
Unk_02071408::~Unk_02071408() {
    using namespace n3;}
namespace n3 {
extern "C" void func_020713f0(void *p) { _ZN10RecordFile4openEPvii(p, (void *)"/myOrg/myD.bin", 0x2c, 0x32); }
extern "C" s32 func_020713e8(void *p) { return _ZN10RecordFile5closeEv(p); }
extern "C" BOOL func_02071328(void *tbl, void *dst, s32 idx) {
    if (idx < 0x32) {
        u8 *rec = (u8 *)_ZN10RecordFile9getRecordEj(tbl, idx);
        if (rec != 0) {
            struct { u8 o0[0x24]; u8 o1[0x1c]; u8 o2[0x1c]; u8 o3[8]; u16 pad; u8 o4[0x16]; } l;
            _ZN8ItemNameC1Ev(l.o0);
            _ZN9MsgString3setEPh(l.o0, rec + 2);
            _ZN12Unk_02071ed013func_02071f1cEPv(dst, l.o0);
            _ZN12Unk_02071ed013func_0207200cEj(dst, rec[0]);
            _ZN12Unk_02071ed013func_02071ed0Ej(dst, rec[1]);
            _ZN12Unk_020dd38cC2Ev(l.o1);
            _ZN9MsgString3setEPh(l.o1, rec + 0x1e);
            _ZN12Unk_020e1c64C1Ev(l.o2);
            _ZN9MsgString3setEPh(l.o2, rec + 0x13);
            func_020639bc(l.o3);
            func_020638a0(l.o3, l.o1);
            _ZN8PlayerIdC1EPv(l.o4);
            _ZN8PlayerId13func_020940a0EP9MsgString(l.o4, l.o2);
            _ZN6TownId13func_02094094EPS_(l.o4, l.o3);
            _ZN12Unk_02071ed013func_02071fa4EP12Unk_020942c8(dst, l.o4);
            _ZN8PlayerIdC1Ev(l.o4);
            func_020639b8(l.o3);
            _ZN12Unk_020e1c64D1Ev(l.o2);
            _ZN12Unk_020dd38cD1Ev(l.o1);
            _ZN8ItemNameD1Ev(l.o0);
            return TRUE;
        }
    }
    return FALSE;
}
extern "C" void *func_02071320(void) { return data_021cbcfc; }
extern "C" void func_0207131c(void *p) {}
extern "C" void func_02071304(void *p) { File_LoadToBuffer("menu/desi/b_myd_my_obj.bch", p, 0x1000); }
extern "C" BOOL func_020712e0(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    Gfx2d_TilesInRow32ToLinear(a, b, x * 4, 4, 4);
    return TRUE;
}
extern "C" void func_020712dc(void *p) {}
extern "C" void func_020712c4(void *p) { File_LoadToBuffer("menu/desi/b_myd_bu_obj.bch", p, 0x1000); }
extern "C" BOOL func_020712a0(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    Gfx2d_TilesInRow32ToLinear(a, b, x * 4, 4, 4);
    return TRUE;
}
extern "C" void func_0207129c(void *p) {}
extern "C" void func_02071284(void *p) { File_LoadToBuffer("menu/desi/myc/obj0.bch", p, 0x200); }
extern "C" BOOL func_02071270(void *a, void *b) {
    Gfx2d_TilesToLinear4bpp(a, b, 4, 4);
    return TRUE;
}
extern "C" void func_0207126c(void *p) {}
extern "C" void func_02071240(void *dst, s32 n) {
    char buf[0x28];
    func_020639e8(buf, "menu/desi/myc/obj%d.bch", n + 2);
    File_LoadToBuffer(buf, dst, 0x200);
}
extern "C" BOOL func_0207122c(void *a, void *b) {
    Gfx2d_TilesToLinear4bpp(a, b, 4, 4);
    return TRUE;
}
extern "C" BOOL func_0207116c(s32 cmd, s32 x) {
    switch (cmd) {
    case 0:
    case 9: {
        s32 t = PlayerData_GetBySessionSlot(0);
        if (t != 0) {
            s32 v = _ZN10PlayerData8getIndexEv(t);
            if (v != -1) func_02070628((u8)(v & 3), x);
        }
        return TRUE;
    }
    case 4:
        if (Unk_0207116c_Eq1(data_020e416c)) {
            if (func_020b50e8() == 10) {
                func_020705a0(x);
                ((Unk_020718a4 *)func_020716cc())->func_0207185c(x & 7);
            }
        }
        return TRUE;
    case 5:
        if (Unk_0207116c_Eq0(data_020e416c)) {
            if (func_020b5184()) {
                if (BuildingList_FindByItem(0x500b)) GateHouse_ApplyTownFlag();
            }
        }
        return TRUE;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    default:
        return FALSE;
    }
}
}

// ======== unk_02070790.cpp ========
namespace n2 {
static inline BOOL Unk_02070fbc_In(volatile u16 *p, u32 lo, u32 hi) {
    u32 v = *p;
    u32 w = *p;
    BOOL r = FALSE;
    if (w >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}
extern "C" {
extern Unk_02070790_Game *gCommManager;
}
extern "C" {
extern u8 data_021dfd8c[];
}
extern "C" {
extern u8 data_021ed2d4[];
}
extern "C" {
extern u8 data_021e6e4c[];
}
extern "C" {
extern HouseData data_021e58a8;
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *p);
}
extern "C" {
void *PlayerData_GetBySessionSlot(s32 a);
}
extern "C" {
void *_ZN10PlayerData13func_020986d4Ev(void *p);
}
extern "C" {
s32 _ZN14PlayerPatterns13func_02071c88Eh(void *p, s32 i);
}
extern "C" {
Unk_020707ec_Grid *TownBlockMap_Get(void);
}
extern "C" {
Unk_020707ec_Grid *HouseRoomMaps_Get(s32 i);
}
extern "C" {
u16 *MapBlock_GetItemPtr(void *cell, s32 x, s32 y, s32 z);
}
extern "C" {
BOOL MapBlock_SetItem(void *cell, u16 *t, s32 x, s32 y, s32 v);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void *func_020706c4(s32 t, s32 i);
}
extern "C" {
void func_0207116c(s32 t, s32 i);
}
extern "C" {
void _ZN11CommManager11beginRecordEv(void *g);
}
extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *g, void *p, s32 n);
}
extern "C" {
void _ZN11CommManager9endRecordEjj(void *g, s32 a, s32 n);
}
extern "C" {
void *SaveVillagers_Get(void *a, s32 x);
}
extern "C" {
s32 _ZN12VillagerData13getVillagerIdEv(void *p);
}
extern "C" {
s32 _ZN10VillagerId7isValidEv(s32 p);
}
extern "C" {
u8 *Villager_GetFashionTaste(void *p);
}
extern "C" {
s32 Villager_GetPlan(void *p);
}
extern "C" {
s32 VillagerPlanBlock_GetPlan(s32 p);
}
extern "C" {
s32 _ZN12VillagerPlan8getStateEv(s32 p);
}
extern "C" {
s32 func_02063b8c(s32 n);
}
extern "C" {
void AbleShop_GetItem(void *tbl, s32 i, u16 *out);
}
extern "C" {
void Item_FromPlacedForm(u16 *dst, u16 *src);
}
extern "C" {
s32 _ZN19AbleSistersPatterns13func_02071b00Eh(void *p, s32 i);
}
extern "C" {
s32 _ZN7Pattern13func_02071e04Ev(s32 p);
}
extern "C" {
s32 _ZN12Unk_02071ed013func_02071ee8Ev(s32 p);
}
extern "C" {
s32 func_02070e20(s32 t);
}
extern "C" {
s32 func_020707b4(s32 a, s32 b);
}
extern "C" {
BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
BOOL func_02070fbc(s32 a, s32 b);
}
extern "C" {
void func_020707ec(s32 p);
}
extern "C" {
static inline s32 Unk_020707ec_K(u16 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}
}
extern "C" {
static inline s32 Unk_020707ec_K2(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    if (r) {
        return (s32)(v - lo);
    }
    return -1;
}
}
extern "C" {
static inline s32 Unk_020707ec_K3(BOOL f, u16 v) {
    if (f) {
        return (s32)(v - 0x1188);
    }
    return -1;
}
}
extern "C" {
static inline BOOL Unk_020707ec_In(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}
}

extern "C" BOOL func_02070fbc(s32 a, s32 b);
extern "C" BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
extern "C" s32 func_02070e20(s32 t);
extern "C" BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e);
extern "C" void func_020707ec(s32 p);
extern "C" s32 func_020707b4(s32 a, s32 b);
extern "C" s32 func_020707a8(s32 x);
extern "C" s32 func_0207079c(s32 x);
extern "C" s32 func_02070790(s32 x);
extern "C" s32 func_02070784(s32 x);

extern "C" BOOL func_02070fbc(s32 a, s32 b) {
    void *p = SaveVillagers_Get(data_021dfd8c, a);
    if (p != NULL) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) != 0) {
            u32 val = *Villager_GetFashionTaste(p);
            s32 mode = _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(p)));
            u32 rnd = func_02063b8c(100);
            s32 fa, fb, fc;
            u16 bufw[2];
            fb = 0;
            fa = 0;
            fc = 0;
            if (mode == 3) {
                if (rnd < 15) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 20) {
                    fa = 1;
                } else if (rnd < 30) {
                    fc = 1;
                }
            } else {
                if (rnd < 10) {
                    fa = 1;
                    fb = 1;
                } else if (rnd < 15) {
                    fc = 1;
                }
            }
            if (fc) {
                *(volatile u16 *)&bufw[0] = 0xfff1;
                BOOL z = FALSE;
                for (s32 i = 0; (u32)i < 6; i++) {
                    AbleShop_GetItem(data_021ed2d4, i, &bufw[0]);
                    BOOL in1 = z;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && v <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1) break;
                    if (v >= 0x3e24 && v <= 0x3ea3) break;
                }
                {
                    BOOL in1 = FALSE;
                    u32 v = *(volatile u16 *)&bufw[0];
                    u32 w = *(volatile u16 *)&bufw[0];
                    if (w >= 0x1380 && v <= 0x139f) {
                        in1 = TRUE;
                    }
                    if (in1 || (v >= 0x3e24 && v <= 0x3ea3)) {
                        Item_FromPlacedForm(&bufw[1], &bufw[0]);
                    }
                }
            }
            if (fa) {
                void *tbl = data_021e6e4c;
                s32 cnt = 0;
                for (u32 j = 0; j < 8; j++) {
                    s32 x = _ZN12Unk_02071ed013func_02071ee8Ev(_ZN7Pattern13func_02071e04Ev(_ZN19AbleSistersPatterns13func_02071b00Eh(tbl, (u8)j)));
                    if (fb) {
                        if (x == val) cnt++;
                    } else {
                        if (x != val) cnt++;
                    }
                }
                if (cnt > 0) {
                    s32 pick = func_02063b8c(cnt);
                    s32 k = 0;
                    s32 j;
                    for (j = 0; (u32)j < 8; j++) {
                        s32 x = _ZN12Unk_02071ed013func_02071ee8Ev(_ZN7Pattern13func_02071e04Ev(_ZN19AbleSistersPatterns13func_02071b00Eh(tbl, (u8)j)));
                        if (fb) {
                            if (x == val) {
                                if (pick == k) break;
                                k++;
                            }
                        } else {
                            if (x != val) {
                                if (pick == k) break;
                                k++;
                            }
                        }
                    }
                    return func_02070e4c(4, (u8)(j & 7), 6, (u8)a, b);
                }
            }
        }
    }
    return FALSE;
}
extern "C" BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = func_02070e20(a);
    s32 tc = func_02070e20(c);
    if (tc == 7) {
        return FALSE;
    }
    Pattern *r4 = (Pattern *)func_020706c4(ta, b);
    Pattern *r6 = (Pattern *)func_020706c4(tc, d);
    *r6 = *r4;
    func_0207116c(tc, d);
    if (*(u8 *)&e) {
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 0;
            bits.f = 0;
            Unk_02070790_Game *g = gCommManager;
            _ZN11CommManager11beginRecordEv(g);
            _ZN11CommManager11writeRecordEPhj(g, &bits, 4);
            _ZN11CommManager9endRecordEjj(g, 0x15, 4);
        }
    }
    return TRUE;
}
extern "C" s32 func_02070e20(s32 t) {
    Unk_02070790_Game *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) && t == 9) {
        return g->unk_64;
    }
    return t;
}
extern "C" BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_02070e4c_Bits bits;
    s32 ta = func_02070e20(a);
    s32 tc = func_02070e20(c);
    if (ta == 7 || tc == 7) {
        return FALSE;
    }
    Pattern *r5 = (Pattern *)func_020706c4(ta, b);
    Pattern *r4 = (Pattern *)func_020706c4(tc, d);
    static Pattern tmp;
    tmp = *r4;
    *r4 = *r5;
    *r5 = tmp;
    func_0207116c(ta, b);
    func_0207116c(tc, d);
    if (*(u8 *)&e) {
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            bits.a = ta;
            bits.b = b;
            bits.c = tc;
            bits.d = d;
            bits.e = 1;
            bits.f = 0;
            Unk_02070790_Game *g = gCommManager;
            _ZN11CommManager11beginRecordEv(g);
            _ZN11CommManager11writeRecordEPhj(g, &bits, 4);
            _ZN11CommManager9endRecordEjj(g, 0x15, 4);
        }
    }
    return TRUE;
}
}
// ---- data created here (creation order found by inverting the heapsort; do not move or reorder)
namespace U125_def {
extern "C" {
u8 *data_021cbca4;
}
}
Unk_02071990 data_021cc028;
namespace U125_def {
extern "C" {
u8 *data_021cbcb4;
u32 data_021cbd80[4][8];
}
}
namespace n2 {
extern "C" void func_020707ec(s32 p) {
    static ItemId t;
    s32 i, j;
    s32 m;
    s32 idx;
    s32 y2;
    s32 x2;
    u8 *cells;
    u8 *cell;
    Unk_020707ec_Grid *g = TownBlockMap_Get();
    if (g != NULL) {
        s32 x, y;
        for (y = 1; y < g->h - 1; y++) {
            for (x = 1; x < g->w - 1; x++) {
                if ((u32)x < (u32)g->w && (u32)y < (u32)g->h && g->cells != NULL) {
                    cell = g->cells + (y * g->w + x) * 0x28;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    i = 0;
                    do {
                        j = 0;
                        do {
                            u16 *v = MapBlock_GetItemPtr(cell, j, i, 0);
                            if (v != NULL) {
                                BOOL in = FALSE;
                                if (*v >= 0xa7 && *v <= 0xc6) {
                                    in = TRUE;
                                }
                                if (in) {
                                    if (p == (s32)(*v - 0xa7) / 8) {
                                        MapBlock_SetItem(cell, &t.v, j, i, 0);
                                    }
                                }
                            }
                            j++;
                        } while (j < 16);
                        i++;
                    } while (i < 16);
                }
            }
        }
    }
    m = 0;
    do {
        Unk_020707ec_Grid *g2 = HouseRoomMaps_Get(m);
        if (g2 != NULL) {
            if ((u8 *)g2->w > (u8 *)0 && (u8 *)g2->h > (u8 *)0 && g2->cells != NULL) {
                cells = g2->cells;
            } else {
                cells = NULL;
            }
            if (cells != NULL) {
                y2 = 0;
                do {
                    x2 = 0;
                    do {
                        u16 *v = MapBlock_GetItemPtr(cells, x2, y2, 0);
                        if (v != NULL) {
                            BOOL f = FALSE;
                            u16 val = *v;
                            if (val >= 0x3d84 && val <= 0x3e03) {
                                f = TRUE;
                            }
                            if (f) {
                                idx = ((Unk_020707ec_K(val, 0x3d84, 0x3e03) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3ea4 && val <= 0x3f23) {
                                idx = ((Unk_020707ec_K(val, 0x3ea4, 0x3f23) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x3f24 && val <= 0x3fa3) {
                                idx = ((Unk_020707ec_K(val, 0x3f24, 0x3fa3) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            } else if (val >= 0x4224 && val <= 0x42a3) {
                                idx = ((Unk_020707ec_K(val, 0x4224, 0x42a3) >> 3) & 3);
 if (idx == p) {
                                    MapBlock_SetItem(cells, &t.v, x2, y2, 0);
                                }
                            }
                        }
                        x2++;
                    } while (x2 < 16);
                    y2++;
                } while (y2 < 16);
            }
        }
        HouseRoom *e = data_021e58a8.func_0206052c(m);
        if (e != NULL) {
            u16 tmp[2];
            u16 *pv1 = e->func_02060850(NULL);
            BOOL f1 = FALSE;
            u16 v1 = *pv1;
            if (v1 >= 0x1188 && v1 <= 0x11a7) {
                f1 = TRUE;
            }
            if (f1) {
                u16 *pv2 = e->func_02060850(NULL);
                BOOL f2 = FALSE;
                u16 v2 = *pv2;
                if (v2 >= 0x1188 && v2 <= 0x11a7) {
                    f2 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f2, v2) >> 3) & 3);
 if (idx == p) {
                    tmp[0] = 0x113e;
                    e->func_02060808(&tmp[0], 0);
                }
            }
            u16 *pv3 = e->func_02060834(NULL);
            BOOL f3 = FALSE;
            u16 v3 = *pv3;
            if (v3 >= 0x1188 && v3 <= 0x11a7) {
                f3 = TRUE;
            }
            if (f3) {
                u16 *pv4 = e->func_02060834(NULL);
                BOOL f4 = FALSE;
                u16 v4 = *pv4;
                if (v4 >= 0x1188 && v4 <= 0x11a7) {
                    f4 = TRUE;
                }
                idx = ((Unk_020707ec_K3(f4, v4) >> 3) & 3);
 if (idx == p) {
                    tmp[1] = 0x1182;
                    e->func_020607e0(&tmp[1], 0);
                }
            }
        }
        m++;
    } while (m < 5);
}
extern "C" s32 func_020707b4(s32 a, s32 b) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        void *p = PlayerData_GetBySessionSlot(a);
        if (p) {
            return _ZN14PlayerPatterns13func_02071c88Eh(_ZN10PlayerData13func_020986d4Ev(p), b);
        }
    }
    return 0;
}
extern "C" s32 func_020707a8(s32 x) { return func_020707b4(0, x); }
extern "C" s32 func_0207079c(s32 x) { return func_020707b4(1, x); }
extern "C" s32 func_02070790(s32 x) { return func_020707b4(2, x); }
extern "C" s32 func_02070784(s32 x) { return func_020707b4(3, x); }
}

// ======== unk_0206fe80.cpp ========
namespace n1 {
extern "C" {
extern u8 data_021d735c[];
}
extern "C" {
extern u16 data_021d7352[];
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 data_020e049c[];
}
extern "C" {
extern u8 data_020e04a0[];
}
extern "C" {
extern u8 data_020e0498[];
}
extern "C" {
extern u32 data_021cbd18[];
}
extern "C" {
extern u32 data_021cbd80[8][8];
}
extern "C" {
extern u8 *data_021cbca4;
}
extern "C" {
extern u8 *data_021cbcb4;
}
extern "C" {
extern u8 *data_021cbcb8;
}
extern "C" {
extern u8 *data_021cbcb0;
}
extern "C" {
extern u8 data_021e6e4c[];
}
extern "C" {
extern u8 data_021eca50[];
}
extern "C" {
extern u8 data_021dfd8c[];
}
extern "C" {
extern u8 data_021ecc7c[];
}
extern "C" {
extern s32 (*data_020cbaf0[])(s32);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void *PlayerData_GetResident(void *a, s32 i);
}
extern "C" {
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void _ZN8PlayerId13func_020940d0EP9MsgString(s32 a, s32 b);
}
extern "C" {
s32 PlayerData_GetCurrentIndex();
}
extern "C" {
s32 func_020978fc(s32 t);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
s32 _ZN8SaveData8testFlagEj(void *p, s32 i);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void *p, s32 i);
}
extern "C" {
s32 _ZN10PlayerData13func_02098a48Ev(void *p);
}
extern "C" {
s32 LetterDelivery_PutInAddresseeMailbox(void *p);
}
extern "C" {
void func_020638d0(void *a, void *b);
}
extern "C" {
void MailText_SetSlot(s32 i, void *p);
}
extern "C" {
void _ZN12Unk_0206555413func_02065588Etj(void *p, u32 a, s32 b);
}
extern "C" {
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, s32 f);
}
extern "C" {
void func_02070b68(u32 a, u8 b, u32 c, u8 d, s32 e);
}
extern "C" {
void func_02070e4c(u32 a, u8 b, u32 c, u8 d, s32 e);
}
extern "C" {
s32 _ZN19AbleSistersPatterns13func_02071b00Eh(void *p, s32 i);
}
extern "C" {
void func_0203c6f8(void *p, s32 v);
}
extern "C" {
s32 func_0203c6c8(void *p);
}
extern "C" {
void _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(void *a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
}
extern "C" {
void *_ZN10PlayerData13func_020986d4Ev(void *p);
}
extern "C" {
void *_ZN14PlayerPatterns13func_02071c88Eh(void *p, s32 i);
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
s32 _ZN16BlancaFaceRecord10getPatternEv(void *p);
}
extern "C" {
s32 func_020718dc();
}
extern "C" {
s32 _ZN12Unk_020718a413func_020718e8Ei(s32 t, s32 x);
}
extern "C" {
s32 _ZN12Unk_020718a413func_020718e4Ev(s32 t);
}
extern "C" {
void *SaveVillagers_Get(void *a, s32 x);
}
extern "C" {
s32 _ZN12VillagerData10getPatternEv(void *p);
}
extern "C" {
s32 _ZN12Unk_020b23a013func_020b23a0Ev(void *p);
}
extern "C" {
void func_020b249c(s32 p);
}
static inline BOOL Unk_020703d8_R(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_02070774(s32 x);
extern "C" void func_0207075c();
extern "C" s32 func_02070738(s32 x);
extern "C" s32 func_02070718(s32 x);
extern "C" s32 func_02070708();
extern "C" void *func_020706e8(s32 i);
extern "C" s32 func_020706c4(s32 i, s32 a);
extern "C" BOOL func_02070628(u32 a, u32 b);
extern "C" BOOL func_020705a0(u32 x);
extern "C" void func_02070560(Unk_0206fe80_Bits *p);

extern "C" s32 func_02070774(s32 x) {
    return _ZN19AbleSistersPatterns13func_02071b00Eh(data_021e6e4c, x);
}
extern "C" void func_0207075c() {
    func_020b249c(_ZN12Unk_020b23a013func_020b23a0Ev(data_021ecc7c));
}
extern "C" s32 func_02070738(s32 x) {
    void *p = SaveVillagers_Get(data_021dfd8c, x);
    if (p) return _ZN12VillagerData10getPatternEv(p);
    return 0;
}
extern "C" s32 func_02070718(s32 x) {
    s32 t = func_020718dc();
    _ZN12Unk_020718a413func_020718e8Ei(t, x);
    return _ZN12Unk_020718a413func_020718e4Ev(t);
}
extern "C" s32 func_02070708() {
    return _ZN16BlancaFaceRecord10getPatternEv(data_021eca50);
}
extern "C" void *func_020706e8(s32 i) {
    void *p = PlayerData_GetCurrent();
    if (p) return _ZN14PlayerPatterns13func_02071c88Eh(_ZN10PlayerData13func_020986d4Ev(p), i);
    return 0;
}
extern "C" s32 func_020706c4(s32 i, s32 a) {
    if (i < 10) return data_020cbaf0[i](a);
    return 0;
}
extern "C" BOOL func_02070628(u32 a, u32 b) {
    u8 x = a & 7;
    u8 y = b & 7;
    u32 t = data_021cbd80[x][y];
    if (t && data_021cbcb8 && data_021cbcb0) {
        void *q = _ZN14PlayerPatterns13func_02071c88Eh(_ZN10PlayerData13func_020986d4Ev(PlayerData_GetResident(data_021d735c, x)), y);
        s32 off = y * 0x2c4;
        func_0203c6f8(data_021cbcb8 + off, (s32)q);
        _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(data_021cbcb0 + y * 0x38, t, 0, 0, func_0203c6c8(data_021cbcb8 + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}
extern "C" BOOL func_020705a0(u32 x) {
    u8 i = x & 7;
    u32 t = data_021cbd18[i];
    if (t && data_021cbca4 && data_021cbcb4) {
        s32 off = i * 0x2c4;
        func_0203c6f8(data_021cbca4 + off, _ZN19AbleSistersPatterns13func_02071b00Eh(data_021e6e4c, x));
        _ZN18TexPatVramUploader11uploadByIdxEPhiiS0_ii(data_021cbcb4 + i * 0x38, t, 0, 0, func_0203c6c8(data_021cbca4 + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}
extern "C" void func_02070560(Unk_0206fe80_Bits *p) {
    Unk_0206fe80_Bits &v = *p;
    u32 a = v.a;
    u8 b = v.b;
    u32 c = v.c;
    u8 d = v.d;
    u32 e = v.e;
    if (e) {
        func_02070b68(a, b, c, d, 0);
    } else {
        func_02070e4c(a, b, c, d, 0);
    }
}
}

// ======== data created after the functions (creation order found by inverting the heapsort; do not reorder)
Unk_020718a4 data_021cbd38;
namespace U125_def {
extern "C" {
s32 func_020707a8(s32);
s32 func_0207079c(s32);
s32 func_02070790(s32);
s32 func_02070784(s32);
s32 func_02070774(s32);
s32 func_0207075c(s32);
s32 func_02070738(s32);
s32 func_02070718(s32);
s32 func_02070708(s32);
s32 func_020706e8(s32);

u8 *data_021cbcb8;
u8 *data_021cbcb0;
u32 data_021cbd18[8];

extern s32 (*const data_020cbaf0[10])(s32);
s32 (*const data_020cbaf0[10])(s32) = {
    func_020707a8, func_0207079c, func_02070790, func_02070784, func_02070774,
    func_0207075c, func_02070738, func_02070718, func_02070708, func_020706e8,
};

u8 data_021cbcac[4];
u8 data_021cbc9c;
}
}

Unk_02071408 data_021cbcfc;

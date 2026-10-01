#include "types.h"
#include "Unk_020d8c7c.h"

// 0xf4-byte object data_021cb5a8 (constructor/destructor in another unit)
class Unk_020dd458 {
public:
    Unk_020dd458();
    virtual ~Unk_020dd458();
    u8 d[0xf0];
};

// 8-byte list head data_021cb4e8: inline constructor, no destructor
class Unk_021cb4e8 {
public:
    Unk_021cb4e8() {
        a = 0;
        b = 0;
    }
    u32 a;
    u32 b;
};

// 8-byte object data_021cb4f0: destructor is func_020044dc (alias in aliases.txt)
class Unk_021cb4f0 {
public:
    Unk_021cb4f0() {
        a = 0;
        b = 0;
    }
    ~Unk_021cb4f0();
    u32 a;
    u32 b;
};

struct Unk_020de060 {
    void *f;
    u16 a;
    u16 b;
};

class Unk_020de234 : public Unk_020d8c7c {
public:
    Unk_020de234() {}
    BOOL vfunc_00();
    BOOL vfunc_0c();
    BOOL vfunc_18();
    BOOL vfunc_24();
};

extern "C" {
// data of this unit
extern u8 data_020de014[4];
extern u32 *data_020de2d8[];
extern u16 data_020de27c[];
extern u8 data_021cb49c;
extern u8 data_021cb4a0;
extern u8 data_021cb4a4;
extern u8 data_021cb4a8;
extern u8 data_021cb4ac;
extern u8 data_021cb4b0;
extern u8 data_021cb4b4;
extern u16 data_021cb4b8;
extern u16 data_021cb4bc;
extern u16 data_021cb4c0;
extern u16 data_021cb4c4;
extern u32 data_021cb4c8;
extern u32 data_021cb4cc;
extern u8 data_021cb4d0[4];
extern u32 data_021cb4d4;
extern s32 data_021cb4d8;
extern u32 data_021cb4dc;
extern u32 data_021cb4e0;
extern u32 data_021cb4e4;
extern u32 data_021cb504[3];
extern u32 data_021cb51c[3];
extern u8 data_021cb528[16];
extern u8 data_021cb538[16];
extern u16 data_021cb548[16];
extern u16 data_021cb568[16];
extern u8 data_021cb588[32];

// data of other units
extern u8 data_021d726c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u16 data_021f47d8[];

// functions of other units
void func_0205125c(void *, s32);
void func_02051268(u32, void *, s32);
void func_02116048(void *, const void *, u32);
void *func_020991e4(void);
void func_02065e70(void *, void *);
void func_02065b28(void *);
u32 func_0209750c(void);
void *func_02097a3c(u32);
void *func_02096e54(void *);
u8 *_ZN12Unk_02096e2813func_02096e50Ev(void *);
void *_ZN12Unk_0209865c13func_02098750Ev(u32);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
void *_ZN12Unk_02097d1c13func_02097eb0Ei(void *, s32);
void func_0209909c(u16 *, u32, u32);
void func_0205137c();
s32 func_0208f024();
s32 func_0208f038();
s32 func_0208f044();
void func_0204eee4(u32);
void func_0204ef2c(u32);
s32 func_0202e880(u32, u32, u32, u32);
void func_020e79a0(void *, void *);
void func_020e7968(void *, u32);
void func_0206df78();
BOOL func_0203d4d4();
s32 func_020b50e8();
BOOL func_0203e2f4();
s32 func_0201188c();
void func_0203da24(u32);
void func_0206dfe4();
void func_0205c1a4();
void func_02065328(void *);
void func_0205c1c0(u32, u32);
void func_0206e020();
void func_02045400(u32);
void func_0206f53c(u32);

// functions of this unit
void func_0206e594(void);
void func_0206ebc0(void);
void func_0206ec04(void);
BOOL func_0206ef74(u32);
void func_0206ef8c(u32);
void func_0206ef9c(u32);
s32 func_0206ef28();
s32 func_0206ef3c();
BOOL func_0206edb0();
BOOL func_0206f140();
BOOL func_0206f0f8(u32);
BOOL func_0206eca4(u32);
void func_0206ecc8(u32, u32);
void func_0206ed5c(u32);
BOOL func_0206f068(s32);
void func_0206efac(s32);
void func_0206efd0(s32);
void func_0206f020(s32);
void func_0206f044(s32);
BOOL func_0206eff4(s32);
BOOL func_0206f178(u32);
BOOL func_0206f1b4();
BOOL func_0206f1fc();
void func_0206f254();
void func_0206e660(void);
void func_0206f164();
Unk_020de234 *func_0206f4ac();
}

// prototypes of the unit's functions
extern "C" {
void func_0206f4e4(u8 *o);
void func_0206f4d8(u8 *o);
Unk_020de234 *func_0206f4ac();
void func_0206f2b0(u32 v);
void func_0206f290(u8 *o);
void func_0206f254();
BOOL func_0206f1fc();
BOOL func_0206f1b4();
BOOL func_0206f178(u32 i);
void func_0206f164();
BOOL func_0206f140();
BOOL func_0206f11c();
BOOL func_0206f0f8(u32 v);
BOOL func_0206f0b8(u32 v);
BOOL func_0206f094(u32 v);
BOOL func_0206f068(s32 i);
void func_0206f044(s32 i);
void func_0206f020(s32 i);
BOOL func_0206eff4(s32 i);
void func_0206efd0(s32 i);
void func_0206efac(s32 i);
void func_0206ef9c(u32 m);
void func_0206ef8c(u32 m);
BOOL func_0206ef74(u32 m);
void func_0206ef68();
void func_0206ef5c();
BOOL func_0206ef50();
s32 func_0206ef3c();
s32 func_0206ef28();
BOOL func_0206ef0c();
BOOL func_0206ef00();
void func_0206eee4();
s32 func_0206eed4(s32 v);
void func_0206ee80(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_0206ee0c(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 from, u32 to);
void func_0206ee00(s32 v);
s32 func_0206ede0();
s32 func_0206edbc();
BOOL func_0206edb0();
void func_0206eda4();
void func_0206ed98();
BOOL func_0206ed8c();
void func_0206ed80();
void func_0206ed74();
u32 func_0206ed68();
void func_0206ed5c(u32 v);
u32 func_0206ed50();
void func_0206ed44(u32 v);
u32 func_0206ed38();
void func_0206ed2c(u32 v);
BOOL func_0206ed18();
BOOL func_0206ed04();
void func_0206ecf8(u32 v);
void *func_0206ecf0();
void func_0206ecc8(u32 a, u32 b);
BOOL func_0206eca4(u32 a);
BOOL func_0206ec84(u32 a, u32 b);
BOOL func_0206ec6c();
void func_0206ec60();
void func_0206ec54(u32 v);
u32 func_0206ec48();
void func_0206ec04();
void func_0206ebc0();
void func_0206eba4(u16 *src);
u16 *func_0206eb9c(void);
void func_0206eb38(void *p);
void func_0206eb04(u32 key, u16 val);
BOOL func_0206ead4(u32 a, u32 b);
u16 func_0206ea84(BOOL (*cb)(u16 *, void *));
u16 func_0206ea78(void);
u8 func_0206ea6c(void);
BOOL func_0206ea48(void);
void func_0206ea3c(u32 v);
void func_0206ea2c(void *a);
void func_0206e9d8(void);
void func_0206e9bc(void);
u32 func_0206e98c(void);
BOOL func_0206e974(void);
u8 func_0206e960(void);
BOOL func_0206e944(void);
BOOL func_0206e928(void);
BOOL func_0206e90c(void);
u32 func_0206e900(void);
void func_0206e8f4(u32 v);
u32 func_0206e8e8(void);
void func_0206e8dc(u32 v);
void func_0206e8cc(void *a);
void func_0206e8b8(void *a);
BOOL func_0206e888(u32 a, u32 b);
void func_0206e874(void);
u32 func_0206e868(void);
u32 func_0206e85c(void);
BOOL func_0206e850(void);
BOOL func_0206e844(void);
BOOL func_0206e838(void);
void func_0206e82c(void);
void func_0206e820(void);
void func_0206e814(void);
void func_0206e7f8(void);
BOOL func_0206e7d4(u32 v);
BOOL func_0206e7a4(u32 a, u32 b);
BOOL func_0206e780(u32 v);
BOOL func_0206e75c(u32 v);
u16 func_0206e750(void);
void func_0206e744(u32 v);
void func_0206e738(u32 v);
u16 func_0206e72c(void);
void func_0206e720(u32 v);
u16 func_0206e714(void);
BOOL func_0206e6ec(u32 a, u32 b, u32 c);
void func_0206e6c4(void);
u8 func_0206e6b8(void);
void func_0206e6ac(u32 v);
u8 func_0206e694(u32 i);
void func_0206e688(u32 i, u32 v);
void func_0206e67c(void);
void func_0206e660(void);
void func_0206e63c(void);
s32 func_0206e61c(void);
void func_0206e60c(void);
void func_0206e5fc(void);
BOOL func_0206e5ec(void);
BOOL func_0206e5dc(void);
void func_0206e5cc(void);
void func_0206e5bc(void);
void *func_0206e5b4(void);
void func_0206e5a4(u32 a);
void func_0206e594(void);
}

// ---- data ----
extern u32 data_020de018[2];
extern u32 data_020de020[2];
extern u32 data_020de028[2];
extern u32 data_020de030[2];
extern u32 data_020de038[2];
extern u32 data_020de040[2];
extern u32 data_020de048[2];
extern u32 data_020de050[2];
extern u32 data_020de058[2];
extern Unk_020de060 data_020de060;
extern u32 data_020de068[2];
extern u32 data_020de070[2];
extern u32 data_020de078[2];
extern u32 data_020de080[3];
extern u32 data_020de08c[3];
extern u32 data_020de098[3];
extern u32 data_020de0a4[3];
extern u32 data_020de0b0[3];
extern u32 data_020de0bc[3];
extern u32 data_020de0c8[3];
extern u32 data_020de0d4[3];
extern u32 data_020de0e0[3];
extern u32 data_020de0ec[3];
extern u32 data_020de0f8[3];
extern u32 data_020de104[3];
extern u32 data_020de110[3];
extern u32 data_020de11c[3];
extern u32 data_020de128[3];
extern u32 data_020de134[3];
extern u32 data_020de140[3];
extern u32 data_020de14c[3];
extern u32 data_020de158[3];
extern u32 data_020de164[3];
extern u32 data_020de170[3];
extern u32 data_020de17c[3];
extern u32 data_020de188[3];
extern u32 data_020de194[3];
extern u32 data_020de1a0[3];
extern u32 data_020de1ac[3];
extern u32 data_020de1b8[3];
extern u32 data_020de1c4[3];
extern u32 data_020de1d0[3];
extern u32 data_020de1dc[4];
extern u32 data_020de1ec[4];
extern u32 data_020de1fc[4];
extern u32 data_020de20c[4];
extern u32 data_020de21c[4];

u8 data_021cb4a0;
u32 data_020de14c[3] = {0x6b, 0x5e, 0xffffffff};
u32 data_020de158[3] = {0x6c, 0x5e, 0xffffffff};
Unk_021cb4e8 data_021cb4e8;
u32 data_020de070[2] = {0x79, 0xffffffff};
u8 data_021cb4b0;
Unk_020dd458 data_021cb5a8;
u16 data_021cb548[16];
u32 data_020de188[3] = {0x6f, 0x5f, 0xffffffff};
u32 data_021cb4d4;
u32 data_020de110[3] = {0x66, 0x5e, 0xffffffff};
u32 data_020de018[2] = {0x8e, 0xffffffff};
u32 data_020de1a0[3] = {0x81, 0x7f, 0xffffffff};
s32 data_021cb4d8;
u32 data_021cb4dc;
u8 data_021cb588[32];
u32 data_021cb4e4;
u32 data_020de1d0[3] = {0x8a, 0x86, 0xffffffff};
Unk_020de060 data_020de060 = {(void *)func_0206f4ac, 0x8e, 0x92};
u32 data_020de068[2] = {0x5a, 0xffffffff};
u8 data_021cb4a4;
u32 data_020de048[2] = {0x92, 0xffffffff};
u32 data_020de170[3] = {0x78, 0x75, 0xffffffff};
u32 data_020de0a4[3] = {0x85, 0x82, 0xffffffff};
u32 data_020de0b0[3] = {0x7a, 0x5f, 0xffffffff};
u32 data_020de0bc[3] = {0x70, 0x5f, 0xffffffff};
u32 data_020de140[3] = {0x6a, 0x5e, 0xffffffff};
u8 data_021cb4a8;
u32 data_020de030[2] = {0x7b, 0xffffffff};
u32 data_020de1dc[4] = {0x73, 0x72, 0x5e, 0xffffffff};
u32 data_020de058[2] = {0x71, 0xffffffff};
u32 data_020de1ec[4] = {0x74, 0x72, 0x5e, 0xffffffff};
u8 data_021cb4d0[4];
u32 data_020de020[2] = {0x8f, 0xffffffff};
u16 data_021cb4bc;
u8 data_021cb4b4;
u8 data_021cb49c;
u32 data_020de128[3] = {0x68, 0x5e, 0xffffffff};
u32 data_020de040[2] = {0x5c, 0xffffffff};
u32 data_020de1fc[4] = {0x7c, 0x7e, 0x5f, 0xffffffff};
u32 data_021cb504[3];
u32 data_020de164[3] = {0x6d, 0x5e, 0xffffffff};
u32 data_020de17c[3] = {0x6e, 0x5e, 0xffffffff};
u32 data_020de20c[4] = {0x60, 0x61, 0x5e, 0xffffffff};
u32 data_021cb51c[3];
u16 data_021cb4c4;
u16 data_021cb568[16];
u32 data_020de1ac[3] = {0x87, 0x86, 0xffffffff};
u32 data_020de1c4[3] = {0x89, 0x86, 0xffffffff};
u8 data_021cb538[16];
u32 data_020de080[3] = {0x83, 0x82, 0xffffffff};
u32 data_020de08c[3] = {0x76, 0x75, 0xffffffff};
u32 data_020de050[2] = {0x5b, 0xffffffff};
u32 data_020de0c8[3] = {0x8c, 0x8b, 0xffffffff};
u32 data_020de0d4[3] = {0x8d, 0x8b, 0xffffffff};
u32 data_020de0e0[3] = {0x7c, 0x7d, 0xffffffff};
u32 data_020de0f8[3] = {0x64, 0x5e, 0xffffffff};
u32 data_021cb4c8;
u32 data_020de11c[3] = {0x67, 0x5e, 0xffffffff};
u16 data_021cb4b8;
Unk_021cb4f0 data_021cb4f0;
u32 data_020de21c[4] = {0x60, 0x62, 0x5e, 0xffffffff};
u16 data_021cb4c0;
u32 data_020de194[3] = {0x80, 0x7f, 0xffffffff};
u32 data_021cb4e0;
u32 data_020de098[3] = {0x84, 0x82, 0xffffffff};
u32 data_021cb4cc;
u32 data_020de0ec[3] = {0x63, 0x5e, 0xffffffff};
u8 data_021cb4ac;
u32 data_020de134[3] = {0x69, 0x5e, 0xffffffff};
u8 data_020de014[4] = {0, 0x2e, 0, 0};
u32 data_020de028[2] = {0x90, 0xffffffff};
u32 data_020de078[2] = {0x77, 0xffffffff};
u32 *data_020de2d8[46] = {
    data_020de068, data_020de20c, data_020de21c, data_020de070, data_020de1dc, data_020de1ec, data_020de188,
    data_020de08c, data_020de0b0, data_020de040, data_020de0bc, data_020de058, data_020de050, data_020de030,
    data_020de0e0, data_020de1fc, data_020de0ec, data_020de0f8, data_020de104, data_020de110, data_020de11c,
    data_020de128, data_020de134, data_020de140, data_020de14c, data_020de194, data_020de1a0, data_020de170,
    data_020de1ac, data_020de1b8, data_020de1c4, data_020de080, data_020de098, data_020de0c8, data_020de0d4,
    data_020de018, data_020de078, data_020de020, data_020de028, data_020de038, data_020de158, data_020de164,
    data_020de1d0, data_020de0a4, data_020de17c, data_020de048,
};
u32 data_020de104[3] = {0x65, 0x5e, 0xffffffff};
u32 data_020de038[2] = {0x91, 0xffffffff};
u8 data_021cb528[16];
u16 data_020de27c[46] = {
    0x008f, 0x0091, 0x0091, 0x00a4, 0x009f, 0x00a0, 0x009e, 0x00a1, 0x00a5, 0x0090, 0x00a6, 0x00a7,
    0x00a8, 0x00a9, 0x00aa, 0x00ab, 0x0092, 0x0093, 0x0094, 0x0095, 0x0096, 0x0097, 0x0098, 0x0099,
    0x009a, 0x00ac, 0x00ad, 0x00a3, 0x00ae, 0x00af, 0x00b0, 0x00b2, 0x00b3, 0x00b5, 0x00b6, 0x00b7,
    0x00a2, 0x00b8, 0x00b9, 0x00ba, 0x009b, 0x009c, 0x00b1, 0x00b4, 0x009d, 0x00bb,
};
u32 data_020de1b8[3] = {0x88, 0x86, 0xffffffff};

extern "C" void func_0206f4e4(u8 *o) { func_0206f53c(o[0] - 0x12); }

extern "C" void func_0206f4d8(u8 *o) { func_02045400(o[1]); }

extern "C" Unk_020de234 *func_0206f4ac() { return new Unk_020de234; }





BOOL Unk_020de234::vfunc_00() {
    func_0205c1c0(0x8c00, 0);
    data_021cb51c[0] = data_021cb51c[1] = data_021cb51c[2] = 0;
    data_021cb504[0] = data_021cb504[1] = data_021cb504[2] = 0;
    data_020de014[1] = 0x2e;
    data_020de014[0] = 1;
    data_021cb4c8 = (u32)this;
    data_021cb4c4 = 0;
    func_0206f164();
    func_0206e020();
    data_021cb4d4 = 0;
    func_0205137c();
    data_021cb4e4 = 0;
    return TRUE;
}

BOOL Unk_020de234::vfunc_0c() {
    data_021cb504[0] |= data_021cb51c[0];
    data_021cb504[1] |= data_021cb51c[1];
    data_021cb504[2] |= data_021cb51c[2];
    func_0206f254();
    func_0206dfe4();
    func_0205c1a4();
    func_02065328(&data_021cb4e8);
    data_020de014[1] = 0x2e;
    data_020de014[0] = 0;
    data_021cb4c8 = 0;
    return TRUE;
}

BOOL Unk_020de234::vfunc_18() {
    u32 k;
    BOOL r;
    func_0206f254();
    func_0206f1b4();
    func_0206f1fc();
    func_0206df78();
    if (func_0203d4d4()) return TRUE;
    if (func_020b50e8() == 6) return TRUE;
    if (data_021d726c) return TRUE;
    if (func_0203e2f4()) return TRUE;
    if (func_0206f140()) {
        if (data_021f4770 && data_021f4774) r = TRUE;
        else r = FALSE;
        if (r && data_021ef5ec <= 0x10 && data_021ef5f0 >= 0xe8) {
            func_0203da24(0);
            data_021cb4b0 = 0;
            func_0206ef3c();
            return TRUE;
        }
        k = data_021f47d8[1];
        if (k & 4) {
            func_0203da24(0);
            data_021cb4b0 = 4;
            func_0206ef28();
            return TRUE;
        }
        if (k & 0x800) {
            func_0203da24(0);
            data_021cb4b0 = 0;
            func_0206ef28();
            return TRUE;
        }
        if (func_0201188c() != 2 && (data_021f47d8[1] & 0x400)) {
            func_0203da24(0);
            data_021cb4b0 = 5;
            func_0206ef28();
            return TRUE;
        }
    }
    return TRUE;
}

BOOL Unk_020de234::vfunc_24() { return TRUE; }

extern "C" void func_0206f2b0(u32 v) { func_020e7968(&data_021cb4e8, v); }

extern "C" void func_0206f290(u8 *o) {
    func_020e79a0(&data_021cb4e8, o);
    func_0206efd0(*(*(u8 **)(o + 8) + 0x90));
}

extern "C" void func_0206f254() {
    u8 i;
    if (data_021cb504[0] != 0 || data_021cb504[1] != 0 || data_021cb504[2] != 0) {
        for (i = 0; i < 0x2e; i++) {
            if (func_0206eff4(i)) func_0206f178(i);
        }
    }
}

extern "C" BOOL func_0206f1fc() {
    u32 t;
    if (data_020de014[0] != 3) return FALSE;
    if (data_021cb4e8.a != 0) t = ((u32 *)data_021cb4e8.a)[2];
    else t = data_021cb4c8;
    func_0206e660();
    if (!func_0202e880(data_020de27c[data_020de014[1]], t, data_020de014[1], 4)) return FALSE;
    data_020de014[0] = 1;
    return TRUE;
}

extern "C" BOOL func_0206f1b4() {
    if (data_020de014[0] != 2) return FALSE;
    u32 *e = data_020de2d8[data_020de014[1]];
    s32 n = 0;
    while (e[n] != (u32)-1) {
        func_0204ef2c(e[n]);
        n++;
    }
    data_020de014[0] = 3;
    func_0206f044(data_020de014[1]);
    return TRUE;
}

extern "C" BOOL func_0206f178(u32 i) {
    u32 *e;
    s32 n;
    e = data_020de2d8[i];
    n = 0;
    while (e[n] != (u32)-1) {
        func_0204eee4(e[n]);
        n++;
    }
    func_0206f020(i);
    func_0206efac(i);
    return TRUE;
}

extern "C" void func_0206f164() {
    data_021cb4c4 = 0;
    data_021cb4d8 = 0;
}

extern "C" BOOL func_0206f140() {
    if (data_020de014[0] != 1) return FALSE;
    if (data_021cb4e8.a == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_0206f11c() {
    if (data_020de014[0] == 0) return FALSE;
    if (data_021cb4e8.a != 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_0206f0f8(u32 v) {
    if (!func_0206f140()) return FALSE;
    data_020de014[1] = v;
    data_020de014[0] = 2;
    return TRUE;
}

extern "C" BOOL func_0206f0b8(u32 v) {
    if (data_020de014[0] != 1) return FALSE;
    if (data_021cb4e8.a == 0) return FALSE;
    if (func_0206f068(v)) return FALSE;
    data_020de014[1] = v;
    data_020de014[0] = 2;
    return TRUE;
}

extern "C" BOOL func_0206f094(u32 v) {
    BOOL r = func_0206f0f8(12);
    if (r) func_0206ed5c(v);
    return r;
}

extern "C" BOOL func_0206f068(s32 i) {
    BOOL r = TRUE;
    if (!((1 << (i & 0x1f)) & data_021cb51c[i >> 5])) r = FALSE;
    return r;
}

extern "C" void func_0206f044(s32 i) { data_021cb51c[i >> 5] |= (1 << (i & 0x1f)); }

extern "C" void func_0206f020(s32 i) { data_021cb51c[i >> 5] &= ~(1 << (i & 0x1f)); }

extern "C" BOOL func_0206eff4(s32 i) {
    BOOL r = TRUE;
    if (!((1 << (i & 0x1f)) & data_021cb504[i >> 5])) r = FALSE;
    return r;
}

extern "C" void func_0206efd0(s32 i) { data_021cb504[i >> 5] |= (1 << (i & 0x1f)); }

extern "C" void func_0206efac(s32 i) { data_021cb504[i >> 5] &= ~(1 << (i & 0x1f)); }

extern "C" void func_0206ef9c(u32 m) { data_021cb4c4 |= m; }

extern "C" void func_0206ef8c(u32 m) { data_021cb4c4 &= ~m; }

extern "C" BOOL func_0206ef74(u32 m) {
    if (m == (m & data_021cb4c4)) return TRUE;
    return FALSE;
}

extern "C" void func_0206ef68() { func_0206ef8c(1); }

extern "C" void func_0206ef5c() { func_0206ef9c(1); }

extern "C" BOOL func_0206ef50() { return func_0206ef74(1); }

extern "C" s32 func_0206ef3c() {
    func_0206ef8c(2);
    func_0208f038();
}

extern "C" s32 func_0206ef28() {
    func_0206ef9c(2);
    func_0208f044();
}

extern "C" BOOL func_0206ef0c() {
    if (func_0206ef74(2)) return FALSE;
    return TRUE;
}

extern "C" BOOL func_0206ef00() { return func_0206ef74(2); }

extern "C" void func_0206eee4() {
    if (func_0208f024()) func_0206ef28();
    else func_0206ef3c();
}

extern "C" s32 func_0206eed4(s32 v) {
    return (v & 0xf) * 2 + (v >> 4) * 64;
}

extern "C" void func_0206ee80(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to) {
    s32 y, x, idx;
    u32 t = (to << 28) >> 16;
    for (y = y0; y <= y1; y++) {
        for (x = x0, idx = x0 + y * 32; x <= x1; idx++, x++) {
            u16 *p = &tbl[idx];
            u32 v = *p;
            *p = t | (v & 0xfff);
        }
    }
}

extern "C" void func_0206ee0c(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 from, u32 to) {
    s32 y, x, idx;
    u32 f = (from << 28) >> 16;
    u32 t = (to << 28) >> 16;
    for (y = y0; y <= y1; y++) {
        for (x = x0, idx = x0 + y * 32; x <= x1; idx++, x++) {
            u16 *p = &tbl[idx];
            u32 v = *p;
            u32 k = v & 0xf000;
            if (f == k) {
                *p = t | (v & 0xfff);
            }
        }
    }
}

extern "C" void func_0206ee00(s32 v) { data_021cb4d8 = v; }

extern "C" s32 func_0206ede0() {
    if (func_0206edb0()) return data_021cb4d8;
    return 0;
}

extern "C" s32 func_0206edbc() {
    if (func_0206edb0()) return data_021cb4d8;
    return 0x1000;
}

extern "C" BOOL func_0206edb0() { return func_0206ef74(4); }

extern "C" void func_0206eda4() { return func_0206ef9c(4); }

extern "C" void func_0206ed98() { return func_0206ef8c(4); }

extern "C" BOOL func_0206ed8c() { return func_0206ef74(0x10); }

extern "C" void func_0206ed80() { return func_0206ef9c(0x10); }

extern "C" void func_0206ed74() { return func_0206ef8c(0x10); }

extern "C" u32 func_0206ed68() { return data_021cb4d4; }

extern "C" void func_0206ed5c(u32 v) { data_021cb4d4 = v; }

extern "C" u32 func_0206ed50() { return data_021cb4b0; }

extern "C" void func_0206ed44(u32 v) { data_021cb4b0 = v; }

extern "C" u32 func_0206ed38() { return data_021cb4a0; }

extern "C" void func_0206ed2c(u32 v) { data_021cb4a0 = v; }

extern "C" BOOL func_0206ed18() {
    if (data_021cb4ac == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_0206ed04() {
    if (data_021cb4ac == 2) return TRUE;
    return FALSE;
}

extern "C" void func_0206ecf8(u32 v) { data_021cb4ac = v; }

extern "C" void *func_0206ecf0() { return data_021cb538; }

extern "C" void func_0206ecc8(u32 a, u32 b) {
    func_0205125c(data_021cb538, 16);
    func_02051268(a, data_021cb538, b);
}

extern "C" BOOL func_0206eca4(u32 a) {
    if (!func_0206f140()) return FALSE;
    data_021cb4b0 = a;
    return func_0206f0f8(9);
}

extern "C" BOOL func_0206ec84(u32 a, u32 b) {
    if (func_0206eca4(a)) {
        data_021cb4a0 = b;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206ec6c() {
    if (func_0206f140()) return TRUE;
    return FALSE;
}

extern "C" void func_0206ec60() { data_021cb4a4 = 0; }

extern "C" void func_0206ec54(u32 v) { data_021cb4a4 = v; }

extern "C" u32 func_0206ec48() { return data_021cb4a4; }

extern "C" void func_0206ec04() {
    void *p;
    s32 i;
    p = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    for (i = 0; i < 15; i++) {
        data_021cb548[i] = *_ZN12Unk_02097d1c13func_02097f6cEi(p, i);
        data_021cb528[i] = (u32)_ZN12Unk_02097d1c13func_02097eb0Ei(p, i);
    }
}

extern "C" void func_0206ebc0() {
    u16 tmp[1];
    s32 i;
    _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    tmp[0] = 0xfff1;
    for (i = 0; i < 15; i++) {
        tmp[0] = data_021cb548[i];
        func_0209909c(tmp, data_021cb528[i], i);
    }
}

extern "C" void func_0206eba4(u16 *src) {
    s32 i;
    for (i = 0; i < 15; i++) {
        data_021cb568[i] = src[i];
    }
}

extern "C" u16 *func_0206eb9c(void) { return data_021cb568; }

extern "C" void func_0206eb38(void *p) {
    if (p) {
        s32 i;
        for (i = 0; i < 15; i++) {
            u32 c = data_021cb568[i];
            s32 idx;
            if (c >= 0x38e4 && c <= 0x3933) {
                idx = ((s32)c - 0x38e4) >> 2;
            } else {
                idx = -1;
            }
            if (idx >= 0) {
                u32 v;
                if ((u32)idx < 20) {
                    v = 0x3934 + idx * 4;
                } else {
                    v = 0x3934;
                }
                func_0206eb04(c, v);
            }
        }
    }
    func_0206ebc0();
}

extern "C" void func_0206eb04(u32 key, u16 val) {
    s32 i;
    for (i = 0; i < 15; i++) {
        if (key == data_021cb548[i] && data_021cb528[i] == 0) {
            data_021cb548[i] = val;
            break;
        }
    }
}

extern "C" BOOL func_0206ead4(u32 a, u32 b) {
    if (func_0206eca4(0x21)) {
        data_021cb4a8 = b;
        data_021cb4bc = a;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 func_0206ea84(BOOL (*cb)(u16 *, void *)) {
    u32 a = func_0209750c();
    u16 *p = _ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(a), 0);
    s32 i;
    u16 mask = 0;
    for (i = 0; i < 15; i++) {
        if (cb(p + i, _ZN12Unk_02097d1c13func_02097eb0Ei(_ZN12Unk_0209865c13func_02098750Ev(a), i))) {
            mask |= 1 << i;
        }
    }
    return mask;
}

extern "C" u16 func_0206ea78(void) { return data_021cb4bc; }

extern "C" u8 func_0206ea6c(void) { return data_021cb4a8; }

extern "C" BOOL func_0206ea48(void) {
    if (func_0206eca4(0x25)) {
        data_021cb4b8 = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206ea3c(u32 v) { data_021cb4b8 = v; }

extern "C" void func_0206ea2c(void *a) {
    func_02065e70(&data_021cb5a8, a);
}

extern "C" void func_0206e9d8(void) {
    u32 a = func_0209750c();
    void *p = func_02096e54(func_02097a3c(a));
    u8 *q;
    func_02065e70(p, &data_021cb5a8);
    func_02065b28(p);
    q = _ZN12Unk_02096e2813func_02096e50Ev(func_02097a3c(a));
    q[0] = 1;
    q[1] = 1;
    q[2] = 0;
    q[3] = 0;
    q[0] = ((u8 *)&data_021cb4f0)[3];
    q[1] = ((u8 *)&data_021cb4f0)[4];
    q[2] = ((u8 *)&data_021cb4f0)[5];
}

extern "C" void func_0206e9bc(void) {
    void *p = func_020991e4();
    if (p) {
        func_02065e70(p, &data_021cb5a8);
    }
}

extern "C" u32 func_0206e98c(void) {
    u32 v = data_021cb4b8;
    if (v & 2) {
        return 2;
    }
    if (v & 1) {
        return 1;
    }
    if (v & 0x800) {
        return 3;
    }
    return 0;
}

extern "C" BOOL func_0206e974(void) {
    if (data_021cb4b8 & 8) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 func_0206e960(void) {
    return (data_021cb4b8 >> 6) & 3;
}

extern "C" BOOL func_0206e944(void) {
    if (data_021cb4b8 & 0x400) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e928(void) {
    if (data_021cb4b8 & 0x100) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_0206e90c(void) {
    if (data_021cb4b8 & 0x200) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_0206e900(void) { return data_021cb4e4; }

extern "C" void func_0206e8f4(u32 v) { data_021cb4e4 = v; }

extern "C" u32 func_0206e8e8(void) { return data_021cb4cc; }

extern "C" void func_0206e8dc(u32 v) { data_021cb4cc = v; }

extern "C" void func_0206e8cc(void *a) {
    func_02116048(a, &data_021cb4f0, 8);
}

extern "C" void func_0206e8b8(void *a) {
    func_02116048(&data_021cb4f0, a, 8);
}

extern "C" BOOL func_0206e888(u32 a, u32 b) {
    if (func_0206eca4(0x3d)) {
        data_021cb4e0 = a;
        data_021cb4dc = b;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206e874(void) {
    data_021cb4e0 = 0;
    data_021cb4dc = 0;
}

extern "C" u32 func_0206e868(void) { return data_021cb4e0; }

extern "C" u32 func_0206e85c(void) { return data_021cb4dc; }

extern "C" BOOL func_0206e850(void) { return func_0206ef74(8); }

extern "C" BOOL func_0206e844(void) { return func_0206ef74(0x20); }

extern "C" BOOL func_0206e838(void) { return func_0206ef74(0x40); }

extern "C" void func_0206e82c(void) { func_0206ef9c(8); }

extern "C" void func_0206e820(void) { func_0206ef9c(0x20); }

extern "C" void func_0206e814(void) { func_0206ef9c(0x40); }

extern "C" void func_0206e7f8(void) {
    func_0206ef8c(8);
    func_0206ef8c(0x20);
    func_0206ef8c(0x40);
}

extern "C" BOOL func_0206e7d4(u32 v) {
    if (func_0206eca4(0x2b)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e7a4(u32 a, u32 b) {
    if (func_0206eca4(0x2c)) {
        data_021cb4e0 = b;
        data_021cb4c0 = a;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e780(u32 v) {
    if (func_0206eca4(0x29)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e75c(u32 v) {
    if (func_0206eca4(0x2a)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 func_0206e750(void) { return data_021cb4c0; }

extern "C" void func_0206e744(u32 v) { data_021cb4c0 = v; }

extern "C" void func_0206e738(u32 v) { data_021cb4c0 = v; }

extern "C" u16 func_0206e72c(void) { return data_021cb4c0; }

extern "C" void func_0206e720(u32 v) { data_021cb4c0 = v; }

extern "C" u16 func_0206e714(void) { return data_021cb4c0; }

extern "C" BOOL func_0206e6ec(u32 a, u32 b, u32 c) {
    if (func_0206eca4(a)) {
        func_0206ecc8(b, c);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206e6c4(void) {
    data_021cb49c = 1;
    data_021cb4d0[0] = 0;
    data_021cb4d0[1] = 2;
    data_021cb4d0[2] = 6;
    data_021cb4d0[3] = 7;
    func_0206e594();
}

extern "C" u8 func_0206e6b8(void) {
    return data_021cb49c;
}

extern "C" void func_0206e6ac(u32 v) {
    data_021cb49c = v;
}

extern "C" u8 func_0206e694(u32 i) {
    if (i == 0xff) {
        i = data_021cb49c;
    }
    return data_021cb4d0[i];
}

extern "C" void func_0206e688(u32 i, u32 v) {
    data_021cb4d0[i] = v;
}

extern "C" void func_0206e67c(void) { func_0206ef9c(0x80); }

extern "C" void func_0206e660(void) {
    func_0206ef8c(0x80);
    data_021cb4b4 = 0x37;
}

extern "C" void func_0206e63c(void) {
    if (func_0206ef74(0x80)) {
        if (data_021cb4b4 != 0) {
            data_021cb4b4--;
        }
    }
}

extern "C" s32 func_0206e61c(void) {
    if (data_021cb4b4 != 0) {
        return 0;
    }
    return func_0206ef74(0x80);
}

extern "C" void func_0206e60c(void) { func_0206ef9c(0x100); }

extern "C" void func_0206e5fc(void) { func_0206ef8c(0x100); }

extern "C" BOOL func_0206e5ec(void) { return func_0206ef74(0x100); }

extern "C" BOOL func_0206e5dc(void) { return func_0206ef74(0x200); }

extern "C" void func_0206e5cc(void) { func_0206ef9c(0x200); }

extern "C" void func_0206e5bc(void) { func_0206ef8c(0x200); }

extern "C" void *func_0206e5b4(void) {
    return data_021cb588;
}

extern "C" void func_0206e5a4(u32 a) {
    func_02051268(a, data_021cb588, 0x20);
}

// ---- code ----

extern "C" void func_0206e594(void) {
    func_0205125c(data_021cb588, 0x20);
}

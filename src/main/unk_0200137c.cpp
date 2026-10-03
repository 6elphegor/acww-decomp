#include "types.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

struct Unk_02000fc0_Col {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_02000fc0_Node {
    u8 pad_00[0x68];
    Unk_02000fc0_Node *unk_68;
    u32 unk_6c;
};

struct Unk_02000fc0_Cfg {
    u8 pad_00[0x0c];
    u16 unk_0c;
};

struct Unk_02000fc0_Ptr {
    u8 pad_00[8];
    Unk_02000fc0_Cfg *unk_08;
};

struct Unk_02000fc0_Ctx {
    u8 pad_00[0x38];
    u32 unk_38;
};

struct Unk_02000fc0_Thr {
    u8 pad_00[0x6c];
    u32 unk_6c;
    u8 pad_70[0x20];
    u32 unk_90;
    u32 unk_94;
    u32 unk_98;
};

extern "C" {
extern u8 data_0213c6c0;
}

extern "C" {
extern u32 data_0213c6c4;
}

extern "C" {
extern u32 data_0213c6c8;
}

extern "C" {
extern u32 data_0213c6cc;
}

extern "C" {
extern u32 data_0213c6d0;
}

extern "C" {
extern u32 data_0213c6d4;
}

extern "C" {
extern u32 data_0213c6d8;
}

extern "C" {
extern u32 *data_0213c6dc;
}

extern "C" {
extern const char *data_0213c6e0;
}

extern "C" {
extern u32 data_0213c6e4;
}

extern "C" {
extern u32 data_0213c6e8;
}

extern "C" {
extern u32 data_0213b1a4;
}

extern "C" {
extern u32 data_021f4824;
}

extern "C" {
extern u32 data_021f482c;
}

extern "C" {
extern u32 data_021f4818;
}

extern "C" {
extern Unk_02000fc0_Ptr *data_021f5994;
}

extern "C" {
extern u16 data_021f597c;
}

extern "C" {
extern u8 data_021f5974;
}

extern "C" {
extern Unk_02000fc0_Thr *data_021fcc2c[3];
}

extern "C" {
extern u32 data_021fce88;
}

extern "C" {
extern char data_02135f44[];
}

extern "C" {
extern char data_020d1f60[], data_020d1f68[], data_020d1f78[], data_020d1f90[], data_020d1f9c[], data_020d1fa8[],
    data_020d1fb4[], data_020d1fc0[], data_020d1fcc[], data_020d1fd4[], data_020d1fe4[], data_020d1ff0[],
    data_020d1ffc[], data_020d200c[], data_020d2018[], data_020d2020[], data_021c21e4[], data_020c6108[];
}

extern "C" {
extern u16 data_020de408[], data_020e0408[];
}

extern "C" {
void func_02000cd4(void);
}

extern "C" {
void func_02000fac(u32 a, u32 b, u32 c);
}

extern "C" {
void func_02000e4c(void);
}

extern "C" {
void func_02000e64(void);
}

extern "C" {
void func_02000f78(void);
}

extern "C" {
void func_02000fc0(void);
}

extern "C" {
void func_020011fc(void);
}

extern "C" {
BOOL func_020012c0(u32 addr, u32 len);
}

extern "C" {
void func_02001264(u8 *dst, u32 src, u32 size);
}

extern "C" {
void func_02001338(const char *a, u32 b, const char *c, void *d);
}

extern "C" {
u64 OS_GetTick(void);
}

extern "C" {
u32 func_01ffa3b4(void);
}

extern "C" {
void OS_DisableInterrupts(void);
}

extern "C" {
void func_020535e0(void);
}

extern "C" {
void GX_SetBankForBG(u32 a);
}

extern "C" {
void func_0210f900(u32 a);
}

extern "C" {
void func_021117fc(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111794(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBGPltt(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBGPltt(void *a, u32 b, u32 c);
}

extern "C" {
u32 G2_GetBG1ScrPtr(void);
}

extern "C" {
u32 G2S_GetBG1ScrPtr(void);
}

extern "C" {
void GX_DispOn(void);
}

extern "C" {
void MIi_CpuClearFast(u32 a);
}

extern "C" {
void func_020b82b8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt, ...);
}

extern "C" {
void func_020b82d8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt);
}

extern "C" {
u32 func_020ed754(u32 a);
}

extern "C" {
u32 func_021122b0(void);
}

extern "C" {
u32 func_02113438(Unk_02000fc0_Node *a);
}

extern "C" {
void func_020e8b38(u32 a);
}

extern "C" {
void func_0204eeb0(void);
}

extern "C" {
u8 *OS_GetDTCMAddress(void);
}

extern "C" {
void G2x_SetBlendBrightnessExt_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
}

extern "C" {
void OS_VSNPrintf(const char *a, u32 b, const char *c, void *d);
}

extern "C" {
s32 func_0206d49c(void);
}

extern "C" {
u32 func_02132ef8(u64 a, u64 b);
}

struct Unk_0200153c {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11;
    u16 unk_12;
    u8 unk_14, unk_15, unk_16, unk_17, unk_18, unk_19, unk_1a, unk_1b, unk_1c, unk_1d, unk_1e, unk_1f;
};

struct Unk_02001608 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05, unk_06, unk_07, unk_08, unk_09, unk_0a, unk_0b, unk_0c, unk_0d,
        unk_0e, unk_0f, unk_10, unk_11, unk_12, unk_13;
    s8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
};

struct Unk_02001804 {
    u16 unk_00, unk_02, unk_04, unk_06;
    s32 unk_08[4];
    s32 unk_18, unk_1c, unk_20, unk_24;
    s32 unk_28[4];
    s32 unk_38, unk_3c, unk_40, unk_44;
    u16 unk_48, unk_4a, unk_4c, unk_4e;
    s32 unk_50[4];
    s32 unk_60, unk_64, unk_68, unk_6c;
};

struct Unk_020017a4 {
    u16 unk_00, unk_02, unk_04, unk_06, unk_08, unk_0a, unk_0c, unk_0e;
};

struct Unk_02001844 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04;
};

struct Unk_02001858 {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c;
};

struct Unk_02001874 {
    u16 unk_00, unk_02;
};

extern "C" {
u32 GXS_SetGraphicsMode(u32 a);
}

extern "C" {
u32 GX_SetGraphicsMode(u32 a, u32 b, u32 c);
}

extern "C" {
void func_02110c98(u32 a);
}

extern "C" {
void G2x_SetBGyAffine_(u32 reg, void* mtx, s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
void G2x_SetBlendBrightnessExt_(u32 reg, u32 a, u32 b, u32 c, u32 d, u32 e);
}

extern "C" {
void G2x_SetBlendAlpha_(u32 reg, u32 a, s32 b, u32 c, u32 d);
}

extern "C" {
void G2x_SetBlendBrightness_(u32 reg, u32 a, s32 b);
}

extern "C" {
void GX_LoadBGPltt(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadBGPltt(void *p, u32 a, u32 b);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}

extern "C" {
void *func_020641ec(u32 a, u32 b, s32 c, s32 *out);
}

extern "C" {
void func_020e85fc(u32 a, void *b);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void func_0211172c(void *a, u32 b, u32 c);
}

extern "C" {
void func_0211165c(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111864(void *a, u32 b, u32 c);
}

extern "C" {
void func_021116c4(void *a, u32 b, u32 c);
}

extern "C" {
void func_021115f4(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadOBJ(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadOBJ(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111b3c(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111a6c(void *a, u32 b, u32 c);
}

extern "C" {
void func_0211199c(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111ba4(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111ad4(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111a04(void *a, u32 b, u32 c);
}

extern "C" {
void func_02111934(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadOBJPltt(void *a, u32 b, u32 c);
}

u8 data_0213c6ec[4];
Unk_02001804 data_0213c6f0;
u8 data_0213c760[0x10];
Unk_0200153c data_0213c770;
Unk_02001608 data_0213c790;

// prototypes
extern "C" s32 func_02002778(u32 n);
extern "C" s32 func_0200273c(u32 n);
extern "C" s32 func_02002700(u32 n);
extern "C" s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
extern "C" s32 func_02002688(u32 p0, u32 p1, u32 p2, s32 p3, u8 e);
extern "C" s32 func_02002654(u32 p0, u32 p1, u32 p2);
extern "C" s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);
extern "C" s32 func_020025fc(u32 p0, u32 p1, u32 p2, s32 p3, s32 a, s32 b);
extern "C" s32 func_02002580(u8 *dst, u32 n, s32 a, s32 b, u8 c);
extern "C" s32 func_020024f0(u8 *dst, u32 n, s32 size, s32 x);
extern "C" s32 func_02002438(u8 *dst, u32 n, s32 a, s32 b, s32 c);
extern "C" void func_02002398(u32 n, u32 v);
extern "C" void func_0200226c(u32 n, u32 a, u32 b, u32 c);
extern "C" void func_020021fc(u32 n, u32 a, u32 b);
extern "C" void func_020021b8(u32 n, u32 a, u32 b, u32 c, u32 d);
extern "C" void func_020021a0(u32 n);
extern "C" void func_0200212c(u32 n);
extern "C" void func_020020b8(u32 n);
extern "C" void func_0200203c(u8 *src, u8 *dst, s32 w, s32 h);
extern "C" void func_02001fd8(u32 *src, u32 *dst, s32 x, s32 w, s32 h);
extern "C" void func_02001f74(u32 *src, u32 *dst, s32 x, s32 w, s32 h);
extern "C" void func_02001f0c(u32 *src, u32 *dst, s32 w, s32 h);
extern "C" void func_02001ea0(u32 *src, u32 *dst, s32 w, s32 h);
extern "C" void func_02001e7c(void);
extern "C" void func_02001dbc();
extern "C" void func_02001db8();
extern "C" void func_02001d04();
extern "C" void func_0200187c();
extern "C" void func_02001874(Unk_02001874* p);
extern "C" void func_02001858(Unk_02001858* p);
extern "C" void func_02001844(Unk_02001844* p);
extern "C" void func_02001824(u32 a, u32 b);
extern "C" void func_02001804(s32 a, s32 b);
extern "C" void func_020017e4(s32 a, s32 b);
extern "C" void func_020017c4(u32 a, u32 b);
extern "C" void func_020017a4(u32 a, u32 b);
extern "C" void func_02001784(s32 a, s32 b);
extern "C" void func_02001768(s32 a, s32 b);
extern "C" void func_02001750(u32 a);
extern "C" void func_02001738(u32 a);
extern "C" void func_02001724(u32 a, BOOL b);
extern "C" void func_02001710(u32 a, BOOL b);
extern "C" void func_020016f4(BOOL a);
extern "C" void func_020016d8(BOOL a);
extern "C" void func_020016cc(u32 a);
extern "C" void func_020016bc(u32 a);
extern "C" void func_020016b0(u32 a);
extern "C" void func_020016a4(u32 a);
extern "C" void func_02001698(u32 a);
extern "C" void func_02001674(u32 a, u32 b, u32 c, u32 d);
extern "C" void func_02001650(u32 a, u32 b, u32 c, u32 d);
extern "C" void func_0200162c(u32 a, u32 b, u32 c, u32 d);
extern "C" void func_02001608(u32 a, u32 b, u32 c, u32 d);
extern "C" void func_020015e0(u32 a);
extern "C" void func_020015b8(u32 a);
extern "C" void func_020015a0(u32 a);
extern "C" void func_0200158c(u32 a);
extern "C" u32 func_02001580();
extern "C" void func_02001574(u32 a);
extern "C" void func_02001564(u32 a);
extern "C" void func_02001554(u32 a);
extern "C" u32 func_02001548();
extern "C" void func_0200153c(u32 a);
extern "C" void func_0200152c(u32 a);
extern "C" void func_0200151c(u32 a);
extern "C" u8 func_02001510(void);
extern "C" void func_02001504(u8 a);
extern "C" void func_020014f4(u8 a);
extern "C" void func_020014e4(u8 a);
extern "C" u8 func_020014d8(void);
extern "C" void func_020014cc(u8 a);
extern "C" void func_020014bc(u8 a);
extern "C" void func_020014ac(u8 a);
extern "C" void func_0200145c(u32 a);
extern "C" void func_0200142c(void);
extern "C" void func_0200140c(void);
extern "C" void func_020013f8(void);
extern "C" void func_020013e0(u8 a);
extern "C" void func_020013cc(u8 a);
extern "C" void func_020013b4(u8 a, u8 b, u8 c);
extern "C" void func_020013a4(void);
extern "C" void func_0200138c(u8 a, u8 b, u8 c);
extern "C" void func_0200137c(void);

extern "C" s32 func_02002778(u32 n) {
    switch (n) {
    case 3: return 0;
    case 0: case 4: return 1;
    case 1: case 5: return 2;
    case 2: case 6: return 3;
    case 7: case 8: return 4;
    default: return 0;
    }
}

extern "C" s32 func_0200273c(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

extern "C" s32 func_02002700(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

extern "C" s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f) {
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, 0);
    s32 r = func_02002580(buf, p2, p3, e, f);
    func_020e85fc(p1, buf);
    return r;
}

extern "C" s32 func_02002688(u32 p0, u32 p1, u32 p2, s32 p3, u8 e) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    u8 *q = buf;
    q += p3 * 32;
    s32 r = func_02002580(q, p2, e, e, e);
    func_020e85fc(p1, buf);
    return r;
}

extern "C" s32 func_02002654(u32 p0, u32 p1, u32 p2) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    s32 r = func_020024f0(buf, p2, out, 0);
    func_020e85fc(p1, buf);
    return r;
}

extern "C" s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    s32 r = func_02002438(buf, p2, p3, e, f);
    func_020e85fc(p1, buf);
    return r;
}

extern "C" s32 func_020025fc(u32 p0, u32 p1, u32 p2, s32 p3, s32 a, s32 b) {
    return func_0200261c(p0, p1, p2, p3 << 1, a << 1, (b << 1) + 1);
}

extern "C" s32 func_02002580(u8 *dst, u32 n, s32 a, s32 b, u8 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (c - b + 1) * 32;
    off = b * 32;
    DC_FlushRange(p, len);
    if (n == 7) {
        GX_LoadOBJPltt(p, off, len);
    } else if (n == 8) {
        GXS_LoadOBJPltt(p, off, len);
    } else if (n <= 2) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        GX_LoadBGPltt(p, off, len);
    } else if (n <= 6) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        GXS_LoadBGPltt(p, off, len);
    }
    return 1;
}

extern "C" s32 func_020024f0(u8 *dst, u32 n, s32 size, s32 x) {
    DC_FlushRange(dst, size);
    switch (n) {
    case 0: func_02111b3c(dst, x, size); break;
    case 1: func_02111a6c(dst, x, size); break;
    case 2: func_0211199c(dst, x, size); break;
    case 3: func_02111ba4(dst, x, size); break;
    case 4: func_02111ad4(dst, x, size); break;
    case 5: func_02111a04(dst, x, size); break;
    case 6: func_02111934(dst, x, size); break;
    }
    return 1;
}

extern "C" s32 func_02002438(u8 *dst, u32 n, s32 a, s32 b, s32 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (*(volatile s32 *)&c - b + 1) * 32;
    off = b * 32;
    DC_FlushRange(p, len);
    switch (n) {
    case 0: func_021117fc(p, off, len); break;
    case 1: func_0211172c(p, off, len); break;
    case 2: func_0211165c(p, off, len); break;
    case 3: func_02111864(p, off, len); break;
    case 4: func_02111794(p, off, len); break;
    case 5: func_021116c4(p, off, len); break;
    case 6: func_021115f4(p, off, len); break;
    case 7: GX_LoadOBJ(p, off, len); break;
    case 8: GXS_LoadOBJ(p, off, len); break;
    }
    return 1;
}

extern "C" void func_02002398(u32 n, u32 v) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (*(vu16 *)0x0400000a & ~3) | v; break;
    case 1: *(vu16 *)0x0400000c = (*(vu16 *)0x0400000c & ~3) | v; break;
    case 2: *(vu16 *)0x0400000e = (*(vu16 *)0x0400000e & ~3) | v; break;
    case 3: *(vu16 *)0x04001008 = (*(vu16 *)0x04001008 & ~3) | v; break;
    case 4: *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & ~3) | v; break;
    case 5: *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & ~3) | v; break;
    case 6: *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & ~3) | v; break;
    }
}

extern "C" void func_0200226c(u32 n, u32 a, u32 b, u32 c) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000a & 0x43) | (a << 14)) | 0x500); break;
    case 1: *(vu16 *)0x0400000c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000c & 0x43) | (a << 14)) | 0x600); break;
    case 2: *(vu16 *)0x0400000e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000e & 0x43) | (a << 14)) | 0x700); break;
    case 3: *(vu16 *)0x04001008 = (c << 2) | ((b << 7) | ((*(vu16 *)0x04001008 & 0x43) | (a << 14)) | 0xc00); break;
    case 4: *(vu16 *)0x0400100a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100a & 0x43) | (a << 14)) | 0xd00); break;
    case 5: *(vu16 *)0x0400100c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100c & 0x43) | (a << 14)) | 0xe00); break;
    case 6: *(vu16 *)0x0400100e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100e & 0x43) | (a << 14)) | 0xf00); break;
    }
}

extern "C" void func_020021fc(u32 n, u32 a, u32 b) {
    switch (n) {
    case 0: func_02001824(a, b); break;
    case 1: func_02001804(a, b); break;
    case 2: func_020017e4(a, b); break;
    case 3: func_020017c4(a, b); break;
    case 4: func_020017a4(a, b); break;
    case 5: func_02001784(a, b); break;
    case 6: func_02001768(a, b); break;
    }
}

extern "C" void func_020021b8(u32 n, u32 a, u32 b, u32 c, u32 d) {
    switch (n) {
    case 0: func_02001674(a, b, c, d); break;
    case 1: func_02001650(a, b, c, d); break;
    case 2: func_0200162c(a, b, c, d); break;
    case 3: func_02001608(a, b, c, d); break;
    }
}

extern "C" void func_020021a0(u32 n) {
    func_0200212c(n);
    func_020021fc(n, 0, 0);
}

extern "C" void func_0200212c(u32 n) {
    switch (n) {
    case 0: func_020014e4(2); break;
    case 1: func_020014e4(4); break;
    case 2: func_020014e4(8); break;
    case 7: func_020014e4(0x10); break;
    case 3: func_020014ac(1); break;
    case 4: func_020014ac(2); break;
    case 5: func_020014ac(4); break;
    case 6: func_020014ac(8); break;
    case 8: func_020014ac(0x10); break;
    }
}

extern "C" void func_020020b8(u32 n) {
    switch (n) {
    case 0: func_020014f4(2); break;
    case 1: func_020014f4(4); break;
    case 2: func_020014f4(8); break;
    case 7: func_020014f4(0x10); break;
    case 3: func_020014bc(1); break;
    case 4: func_020014bc(2); break;
    case 5: func_020014bc(4); break;
    case 6: func_020014bc(8); break;
    case 8: func_020014bc(0x10); break;
    }
}

extern "C" void func_0200203c(u8 *src, u8 *dst, s32 w, s32 h) {
    s32 k, col, row, j, base, p, q;
    k = 0;
    base = 0;
    for (row = 0; row < h; row++) {
        p = base;
        for (col = 0; col < w; col++) {
            q = p;
            for (j = 0; j < 8; j++) {
                MI_CpuCopy8(src + q, dst + k, 4);
                k += 4;
                q += w * 4;
            }
            p += 4;
        }
        base += w << 5;
    }
}

extern "C" void func_02001fd8(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[k] = src[idx];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

extern "C" void func_02001f74(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0;
    base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

extern "C" void func_02001f0c(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

extern "C" void func_02001ea0(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                u32 t = src[idx];
                dst[k] = t;
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

extern "C" void func_02001e7c(void) {
    GX_LoadBGPltt(data_0213c6ec, 0, 2);
    GXS_LoadBGPltt(data_0213c6ec, 0, 2);
}

extern "C" void func_02001dbc() {
    data_0213c770.unk_14 = 0;
    data_0213c770.unk_15 = 0;
    data_0213c770.unk_18 = 0;
    data_0213c770.unk_19 = 0;
    data_0213c770.unk_1a = 0;
    data_0213c770.unk_1b = 0;
    data_0213c770.unk_1c = 0;
    data_0213c770.unk_1d = 0;
    data_0213c770.unk_16 = 0;
    data_0213c770.unk_17 = 1;
    func_02001874((Unk_02001874*)&data_0213c6f0);
    func_02001874((Unk_02001874 *)&data_0213c6f0.unk_04);
    func_02001858((Unk_02001858 *)&data_0213c6f0.unk_08);
    func_02001858((Unk_02001858 *)&data_0213c6f0.unk_28);
    func_02001874((Unk_02001874 *)&data_0213c6f0.unk_48);
    func_02001874((Unk_02001874 *)&data_0213c6f0.unk_4c);
    func_02001858((Unk_02001858 *)&data_0213c6f0.unk_50);
    func_02001858((Unk_02001858 *)data_0213c760);
    func_02001844((Unk_02001844 *)&data_0213c770.unk_1e);
    func_02001844((Unk_02001844 *)&data_0213c790.unk_03);
    func_02001844((Unk_02001844 *)&data_0213c790.unk_08);
    func_02001844((Unk_02001844 *)&data_0213c790.unk_0d);
    data_0213c770.unk_10 = 0;
    data_0213c770.unk_11 = 0xff;
    data_0213c770.unk_12 = 0xff;
    data_0213c790.unk_12 = 0;
    data_0213c790.unk_14 = 0;
    func_020015b8(0);
    func_020015e0(1);
}

extern "C" void func_02001db8() {}

extern "C" void func_02001d04() {
    GX_SetGraphicsMode(1, data_0213c770.unk_16, 1);
    GXS_SetGraphicsMode(data_0213c770.unk_17);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffffe0ff) | (data_0213c770.unk_14 << 8);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffffe0ff) | (data_0213c770.unk_15 << 8);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffff1fff) | (data_0213c770.unk_18 << 13);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffff1fff) | (data_0213c770.unk_19 << 13);
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & ~0x3f) | data_0213c770.unk_1a | 0x20;
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & ~0x3f) | data_0213c770.unk_1b | 0x20;
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & 0xffffc0ff) | (data_0213c770.unk_1c << 8);
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & 0xffffc0ff) | (data_0213c770.unk_1d << 8);
}

extern "C" void func_0200187c() {
    if (data_0213c770.unk_11 != 0) {
        if (data_0213c770.unk_11 & 1) {
            if ((*(volatile u32*)0x4000000 & 8) == 0) {
                *(volatile u32*)0x4000010 = (data_0213c6f0.unk_00 & 0x1ff) | ((data_0213c6f0.unk_02 << 16) & 0x1ff0000);
            } else {
                func_02110c98(data_0213c6f0.unk_00);
            }
        }
        if (data_0213c770.unk_11 & 2) {
            *(volatile u32*)0x4000014 = (data_0213c6f0.unk_04 & 0x1ff) | ((data_0213c6f0.unk_06 << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 4) {
            if (data_0213c770.unk_10 & 1) {
                G2x_SetBGyAffine_(0x4000020, (Unk_02001858 *)&data_0213c6f0.unk_08, data_0213c6f0.unk_18, data_0213c6f0.unk_1c,
                              data_0213c6f0.unk_20, data_0213c6f0.unk_24);
            } else {
                *(volatile u32*)0x4000018 = (data_0213c6f0.unk_20 & 0x1ff) | ((data_0213c6f0.unk_24 << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 8) {
            if (data_0213c770.unk_10 & 2) {
                G2x_SetBGyAffine_(0x4000030, (Unk_02001858 *)&data_0213c6f0.unk_28, data_0213c6f0.unk_38, data_0213c6f0.unk_3c,
                              data_0213c6f0.unk_40, data_0213c6f0.unk_44);
            } else {
                *(volatile u32*)0x400001c = (data_0213c6f0.unk_40 & 0x1ff) | ((data_0213c6f0.unk_44 << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 0x10) {
            *(volatile u32*)0x4001010 = (data_0213c6f0.unk_48 & 0x1ff) | ((data_0213c6f0.unk_4a << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 0x20) {
            *(volatile u32*)0x4001014 = (data_0213c6f0.unk_4c & 0x1ff) | ((data_0213c6f0.unk_4e << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 0x40) {
            if (data_0213c770.unk_10 & 4) {
                G2x_SetBGyAffine_(0x4001020, (Unk_02001858 *)&data_0213c6f0.unk_50, data_0213c6f0.unk_60, data_0213c6f0.unk_64,
                              data_0213c6f0.unk_68, data_0213c6f0.unk_6c);
            } else {
                *(volatile u32*)0x4001018 = (data_0213c6f0.unk_68 & 0x1ff) | ((data_0213c6f0.unk_6c << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 0x80) {
            if (data_0213c770.unk_10 & 8) {
                G2x_SetBGyAffine_(0x4001030, (Unk_02001858 *)data_0213c760, data_0213c770.unk_00, data_0213c770.unk_04,
                              data_0213c770.unk_08, data_0213c770.unk_0c);
            } else {
                *(volatile u32*)0x400101c = (data_0213c770.unk_08 & 0x1ff) | ((data_0213c770.unk_0c << 16) & 0x1ff0000);
            }
        }
        data_0213c770.unk_11 = 0;
    }
    if (data_0213c770.unk_12 != 0) {
        if (data_0213c770.unk_12 & 0x1) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & ~0x3f) | data_0213c790.unk_02 | 0x20;
        }
        if (data_0213c770.unk_12 & 0x2) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & 0xffffc0ff) | (data_0213c790.unk_07 << 8) | 0x2000;
        }
        if (data_0213c770.unk_12 & 0x4) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | data_0213c790.unk_0c | 0x20;
        }
        if (data_0213c770.unk_12 & 0x100) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | data_0213c790.unk_0c;
        }
        if (data_0213c770.unk_12 & 0x8) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (data_0213c790.unk_11 << 8) | 0x2000;
        }
        if (data_0213c770.unk_12 & 0x200) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (data_0213c790.unk_11 << 8);
        }
        if (data_0213c770.unk_12 & 0x10) {
            u32 d = data_0213c790.unk_01;
            u32 b = data_0213c770.unk_1f;
            u32 a = data_0213c770.unk_1e;
            *(volatile u16*)0x4000040 = ((a << 8) & 0xff00) | (data_0213c790.unk_00 & 0xff);
            *(volatile u16*)0x4000044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x20) {
            u32 d = data_0213c790.unk_06;
            u32 b = data_0213c790.unk_04;
            u32 a = data_0213c790.unk_03;
            *(volatile u16*)0x4000042 = ((a << 8) & 0xff00) | (data_0213c790.unk_05 & 0xff);
            *(volatile u16*)0x4000046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x40) {
            u32 d = data_0213c790.unk_0b;
            u32 b = data_0213c790.unk_09;
            u32 a = data_0213c790.unk_08;
            *(volatile u16*)0x4001040 = ((a << 8) & 0xff00) | (data_0213c790.unk_0a & 0xff);
            *(volatile u16*)0x4001044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x80) {
            u32 d = data_0213c790.unk_10;
            u32 b = data_0213c790.unk_0e;
            u32 a = data_0213c790.unk_0d;
            *(volatile u16*)0x4001042 = ((a << 8) & 0xff00) | (data_0213c790.unk_0f & 0xff);
            *(volatile u16*)0x4001046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        data_0213c770.unk_12 = 0;
    }
    u32 t = data_0213c790.unk_12;
    if (t & 0x20) {
        G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x10) {
        G2x_SetBlendAlpha_(0x4000050, data_0213c790.unk_13, data_0213c790.unk_14, data_0213c790.unk_15,
                      0x10 - data_0213c790.unk_15);
    } else if (t & 0x2) {
        G2x_SetBlendBrightnessExt_(0x4001050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x8) {
        G2x_SetBlendAlpha_(0x4001050, data_0213c790.unk_13, data_0213c790.unk_14, data_0213c790.unk_15,
                      0x10 - data_0213c790.unk_15);
    } else if (t != 0) {
        G2x_SetBlendBrightness_(0x4001050, data_0213c790.unk_13, data_0213c790.unk_14);
    }
    data_0213c790.unk_12 = 0;
}

extern "C" void func_02001874(Unk_02001874* p) {
    p->unk_00 = 0;
    p->unk_02 = 0;
}

extern "C" void func_02001858(Unk_02001858* p) {
    p->unk_00 = 0x1000;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0x1000;
    p->unk_10 = 0;
    p->unk_14 = 0;
    p->unk_18 = 0;
    p->unk_1c = 0;
}

extern "C" void func_02001844(Unk_02001844* p) {
    p->unk_00 = 0;
    p->unk_01 = 0;
    p->unk_02 = 0xff;
    p->unk_03 = 0xc0;
    p->unk_04 = 0;
}

extern "C" void func_02001824(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x2;
    data_0213c6f0.unk_04 = a;
    data_0213c6f0.unk_06 = b;
}

extern "C" void func_02001804(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x4;
    data_0213c6f0.unk_20 = a;
    data_0213c6f0.unk_24 = b;
}

extern "C" void func_020017e4(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x8;
    data_0213c6f0.unk_40 = a;
    data_0213c6f0.unk_44 = b;
}

extern "C" void func_020017c4(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x10;
    data_0213c6f0.unk_48 = a;
    data_0213c6f0.unk_4a = b;
}

extern "C" void func_020017a4(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x20;
    data_0213c6f0.unk_4c = a;
    data_0213c6f0.unk_4e = b;
}

extern "C" void func_02001784(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x40;
    data_0213c6f0.unk_68 = a;
    data_0213c6f0.unk_6c = b;
}

extern "C" void func_02001768(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x80;
    data_0213c770.unk_08 = a;
    data_0213c770.unk_0c = b;
}

extern "C" void func_02001750(u32 a) {
    data_0213c790.unk_02 = a;
    data_0213c770.unk_12 |= 0x1;
}

extern "C" void func_02001738(u32 a) {
    data_0213c790.unk_07 = a;
    data_0213c770.unk_12 |= 0x2;
}

extern "C" void func_02001724(u32 a, BOOL b) {
    data_0213c790.unk_0c = a;
    func_020016f4(b);
}

extern "C" void func_02001710(u32 a, BOOL b) {
    data_0213c790.unk_11 = a;
    func_020016d8(b);
}

extern "C" void func_020016f4(BOOL a) {
    u32 v;
    if (a) {
        v = 0x4;
    } else {
        v = 0x100;
    }
    data_0213c770.unk_12 |= v;
}

extern "C" void func_020016d8(BOOL a) {
    u32 v;
    if (a) {
        v = 0x8;
    } else {
        v = 0x200;
    }
    data_0213c770.unk_12 |= v;
}

extern "C" void func_020016cc(u32 a) { data_0213c770.unk_1a = a; }

extern "C" void func_020016bc(u32 a) { data_0213c770.unk_1a &= ~a; }

extern "C" void func_020016b0(u32 a) { data_0213c770.unk_1b = a; }

extern "C" void func_020016a4(u32 a) { data_0213c770.unk_1c = a; }

extern "C" void func_02001698(u32 a) { data_0213c770.unk_1d = a; }

extern "C" void func_02001674(u32 a, u32 b, u32 c, u32 d) {
    data_0213c770.unk_1e = a;
    data_0213c770.unk_1f = b;
    data_0213c790.unk_00 = c;
    data_0213c790.unk_01 = d;
    data_0213c770.unk_12 |= 0x10;
}

extern "C" void func_02001650(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_03 = a;
    data_0213c790.unk_04 = b;
    data_0213c790.unk_05 = c;
    data_0213c790.unk_06 = d;
    data_0213c770.unk_12 |= 0x20;
}

extern "C" void func_0200162c(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_08 = a;
    data_0213c790.unk_09 = b;
    data_0213c790.unk_0a = c;
    data_0213c790.unk_0b = d;
    data_0213c770.unk_12 |= 0x40;
}

extern "C" void func_02001608(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_0d = a;
    data_0213c790.unk_0e = b;
    data_0213c790.unk_0f = c;
    data_0213c790.unk_10 = d;
    data_0213c770.unk_12 |= 0x80;
}

extern "C" void func_020015e0(u32 a) {
    data_0213c770.unk_16 = a;
    data_0213c770.unk_10 = (data_0213c770.unk_10 & ~0x3) | ((0xf78u >> (a * 2)) & 0x3);
}

extern "C" void func_020015b8(u32 a) {
    data_0213c770.unk_17 = a;
    data_0213c770.unk_10 = (data_0213c770.unk_10 & ~0xc) | ((0x3de0u >> (a * 2)) & 0xc);
}

extern "C" void func_020015a0(u32 a) {
    func_020015e0(a);
    GX_SetGraphicsMode(1, a, 1);
}

extern "C" void func_0200158c(u32 a) {
    func_020015b8(a);
    GXS_SetGraphicsMode(a);
}

extern "C" u32 func_02001580() { return data_0213c770.unk_18; }

extern "C" void func_02001574(u32 a) { data_0213c770.unk_18 = a; }

extern "C" void func_02001564(u32 a) { data_0213c770.unk_18 |= a; }

extern "C" void func_02001554(u32 a) { data_0213c770.unk_18 &= ~a; }

extern "C" u32 func_02001548() { return data_0213c770.unk_19; }

extern "C" void func_0200153c(u32 a) { data_0213c770.unk_19 = a; }

extern "C" void func_0200152c(u32 a) { data_0213c770.unk_19 |= a; }

extern "C" void func_0200151c(u32 a) { data_0213c770.unk_19 &= ~a; }

extern "C" u8 func_02001510(void) { return data_0213c770.unk_14; }

extern "C" void func_02001504(u8 a) { data_0213c770.unk_14 = a; }

extern "C" void func_020014f4(u8 a) { data_0213c770.unk_14 |= a; }

extern "C" void func_020014e4(u8 a) { data_0213c770.unk_14 &= ~a; }

extern "C" u8 func_020014d8(void) { return data_0213c770.unk_15; }

extern "C" void func_020014cc(u8 a) { data_0213c770.unk_15 = a; }

extern "C" void func_020014bc(u8 a) { data_0213c770.unk_15 |= a; }

extern "C" void func_020014ac(u8 a) { data_0213c770.unk_15 &= ~a; }

extern "C" void func_0200145c(u32 a) {
    if (a != 0) {
        G2x_SetBlendBrightness_(0x4000050, 0x3f, a);
        G2x_SetBlendBrightness_(0x4001050, 0x3f, a);
    } else {
        G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, a);
        G2x_SetBlendBrightnessExt_(0x4001050, 0x1f, 0x20, 0x10, 0x10, a);
    }
}

extern "C" void func_0200142c(void) {
    func_020013f8();
    func_020016b0(0x1f);
    func_02001698(0x10);
    func_0200152c(4);
    data_0213c790.unk_12 |= 1;
}

extern "C" void func_0200140c(void) {
    func_0200151c(4);
    data_0213c790.unk_12 |= 2;
}

extern "C" void func_020013f8(void) {
    data_0213c790.unk_13 = 0x1f;
    data_0213c790.unk_12 |= 4;
}

extern "C" void func_020013e0(u8 a) {
    data_0213c790.unk_13 &= ~a;
    data_0213c790.unk_12 |= 4;
}

extern "C" void func_020013cc(u8 a) {
    data_0213c790.unk_14 = a;
    data_0213c790.unk_12 |= 4;
}

extern "C" void func_020013b4(u8 a, u8 b, u8 c) {
    data_0213c790.unk_13 = a;
    data_0213c790.unk_14 = b;
    data_0213c790.unk_15 = c;
    data_0213c790.unk_12 |= 8;
}

extern "C" void func_020013a4(void) { data_0213c790.unk_12 |= 2; }

extern "C" void func_0200138c(u8 a, u8 b, u8 c) {
    data_0213c790.unk_13 = a;
    data_0213c790.unk_14 = b;
    data_0213c790.unk_15 = c;
    data_0213c790.unk_12 |= 0x10;
}

extern "C" void func_0200137c(void) { data_0213c790.unk_12 |= 0x20; }



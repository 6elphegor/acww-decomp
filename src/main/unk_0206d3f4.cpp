#include "types.h"

// TU113, first part: 0x0206d3f4-0x0206d470 (the unit's remaining functions are the assembly routine
// func_0206d470 and its caller). Owns its string literal (.data 0x020ddf6c-0x020ddf88).

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----
class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    Unk_020e2a08 unk_04;
};

// local text buffer, vtable 0x020ddf5c (0x38 bytes)
class Unk_020ddf5c : public Unk_020e2a60 {
public:
    Unk_020ddf5c() {}
    virtual ~Unk_020ddf5c() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_10[0x28];
};

// ---- 0x4c-byte object (ctor func_0206ce50, dtor func_0206ce30) ----
class Unk_020ddf44 {
public:
    Unk_020ddf44();
    ~Unk_020ddf44();
    s32 func_0206cc14(u8 a, u8 b);
    s32 func_0206cc20(u8 a, u8 b);
    void func_0206cc38();
    void func_0206cc6c(Unk_020e2a60 *buf, s32 flag);
    void func_0206cc84(Unk_020e2a60 *buf);
    void func_0206cdcc(u16 id, s32 arg);
    s32 func_0206ce98();
    void func_0206ced0();
    void func_0206cfdc(u8 *src, s32 *offs, s32 *idx);

    u8 pad_00[0x4c];
};


struct Unk_0206d8b8_Pair {
    u32 a;
    u32 b;
};

extern "C" {
extern u8 data_020ddf88;
extern s32 data_020ddf8c;
extern u32 data_021f482c;
extern u8 data_021cb3b8;
extern u8 data_021fccfc[];
extern u8 data_021cc7d0[];
extern u16 data_021cb3c0;
extern u32 data_020cbb18;
extern u32 data_021f4768;
extern u8 data_021cb3ec[];
extern u8 data_021cb3e4[];
extern u32 data_0213c6dc;
extern u8 data_021c4890[];
extern s32 data_021cb400;
extern u8 data_021cb420[];

void func_020a791c(void *p);
s32 func_020a78a4(void *buf, const void *src, s32 len);
void func_0200212c(void *p);
void func_02002398(void *p, s32 v);
void func_0200226c(void *p, s32 a, s32 b, s32 c);
void func_020021fc(void *p, s32 a, s32 b);
void *func_02065c8c(void *p);
void func_ov002_02202dd4(void *a, void *b);
void func_0205125c(void *p, s32 n);
void func_02065604(void *dst, void *src);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
void func_02002654(char *s, u32 a, u32 b);
s32 func_02000c9c(void);
void func_02114cd8(s32 a, s32 b);
u32 OS_DisableInterrupts(void);
void func_01ffa3c0(void);
void OS_RestoreInterrupts(u32 v);
void OS_DisableIrqMask(s32 v);
void OS_ResetRequestIrqMask(s32 v);
void func_02076c24(void *p, s32 v);
void func_02076c50(void *p);
void func_ov065_02277ba4(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void func_0204ef2c(u32 id);
void func_0204eee4(u32 id);
void *func_020e85b4(u32 size, u32 align);
void func_020e8558(void *p);
void func_ov001_0220cb30(void *p, s32 a, s32 b);
u32 func_021001e0(void *p);
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void GX_DispOn(void);
void func_020af3a8(void);
void func_020ebb00(void);
u32 func_02072374(u32 p);
void func_02072398(u32 p, u32 v);
u32 func_0207238c(u32 p);
void func_0206d720(u32 v);
void func_0206d6a4(void);
void func_02038148(s32 v);
void func_020ed64c(s32 v);
void func_02038138(void);
void func_0206d6ec(u32 v);
void func_0206d69c(void);
void func_0206d750(void);
void func_0206d6d4(void);
void func_0206d6ac(u32 v);
void func_0203d4cc(void);
void func_0203d4d0(void);
void func_0205046c(void);
void func_020118a4(void);
void func_020b8e44(void);
void func_0205b740(void);
void func_020044e0(s32 v);
void func_020536dc(void);
void func_02038128(void);
void func_020b8340(void);
void func_020a5c2c(void);
void func_020733e4(u32 v);
void func_02053730(void);
void func_020af33c(void);
void func_02053754(void);
void func_020739b8(u32 v);
void func_020b7d84(void);
void func_020e8208(void);
void func_0209c390(void);
void func_0209cfc8(u32 v);
void OS_SleepThread(void *p);
void func_0204ff6c(void *p);
void FS_InitFile(void *f);
BOOL FS_OpenFileFast(void *f, Unk_0206d8b8_Pair p);
void FS_CloseFile(void *f);
void func_02063d18(void *f, void *dst, u32 sz, u32 off);
void FS_ConvertPathToFileID(void *p, void *q);
void *func_020e8574(u32 n);
void func_02063eac(Unk_0206d8b8_Pair p, void *dst, u32 n, s32 z);
void *func_02003ae8(void *p);
void func_02003b54(void *p);
s32 func_0206dad8(void);
void func_0206d4e8(s32 a, s32 b);
void func_0206d774(void *arg, void *p);
void func_0206d5a0(u32 a, void *p);
void *func_0206d5ac(u32 a, void *p, u32 n);
}

struct Unk_0206d0a0_Pad {
    s32 v[1];
    Unk_0206d0a0_Pad() {}
    ~Unk_0206d0a0_Pad() {}
};

struct Unk_0206d1d4_Src {
    u8 pad_00[0x34];
    u8 name[0x18];
    u8 pad_4c[0xa0];
    u8 cnt;
};

// ---- Unk_0206d0a0 : Unk_020ddf44 ----
class Unk_0206d0a0 : public Unk_020ddf44 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d0a0(u32 a, u32 b);
    void func_0206d0b8(u8 *data);
    void func_0206d0fc(u8 *src, BOOL flag);
    void func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out);
    void func_0206d288(void *src);
    s32 func_0206d2d4();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d380();
    void func_0206d394();
    void func_0206d39c(s32 v);
    void func_0206d3f4(u32 v);

    /* 0x4c */ Unk_020ddf44 unk_4c;
    /* 0x98 */ Unk_020ddf44 unk_98[4];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

Unk_0206d0a0::Unk_0206d0a0() {}

Unk_0206d0a0::~Unk_0206d0a0() {}

void Unk_0206d0a0::func_0206d3f4(u32 v) {
    func_02002654("menu/letter/b_ltr_a_bg.bsc", data_021f482c, v);
}

// mwcc-flags: -nothumb -O4,p
// G004c: autoload_2 0x020ed8cc-0x020edd58 (18 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined,
// every function is extern "C" under its symbols.txt name. End of the command sequence object (Unk_Seq), then the
// sound-system wrappers around data_021f59e8 (sound archive/system object: thin assert-and-forward helpers, system
// start-up at 0x020edbbc) and the sound player object (Player) helpers. Fatal stop = func_0206d49c (assert failure).
#include "types.h"

class Unk_Seq {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual s32 vfunc_08(void *p);
    virtual void vfunc_0c(void *p);

    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ void **unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ s16 unk_12;
};

struct Ent {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ u16 unk_06;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 pad;
};

struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);
struct Group {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ Ent unk_08[3];
    /* 0x2c */ GroupFn unk_2c;
    /* 0x30 */ GroupFn unk_30;
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u8 unk_36;
};

struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};
struct Bytes4 {
    u8 b0, b1, b2, b3;
};
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 unk_15;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

extern "C" {
void func_0206d49c(void);
extern void *data_021f59e8;
extern void *data_021f59f0;
extern u8 data_021f59ec[];
extern u8 data_021f5aac[];
extern u8 data_021f5a1c[];
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndArcPlayerStartSeqArc(void *a, u32 b, void *c);
void NNS_SndHeapLoadState(void *a, u32 b);
void *func_0210bd4c(void *a);
s32 NNS_SndArcLoadGroup(u32 a, void *b);
s32 NNS_SndHeapSaveState(void *a);
void *NNS_SndHeapAlloc(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *NNS_SndHeapCreate(u32 a, u32 b);
void NNS_SndArcInit(void *a, u32 b, void *c, u32 d);
void NNS_SndArcInitOnMemory(void *a, u32 b);
s32 NNS_SndArcPlayerSetup(void *a);
void NNS_SndInit(void);
void func_0210ef44(u32 a, u32 b, u32 c);
s32 NNS_SndMain(void);

}
extern "C" {
void func_020edf9c(Group *g);
void *func_020ee930(void **p);
void *func_020ee944(void *list, void *obj);
}

// PROTOS-BEGIN
extern "C" {
void *func_020ed960(void);
void *func_020ed978(u32 a);
void func_020edad0(s32 a, void *b, void *c);
void func_020edb20(void);
void func_020edbb8(void);
void *func_020edc88(void);
void func_020edc98(FndList *o);
void func_020edcec(Player *o);
}

extern "C" void func_020edd20(Player *o, s32 flag) {
    func_020edc98(&o->list);
    if (flag != 0) func_020edcec(o);
    o->unk_0c = 0;
}

extern "C" void func_020edcec(Player *o) {
    if (o->unk_15.b0 == 255) func_0206d49c();
    if (o->unk_1c == 255) return;
    func_020ed978(o->unk_1c);
}

extern "C" void func_020edc98(FndList *o) {
    Group *p;
    if (o == NULL) func_0206d49c();
    p = (Group *)func_020ee930((void **)o);
    if (p == NULL) return;
    do {
        func_020edf9c(p);
        p = (Group *)func_020ee944(o, p);
    } while (p != NULL);
}

extern "C" void *func_020edc88(void) {
    return data_021f59e8;
}

extern "C" void func_020edbbc(u32 a, u32 b, u32 c, u32 d) {
    NNS_SndInit();
    if (data_021f59e8 != NULL) func_0206d49c();
    data_021f59e8 = NNS_SndHeapCreate(a, b);
    if (data_021f59e8 == NULL) func_0206d49c();
    func_020edb20();
    if (c != 0) {
        NNS_SndArcInit(data_021f5aac, c, data_021f59e8, 0);
    } else {
        if (d == 0) func_0206d49c();
        NNS_SndArcInitOnMemory(data_021f5a1c, d);
    }
    if (NNS_SndArcPlayerSetup(data_021f59e8) == 0) func_0206d49c();
    NNS_SndHandleInit(data_021f59ec);
}

extern "C" void func_020edbb8(void) {
}

extern "C" void func_020edb74(u32 a) {
    if (data_021f59f0 == NULL) func_0206d49c();
    func_0210ef44(((u32)data_021f59f0 + 31) & ~31, 0x1000, a);
}

extern "C" void func_020edb20(void) {
    data_021f59f0 = NNS_SndHeapAlloc(func_020edc88(), 0x1020, func_020edbb8, 0, 0);
    if (data_021f59f0 == NULL) func_0206d49c();
}

extern "C" void func_020edb14(void) {
    NNS_SndMain();
}

extern "C" void func_020edb00(s32 a, void *b) {
    func_020edad0(a, b, &data_021f59ec);
}

extern "C" void func_020edad0(s32 a, void *b, void *c) {
    if (c == NULL) func_0206d49c();
    NNS_SndArcPlayerStartSeqArc(c, (u32)b, (void *)a);
}

extern "C" void func_020eda80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    if (a == NULL) func_0206d49c();
    func_0210cebc(a, b, c, d, e, f);
}

extern "C" void func_020eda60(void *a) {
    if (a == NULL) func_0206d49c();
    NNS_SndHandleInit(a);
}

extern "C" void func_020eda30(void *a, u32 b) {
    if (a == NULL) func_0206d49c();
    NNS_SndPlayerStopSeq(a, b);
}

extern "C" s32 func_020ed9c8(u32 a) {
    s32 r = (s32)func_020ed960();
    if (NNS_SndArcLoadGroup(a, data_021f59e8) == 0) return -1;
    if (NNS_SndHeapSaveState(data_021f59e8) == -1) func_0206d49c();
    return r;
}

extern "C" void *func_020ed978(u32 a) {
    if (a == 255) func_0206d49c();
    if (a == 0) func_0206d49c();
    NNS_SndHeapLoadState(data_021f59e8, a);
    if (a != (u32)func_020ed960()) func_0206d49c();
    return func_020ed960();
}

extern "C" void *func_020ed960(void) {
    return func_0210bd4c(data_021f59e8);
}

// PROTOS-END

extern "C" void func_020ed8cc(Unk_Seq *o) {
    s16 *pi;
    if (o->unk_08 == NULL) return;
    if (o->unk_04 == 0) return;
    pi = &o->unk_06;
    o->unk_06 -= 1;
    while (o->unk_06 >= 0) {
        o->vfunc_0c(o->unk_08[o->unk_06]);
        *pi -= 1;
    }
}


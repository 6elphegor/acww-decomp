#include "types.h"

extern "C" {
s32 func_0209cbd8(void *p);
u32 func_0209cb9c(void *p, void *q);
u16 func_0209cb74(void *p, void *q);
void func_0209cfe4(void);
void func_0206e8b8(void *);
void MI_CpuCopy8(void *src, void *dst, u32 size);
}

extern "C" void _ZN7TownMapC1Ev(void *);
extern "C" void _ZN9HouseDataC1Ev(void *);
extern "C" void _ZN12Unk_02063578C2Ev(void *);
extern "C" void _ZN12Unk_0206fe8013func_02070550Ev(void *);
extern "C" void _ZN19AbleSistersPatternsC1Ev(void *);
extern "C" void _ZN12Unk_02077198C1Ev(void *);
extern "C" void _ZN12Unk_0208581013func_0208598cEv(void *);
extern "C" void _ZN12Unk_02086328C1Ev(void *);
extern "C" void _ZN12Unk_0208722413func_020872ecEv(void *);
extern "C" void _ZN12Unk_0208f0a0C1Ev(void *);
extern "C" void _ZN12Unk_0208f238C1Ev(void *);
extern "C" void _ZN12Unk_02097020C1Ev(void *);
extern "C" void _ZN12Unk_020970b8C1Ev(void *);
extern "C" void _ZN12Unk_020970b8D1Ev(void *);
extern "C" void _ZN11SaveRecord413func_0209eb90Ev(void *);
extern "C" void _ZN12Unk_020af53cC1Ev(void *);
extern "C" void _ZN12Unk_020b09f0C2Ev(void *);
extern "C" void _ZN12Unk_020b246cD2Ev(void *);
extern "C" void _ZN12Unk_021ed2c0C1Ev(void *);
extern "C" void _ZN12Unk_020aec1cC1Ev(void *);
extern "C" void func_02039c04(void *);
extern "C" void func_02039d70(void *);
extern "C" void func_02039d8c(void *);
extern "C" void func_02039d90(void *);
extern "C" void func_02040900(void *);
extern "C" void func_0204c508(void *);
extern "C" void func_0205b680(void *);
extern "C" void func_020639bc(void *);
extern "C" void SaveVillagers_Construct(void *);
extern "C" void func_02086234(void *);
extern "C" void func_02086294(void *);
extern "C" void func_020868c8(void *);
extern "C" void func_020874d8(void *);
extern "C" void func_02096f58(void *);
extern "C" void PlayerDataArray_Construct(void *);
extern "C" void func_0209eb08(void *);
extern "C" void func_020ada60(void *);
extern "C" void func_020c0320(void *);
extern "C" void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);

class SaveData;
extern SaveData gSaveData;

// Game-wide state object (0x15fe0 bytes at 0x021d7350, one global constructed by __sinit and registered with its
// destructor): every data_021d73xx..data_021ed32c label of symbols.txt is a member of it.
class SaveData {
public:
    SaveData() {
        u8 *p = (u8 *)this;
        func_020639bc((void *)0x021d7352);
        PlayerDataArray_Construct((void *)0x021d735c);
        SaveVillagers_Construct(p + 0x8a3c);
        _ZN7TownMapC1Ev(p + 0xc330);
        func_02086294(p + 0xe556);
        func_02086234(p + 0xe557);
        _ZN9HouseDataC1Ev(p + 0xe558);
        _ZN19AbleSistersPatternsC1Ev(p + 0xfafc);
        _ZN12Unk_0208f238C1Ev(p + 0x10c3c);
        _ZN12Unk_02077198C1Ev(p + 0x11488);
        __cxa_vec_ctor(p + 0x1200c, 4, 0x98c, (void *)_ZN12Unk_020970b8C1Ev, (void *)_ZN12Unk_020970b8D1Ev);
        _ZN12Unk_02097020C1Ev(p + 0x1463c);
        _ZN12Unk_020b09f0C2Ev(p + 0x14fcc);
        __cxa_vec_ctor(p + 0x15430, 4, 0xb4, (void *)func_02039d90, (void *)func_02039d8c);
        _ZN12Unk_0208722413func_020872ecEv(p + 0x15700);
        _ZN12Unk_020b246cD2Ev(p + 0x1592c);
        func_02096f58(p + 0x15b5c);
        _ZN12Unk_0208f0a0C1Ev(p + 0x15c58);
        _ZN12Unk_0206fe8013func_02070550Ev(p + 0x15d50);
        _ZN12Unk_020aec1cC1Ev(p + 0x15db4);
        func_02040900(p + 0x15e18);
        func_0204c508(p + 0x15e54);
        func_02039d70(p + 0x15ec0);
        func_02039c04(p + 0x15ede);
        _ZN12Unk_0208581013func_0208598cEv(p + 0x15efc);
        _ZN12Unk_02086328C1Ev(p + 0x15f34);
        func_020868c8(p + 0x15f4c);
        func_020c0320(p + 0x15f66);
        _ZN12Unk_021ed2c0C1Ev(p + 0x15f70);
        func_020ada60(p + 0x15f84);
        _ZN12Unk_020af53cC1Ev(p + 0x15f96);
        func_0205b680(p + 0x15fb0);
        _ZN12Unk_02063578C2Ev(p + 0x15fbc);
        func_0209eb08(p + 0x15fc5);
        func_020874d8(p + 0x15fca);
        _ZN11SaveRecord413func_0209eb90Ev(p + 0x15fdc);
    }
    ~SaveData();
    void func_0209da44();
    void func_0209dae8();
    void func_0209db94();
    void func_0209dc0c();
    void func_0209dc94();
    void func_0209ddb0();
    void func_0209de74();

    /* 0x00000 */ u8 unk_0[2];
    /* 0x00002 */ u8 unk_2[10];
    /* 0x0000c */ u8 unk_c[35376];
    /* 0x08a3c */ u8 unk_8a3c[14580];
    /* 0x0c330 */ u8 unk_c330[8720];
    /* 0x0e540 */ u8 unk_e540[22];
    /* 0x0e556 */ u8 unk_e556[1];
    /* 0x0e557 */ u8 unk_e557[1];
    /* 0x0e558 */ u8 unk_e558[5524];
    /* 0x0faec */ u8 unk_faec[16];
    /* 0x0fafc */ u8 unk_fafc[4416];
    /* 0x10c3c */ u8 unk_10c3c[2124];
    /* 0x11488 */ u8 unk_11488[2936];
    /* 0x12000 */ u8 unk_12000[12];
    /* 0x1200c */ u8 unk_1200c[9776];
    /* 0x1463c */ u8 unk_1463c[2448];
    /* 0x14fcc */ u8 unk_14fcc[1124];
    /* 0x15430 */ u8 unk_15430[720];
    /* 0x15700 */ u8 unk_15700[556];
    /* 0x1592c */ u8 unk_1592c[560];
    /* 0x15b5c */ u8 unk_15b5c[252];
    /* 0x15c58 */ u8 unk_15c58[248];
    /* 0x15d50 */ u8 unk_15d50[100];
    /* 0x15db4 */ u8 unk_15db4[76];
    /* 0x15e00 */ u8 unk_15e00[24];
    /* 0x15e18 */ u8 unk_15e18[8];
    /* 0x15e20 */ u8 unk_15e20[4];
    /* 0x15e24 */ u8 unk_15e24[48];
    /* 0x15e54 */ u8 unk_15e54[12];
    /* 0x15e60 */ u8 unk_15e60[24];
    /* 0x15e78 */ u8 unk_15e78[48];
    /* 0x15ea8 */ u8 unk_15ea8[20];
    /* 0x15ebc */ u8 unk_15ebc[4];
    /* 0x15ec0 */ u8 unk_15ec0[30];
    /* 0x15ede */ u8 unk_15ede[30];
    /* 0x15efc */ u8 unk_15efc[56];
    /* 0x15f34 */ u8 unk_15f34[24];
    /* 0x15f4c */ u8 unk_15f4c[20];
    /* 0x15f60 */ u8 unk_15f60[16];
    /* 0x15f70 */ u8 unk_15f70[16];
    /* 0x15f80 */ u8 unk_15f80[4];
    /* 0x15f84 */ u8 unk_15f84[18];
    /* 0x15f96 */ u8 unk_15f96[18];
    /* 0x15fa8 */ u8 unk_15fa8[8];
    /* 0x15fb0 */ u8 unk_15fb0[4];
    /* 0x15fb4 */ u8 unk_15fb4[8];
    /* 0x15fbc */ u8 unk_15fbc[9];
    /* 0x15fc5 */ u8 unk_15fc5[5];
    /* 0x15fca */ u8 unk_15fca[18];
    /* 0x15fdc */ u8 unk_15fdc[4];
};

SaveData gSaveData;

typedef void (SaveData::*Unk_0209d70c_Fn)();

// Data order: this unit is placed object by object (see object_order.txt).

extern "C" void func_0209d7bc(u8 *p) {
    u32 a[2];
    u32 b[2];
    u32 c[2];
    func_0209cbd8(p + 0x15fb4);
    a[0] = 0;
    a[1] = 0;
    func_0206e8b8(a);
    MI_CpuCopy8(a, b, 8);
    u32 r4 = func_0209cb9c(p + 0x15fb4, b);
    MI_CpuCopy8(a, c, 8);
    u16 r0 = func_0209cb74(p + 0x15fb4, c);
    *(u32 *)(p + 0x15fb4) = r4;
    *(u16 *)(p + 0x15fb8) = r0;
    func_0209cfe4();
}

extern "C" void SaveData_Setup(SaveData *p, u32 idx) {
    static Unk_0209d70c_Fn tbl[7] = {&SaveData::func_0209de74, &SaveData::func_0209ddb0,
                                     &SaveData::func_0209dc94, &SaveData::func_0209dc0c,
                                     &SaveData::func_0209db94, &SaveData::func_0209dae8,
                                     &SaveData::func_0209da44};
    (p->*tbl[idx])();
}


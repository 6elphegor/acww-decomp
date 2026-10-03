#include "types.h"

extern "C" {
void func_0209d7bc(void *);
void func_0209d81c(void *);
void SaveData_InitNew(u8 *p);
void func_0209d994(u8 *p);
void func_02039cf4(void *);
void func_02040864(void *);
void func_0204c45c(void *);
void func_0204c6a4(void *);
void func_0204d3d8(void);
void func_0204d42c(void);
void *func_0204da0c(void);
void _ZN12Unk_0204da1813func_0204da24Ev(void *);
void _ZN12Unk_0204da1813func_0204dab4Ev(void *);
void func_0204dd20(void *, u32);
void _ZN7TownMap13func_0204df30Ev(void *);
void func_0205b470(void);
void func_0205b648(void *);
void _ZN9HouseData13func_0206058cEv(void *);
void _ZN12Unk_0206357813func_02063578Ev(void *);
void func_02063904(void *, const void *);
void func_020639b8(void *);
void Melody_ResetToDefault(void *);
void _ZN19AbleSistersPatterns13func_02071b10Ev(void *);
void _ZN14PlayerPatterns13func_02071c98EP12Unk_020942c8S1_(void *, void *, void *);
void _ZN12Unk_0207719813func_0207723cEv(void *);
void func_0207824c(s32);
void func_02079cc8(void *);
void func_0207a63c(void *);
void func_0207a80c(void);
void func_0207ac60(void *);
void func_0207ae84(void *, s32);
void func_0207b7fc(void *, s32);
void func_0207b814(void *);
void func_020850e0(void);
void *func_0208517c();
void _ZN12Unk_0208581013func_02085908Ev(void *);
void func_02086204(void *);
void func_0208627c(void *);
void func_020862f8(void *);
void _ZN12Unk_0208634013func_02086878Ev(void *);
void _ZN12Unk_02086f1413func_02086f28Ev(void *);
void _ZN12Unk_0208722413func_020872c0Ev(void *);
void _ZN12Unk_020872fc13func_02087368Ev(void *);
void _ZN12Unk_02087ad813func_02087b18Ev(void *);
void _ZN12Unk_02087ad813func_02087b38Ev(void *);
void func_0208f200(void *);
void _ZN6TownId13func_02094094EPS_(void *, void *);
void *func_0209409c(void);
void *PlayerData_GetCurrent(void);
void *PlayerData_GetResident(void *, s32);
void _ZN12Unk_02097ff413func_02097ff4Ej(void *, s32);
void _ZN12Unk_02097ff413func_0209801cEj(void *, s32);
void _ZN12Unk_02097ff413func_020981acEj(void *, s32);
void *_ZN12Unk_02097ff413func_0209832cEv(void *);
void _ZN12Unk_02097ff413func_020983d8Ev(void *);
void *_ZN10PlayerData13func_0209868cEv(void *);
void *_ZN10PlayerData13func_020986a4Ev(void *);
void *_ZN10PlayerData13func_020986d4Ev(void *);
void func_0209875c(void *, s32);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void func_0209c80c();
s32 func_0209cbd8(void *p);
void func_0209cf88(void *p);
void func_0209cfe4(void);
void _ZN11SaveRecord413func_0209eaccEPv(void *, s32);
void _ZN11SaveRecord410clearStateEv(void *);
void _ZN11SaveRecord413setStateValidEv(void *);
void _ZN12Unk_021ed2c013func_020ad3d8Ev(void *);
void func_020ada20(void *);
void func_020ae880(void *);
void func_020af3f4();
void _ZN12Unk_020af51413func_020af514Ev();
void func_020b23a8(void *);
void func_020b8e90();
void func_020b8ea0();
void func_020c02fc(void *);
extern u32 gCurrentHeap;
extern u8 gSaveData[];
extern u32 data_020d0704[];
}

u8 data_020e2384[8] = {0x13, 0x1b, 0x30, 0x1b, 0x0e, 0x29, 0x28, 0x1f};

struct Unk_0209da44_E98c { u8 b[0x98c]; };
struct Unk_0209da44_Eb4 { u8 b[0xb4]; };

struct SaveData {
    u8 unk_00;
    u8 unk_01;
    u8 f_2[10];
    u8 f_c[0x8a30];
    u8 f_8a3c[0x38f4];
    u8 f_c330[0x2226];
    u8 f_e556[0x1];
    u8 f_e557[0x1];
    u8 f_e558[0x15a4];
    u8 f_fafc[0x1140];
    u8 f_10c3c[0x84c];
    u8 f_11488[0xb84];
    Unk_0209da44_E98c f_1200c[4];
    u8 f_1463c[0x990];
    u8 f_14fcc[0x464];
    Unk_0209da44_Eb4 f_15430[4];
    u8 f_15700[0x22c];
    u8 f_1592c[0x230];
    u8 f_15b5c[0xfc];
    u8 f_15c58[0xf8];
    u8 f_15d50[0x64];
    u8 f_15db4[0x64];
    u8 f_15e18[0x3c];
    u8 f_15e54[0x6c];
    u8 f_15ec0[0x1e];
    u8 f_15ede[0x1e];
    u8 f_15efc[0x38];
    u8 f_15f34[0x18];
    u8 f_15f4c[0x1a];
    u8 f_15f66[0xa];
    u8 f_15f70[0x14];
    u8 f_15f84[0x12];
    u8 f_15f96[0x1a];
    u8 f_15fb0[0x4];
    u8 f_15fb4[0x8];
    u8 f_15fbc[0x9];
    u8 f_15fc5[0x5];
    u8 f_15fca[0xe];
    u32 f_15fd8[1];
    u8 f_15fdc[0x4];

    void func_0209da44();
    void func_0209dae8();
    void func_0209db94();
    void func_0209dc0c();
};

struct Unk_0209d994_Buf {
    u16 h;
    u8 b[8];
};

void SaveData::func_0209dc0c() {
    func_0209cbd8(&f_15fb4);
    func_0209cfe4();
    func_0204dd20(&f_c330, gCurrentHeap);
    func_0209d81c(this);
    func_02063904(&f_2, data_020e2384);
    SaveData_InitNew((u8 *)this);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0207824c(-1);
    func_0207b7fc(&f_8a3c, 0);
    _ZN11SaveRecord410clearStateEv(&f_15fdc);
    func_020b8e90();
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
}

void SaveData::func_0209db94() {
    func_0209d81c(this);
    func_0204d42c();
    func_0204d3d8();
    func_0209cfe4();
    func_0207ae84(&f_8a3c, 1);
    func_0207ac60(&f_8a3c);
    func_0207824c(-1);
    func_0207b7fc(&f_8a3c, 1);
    func_020b8ea0();
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
    s32 z, i;
    u8 *p = gSaveData;
    i = 0;
    z = i;
    p += 0xc;
    for (; i < 4; i++) {
        void *x = PlayerData_GetResident(p, i);
        if (x) func_0209875c(x, z);
    }
}

void SaveData::func_0209dae8() {
    void *a = PlayerData_GetCurrent();
    func_0209d81c(this);
    func_0204d42c();
    func_0204d3d8();
    func_0209cfe4();
    func_0209d994((u8 *)this);
    _ZN12Unk_02097ff413func_0209801cEj(a, 1);
    _ZN12Unk_02097ff413func_0209801cEj(a, 0x23);
    _ZN12Unk_02097ff413func_02097ff4Ej(a, 9);
    func_0207ae84(&f_8a3c, 0);
    func_0207ac60(&f_8a3c);
    func_0207a80c();
    func_0207a63c(&f_8a3c);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff413func_020981acEj(a, 0);
    func_0207824c(-1);
    func_0207b7fc(&f_8a3c, 1);
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
    func_02079cc8(&f_8a3c);
}

void SaveData::func_0209da44() {
    void *a = PlayerData_GetCurrent();
    func_0209d7bc(this);
    func_0204dd20(&f_c330, gCurrentHeap);
    func_0209d81c(this);
    _ZN11SaveRecord413func_0209eaccEPv(&f_15fc5, 0);
    func_0209d994((u8 *)this);
    SaveData_InitNew((u8 *)this);
    func_020af3f4();
    _ZN12Unk_020af51413func_020af514Ev();
    _ZN7TownMap13func_0204df30Ev(&f_c330);
    func_0209c80c();
    _ZN12Unk_02097ff413func_0209801cEj(a, 1);
    _ZN12Unk_02097ff413func_0209801cEj(a, 0x23);
    _ZN12Unk_02097ff413func_02097ff4Ej(a, 9);
    func_0207824c(-1);
    func_0207b7fc(&f_8a3c, 1);
    func_020850e0();
    _ZN12Unk_02086f1413func_02086f28Ev(func_0208517c());
    func_02079cc8(&f_8a3c);
}

void func_0209d994(u8 *p) {
    void *r4 = PlayerData_GetCurrent();
    Unk_0209d994_Buf l;
    _ZN10PlayerData11getPlayerIdEv(r4);
    l = *(Unk_0209d994_Buf *)func_0209409c();
    func_0209cf88(_ZN12Unk_02097ff413func_0209832cEv(r4));
    _ZN6TownId13func_02094094EPS_(_ZN10PlayerData11getPlayerIdEv(r4), p + 2);
    void *r5 = _ZN10PlayerData13func_020986d4Ev(r4);
    _ZN14PlayerPatterns13func_02071c98EP12Unk_020942c8S1_(r5, _ZN10PlayerData11getPlayerIdEv(r4), &l);
    _ZN12Unk_02097ff413func_02097ff4Ej(r4, 0x24);
    _ZN12Unk_02097ff413func_02097ff4Ej(r4, 0x25);
    _ZN12Unk_02097ff413func_02097ff4Ej(r4, 0x26);
    _ZN12Unk_02087ad813func_02087b38Ev(_ZN10PlayerData13func_0209868cEv(r4));
    _ZN12Unk_02097ff413func_02097ff4Ej(r4, 0xf);
    _ZN12Unk_02087ad813func_02087b18Ev(_ZN10PlayerData13func_0209868cEv(r4));
    _ZN12Unk_020872fc13func_02087368Ev(_ZN10PlayerData13func_020986a4Ev(r4));
    _ZN12Unk_02097ff413func_020983d8Ev(r4);
    func_020639b8(&l);
}

void SaveData_InitNew(u8 *p) {
    p[0] = 0x8a;
    _ZN11SaveRecord413setStateValidEv(p + 0x15fdc);
    func_0207b814(p + 0x8a3c);
    func_0207ac60(p + 0x8a3c);
    func_0207a80c();
    if (PlayerData_GetCurrent()) {
        func_0207a63c(p + 0x8a3c);
    }
    func_020b23a8(p + 0x1592c);
    _ZN9HouseData13func_0206058cEv(p + 0xe558);
    func_0204d42c();
    func_0204d3d8();
    _ZN19AbleSistersPatterns13func_02071b10Ev(p + 0xfafc);
    func_0205b470();
    _ZN12Unk_0206357813func_02063578Ev(p + 0x15fbc);
    _ZN12Unk_0207719813func_0207723cEv(p + 0x11488);
    func_020ae880(p + 0x15db4);
    func_020ada20(p + 0x15f84);
    _ZN12Unk_021ed2c013func_020ad3d8Ev(p + 0x15f70);
    func_0204c45c(p + 0x15e54);
    func_020c02fc(p + 0x15f66);
    func_02040864(p + 0x15e18);
    _ZN12Unk_0208722413func_020872c0Ev(p + 0x15700);
    _ZN12Unk_0208634013func_02086878Ev(p + 0x15f4c);
    func_020862f8(p + 0x15f34);
    func_0208627c(p + 0xe556);
    _ZN12Unk_0208581013func_02085908Ev(p + 0x15efc);
    func_0205b648(p + 0x15fb0);
    Melody_ResetToDefault(p + 0x15fa8);
    func_02039cf4(p + 0x15ec0);
    func_02086204(p + 0xe557);
    func_0208f200(p + 0x10c3c);
}

void func_0209d81c(void *) {
    if (func_0204da0c()) {
        _ZN12Unk_0204da1813func_0204dab4Ev(func_0204da0c());
        _ZN12Unk_0204da1813func_0204da24Ev(func_0204da0c());
        func_0204c6a4(func_0204da0c());
    }
}


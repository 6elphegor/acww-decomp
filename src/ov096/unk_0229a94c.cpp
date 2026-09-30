#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void func_ov002_02201b28(void *p);
void func_ov002_02202844(void *p);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_022931e8(void *p, s32 a, s32 b);
void func_ov094_022941a0(void *p, s32 a, s32 b);
void func_ov094_0229277c(void *p, s32 a);
void func_0208e288(void *p, s32 a, s32 b);
BOOL func_0206ef00();
void func_020ed174(void *p);
void func_ov090_02291d2c();
void func_0206e8f4(s32 a);
void func_020b85f8(void *p);
void func_ov094_02293a80(void *p);
void func_ov094_022946a8(void *p);
void func_ov094_02292d6c(void *p);
void func_ov002_02200800(void *p);
void func_ov002_022027d0(void *p);
void func_ov002_02202658(void *p);
void func_ov002_022024a0(void *p);
void func_ov002_02204400(void *p);
void func_0206d438(void *p);
void func_ov002_02203e08(void *p);
void func_02065cd4(void *p);
}

class Unk_ov096_0229a94c_Virt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    s32 func_ov002_02200920();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    inline Unk_ov096_0229aea8();
    virtual ~Unk_ov096_0229aea8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();

    BOOL func_ov096_02294dbc(u32 a);
    void func_ov096_02297574();
    void func_ov096_02299f08();
    void func_ov096_02299f48();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 unk_9c[0x2e8 - 0x9c];
    /* 0x2e8 */ u8 unk_2e8[0x358 - 0x2e8];
    /* 0x358 */ u8 unk_358[0xdb8 - 0x358];
    /* 0xdb8 */ u8 unk_db8[0xde0 - 0xdb8];
    /* 0xde0 */ u8 unk_de0[0x23c0 - 0xde0];
    /* 0x23c0 */ u8 unk_23c0[0x2480 - 0x23c0];
    /* 0x2480 */ u8 unk_2480[0x2498 - 0x2480];
    /* 0x2498 */ u8 unk_2498[0x24fc - 0x2498];
    /* 0x24fc */ u8 unk_24fc[0x27fc - 0x24fc];
    /* 0x27fc */ u8 unk_27fc[0x2904 - 0x27fc];
    /* 0x2904 */ u8 unk_2904[0x2b14 - 0x2904];
    /* 0x2b14 */ u8 unk_2b14[0x2b90 - 0x2b14];
    /* 0x2b90 */ u32 unk_2b90;
    /* 0x2b94 */ u32 unk_2b94;
    /* 0x2b98 */ u8 unk_2b98[0x2c8c - 0x2b98];
    /* 0x2c8c */ u8 unk_2c8c[0xf4];
};

BOOL Unk_ov096_0229aea8::vfunc_24() {
    func_ov002_02201b28(unk_24fc);
    if (!func_ov096_02294dbc(1)) {
        return TRUE;
    }
    ((Unk_ov096_0229a94c_Virt *)unk_23c0)->vfunc_08();
    if (func_0206ef00()) {
        func_ov002_02202844(unk_2498);
    }
    func_ov096_02297574();
    if (func_ov096_02294dbc(2)) {
        func_ov094_022932d0(unk_358, 0, unk_98);
        func_ov094_022931e8(unk_358, 0, unk_98);
        func_ov094_022941a0(unk_db8, 0, unk_98);
        func_ov094_0229277c(unk_de0, unk_98);
    }
    if (func_ov096_02294dbc(0x100)) {
        func_0208e288(unk_2b14, 0, func_ov002_02200920());
        ((Unk_ov096_0229a94c_Virt *)unk_2b14)->vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_0c() {
    func_020ed174(this);
    func_ov090_02291d2c();
    func_ov096_02299f08();
    func_0206e8f4(0);
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_00() {
    func_ov096_02299f48();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

inline Unk_ov096_0229aea8::Unk_ov096_0229aea8() {
    u8 *e = unk_2e8;
    do {
        func_020b85f8(e);
        e += 0x38;
    } while (e != unk_358);
    func_ov094_02293a80(unk_358);
    func_ov094_022946a8(unk_db8);
    func_ov094_02292d6c(unk_de0);
    func_ov002_02200800(unk_23c0);
    func_ov002_022027d0(unk_2480);
    func_ov002_02202658(unk_2498);
    func_ov002_022024a0(unk_24fc);
    func_ov002_02204400(unk_27fc);
    func_0206d438(unk_2904);
    func_ov002_02203e08(unk_2b14);
    unk_2b90 = 0;
    unk_2b94 = 0;
    func_02065cd4(unk_2b98);
    func_02065cd4(unk_2c8c);
}

extern "C" Unk_ov096_0229aea8 *func_ov096_0229aa64() {
    return new Unk_ov096_0229aea8;
}

#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
u32 func_0206ed50();
void func_0206e048();
void func_0206db88(s32 a);
void func_0200402c(s32 a);
void func_02003f5c(s32 a);
void func_020015b8(s32 a);
void func_0206e60c();
void func_0206f0b8(s32 a);
void func_0206ed44(s32 a);
void func_0206e03c();
void func_0206e070();
void func_0206e5fc();
void func_0206dfe4();
void func_02003b9c();
void func_02003bac();
void func_0206eee4();
void func_020ed188();
extern u8 *data_021c1b3c;
}

class Unk_02035758 {
public:
    void func_02035bb4();
    void func_02035bbc(s32 a);
};

class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();
    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a60(u8 v);

    /* 0x50 */ Unk_ov002_022013a0 unk_50;
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_02201194 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

class Unk_ov092_02291ec8;
typedef void (Unk_ov092_02291ec8::*Unk_ov092_02291ec8_Fn)();

// Vtable 0x02291ec8
class Unk_ov092_02291ec8 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov092_02291918();
    void func_ov092_0229191c();
    void func_ov092_02291a2c();
    void func_ov092_02291a44();
    void func_ov092_02291c58();
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);

    /* 0x91 */ u8 unk_91;
};

extern "C" Unk_ov092_02291ec8 *func_ov092_02291e60() {
    return new Unk_ov092_02291ec8();
}

struct Unk_ov092_SceneEntry {
    Unk_ov092_02291ec8 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov092_SceneEntry data_ov092_02291ea0 = {func_ov092_02291e60, 0x90, 0x94};

BOOL Unk_ov092_02291ec8::vfunc_00() {
    func_0206e5fc();
    func_ov092_0229191c();
    func_02003bac();
    func_0206eee4();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_0c() {
    func_0206e5fc();
    func_0206dfe4();
    func_ov092_02291918();
    func_02003b9c();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_24() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_4c() {
    static Unk_ov092_02291ec8_Fn tbl[1] = {&Unk_ov092_02291ec8::func_ov092_02291a2c};
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_50() {
    static Unk_ov092_02291ec8_Fn tbl[2] = {&Unk_ov092_02291ec8::func_ov092_02291c58, &Unk_ov092_02291ec8::func_ov092_02291a44};
    (this->*tbl[unk_8d])();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_54() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_58() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

void Unk_ov092_02291ec8::func_ov092_02291ce4(s32 a, s32 b) {
    unk_91 = a;
    switch (a) {
    case 0:
        break;
    case 1:
        break;
    case 0x43:
        break;
    case 0x44:
        func_0206e070();
        break;
    }
    if (a != 0x43 && a != 0x44) {
    } else {
        if (b != 0) {
            func_0200402c(2);
        }
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bb4();
    }
}

void Unk_ov092_02291ec8::func_ov092_02291c5c() {
    switch (unk_91) {
    case 0x43:
        func_ov002_02200a60(5);
        break;
    case 0x44:
        func_ov002_02200a60(0);
        func_020015b8(1);
        func_0206e03c();
        break;
    case 0:
    case 1:
        func_0206e048();
        unk_8d = 1;
        break;
    case 2:
    case 0x23:
    case 0x35:
    case 0x36:
    case 0x40:
        unk_8d = 1;
        func_0206ed44(unk_91);
        break;
    }
}

void Unk_ov092_02291ec8::func_ov092_02291c58() {}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see pipeline_wip/link_blocked.txt). The assembly below is the original code; the C version under
// NONMATCHING is the closest known attempt (78 bytes differ: its first switch tree is rooted at 0x18 with a
// bounds-checked 0x1a..0x27 jump table; the original is rooted at 0x23 with a 0x1a..0x23 table that has only a
// lower-bound check).
//
// Form: the whole body is one asm block inside an ordinary member function, not `asm void f() {...}`. mwcc emits
// an `asm` function immediately, ahead of every deferred C++ function, so it would link at the start of the
// overlay instead of 0x02291a44 (and `#pragma defer_codegen` switches off the size-sorting of .data/.bss).
// Around this block mwcc generates exactly the original prologue `push {r4, lr}` and epilogue
// `pop {r4}; pop {r3}; bx r3`, because the block writes r4 and makes calls.
// The assembler has no 16-bit data directive and no label arithmetic; `dcd` takes a 32-bit constant at a
// 4-aligned offset. Jump-table entries (target - table + 1) are therefore packed two per dcd; an entry left
// alone is the Thumb `lsl` with the same encoding (0x003b = lsl r3, r7, #0), or shares a dcd with the `bx r0`
// before the table (an `lsl r7, ...` would make mwcc save r7 in the prologue). `bls _in_range; b _end` is a
// dcd as well: written as instructions mwcc folds the pair into a far `bhi _end` and then rejects every later
// dcd as misaligned. The `_arg_*` and `_in_range` names are the targets the table entries/constants encode.
#ifdef NONMATCHING
void Unk_ov092_02291ec8::func_ov092_02291a44() {
    switch (unk_91) {
    case 0:
    case 1:
    case 0x18:
    case 0x1a:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x40:
        func_0206e60c();
        break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
        break;
    }
    switch (unk_91) {
    case 0x0: func_0206f0b8(0xb); break;
    case 0x1: func_0206f0b8(0xa); break;
    case 0x2: case 0x3: func_0206f0b8(0xd); break;
    case 0x4: case 0x5: case 0x6: case 0x7: case 0x8: case 0x9: case 0xa: func_0206f0b8(0xe); break;
    case 0xb: case 0xc: case 0xd: case 0xe: case 0xf: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: func_0206f0b8(0xf); break;
    case 0x18: case 0x19: case 0x1a: case 0x1b: break;
    case 0x1c: func_0206f0b8(0x10); break;
    case 0x1d: case 0x1e: func_0206f0b8(0x11); break;
    case 0x1f: case 0x20: func_0206f0b8(0x2c); break;
    case 0x21: func_0206f0b8(0x12); break;
    case 0x22: func_0206f0b8(0x13); break;
    case 0x24: func_0206f0b8(0x14); break;
    case 0x25: func_0206f0b8(0x15); break;
    case 0x26: func_0206f0b8(0x16); break;
    case 0x27: func_0206f0b8(0x17); break;
    case 0x28: func_0206f0b8(0x28); break;
    case 0x23: func_0206f0b8(0x29); break;
    case 0x29: case 0x2a: case 0x2b: case 0x2c: func_0206f0b8(0x18); break;
    case 0x2d: func_0206f0b8(0x19); break;
    case 0x2e: func_0206f0b8(0x1a); break;
    case 0x2f: func_0206f0b8(0x1b); break;
    case 0x30: func_0206f0b8(0x1c); break;
    case 0x31: func_0206f0b8(0x1d); break;
    case 0x32: func_0206f0b8(0x1e); break;
    case 0x33: func_0206f0b8(0x2a); break;
    case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3a: func_0206f0b8(0x1f); break;
    case 0x3b: func_0206f0b8(0x20); break;
    case 0x3c: func_0206f0b8(0x2d); break;
    case 0x3d: func_0206f0b8(0x22); break;
    case 0x3e: func_0206f0b8(0x23); break;
    case 0x3f: func_0206f0b8(0x25); break;
    case 0x40: func_0206f0b8(0x26); break;
    case 0x41: func_0206f0b8(0x27); break;
    case 0x42: func_0206f0b8(0x2d); break;
    }
    unk_8d = 0;
}
#else
void Unk_ov092_02291ec8::func_ov092_02291a44() {
    asm {
        add r4, r0, #0
        add r0, #0x91
        ldrb r0, [r0, #0]
        cmp r0, #0x23
        bgt _above_23
        add r1, r0, #0
        sub r1, #0x1a
        cmp r1, #0
        blt _below_1a
        add r1, r1, r1
        add r1, pc
        ldrh r1, [r1, #8]
        lsl r1, r1, #16
        asr r1, r1, #16
        add r1, pc
        bx r1
        // jump table 1: cases 0x1a..0x23, no upper-bound check
        lsl r3, r7, #0 // = 0x003b: case 0x1a -> _call_e60c
        dcd 0x003f003f // case 0x1b -> _switch2; case 0x1c -> _switch2
        dcd 0x003f003f // case 0x1d -> _switch2; case 0x1e -> _switch2
        dcd 0x003b003f // case 0x1f -> _switch2; case 0x20 -> _call_e60c
        dcd 0x003b003f // case 0x21 -> _switch2; case 0x22 -> _call_e60c
        lsl r3, r7, #0 // = 0x003b: case 0x23 -> _call_e60c
_below_1a:
        cmp r0, #1
        bgt _above_1
        cmp r0, #0
        blt _switch2
        cmp r0, #0
        beq _call_e60c
        cmp r0, #1
        beq _call_e60c
        b _switch2
_above_1:
        cmp r0, #0x18
        beq _call_e60c
        b _switch2
_above_23:
        cmp r0, #0x27
        bgt _above_27
        cmp r0, #0x27
        beq _call_e60c
        b _switch2
_above_27:
        cmp r0, #0x40
        bne _switch2
_call_e60c:
        bl func_0206e60c
_switch2:
        add r0, r4, #0
        add r0, #0x91
        ldrb r0, [r0, #0]
        cmp r0, #0x42
        dcd 0xe0ccd900 // 0xd900 = `bls _in_range` (skips the next instruction); 0xe0cc = `b _end`
        // _in_range:
        add r0, r0, r0
        add r0, pc
        ldrh r0, [r0, #8]
        lsl r0, r0, #16
        asr r0, r0, #16
        add r0, pc
        dcd 0x00874700 // 0x4700 = `bx r0`; 0x0087 = case 0x00 -> _arg_0b
        dcd 0x0097008f // case 0x01 -> _arg_0a; case 0x02 -> _arg_0d
        dcd 0x009f0097 // case 0x03 -> _arg_0d; case 0x04 -> _arg_0e
        dcd 0x009f009f // case 0x05 -> _arg_0e; case 0x06 -> _arg_0e
        dcd 0x009f009f // case 0x07 -> _arg_0e; case 0x08 -> _arg_0e
        dcd 0x009f009f // case 0x09 -> _arg_0e; case 0x0a -> _arg_0e
        dcd 0x00a700a7 // case 0x0b -> _arg_0f; case 0x0c -> _arg_0f
        dcd 0x00a700a7 // case 0x0d -> _arg_0f; case 0x0e -> _arg_0f
        dcd 0x00a700a7 // case 0x0f -> _arg_0f; case 0x10 -> _arg_0f
        dcd 0x00a700a7 // case 0x11 -> _arg_0f; case 0x12 -> _arg_0f
        dcd 0x00a700a7 // case 0x13 -> _arg_0f; case 0x14 -> _arg_0f
        dcd 0x00a700a7 // case 0x15 -> _arg_0f; case 0x16 -> _arg_0f
        dcd 0x018d00a7 // case 0x17 -> _arg_0f; case 0x18 -> _end
        dcd 0x018d018d // case 0x19 -> _end; case 0x1a -> _end
        dcd 0x00af018d // case 0x1b -> _end; case 0x1c -> _arg_10
        dcd 0x00b700b7 // case 0x1d -> _arg_11; case 0x1e -> _arg_11
        dcd 0x00bf00bf // case 0x1f -> _arg_2c; case 0x20 -> _arg_2c
        dcd 0x00cf00c7 // case 0x21 -> _arg_12; case 0x22 -> _arg_13
        dcd 0x00d700ff // case 0x23 -> _arg_29; case 0x24 -> _arg_14
        dcd 0x00e700df // case 0x25 -> _arg_15; case 0x26 -> _arg_16
        dcd 0x00f700ef // case 0x27 -> _arg_17; case 0x28 -> _arg_28
        dcd 0x01070107 // case 0x29 -> _arg_18; case 0x2a -> _arg_18
        dcd 0x01070107 // case 0x2b -> _arg_18; case 0x2c -> _arg_18
        dcd 0x0117010f // case 0x2d -> _arg_19; case 0x2e -> _arg_1a
        dcd 0x0127011f // case 0x2f -> _arg_1b; case 0x30 -> _arg_1c
        dcd 0x0137012f // case 0x31 -> _arg_1d; case 0x32 -> _arg_1e
        dcd 0x0147013f // case 0x33 -> _arg_2a; case 0x34 -> _arg_1f
        dcd 0x01470147 // case 0x35 -> _arg_1f; case 0x36 -> _arg_1f
        dcd 0x01470147 // case 0x37 -> _arg_1f; case 0x38 -> _arg_1f
        dcd 0x01470147 // case 0x39 -> _arg_1f; case 0x3a -> _arg_1f
        dcd 0x0157014f // case 0x3b -> _arg_20; case 0x3c -> _arg_2d
        dcd 0x0167015f // case 0x3d -> _arg_22; case 0x3e -> _arg_23
        dcd 0x0177016f // case 0x3f -> _arg_25; case 0x40 -> _arg_26
        dcd 0x0187017f // case 0x41 -> _arg_27; case 0x42 -> _arg_2d_b
_arg_0b:
        mov r0, #0xb
        bl func_0206f0b8
        b _end
_arg_0a:
        mov r0, #0xa
        bl func_0206f0b8
        b _end
_arg_0d:
        mov r0, #0xd
        bl func_0206f0b8
        b _end
_arg_0e:
        mov r0, #0xe
        bl func_0206f0b8
        b _end
_arg_0f:
        mov r0, #0xf
        bl func_0206f0b8
        b _end
_arg_10:
        mov r0, #0x10
        bl func_0206f0b8
        b _end
_arg_11:
        mov r0, #0x11
        bl func_0206f0b8
        b _end
_arg_2c:
        mov r0, #0x2c
        bl func_0206f0b8
        b _end
_arg_12:
        mov r0, #0x12
        bl func_0206f0b8
        b _end
_arg_13:
        mov r0, #0x13
        bl func_0206f0b8
        b _end
_arg_14:
        mov r0, #0x14
        bl func_0206f0b8
        b _end
_arg_15:
        mov r0, #0x15
        bl func_0206f0b8
        b _end
_arg_16:
        mov r0, #0x16
        bl func_0206f0b8
        b _end
_arg_17:
        mov r0, #0x17
        bl func_0206f0b8
        b _end
_arg_28:
        mov r0, #0x28
        bl func_0206f0b8
        b _end
_arg_29:
        mov r0, #0x29
        bl func_0206f0b8
        b _end
_arg_18:
        mov r0, #0x18
        bl func_0206f0b8
        b _end
_arg_19:
        mov r0, #0x19
        bl func_0206f0b8
        b _end
_arg_1a:
        mov r0, #0x1a
        bl func_0206f0b8
        b _end
_arg_1b:
        mov r0, #0x1b
        bl func_0206f0b8
        b _end
_arg_1c:
        mov r0, #0x1c
        bl func_0206f0b8
        b _end
_arg_1d:
        mov r0, #0x1d
        bl func_0206f0b8
        b _end
_arg_1e:
        mov r0, #0x1e
        bl func_0206f0b8
        b _end
_arg_2a:
        mov r0, #0x2a
        bl func_0206f0b8
        b _end
_arg_1f:
        mov r0, #0x1f
        bl func_0206f0b8
        b _end
_arg_20:
        mov r0, #0x20
        bl func_0206f0b8
        b _end
_arg_2d:
        mov r0, #0x2d
        bl func_0206f0b8
        b _end
_arg_22:
        mov r0, #0x22
        bl func_0206f0b8
        b _end
_arg_23:
        mov r0, #0x23
        bl func_0206f0b8
        b _end
_arg_25:
        mov r0, #0x25
        bl func_0206f0b8
        b _end
_arg_26:
        mov r0, #0x26
        bl func_0206f0b8
        b _end
_arg_27:
        mov r0, #0x27
        bl func_0206f0b8
        b _end
_arg_2d_b:
        mov r0, #0x2d
        bl func_0206f0b8
_end:
        mov r0, #0
        add r4, #0x8d
        strb r0, [r4, #0]
    }
}
#endif

void Unk_ov092_02291ec8::func_ov092_02291a2c() {
    func_020015b8(0);
    func_ov002_02200a60(2);
}

void Unk_ov092_02291ec8::func_ov092_0229191c() {
    unk_91 = func_0206ed50();
    unk_8d = 1;
    if (unk_91 == 0) {
        func_ov002_02200a60(2);
    } else {
        unk_8c = 0;
        func_ov002_02200a60(0);
        func_0206e048();
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        func_0206db88(3);
        break;
    case 0xf:
        func_0206db88(1);
        break;
    case 0x10:
        func_0206db88(2);
        break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
        func_0206db88(0);
        break;
    }
    switch (unk_91) {
    case 0:
        func_0200402c(0x11);
        break;
    default:
        func_0200402c(1);
        break;
    case 3:
        func_02003f5c(1);
        break;
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(1);
        break;
    case 0x3f:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(2);
        break;
    default:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(0);
        break;
    }
}

void Unk_ov092_02291ec8::func_ov092_02291918() {}

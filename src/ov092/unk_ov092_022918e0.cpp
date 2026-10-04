#include "types.h"
#include "Unk_020d8c7c.h"
#include "snd/BgmVolumeMixer.h"
#include "menu/MenuSlide.h"
#include "menu/MenuProc.h"
#include "menu/MenuLauncher.h"
#include "sys/ProcProfile.h"

extern "C" {
u32 MenuCtrl_GetMode();
void MenuScreen_BeginOpen();
void MenuScreen_SetBackgroundKind(s32 a);
void Snd_PlaySe(s32 a);
void func_02003f5c(s32 a);
void Gfx2d_SetSubBgModeState(s32 a);
void func_0206e60c();
void MenuCtrl_RequestOpenNested(s32 a);
void MenuCtrl_SetMode(s32 a);
void MenuScreen_ReleaseCloseHold();
void MenuScreen_BeginClose();
void func_0206e5fc();
void MenuScreen_Reset();
void Snd_EndMenuDuck();
void Snd_BeginMenuDuck();
void MenuCtrl_SyncFromInputMode();
void ProcBase_RequestDelete();
extern u8 *data_021c1b3c;
}





class MenuLauncher;
typedef void (MenuLauncher::*Unk_ov092_02291ec8_Fn)();


extern "C" MenuLauncher *MenuLauncher_Create() {
    return new MenuLauncher();
}


extern "C" ProcProfile sMenuLauncherProfile = {(void *(*)())MenuLauncher_Create, 0x90, 0x94};

BOOL MenuLauncher::onCreate() {
    func_0206e5fc();
    initLauncher();
    Snd_BeginMenuDuck();
    MenuCtrl_SyncFromInputMode();
    return TRUE;
}

BOOL MenuLauncher::onDelete() {
    func_0206e5fc();
    MenuScreen_Reset();
    releaseResources();
    Snd_EndMenuDuck();
    return TRUE;
}

BOOL MenuLauncher::onDraw() { return TRUE; }

BOOL MenuLauncher::execTransition() {
    static Unk_ov092_02291ec8_Fn tbl[1] = {&MenuLauncher::stateStart};
    (this->*tbl[transitionState])();
    return TRUE;
}

BOOL MenuLauncher::execMain() {
    static Unk_ov092_02291ec8_Fn tbl[2] = {&MenuLauncher::updateIdle, &MenuLauncher::updateOpenRequested};
    (this->*tbl[mainState])();
    return TRUE;
}

BOOL MenuLauncher::execPhase3() { return TRUE; }

BOOL MenuLauncher::execPhase4() { return TRUE; }

BOOL MenuLauncher::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void MenuLauncher::setNextRequest(s32 a, s32 b) {
    unk_91 = a;
    switch (a) {
    case 0:
        break;
    case 1:
        break;
    case 0x43:
        break;
    case 0x44:
        MenuScreen_BeginClose();
        break;
    }
    if (a != 0x43 && a != 0x44) {
    } else {
        if (b != 0) {
            Snd_PlaySe(2);
        }
        ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->endMenuDuck();
    }
}

void MenuLauncher::onChildClosed() {
    switch (unk_91) {
    case 0x43:
        setPhase(5);
        break;
    case 0x44:
        setPhase(0);
        Gfx2d_SetSubBgModeState(1);
        MenuScreen_ReleaseCloseHold();
        break;
    case 0:
    case 1:
        MenuScreen_BeginOpen();
        mainState = 1;
        break;
    case 2:
    case 0x23:
    case 0x35:
    case 0x36:
    case 0x40:
        mainState = 1;
        MenuCtrl_SetMode(unk_91);
        break;
    }
}

void MenuLauncher::updateIdle() {}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see docs/assembly.md). The assembly below is the original code; the C version under
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
void MenuLauncher::updateOpenRequested() {
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
    case 0x0: MenuCtrl_RequestOpenNested(0xb); break;
    case 0x1: MenuCtrl_RequestOpenNested(0xa); break;
    case 0x2: case 0x3: MenuCtrl_RequestOpenNested(0xd); break;
    case 0x4: case 0x5: case 0x6: case 0x7: case 0x8: case 0x9: case 0xa: MenuCtrl_RequestOpenNested(0xe); break;
    case 0xb: case 0xc: case 0xd: case 0xe: case 0xf: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: MenuCtrl_RequestOpenNested(0xf); break;
    case 0x18: case 0x19: case 0x1a: case 0x1b: break;
    case 0x1c: MenuCtrl_RequestOpenNested(0x10); break;
    case 0x1d: case 0x1e: MenuCtrl_RequestOpenNested(0x11); break;
    case 0x1f: case 0x20: MenuCtrl_RequestOpenNested(0x2c); break;
    case 0x21: MenuCtrl_RequestOpenNested(0x12); break;
    case 0x22: MenuCtrl_RequestOpenNested(0x13); break;
    case 0x24: MenuCtrl_RequestOpenNested(0x14); break;
    case 0x25: MenuCtrl_RequestOpenNested(0x15); break;
    case 0x26: MenuCtrl_RequestOpenNested(0x16); break;
    case 0x27: MenuCtrl_RequestOpenNested(0x17); break;
    case 0x28: MenuCtrl_RequestOpenNested(0x28); break;
    case 0x23: MenuCtrl_RequestOpenNested(0x29); break;
    case 0x29: case 0x2a: case 0x2b: case 0x2c: MenuCtrl_RequestOpenNested(0x18); break;
    case 0x2d: MenuCtrl_RequestOpenNested(0x19); break;
    case 0x2e: MenuCtrl_RequestOpenNested(0x1a); break;
    case 0x2f: MenuCtrl_RequestOpenNested(0x1b); break;
    case 0x30: MenuCtrl_RequestOpenNested(0x1c); break;
    case 0x31: MenuCtrl_RequestOpenNested(0x1d); break;
    case 0x32: MenuCtrl_RequestOpenNested(0x1e); break;
    case 0x33: MenuCtrl_RequestOpenNested(0x2a); break;
    case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3a: MenuCtrl_RequestOpenNested(0x1f); break;
    case 0x3b: MenuCtrl_RequestOpenNested(0x20); break;
    case 0x3c: MenuCtrl_RequestOpenNested(0x2d); break;
    case 0x3d: MenuCtrl_RequestOpenNested(0x22); break;
    case 0x3e: MenuCtrl_RequestOpenNested(0x23); break;
    case 0x3f: MenuCtrl_RequestOpenNested(0x25); break;
    case 0x40: MenuCtrl_RequestOpenNested(0x26); break;
    case 0x41: MenuCtrl_RequestOpenNested(0x27); break;
    case 0x42: MenuCtrl_RequestOpenNested(0x2d); break;
    }
    mainState = 0;
}
#else
void MenuLauncher::updateOpenRequested() {
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
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_0a:
        mov r0, #0xa
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_0d:
        mov r0, #0xd
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_0e:
        mov r0, #0xe
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_0f:
        mov r0, #0xf
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_10:
        mov r0, #0x10
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_11:
        mov r0, #0x11
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_2c:
        mov r0, #0x2c
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_12:
        mov r0, #0x12
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_13:
        mov r0, #0x13
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_14:
        mov r0, #0x14
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_15:
        mov r0, #0x15
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_16:
        mov r0, #0x16
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_17:
        mov r0, #0x17
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_28:
        mov r0, #0x28
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_29:
        mov r0, #0x29
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_18:
        mov r0, #0x18
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_19:
        mov r0, #0x19
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1a:
        mov r0, #0x1a
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1b:
        mov r0, #0x1b
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1c:
        mov r0, #0x1c
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1d:
        mov r0, #0x1d
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1e:
        mov r0, #0x1e
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_2a:
        mov r0, #0x2a
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_1f:
        mov r0, #0x1f
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_20:
        mov r0, #0x20
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_2d:
        mov r0, #0x2d
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_22:
        mov r0, #0x22
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_23:
        mov r0, #0x23
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_25:
        mov r0, #0x25
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_26:
        mov r0, #0x26
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_27:
        mov r0, #0x27
        bl MenuCtrl_RequestOpenNested
        b _end
_arg_2d_b:
        mov r0, #0x2d
        bl MenuCtrl_RequestOpenNested
_end:
        mov r0, #0
        add r4, #0x8d
        strb r0, [r4, #0]
    }
}
#endif

void MenuLauncher::stateStart() {
    Gfx2d_SetSubBgModeState(0);
    setPhase(2);
}

void MenuLauncher::initLauncher() {
    unk_91 = MenuCtrl_GetMode();
    mainState = 1;
    if (unk_91 == 0) {
        setPhase(2);
    } else {
        transitionState = 0;
        setPhase(0);
        MenuScreen_BeginOpen();
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        MenuScreen_SetBackgroundKind(3);
        break;
    case 0xf:
        MenuScreen_SetBackgroundKind(1);
        break;
    case 0x10:
        MenuScreen_SetBackgroundKind(2);
        break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
        MenuScreen_SetBackgroundKind(0);
        break;
    }
    switch (unk_91) {
    case 0:
        Snd_PlaySe(0x11);
        break;
    default:
        Snd_PlaySe(1);
        break;
    case 3:
        func_02003f5c(1);
        break;
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->setMenuDuck(1);
        break;
    case 0x3f:
        ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->setMenuDuck(2);
        break;
    default:
        ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->setMenuDuck(0);
        break;
    }
}

void MenuLauncher::releaseResources() {}

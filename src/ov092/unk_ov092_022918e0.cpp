#include "types.h"
#include "Unk_020d8c7c.h"
#include "snd/BgmVolumeMixer.h"
#include "snd/BgmManager.h"
#include "menu/MenuSlide.h"
#include "menu/MenuProc.h"
#include "menu/MenuLauncher.h"
#include "sys/ProcProfile.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/main/unk_0200137c.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_0206db88.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/ov092/unk_ov092_022918e0.h"

extern "C" {
extern BgmManager *data_021c1b3c;  // (the BGM manager)
}





class MenuLauncher;
typedef void (MenuLauncher::*Unk_ov092_02291ec8_Fn)();


extern "C" MenuLauncher *MenuLauncher_Create() {
    return new MenuLauncher();
}


extern "C" ProcProfile sMenuLauncherProfile = {(void *(*)())MenuLauncher_Create, 0x90, 0x94};

BOOL MenuLauncher::onCreate() {
    MenuCtrl_ClearSyncMsgMenu();
    initLauncher();
    Snd_BeginMenuDuck();
    MenuCtrl_SyncFromInputMode();
    return TRUE;
}

BOOL MenuLauncher::onDelete() {
    MenuCtrl_ClearSyncMsgMenu();
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
    ProcBase_RequestDelete(this);
    return TRUE;
}

void MenuLauncher::setNextRequest(s32 a, s32 b) {
    requestedMode = a;
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
        data_021c1b3c->mixer.endMenuDuck();
    }
}

void MenuLauncher::onChildClosed() {
    switch (requestedMode) {
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
        MenuCtrl_SetMode(requestedMode);
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
void MenuLauncher::updateOpenRequested() {
    switch (requestedMode) {
    case 0:
    case 1:
    case 0x18:
    case 0x1a:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x40:
        MenuCtrl_SetSyncMsgMenu();
        break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
        break;
    }
    switch (requestedMode) {
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

void MenuLauncher::stateStart() {
    Gfx2d_SetSubBgModeState(0);
    setPhase(2);
}

void MenuLauncher::initLauncher() {
    requestedMode = MenuCtrl_GetMode();
    mainState = 1;
    if (requestedMode == 0) {
        setPhase(2);
    } else {
        transitionState = 0;
        setPhase(0);
        MenuScreen_BeginOpen();
    }
    switch (requestedMode) {
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
    switch (requestedMode) {
    case 0:
        Snd_PlaySe(0x11);
        break;
    default:
        Snd_PlaySe(1);
        break;
    case 3:
        Snd_SetSceneBankVariant(1);
        break;
    }
    switch (requestedMode) {
    case 0x2d:
    case 0x2e:
        data_021c1b3c->mixer.setMenuDuck(1);
        break;
    case 0x3f:
        data_021c1b3c->mixer.setMenuDuck(2);
        break;
    default:
        data_021c1b3c->mixer.setMenuDuck(0);
        break;
    }
}

void MenuLauncher::releaseResources() {}

// mwcc-version: 1.2/base
// mwcc-flags: -O4,s
#include "types.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "talk/TalkWindowState.h"
#include "game/ReddPassword.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#include "town/ReddTent.h"














extern "C" {
s32 Scene_GetCurrent();
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *p);
}

extern "C" {
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *);
s32 Scene_GetCurrent();
}


void ReddTent::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 6:
        BuildingActor::onInteractionEvent(a, b);
        break;
    case 0:
    case 1:
        setTentState(1);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        break;
    case 8:
        setTentState(0);
        break;
    }
}
#ifndef PLAYER_PLAYERERRANDSINVITEVIEW_H
#define PLAYER_PLAYERERRANDSINVITEVIEW_H

#include "types.h"

// Matching views of PlayerErrands (PlayerData::getErrands) that reach the HouseVisitInvite at +0x88 and its
// ErrandRecord at +0x94 by derived-to-base reference casts (the original code's pointer arithmetic):
// PlayerErrandsInviteView &top -> HouseVisitInviteLayoutView &m (+0x88) -> HouseVisitInviteErrandPart &q (+0x94).
// Used by the NPC spawner (src/main/unk_02082d74.cpp) and HouseVisitVillager::preDelete (ov068).
struct PlayerErrandsHeadPad { u8 pad[0x88]; };
struct HouseVisitInviteIdPart { u8 pad[0xc]; };
struct HouseVisitInviteErrandPart { u8 pad[0x20]; };
struct HouseVisitInviteLayoutView : HouseVisitInviteIdPart, HouseVisitInviteErrandPart { u8 pad[0x20]; };
struct PlayerErrandsInviteView : PlayerErrandsHeadPad, HouseVisitInviteLayoutView { u8 pad[8]; };

#endif // PLAYER_PLAYERERRANDSINVITEVIEW_H

#ifndef FIELD_FIELDACTION_H
#define FIELD_FIELDACTION_H

#include "types.h"

// Field-action net records and pending units (src/main/unk_02041e00.cpp: FieldAction_* / PendingUnit_*;
// src/main/unk_020742f4.cpp: CommRecv_ItemActionRequest).

// Record 0x31 (8 bytes): a client's FieldActionRequest sent to the area owner (FieldAction_Submit ->
// CommRecv_ItemActionRequest -> FieldAction_HostProcess). unit = x << 8 | z; oldItem = the item on the unit.
struct FieldActionRequestMsg {
    /* 0x00 */ u8 aid : 2;
    /*      */ u8 requestIndex : 2;
    /*      */ u8 unitFlag : 2;     // FieldActionRequest +0x1d; buried flag / tree chop count of the unit (PendingUnit.unitFlag)
    /*      */ u8 unk_00_6 : 2;
    /* 0x01 */ u8 kind : 5;
    /*      */ u8 mode : 2;
    /*      */ u8 layer : 1;
    /* 0x02 */ u16 unit;
    /* 0x04 */ u16 oldItem;
    /* 0x06 */ u16 item;
};

// Record 0x32 (6 bytes, 14 with drops): the owner's answer to a FieldActionRequestMsg (FieldAction_HostProcess ->
// CommRecv_ItemActionResult -> FieldAction_OnNetResult); also the output of TreeDrop_Spawn (dropped units/item).
struct FieldActionResultMsg {
    /* 0x00 */ u8 hasDrops : 1;
    /*      */ u8 aid : 2;
    /*      */ u8 kind : 5;
    /* 0x01 */ u8 requestIndex : 2;
    /*      */ u8 accepted : 1;
    /*      */ u8 unitFlag : 2;     // FieldActionRequestMsg.unitFlag
    /*      */ u8 mode : 2;
    /*      */ u8 layer : 1;
    /* 0x02 */ u16 unit;
    /* 0x04 */ u16 item;
    /* 0x06 */ union {
        u16 dropUnits[3];         // x << 8 | z, 0xffff = none
        u8 dropUnitBytes[3][2];   // [i][0] = z, [i][1] = x
    };
    /* 0x0c */ u16 dropItem;
};

// Unit position packed into 16 bits: x << 8 | z (byte 0 = z, byte 1 = x).
union PackedUnitPos {
    u16 v;
    struct {
        u8 z;
        u8 x;
    } b;
};

// A map unit reserved by a field action until its animation commits the new item (PendingUnit_Reserve/Apply/Commit).
struct PendingUnit {
    /* 0x00 */ u8 aid : 3;      // 7 = free
    /*      */ u8 kind : 5;     // FieldActionRequest kind
    /* 0x01 */ u8 unitFlag : 2;
    /*      */ u8 slot : 3;     // 4 = the action's unit, 0..2 = tree-drop units, 7 = free
    /*      */ u8 mode : 2;
    /*      */ u8 committed : 1;
    /* 0x02 */ u8 pending : 1;
    /*      */ u8 layer : 1;
    /*      */ s8 unk_02_c : 4;
    /*      */ s8 unk_02_d : 2;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ PackedUnitPos unit;
    /* 0x0a */ u16 item;
    /* 0x0c */ u16 oldItem;
    /* 0x0e */ u16 unk_0e;
};

#endif

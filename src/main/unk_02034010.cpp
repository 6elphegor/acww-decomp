#include "types.h"
#include "game/Unk_02034014.h"


struct Unk_02034014_Col {
    u8 r, g, b, a;
    Unk_02034014_Col(u8 r_, u8 g_, u8 b_, u8 a_) : r(r_), g(g_), b(b_), a(a_) {}
};

extern "C" void FieldScene_DebugDraw()
{
}

s32 sDebugHappyRoomScore;
s32 sDebugHappyRoomBonusFlags;

extern "C" void Debug_SetHappyRoomScore(s32 v)
{
    sDebugHappyRoomScore = v;
}

extern "C" void Debug_SetHappyRoomBonusFlags(s32 v)
{
    sDebugHappyRoomBonusFlags = v;
}

Unk_02034014::Unk_02034014()
{
    clear();
    setDefaults();
}

Unk_02034014::~Unk_02034014()
{
}

Unk_02034014_Col sDebugColorRed(31, 20, 20, 31);
Unk_02034014_Col sDebugColorBlue(20, 20, 31, 31);
Unk_02034014_Col sDebugColorYellow(31, 31, 20, 31);
Unk_02034014_Col sDebugColorGreen(20, 31, 20, 31);
Unk_02034014_Col sDebugColorCyan(20, 31, 31, 31);
Unk_02034014_Col sDebugColorGrey(20, 24, 24, 31);
Unk_02034014 data_021c1a30;

// mwcc-flags: -nothumb
// Game (menu screen wipe): the line counter and the 24-entry edge table of the menu-screen window wipe, DTCM .data
// 0x027e0434-0x027e0450, zero in the image. MenuScreen_StartWipeOut and its neighbours (main 0x0206e33c...) fill
// them, the H-blank step MenuScreen_WipeHBlank (ITCM, src/itcm/unk_01ffcc60.cpp) walks the table. A data-only unit
// (the code is in two other modules); placed with the SDK's DTCM section pragma (see unk_027e0000.c).
#pragma define_section DTCM ".dtcm" abs32 RWX

#include "types.h"

#pragma section DTCM begin

u8 sMenuWipeLine;
u8 sMenuWipeEdge[24];

#pragma section DTCM end

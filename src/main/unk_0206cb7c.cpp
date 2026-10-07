#include "uptr.h"
#include "types.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "ui/LetterLayout.h"
#include "talk/BmgReader.h"
#include "talk/EncodedStringBase.h"
#include "talk/MsgString.h"
#include "talk/TalkBmgReader.h"
#include "talk/EncodedString.h"
#include "talk/MsgString513.h"
#include "talk/MsgString33B.h"
#include "talk/MsgString129.h"
#include "talk/MsgString25B.h"
#include "ui/LetterTextLine.h"
#include "talk/EncodedString40.h"
#include "talk/EncodedString512.h"
#include "proto/main/unk_0200137c.h"
#include "proto/main/unk_020027b4.h"
#include "proto/main/unk_02051218.h"
#include "proto/main/unk_0206c768.h"
#include "proto/main/unk_020b2c50.h"

extern "C" {
extern u8 sMailCheckWords[];
}

extern "C" {
extern s16 sMailCheckWordEnds[];
}

extern "C" {
extern u8 sMailCheckWordUses[];
}

extern "C" {
extern u8 sMailCheckSeparators[];
}

extern "C" {
extern char sMailCheckBankName[];
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
}

extern "C" {
}




class MsgString;





// ---------------------------------------------------------------------------------------------------------------------











MsgString25B::MsgString25B() { clear(); }

MsgString25B::~MsgString25B() {}

u32 MsgString25B::capacity() { return 0x19; }

u8 *MsgString25B::data() { return HOST_AT(this, 0x12, text[0], 0); }


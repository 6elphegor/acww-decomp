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
s32 Mem_Copy(void *src, void *dst, s32 n);
}

extern "C" {
s32 Text_GetLength(void *p, s32 n);
}

extern "C" {
s32 Text_GetLineEnd(void *p, s32 n, s32 z);
}

extern "C" {
s32 Text_FitToWidth(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
BOOL Gfx2d_IsMainScreenLayer(u32 x);
}

extern "C" {
s32 Gfx2d_GetLayerBgIndex(u32 n);
}




class MsgString;




extern "C" BOOL String_Load(MsgString *buf, u8 *key, const char *name);

// ---------------------------------------------------------------------------------------------------------------------










extern "C" BOOL String_LoadByIndexB(MsgString *buf, const char *name, u32 key);

MsgString25B::MsgString25B() { clear(); }

MsgString25B::~MsgString25B() {}

u32 MsgString25B::capacity() { return 0x19; }

u8 *MsgString25B::data() { return (u8 *)this + 0x12; }


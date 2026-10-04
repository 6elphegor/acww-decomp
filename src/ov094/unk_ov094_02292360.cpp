#include "types.h"
#include "item/ItemIconCache.h"
#include "menu/InventoryGridTypes.h"
#include "menu/InventoryItemGrid.h"
#include "menu/LetterGrid.h"
#include "menu/InventoryBg.h"



#define IN(x, lo, hi) ((x) >= (lo) && (x) <= (hi))




typedef OamObjTemplate Ent8;
typedef OamObjTemplateBits Rec;

void operator delete(void *p);








// symbols.txt names of main functions (called with the object first)
#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_02063870 _ZN11MsgString9CD1Ev
#define func_02063888 _ZN11MsgString9CC1Ev
#define LetterView_getState _ZN10LetterView8getStateEv
#define LetterView_getPresent _ZN10LetterView10getPresentEv
#define LabelString_redrawAligned _ZN11LabelString13redrawAlignedEii
#define LabelString_createLabel _ZN11LabelString11createLabelEjjjhhi
#define LabelString_destroyLabel _ZN11LabelString12destroyLabelEv
#define func_0206fca8 _ZN11LabelStringD1Ev
#define func_0206fcc8 _ZN11LabelStringC1Ev
#define LabelBalloon_setText _ZN12LabelBalloon7setTextEP6StrBuf
#define func_02089f30 _ZN16LabelBalloonTextD1Ev
#define func_02089f44 _ZN16LabelBalloonTextC1Ev
#define func_02094018 _ZN11MsgString9BD1Ev
#define func_02094030 _ZN11MsgString9BC1Ev
#define PlayerId_getNameString _ZN8PlayerId13getNameStringEP9MsgString
#define PlayerId_getGender _ZN8PlayerId9getGenderEv
#define PlayerInventory_getTotalBells _ZN15PlayerInventory13getTotalBellsEi
#define PlayerInventory_getLetter _ZN15PlayerInventory9getLetterEi
#define PlayerInventory_getPocketFlags _ZN15PlayerInventory14getPocketFlagsEi
#define PlayerInventory_getPocket _ZN15PlayerInventory9getPocketEi
#define PlayerData_getHeldItem _ZN10PlayerData11getHeldItemEv
#define PlayerData_getInventory _ZN10PlayerData12getInventoryEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define MsgString_copy _ZN9MsgString4copyEPS_
#define BgVramTaskPair_requestCharPair _ZN14BgVramTaskPair15requestCharPairEjjhjjjj
#define func_020b85f8 _ZN14BgVramTaskPairC1Ev
#define BgVramTask_requestPalette _ZN10BgVramTask14requestPaletteEjhj
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define BgVramTask_requestChars _ZN10BgVramTask12requestCharsEjhjjj
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

void operator delete(void *p);

extern "C" {
void Snd_PlaySe(s32 a);
void Snd_StopSe(s32 a, s32 b);
void Snd_PlaySeOnHandle(s32 a);
void Gfx2d_LoadCharRange(void *a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadScreen(void *a, u32 b, u32 c, s32 d);
void Gfx2d_LoadCharFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Item_GetInfoUnk02(void *p);
void StrBuf_Copy(void *a, void *b);
void ItemName_setFromItem(void *a, void *b);
void func_0206260c(void *p);
void func_0206267c(void *p);
void func_02063870(void *p);
void func_02063888(void *p);
void TownId_GetNameString(s32 a, void *p);
s32 Str_SPrintf(char *buf, const void *fmt, ...);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
s32 LetterView_getState(void *o);
s32 LetterView_getPresent(s32 a);
s32 Letter_IsBottle(void *o);
void Letter_GetRecipientName(void *o, void *buf);
void Letter_GetSenderName(void *o, void *buf);
s32 Letter_GetKind(void *o);
void Letter_Clear(void *o);
void Letter_Copy(void *o, s32 x);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 Menu_GetIconCharIndex(s32 a);
BOOL MenuCtrl_IsTouch();
void String_Load2dMenu(void *p, s32 a);
void LabelString_redrawAligned(void *p, s32 a, s32 b);
void LabelString_createLabel(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void LabelString_destroyLabel(void *p);
void func_0206fca8(void *p);
void func_0206fcc8(void *p);
s32 Oam_GetObjY(void *p);
s32 Oam_GetObjX(void *p);
s32 Oam_DrawObj(s32 a, const void *b, s32 c, s32 d, ...);
void LabelBalloon_setText(void *a, void *b);
void func_02089f30(void *p);
void func_02089f44(void *p);
void func_02094018(void *p);
void func_02094030(void *p);
s32 PlayerId_GetTownId(s32 a);
void PlayerId_getNameString(s32 a, void *p);
s32 PlayerId_getGender();
s32 PlayerData_GetCurrent();
s32 PlayerInventory_getTotalBells(s32 a, s32 b);
void *PlayerInventory_getLetter(s32 a, s32 b);
u32 PlayerInventory_getPocketFlags(s32 a, s32 b);
u16 *PlayerInventory_getPocket(s32 a, s32 b);
u16 *PlayerData_getHeldItem(s32 a);
s32 PlayerData_getInventory(s32 a);
s32 PlayerData_getPlayerId(...);
void Player_GetDeliveryRecipientName(void *a, void *b);
void Pocket_SetItem(u16 *a, s32 b, s32 c);
void MsgString_copy(void *a, void *b);
void String_SetSlot(s32 a, void *p);
void BgVramTaskPair_requestCharPair(void *a, void *b, void *c, s32 d, u32 e, u32 f, u32 g, u32 h);
void func_020b85f8(void *p);
s32 BgVramTask_requestPalette(void *a, void *b, s32 c, s32 d);
s32 BgVramTask_requestScreen(void *a, void *b, s32 c, s32 d, s32 e);
s32 BgVramTask_requestChars(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void BgVramTask_cancel(void *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_021355f0(void *p, s32 n, u32 sz, void *dtor);
s32 func_02135714(void *p, s32 n, u32 sz, void *ctor, void *dtor);
extern u32 gCurrentHeap;
s32 _ZN13ItemIconCache15getPresentCharsEi(void *self, s32 i, s32 j);

extern const u8 sPresentAnimScales[];
extern const u8 sPresentAnimFrames[];
extern const u32 sItemCursorLift[];
extern const s32 sItemScaleTable[];
extern const u8 sItemIconPalettes[];
extern const u8 sLetterPopScales[];
extern const u32 sLetterCursorLift[];
extern const u8 sLetterKindMsgIds[];
extern u8 sInventoryBgSprite[];
extern u8 sHeldItemSprite[];
extern u8 sItemGridMarkSprites[];
extern OamObjTemplate sItemGridSlotSprites[];
extern u8 sLetterGridColumnX[];
extern u8 sLetterIconSprite[];
extern u8 sLetterIconPalettes[];
extern u8 sLetterMarkSprites[];
extern u16 sLetterIconChars[];
}

extern "C" {
void InventoryBg_LoadBg(InventoryBg *s, s32 flag);
void InventoryBg_Load(InventoryBg *s, s32 flag);
InventoryBg *_ZN11InventoryBgC1Ev(InventoryBg *s) {
    u8 *p = s->vramTasks;
    u8 *e = s->textWindows;
    do {
        func_020b85f8(p);
        p += 0x38;
    } while (p != e);
    func_02135714(e, 2, 0x40, (void *)func_0206fcc8, (void *)func_0206fca8);
    return s;
}

InventoryBg *_ZN11InventoryBgD1Ev(InventoryBg *s) {
    func_021355f0(s->textWindows, 2, 0x40, (void *)func_0206fca8);
    return s;
}

void InventoryBg_Init(InventoryBg *s, u32 v);
InventoryBg *_ZN11InventoryBgD1Ev(InventoryBg *s);
InventoryBg *_ZN11InventoryBgC1Ev(InventoryBg *s);
BOOL InventoryItemGrid_TestBit(u32 *bits, s32 i);
void InventoryItemGrid_ClearBit(u32 *bits, s32 i);
void InventoryItemGrid_SetBit(u32 *bits, s32 i);
void InventoryItemGrid_ClearBits(u32 *bits);
s32 InventoryItemGrid_GetPresentAnimScale(InventoryItemGrid *s);
BOOL InventoryItemGrid_UpdatePresentAnim(InventoryItemGrid *s);
void InventoryItemGrid_EndPresentAnim(InventoryItemGrid *s);
void InventoryItemGrid_StartPresentAnim(InventoryItemGrid *s, u32 v, s32 m);
u32 InventoryItemGrid_AllocUpload(InventoryItemGrid *s);
void InventoryItemGrid_CancelUploads(InventoryItemGrid *s);
u32 InventoryItemGrid_GetScale(u32 i);
Ent8 *InventoryItemGrid_GetSlotSprite(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_DrawSlot(InventoryItemGrid *s, Ent8 *e, s32 idx, s32 x, s32 y);
void InventoryItemGrid_DrawFocus(InventoryItemGrid *s, s32 a, s32 b);
void InventoryItemGrid_DrawUnderlay(InventoryItemGrid *s, s32 a, s32 b, s32 c);
void InventoryItemGrid_DrawMark(InventoryItemGrid *s, s32 a, s32 b);
BOOL InventoryItemGrid_IsSlotEmpty(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_DrawHeldItem(InventoryItemGrid *s, s32 x, s32 y);
void InventoryItemGrid_DrawExtraMarks(InventoryItemGrid *s, s32 x, s32 y);
void InventoryItemGrid_DrawBox(InventoryItemGrid *s, s32 x, s32 y);
void InventoryItemGrid_DrawPocketsClipped(InventoryItemGrid *s, s32 x, s32 y, s32 w);
void InventoryItemGrid_DrawPockets(InventoryItemGrid *s, s32 x, s32 y);
void InventoryItemGrid_DisableSlot(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_DisableSlotRange(InventoryItemGrid *s, u8 i, u8 e);
BOOL InventoryItemGrid_IsSlotDisabled(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_UploadIcon(InventoryItemGrid *s, Rec *r, void *dst, s32 c);
void InventoryItemGrid_SetSpriteItem(InventoryItemGrid *s, Rec *r, u32 v, s32 m);
void InventoryItemGrid_SetHeldItem(InventoryItemGrid *s, Rec *r, s32 m);
void InventoryItemGrid_RefreshSlot(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_SetSlotItem(InventoryItemGrid *s, s32 i, u32 v, s32 x);
void InventoryItemGrid_ClearSlot(InventoryItemGrid *s, s32 i);
u32 InventoryItemGrid_GetSlotFlags(InventoryItemGrid *s, s32 i);
u16 InventoryItemGrid_GetSlotItem(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_MarkSlot(InventoryItemGrid *s, s32 i);
void InventoryItemGrid_ClearMarks(InventoryItemGrid *s);
void InventoryItemGrid_SetCursorSlot(InventoryItemGrid *o, u32 v);
void InventoryItemGrid_ClearCursorSlot(InventoryItemGrid *o);
s32 InventoryItemGrid_GetCursorLift(InventoryItemGrid *o);
BOOL InventoryItemGrid_IsCursorSlot(InventoryItemGrid *o, s32 v);
s32 InventoryItemGrid_GetSlotY(void *o, s32 i);
s32 InventoryItemGrid_GetSlotX(void *o, s32 i);
void InventoryItemGrid_ShowSlotName(void *o, s32 a, s32 b);
void InventoryItemGrid_SetBalloonItemName(void *o, void *dst, u16 *p, s32 mode);
s32 InventoryItemGrid_GetIconIndex(void *o, u16 *p, s32 mode);
void InventoryItemGrid_LoadBox(InventoryItemGrid *o, u16 *arr);
void InventoryItemGrid_LoadPockets(InventoryItemGrid *o);
void InventoryItemGrid_LoadSlotIcon(InventoryItemGrid *o, s32 k, u16 *p, s32 a);
s32 InventoryItemGrid_HitTestSlot(void *o, s32 a, s32 b, s32 c);
u32 InventoryItemGrid_FindSlotInRange(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e);
s32 InventoryItemGrid_HitTestSlot21(void *o, s32 a, s32 b);
u32 InventoryItemGrid_FindBoxSlotAt(void *o, s32 a, s32 b);
u32 InventoryItemGrid_FindPocketSlotAt(void *o, s32 a, s32 b);
void InventoryItemGrid_Exit(void *o);
void InventoryItemGrid_PreUpdate(InventoryItemGrid *o);
void InventoryItemGrid_Init(InventoryItemGrid *o, u32 a);
u8 InventoryItemGrid_GetIconPalette(void *o, s32 i);
BOOL LetterGrid_TestBit(u32 *bits, s32 i);
void LetterGrid_ClearBit(u32 *bits, s32 i);
void LetterGrid_SetBit(u32 *bits, s32 i);
void LetterGrid_ClearBits(u32 *bits);
u8 LetterGrid_GetPopScale(LetterGrid *o);
BOOL LetterGrid_UpdatePopAnim(LetterGrid *o);
void LetterGrid_ResetScale(LetterGrid *o);
void LetterGrid_StartPopAnim(LetterGrid *o);
s32 LetterGrid_GetIconIndex(void *o, s32 h);
void LetterGrid_SetLetterArray(LetterGrid *o, u8 *p, s32 m, s32 n);
void LetterGrid_SetLetters23(void *o, u8 *p);
void LetterGrid_SetLetters0A(void *o, u8 *p);
void LetterGrid_SetLetters2D(void *o, u8 *p);
void LetterGrid_LoadPocketLetters(LetterGrid *o);
BOOL LetterGrid_IsSlotEmpty(LetterGrid *o, s32 i);
s32 LetterGrid_GetSlotY(void *o, s32 i);
s32 LetterGrid_GetSlotX(void *o, s32 i);
void LetterGrid_DrawSlot(InventoryItemGrid *o, s32 a1, s32 idx, s32 x, s32 y0);
void InventoryBg_ClearDirty(void *o, u32 m);
void InventoryBg_SetDirty(void *o, u32 m);
s32 InventoryBg_IsDirty(void *o, u32 m);
void Inventory_PlayPickUpSe();
void Inventory_PlayTouchSe();
void Inventory_PlayPutDownSe();
BOOL InvItem_IsNotFishInsectOrFlower(u32 v);
BOOL InvItem_IsNonTransferable(u32 v);
BOOL InvItem_IsDeliveryParcel(u32 v);
BOOL InvItem_IsDeliveryItem(u32 v);
void InventoryBg_ResetHighlight(void *o);
void InventoryBg_SetHighlight(void *o, u32 v);
void InventoryBg_UpdateHighlight(void *o);
BOOL InvItem_IsTurnipFishOrInsect(u32 v);
void InventoryBg_UpdateBells(void *o);
void InventoryBg_ResetBells(void *o);
s32 InventoryBg_GetTotalBells();
void InventoryBg_SetBellsPanelMode(void *o, u32 n);
void InventoryBg_StartBellRoll(void *o, u32 v);
void InventoryBg_StopBlink(void *o);
BOOL InventoryBg_UpdateBlink(void *o);
void InventoryBg_StartBlink(void *o, u32 v);
void InventoryBg_DrawSprite(s32 a, void *o);
void InventoryBg_UploadPalette(void *o);
void InventoryBg_UploadPicture(void *o);
void InventoryBg_LoadPicture(void *o, s32 a, s32 b);
void InventoryBg_LoadPictureForHeldItem(void *o);
void InventoryBg_PaintHighlight1(void *o);
void InventoryBg_PaintHighlight0(void *o);
void InventoryBg_PaintNormal(void *o);
void InventoryBg_UploadScreen(void *o);
void InventoryBg_ClearTextWindows(void *o);
void InventoryBg_CancelUploads(void *o);
void InventoryBg_Exit(void *o);
void InventoryBg_Update(void *o);
void InventoryBg_PreUpdate(void *o);
void InventoryBg_LoadObjGraphics();
void InventoryBg_SetupTextWindows(void *o);
void InventoryBg_LoadGraphics(void *o);
}



static inline void Unk_ov094_SetPal(OamObjTemplateAttr2 *o, s32 pal) {
    o->v = (u16)((o->v & 0xffff0fff) | ((pal & 0xf) << 12));
}

static inline void Unk_ov094_SetName(OamObjTemplateAttr2 *o, s32 name) {
    o->v = (u16)((o->v & 0xfffffc00) | (name & 0x3ff));
}

#define data_ov094_02294888 "menu/inventory/itmp/m%d.bch"
#define data_ov094_022948a4 "menu/inventory/itmp/w%d.bch"
#define data_ov094_022948c0 "menu/inventory/b_obj_itm.bpl"
#define data_ov094_022948e0 "menu/icon/b_obj_itm.bpl"
#define data_ov094_022948f8 "menu/inventory/obj0.bch"
#define data_ov094_02294910 "menu/inventory/obj1.bch"
#define data_ov094_02294928 "menu/inventory/b_itm2.bch"
#define data_ov094_02294944 "menu/inventory/b_itm9.bpl"
#define data_ov094_02294960 "menu/inventory/b_itmb.bpl"
#define data_ov094_0229497c "menu/inventory/b_obj_itm6.bpl"
#define data_ov094_0229499c "menu/inventory/b_itm.bpl"
#define data_ov094_022949b8 "menu/inventory/b_itm_bg_a.bsc"
#define data_ov094_022949d8 "menu/inventory/b_itm_bg_c.bsc"
#define data_ov094_022949f8 "menu/inventory/b_itm0.bch"
#define data_ov094_02294a14 "menu/inventory/b_itm1.bch"
#define data_ov094_02294b80 "menu/icon/pre%d.bch"
#define data_ov094_02294b94 "menu/icon/icon%02d.bch"
#define data_ov094_02294a60 (sItemGridMarkSprites + 8)
#define data_ov094_02294a68 (sItemGridMarkSprites + 16)
#define data_ov094_02294be4 (sLetterMarkSprites + 8)
#define data_ov094_02294bec (sLetterMarkSprites + 16)

extern "C" u8 sInventoryBgSprite[8] = {0xf8, 0x00, 0xc3, 0x01, 0xfa, 0x61, 0xff, 0xff};

void InventoryBg_Init(InventoryBg *s, u32 v) {
    s->bgId = v;
    s->dirtyFlags = 0;
    InventoryBg_ResetBells(s);
    s->paintedHighlight = 2;
    s->highlight = 2;
    s->pictureIndex = 8;
}

void InventoryBg_Load(InventoryBg *s, s32 flag) {
    InventoryBg_LoadBg(s, flag);
    InventoryBg_LoadGraphics(s);
}

void InventoryBg_LoadBg(InventoryBg *s, s32 flag) {
    u32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile(data_ov094_0229499c, h, s->bgId, 0, 1, 0xd);
    File_LoadToBuffer(flag ? data_ov094_022949b8 : data_ov094_022949d8, s->screenData, 0x800);
    Gfx2d_LoadScreen(s->screenData, s->bgId, 0x800, 0);
    Gfx2d_LoadCharFile(data_ov094_022949f8, h, s->bgId, 0, 0x10, 0xff);
    Gfx2d_LoadCharFile(data_ov094_02294a14, h, s->bgId, 0x100, 0x100, 0x1ff);
}

void InventoryBg_LoadGraphics(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    Gfx2d_LoadCharFile(data_ov094_02294928, gCurrentHeap, p->bgId, 0x200, 0x200, 0x2ff);
    InventoryBg_SetupTextWindows(p);
    InventoryBg_ResetBells(p);
    InventoryBg_LoadPictureForHeldItem(p);
    File_LoadToBuffer(data_ov094_02294944, p->palette, 0x20);
    p->bellsColorA = p->bellsColor;
    File_LoadToBuffer(data_ov094_02294960, p->palette, 0x20);
    p->bellsColorB = p->bellsColor;
    File_LoadToBuffer(data_ov094_0229497c, p->palette, 0x20);
}

void InventoryBg_SetupTextWindows(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    u8 buf[0x1c];
    u8 buf2[0x1c];
    PlayerData_GetCurrent();
    s32 r = PlayerData_getPlayerId();
    func_02063888(buf);
    TownId_GetNameString(PlayerId_GetTownId(r), buf);
    String_SetSlot(0, buf);
    LabelString_createLabel((u8 *)p + 0xe0, p->bgId, 0x11, 0xa, 0xf, 0xc, 0);
    String_Load2dMenu((u8 *)p + 0xe0, 0x66);
    LabelString_redrawAligned((u8 *)p + 0xe0, 1, 0);
    func_02094030(buf2);
    PlayerId_getNameString(r, buf2);
    LabelString_createLabel((u8 *)p + 0x120, p->bgId, 0x25, 8, 0xf, 0xc, 0);
    MsgString_copy((u8 *)p + 0x120, buf2);
    LabelString_redrawAligned((u8 *)p + 0x120, 1, 0);
    func_02094018(buf2);
    func_02063870(buf);
}

void InventoryBg_LoadObjGraphics()
{
    s32 g = gCurrentHeap;
    Gfx2d_LoadPaletteFile(data_ov094_022948c0, g, 8, 4, 4, 6);
    Gfx2d_LoadPaletteFile(data_ov094_022948e0, g, 8, 7, 7, 0xe);
    Gfx2d_LoadCharFile(data_ov094_022948f8, g, 8, 0xc0, 0xc0, 0x15f);
    Gfx2d_LoadCharFile(data_ov094_02294910, g, 8, 0x160, 0x160, 0x1ff);
}

void InventoryBg_PreUpdate(void *o)
{
    InventoryBg_CancelUploads(o);
    InventoryBg_ClearTextWindows(o);
}

void InventoryBg_Update(void *o)
{
    InventoryBg_UpdateBells(o);
    InventoryBg_UpdateHighlight(o);
    InventoryBg_UploadScreen(o);
    InventoryBg_UploadPicture(o);
    InventoryBg_UploadPalette(o);
}

void InventoryBg_Exit(void *o)
{
    InventoryBg_CancelUploads(o);
    InventoryBg_ClearTextWindows(o);
    if (((InventoryBg *)o)->bellRollTimer != 0) {
        Snd_StopSe(0x2d, 1);
    }
}

void InventoryBg_CancelUploads(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0x38;
    for (; i < 3; i++) {
        BgVramTask_cancel(b + i * 0x38);
    }
}

void InventoryBg_ClearTextWindows(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0xe0;
    for (; i < 2; i++) {
        LabelString_destroyLabel(b + (i << 6));
    }
}

void InventoryBg_UploadScreen(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    if (InventoryBg_IsDirty(p, 1)) {
        if (BgVramTask_requestScreen((u8 *)p + 0x38, (u8 *)p + 0x160, p->bgId, 0x800, 0)) {
            InventoryBg_ClearDirty(p, 1);
        }
    }
}

void InventoryBg_PaintNormal(void *o)
{
    BgScreen_SetRectPalette((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 2);
    InventoryBg_SetDirty(o, 1);
}

void InventoryBg_PaintHighlight0(void *o)
{
    BgScreen_SetRectPalette((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 7);
}

void InventoryBg_PaintHighlight1(void *o)
{
    BgScreen_SetRectPalette((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 6);
}

void InventoryBg_LoadPictureForHeldItem(void *o)
{
    s32 a = PlayerData_GetCurrent();
    PlayerData_getPlayerId();
    s32 b = PlayerId_getGender();
    u16 *pv = PlayerData_getHeldItem(a);
    s32 idx = 0;
    BOOL fl = FALSE;
    u32 v = *pv;
    if (IN(v, 0x1369, 0x1369)) {
        fl = TRUE;
    }
    if (fl || IN(v, 0x136a, 0x136a)) {
        idx = 1;
    } else if (IN(v, 0x136b, 0x1372) || IN(v, 0x1373, 0x1373)) {
        idx = 2;
    } else if (IN(v, 0x1374, 0x1374) || IN(v, 0x1375, 0x1375)) {
        idx = 3;
    } else if (IN(v, 0x1380, 0x139f) || IN(v, 0x13a0, 0x13a7)) {
        idx = 4;
    } else if (IN(v, 0x1377, 0x1377) || IN(v, 0x1376, 0x1376)) {
        idx = 5;
    } else if (IN(v, 0x1379, 0x1379) || IN(v, 0x1378, 0x1378)) {
        idx = 6;
    } else if (IN(v, 0x137a, 0x137a) || IN(v, 0x137b, 0x137b)) {
        idx = 7;
    }
    InventoryBg_LoadPicture(o, idx, b);
}

void InventoryBg_LoadPicture(void *o, s32 a, s32 b)
{
    InventoryBg *p = (InventoryBg *)o;
    char buf[0x2c];
    if (b == 0) {
        Str_SPrintf(buf, data_ov094_02294888, a);
    } else {
        Str_SPrintf(buf, data_ov094_022948a4, a);
    }
    File_LoadToBuffer(buf, (u8 *)p + 0x960, 0xc80);
    p->pictureIndex = a;
    InventoryBg_SetDirty(p, 4);
}

void InventoryBg_UploadPicture(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    if (InventoryBg_IsDirty(p, 4)) {
        if (BgVramTask_requestChars((u8 *)p + 0x70, (u8 *)p + 0x960, p->bgId, 0x35, 0x35, 0x98)) {
            InventoryBg_ClearDirty(p, 4);
        }
    }
}

void InventoryBg_UploadPalette(void *o)
{
    if (InventoryBg_IsDirty(o, 8)) {
        if (BgVramTask_requestPalette((u8 *)o + 0xa8, (u8 *)o + 0x16, 8, 6)) {
            InventoryBg_ClearDirty(o, 8);
        }
    }
}

void InventoryBg_DrawSprite(s32 a, void *o)
{
    Oam_DrawObj(1, sInventoryBgSprite, 0x80, (s32)((u8 *)o + 0x60), -1, 2, 0);
}

void InventoryBg_StartBlink(void *o, u32 v)
{
    InventoryBg *p = (InventoryBg *)o;
    p->blinkHighlight = v;
    p->blinkTimer = 14;
}

BOOL InventoryBg_UpdateBlink(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    if (p->blinkTimer != 0) {
        p->blinkTimer = p->blinkTimer - 1;
        switch (p->blinkTimer % 5) {
        case 3:
            InventoryBg_SetHighlight(p, p->blinkHighlight);
            break;
        case 0:
            InventoryBg_ResetHighlight(p);
            break;
        }
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}

void InventoryBg_StopBlink(void *o)
{
    ((InventoryBg *)o)->blinkTimer = 0;
    InventoryBg_ResetHighlight(o);
}

void InventoryBg_StartBellRoll(void *o, u32 v)
{
    InventoryBg *p = (InventoryBg *)o;
    s32 t = InventoryBg_GetTotalBells();
    s32 c = p->shownBells;
    if (t != c) {
        s32 d;
        if (t > c) {
            d = t - c;
        } else {
            d = c - t;
        }
        if (d < 30) {
            p->bellRollTimer = 1;
        } else {
            p->bellRollTimer = 14;
            p->bellStep = d / 13;
            if (p->bellStep % 5 == 0) {
                p->bellStep = p->bellStep - 1;
            }
            if (p->bellStep <= 1) {
                p->bellRollTimer = 1;
            }
            InventoryBg_SetBellsPanelMode(p, v);
            Snd_PlaySeOnHandle(0x2d);
        }
    }
}

void InventoryBg_SetBellsPanelMode(void *o, u32 n)
{
    InventoryBg *p = (InventoryBg *)o;
    s32 x = 7;
    s32 y = 9;
    s32 z = 9;
    switch (n) {
    case 0:
        break;
    case 1:
        z = 8;
        x = y;
        break;
    case 2:
        z = 8;
        x = z;
        break;
    case 3:
        z = 8;
        break;
    }
    BgScreen_SetRectPalette((u8 *)p + 0x160, x, 10, 11, 11, z);
    InventoryBg_SetDirty(p, 8);
    switch (n) {
    case 0:
    case 1:
        p->bellsColor = p->bellsColorA;
        break;
    case 2:
    case 3:
        p->bellsColor = p->bellsColorB;
        break;
    }
    InventoryBg_SetDirty(p, 1);
}

s32 InventoryBg_GetTotalBells()
{
    return PlayerInventory_getTotalBells(PlayerData_getInventory(PlayerData_GetCurrent()), 0);
}

void InventoryBg_ResetBells(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    p->shownBells = InventoryBg_GetTotalBells();
    p->bellRollTimer = 0;
    InventoryBg_SetDirty(p, 2);
}

void InventoryBg_UpdateBells(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    s32 t = InventoryBg_GetTotalBells();
    if (p->bellRollTimer != 0) {
        p->bellRollTimer = p->bellRollTimer - 1;
        if (p->bellRollTimer == 0) {
            p->shownBells = t;
            InventoryBg_SetBellsPanelMode(p, 0);
            Snd_StopSe(0x2d, 1);
            Snd_PlaySe(0x3e);
        } else {
            s32 c = p->shownBells;
            if (c < t) {
                p->shownBells = c + p->bellStep;
            } else {
                p->shownBells = c - p->bellStep;
            }
        }
        InventoryBg_SetDirty(p, 2);
    }
    if (InventoryBg_IsDirty(p, 2)) {
        s32 v = p->shownBells;
        InventoryBg_SetDirty(p, 1);
        u16 *q = (u16 *)((u8 *)p + 0x3f6);
        s32 i;
        for (i = 0; i < 5; i++) {
            s32 base;
            if (i < 3) {
                base = 0x2ec;
            } else {
                base = 0x2d8;
            }
            s32 d = v % 10 * 2;
            d += base;
            *q = (*q & 0xfc00) | d;
            q[0x20] = (q[0x20] & 0xfc00) | (d + 1);
            q--;
            v = v / 10;
        }
        InventoryBg_ClearDirty(p, 2);
    }
}

BOOL InvItem_IsTurnipFishOrInsect(u32 v)
{
    InvItemStackPad pad;
    if (IN(v, 0x1531, 0x153a) || IN(v, 0x153b, 0x1541) || IN(v, 0x154a, 0x1553) ||
        IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}

void InventoryBg_UpdateHighlight(void *o)
{
    InventoryBg *p = (InventoryBg *)o;
    u32 a = p->highlight;
    if (a != p->paintedHighlight) {
        p->paintedHighlight = a;
        InventoryBg_PaintNormal(p);
        u32 b = p->paintedHighlight;
        switch (b) {
        case 0:
            InventoryBg_PaintHighlight0(p);
            break;
        case 1:
            InventoryBg_PaintHighlight1(p);
            break;
        }
    }
}

void InventoryBg_SetHighlight(void *o, u32 v)
{
    ((InventoryBg *)o)->highlight = v;
}

void InventoryBg_ResetHighlight(void *o)
{
    ((InventoryBg *)o)->highlight = 2;
}

BOOL InvItem_IsDeliveryItem(u32 v)
{
    InvItemStackPad pad;
    if (IN(v, 0x155f, 0x1560) || IN(v, 0x1561, 0x1564)) {
        return TRUE;
    }
    return FALSE;
}

BOOL InvItem_IsDeliveryParcel(u32 v)
{
    InvItemStackPad pad;
    if (IN(v, 0x155f, 0x1560)) {
        return TRUE;
    }
    return FALSE;
}

BOOL InvItem_IsNonTransferable(u32 v)
{
    InvItemStackPad pad;
    if (IN(v, 0x155d, 0x155d)) {
        return TRUE;
    }
    return FALSE;
}

BOOL InvItem_IsNotFishInsectOrFlower(u32 v)
{
    InvItemStackPad pad;
    if (IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return FALSE;
    }
    if (IN(v, 0x137c, 0x137c) || IN(v, 0x1408, 0x1428) || IN(v, 0x1471, 0x1491)) {
        return FALSE;
    }
    return TRUE;
}

void Inventory_PlayPutDownSe()
{
    Snd_PlaySe(14);
}

void Inventory_PlayTouchSe()
{
    Snd_PlaySe(12);
}

void Inventory_PlayPickUpSe()
{
    Snd_PlaySe(13);
}

s32 InventoryBg_IsDirty(void *o, u32 m)
{
    InventoryBg *p = (InventoryBg *)o;
    if (p->dirtyFlags & m) {
        return TRUE;
    }
    return FALSE;
}

void InventoryBg_SetDirty(void *o, u32 m)
{
    InventoryBg *p = (InventoryBg *)o;
    p->dirtyFlags = p->dirtyFlags | m;
}

void InventoryBg_ClearDirty(void *o, u32 m)
{
    InventoryBg *p = (InventoryBg *)o;
    p->dirtyFlags = p->dirtyFlags & ~m;
}

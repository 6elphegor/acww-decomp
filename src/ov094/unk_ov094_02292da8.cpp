#include "types.h"

struct Unk_ov094_02292360_Obj {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16[0x1c];
    u16 unk_32;
};

struct Unk_ov094_022923a4_Pad {
    s32 v[2];
    Unk_ov094_022923a4_Pad() {}
    ~Unk_ov094_022923a4_Pad() {}
};

#define IN(x, lo, hi) ((x) >= (lo) && (x) <= (hi))
struct Unk_ov094_02292d6c_Ent8 {
    u8 b[8];
};

struct Unk_ov094_02292d6c_Obj38 {
    u8 b[0x38];
};

struct Unk_ov094_02292d6c_Rec {
    u32 unk_00;
    u32 id : 10;
    u32 pad : 2;
    u32 c : 4;
    u32 hi : 16;
};

struct InventoryBg {
    /* 0x000 */ u32 unk_00;
    /* 0x004 */ u8 unk_04[0x4];
    /* 0x008 */ u16 unk_08;
    /* 0x00a */ u8 unk_0a[4];
    /* 0x00e */ u8 unk_0e;
    /* 0x00f */ u8 unk_0f;
    /* 0x010 */ u8 unk_10;
    /* 0x011 */ u8 unk_11[3];
    /* 0x014 */ u8 unk_14;
    /* 0x015 */ u8 unk_15[0x23];
    /* 0x038 */ u8 unk_38[0xa8];
    /* 0x0e0 */ u8 unk_e0[0x80];
    /* 0x160 */ u8 unk_160[0x24];
    /* 0x184 */ u8 unk_184[0x808];
    /* 0x98c */ Unk_ov094_02292d6c_Obj38 unk_98c[3];
    /* 0xa34 */ u16 *unk_a34;
    /* 0xa38 */ u32 unk_a38[2];
    /* 0xa40 */ u32 unk_a40[2];
    /* 0xa48 */ u32 unk_a48[2];
    /* 0xa50 */ s32 unk_a50;
    /* 0xa54 */ u16 unk_a54;
    /* 0xa56 */ u8 unk_a56;
    /* 0xa57 */ u8 unk_a57;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ u8 unk_a59;
    /* 0xa5a */ u8 unk_a5a;
    /* 0xa5b */ u8 unk_a5b;
    /* 0xa5c */ u8 unk_a5c;
};

typedef InventoryBg S;
typedef Unk_ov094_02292d6c_Ent8 Ent8;
typedef Unk_ov094_02292d6c_Rec Rec;

void operator delete(void *p);

struct ItemIconCache {
    u8 unk_04[0x800];
    u8 unk_804;

    ItemIconCache();
    virtual ~ItemIconCache();
    u8 *getPresentChars(s32 idx);
    u8 *getIconChars(s32 idx);
    void invalidate();
};

struct InventoryItemGrid {
    u8 unk_04[0x180];
    ItemIconCache unk_184;
    u8 unk_98c[0xa8];
    u16 *unk_a34;
    u8 unk_a38[8];
    u8 unk_a40[8];
    u8 unk_a48[8];
    u32 unk_a50;
    u8 unk_a54[2];
    u8 unk_a56;
    u8 unk_a57;
    u8 unk_a58;
    u8 unk_a59;
    u8 unk_a5a[2];
    u8 unk_a5c;

    InventoryItemGrid();
    virtual ~InventoryItemGrid();
};

struct Unk_ov094_02293c04_Rec {
    u8 unk_00[0x26];
    volatile u8 unk_26;
    u8 unk_27;
};

struct Unk_ov094_02293ca0_Obj {
    s32 unk_00;
    u8 *volatile unk_04;
    u32 unk_08[2];
};

struct Unk_ov094_022937e4_Ent {
    s32 unk_00;
    u32 unk_04;
};
struct Unk_ov094_02294bb4_Bits {
    u32 pad;
    u16 v;
};

struct Unk_ov094_Bits8 {
    u32 unk_00[2];
};

// Vtable 0x02294bd4
class LetterGrid {
public:
    LetterGrid();
    virtual ~LetterGrid();

    void drawFocus(s32 a, s32 b, s32 c);
    void drawUnderlay(s32 a, s32 b, s32 c, void *d);
    void drawMark(s32 a, s32 b);
    void drawLetterIcon(s32 a, s32 b, u32 c, void *e, void *f);
    s32 getLetterPalette(void *o);
    void drawHeldLetter(s32 a, s32 b, void *o);
    void drawLetters2D(s32 a, s32 b);
    void drawLetters23(s32 a, s32 b);
    void drawLetters0A(s32 a, s32 b);
    void drawPocketLetters(s32 a, s32 b);
    void setHighlighted(s32 i);
    BOOL isHighlighted(s32 i);
    void highlightLetterKinds(u32 flags);
    void clearLetter(s32 i);
    void func_ov094_02294318(s32 i, s32 x);
    void *getLetter(s32 i);
    void markSlot(s32 i);
    void clearMarks();
    void setCursorSlot(u32 v);
    void clearCursorSlot();
    u32 getCursorLift();
    BOOL isCursorSlot(s32 v);
    void showLetterName(void *out, s32 idx);
    void setBalloonLetterText(void *out, void *o);
    u32 findLetterInRange(s32 a, s32 b, s32 start, u8 end);
    u32 findLetterAt23(s32 a, s32 b);
    u32 findLetterAt0A(s32 a, s32 b);
    u32 findLetterAt2D(s32 a, s32 b);
    u32 findPocketLetterAt(s32 a, s32 b);
    void updateCursorLift();
    void init(s32 x);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ Unk_ov094_Bits8 unk_08;
    /* 0x10 */ Unk_ov094_Bits8 unk_10;
    /* 0x18 */ Unk_ov094_Bits8 unk_18;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 unk_24;
    /* 0x25 */ u8 unk_25;
    /* 0x26 */ u8 unk_26;
    /* 0x27 */ u8 unk_27;
};

// symbols.txt names of main functions (called with the object first)
#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_02063870 _ZN12Unk_020dd38cD1Ev
#define func_02063888 _ZN12Unk_020dd38cC1Ev
#define func_02065578 _ZN12Unk_0206555413func_02065578Ev
#define func_020655d0 _ZN12Unk_0206555413func_020655d0Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define LabelBalloon_setText _ZN12LabelBalloon7setTextEP6StrBuf
#define func_02089f30 _ZN12Unk_020e0d80D1Ev
#define func_02089f44 _ZN12Unk_020e0d80C1Ev
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN8PlayerId13func_020940d0EP9MsgString
#define PlayerId_getGender _ZN8PlayerId9getGenderEv
#define PlayerInventory_getTotalBells _ZN15PlayerInventory13getTotalBellsEi
#define PlayerInventory_getLetter _ZN15PlayerInventory9getLetterEi
#define PlayerInventory_getPocketFlags _ZN15PlayerInventory14getPocketFlagsEi
#define PlayerInventory_getPocket _ZN15PlayerInventory9getPocketEi
#define PlayerData_getHeldItem _ZN10PlayerData11getHeldItemEv
#define func_02098750 _ZN10PlayerData13func_02098750Ev
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
void func_02004008(s32 a);
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
void func_020638d0(s32 a, void *p);
s32 func_020639e8(char *buf, const void *fmt, ...);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
s32 func_02065578(void *o);
s32 func_020655d0(s32 a);
s32 func_020655d8(void *o);
void func_020655e4(void *o, void *buf);
void func_020655f0(void *o, void *buf);
s32 func_020655fc(void *o);
void func_02065c94(void *o);
void func_02065e70(void *o, s32 x);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 Menu_GetIconCharIndex(s32 a);
BOOL MenuCtrl_IsTouch();
void func_0206f9fc(void *p, s32 a);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fc44(void *p);
void func_0206fca8(void *p);
void func_0206fcc8(void *p);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
s32 func_02088730(s32 a, const void *b, s32 c, s32 d, ...);
void LabelBalloon_setText(void *a, void *b);
void func_02089f30(void *p);
void func_02089f44(void *p);
void func_02094018(void *p);
void func_02094030(void *p);
s32 func_0209409c(s32 a);
void func_020940d0(s32 a, void *p);
s32 PlayerId_getGender();
s32 PlayerData_GetCurrent();
s32 PlayerInventory_getTotalBells(s32 a, s32 b);
void *PlayerInventory_getLetter(s32 a, s32 b);
u32 PlayerInventory_getPocketFlags(s32 a, s32 b);
u16 *PlayerInventory_getPocket(s32 a, s32 b);
u16 *PlayerData_getHeldItem(s32 a);
s32 func_02098750(s32 a);
s32 PlayerData_getPlayerId(...);
void Player_GetDeliveryRecipientName(void *a, void *b);
void func_0209909c(u16 *a, s32 b, s32 c);
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
extern Unk_ov094_02292d6c_Ent8 sItemGridSlotSprites[];
extern u8 sLetterGridColumnX[];
extern u8 sLetterIconSprite[];
extern u8 sLetterIconPalettes[];
extern u8 sLetterMarkSprites[];
extern u16 sLetterIconChars[];
}

extern "C" {
void InventoryBg_LoadBg(S *s, s32 flag);
void InventoryBg_Load(S *s, s32 flag);
void InventoryBg_Init(S *s, u32 v);
S *_ZN11InventoryBgD1Ev(S *s);
S *_ZN11InventoryBgC1Ev(S *s);
BOOL InventoryItemGrid_TestBit(u32 *bits, s32 i);
void InventoryItemGrid_ClearBit(u32 *bits, s32 i);
void InventoryItemGrid_SetBit(u32 *bits, s32 i);
void InventoryItemGrid_ClearBits(u32 *bits);
s32 InventoryItemGrid_GetPresentAnimScale(S *s);
BOOL InventoryItemGrid_UpdatePresentAnim(S *s);
void InventoryItemGrid_EndPresentAnim(S *s);
void InventoryItemGrid_StartPresentAnim(S *s, u32 v, s32 m);
u32 InventoryItemGrid_AllocUpload(S *s);
void InventoryItemGrid_CancelUploads(S *s);
u32 InventoryItemGrid_GetScale(u32 i);
Ent8 *InventoryItemGrid_GetSlotSprite(S *s, s32 i);
void InventoryItemGrid_DrawSlot(S *s, Ent8 *e, s32 idx, s32 x, s32 y);
void InventoryItemGrid_DrawFocus(S *s, s32 a, s32 b);
void InventoryItemGrid_DrawUnderlay(S *s, s32 a, s32 b, s32 c);
void InventoryItemGrid_DrawMark(S *s, s32 a, s32 b);
BOOL InventoryItemGrid_IsSlotEmpty(S *s, s32 i);
void InventoryItemGrid_DrawHeldItem(S *s, s32 x, s32 y);
void InventoryItemGrid_DrawExtraMarks(S *s, s32 x, s32 y);
void InventoryItemGrid_DrawBox(S *s, s32 x, s32 y);
void InventoryItemGrid_DrawPocketsClipped(S *s, s32 x, s32 y, s32 w);
void InventoryItemGrid_DrawPockets(S *s, s32 x, s32 y);
void InventoryItemGrid_DisableSlot(S *s, s32 i);
void InventoryItemGrid_DisableSlotRange(S *s, u8 i, u8 e);
BOOL InventoryItemGrid_IsSlotDisabled(S *s, s32 i);
void InventoryItemGrid_UploadIcon(S *s, Rec *r, void *dst, s32 c);
void InventoryItemGrid_SetSpriteItem(S *s, Rec *r, u32 v, s32 m);
void InventoryItemGrid_SetHeldItem(S *s, Rec *r, s32 m);
void InventoryItemGrid_RefreshSlot(S *s, s32 i);
void InventoryItemGrid_SetSlotItem(S *s, s32 i, u32 v, s32 x);
void InventoryItemGrid_ClearSlot(S *s, s32 i);
u32 InventoryItemGrid_GetSlotFlags(S *s, s32 i);
u16 InventoryItemGrid_GetSlotItem(S *s, s32 i);
void InventoryItemGrid_MarkSlot(S *s, s32 i);
void InventoryItemGrid_ClearMarks(S *s);
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
u8 LetterGrid_GetPopScale(Unk_ov094_02293c04_Rec *o);
BOOL LetterGrid_UpdatePopAnim(Unk_ov094_02293c04_Rec *o);
void LetterGrid_ResetScale(Unk_ov094_02293c04_Rec *o);
void LetterGrid_StartPopAnim(Unk_ov094_02293c04_Rec *o);
s32 LetterGrid_GetIconIndex(void *o, s32 h);
void LetterGrid_SetLetterArray(Unk_ov094_02293ca0_Obj *o, u8 *p, s32 m, s32 n);
void LetterGrid_SetLetters23(void *o, u8 *p);
void LetterGrid_SetLetters0A(void *o, u8 *p);
void LetterGrid_SetLetters2D(void *o, u8 *p);
void LetterGrid_LoadPocketLetters(Unk_ov094_02293ca0_Obj *o);
BOOL LetterGrid_IsSlotEmpty(Unk_ov094_02293ca0_Obj *o, s32 i);
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
BOOL func_ov094_02292414(u32 v);
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

struct Unk_ov094_0229313c_L {
    s32 v[4];
};

struct Unk_ov094_0229334c_Blk {
    u8 a[0x40];
    u8 b[0x40];
};

static inline void Unk_ov094_SetPal(Unk_ov094_02294bb4_Bits *o, s32 pal) {
    o->v = (u16)((o->v & 0xffff0fff) | ((pal & 0xf) << 12));
}

static inline void Unk_ov094_SetName(Unk_ov094_02294bb4_Bits *o, s32 name) {
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

extern "C" u8 sHeldItemSprite[8] = {0x00, 0x00, 0x00, 0x40, 0x1c, 0x61, 0xff, 0xff};
extern "C" const u8 sPresentAnimScales[8] = {0x08, 0x04, 0x00, 0x03, 0x07, 0x0a, 0x00, 0x00};
extern "C" const u8 sPresentAnimFrames[8] = {0x00, 0xff, 0x01, 0x02, 0x03, 0xff, 0x00, 0x00};
extern "C" const u32 sItemCursorLift[3] = {0xfffffffe, 0xfffffffd, 0xfffffffb};
extern "C" const s32 sItemScaleTable[10] = {0x0, 0xa000, 0x5000, 0x3555, 0x2800, 0x2000, 0x1aaa, 0x16db, 0x1400, 0x11c7};
extern "C" u8 sItemGridMarkSprites[24] = {0x00, 0x00, 0x00, 0x80, 0x44, 0x51, 0x00, 0x00, 0x02, 0x00, 0x02, 0x80, 0x44, 0x11, 0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0x4c, 0x61, 0xff, 0xff};
extern "C" const u8 sItemIconPalettes[336] = {0x07, 0x0c, 0x07, 0x0c, 0x08, 0x07, 0x07, 0x07, 0x07, 0x09, 0x0a, 0x0a, 0x08, 0x07, 0x08, 0x07, 0x07, 0x07, 0x08, 0x09, 0x08, 0x07, 0x08, 0x07, 0x08, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0a, 0x08, 0x08, 0x0d, 0x0b, 0x07, 0x0c, 0x07, 0x0c, 0x0c, 0x0c, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x09, 0x0c, 0x0c, 0x09, 0x09, 0x0c, 0x0c, 0x0c, 0x09, 0x0c, 0x0c, 0x0b, 0x0c, 0x0c, 0x08, 0x0c, 0x08, 0x08, 0x08, 0x0c, 0x08, 0x07, 0x09, 0x07, 0x0a, 0x0c, 0x0d, 0x0c, 0x0c, 0x0a, 0x0c, 0x08, 0x0a, 0x0a, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x07, 0x07, 0x07, 0x08, 0x0c, 0x0d, 0x0d, 0x0c, 0x0c, 0x0a, 0x07, 0x0c, 0x0c, 0x0b, 0x0c, 0x0c, 0x0c, 0x07, 0x0c, 0x0d, 0x0b, 0x07, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0b, 0x0c, 0x0b, 0x0b, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x09, 0x0c, 0x09, 0x0d, 0x0c, 0x0c, 0x0c, 0x0a, 0x0d, 0x0d, 0x0c, 0x0a, 0x07, 0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0a, 0x0d, 0x0d, 0x0c, 0x0d, 0x0d, 0x0c, 0x0d, 0x0c, 0x09, 0x0b, 0x08, 0x0c, 0x0d, 0x0a, 0x0a, 0x0c, 0x0d, 0x0d, 0x0b, 0x0a, 0x08, 0x08, 0x0c, 0x09, 0x0c, 0x0d, 0x0a, 0x0c, 0x07, 0x09, 0x0a, 0x0c, 0x09, 0x09, 0x0c, 0x0c, 0x0c, 0x0d, 0x0a, 0x0c, 0x08, 0x09, 0x08, 0x09, 0x08, 0x08, 0x0a, 0x08, 0x08, 0x0a, 0x0a, 0x08, 0x0a, 0x09, 0x08, 0x09, 0x0a, 0x0c, 0x08, 0x09, 0x0a, 0x08, 0x09, 0x0a, 0x08, 0x07, 0x08, 0x07, 0x07, 0x09, 0x0a, 0x08};
extern "C" Unk_ov094_02292d6c_Ent8 sItemGridSlotSprites[34] = {{{0x14, 0x00, 0x8c, 0x41, 0xc0, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xac, 0x41, 0xc2, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xcc, 0x41, 0xc4, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xec, 0x41, 0xc6, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0x0c, 0x40, 0xc8, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0x9c, 0x41, 0xca, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xbc, 0x41, 0xcc, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xdc, 0x41, 0xce, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xfc, 0x41, 0xd0, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0x1c, 0x40, 0xd2, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xac, 0x41, 0xd4, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xcc, 0x41, 0xd6, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xec, 0x41, 0xd8, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0x0c, 0x40, 0xda, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0x2c, 0x40, 0xdc, 0x70, 0x00, 0x00}}, {{0xb4, 0x00, 0x8c, 0x41, 0xde, 0x70, 0x00, 0x00}}, {{0xb4, 0x00, 0xac, 0x41, 0x00, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0xcc, 0x41, 0x02, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0xec, 0x41, 0x04, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0x0c, 0x40, 0x06, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0x9c, 0x41, 0x08, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xbc, 0x41, 0x0a, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xdc, 0x41, 0x0c, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xfc, 0x41, 0x0e, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0x1c, 0x40, 0x10, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xac, 0x41, 0x12, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xcc, 0x41, 0x14, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xec, 0x41, 0x16, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0x0c, 0x40, 0x18, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0x2c, 0x40, 0x1a, 0x71, 0x00, 0x00}}, {{0xef, 0x00, 0xf7, 0x41, 0x1e, 0x71, 0x00, 0x00}}, {{0xef, 0x00, 0x2a, 0x40, 0x1e, 0x71, 0x00, 0x00}}, {{0xd8, 0x00, 0x10, 0x40, 0x1e, 0x71, 0x00, 0x00}}, {{0xf0, 0x00, 0xa0, 0x41, 0x1e, 0x61, 0xff, 0xff}}};

ItemIconCache::ItemIconCache() {}

ItemIconCache::~ItemIconCache() {}

void ItemIconCache::invalidate()
{
    unk_804 = 0xff;
}

u8 *ItemIconCache::getIconChars(s32 idx)
{
    char buf[0x28];
    s32 page = idx >> 4;
    if (page != unk_804) {
        unk_804 = page;
        func_020639e8(buf, (const char *)data_ov094_02294b94, page);
        File_LoadToBuffer(buf, unk_04, 0x800);
    }
    u8 *r = unk_04;
    r += Menu_GetIconCharIndex(idx & 0xf) << 5;
    return r;
}

u8 *ItemIconCache::getPresentChars(s32 idx)
{
    char buf[0x28];
    func_020639e8(buf, (const char *)data_ov094_02294b80);
    File_LoadToBuffer(buf, unk_04, 0x800);
    u8 *r = unk_04;
    r += Menu_GetIconCharIndex(idx) << 5;
    unk_804 = 0xff;
    return r;
}

u8 InventoryItemGrid_GetIconPalette(void *o, s32 i)
{
    return sItemIconPalettes[i];
}

InventoryItemGrid::InventoryItemGrid()
{
    u8 *e = unk_98c;
    do {
        func_020b85f8(e);
        e += 0x38;
    } while (e != (u8 *)&unk_a34);
}

InventoryItemGrid::~InventoryItemGrid() {}

void InventoryItemGrid_Init(InventoryItemGrid *o, u32 a)
{
    o->unk_184.invalidate();
    InventoryItemGrid_ClearBits((u32 *)(o->unk_a38));
    InventoryItemGrid_ClearBits((u32 *)(o->unk_a40));
    InventoryItemGrid_ClearBits((u32 *)(o->unk_a48));
    o->unk_a56 = 0x23;
    o->unk_a57 = 0;
    o->unk_a50 = a;
    o->unk_a34 = 0;
    o->unk_a59 = 0xa;
    o->unk_a5c = 1;
}

void InventoryItemGrid_PreUpdate(InventoryItemGrid *o)
{
    InventoryItemGrid_CancelUploads((S *)o);
    u8 v = o->unk_a57;
    if (v != 0) {
        o->unk_a57 = v - 1;
    }
}

void InventoryItemGrid_Exit(void *o)
{
    InventoryItemGrid_CancelUploads((S *)o);
}

u32 InventoryItemGrid_FindPocketSlotAt(void *o, s32 a, s32 b)
{
    if (b < 0x68) {
        return 0x23;
    }
    return InventoryItemGrid_FindSlotInRange(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0, 0xe);
}

u32 InventoryItemGrid_FindBoxSlotAt(void *o, s32 a, s32 b)
{
    if (b > 0x68) {
        return 0x23;
    }
    return InventoryItemGrid_FindSlotInRange(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0xf, 0x1d);
}

s32 InventoryItemGrid_HitTestSlot21(void *o, s32 a, s32 b)
{
    return InventoryItemGrid_HitTestSlot(o, a, b, 0x21);
}

u32 InventoryItemGrid_FindSlotInRange(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e)
{
    s32 i = s;
    for (; i <= e; i++) {
        void *p = InventoryItemGrid_GetSlotSprite((S *)o, i);
        s32 x = func_02087e14(p);
        if (a < x && x < c) {
            s32 y = func_02087e0c(p);
            if (b < y && y < d) {
                return (u8)i;
            }
        }
    }
    return 0x23;
}

s32 InventoryItemGrid_HitTestSlot(void *o, s32 a, s32 b, s32 c)
{
    s32 a1 = a - 0x7c;
    s32 b1 = b - 0x74;
    s32 b2 = b - 0x5c;
    void *e = InventoryItemGrid_GetSlotSprite((S *)o, c);
    s32 x = func_02087e14(e);
    if (a - 0x94 < x && x < a1) {
        s32 y = func_02087e0c(e);
        if (b1 < y && y < b2) {
            return TRUE;
        }
    }
    return FALSE;
}

void InventoryItemGrid_LoadSlotIcon(InventoryItemGrid *o, s32 k, u16 *p, s32 a)
{
    if (*p == 0xfff1) {
        InventoryItemGrid_ClearBit((u32 *)(o->unk_a38), k);
    } else {
        InventoryItemGrid_SetBit((u32 *)(o->unk_a38), k);
        s32 r = InventoryItemGrid_GetIconIndex(o, p, a);
        Unk_ov094_022937e4_Ent *e = (Unk_ov094_022937e4_Ent *)InventoryItemGrid_GetSlotSprite((S *)o, k);
        s32 c = (u32)(e->unk_04 << 22) >> 22;
        u8 *q = o->unk_184.getIconChars(r);
        Gfx2d_LoadCharRange(q, 8, c, c, c + 1);
        Gfx2d_LoadCharRange(q + 0x400, 8, c + 0x20, c + 0x20, c + 0x21);
        u32 n = InventoryItemGrid_GetIconPalette(&o->unk_184, r);
        e->unk_04 = (e->unk_04 & 0xffff0fff) | ((n & 0xf) << 12);
    }
}

void InventoryItemGrid_LoadPockets(InventoryItemGrid *o)
{
    s32 h = func_02098750(PlayerData_GetCurrent());
    s32 base = (s32)PlayerInventory_getPocket(h, 0);
    s32 i;
    s32 k;
    k = 0;
    i = 0;
    do {
        InventoryItemGrid_LoadSlotIcon(o, k, (u16 *)(base + i * 2), PlayerInventory_getPocketFlags(h, i));
        k++;
        i++;
    } while (i < 0xf);
}

void InventoryItemGrid_LoadBox(InventoryItemGrid *o, u16 *arr)
{
    s32 i;
    s32 k;
    s32 z = 0;
    k = 0xf;
    i = 0;
    do {
        u16 v = arr[i];
        InventoryItemGrid_LoadSlotIcon(o, k, &v, z);
        k++;
        i++;
    } while (i < 0xf);
    o->unk_a34 = arr;
}

s32 InventoryItemGrid_GetIconIndex(void *o, u16 *p, s32 mode)
{
    switch (mode) {
    case 1:
        return 0xb3;
    case 2:
        if (InvItem_IsDeliveryItem(*p)) {
            return Item_GetInfoUnk02(p);
        }
        return 0xb4;
    default:
        return Item_GetInfoUnk02(p);
    }
}

void InventoryItemGrid_SetBalloonItemName(void *o, void *dst, u16 *p, s32 mode)
{
    u32 a[16];
    u32 b[10];
    u32 c[9];
    u32 d[7];
    func_0206fcc8(a);
    func_02089f44(b);
    func_0206267c(c);
    func_02094030(d);
    switch (mode) {
    case 1:
        func_0206f9fc(a, 0x18);
        StrBuf_Copy(b, a);
        break;
    case 2:
        if (InvItem_IsDeliveryParcel(*p)) {
            ItemName_setFromItem(c, p);
            StrBuf_Copy(b, c);
        } else {
            Player_GetDeliveryRecipientName(d, p);
            String_SetSlot(0, d);
            func_0206f9fc(a, 0x40);
            StrBuf_Copy(b, a);
        }
        break;
    case 0:
    default:
        ItemName_setFromItem(c, p);
        StrBuf_Copy(b, c);
        break;
    }
    LabelBalloon_setText(dst, b);
    func_02094018(d);
    func_0206260c(c);
    func_02089f30(b);
    func_0206fca8(a);
}

void InventoryItemGrid_ShowSlotName(void *o, s32 a, s32 b)
{
    u32 r = InventoryItemGrid_GetSlotItem((S *)o, b);
    volatile u16 t = 0xfff1;
    t = r;
    if (t != 0xfff1) {
        InventoryItemGrid_SetBalloonItemName(o, (void *)a, (u16 *)&t, InventoryItemGrid_GetSlotFlags((S *)o, b));
    }
}

s32 InventoryItemGrid_GetSlotX(void *o, s32 i)
{
    return func_02087e14(InventoryItemGrid_GetSlotSprite((S *)o, i)) + 0x80;
}

s32 InventoryItemGrid_GetSlotY(void *o, s32 i)
{
    return func_02087e0c(InventoryItemGrid_GetSlotSprite((S *)o, i)) + 0x60;
}

BOOL InventoryItemGrid_IsCursorSlot(InventoryItemGrid *o, s32 v)
{
    if (v == o->unk_a56) {
        return TRUE;
    }
    return FALSE;
}

s32 InventoryItemGrid_GetCursorLift(InventoryItemGrid *o)
{
    return sItemCursorLift[o->unk_a57];
}

void InventoryItemGrid_ClearCursorSlot(InventoryItemGrid *o)
{
    o->unk_a56 = 0x23;
}

void InventoryItemGrid_SetCursorSlot(InventoryItemGrid *o, u32 v)
{
    if (InventoryItemGrid_IsSlotDisabled((S *)o, (u8)v)) {
        InventoryItemGrid_ClearCursorSlot(o);
    } else if (o->unk_a56 != v) {
        o->unk_a56 = v;
        o->unk_a57 = 2;
    }
}

void InventoryItemGrid_ClearMarks(S *s) {
    InventoryItemGrid_ClearBits((u32 *)(s->unk_a40));
}

void InventoryItemGrid_MarkSlot(S *s, s32 i) {
    InventoryItemGrid_SetBit((u32 *)(s->unk_a40), i);
}

u16 InventoryItemGrid_GetSlotItem(S *s, s32 i) {
    s32 t = func_02098750(PlayerData_GetCurrent());
    if (i >= 0 && i <= 0xe) {
        return PlayerInventory_getPocket(t, 0)[i];
    }
    if (i >= 0xf && i <= 0x1d) {
        u16 *p = s->unk_a34;
        if (p) {
            return p[i - 0xf];
        }
    }
    return 0xfff1;
}

u32 InventoryItemGrid_GetSlotFlags(S *s, s32 i) {
    if (i >= 0 && i <= 0xe) {
        return (u8)PlayerInventory_getPocketFlags(func_02098750(PlayerData_GetCurrent()), i);
    }
    return 0;
}

void InventoryItemGrid_ClearSlot(S *s, s32 i) {
    InventoryItemGrid_SetSlotItem(s, i, 0xfff1, 0);
    InventoryItemGrid_ClearBit((u32 *)(s->unk_a38), i);
}

void InventoryItemGrid_SetSlotItem(S *s, s32 i, u32 v, s32 x) {
    volatile u16 w = 0xfff1;
    w = v;
    if (i >= 0 && i <= 0xe) {
        func_0209909c((u16 *)&w, x, i);
    } else if (i >= 0xf && i <= 0x1d) {
        s->unk_a34[i - 0xf] = v;
    }
}

void InventoryItemGrid_RefreshSlot(S *s, s32 i) {
    Ent8 *e = InventoryItemGrid_GetSlotSprite(s, i);
    u16 v = InventoryItemGrid_GetSlotItem(s, i);
    u32 c = InventoryItemGrid_GetSlotFlags(s, i);
    volatile u16 t = v;
    if (t == 0xfff1) {
        InventoryItemGrid_ClearBit((u32 *)(s->unk_a38), i);
    } else {
        InventoryItemGrid_SetBit((u32 *)(s->unk_a38), i);
        InventoryItemGrid_SetSpriteItem(s, (Rec *)e, v, c);
    }
}

void InventoryItemGrid_SetHeldItem(S *s, Rec *r, s32 m) {
    InventoryItemGrid_SetSpriteItem(s, (Rec *)sHeldItemSprite, (u32)r, m);
}

void InventoryItemGrid_SetSpriteItem(S *s, Rec *r, u32 v, s32 m) {
    u16 w = v;
    s32 idx = InventoryItemGrid_GetIconIndex(s, &w, m);
    void *d = ((ItemIconCache *)s->unk_184)->getIconChars(idx);
    u32 c = InventoryItemGrid_GetIconPalette(s->unk_184, idx);
    InventoryItemGrid_UploadIcon(s, r, d, c);
}

void InventoryItemGrid_UploadIcon(S *s, Rec *r, void *dst, s32 c) {
    u32 t = r->id;
    u32 k = InventoryItemGrid_AllocUpload(s);
    Unk_ov094_0229334c_Blk *e = (Unk_ov094_0229334c_Blk *)((u8 *)s + 4) + k;
    u8 *p = e->a;
    u8 *q = e->b;
    MI_CpuCopy8(dst, p, 0x40);
    MI_CpuCopy8((u8 *)dst + 0x400, q, 0x40);
    k *= 0x38;
    BgVramTaskPair_requestCharPair((u8 *)s->unk_98c + k, p, q, 8, t, t + 1, t + 0x20, t + 0x21);
    c &= 0xf;
    ((u32 *)r)[1] = (((u32 *)r)[1] & 0xffff0fff) | (c << 12);
}

BOOL InventoryItemGrid_IsSlotDisabled(S *s, s32 i) {
    return InventoryItemGrid_TestBit((u32 *)(s->unk_a48), i);
}

void InventoryItemGrid_DisableSlotRange(S *s, u8 i, u8 e) {
    while (i <= e) {
        InventoryItemGrid_DisableSlot(s, i);
        i++;
    }
}

void InventoryItemGrid_DisableSlot(S *s, s32 i) {
    InventoryItemGrid_SetBit((u32 *)(s->unk_a48), i);
}

void InventoryItemGrid_DrawPockets(S *s, s32 x, s32 y) {
    Ent8 *e = InventoryItemGrid_GetSlotSprite(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        InventoryItemGrid_DrawSlot(s, e, i, x + 0x80, y + 0x60);
    }
}

void InventoryItemGrid_DrawPocketsClipped(S *s, s32 x, s32 y, s32 w) {
    Ent8 *e = InventoryItemGrid_GetSlotSprite(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        if (InventoryItemGrid_GetSlotX(s, (u8)i) + 0x18 > w) {
            InventoryItemGrid_DrawSlot(s, e, i, x + 0x80, y + 0x60);
        }
    }
}

void InventoryItemGrid_DrawBox(S *s, s32 x, s32 y) {
    Ent8 *e = InventoryItemGrid_GetSlotSprite(s, 0xf);
    s32 i;
    for (i = 0xf; i <= 0x1d; e++, i++) {
        InventoryItemGrid_DrawSlot(s, e, i, x + 0x80, y + 0x60);
    }
}

void InventoryItemGrid_DrawExtraMarks(S *s, s32 x, s32 y) {
    if (InventoryItemGrid_TestBit((u32 *)(s->unk_a40), 0x21)) {
        Ent8 *e = InventoryItemGrid_GetSlotSprite(s, 0x21);
        s32 a = x + func_02087e14(e) + 0x80;
        s32 b = y + func_02087e0c(e) + 0x60;
        InventoryItemGrid_DrawMark(s, a, b);
    }
    if (InventoryItemGrid_TestBit((u32 *)(s->unk_a40), 0x22)) {
        InventoryItemGrid_DrawMark(s, x + 4, y + 0xac);
    }
}

void InventoryItemGrid_DrawHeldItem(S *s, s32 x, s32 y) {
    s32 a = x + func_02087e14(sHeldItemSprite);
    s32 b = y + func_02087e0c(sHeldItemSprite);
    u32 v = InventoryItemGrid_GetScale(s->unk_a59);
    if (v != 0) {
        if (v == 0x1000) {
            func_02088730(1, sHeldItemSprite, x, y, -1, s->unk_a50, 0);
        } else {
            Unk_ov094_0229313c_L l;
            l.v[0] = v;
            l.v[1] = 0;
            l.v[2] = 0;
            l.v[3] = v;
            func_02088730(1, sHeldItemSprite, x, y, -1, s->unk_a50, &l);
        }
    }
    InventoryItemGrid_DrawUnderlay(s, a, b, -1);
    if (s->unk_a5c) {
        InventoryItemGrid_DrawFocus(s, a, b);
    }
}

BOOL InventoryItemGrid_IsSlotEmpty(S *s, s32 i) {
    BOOL r;
    if (InventoryItemGrid_TestBit((u32 *)(s->unk_a38), i)) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

void InventoryItemGrid_DrawMark(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a68, a - 8, b - 8, -1, s->unk_a50, 0);
}

void InventoryItemGrid_DrawUnderlay(S *s, s32 a, s32 b, s32 c) {
    func_02088730(1, sItemGridMarkSprites, a - 8, b - 8, c, s->unk_a50, 0);
}

void InventoryItemGrid_DrawFocus(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a60, a - 8, b - 8, -1, s->unk_a50, 0);
}

void InventoryItemGrid_DrawSlot(S *s, Ent8 *e, s32 idx, s32 x, s32 y) {
    s32 a = x + func_02087e14(e);
    s32 b = y + func_02087e0c(e);
    s32 off = 0;
    if (InventoryItemGrid_IsCursorSlot((InventoryItemGrid *)s, idx)) {
        off = InventoryItemGrid_GetCursorLift((InventoryItemGrid *)s);
        a += off;
        b += off;
    }
    if (InventoryItemGrid_TestBit((u32 *)(s->unk_a40), idx)) {
        InventoryItemGrid_DrawMark(s, a, b);
    }
    if (InventoryItemGrid_TestBit((u32 *)(s->unk_a38), idx)) {
        s32 c = -1;
        if (InventoryItemGrid_IsSlotDisabled(s, (u8)idx)) {
            c = 0xe;
        }
        func_02088730(1, e, x + off, y + off, c, s->unk_a50, 0);
        InventoryItemGrid_DrawUnderlay(s, a, b, c);
        if (InventoryItemGrid_IsCursorSlot((InventoryItemGrid *)s, idx)) {
            InventoryItemGrid_DrawFocus(s, a, b);
        }
    }
}

Ent8 *InventoryItemGrid_GetSlotSprite(S *s, s32 i) {
    return &sItemGridSlotSprites[i];
}

u32 InventoryItemGrid_GetScale(u32 i) {
    if (i >= 10) {
        return 0x1000;
    }
    return sItemScaleTable[i];
}

void InventoryItemGrid_CancelUploads(S *s) {
    s32 i;
    for (i = 0; i < 3; i++) {
        BgVramTask_cancel(&s->unk_98c[i]);
    }
    s->unk_a58 = 0;
}

u32 InventoryItemGrid_AllocUpload(S *s) {
    u32 v = s->unk_a58;
    if (v >= 3) {
        return 2;
    }
    s->unk_a58 = v + 1;
    return v;
}

void InventoryItemGrid_StartPresentAnim(S *s, u32 v, s32 m) {
    s->unk_a54 = v;
    s->unk_a5a = 0;
    if (m == 1) {
        s->unk_a5b = 0;
    } else {
        s->unk_a5b = 1;
    }
    if (MenuCtrl_IsTouch()) {
        s->unk_a5c = 0;
    }
}

void InventoryItemGrid_EndPresentAnim(S *s) {
    s->unk_a59 = 10;
    s->unk_a5c = 1;
}

BOOL InventoryItemGrid_UpdatePresentAnim(S *s) {
    u32 st = s->unk_a5a;
    if (st < 6) {
        u32 v = sPresentAnimFrames[st];
        if (v != 0xff) {
            s32 r = _ZN13ItemIconCache15getPresentCharsEi(s->unk_184, v, s->unk_a5b);
            InventoryItemGrid_UploadIcon(s, (Rec *)sHeldItemSprite, (void *)r, 8);
        }
        s->unk_a5a++;
    } else if (st < 8) {
        s->unk_a59 = InventoryItemGrid_GetPresentAnimScale(s);
        s->unk_a5a++;
    } else if (st == 8) {
        InventoryItemGrid_SetHeldItem(s, (Rec *)s->unk_a54, 0);
        s->unk_a59 = 0;
        s->unk_a5a++;
    } else if (st < 0xc) {
        s->unk_a59 = InventoryItemGrid_GetPresentAnimScale(s);
        s->unk_a5a++;
    } else {
        InventoryItemGrid_EndPresentAnim(s);
        return TRUE;
    }
    return FALSE;
}

s32 InventoryItemGrid_GetPresentAnimScale(S *s) {
    return sPresentAnimScales[s->unk_a5a - 6];
}

void InventoryItemGrid_ClearBits(u32 *bits) {
    s32 i;
    u32 z;
    i = 0;
    z = i;
    for (; i < 2; i++) {
        bits[i] = z;
    }
}

void InventoryItemGrid_SetBit(u32 *bits, s32 i) {
    bits[i >> 5] |= 1 << (i & 0x1f);
}

void InventoryItemGrid_ClearBit(u32 *bits, s32 i) {
    bits[i >> 5] &= ~(1 << (i & 0x1f));
}

BOOL InventoryItemGrid_TestBit(u32 *bits, s32 i) {
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & bits[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}


#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "talk/LabelBalloonText.h"
#include "ui/HudProc.h"
#include "ui/LabelBalloon.h"
#include "ui/HudController.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
BOOL StrBuf_Copy(StrBuf *dst, StrBuf *src);
}

extern "C" {
void StrBuf_Clear(StrBuf *buf);
}

extern "C" {
void HudUnkSlideIcon_Draw();
}

extern "C" {
void HudLinkIcon_Draw();
}

extern "C" {
void Hud_Draw();
}

extern "C" {
void HudUnkIcon_Draw();
}

extern "C" {
void HudLinkIcon_Update();
}

extern "C" {
void HudUnkSlideIcon_Update();
}

extern "C" {
void HudUnkIcon_Update();
}

extern "C" {
void Hud_Update();
}

extern "C" {
void Hud_Exit();
}

extern "C" {
void HudUnkIcon_Exit();
}

extern "C" {
void HudUnkSlideIcon_Exit();
}

extern "C" {
void HudLinkIcon_Exit();
}

extern "C" {
void HudLinkIcon_Reset();
}

extern "C" {
void HudUnkSlideIcon_Reset();
}

extern "C" {
void HudUnkIcon_Reset();
}

extern "C" {
void Hud_Init();
}

extern "C" {
BOOL InputMode_IsButtons();
}

extern "C" {
BOOL InputMode_IsTouch();
}

extern "C" {
void HudObjGfx_LoadCameraButton(u32 a, u32 b, u32 c);
}

extern "C" {
void HudObjGfx_LoadKind(u32 a, u32 b);
}

extern "C" {
void HudObjGfx_SetCountdownVariant(u32 a);
}

extern "C" {
s32 Hud_GetSceneHudKind();
}

extern "C" {
BOOL HudObjGfx_GetCountdownVariant();
}

extern "C" {
BOOL func_0208c094(void *p);
}

extern "C" {
void func_0208c0c4(void *p);
}

extern "C" {
BOOL func_0208c0b4(void *p);
}

extern "C" {
void func_0208c0cc(void *p);
}

extern "C" {
void func_0208cd90(void *p);
}

extern "C" {
void func_0208cd88(void *p);
}

extern "C" {
BOOL func_0208cd78(void *p);
}

extern "C" {
void func_0208aa50(void *p);
}

extern "C" {
void func_0208aa48(void *p);
}

extern "C" {
BOOL func_0208aa38(void *p);
}

extern "C" {
void func_0208b038(void *p);
}

extern "C" {
BOOL func_0208b018(void *p);
}

extern "C" {
void func_0208b040(void *p);
}

extern u8 gFieldSceneKind;








static inline BOOL Unk_0208a150_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

typedef void (LabelBalloon::*Unk_020e0d98_Fn)();

UiWidget::UiWidget() {
    originX = 0x80;
    originY = 0x60;
}

UiWidget::~UiWidget() {}


// mwcc-flags: -str reuse
#include "types.h"

struct Unk_ov095_02292360 {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05[3];
    u8 unk_08;
    u8 unk_09[3];
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[5];
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u8 *unk_30;
    u8 unk_34[0x233c - 0x34];
    u8 unk_233c[0x40];
    u8 unk_237c[0x2bbc - 0x237c];
    u8 unk_2bbc[0x1000];
};

struct Unk_ov095_02295e48 {
    s32 v[2];
};

struct Unk_ov095_02294478_Reg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
};

struct Unk_ov095_02294dc0_Entry {
    u32 unk_00;
    u32 lo : 12;
    u32 pal : 4;
    u32 hi : 16;
};

extern "C" {
extern volatile u16 data_020ca488;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u32 gCurrentHeap;
extern s32 func_ov090_02291944(s32 a);
BOOL func_02087dac(void *p, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);
s32 Gfx2d_LoadCharRange(void *, u32, u32, u32, u32);
s32 Gfx2d_LoadCharFile(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 Gfx2d_LoadPaletteFile(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0203f07c(s32 i);
s32 func_0203f0c0(void);
s32 Text_GetCharSortKey(s32 a);
s32 Mem_Copy(void *src, void *dst, s32 n);
s32 func_02051270(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
s32 func_020512e0(u8 *s, s32 n);
s32 func_02051348(u8 *s, s32 n);
s32 func_02051370(u32 c);
s32 File_LoadToBuffer(void *name, void *buf, s32 size);
s32 File_LoadAlloc(s32 a, s32 b, s32 c, s32 d);
s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);
s32 func_0206e694(s32 a);
s32 func_0206e6b8(void);
s32 func_0206f9fc(void *a, s32 b);
s32 _ZN12Unk_020e048813func_0206fab4Eii(void *a, s32 b, s32 c);
s32 _ZN12Unk_020e048813func_0206fb48Ejjjhhi(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_02087d6c(void *p, s32 n, s32 c, s32 d, s32 e, s32 f);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
s32 Oam_DrawCell(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
s32 func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 _ZN8PlayerId9getGenderEv(void);
s32 PlayerData_GetCurrent(void);
s32 _ZN10BgVramTask13requestScreenEjhjj(void *a, void *b, s32 c, s32 d, s32 e);
s32 Heap_Free(u32 heap, void *p);
s32 _s32_div_f(s32 a, s32 b);
s32 func_ov090_02291944(s32 a);
s32 func_ov090_02291a78(s32 a);
void *Heap_AllocTail(u32 heap, s32 size);
void Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void Snd_PlayKeySe(u32 a);
void Snd_SetKeySeMode(s32 a);
void Snd_PlaySe(s32 a);
void func_0206e688(s32 a, s32 b);
void func_0206e6ac(s32 a);
void _ZN12Unk_020e048813func_0206fc44Ev(void *a);
void _ZN10PlayerData11getPlayerIdEv(void);
void _ZN10BgVramTask12requestCharsEjhjjj(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void _ZN10BgVramTask6cancelEv(void *a);
void MI_CpuCopy8(void *a, void *b, s32 c);

void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022923ec();
void func_ov095_022923f8();
s32 func_ov095_02292404(Unk_ov095_02292360 *s);
s32 func_ov095_02292458(Unk_ov095_02292360 *s, void *p);
void func_ov095_022924f0(Unk_ov095_02292360 *s);
void func_ov095_0229253c(Unk_ov095_02292360 *s, s32 a, s32 b);
s32 func_ov095_02292544(Unk_ov095_02292360 *s);
s32 func_ov095_02292580(Unk_ov095_02292360 *s);
BOOL func_ov095_022925b4(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_02292614(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_022926dc(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_02292830(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_022928dc(Unk_ov095_02292360 *s, void *p);
void func_ov095_02292ab8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292acc(Unk_ov095_02292360 *s);
void func_ov095_02292ad8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292af4(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292b08(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292b6c(Unk_ov095_02292360 *s);
void func_ov095_02292b84(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292c0c(Unk_ov095_02292360 *s);
void func_ov095_02292c5c(Unk_ov095_02292360 *s, void *p);
void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292e50(Unk_ov095_02292360 *s, void *p);
void func_ov095_0229309c(Unk_ov095_02292360 *s, void *p);
void func_ov095_02293350(Unk_ov095_02292360 *s);
s32 func_ov095_022933a4(Unk_ov095_02292360 *s);
void func_ov095_022933d4(Unk_ov095_02292360 *s);
void func_ov095_02293410(Unk_ov095_02292360 *s);
void func_ov095_02293470(Unk_ov095_02292360 *s);
void func_ov095_022934f8(Unk_ov095_02292360 *s);
s32 func_ov095_022935bc(Unk_ov095_02292360 *s);
s32 func_ov095_022935c0(Unk_ov095_02292360 *s);
s32 func_ov095_02293620(Unk_ov095_02292360 *s);
s32 func_ov095_02293648(Unk_ov095_02292360 *s);
s32 func_ov095_02293688(Unk_ov095_02292360 *s);
s32 func_ov095_022936f4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229371c(Unk_ov095_02292360 *s);
s32 func_ov095_022937a8(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022937d0(void *s, s32 x, s32 y, s32 idx);
s32 func_ov095_022937e4(void *s, s32 x, s32 y, s32 idx);
void func_ov095_02293824(Unk_ov095_02292360 *s, s32 x, s32 y);
void func_ov095_0229388c(Unk_ov095_02292360 *s, s32 x, s32 y);
void func_ov095_022938f8(void *s, s32 x, s32 y, s32 z);
s32 func_ov095_02293924(Unk_ov095_02292360 *s);
void func_ov095_02293938(Unk_ov095_02292360 *s, s32 v);
void func_ov095_02293944(Unk_ov095_02292360 *s);
BOOL func_ov095_0229394c(Unk_ov095_02292360 *s);
BOOL func_ov095_02293990(Unk_ov095_02292360 *s);
BOOL func_ov095_022939f8();
void func_ov095_02293a30(void *s, s32 x, s32 y, s32 z, s32 w);
void func_ov095_02293a78(Unk_ov095_02292360 *s, s32 x, s32 y);
s32 func_ov095_02293b24(Unk_ov095_02292360 *s, s32 x, s32 y);
s32 func_ov095_02293b60(Unk_ov095_02292360 *s, s32 x, s32 y, s32 z);
void func_ov095_02293c1c(Unk_ov095_02292360 *s);
void func_ov095_02293cc0(Unk_ov095_02292360 *s);
void func_ov095_02293d88(Unk_ov095_02292360 *s);
void func_ov095_02293d94(Unk_ov095_02292360 *s);
u8 func_ov095_02293da0(Unk_ov095_02292360 *s);
s32 func_ov095_02293dc8(Unk_ov095_02292360 *s, s32 a, s32 b);
u8 func_ov095_02293f2c(void *s, u8 *str, s32 a, s32 b, u8 limit0, u8 *out);
s32 func_ov095_02293f88(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02293f8c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02293f90(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_02293f94(Unk_ov095_02292360 *s, u8 *buf, s32 c, s32 n);
s32 func_ov095_02293fb4(void *s, u8 *buf, s32 a, s32 b, s32 n);
BOOL func_ov095_02293ff0(Unk_ov095_02292360 *s, void *p1, s32 p2, u8 *p3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9);
void func_ov095_02293da8(Unk_ov095_02292360 *s);
void func_ov095_02293dc0(Unk_ov095_02292360 *s);
void *func_ov095_02293b0c(Unk_ov095_02292360 *s);
BOOL func_ov095_022940f0(Unk_ov095_02292360 *s, u8 *a, s32 b, u8 *p, s32 c, s32 d, s32 e, s32 f);
BOOL func_ov095_02294164(Unk_ov095_02292360 *s, u8 *a, s32 b, s32 c, s32 d, s32 e);
BOOL func_ov095_022941a0(Unk_ov095_02292360 *s, u8 *a, void *b, s32 c, s32 d, s32 e);
BOOL func_ov095_0229423c(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294250(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022942c0(Unk_ov095_02292360 *s);
BOOL func_ov095_022942e8(Unk_ov095_02292360 *s);
void func_ov095_02294318(Unk_ov095_02292360 *s);
s32 func_ov095_02294324(Unk_ov095_02292360 *s);
void func_ov095_02294358(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943b4(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943dc(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022943f8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294438(Unk_ov095_02292360 *s);
void func_ov095_02294478(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294520(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294550(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294594(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022945e0(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294624(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294648(Unk_ov095_02292360 *s, s32 mode, s32 a, s32 c);
void func_ov095_0229483c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294864(Unk_ov095_02292360 *s, s32 a, u32 b);
s32 func_ov095_0229497c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022949a8(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022948f0(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229490c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294928(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294944(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294960(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022949d4(Unk_ov095_02292360 *s, s32 a);
void func_ov095_0229434c(Unk_ov095_02292360 *s);
void func_ov095_0229442c(Unk_ov095_02292360 *s);
s32 func_ov095_02294a2c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294a40(Unk_ov095_02292360 *s);
s32 func_ov095_02294a44(Unk_ov095_02292360 *s, s32 a, u32 b);
s32 func_ov095_02294af4(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294b44(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294bac(Unk_ov095_02292360 *s, u32 a, u32 b);
s32 func_ov095_02294c24(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02294d40(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02294d4c(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294dc0(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294ebc(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02294fb4(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_022950f4(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02295150(Unk_ov095_02292360 *s);
void func_ov095_02295194(Unk_ov095_02292360 *s);
void func_ov095_022951e4(Unk_ov095_02292360 *s);
BOOL func_ov095_02295258(Unk_ov095_02292360 *s);
BOOL func_ov095_02295264(Unk_ov095_02292360 *s);
BOOL func_ov095_02295270(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_022952a0(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_022952c4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294d90(Unk_ov095_02292360 *s, s32 a, s32 b);
void func_ov095_02295340(Unk_ov095_02292360 *s, s32 i);
void func_ov095_022953c0(Unk_ov095_02292360 *s, s32 i);
BOOL func_ov095_02295440(Unk_ov095_02292360 *s, s32 i);
}

extern "C" u32 data_ov095_022965bc[];
extern "C" u32 data_ov095_022963e4[];
extern "C" u32 data_ov095_02296214[];
extern "C" u32 data_ov095_022960dc[];
extern "C" void *data_ov095_0229605c[];
extern "C" s16 data_ov095_02295fec[];
extern "C" s16 data_ov095_02295ea8[];
extern "C" s16 data_ov095_02295f14[];
extern "C" s16 data_ov095_02295f80[];
extern "C" Unk_ov095_02295e48 data_ov095_02295e48[];
extern "C" s16 data_ov095_02295e04[];
extern "C" const s32 data_ov095_02295494[];
extern "C" const s32 data_ov095_022954cc[];
extern "C" const s32 data_ov095_02295504[];
extern "C" const s32 data_ov095_0229553c[];
extern "C" u32 data_ov095_02295d44[];
extern "C" u32 data_ov095_02295d74[];
extern "C" u32 data_ov095_02295da4[];
extern "C" u32 data_ov095_02295dd4[];
extern "C" u32 data_ov095_02295c7c[];
extern "C" u32 data_ov095_02295ca4[];
extern "C" u32 data_ov095_02295ccc[];
extern "C" u32 data_ov095_02295cf4[];
extern "C" u32 data_ov095_02295d1c[];
extern "C" u32 data_ov095_02295c2c[];
extern "C" u32 data_ov095_0229586c[];
extern "C" u32 data_ov095_02295894[];
extern "C" u32 data_ov095_022958bc[];
extern "C" u32 data_ov095_02295b8c[];
extern "C" u32 data_ov095_022958e4[];
extern "C" u32 data_ov095_0229590c[];
extern "C" u32 data_ov095_02295934[];
extern "C" u32 data_ov095_02295aec[];
extern "C" u32 data_ov095_0229595c[];
extern "C" u32 data_ov095_02295984[];
extern "C" u32 data_ov095_022959ac[];
extern "C" u32 data_ov095_022959d4[];
extern "C" u32 data_ov095_022959fc[];
extern "C" u32 data_ov095_02295a24[];
extern "C" u32 data_ov095_02295a4c[];
extern "C" u32 data_ov095_02295a74[];
extern "C" u32 data_ov095_02295a9c[];
extern "C" u32 data_ov095_02295ac4[];
extern "C" u32 data_ov095_02295b14[];
extern "C" u32 data_ov095_02295b3c[];
extern "C" u32 data_ov095_02295b64[];
extern "C" u32 data_ov095_02295bb4[];
extern "C" u32 data_ov095_02295bdc[];
extern "C" u32 data_ov095_02295c04[];
extern "C" u32 data_ov095_02295c54[];
extern "C" u32 data_ov095_022957ac[];
extern "C" void *data_ov095_022957cc[];
extern "C" void *data_ov095_022957ec[];
extern "C" u32 data_ov095_0229580c[];
extern "C" u32 data_ov095_0229582c[];
extern "C" void *data_ov095_0229584c[];
extern "C" char data_ov095_02295704[];
extern "C" char data_ov095_0229574c[];
extern "C" char data_ov095_022956d4[];
extern "C" char data_ov095_0229565c[];
extern "C" char data_ov095_022956ec[];
extern "C" char data_ov095_0229577c[];
extern "C" char data_ov095_0229568c[];
extern "C" char data_ov095_022956a4[];
extern "C" char data_ov095_022956bc[];
extern "C" char data_ov095_02295674[];
extern "C" char data_ov095_02295734[];
extern "C" char data_ov095_0229571c[];
extern "C" char data_ov095_02295794[];
extern "C" char data_ov095_02295764[];
extern "C" char data_ov095_02295620[];
extern "C" char data_ov095_02295648[];
extern "C" char data_ov095_022955f8[];
extern "C" char data_ov095_022955bc[];
extern "C" char data_ov095_022955a8[];
extern "C" char data_ov095_022955d0[];
extern "C" char data_ov095_022955e4[];
extern "C" s32 data_ov095_0229560c[];
extern "C" s32 data_ov095_02295634[];
extern "C" void *data_ov095_02295598[];
extern "C" const s32 data_ov095_02295474[];
extern "C" const s32 data_ov095_02295454[];
extern "C" const s32 data_ov095_02295484[];
extern "C" const s32 data_ov095_02295464[];
extern "C" u32 data_ov095_02295590[];
extern "C" u32 data_ov095_02295588[];
extern "C" u32 data_ov095_02295580[];

extern "C" u32 data_ov095_022965bc[120] = {0x81884000, 0x0000c58b, 0x819c4000, 0x0000c58b, 0x81b04000, 0x0000c58b, 0x81c44000, 0x0000c58b, 0x81d84000, 0x0000c58b, 0x81ec4000, 0x0000c58b, 0x80004000, 0x0000c58b, 0x80144000, 0x0000c58b, 0x80284000, 0x0000c58b, 0x803c4000, 0x0000c58b, 0x80504000, 0x0000c58b, 0x80644000, 0x0000c58f, 0x80644008, 0x0000c5cf, 0x81884010, 0x0000c58b, 0x819c4010, 0x0000c58b, 0x81b04010, 0x0000c58b, 0x81c44010, 0x0000c58b, 0x81d84010, 0x0000c58b, 0x81ec4010, 0x0000c58b, 0x80004010, 0x0000c58b, 0x80144010, 0x0000c58b, 0x80284010, 0x0000c58b, 0x803c4010, 0x0000c58b, 0x80504010, 0x0000c58b, 0x80644018, 0x0000c58f, 0x80640020, 0x0000c58f, 0x81884020, 0x0000c58b, 0x819c4020, 0x0000c58b, 0x81b04020, 0x0000c58b, 0x81c44020, 0x0000c58b, 0x81d84020, 0x0000c58b, 0x81ec4020, 0x0000c58b, 0x80004020, 0x0000c58b, 0x80144020, 0x0000c58b, 0x80284020, 0x0000c58b, 0x803c4020, 0x0000c58b, 0x80504020, 0x0000c58b, 0x81884030, 0x0000c58b, 0x819c4030, 0x0000c58b, 0x81b04030, 0x0000c58b, 0x81c44030, 0x0000c58b, 0x81d84030, 0x0000c58b, 0x81ec4030, 0x0000c58b, 0x80004030, 0x0000c58b, 0x80144030, 0x0000c58b, 0x80284030, 0x0000c58b, 0x803c4030, 0x0000c58b, 0x80504030, 0x0000c58b, 0x81884040, 0x0000c58b, 0x819c4040, 0x0000c58b, 0x81b04040, 0x0000c58b, 0x81c44040, 0x0000c58b, 0x81d84040, 0x0000c58b, 0x81ec4040, 0x0000c58b, 0x80004040, 0x0000c58b, 0x80144040, 0x0000c58b, 0x40280040, 0x0000c5cb, 0x80384040, 0x0000c4c5, 0x80504040, 0x0000c4c5, 0x406b0040, 0xffffc5cd};
extern "C" u32 data_ov095_022963e4[118] = {0x81884000, 0x0000c58b, 0x81884010, 0x0000c58b, 0x81884020, 0x0000c58b, 0x81884030, 0x0000c58b, 0x81884040, 0x0000c58b, 0x819c4000, 0x0000c58b, 0x819c4010, 0x0000c58b, 0x819c4020, 0x0000c58b, 0x819c4030, 0x0000c58b, 0x819c4040, 0x0000c58b, 0x81b04000, 0x0000c58b, 0x81b04010, 0x0000c58b, 0x81b04020, 0x0000c58b, 0x81b04030, 0x0000c58b, 0x81b04040, 0x0000c58b, 0x81c44000, 0x0000c58b, 0x81c44010, 0x0000c58b, 0x81c44020, 0x0000c58b, 0x81c44030, 0x0000c58b, 0x81c44040, 0x0000c58b, 0x81d84000, 0x0000c58b, 0x81d84010, 0x0000c58b, 0x81d84020, 0x0000c58b, 0x81d84030, 0x0000c58b, 0x81d84040, 0x0000c58b, 0x81ec4000, 0x0000c58b, 0x81ec4010, 0x0000c58b, 0x81ec4020, 0x0000c58b, 0x81ec4030, 0x0000c58b, 0x81ec4040, 0x0000c58b, 0x80004000, 0x0000c58b, 0x80004010, 0x0000c58b, 0x80004020, 0x0000c58b, 0x80004030, 0x0000c58b, 0x80004040, 0x0000c58b, 0x80144000, 0x0000c58b, 0x80144010, 0x0000c58b, 0x80144020, 0x0000c58b, 0x80144030, 0x0000c58b, 0x80144040, 0x0000c58b, 0x80284000, 0x0000c58b, 0x80284010, 0x0000c58b, 0x80284020, 0x0000c58b, 0x80284030, 0x0000c58b, 0x80284040, 0x0000c58b, 0x803c4000, 0x0000c58b, 0x803c4010, 0x0000c58b, 0x803c4020, 0x0000c58b, 0x803c4030, 0x0000c58b, 0x803c4040, 0x0000c58b, 0x80504000, 0x0000c58b, 0x80504010, 0x0000c58b, 0x80504020, 0x0000c58b, 0x80504030, 0x0000c58b, 0x80504040, 0x0000c58b, 0x80644000, 0x0000c58b, 0x80644010, 0x0000c58b, 0x80640020, 0x0000c58f, 0x80644040, 0xffffc58b};
extern "C" u32 data_ov095_02296214[116] = {0x81844000, 0x0000c58b, 0x81984000, 0x0000c58b, 0x81ac4000, 0x0000c58b, 0x81c04000, 0x0000c58b, 0x81d44000, 0x0000c58b, 0x81e84000, 0x0000c58b, 0x81fc4000, 0x0000c58b, 0x80104000, 0x0000c58b, 0x80244000, 0x0000c58b, 0x80384000, 0x0000c58b, 0x804c4000, 0x0000c58b, 0x80604000, 0x0000c58b, 0x818c4010, 0x0000c58b, 0x81a04010, 0x0000c58b, 0x81b44010, 0x0000c58b, 0x81c84010, 0x0000c58b, 0x81dc4010, 0x0000c58b, 0x81f04010, 0x0000c58b, 0x80044010, 0x0000c58b, 0x80184010, 0x0000c58b, 0x802c4010, 0x0000c58b, 0x80404010, 0x0000c58b, 0x40540010, 0x0000c5cb, 0x805f4010, 0x0000c5cb, 0x81834020, 0x0000c58b, 0x81974020, 0x0000c58b, 0x81ab4020, 0x0000c58b, 0x81bf4020, 0x0000c58b, 0x81d34020, 0x0000c58b, 0x81e74020, 0x0000c58b, 0x81fb4020, 0x0000c58b, 0x800f4020, 0x0000c58b, 0x80234020, 0x0000c58b, 0x80374020, 0x0000c58b, 0x404b0020, 0x0000c5cb, 0x804e4020, 0x0000c4c5, 0x805f4020, 0x0000c5cb, 0x81834030, 0x0000c5cb, 0x81a04030, 0x0000c58b, 0x81b44030, 0x0000c58b, 0x81c84030, 0x0000c58b, 0x81dc4030, 0x0000c58b, 0x81f04030, 0x0000c58b, 0x80044030, 0x0000c58b, 0x80184030, 0x0000c58b, 0x802c4030, 0x0000c58b, 0x80404030, 0x0000c58b, 0x80544030, 0x0000c58b, 0x81984040, 0x0000c58b, 0x81ac4040, 0x0000c58b, 0x41c00040, 0x0000c5cb, 0x81d04040, 0x0000c0c5, 0x81f04040, 0x0000c0c5, 0x800d4040, 0x0000c0c5, 0x801f4040, 0x0000c0c5, 0x403f0040, 0x0000c5cd, 0x804c4040, 0x0000c58b, 0x80604040, 0xffffc58b};
extern "C" u32 data_ov095_022960dc[78] = {0x81884008, 0x0000c58b, 0x819c4008, 0x0000c58b, 0x81b04008, 0x0000c58b, 0x81c44008, 0x0000c58b, 0x81d84008, 0x0000c58b, 0x81ec4008, 0x0000c58b, 0x80004008, 0x0000c58b, 0x80144008, 0x0000c58b, 0x80284008, 0x0000c58b, 0x803c4008, 0x0000c58b, 0x80504008, 0x0000c58b, 0x80644008, 0x0000c58b, 0x81884018, 0x0000c58b, 0x819c4018, 0x0000c58b, 0x81b04018, 0x0000c58b, 0x81c44018, 0x0000c58b, 0x81d84018, 0x0000c58b, 0x81ec4018, 0x0000c58b, 0x80004018, 0x0000c58b, 0x80144018, 0x0000c58b, 0x80284018, 0x0000c58b, 0x803c4018, 0x0000c58b, 0x80688018, 0x0000c595, 0x80500018, 0x0000c593, 0x81884028, 0x0000c58b, 0x819c4028, 0x0000c58b, 0x81b04028, 0x0000c58b, 0x81c44028, 0x0000c58b, 0x81d84028, 0x0000c58b, 0x81ec4028, 0x0000c58b, 0x80004028, 0x0000c58b, 0x80144028, 0x0000c58b, 0x80284028, 0x0000c58b, 0x803c4028, 0x0000c58b, 0x41d00038, 0x0000c5cb, 0x81e04038, 0x0000c4c5, 0x80004038, 0x0000c4c5, 0x80084038, 0x0000c4c5, 0x40230038, 0xffffc5cd};
extern "C" void *data_ov095_0229605c[32] = {data_ov095_022957ac, data_ov095_022958e4, data_ov095_02295cf4, data_ov095_0229590c, data_ov095_02295934, data_ov095_0229595c, data_ov095_0229586c, data_ov095_02295984, data_ov095_022959ac, data_ov095_022959d4, data_ov095_02295d1c, data_ov095_022959fc, data_ov095_02295a24, data_ov095_02295a4c, data_ov095_02295a74, data_ov095_0229580c, data_ov095_02295a9c, data_ov095_02295ac4, data_ov095_02295aec, data_ov095_02295b14, data_ov095_02295b3c, data_ov095_02295b64, data_ov095_02295b8c, data_ov095_02295bb4, data_ov095_02295bdc, data_ov095_02295c04, data_ov095_02295c2c, data_ov095_02295c54, data_ov095_02295c7c, data_ov095_02295ca4, data_ov095_02295ccc, data_ov095_0229582c};
extern "C" s16 data_ov095_02295fec[56] = {102, 103, 104, 106, 110, 111, 112, 113, 114, 115, 116, 117, 120, 121, 122, 124, 68, 126, 127, 128, 129, 109, 119, 101, 71, 72, 73, 75, 79, 80, 81, 82, 83, 84, 85, 86, 89, 90, 91, 93, 65, 95, 96, 97, 98, 78, 88, 187, 217, 167, 188, 189, 256, 134, 133, 0};
extern "C" s16 data_ov095_02295ea8[54] = {54, 55, 56, 57, 58, 59, 60, 61, 62, 53, 179, 177, 43, 49, 31, 44, 46, 51, 47, 35, 41, 42, 256, 288, 27, 45, 30, 32, 33, 34, 36, 37, 38, 134, 287, 52, 50, 29, 48, 28, 40, 39, 146, 148, 209, 142, 143, 291, 133, 289, 290, 135, 155, 0};
extern "C" s16 data_ov095_02295f14[54] = {220, 221, 222, 223, 147, 145, 140, 156, 166, 153, 218, 219, 17, 23, 5, 18, 20, 25, 21, 9, 15, 16, 256, 288, 1, 19, 4, 6, 7, 8, 10, 11, 12, 134, 287, 26, 24, 3, 22, 2, 14, 13, 152, 154, 161, 157, 159, 291, 133, 289, 290, 150, 151, 0};
extern "C" s16 data_ov095_02295f80[54] = {54, 55, 56, 57, 58, 59, 60, 61, 62, 53, 201, 156, 43, 49, 31, 44, 46, 51, 47, 35, 41, 42, 256, 288, 27, 45, 30, 32, 33, 34, 36, 37, 38, 134, 287, 52, 50, 29, 48, 28, 40, 39, 156, 156, 156, 157, 159, 291, 133, 289, 290, 135, 155, 0};
extern "C" Unk_ov095_02295e48 data_ov095_02295e48[12] = {{{0x41f700eb, 0x00008109}}, {{0x400d00eb, 0x0000810b}}, {{0x402300eb, 0x0000810d}}, {{0x403900eb, 0x0000810f}}, {{0x81ef40eb, 0x0000a0cb}}, {{0x800540eb, 0x0000a0cb}}, {{0x801b40eb, 0x0000a0cb}}, {{0x803140eb, 0x0000a0cb}}, {{0x81ef40ed, 0x000010cb}}, {{0x800540ed, 0x000010cb}}, {{0x801b40ed, 0x000010cb}}, {{0x803140ed, 0xffff10cb}}};
extern "C" s16 data_ov095_02295e04[34] = {220, 221, 222, 223, 135, 155, 201, 166, 161, 149, 156, 179, 177, 146, 148, 209, 150, 151, 145, 147, 140, 157, 159, 142, 143, 152, 154, 218, 219, 153, 183, 256, 134, 133};
extern "C" const s32 data_ov095_02295494[14] = {92, 226, 226, 226, 226, 226, 81, 93, 106, 108, 109, 219, 220, 82};
extern "C" const s32 data_ov095_022954cc[14] = {144, 226, 226, 226, 226, 226, 143, 226, 226, 226, 226, 219, 220, 226};
extern "C" const s32 data_ov095_02295504[14] = {199, 226, 226, 226, 226, 226, 198, 226, 226, 226, 226, 219, 220, 226};
extern "C" const s32 data_ov095_0229553c[14] = {57, 50, 51, 52, 53, 54, 56, 226, 226, 226, 226, 219, 220, 226};
extern "C" u32 data_ov095_02295d44[12] = {0x41b700eb, 0x0000a101, 0x41c900eb, 0x0000a103, 0x41db00eb, 0x0000a105, 0x41b700ed, 0x00001101, 0x41c900ed, 0x00001103, 0x41db00ed, 0xffff1105};
extern "C" u32 data_ov095_02295d74[12] = {0x41b700e3, 0x0000a101, 0x41c900e3, 0x0000a103, 0x41db00e3, 0x0000a105, 0x41b700e5, 0x00001101, 0x41c900e5, 0x00001103, 0x41db00e5, 0xffff1105};
extern "C" u32 data_ov095_02295da4[12] = {0x018500ea, 0x0000c0fc, 0x418d40ea, 0x0000c0d8, 0x418100e8, 0x0000c118, 0x419d00e8, 0x0000c11c, 0x01ad80e8, 0x0000c11e, 0x419100e8, 0xffffc11c};
extern "C" u32 data_ov095_02295dd4[12] = {0x007300ea, 0x0000e0fd, 0x405340ea, 0x0000e0f8, 0x506f00e8, 0x0000e118, 0x505300e8, 0x0000e11c, 0x104b80e8, 0x0000e11e, 0x506100e8, 0xffffe11c};
extern "C" u32 data_ov095_02295c7c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002340b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295ca4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002240b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295ccc[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002140b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295cf4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002d40b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295d1c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002540b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295c2c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002540b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_0229586c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002940b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295894[10] = {0x418d40f2, 0x0000c0d8, 0x418100f0, 0x0000c118, 0x419d00f0, 0x0000c11c, 0x01ad80f0, 0x0000c11e, 0x419100f0, 0xffffc11c};
extern "C" u32 data_ov095_022958bc[10] = {0x405340f2, 0x0000e0f8, 0x506f00f0, 0x0000c118, 0x505300f0, 0x0000c11c, 0x104b80f0, 0x0000c11e, 0x506100f0, 0xffffc11c};
extern "C" u32 data_ov095_02295b8c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002940b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_022958e4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002e40b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_0229590c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002c40b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295934[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002b40b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295aec[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002d40b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_0229595c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002a40b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295984[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002840b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_022959ac[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002740b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_022959d4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002640b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_022959fc[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002440b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295a24[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002340b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295a4c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002240b8, 0x0000e1a0, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295a74[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002040b8, 0x0000e1a0, 0x002140b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295a9c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002f40b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x002140b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295ac4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002f40b8, 0x0000c1a2, 0x001e40b8, 0x0000e1a0, 0x002140b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295b14[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002c40b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295b3c[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002b40b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295b64[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002a40b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295bb4[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002840b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295bdc[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002740b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295c04[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002640b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_02295c54[10] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002440b8, 0x0000c1a2, 0x001f40b8, 0x0000e1a0, 0x003040b8, 0xffffc1a2};
extern "C" u32 data_ov095_022957ac[8] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002f40b8, 0x0000e1a0, 0x002040b8, 0xffffe1a0};
extern "C" void *data_ov095_022957cc[8] = {data_ov095_02295648, data_ov095_022955e4, data_ov095_022955f8, data_ov095_022955d0, data_ov095_02295620, data_ov095_02295620, data_ov095_022955a8, data_ov095_022955bc};
extern "C" void *data_ov095_022957ec[8] = {data_ov095_0229565c, data_ov095_0229571c, data_ov095_0229577c, data_ov095_02295734, data_ov095_02295764, data_ov095_02295764, data_ov095_0229574c, data_ov095_02295794};
extern "C" u32 data_ov095_0229580c[8] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002040b8, 0x0000e1a0, 0x002f40b8, 0xffffc1a2};
extern "C" u32 data_ov095_0229582c[8] = {0x800f40b5, 0x0000c184, 0x802540b5, 0x0000c187, 0x002040b8, 0x0000c1a2, 0x003040b8, 0xffffc1a2};
extern "C" void *data_ov095_0229584c[8] = {data_ov095_0229568c, data_ov095_022956a4, data_ov095_02295674, data_ov095_022956bc, data_ov095_022956d4, data_ov095_022956d4, data_ov095_022956ec, data_ov095_02295704};
extern "C" char data_ov095_02295704[24] = "menu/chat2/b_key8.bsc";
extern "C" char data_ov095_0229574c[24] = "menu/chat2/b_chtk9.bsc";
extern "C" char data_ov095_022956d4[24] = "menu/chat2/b_key4.bsc";
extern "C" char data_ov095_0229565c[24] = "menu/chat2/b_cht.bsc";
extern "C" char data_ov095_022956ec[24] = "menu/chat2/b_key9.bsc";
extern "C" char data_ov095_0229577c[24] = "menu/chat2/b_chtk6.bsc";
extern "C" char data_ov095_0229568c[24] = "menu/chat2/b_key0.bsc";
extern "C" char data_ov095_022956a4[24] = "menu/chat2/b_key1.bsc";
extern "C" char data_ov095_022956bc[24] = "menu/chat2/b_key7.bsc";
extern "C" char data_ov095_02295674[24] = "menu/chat2/b_key6.bsc";
extern "C" char data_ov095_02295734[24] = "menu/chat2/b_chtk7.bsc";
extern "C" char data_ov095_0229571c[24] = "menu/chat2/b_chtk1.bsc";
extern "C" char data_ov095_02295794[24] = "menu/chat2/b_chtk8.bsc";
extern "C" char data_ov095_02295764[24] = "menu/chat2/b_chtk4.bsc";
extern "C" char data_ov095_02295620[20] = "menu/chat2/key4.bch";
extern "C" char data_ov095_02295648[20] = "menu/chat2/key0.bch";
extern "C" char data_ov095_022955f8[20] = "menu/chat2/key6.bch";
extern "C" char data_ov095_022955bc[20] = "menu/chat2/key8.bch";
extern "C" char data_ov095_022955a8[20] = "menu/chat2/key9.bch";
extern "C" char data_ov095_022955d0[20] = "menu/chat2/key7.bch";
extern "C" char data_ov095_022955e4[20] = "menu/chat2/key1.bch";
extern "C" s32 data_ov095_0229560c[5] = {59, 71, 82, 93, 104};
extern "C" s32 data_ov095_02295634[5] = {70, 81, 92, 103, 111};
extern "C" void *data_ov095_02295598[4] = {data_ov095_022963e4, data_ov095_02296214, data_ov095_022960dc, data_ov095_022965bc};
extern "C" const s32 data_ov095_02295474[4] = {0, 59, 112, 146};
extern "C" const s32 data_ov095_02295454[4] = {45, 70, 121, 156};
extern "C" const s32 data_ov095_02295484[4] = {28, 4, 8, 8};
extern "C" const s32 data_ov095_02295464[4] = {55, 81, 121, 198};
extern "C" u32 data_ov095_02295590[2] = {0x01ff8000, 0xffffc100};
extern "C" u32 data_ov095_02295588[2] = {0x805400cb, 0xffff60d4};
extern "C" u32 data_ov095_02295580[2] = {0x805400ce, 0xffff10d4};

BOOL func_ov095_02295440(Unk_ov095_02292360 *s, s32 i) {
    u32 v = s->unk_0c;
    if ((v & (1 << i)) != 0) return TRUE;
    return FALSE;
}

void func_ov095_022953c0(Unk_ov095_02292360 *s, s32 i) {
    s->unk_0c |= (1 << i);
    switch (s->unk_02) {
    case 0: func_ov095_022950f4(s, data_ov095_0229553c[i], 0xe); break;
    case 1: func_ov095_02294fb4(s, data_ov095_02295494[i], 0xe); break;
    case 2: func_ov095_02294ebc(s, data_ov095_022954cc[i], 0xe); break;
    case 3: func_ov095_02294dc0(s, data_ov095_02295504[i], 0xe); break;
    }
    func_ov095_02292368(s, 1);
}

void func_ov095_02295340(Unk_ov095_02292360 *s, s32 i) {
    s->unk_0c &= ~(1 << i);
    switch (s->unk_02) {
    case 0: func_ov095_022950f4(s, data_ov095_0229553c[i], 0xc); break;
    case 1: func_ov095_02294fb4(s, data_ov095_02295494[i], 0xc); break;
    case 2: func_ov095_02294ebc(s, data_ov095_022954cc[i], 0xc); break;
    case 3: func_ov095_02294dc0(s, data_ov095_02295504[i], 0xc); break;
    }
    func_ov095_02292368(s, 1);
}

BOOL func_ov095_022952c4(Unk_ov095_02292360 *s, s32 a)
{
    s32 i;
    const s32 *tbl;
    if (a == -1) {
        return FALSE;
    }
    switch (s->unk_02) {
    case 0:
        tbl = data_ov095_0229553c;
        break;
    case 1:
        tbl = data_ov095_02295494;
        break;
    case 2:
        tbl = data_ov095_022954cc;
        break;
    case 3:
        tbl = data_ov095_02295504;
        break;
    default:
        return FALSE;
    }
    for (i = 0; i < 0xe; i++) {
        if (a == tbl[i]) {
            if (func_ov095_02295440(s, i)) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

BOOL func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xcd && a <= 0xd4) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022952a0(Unk_ov095_02292360 *s, s32 a)
{
    if (a == -1) {
        a = s->unk_14;
    }
    return func_ov095_022952b4(s, a);
}

BOOL func_ov095_02295270(Unk_ov095_02292360 *s, s32 a)
{
    if (a == -1) {
        a = s->unk_14;
    }
    switch (a) {
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_02295264(Unk_ov095_02292360 *s)
{
    return func_ov095_02292370(s, 0x40);
}

BOOL func_ov095_02295258(Unk_ov095_02292360 *s)
{
    return func_ov095_02292370(s, 0x80);
}

void func_ov095_022951e4(Unk_ov095_02292360 *s)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    p = (Unk_ov095_02294dc0_Entry *)func_ov095_02293b0c(s);
    if (p != NULL) {
        for (i = 0; i < 0x64; i++) {
            p[i].pal = 0xc;
            if (p[i].hi == 0xffff) {
                i = 0x64;
            }
        }
    }
    for (i = 0; i < 0xe; i++) {
        if (func_ov095_02295440(s, i)) {
            func_ov095_022953c0(s, i);
        }
    }
    func_ov095_02295150(s);
    func_ov095_02292368(s, 1);
}

void func_ov095_02295194(Unk_ov095_02292360 *s)
{
    s32 i;
    if (s->unk_10 != -1) {
        func_ov095_02294d4c(s, s->unk_10, 0xc);
        s->unk_10 = -1;
    }
    for (i = 0; i < 0xe; i++) {
        if (func_ov095_02295440(s, i)) {
            func_ov095_022953c0(s, i);
        }
    }
    func_ov095_02295150(s);
    func_ov095_02292368(s, 1);
}

void func_ov095_02295150(Unk_ov095_02292360 *s)
{
    if (s->unk_05[2] != 3) {
        func_ov095_02292360(s, 0x20);
    }
    if (s->unk_05[2] != 2 && s->unk_05[2] == 3) {
        if (func_ov095_02292370(s, 0x20)) {
            func_ov095_02294fb4(s, 0x5d, 0xd);
        } else {
            func_ov095_02294fb4(s, 0x52, 0xd);
        }
    }
}

void func_ov095_022950f4(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0 || a > 0x3a) {
        return;
    }
    p = (Unk_ov095_02294dc0_Entry *)func_ov095_02293b0c(s);
    if (a >= 0 && a <= 0x31) {
        a += 5;
    } else if (a >= 0x32 && a <= 0x36) {
        a -= 0x32;
    } else if (a >= 0x37 && a <= 0x3a) {
    } else {
        return;
    }
    p[a].pal = b;
}

void func_ov095_02294fb4(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x3b || a > 0x6f) {
        return;
    }
    p = (Unk_ov095_02294dc0_Entry *)func_ov095_02293b0c(s);
    if (a >= 0x3b && a <= 0x46) {
        i = a - 0x3b;
    } else if (a >= 0x47 && a <= 0x50) {
        i = a - 0x3b;
    } else if (a == 0x51) {
        i = 0x16;
        p[23].pal = b;
    } else if (a >= 0x52 && a <= 0x5b) {
        i = a - 0x3a;
    } else if (a == 0x5c) {
        i = 0x22;
        p[35].pal = b;
        p[36].pal = b;
    } else if (a >= 0x5d && a <= 0x67) {
        i = a - 0x38;
    } else if (a >= 0x68 && a <= 0x69) {
        i = a - 0x38;
    } else if (a == 0x6b) {
        i = 0x32;
        p[51].pal = b;
        p[52].pal = b;
        p[53].pal = b;
        p[54].pal = b;
        p[55].pal = b;
    } else if (a >= 0x6e && a <= 0x6f) {
        i = a - 0x36;
    } else {
        return;
    }
    p[i].pal = b;
}

void func_ov095_02294ebc(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x70 || a > 0x91) {
        return;
    }
    p = (Unk_ov095_02294dc0_Entry *)func_ov095_02293b0c(s);
    if (a >= 0x70 && a <= 0x79) {
        i = a - 0x70;
    } else if (a >= 0x7a && a <= 0x83) {
        i = a - 0x6e;
    } else if (a >= 0x84 && a <= 0x8d) {
        i = a - 0x6c;
    } else {
        a -= 0x8e;
        switch (a) {
        case 0:
            i = 0xa;
            break;
        case 1:
            i = 0xb;
            break;
        case 2:
            i = 0x16;
            p[23].pal = b;
            break;
        case 3:
            i = 0x22;
            p[35].pal = b;
            p[36].pal = b;
            p[37].pal = b;
            p[38].pal = b;
            break;
        default:
            return;
        }
    }
    p[i].pal = b;
}

void func_ov095_02294dc0(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    Unk_ov095_02294dc0_Entry *p;
    s32 i;
    if (func_ov095_02294d90(s, a, b) != 0) {
        return;
    }
    if (a < 0x92 || a > 0xc8) {
        return;
    }
    p = (Unk_ov095_02294dc0_Entry *)func_ov095_02293b0c(s);
    if (a >= 0x92 && a <= 0x9c) {
        i = a - 0x92;
    } else if (a >= 0x9d && a <= 0xa7) {
        i = a - 0x90;
    } else if (a >= 0xa8 && a <= 0xb2) {
        i = a - 0x8e;
    } else if (a >= 0xb3 && a <= 0xbd) {
        i = a - 0x8e;
    } else if (a >= 0xbe && a <= 0xc5) {
        i = a - 0x8e;
    } else {
        switch (a) {
        case 0xc6:
            i = 0xb;
            p[12].pal = b;
            break;
        case 0xc7:
            i = 0x18;
            p[25].pal = b;
            break;
        case 0xc8:
            i = 0x38;
            p[57].pal = b;
            p[58].pal = b;
            p[59].pal = b;
            break;
        default:
            return;
        }
    }
    p[i].pal = b;
}

s32 func_ov095_02294d90(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    if (a == 0xdb) {
        goto body;
    }
    if (a == 0xdc) {
body:
        switch (b) {
        case 0xc:
            b = 0xc;
            break;
        case 0xe:
            b = 0xe;
            break;
        case 0xd:
            b = 0xd;
            break;
        }
        if (a == 0xdb) {
            s->unk_05[0] = b;
        } else {
            s->unk_05[1] = b;
        }
    }
    return 0;
}

void func_ov095_02294d4c(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    switch (s->unk_02) {
    case 0:
        func_ov095_022950f4(s, a, b);
        break;
    case 1:
        func_ov095_02294fb4(s, a, b);
        break;
    case 2:
        func_ov095_02294ebc(s, a, b);
        break;
    case 3:
        func_ov095_02294dc0(s, a, b);
        break;
    }
    func_ov095_02292368(s, 1);
}

void func_ov095_02294d40(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02294d4c(s, a, 0xd);
}

s32 func_ov095_02294c24(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (b < 0x60) {
        return -1;
    }
    if (b >= 0xb0) {
        return -1;
    }
    if (b < 0x70) {
        if (a < 4) {
            return -1;
        }
        if (a >= 0xf4) {
            return -1;
        }
        return _s32_div_f(a - 4, 0x14) + 0x3b;
    }
    if (b < 0x80) {
        if (a < 0xc) {
            return -1;
        }
        if (a >= 0xfc) {
            return -1;
        }
        if (a >= 0xd4) {
            return 0x51;
        }
        return _s32_div_f(a - 0xc, 0x14) + 0x47;
    }
    if (b < 0x90) {
        if (a < 4) {
            return -1;
        }
        if (a < 0x18) {
            return 0x52;
        }
        if (a >= 0xfc) {
            return -1;
        }
        if (a >= 0xcc) {
            return 0x5c;
        }
        return _s32_div_f(a - 0x18, 0x14) + 0x53;
    }
    if (b < 0xa0) {
        if (a < 4) {
            return -1;
        }
        if (a < 0x20) {
            return 0x5d;
        }
        if (a >= 0xe8) {
            return -1;
        }
        return _s32_div_f(a - 0x20, 0x14) + 0x5e;
    }
    if (b < 0xb0) {
        if (a < 0x18) {
            return -1;
        }
        if (a >= 0x40 && a < 0xcc) {
            return 0x6b;
        }
        if (a < 0x54) {
            return _s32_div_f(a - 0x18, 0x14) + 0x68;
        }
        if (a >= 0xf4) {
            return -1;
        }
        return _s32_div_f(a - 0xa4, 0x14) + 0x6c;
    }
    return -1;
}

s32 func_ov095_02294bac(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (b < 0x68) {
        return -1;
    }
    if (b >= 0xa8) {
        return -1;
    }
    if (b >= 0x98) {
        if (a >= 0x50 && a < 0xb0) {
            return 0x91;
        }
        return -1;
    }
    if (a < 0x8) {
        return -1;
    }
    if (a >= 0xf8) {
        return -1;
    }
    if (a < 0xd0) {
        {
            s32 c = _s32_div_f(a - 8, 0x14);
            s32 rw = ((s32)(b - 0x68) >> 4) * 10;
            return c + rw + 0x70;
        }
    }
    if (b >= 0x78) {
        return 0x90;
    }
    if (a < 0xe4) {
        return 0x8e;
    }
    return 0x8f;
}

s32 func_ov095_02294b44(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    s32 row;
    s32 col;
    if (b < 0x60 || b >= 0xb0) {
        return -1;
    }
    if (a < 0x8 || a >= 0xf8) {
        return -1;
    }
    row = (s32)(b - 0x60) >> 4;
    col = _s32_div_f(a - 8, 0x14);
    if (row == 4) {
        if (col >= 8) {
            return 0xc8;
        }
        return col + 0x92 + row * 0xb;
    }
    if (col >= 0xb) {
        if (b < 0x78) {
            return 0xc6;
        }
        return 0xc7;
    }
    return col + 0x92 + row * 0xb;
}

s32 func_ov095_02294af4(Unk_ov095_02292360 *s, u32 a, u32 b)
{
    if (func_ov095_02292370(s, 4)) {
        if (b >= 0x50 && b <= 0x58) {
            if (a < 0x30) {
                return 0xdb;
            }
            if (a > 0xd0) {
                return 0xdc;
            }
        }
    } else {
        if (b >= 0x48 && b <= 0x50) {
            if (a < 0x30) {
                return 0xdb;
            }
            if (a > 0xd0) {
                return 0xdc;
            }
        }
    }
    return -1;
}

s32 func_ov095_02294a44(Unk_ov095_02292360 *s, s32 a, u32 b)
{
    s32 r;
    s->unk_10 = -1;
    r = func_ov095_02294af4(s, a, b);
    if (r == -1) {
        if (func_ov095_02292370(s, 4) == 0) {
            if (b < 0xf7) {
                b = (u8)(b + 8);
            } else {
                b = 0xff;
            }
        }
        switch (s->unk_02) {
        case 0:
            break;
        case 1:
            r = func_ov095_02294c24(s, a, b);
            if (r == 0x6a || (u32)(r - 0x6c) <= 1) {
                r = 0x6b;
            }
            break;
        case 2:
            r = func_ov095_02294bac(s, a, b);
            break;
        case 3:
            r = func_ov095_02294b44(s, a, b);
            break;
        default:
            return -1;
        }
    }
    if (func_ov095_022952c4(s, r)) {
        return -1;
    }
    s->unk_10 = r;
    return r;
}

s32 func_ov095_02294a40(Unk_ov095_02292360 *s)
{
    return s->unk_10;
}

s32 func_ov095_02294a2c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xc9 && a <= 0xe1) {
        return a + 0x3d;
    }
    return -1;
}

s32 func_ov095_022949d4(Unk_ov095_02292360 *s, s32 a)
{
    if (a == 0x26) {
        return 0x87;
    }
    if (a == 0x27) {
        return 0x9b;
    }
    if (a == 0x37) {
        return 0xc9;
    }
    if (a == 0x3a) {
        return 0x85;
    }
    if (a == 0x30) {
        return 0x9c;
    }
    if (a == 0x31) {
        return 0x9c;
    }
    if (a == 0x39) {
        return 0x86;
    }
    if (a == 0x38) {
        return 0x100;
    }
    if (a >= 0x32 && a <= 0x36) {
        return a + 0xcf;
    }
    return 0;
}

s32 func_ov095_022949a8(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0 && a <= 0x25) {
        return a + 0x9c;
    }
    if (a >= 0x28 && a <= 0x2f) {
        return a + 0x74;
    }
    return func_ov095_022949d4(s, a);
}

s32 func_ov095_0229497c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0 && a <= 0x25) {
        return a + 0x9c;
    }
    if (a >= 0x28 && a <= 0x2f) {
        return a + 0x74;
    }
    return func_ov095_022949d4(s, a);
}

s32 func_ov095_02294960(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295ea8[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_02294944(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295f14[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_02294928(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x3b && a <= 0x6f) {
        return data_ov095_02295f80[a - 0x3b];
    }
    return 0;
}

s32 func_ov095_0229490c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x70 && a <= 0x91) {
        return data_ov095_02295e04[a - 0x70];
    }
    return 0;
}

s32 func_ov095_022948f0(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x92 && a <= 0xc8) {
        return data_ov095_02295fec[a - 0x92];
    }
    return 0;
}

s32 func_ov095_02294864(Unk_ov095_02292360 *s, s32 a, u32 b)
{
    s32 r;
    if (b >= 8) {
        b = s->unk_05[2];
    }
    r = func_ov095_02294a2c(s, a);
    if (r >= 0) {
        return r;
    }
    switch (b) {
    case 0:
        return func_ov095_022949a8(s, a);
    case 1:
        return func_ov095_0229497c(s, a);
    case 2:
        return func_ov095_02294960(s, a);
    case 3:
        return func_ov095_02294944(s, a);
    case 4:
    case 5:
        return func_ov095_02294928(s, a);
    case 6:
        return func_ov095_0229490c(s, a);
    case 7:
        return func_ov095_022948f0(s, a);
    }
    return 0x85;
}

void func_ov095_0229483c(Unk_ov095_02292360 *s, s32 a)
{
    s->unk_02 = func_0206e6b8();
    func_ov095_02294648(s, func_0206e694(s->unk_02), a, 0);
}

void func_ov095_02294648(Unk_ov095_02292360 *s, s32 mode, s32 a, s32 c)
{
    s32 g;
    s32 h;
    if (mode == 8) {
        mode = func_0206e694(s->unk_02);
    }
    if (mode == 3 && func_ov095_02292370(s, 0x20) != 0) {
        func_0206e688(s->unk_02, 2);
    } else {
        func_0206e688(s->unk_02, mode);
    }
    g = gCurrentHeap;
    if (c == 0) {
        Gfx2d_LoadPaletteFile((void *)"menu/chat2/b_cht_bg.bpl", g, a, 1, 1, 4);
        Gfx2d_LoadPaletteFile((void *)"menu/chat2/b_cht_bg.bpl", g, a, 1, 7, 7);
        Gfx2d_LoadPaletteFile((void *)"menu/chat2/b_cht_bg.bpl", g, a, 1, 9, 9);
    }
    if (s->unk_05[2] == mode && c != 0) {
        goto end;
    }
    File_LoadToBuffer((void *)data_ov095_022957cc[mode], (u8 *)s + 0x34, 0x22c0);
    if (func_ov095_02292370(s, 4) != 0) {
        h = (s32)data_ov095_022957ec[mode];
    } else {
        h = (s32)data_ov095_0229584c[mode];
    }
    h = File_LoadAlloc(h, g, -4, 0);
    MI_CpuCopy8((void *)(h + 0x240), (u8 *)s + 0x25fc, 0x380);
    func_ov095_0229434c(s);
    Heap_Free(g, (void *)h);
    _ZN10BgVramTask12requestCharsEjhjjj((u8 *)s + 0x22f4, (u8 *)s + 0x34, a, 0x1ea, 0x1ea, 0x2ff);
    s->unk_05[2] = mode;
    switch (s->unk_05[2]) {
    case 0:
        func_ov095_022953c0(s, 1);
        func_ov095_02295340(s, 2);
        break;
    case 1:
        func_ov095_02295340(s, 1);
        func_ov095_022953c0(s, 2);
        break;
    case 2:
    case 3:
        func_ov095_022953c0(s, 8);
        func_ov095_02295340(s, 9);
        func_ov095_02295340(s, 10);
        func_ov095_02295340(s, 7);
        func_ov095_02295340(s, 13);
        break;
    case 4:
        func_ov095_02295340(s, 8);
        func_ov095_022953c0(s, 9);
        func_ov095_02295340(s, 10);
        func_ov095_022953c0(s, 7);
        func_ov095_022953c0(s, 13);
        break;
    case 5:
        func_ov095_02295340(s, 8);
        func_ov095_02295340(s, 9);
        func_ov095_022953c0(s, 10);
        func_ov095_022953c0(s, 7);
        func_ov095_022953c0(s, 13);
        break;
    case 6:
        break;
    }
    func_ov095_02293dc0(s);
end:
    func_ov095_022951e4(s);
}

void func_ov095_02294624(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02294648(s, s->unk_05[2], a, 0);
    func_ov095_02294358(s, a);
}

void func_ov095_022945e0(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    switch (a) {
    case 0x107:
        s->unk_02 = 1;
        break;
    case 0x108:
        s->unk_02 = 3;
        break;
    case 0x109:
        s->unk_02 = 2;
        break;
    }
    func_ov095_02294648(s, 8, b, 1);
}

void func_ov095_02294594(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        s->unk_05[2] = 2;
        func_ov095_02292360(s, 0x20);
    }
    switch (s->unk_05[2]) {
    case 2:
        func_ov095_02294648(s, 3, a, 1);
        break;
    case 3:
        func_ov095_02294648(s, 2, a, 1);
        break;
    }
}

void func_ov095_02294550(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        func_ov095_02292360(s, 0x20);
        func_ov095_02294648(s, 2, a, 1);
    } else {
        func_ov095_02292368(s, 0x20);
        func_ov095_02294648(s, 3, a, 1);
    }
}

void func_ov095_02294520(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x20) != 0) {
        func_ov095_02292360(s, 0x20);
        func_ov095_02294648(s, 2, a, 1);
    }
}

void func_ov095_02294478(Unk_ov095_02292360 *s, s32 a)
{
    Unk_ov095_02294478_Reg *r;
    s->unk_0c = 0;
    s->unk_05[2] = 8;
    s->unk_10 = -1;
    s->flags = 0;
    s->unk_03 = 0xff;
    s->unk_04 = 0;
    s->unk_14 = -1;
    s->unk_18 = 100;
    s->unk_1c = 100;
    func_ov095_02293dc0(s);
    if (a == 0) {
        func_ov095_02292368(s, 4);
        s->unk_30 = (u8 *)data_ov095_02295d44;
    } else {
        s->unk_30 = (u8 *)data_ov095_02295d74;
    }
    s->unk_2e = a;
    s->unk_05[0] = 0xc;
    s->unk_05[1] = 0xc;
    s->unk_02 = 1;
    r = (Unk_ov095_02294478_Reg *)s->unk_30;
    r->unk_04 = (r->unk_04 & ~0x3ff) | 0x103;
    r = (Unk_ov095_02294478_Reg *)s->unk_30;
    r->unk_0c = (r->unk_0c & ~0x3ff) | 0x107;
    if (PlayerData_GetCurrent() != 0) {
        _ZN10PlayerData11getPlayerIdEv();
        if (_ZN8PlayerId9getGenderEv() == 0) {
            Snd_SetKeySeMode(0);
            return;
        }
    }
    Snd_SetKeySeMode(1);
}

void func_ov095_02294438(Unk_ov095_02292360 *s)
{
    _ZN10BgVramTask6cancelEv((u8 *)s + 0x22f4);
    _ZN10BgVramTask6cancelEv((u8 *)s + 0x2318);
    _ZN12Unk_020e048813func_0206fc44Ev((u8 *)s + 0x233c);
    _ZN12Unk_020e048813func_0206fc44Ev((u8 *)s + 0x237c);
    func_0206e6ac(s->unk_02);
}

void func_ov095_0229442c(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 8);
}

void func_ov095_022943f8(Unk_ov095_02292360 *s, s32 a)
{
    Gfx2d_LoadCharFile((void *)"menu/letter/b_ltr.bch", gCurrentHeap, a, 0x13d, 0x1eb, 0x1f0);
}

void func_ov095_022943dc(Unk_ov095_02292360 *s, s32 a)
{
    File_LoadToBuffer((void *)a, (u8 *)s + 0x23bc, 0x800);
}

void func_ov095_022943b4(Unk_ov095_02292360 *s, s32 a)
{
    Gfx2d_LoadScreen((u8 *)s + 0x23bc, a, 0x800, 0);
    func_ov095_02292360(s, 1);
}

void func_ov095_02294358(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 1) != 0) {
        if (_ZN10BgVramTask13requestScreenEjhjj((u8 *)s + 0x2318, (u8 *)s + 0x23bc, a, 0x800, 0) != 0) {
            func_ov095_02292360(s, 1);
        }
    }
    func_ov095_02292360(s, 2);
    func_ov095_02292360(s, 0x200);
}

void func_ov095_0229434c(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 1);
}

s32 func_ov095_02294324(Unk_ov095_02292360 *s)
{
    if (s->unk_08 != 0) {
        s->unk_08--;
        if (s->unk_08 >= 4) {
            return 1;
        }
        if (s->unk_08 == 0) {
            func_ov095_02295194(s);
        }
    }
    return 0;
}

void func_ov095_02294318(Unk_ov095_02292360 *s)
{
    s->unk_08 = 5;
    s->unk_28[4] = 0xd;
}

BOOL func_ov095_022942e8(Unk_ov095_02292360 *s)
{
    if (s->unk_08 > 1) {
        s->unk_08--;
    }
    if (*(volatile u8 *)&s->unk_28[4] != 0) {
        s->unk_28[4] = *(volatile u8 *)&s->unk_28[4] - 1;
    } else {
        s->unk_28[4] = 1;
        return TRUE;
    }
    return FALSE;
}

void func_ov095_022942c0(Unk_ov095_02292360 *s)
{
    func_ov095_022953c0(s, 6);
    func_ov095_022953c0(s, 3);
    func_ov095_022953c0(s, 4);
    func_ov095_022953c0(s, 5);
}

void func_ov095_02294250(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02295340(s, 6);
    if (func_ov095_02293f90(s, a) == 0) {
        func_ov095_022953c0(s, 3);
    } else {
        func_ov095_02295340(s, 3);
    }
    if (func_ov095_02293f8c(s, a) == 0) {
        func_ov095_022953c0(s, 4);
    } else {
        func_ov095_02295340(s, 4);
    }
    if (func_ov095_02293f88(s, a) == 0) {
        func_ov095_022953c0(s, 5);
    } else {
        func_ov095_02295340(s, 5);
    }
}

BOOL func_ov095_0229423c(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0x100) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022941a0(Unk_ov095_02292360 *s, u8 *a, void *b, s32 c, s32 d, s32 e)
{
    s32 n;
    if (d == c) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x40);
        }
        return FALSE;
    }
    n = func_020512e0(a, d);
    if (n == d && a[n - 1] != 0x85) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x40);
        }
        return FALSE;
    }
    if (e < 0) {
        return TRUE;
    }
    d = func_02051348(a, d);
    if (d + func_02051370((u32)b) > e) {
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x80);
        }
        return FALSE;
    }
    return TRUE;
}

BOOL func_ov095_02294164(Unk_ov095_02292360 *s, u8 *a, s32 b, s32 c, s32 d, s32 e)
{
    s32 i;
    if (func_ov095_022941a0(s, a, (void *)b, c, d, e) == 0) {
        return FALSE;
    }
    for (i = d - 1; i > c; i--) {
        a[i] = a[i - 1];
    }
    a[c] = b;
    return TRUE;
}

BOOL func_ov095_022940f0(Unk_ov095_02292360 *s, u8 *a, s32 b, u8 *p, s32 c, s32 d, s32 e, s32 f)
{
    if (e != 0) {
        func_ov095_02292368(s, 0x100);
    } else {
        func_ov095_02292360(s, 0x40);
        func_ov095_02292360(s, 0x80);
        func_ov095_02292360(s, 0x100);
    }
    if (func_ov095_02294164(s, a, b, *p, c, d) != 0) {
        if (f != 0 && e == 0) {
            func_ov095_02292380(s, b);
        }
        *p = *p + 1;
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_02293ff0(Unk_ov095_02292360 *s, void *p1, s32 p2, u8 *p3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9)
{
    u8 loc;
    s32 o24;
    s32 o28;
    struct Pad { s32 v[6]; Pad() {} ~Pad() {} } pad;
    u8 saved = s->unk_2d;
    u32 heap = gCurrentHeap;
    void *buf = Heap_AllocTail(heap, 0xc0);
    if (buf == NULL) {
        return FALSE;
    }
    Mem_Copy(p1, buf, a4);
    loc = *p3;
    if (func_ov095_022940f0(s, (u8 *)buf, p2, &loc, a4, 0x2710, a8, 0) == 0) {
        Heap_Free(heap, buf);
        return FALSE;
    }
    if (func_0206cf4c((u8 *)buf, &o28, &o24, a4, a5, a7, a6) == 0) {
        if (s->unk_2d != saved) {
            s->unk_2d = saved;
        }
        Heap_Free(heap, buf);
        if (func_ov095_02292370(s, 0x100) == 0) {
            func_ov095_02292368(s, 0x80);
        }
        return FALSE;
    }
    if (a8 == 0) {
        Mem_Copy(buf, p1, a4);
        *p3 = loc;
        if (a9 == 1 && loc != 0) {
            func_ov095_02292380(s, ((u8 *)p1)[loc - 1]);
        }
    }
    Heap_Free(heap, buf);
    return TRUE;
}

s32 func_ov095_02293fb4(void *s, u8 *buf, s32 a, s32 b, s32 n)
{
    s32 lo, hi, j, t;
    if (a > b) {
        lo = b;
        hi = a;
    } else {
        lo = a;
        hi = b;
    }
    for (j = 0; j + hi < n; j++) {
        t = buf[j + hi];
        buf[j + lo] = t;
    }
    hi -= lo;
    t = 0;
    for (j = 1; j <= hi; j++) {
        buf[n - j] = t;
    }
    return lo;
}

BOOL func_ov095_02293f94(Unk_ov095_02292360 *s, u8 *buf, s32 c, s32 n)
{
    if (n == 0) {
        return FALSE;
    }
    n--;
    buf[n] = c;
    func_ov095_02292380(s, c);
    return TRUE;
}

s32 func_ov095_02293f90(Unk_ov095_02292360 *s, s32 a)
{
    return 0;
}

s32 func_ov095_02293f8c(Unk_ov095_02292360 *s, s32 a)
{
    return 0;
}

s32 func_ov095_02293f88(Unk_ov095_02292360 *s, s32 a)
{
    return 0;
}

u8 func_ov095_02293f2c(void *s, u8 *str, s32 a, s32 b, u8 limit0, u8 *out)
{
    s32 count;
    func_02051270(str, a, b, &count, 0);
    s32 i, w;
    w = 0;
    i = w;
    s32 limit = limit0;
    for (; i < count; i++) {
        s32 c = func_02051370(str[i]);
        if (w + (c >> 1) > limit) {
            if (out) {
                *out = i;
            }
            return w;
        }
        w += c;
    }
    if (out) {
        *out = count;
    }
    return w;
}

s32 func_ov095_02293dc8(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    if (a == 0x86) {
        func_ov095_02293dc0(s);
    }
    if (func_ov095_0229423c(s, a) == 0) {
        func_ov095_02294520(s, b);
        return 0;
    }
    switch (a) {
    case 0x101:
        func_ov095_02294648(s, 0, b, 1);
        Snd_PlaySe(0x18);
        return 2;
    case 0x102:
        func_ov095_02294648(s, 1, b, 1);
        Snd_PlaySe(0x18);
        return 2;
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
        break;
    case 0x11f:
        func_ov095_02294550(s, b);
        Snd_PlaySe(0x18);
        return 2;
    case 0x120:
        func_ov095_02294594(s, b);
        Snd_PlaySe(0x18);
        return 2;
    case 0x107:
    case 0x108:
    case 0x109:
        func_ov095_022945e0(s, a, b);
        Snd_PlaySe(0x18);
        return 2;
    case 0x121:
        func_ov095_02294648(s, 4, b, 1);
        Snd_PlaySe(0x18);
        return 2;
    case 0x122:
        func_ov095_02294648(s, 5, b, 1);
        Snd_PlaySe(0x18);
        return 2;
    case 0x123:
        func_ov095_02294648(s, 2, b, 1);
        Snd_PlaySe(0x18);
        return 2;
    }
    func_ov095_02294520(s, b);
    if (a == 0x100) {
        func_ov095_02293da8(s);
    }
    return 0;
}

void func_ov095_02293dc0(Unk_ov095_02292360 *s)
{
    s->unk_2d = 0;
}

void func_ov095_02293da8(Unk_ov095_02292360 *s)
{
    if (((volatile Unk_ov095_02292360 *)s)->unk_2d != 0) {
        s->unk_2d = ((volatile Unk_ov095_02292360 *)s)->unk_2d - 1;
    }
}

u8 func_ov095_02293da0(Unk_ov095_02292360 *s)
{
    return s->unk_2d;
}

void func_ov095_02293d94(Unk_ov095_02292360 *s)
{
    func_ov095_02292368(s, 2);
}

void func_ov095_02293d88(Unk_ov095_02292360 *s)
{
    func_ov095_02292360(s, 2);
}

void func_ov095_02293cc0(Unk_ov095_02292360 *s)
{
    u32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile((void *)"menu/chat2/b_cht_obj.bpl", h, 8, 4, 4, 0xe);
    Gfx2d_LoadCharFile((void *)"menu/chat2/b_cht_obj_0.bch", h, 8, 0xc0, 0xc0, 0x13f);
    Gfx2d_LoadCharFile((void *)"menu/chat2/b_cht_obj_1.bch", h, 8, 0x180, 0x180, 0x1ff);
    func_0206f9fc(s->unk_233c, 0x9c);
    _ZN12Unk_020e048813func_0206fb48Ejjjhhi(s->unk_233c, 8, 0xd8, 4, 0xa, 0, 0);
    _ZN12Unk_020e048813func_0206fab4Eii(s->unk_233c, 1, 0);
    func_0206f9fc(s->unk_237c, 0x9d);
    _ZN12Unk_020e048813func_0206fb48Ejjjhhi(s->unk_237c, 8, 0xf8, 4, 0xa, 0, 0);
    _ZN12Unk_020e048813func_0206fab4Eii(s->unk_237c, 1, 0);
}

void func_ov095_02293c1c(Unk_ov095_02292360 *s)
{
    s32 i;
    s32 v;
    s32 off;
    u32 p;
    s->unk_04 = func_0203f0c0();
    for (i = 0; i < s->unk_04; i++) {
        s->unk_28[i] = func_0203f07c(i);
    }
    File_LoadToBuffer((void *)"menu/chat2/ten0.bch", s->unk_2bbc, 0x1000);
    for (i = 0; i < s->unk_04; i++) {
        v = s->unk_28[i] - 1;
        off = ((v & 0xf) << 6) + ((v >> 4) << 11);
        p = i * 2 + 0x109;
        Gfx2d_LoadCharRange(s->unk_2bbc + off, 8, p, p, p + 1);
        Gfx2d_LoadCharRange(s->unk_2bbc + (off + 0x400), 8, p + 0x20, p + 0x20, p + 0x21);
    }
}

s32 func_ov095_02293b60(Unk_ov095_02292360 *s, s32 x, s32 y, s32 z)
{
    s32 sel = 0;
    volatile s32 LampLights, LightLevel;
    s32 i;
    switch (s->unk_02) {
    case 1:
        break;
    case 2:
        sel = 2;
        break;
    case 3:
        sel = 1;
        break;
    }
    i = 0;
    LightLevel = i;
    LampLights = i;
    for (; i < 3; i++) {
        if (sel == i) {
            func_02088730(1, s->unk_30 + (i << 3), x, y + 2, 0xb, z, LampLights);
        } else {
            func_02088730(1, s->unk_30 + (i << 3), x, y, 0xa, z, LightLevel);
        }
    }
    Oam_DrawCell(1, s->unk_30 + 0x18, x, y, -1, z, 0x1000, 0x1000, 0, -1, 0, 0);
    if (func_ov095_02292370(s, 4) == 0) {
        y -= 8;
    }
    return func_ov095_02293b24(s, x, y);
}

s32 func_ov095_02293b24(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    return Oam_DrawCell(1, func_ov095_02293b0c(s), x, y, -1, 3, 0x1000, 0x1000, 0, -1, 0, 0);
}

void *func_ov095_02293b0c(Unk_ov095_02292360 *s)
{
    u32 i = s->unk_02;
    if (i >= 4) {
        return NULL;
    }
    return data_ov095_02295598[i];
}

void func_ov095_02293a78(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    s32 i;
    s32 t10, t14;
    s32 z[3];
    z[0] = 0; z[1] = 0; z[2] = 0;
    for (i = 0; i < s->unk_04; i++) {
        t10 = -1;
        t14 = y;
        if (s->unk_03 == i) {
            t10 = 0xb;
            t14 = y + 2;
        }
        func_02088730(1, &data_ov095_02295e48[i], x, t14, -1, 2, z[0]);
        func_02088730(1, &data_ov095_02295e48[i + 4], x, t14, t10, 2, z[1]);
        func_02088730(1, &data_ov095_02295e48[i + 8], x, y, -1, 2, z[2]);
    }
}

void func_ov095_02293a30(void *s, s32 x, s32 y, s32 z, s32 w)
{
    func_02088730(1, data_ov095_02295588, x, y + w, z, 2, 0);
    func_02088730(1, data_ov095_02295580, x, y, -1, 2, 0);
}

BOOL func_ov095_022939f8()
{
    if (func_02087dac(data_ov095_02295588, gTouchCurX - 0x80, gTouchCurY - 0x60, 0, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_02293990(Unk_ov095_02292360 *s)
{
    s32 r = func_02087d6c(s->unk_30, 3, gTouchCurX - 0x80, gTouchCurY - 0x60, 2, 2);
    if (r == -1) {
        return FALSE;
    }
    switch (r) {
    case 0:
        r = 1;
        break;
    case 2:
        r = 2;
        break;
    case 1:
        r = 3;
        break;
    }
    if (r == s->unk_02) {
        return FALSE;
    }
    s->unk_02 = r;
    Snd_PlaySe(0x18);
    return TRUE;
}

BOOL func_ov095_0229394c(Unk_ov095_02292360 *s)
{
    s32 r = func_02087d6c((&data_ov095_02295e48[4]), s->unk_04, gTouchCurX - 0x80, gTouchCurY - 0x60, 0, 0);
    if (r == -1) {
        return FALSE;
    }
    s->unk_03 = r;
    return TRUE;
}

void func_ov095_02293944(Unk_ov095_02292360 *s)
{
    s->unk_03 = 0xff;
}

void func_ov095_02293938(Unk_ov095_02292360 *s, s32 v)
{
    s->unk_03 = v - 0x11b;
}

s32 func_ov095_02293924(Unk_ov095_02292360 *s)
{
    u32 i = s->unk_03;
    if (i >= 4) {
        return 0xff;
    }
    return s->unk_28[i];
}

void func_ov095_022938f8(void *s, s32 x, s32 y, s32 z)
{
    func_02088730(1, data_ov095_02295590, x, y, -1, z, 0);
}

void func_ov095_0229388c(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    Oam_DrawCell(1, data_ov095_02295894, x, y, s->unk_05[0], 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, data_ov095_022958bc, x, y, s->unk_05[1], 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void func_ov095_02293824(Unk_ov095_02292360 *s, s32 x, s32 y)
{
    Oam_DrawCell(1, data_ov095_02295da4, x, y, s->unk_05[0], 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, data_ov095_02295dd4, x, y, s->unk_05[1], 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

s32 func_ov095_022937e4(void *s, s32 x, s32 y, s32 idx)
{
    return Oam_DrawCell(1, (void *)data_ov095_0229605c[idx], x, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

s32 func_ov095_022937d0(void *s, s32 x, s32 y, s32 idx)
{
    return func_ov095_022937e4(s, x - 0x20, y + 0x32, idx);
}

s32 func_ov095_022937a8(Unk_ov095_02292360 *s, s32 a)
{
    s32 r;
    switch (a) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        r = func_02087e14(s->unk_30 + ((a - 0xca) << 3)) + 0x88;
        break;
    default:
        r = 0x80;
    }
    return r;
}

s32 func_ov095_0229371c(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    switch (v) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        s->unk_18 = func_ov095_022937a8(s, v);
        s->unk_1c = func_02087e0c(s->unk_30 + (v - 0xca) * 8) + 0x68;
        return 1;
    case 0xdb:
        s->unk_18 = 0x18;
        s->unk_1c = 0x54;
        if (func_ov095_02292370(s, 4) == 0) {
            s->unk_1c -= 8;
        }
        return 1;
    case 0xdc:
        s->unk_18 = 0xe8;
        s->unk_1c = 0x54;
        if (func_ov095_02292370(s, 4) == 0) {
            s->unk_1c -= 8;
        }
        return 1;
    }
    return 0;
}

s32 func_ov095_022936f4(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xde && a <= 0xe1) {
        return func_02087e14((u8 *)data_ov095_02295e48 + (a - 0xde) * 8) + 0x88;
    }
    return 0x80;
}

s32 func_ov095_02293688(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    if (v == 0xc9) {
        s->unk_18 = func_02087e14(data_ov095_02295588) + 0x98;
        s->unk_1c = func_02087e0c(data_ov095_02295588) + 0x70;
        return 1;
    }
    if (v >= 0xde && v <= 0xe1) {
        s->unk_18 = func_ov095_022936f4(s, v);
        s->unk_1c = func_02087e0c(data_ov095_02295e48) + 0x68;
        return 1;
    }
    if (func_ov095_022952b4(s, v) != 0) {
        s->unk_18 = func_ov090_02291a78(s->unk_14 - 0xcd);
        s->unk_1c = 8;
        return 1;
    }
    return 0;
}

s32 func_ov095_02293648(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    if (v == 0xd5) {
        return 1;
    }
    switch (v) {
    case 0xd6:
        s->unk_18 = 0xca;
        s->unk_1c = 0xb6;
        return 1;
    case 0xd7:
        s->unk_18 = 0x58;
        s->unk_1c = 0xb6;
        return 1;
    case 0xd8:
        s->unk_18 = 0x74;
        s->unk_1c = 0xb6;
        return 1;
    }
    return 0;
}

s32 func_ov095_02293620(Unk_ov095_02292360 *s)
{
    switch (s->unk_14) {
    case 0xd9:
        s->unk_18 = 0xc4;
        s->unk_1c = 0xb6;
        return 1;
    case 0xda:
        s->unk_18 = 0x7c;
        s->unk_1c = 0xb6;
        return 1;
    }
    return 0;
}

s32 func_ov095_022935c0(Unk_ov095_02292360 *s)
{
    s32 r = 0;
    if (func_ov095_0229371c(s) != 0) {
        return 1;
    }
    switch (s->unk_2e) {
    case 0:
        r = func_ov095_02293688(s);
        break;
    case 1:
    case 2:
        r = func_ov095_02293648(s);
        break;
    case 3:
    case 4:
    case 5:
        r = func_ov095_02293620(s);
        break;
    }
    return r;
}

s32 func_ov095_022935bc(Unk_ov095_02292360 *s)
{
}

void func_ov095_022934f8(Unk_ov095_02292360 *s)
{
    s32 v;
    if (func_ov095_022935c0(s) == 0) {
        v = s->unk_14;
        if (v >= 0x3b) {
            if (v <= 0x46) {
                s->unk_1c = 0x68;
                s->unk_18 = (s->unk_14 - 0x3b) * 0x14 + 0xe;
            } else if (v <= 0x51) {
                s->unk_1c = 0x78;
                s->unk_18 = (s->unk_14 - 0x47) * 0x14 + 0x16;
                if (s->unk_14 == 0x51) {
                    s->unk_18 += 0xa;
                }
            } else if (v <= 0x5c) {
                s->unk_1c = 0x88;
                s->unk_18 = (s->unk_14 - 0x52) * 0x14 + 0xe;
                if (s->unk_14 == 0x5c) {
                    s->unk_18 += 0xe;
                }
            } else if (v <= 0x67) {
                s->unk_1c = 0x98;
                s->unk_18 = (s->unk_14 - 0x5d) * 0x14 + 0x16;
                if (s->unk_14 == 0x5d) {
                    s->unk_18 -= 3;
                }
            } else if (v <= 0x6f) {
                s->unk_1c = 0xa8;
                v = s->unk_14;
                if (v < 0x6b) {
                    s->unk_18 = (v - 0x68) * 0x14 + 0x22;
                } else if (v == 0x6b) {
                    s->unk_18 = 0x86;
                } else {
                    s->unk_18 = (v - 0x6c) * 0x14 + 0xae;
                }
            }
        }
    }
}

void func_ov095_02293470(Unk_ov095_02292360 *s)
{
    s32 c;
    if (func_ov095_022935c0(s) == 0) {
        c = s->unk_14;
        if (c >= 0x70) {
            if (c <= 0x8d) {
                s32 d = c - 0x70;
                c = d;
                s->unk_18 = (c % 10) * 0x14 + 0x12;
                s->unk_1c = ((c / 10) * 2 + 0xe) * 8;
            } else {
                switch (c - 0x8e) {
                case 0:
                    s->unk_18 = 0xda;
                    s->unk_1c = 0x70;
                    break;
                case 1:
                    s->unk_18 = 0xee;
                    s->unk_1c = 0x70;
                    break;
                case 2:
                    s->unk_18 = 0xe4;
                    s->unk_1c = 0x88;
                    break;
                case 3:
                    s->unk_18 = 0x80;
                    s->unk_1c = 0xa0;
                    break;
                }
            }
        }
    }
}

void func_ov095_02293410(Unk_ov095_02292360 *s)
{
    s32 c, x, y;
    if (func_ov095_022935c0(s) == 0) {
        c = s->unk_14;
        if (c <= 0xc5) {
            x = ((c - 0x92) % 11) * 0x14 + 0x12;
            c -= 0x92;
            y = c / 11;
            y = y * 2 + 0xd;
            y *= 8;
        } else {
            x = 0xee;
            switch (c) {
            case 0xc6:
                y = 0x6c;
                break;
            case 0xc7:
                y = 0x8c;
                break;
            case 0xc8:
                x = 0xd0;
                y = 0xa8;
                break;
            }
        }
        s->unk_18 = x;
        s->unk_1c = y;
    }
}

void func_ov095_022933d4(Unk_ov095_02292360 *s)
{
    switch (s->unk_02) {
    case 0:
        func_ov095_022935bc(s);
        break;
    case 1:
        func_ov095_022934f8(s);
        break;
    case 2:
        func_ov095_02293470(s);
        break;
    case 3:
        func_ov095_02293410(s);
        break;
    }
}

s32 func_ov095_022933a4(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 1:
    case 2:
        s->unk_14 = 0xd6;
        break;
    case 4:
    case 5:
        s->unk_14 = 0xd9;
        break;
    }
}

void func_ov095_02293350(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 1:
        if (func_ov095_02292370(s, 8) != 0) {
            s->unk_14 = 0xd6;
        } else {
            s->unk_14 = 0xd7;
        }
        break;
    case 2:
        s->unk_14 = 0xd8;
        break;
    case 5:
        s->unk_14 = 0xda;
        break;
    case 4:
        s->unk_14 = 0xd9;
        break;
    }
}

void func_ov095_0229309c(Unk_ov095_02292360 *s, void *p)
{
    s32 c, st, lo, hi, lo2, hi2, hc, v;
    if (func_ov095_022925b4(s, p) != 0) {
        return;
    }
    st = s->unk_14;
    if (st < 0x3b) {
        goto common;
    }
    if (st <= 0x46) {
        c = 0;
        goto common;
    }
    if (st <= 0x51) {
        c = 1;
        if (st != 0x51) {
            goto common;
        }
        if (func_ov002_0220128c(p) != 0) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x45;
            } else {
                s->unk_14 = 0x46;
            }
            return;
        }
        if (func_ov002_0220127c(p) == 0) {
            goto common;
        }
        s->unk_14 = 0x5c;
        return;
    }
    if (st <= 0x5c) {
        c = 2;
        if (st != 0x5c) {
            goto common;
        }
        if (func_ov002_0220128c(p) == 0) {
            goto common;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x50;
        } else {
            s->unk_14 = 0x51;
        }
        return;
    }
    if (st <= 0x67) {
        c = 3;
        if (func_ov002_0220127c(p) == 0) {
            goto common;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14--;
        }
        if (s->unk_14 < 0x5d) {
            s->unk_14 = 0x5d;
        }
        v = s->unk_14;
        if (v <= 0x5e) {
            s->unk_14 = v + 0xb;
        } else if (v <= 0x65) {
            s->unk_14 = 0x6b;
        } else {
            s->unk_14 = v + 8;
        }
        return;
    }
    if (st > 0x6f) {
        return;
    }
    c = 4;
    if (func_ov002_0220128c(p) != 0) {
        v = s->unk_14;
        if (v == 0x6b) {
            s->unk_14 = 0x63;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14++;
            }
            return;
        }
        if (v > 0x6b) {
            s->unk_14 = v - 8;
            if (func_ov002_0220125c(p) == 0) {
                return;
            }
            v = s->unk_14;
            if (v >= 0x67) {
                return;
            }
            s->unk_14 = v + 1;
            return;
        }
        goto common;
    }
    if (func_ov002_0220127c(p) != 0) {
        if (s->unk_14 < 0x6c) {
            func_ov095_02293350(s);
        } else {
            func_ov095_022933a4(s);
        }
        return;
    }
common:
    if (func_ov002_0220128c(p) != 0) {
        if (c == 0) {
            func_ov095_02292b6c(s);
            return;
        }
        lo = data_ov095_0229560c[c - 1];
        hi = data_ov095_02295634[c - 1];
        s->unk_14 = s->unk_14 - (hi - lo + 1);
        if (c == 2) {
            s->unk_14--;
        }
        if (func_ov002_0220125c(p) != 0) {
            s->unk_14++;
        }
        v = s->unk_14;
        if (v < lo) {
            s->unk_14 = lo;
        } else if (v > hi) {
            s->unk_14 = hi;
        }
    } else if (func_ov002_0220127c(p) != 0 && c < 3) {
        lo2 = data_ov095_0229560c[c + 1];
        hi2 = data_ov095_02295634[c + 1];
        hc = data_ov095_02295634[c];
        s->unk_14 = s->unk_14 + (hc - data_ov095_0229560c[c] + 1);
        if (c == 1) {
            s->unk_14++;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14--;
        }
        v = s->unk_14;
        if (v > hi2) {
            s->unk_14 = hi2;
        } else if (v < lo2) {
            s->unk_14 = lo2;
        }
    } else {
        if (s->unk_14 == 0x6b) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x69;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14 = 0x6e;
            }
            return;
        }
        if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > data_ov095_0229560c[c]) {
                s->unk_14 = s->unk_14 - 1;
            } else {
                s->unk_2f = 1;
                s->unk_14 = data_ov095_02295634[c];
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < data_ov095_02295634[c]) {
                s->unk_14 = s->unk_14 + 1;
            } else {
                s->unk_2f = 2;
                s->unk_14 = data_ov095_0229560c[c];
            }
        }
        v = s->unk_14;
        if (v == 0x6a || (u32)(v - 0x6c) <= 1) {
            s->unk_14 = 0x6b;
        }
    }
}

void func_ov095_02292e50(Unk_ov095_02292360 *s, void *p)
{
    s32 r7, v;
    if (func_ov095_022925b4(s, p) != 0) {
        return;
    }
    v = s->unk_14;
    if (v < 0x70) {
        return;
    }
    if (v <= 0x8d) {
        s32 d = v - 0x70;
        r7 = d % 10;
        v = d / 10;
        if (func_ov002_0220128c(p) != 0) {
            if (v > 0) {
                v--;
                s->unk_14 -= 10;
            } else {
                func_ov095_02292b6c(s);
                return;
            }
        } else if (func_ov002_0220127c(p) != 0) {
            if (v < 2) {
                v++;
                s->unk_14 += 10;
            } else {
                s->unk_14 = 0x91;
                return;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (r7 > 0) {
                s->unk_14--;
                return;
            }
            s->unk_2f = 1;
            if (v == 0) {
                s->unk_14 = 0x8f;
            } else {
                s->unk_14 = 0x90;
            }
            return;
        }
        if (func_ov002_0220125c(p) == 0) {
            return;
        }
        if (r7 < 9) {
            s->unk_14++;
            return;
        }
        if (v == 0) {
            s->unk_14 = 0x8e;
        } else {
            s->unk_14 = 0x90;
        }
        return;
    }
    v -= 0x8e;
    switch (v) {
    case 0:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292b6c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x83;
            } else {
                s->unk_14 = 0x90;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x79;
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0x8f;
        }
        break;
    case 1:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292b6c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0x90;
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x8e;
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_2f = 2;
            s->unk_14 = 0x70;
        }
        break;
    case 2:
        if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = 0x8f;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            }
            break;
        }
        if (func_ov002_0220127c(p) != 0) {
            func_ov095_022933a4(s);
            if (s->unk_14 != 0x90) {
                break;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x8d;
            } else {
                s->unk_14 = 0x83;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_2f = 2;
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x84;
            } else {
                s->unk_14 = 0x7a;
            }
        }
        break;
    case 3:
        if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = 0x8a;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            func_ov095_022933a4(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02293350(s);
        }
        break;
    }
}

void func_ov095_02292c5c(Unk_ov095_02292360 *s, void *p)
{
    s32 st, lo;
    if (p == NULL) return;
    if (func_ov095_022925b4(s, p) != 0) return;
    st = s->unk_14;
    if (st < 0x92) return;
    if (st > 0xc8) return;
    if (st <= 0xc5) {
        st -= 0x92;
        lo = st % 0xb;
        st = st / 0xb;
        if (func_ov002_0220128c(p) != 0) {
            if (st > 0) {
                st--;
            } else {
                func_ov095_02292b6c(s);
                return;
            }
        } else if (func_ov002_0220127c(p) != 0) {
            if (st < 4) {
                st++;
            } else {
                func_ov095_02293350(s);
                return;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (lo > 0) {
                lo--;
            } else {
                s->unk_2f = 1;
                if (st < 2) {
                    s->unk_14 = 0xc6;
                } else if (st < 4) {
                    s->unk_14 = 0xc7;
                } else {
                    s->unk_14 = 0xc8;
                }
                return;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (lo < 10) {
                lo++;
            } else {
                if (st < 2) {
                    s->unk_14 = 0xc6;
                } else if (st < 4) {
                    s->unk_14 = 0xc7;
                } else {
                    s->unk_14 = 0xc8;
                }
                return;
            }
        }
        st = lo + st * 0xb + 0x92;
        if (st > 0xc5) st = 0xc8;
        s->unk_14 = st;
        return;
    }
    if (func_ov002_0220125c(p) != 0) {
        s->unk_2f = 2;
        switch (s->unk_14) {
        case 0xc6:
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x9d;
            } else {
                s->unk_14 = 0x92;
            }
            break;
        case 0xc7:
            if (func_ov002_0220128c(p) != 0) {
                s->unk_14 = 0x9d;
            } else if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xb3;
            } else {
                s->unk_14 = 0xa8;
            }
            break;
        case 0xc8:
            s->unk_14 = 0xbe;
            break;
        }
    } else if (func_ov002_0220126c(p) != 0) {
        switch (s->unk_14) {
        case 0xc6:
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xa7;
            } else {
                s->unk_14 = 0x9c;
            }
            break;
        case 0xc7:
            if (func_ov002_0220128c(p) != 0) {
                s->unk_14 = 0xa7;
            } else if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xbd;
            } else {
                s->unk_14 = 0xb2;
            }
            break;
        case 0xc8:
            s->unk_14 = 0xc5;
            break;
        }
    } else if (func_ov002_0220128c(p) != 0) {
        st = s->unk_14;
        if (st == 0xc6) {
            func_ov095_02292b6c(s);
        } else if (st == 0xc7) {
            s->unk_14 = 0xc6;
        } else {
            s->unk_14 = 0xbd;
        }
    } else if (func_ov002_0220127c(p) != 0) {
        if (s->unk_14 < 0xc8) {
            s->unk_14++;
        } else {
            func_ov095_022933a4(s);
        }
    }
}

void func_ov095_02292c0c(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 0:
        if (s->unk_14 == 0xdc) {
            s->unk_14 = 0xc9;
        } else {
            func_ov095_02292368(s, 0x10);
        }
        break;
    case 1:
    case 2:
        s->unk_14 = 0xd5;
        break;
    case 3:
    case 4:
    case 5:
        func_ov095_02292368(s, 0x10);
        break;
    }
}

void func_ov095_02292b84(Unk_ov095_02292360 *s, s32 a)
{
    s32 best, d, i;
    if (a < 0x80) {
        s->unk_14 = 0xdb;
        best = a - 0x18;
    } else {
        s->unk_14 = 0xdc;
        best = a - 0xe8;
    }
    for (i = 0; i < 3; i++) {
        d = a - func_ov095_022937a8(s, i + 0xca);
        if (d < 0) d = -d;
        if (d < best) {
            best = d;
            s->unk_14 = i + 0xca;
        }
    }
    if (func_ov095_02292370(s, 4) != 0) {
        if (best < 0) best = -best;
        for (i = 0; i < s->unk_04; i++) {
            d = a - func_ov095_022936f4(s, i + 0xde);
            if (d < 0) d = -d;
            if (d < best) {
                best = d;
                s->unk_14 = i + 0xde;
            }
        }
    }
}

void func_ov095_02292b6c(Unk_ov095_02292360 *s)
{
    func_ov095_02292b84(s, func_ov095_02292580(s));
}

void func_ov095_02292b08(Unk_ov095_02292360 *s, s32 a)
{
    u32 mode = s->unk_02;
    u32 off = mode << 2;
    s32 lo = *(s32 *)((u8 *)data_ov095_02295484 + off);
    s32 v;
    if (a < lo) {
        if (mode == 0) {
            s->unk_14 = 0x32;
            func_ov095_022933d4(s);
            return;
        }
        a = lo;
    }
    v = (a - lo) / 0x14;
    if (mode == 0) {
        v *= 5;
    }
    a = v + data_ov095_02295474[mode];
    if (a > data_ov095_02295454[mode]) {
        a = *(s32 *)((u8 *)data_ov095_02295464 + off);
    }
    s->unk_14 = a;
    func_ov095_022933d4(s);
}

void func_ov095_02292af4(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02292b84(s, a);
    func_ov095_022933d4(s);
}

void func_ov095_02292ad8(Unk_ov095_02292360 *s, s32 a)
{
    s->unk_14 = func_ov090_02291944(a) + 0xcd;
    func_ov095_022933d4(s);
}

void func_ov095_02292acc(Unk_ov095_02292360 *s)
{
    s->unk_14 = 0xc9;
    func_ov095_022933d4(s);
}

void func_ov095_02292ab8(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02292b84(s, a);
    func_ov095_022933d4(s);
}

BOOL func_ov095_022928dc(Unk_ov095_02292360 *s, void *p)
{
    switch (s->unk_14) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < 0xcc) {
                s->unk_14++;
            } else if (s->unk_04 != 0) {
                s->unk_14 = 0xde;
            } else {
                s->unk_14 = 0xdc;
            }
            return TRUE;
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xca) {
                s->unk_14--;
            } else {
                s->unk_14 = 0xdb;
            }
            return TRUE;
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        }
        return TRUE;
    case 0xdb:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xca;
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0xdc;
            s->unk_2f = 1;
        }
        return TRUE;
    case 0xdc:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_04 != 0) {
                s->unk_14 = s->unk_04 + 0xdd;
            } else {
                s->unk_14 = 0xcc;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xdb;
            s->unk_2f = 2;
        }
        return TRUE;
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xde) {
                s->unk_14--;
            } else {
                s->unk_14 = 0xcc;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < s->unk_04 + 0xdd) {
                s->unk_14++;
            } else {
                s->unk_14 = 0xdc;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_02292830(Unk_ov095_02292360 *s, void *p)
{
    if (s->unk_14 == 0xc9) {
        if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0xdc;
        } else if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = func_ov090_02291944(s->unk_18) + 0xcd;
        } else if (func_ov002_0220126c(p) != 0) {
            func_ov095_02292368(s, 0x10);
        }
        return TRUE;
    }
    if (func_ov095_022952b4(s, s->unk_14) != 0) {
        if (func_ov002_0220127c(p) != 0) {
            if (s->unk_14 >= 0xd3) {
                s->unk_14 = 0xc9;
            } else {
                func_ov095_02292368(s, 0x10);
            }
            return TRUE;
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < 0xd4) {
                s->unk_14++;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xcd) {
                s->unk_14--;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022926dc(Unk_ov095_02292360 *s, void *p)
{
    s32 st = s->unk_14;
    if (st == 0xd5) {
        if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0xdc;
        }
        return TRUE;
    }
    switch (st) {
    case 0xd6:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x2c;
                break;
            case 1:
                s->unk_14 = 0x6e;
                break;
            case 2:
                s->unk_14 = 0x90;
                break;
            case 3:
                s->unk_14 = 0xc8;
                break;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            func_ov095_02293350(s);
        }
        return TRUE;
    case 0xd7:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0xe;
                break;
            case 1:
                s->unk_14 = 0x69;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc0;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd6;
        }
        return TRUE;
    case 0xd8:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x13;
                break;
            case 1:
                s->unk_14 = 0x6b;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc2;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd6;
        }
        return TRUE;
    default:
        if (st == 0xd7 || st == 0xd8) {
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xd5;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14 = 0xd6;
            }
            return TRUE;
        }
        return FALSE;
    }
}

BOOL func_ov095_02292614(Unk_ov095_02292360 *s, void *p)
{
    if (s->unk_14 == 0xd9) {
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x2c;
                break;
            case 1:
                s->unk_14 = 0x6e;
                break;
            case 2:
                s->unk_14 = 0x90;
                break;
            case 3:
                s->unk_14 = 0xc8;
                break;
            }
        } else if (s->unk_2e == 5) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0xda;
            }
        }
        return TRUE;
    } else if (s->unk_14 == 0xda) {
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x18;
                break;
            case 1:
                s->unk_14 = 0x6b;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc3;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd9;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022925b4(Unk_ov095_02292360 *s, void *p)
{
    BOOL r;
    if (func_ov095_022928dc(s, p) != 0) {
        return TRUE;
    }
    r = FALSE;
    switch (s->unk_2e) {
    case 0:
        r = func_ov095_02292830(s, p);
        break;
    case 1:
    case 2:
        r = func_ov095_022926dc(s, p);
        break;
    case 3:
        break;
    case 4:
    case 5:
        r = func_ov095_02292614(s, p);
        break;
    }
    return r;
}

s32 func_ov095_02292580(Unk_ov095_02292360 *s)
{
    if (s->unk_14 == 0xd5) {
        s->unk_18 = s->unk_20;
    }
    switch (s->unk_2f) {
    case 1:
        return s->unk_18 - 0x100;
    case 2:
        return s->unk_18 + 0x100;
    }
    return s->unk_18;
}

s32 func_ov095_02292544(Unk_ov095_02292360 *s)
{
    if (s->unk_14 == 0xd5) {
        s->unk_1c = s->unk_24;
        return s->unk_1c;
    }
    if (func_ov095_02294a2c(s, s->unk_14) != -1) {
        return s->unk_1c;
    }
    if (func_ov095_02292370(s, 4) == 0) {
        return s->unk_1c - 8;
    }
    return s->unk_1c;
}

void func_ov095_0229253c(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    s->unk_20 = a;
    s->unk_24 = b;
}

void func_ov095_022924f0(Unk_ov095_02292360 *s)
{
    switch (s->unk_02) {
    case 0:
        s->unk_14 = 0;
        func_ov095_022935bc(s);
        break;
    case 1:
        s->unk_14 = 0x3b;
        func_ov095_022934f8(s);
        break;
    case 2:
        s->unk_14 = 0x70;
        func_ov095_02293470(s);
        break;
    case 3:
        s->unk_14 = 0x92;
        func_ov095_02293410(s);
        break;
    }
}

s32 func_ov095_02292458(Unk_ov095_02292360 *s, void *p)
{
    s32 old = s->unk_14;
    s->unk_2f = 0;
    func_ov095_02292360(s, 0x10);
    switch (s->unk_02) {
    case 0:
        break;
    case 1:
        func_ov095_0229309c(s, p);
        break;
    case 2:
        func_ov095_02292e50(s, p);
        break;
    case 3:
        func_ov095_02292c5c(s, p);
        break;
    }
    if (func_ov095_02292370(s, 0x10) != 0) {
        return 4;
    }
    if (old != s->unk_14) {
        func_ov095_022933d4(s);
        if (func_ov095_022952a0(s, s->unk_14) != 0) {
            return 2;
        }
        if (func_ov095_02295270(s, s->unk_14) != 0) {
            return 3;
        }
        return 1;
    }
    return 0;
}

s32 func_ov095_02292404(Unk_ov095_02292360 *s)
{
    s32 st;
    if (func_ov095_022952c4(s, s->unk_14) != 0) {
        return -1;
    }
    st = s->unk_14;
    switch (st) {
    case 0xca:
        if (s->unk_02 == 1) return -1;
        break;
    case 0xcc:
        if (s->unk_02 == 2) return -1;
        break;
    case 0xcb:
        if (s->unk_02 == 3) return -1;
        break;
    }
    s->unk_10 = st;
    return s->unk_14;
}

void func_ov095_022923f8()
{
    Snd_PlaySe(0x16);
}

void func_ov095_022923ec()
{
    Snd_PlaySe(0x17);
}

void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x200) == 0) {
        func_ov095_02292368(s, 0x200);
        s32 r = Text_GetCharSortKey(a);
        switch (r) {
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
            r = data_020ca488;
        }
        if (r != data_020ca488) {
            Snd_PlayKeySe(r);
        } else {
            Snd_PlayKeySe(0x2c);
        }
    }
}

BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m)
{
    if (s->flags & m) return TRUE;
    return FALSE;
}

void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m)
{
    s->flags |= m;
}

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m)
{
    s->flags &= ~m;
}


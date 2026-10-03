#include "types.h"

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fc44();
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fa4c();
    u32 pad[0x10];
};

class MsgString {
public:
    void setLine(u8 *s);
};

class MsgString193 {
public:
    MsgString193();
    ~MsgString193();
    u32 pad[0xd4 / 4];
};

class BgVramTask {
public:
    BgVramTask();
    void cancel();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    u32 pad[9];
};

extern "C" {
void Gfx2d_HideLayer(s32 a);
s32 Gfx2d_GetMainPlanes();
void Gfx2d_EnableMainWindows(s32 a);
void Gfx2d_SetMainWin0Planes(s32 a);
void Gfx2d_SetMainWinOutPlanes(s32 a);
void Gfx2d_SetWindowRect(s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetMainAlphaBlend(s32 a, s32 b, s32 c);
void Gfx2d_ResetMainBlend();
void Gfx2d_DisableMainWindows(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const char *a, void *b, s32 c);
void Gfx2d_LoadPaletteFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void File_LoadToBuffer(const char *a, void *b, s32 c);
void String_Load(void *a, u8 *b, const char *c);
s8 *Msg_SkipLines(void *a, s32 b);
void MIi_CpuCopy16(void *a, void *b, s32 c);
void MIi_CpuClear16(u32 a, void *b, s32 c);

extern void *gCurrentHeap;
extern char *sStaffRollPalettePath;
extern char *sStaffRollLogoCharPath;
}

struct StaffRollLayer {
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void reset();
    StaffRollLayer();
    ~StaffRollLayer();

    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08[0x800];
};

class StaffRoll {
public:
    StaffRoll();
    ~StaffRoll();
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void loadLogo();
    void resetLabels();
    Unk_020e0488 *allocLabel();
    void scroll(BOOL b);
    void fillNextRow(s32 a, StaffRollLayer *s);
    s8 *getLine(s32 i);
    void copyTemplateRow(u8 *src, u32 dstRow, u32 srcRow);
    void clearRow(u8 *dst, u32 row);
    void scrollLayer(s32 which, s32 y);
    BOOL isFinished();
    void startLogo();
    void hide();
    void start(s32 a);
    void loadTextGraphics();
    void loadTemplate();
    void stop();
    void uploadScreens();
    void update();
    void init();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ u8 unk_04;
    /* 0x0005 */ u8 unk_05;
    /* 0x0006 */ u8 unk_06;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ s32 unk_0c;
    /* 0x0010 */ s32 unk_10;
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ StaffRollLayer unk_18;
    /* 0x0820 */ StaffRollLayer unk_820;
    /* 0x1028 */ u16 unk_1028[0x400];
    /* 0x1828 */ MsgString193 unk_1828;
    /* 0x18fc */ Unk_020e0488 unk_18fc[26];
    /* 0x1f7c */ BgVramTask unk_1f7c[2];
};

StaffRoll::StaffRoll()
{
}

StaffRoll::~StaffRoll()
{
}

void StaffRoll::init()
{
    unk_00 = 0;
    unk_04 = 0;
    Gfx2d_HideLayer(4);
    Gfx2d_HideLayer(0);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    vu16 *r = (vu16 *)0x400000a;
    *r = (*r & 0x43) | 0x700;
    unk_05 = 0;
    loadTemplate();
}

void StaffRoll::update()
{
    s32 v;
    resetLabels();
    switch (unk_05) {
    case 1:
        unk_05 = 2;
        Gfx2d_ShowLayer(4);
        Gfx2d_ShowLayer(0);
        Gfx2d_SetLayerOffset(4, 8, -0xc0);
        Gfx2d_SetLayerOffset(0, 8, -0xc0);
        loadTextGraphics();
        break;
    case 2:
        scroll(TRUE);
        break;
    case 3:
        scroll(FALSE);
        Gfx2d_ShowLayer(0);
        Gfx2d_SetMainAlphaBlend(2, 0x21, 0);
        loadLogo();
        unk_05 = 5;
        break;
    case 4:
        scroll(FALSE);
        Gfx2d_ShowLayer(0);
        loadLogo();
        unk_05 = 6;
        break;
    case 5: {
        scroll(FALSE);
        u32 c = unk_06;
        if (c < 0x48) {
            if (c >= 0x10) {
                if (c < 0x38) {
                    c = 0x10;
                } else {
                    c = 0x48 - c;
                }
            }
            *(volatile u8 *)&unk_06 = *(volatile u8 *)&unk_06 + 1;
            Gfx2d_SetMainAlphaBlend(2, 0x21, c);
        } else {
            hide();
            Gfx2d_ResetMainBlend();
            setFlags(8);
        }
        break;
    }
    case 6:
        scroll(FALSE);
        unk_0c = unk_0c + unk_14;
        v = unk_0c >> 12;
        if (v >= 0) {
            v = 0;
            unk_06 = 0x10;
            Gfx2d_DisableMainWindows(1);
            Gfx2d_SetMainWinOutPlanes(0x1f);
            unk_05 = 5;
        } else {
            Gfx2d_SetWindowRect(0, 0, -v, 0xfe, 0xbf);
        }
        Gfx2d_SetLayerOffset(0, 0, v);
        break;
    }
}

void StaffRoll::uploadScreens()
{
    if (unk_820.testFlags(2)) {
        if (unk_1f7c[0].requestScreen((u32)unk_820.unk_08, 4, 0x800, 0)) {
            unk_820.clearFlags(2);
        }
    }
    if (unk_18.testFlags(2)) {
        if (unk_1f7c[1].requestScreen((u32)unk_18.unk_08, 0, 0x800, 0)) {
            unk_18.clearFlags(2);
        }
    }
}

void StaffRoll::stop()
{
    hide();
    resetLabels();
}

void StaffRoll::loadTemplate()
{
    File_LoadToBuffer("menu/staff/bg.bsc", unk_1028, 0x800);
}

void StaffRoll::loadTextGraphics()
{
    void *h = gCurrentHeap;
    Gfx2d_LoadPaletteFile(sStaffRollPalettePath, h, 4, 1, 1, 3);
    Gfx2d_LoadPaletteFile(sStaffRollPalettePath, h, 0, 1, 1, 3);
    Gfx2d_LoadCharFile(sStaffRollLogoCharPath, h, 4, 0x10, 0x10, 0x10);
    Gfx2d_LoadCharFile(sStaffRollLogoCharPath, h, 0, 0x10, 0x10, 0x10);
}

void StaffRoll::start(s32 a)
{
    volatile u16 t[2];
    unk_10 = a;
    unk_14 = 0x2000;
    unk_08 = 0;
    unk_18.reset();
    unk_820.reset();
    t[0] = unk_1028[0];
    MIi_CpuClear16(t[0], unk_18.unk_08, 0x800);
    t[1] = unk_1028[0];
    MIi_CpuClear16(t[1], unk_820.unk_08, 0x800);
    unk_05 = 1;
}

void StaffRoll::hide()
{
    Gfx2d_HideLayer(4);
    Gfx2d_HideLayer(0);
    unk_05 = 0;
}

void StaffRoll::startLogo()
{
    Gfx2d_HideLayer(0);
    s32 v = Gfx2d_GetMainPlanes();
    vu32 *r = (vu32 *)0x4000000;
    *r = (*r & ~0x1f00) | (v << 8);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(0x1d);
    Gfx2d_SetWindowRect(0, 0, 0x78, 0xfe, 0xbf);
    Gfx2d_SetLayerOffset(0, 0, -0x78);
    unk_05 = 4;
    unk_06 = 0;
    unk_0c = 0xfff88000;
}

BOOL StaffRoll::isFinished()
{
    return testFlags(8);
}

void StaffRoll::scrollLayer(s32 which, s32 y)
{
    StaffRollLayer *s;
    if (y >= 0) {
        s32 lim = (y >> 3) + 1;
        if (which == 4) {
            s = &unk_820;
        } else {
            s = &unk_18;
        }
        for (; lim > s->unk_00;) {
            fillNextRow(which, s);
            s->setFlags(2);
        }
        Gfx2d_SetLayerOffset(which, 8, y - 0xc0);
    }
}

void StaffRoll::clearRow(u8 *dst, u32 row)
{
    volatile u16 t = unk_1028[0];
    MIi_CpuClear16(t, dst + row * 0x40, 0x40);
}

void StaffRoll::copyTemplateRow(u8 *src, u32 dstRow, u32 srcRow)
{
    MIi_CpuCopy16((u8 *)unk_1028 + dstRow * 0x40, src + srcRow * 0x40, 0x40);
}

s8 *StaffRoll::getLine(s32 i)
{
    s32 q = i / 6;
    u8 b = q;
    String_Load((u8 *)&unk_1828 + 0, &b, "st_staffroll");
    return Msg_SkipLines((u8 *)this + 0x183a, i - q * 6);
}

void StaffRoll::fillNextRow(s32 a, StaffRollLayer *s)
{
    s32 t = s->unk_02;
    if (t < 0) {
        s->unk_02 = 0;
        s->unk_00 = 0;
        s->unk_04 = 0;
    } else if (t >= 0xde) {
        if (s->unk_06 < 0xd) {
            s->unk_06++;
        } else {
            s->setFlags(4);
        }
        clearRow(s->unk_08, s->unk_00 & 0x1f);
        s->unk_00 = s->unk_00 + 1;
        return;
    }
    if (s->unk_04 >= 0x19) {
        s->unk_04 = 0;
    }
    s8 *p = getLine(s->unk_02);
    BOOL end;
    if (p == NULL) {
        end = TRUE;
    } else {
        end = FALSE;
    }
    if (!end) {
        s32 c = *p;
        if (c == 0xa || c == 0) {
            end = TRUE;
            s->setFlags(1);
        }
    }
    if (end) {
        s32 i;
        for (i = 0; i < 2; i++) {
            clearRow(s->unk_08, s->unk_00 & 0x1f);
            s->unk_00 = s->unk_00 + 1;
        }
        s->unk_02 = s->unk_02 + 1;
        if (s->unk_06 < 0xd) {
            s->unk_06++;
        } else {
            s->setFlags(4);
        }
    } else {
        s->unk_06 = 0;
        if (p[0] == 0x20 && p[1] == 0xa) {
            s->clearFlags(1);
        }
        if (s->testFlags(1)) {
            s->clearFlags(1);
            copyTemplateRow(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            Unk_020e0488 *e = allocLabel();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
            p = getLine(s->unk_02);
            if (p == NULL || p[0] == 0xa || p[0] == 0) {
                s->unk_02 = s->unk_02 + 1;
                return;
            }
            copyTemplateRow(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            e = allocLabel();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
        } else if (p[0] == 0x20 && p[1] == 0xa) {
            Unk_020e0488 *e = allocLabel();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
        } else {
            copyTemplateRow(s->unk_08, s->unk_04, s ? (s->unk_00 & 0x1f) : (s->unk_00 & 0x1f));
            s->unk_00 = s->unk_00 + 1;
            s->unk_04 = s->unk_04 + 1;
            copyTemplateRow(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            s->unk_00 = s->unk_00 + 1;
            s->unk_04 = s->unk_04 + 1;
            Unk_020e0488 *e = allocLabel();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb9c(a, (s->unk_04 - 2) * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fa4c();
            s->unk_02 = s->unk_02 + 1;
        }
    }
}

void StaffRoll::scroll(BOOL b)
{
    s32 v;
    unk_08 = unk_08 + unk_10;
    v = unk_08 >> 12;
    scrollLayer(4, v - 0xc0);
    if (b) {
        scrollLayer(0, v);
    }
}

Unk_020e0488 *StaffRoll::allocLabel()
{
    if (unk_04 >= 26) {
        return &unk_18fc[25] + 0;
    }
    unk_04++;
    return &unk_18fc[unk_04 - 1];
}

void StaffRoll::resetLabels()
{
    s32 i;
    unk_04 = 0;
    for (i = 0; i < 26; i++) {
        unk_18fc[i].func_0206fc44();
    }
    for (i = 0; i < 2; i++) {
        unk_1f7c[i].cancel();
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" char *sStaffRollLogoCharPath;
extern "C" char data_ov093_0229225c[];
extern "C" char *sStaffRollPalettePath;

void StaffRoll::loadLogo()
{
    void *h = gCurrentHeap;
    Gfx2d_LoadScreenFile("menu/staff/logo.bsc", h, 0);
    Gfx2d_LoadCharFile(sStaffRollLogoCharPath, h, 0, 0x10, 0x10, 0x78);
    Gfx2d_LoadCharFile("menu/staff/logo1.bch", h, 0, 0x79, 0x79, 0xf0);
    Gfx2d_LoadCharFile("menu/staff/logo2.bch", h, 0, 0xf1, 0xf1, 0x15f);
}

StaffRollLayer::StaffRollLayer() {}

StaffRollLayer::~StaffRollLayer() {}

void StaffRollLayer::reset()
{
    unk_00 = -1;
    unk_02 = -1;
    unk_05 = 0;
    unk_06 = 0;
    setFlags(3);
}

BOOL StaffRollLayer::testFlags(u32 m)
{
    if ((unk_05 & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void StaffRollLayer::setFlags(u32 m)
{
    unk_05 |= m;
}

void StaffRollLayer::clearFlags(u32 m)
{
    unk_05 &= ~m;
}

BOOL StaffRoll::testFlags(u32 m)
{
    if ((unk_00 & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void StaffRoll::setFlags(u32 m)
{
    unk_00 |= m;
}

extern "C" char data_ov093_0229225c[] = "menu/staff/logo.bch";

extern "C" char *sStaffRollLogoCharPath = data_ov093_0229225c;
extern "C" char *sStaffRollPalettePath = "menu/staff/sfr.bpl";

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

class Unk_020e0574 {
public:
    Unk_020e0574();
    ~Unk_020e0574();
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
extern char *data_ov093_02292240;
extern char *data_ov093_02292244;
}

struct Unk_ov093_022918f8 {
    void func_022918f8(u32 m);
    void func_02291900(u32 m);
    BOOL func_02291908(u32 m);
    void func_02291918();
    Unk_ov093_022918f8();
    ~Unk_ov093_022918f8();

    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08[0x800];
};

class Unk_ov093_022918e0 {
public:
    Unk_ov093_022918e0();
    ~Unk_ov093_022918e0();
    void func_022918e0(u32 m);
    BOOL func_022918e8(u32 m);
    void func_02291938();
    void func_022919a4();
    Unk_020e0488 *func_022919e4();
    void func_02291a0c(BOOL b);
    void func_02291a3c(s32 a, Unk_ov093_022918f8 *s);
    s8 *func_02291cf8(s32 i);
    void func_02291d3c(u8 *src, u32 dstRow, u32 srcRow);
    void func_02291d5c(u8 *dst, u32 row);
    void func_02291d80(s32 which, s32 y);
    BOOL func_02291dd8();
    void func_02291de4();
    void func_02291e50();
    void func_02291e6c(s32 a);
    void func_02291ed4();
    void func_02291f3c();
    void func_02291f5c();
    void func_02291f70();
    void func_02291ff0();
    void func_0229212c();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ u8 unk_04;
    /* 0x0005 */ u8 unk_05;
    /* 0x0006 */ u8 unk_06;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ s32 unk_0c;
    /* 0x0010 */ s32 unk_10;
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ Unk_ov093_022918f8 unk_18;
    /* 0x0820 */ Unk_ov093_022918f8 unk_820;
    /* 0x1028 */ u16 unk_1028[0x400];
    /* 0x1828 */ Unk_020e0574 unk_1828;
    /* 0x18fc */ Unk_020e0488 unk_18fc[26];
    /* 0x1f7c */ BgVramTask unk_1f7c[2];
};

Unk_ov093_022918e0::Unk_ov093_022918e0()
{
}

Unk_ov093_022918e0::~Unk_ov093_022918e0()
{
}

void Unk_ov093_022918e0::func_0229212c()
{
    unk_00 = 0;
    unk_04 = 0;
    Gfx2d_HideLayer(4);
    Gfx2d_HideLayer(0);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    vu16 *r = (vu16 *)0x400000a;
    *r = (*r & 0x43) | 0x700;
    unk_05 = 0;
    func_02291f3c();
}

void Unk_ov093_022918e0::func_02291ff0()
{
    s32 v;
    func_022919a4();
    switch (unk_05) {
    case 1:
        unk_05 = 2;
        Gfx2d_ShowLayer(4);
        Gfx2d_ShowLayer(0);
        Gfx2d_SetLayerOffset(4, 8, -0xc0);
        Gfx2d_SetLayerOffset(0, 8, -0xc0);
        func_02291ed4();
        break;
    case 2:
        func_02291a0c(TRUE);
        break;
    case 3:
        func_02291a0c(FALSE);
        Gfx2d_ShowLayer(0);
        Gfx2d_SetMainAlphaBlend(2, 0x21, 0);
        func_02291938();
        unk_05 = 5;
        break;
    case 4:
        func_02291a0c(FALSE);
        Gfx2d_ShowLayer(0);
        func_02291938();
        unk_05 = 6;
        break;
    case 5: {
        func_02291a0c(FALSE);
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
            func_02291e50();
            Gfx2d_ResetMainBlend();
            func_022918e0(8);
        }
        break;
    }
    case 6:
        func_02291a0c(FALSE);
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

void Unk_ov093_022918e0::func_02291f70()
{
    if (unk_820.func_02291908(2)) {
        if (unk_1f7c[0].requestScreen((u32)unk_820.unk_08, 4, 0x800, 0)) {
            unk_820.func_022918f8(2);
        }
    }
    if (unk_18.func_02291908(2)) {
        if (unk_1f7c[1].requestScreen((u32)unk_18.unk_08, 0, 0x800, 0)) {
            unk_18.func_022918f8(2);
        }
    }
}

void Unk_ov093_022918e0::func_02291f5c()
{
    func_02291e50();
    func_022919a4();
}

void Unk_ov093_022918e0::func_02291f3c()
{
    File_LoadToBuffer("menu/staff/bg.bsc", unk_1028, 0x800);
}

void Unk_ov093_022918e0::func_02291ed4()
{
    void *h = gCurrentHeap;
    Gfx2d_LoadPaletteFile(data_ov093_02292240, h, 4, 1, 1, 3);
    Gfx2d_LoadPaletteFile(data_ov093_02292240, h, 0, 1, 1, 3);
    Gfx2d_LoadCharFile(data_ov093_02292244, h, 4, 0x10, 0x10, 0x10);
    Gfx2d_LoadCharFile(data_ov093_02292244, h, 0, 0x10, 0x10, 0x10);
}

void Unk_ov093_022918e0::func_02291e6c(s32 a)
{
    volatile u16 t[2];
    unk_10 = a;
    unk_14 = 0x2000;
    unk_08 = 0;
    unk_18.func_02291918();
    unk_820.func_02291918();
    t[0] = unk_1028[0];
    MIi_CpuClear16(t[0], unk_18.unk_08, 0x800);
    t[1] = unk_1028[0];
    MIi_CpuClear16(t[1], unk_820.unk_08, 0x800);
    unk_05 = 1;
}

void Unk_ov093_022918e0::func_02291e50()
{
    Gfx2d_HideLayer(4);
    Gfx2d_HideLayer(0);
    unk_05 = 0;
}

void Unk_ov093_022918e0::func_02291de4()
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

BOOL Unk_ov093_022918e0::func_02291dd8()
{
    return func_022918e8(8);
}

void Unk_ov093_022918e0::func_02291d80(s32 which, s32 y)
{
    Unk_ov093_022918f8 *s;
    if (y >= 0) {
        s32 lim = (y >> 3) + 1;
        if (which == 4) {
            s = &unk_820;
        } else {
            s = &unk_18;
        }
        for (; lim > s->unk_00;) {
            func_02291a3c(which, s);
            s->func_02291900(2);
        }
        Gfx2d_SetLayerOffset(which, 8, y - 0xc0);
    }
}

void Unk_ov093_022918e0::func_02291d5c(u8 *dst, u32 row)
{
    volatile u16 t = unk_1028[0];
    MIi_CpuClear16(t, dst + row * 0x40, 0x40);
}

void Unk_ov093_022918e0::func_02291d3c(u8 *src, u32 dstRow, u32 srcRow)
{
    MIi_CpuCopy16((u8 *)unk_1028 + dstRow * 0x40, src + srcRow * 0x40, 0x40);
}

s8 *Unk_ov093_022918e0::func_02291cf8(s32 i)
{
    s32 q = i / 6;
    u8 b = q;
    String_Load((u8 *)&unk_1828 + 0, &b, "st_staffroll");
    return Msg_SkipLines((u8 *)this + 0x183a, i - q * 6);
}

void Unk_ov093_022918e0::func_02291a3c(s32 a, Unk_ov093_022918f8 *s)
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
            s->func_02291900(4);
        }
        func_02291d5c(s->unk_08, s->unk_00 & 0x1f);
        s->unk_00 = s->unk_00 + 1;
        return;
    }
    if (s->unk_04 >= 0x19) {
        s->unk_04 = 0;
    }
    s8 *p = func_02291cf8(s->unk_02);
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
            s->func_02291900(1);
        }
    }
    if (end) {
        s32 i;
        for (i = 0; i < 2; i++) {
            func_02291d5c(s->unk_08, s->unk_00 & 0x1f);
            s->unk_00 = s->unk_00 + 1;
        }
        s->unk_02 = s->unk_02 + 1;
        if (s->unk_06 < 0xd) {
            s->unk_06++;
        } else {
            s->func_02291900(4);
        }
    } else {
        s->unk_06 = 0;
        if (p[0] == 0x20 && p[1] == 0xa) {
            s->func_022918f8(1);
        }
        if (s->func_02291908(1)) {
            s->func_022918f8(1);
            func_02291d3c(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            Unk_020e0488 *e = func_022919e4();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
            p = func_02291cf8(s->unk_02);
            if (p == NULL || p[0] == 0xa || p[0] == 0) {
                s->unk_02 = s->unk_02 + 1;
                return;
            }
            func_02291d3c(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            e = func_022919e4();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
        } else if (p[0] == 0x20 && p[1] == 0xa) {
            Unk_020e0488 *e = func_022919e4();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb48(a, s->unk_04 * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fab4(0, 0);
            s->unk_04 = s->unk_04 + 1;
            s->unk_02 = s->unk_02 + 1;
            s->unk_00 = s->unk_00 + 1;
        } else {
            func_02291d3c(s->unk_08, s->unk_04, s ? (s->unk_00 & 0x1f) : (s->unk_00 & 0x1f));
            s->unk_00 = s->unk_00 + 1;
            s->unk_04 = s->unk_04 + 1;
            func_02291d3c(s->unk_08, s->unk_04, s->unk_00 & 0x1f);
            s->unk_00 = s->unk_00 + 1;
            s->unk_04 = s->unk_04 + 1;
            Unk_020e0488 *e = func_022919e4();
            ((MsgString *)e)->setLine((u8 *)p);
            e->func_0206fb9c(a, (s->unk_04 - 2) * 16 + 0x11, 0x10, 1, 0, 0);
            e->func_0206fa4c();
            s->unk_02 = s->unk_02 + 1;
        }
    }
}

void Unk_ov093_022918e0::func_02291a0c(BOOL b)
{
    s32 v;
    unk_08 = unk_08 + unk_10;
    v = unk_08 >> 12;
    func_02291d80(4, v - 0xc0);
    if (b) {
        func_02291d80(0, v);
    }
}

Unk_020e0488 *Unk_ov093_022918e0::func_022919e4()
{
    if (unk_04 >= 26) {
        return &unk_18fc[25] + 0;
    }
    unk_04++;
    return &unk_18fc[unk_04 - 1];
}

void Unk_ov093_022918e0::func_022919a4()
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
extern "C" char *data_ov093_02292244;
extern "C" char data_ov093_0229225c[];
extern "C" char *data_ov093_02292240;

void Unk_ov093_022918e0::func_02291938()
{
    void *h = gCurrentHeap;
    Gfx2d_LoadScreenFile("menu/staff/logo.bsc", h, 0);
    Gfx2d_LoadCharFile(data_ov093_02292244, h, 0, 0x10, 0x10, 0x78);
    Gfx2d_LoadCharFile("menu/staff/logo1.bch", h, 0, 0x79, 0x79, 0xf0);
    Gfx2d_LoadCharFile("menu/staff/logo2.bch", h, 0, 0xf1, 0xf1, 0x15f);
}

Unk_ov093_022918f8::Unk_ov093_022918f8() {}

Unk_ov093_022918f8::~Unk_ov093_022918f8() {}

void Unk_ov093_022918f8::func_02291918()
{
    unk_00 = -1;
    unk_02 = -1;
    unk_05 = 0;
    unk_06 = 0;
    func_02291900(3);
}

BOOL Unk_ov093_022918f8::func_02291908(u32 m)
{
    if ((unk_05 & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov093_022918f8::func_02291900(u32 m)
{
    unk_05 |= m;
}

void Unk_ov093_022918f8::func_022918f8(u32 m)
{
    unk_05 &= ~m;
}

BOOL Unk_ov093_022918e0::func_022918e8(u32 m)
{
    if ((unk_00 & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov093_022918e0::func_022918e0(u32 m)
{
    unk_00 |= m;
}

extern "C" char data_ov093_0229225c[] = "menu/staff/logo.bch";

extern "C" char *data_ov093_02292244 = data_ov093_0229225c;
extern "C" char *data_ov093_02292240 = "menu/staff/sfr.bpl";

#include "types.h"
#include "text/Unk_02050288.h"

// ---- Classes defined in other files (declarations only) ----

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 appendString(MsgString *other);
    u8 append(u8 *str);
    u8 setLine(u8 *str);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// 0x2c bytes (ctor func_020b4154, dtor func_020b413c)
class MsgString25 : public MsgString {
public:
    MsgString25();
    virtual ~MsgString25();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[6];
};

class MsgTextLabel : public TextLabel {
public:
    MsgTextLabel(s32 arg1, s32 arg2, s32 arg3);
    virtual ~MsgTextLabel();
    virtual void draw();
    virtual u32 measureWidth();
};

class TexVramTask {
public:
    TexVramTask();
    BOOL requestTex(u32 a, u32 b, u32 c, u8 d);

    u32 unk_00[7];
};

// ---- Classes of this file ----

class CautionMsgString64 : public MsgString {
public:
    CautionMsgString64();
    virtual ~CautionMsgString64();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x40];
};

class CautionMsgString128 : public MsgString {
public:
    CautionMsgString128();
    virtual ~CautionMsgString128();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x80];
};

// Members of CommCautionWindow, all derived from MsgString
class CautionMsgString256 : public MsgString {
public:
    CautionMsgString256();
    virtual ~CautionMsgString256();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x100];
};

struct Unk_020dbd34_Mtx {
    s32 m[12];
};

class CachedModel {
public:
    CachedModel();
    ~CachedModel();

    u8 pad_00[0x5c];
    /* 0x5c */ u8 *unk_5c;
    /* 0x60 */ u32 pad_60;
    /* 0x64 */ Unk_020dbd34_Mtx unk_64;
    u8 pad_94[8];
};

extern "C" {
void _ZN5Model10drawScaledEPi(void *self, void *p);
void func_020af330();
s32 Snd_VolumeOff();
void Gfx2d_SetMainPlanes(u32 v);
void Gfx2d_SetSubPlanes(u32 v);
void Gfx2d_SetMainWindows(u32 v);
void Gfx2d_SetSubWindows(u32 v);
u32 Gfx2d_GetMainPlanes();
u32 Gfx2d_GetSubPlanes();
u32 Gfx2d_GetMainWindows();
u32 Gfx2d_GetSubWindows();
char *Msg_SkipLines(char *p, u32 n);
u32 func_020a7f94(MsgString *obj);
u8 *CommCaution_FormatErrorCode();
void func_020b4154(void *);
void func_020b413c(void *);
void String_FormatNumber(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
MsgTextLabel *MsgTextLabel_CreateBuffer(void *a, s32 b, s32 c);
void MsgTextLabel_Destroy(MsgTextLabel *obj);
void *Mem_AllocTail(u32 size);
void Mem_Free(void *p);
void Gfx2d_TilesToLinear4bpp(void *src, void *dst, s32 w, s32 h);
void MI_CpuFill8(void *p, u32 v, u32 n);
u32 _ZN10G3dMatData10getTexAddrEv(void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void G3i_PerspectiveW_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
void G3i_LookAt_(void *a, void *b, void *c, s32 d, void *e);
s32 func_01ffcb0c(s32 a, s32 b);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN11CachedModel10loadCachedEPvS0_(void *p, u32 a, void *b);
void String_Load2d(void *o, u8 *p, u32 x);
void func_020639e8(void *buf, void *fmt, u32 a);
void CommCaution_CopyString(void *a, void *b);
void func_0212a360(void *a, void *b);
s32 Net_GetLastErrorCode();
s32 Net_GetMode();
}

extern u8 sCommCautionNumberGap[];
extern u8 sCommCautionShowErrorCode;
extern u32 sCommCautionErrorCode;
extern u8 sCommCautionErrorCodeText[];
extern Unk_020dbd34_Mtx data_021f47e0;
extern u8 gFieldSceneKind;
extern u8 gFontA[];

struct Unk_020d905c_Ptr {
    /* 0x00 */ u32 pad[3];
    /* 0x0c */ u16 unk_0c;
};
extern Unk_020d905c_Ptr *gActorDefaultParent;

struct Unk_02037ea0_V {
    s32 x, y, z;
};

struct Unk_02037ea0_G {
    u8 pad[0x40];
    Unk_02037ea0_V a, c, b;
};
extern Unk_02037ea0_V gVec3Zero;
extern Unk_02037ea0_G data_027e02c8;
extern u8 data_027e00d0[];
extern u8 data_027e0114[];
extern u32 data_027e0148[];

struct Unk_02037b90_S {
    u8 a, b, c;
};

class CommCautionWindow {
public:
    CommCautionWindow();
    virtual ~CommCautionWindow();

    void restorePlanes();
    void hidePlanes();
    void clearPlaneState();
    void buildLine(u32 a, u32 b);
    void renderCountdown(void *buf, s32 x);
    void renderLine();
    void clearLines();
    void uploadLine(s32 i);
    void setupModelMatrix();
    void updateBlendRegs();
    void draw();
    void update(u8 a);
    void release();
    void init();

    void func_020376f4();
    void func_0203771c();
    void execEnded();
    void enterEnded();
    void execShutdown();
    void enterShutdown();
    void execCountdown();
    void enterCountdown();
    void execPrepare();
    void enterPrepare();
    void execDelay();
    void enterDelay();
    void execWatch();
    void enterWatch();
    void muteSound();
    void execIdle();
    void enterIdle();
    void checkNetError();

    /* 0x004 */ CachedModel unk_04;
    /* 0x0a0 */ TexVramTask unk_a0;
    /* 0x0bc */ s32 unk_bc;
    /* 0x0c0 */ s32 unk_c0;
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8;
    /* 0x0c9 */ u8 unk_c9;
    /* 0x0ca */ u8 unk_ca;
    /* 0x0cb */ u8 unk_cb;
    /* 0x0cc */ u16 unk_cc;
    /* 0x0ce */ u16 unk_ce;
    /* 0x0d0 */ u32 unk_d0;
    /* 0x0d4 */ u32 unk_d4;
    /* 0x0d8 */ u32 unk_d8;
    /* 0x0dc */ u32 unk_dc;
    /* 0x0e0 */ s32 unk_e0;
    /* 0x0e4 */ s32 unk_e4;
    /* 0x0e8 */ CautionMsgString256 unk_e8;
    /* 0x1fc */ CautionMsgString64 unk_1fc;
    /* 0x250 */ CautionMsgString128 unk_250;
    /* 0x2e4 */ u8 unk_2e4[0x800];
};

extern CommCautionWindow sCommCautionWindow;
extern CautionMsgString256 sCommCautionLagMsg;
extern CautionMsgString64 sCommCautionSecondsMsg;
extern CautionMsgString256 sCommCautionEndedMsg;

extern "C" {
s32 Scene_GetCurrent(void);
void OS_ResetSystem(s32);
s32 Net_GetMode(void);
s32 _ZN11CommManager12getErrorModeEv(void *);
s32 Net_GetError(void);
u32 _ZN11CommManager13getErrorFlagsEv(void *);
void _ZN11CommManager13setErrorFlagsEj(void *, s32);
void CommCaution_SaveErrorCode(void);
void Backup_CancelAndWait(void);
void Comm_Shutdown(void);
s32 _ZN11CommManager20getLatchedErrorFlagsEv(void *);
void _ZN9MsgString4copyEPS_(void *, void *);
s32 _s32_div_f(s32, s32);
}
extern void *gCommManager;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

u32 sCommCautionErrorCode;
CommCautionWindow sCommCautionWindow;
u8 sCommCautionNumberGap[4] = {0xa0, 0xa0, 0, 0};
u8 sCommCautionShowErrorCode;
u8 sCommCautionErrorCodeText[0x20];
CautionMsgString256 sCommCautionLagMsg;
CautionMsgString64 sCommCautionSecondsMsg;
CautionMsgString256 sCommCautionEndedMsg;

static inline BOOL Unk_02038058_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_02038058_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void Comm_SetShutdownErrorFlag() {
    void *g = gCommManager;
    u32 v = _ZN11CommManager13getErrorFlagsEv(g) | 0x20;
    _ZN11CommManager13setErrorFlagsEj(g, v);
}

CautionMsgString256::CautionMsgString256() { clear(); }

CautionMsgString256::~CautionMsgString256() {}

u32 CautionMsgString256::vfunc_08() { return 0x100; }

u8 *CautionMsgString256::vfunc_0c() { return (u8 *)this + 0x12; }

CautionMsgString64::CautionMsgString64() { clear(); }

CautionMsgString64::~CautionMsgString64() {
}

u32 CautionMsgString64::vfunc_08() {
    return 0x40;
}

u8 *CautionMsgString64::vfunc_0c() {
    return (u8 *)this + 0x12;
}

CautionMsgString128::CautionMsgString128() {
    clear();
}

CautionMsgString128::~CautionMsgString128() {
}

u32 CautionMsgString128::vfunc_08() {
    return 0x80;
}

u8 *CautionMsgString128::vfunc_0c() {
    return (u8 *)this + 0x12;
}

extern "C" void CommCaution_SaveErrorCode() {
    sCommCautionErrorCode = Net_GetLastErrorCode();
    u8 f;
    switch (Net_GetMode()) {
    case 3:
    case 4:
        f = 1;
        break;
    default:
        f = 0;
        break;
    }
    sCommCautionShowErrorCode = f;
}

extern "C" void CommCaution_CopyString(void *a, void *b) {
    func_0212a360(a, b);
}

u8 *CommCaution_FormatErrorCode() {
    u8 buf[0x14];
    func_020639e8(buf, (void *)" <%d>", sCommCautionErrorCode);
    CommCaution_CopyString(sCommCautionErrorCodeText, buf);
    return sCommCautionErrorCodeText;
}

CommCautionWindow::CommCautionWindow()
    : unk_bc(0), unk_c0(0), unk_c4(0), unk_c8(0), unk_c9(0), unk_ca(0), unk_cb(0), unk_cc(0), unk_ce(0), unk_d0(0),
      unk_d4(0), unk_d8(0), unk_dc(0), unk_e0(0), unk_e4(0) {
    MI_CpuFill8(unk_2e4, 0x11, 0x800);
}

CommCautionWindow::~CommCautionWindow() {
}

extern "C" u8 CommCaution_ArePlanesHidden() {
    return sCommCautionWindow.unk_ca;
}

extern "C" BOOL CommCaution_IsShutDown() {
    if (sCommCautionWindow.unk_bc >= 5) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void CommCaution_Init() {
    sCommCautionWindow.init();
}

extern "C" void CommCaution_Release() {
    sCommCautionWindow.release();
}

extern "C" void CommCaution_Update(u8 a) {
    sCommCautionWindow.update(a);
}

extern "C" void CommCaution_Draw() {
    sCommCautionWindow.draw();
}

extern "C" void CommCaution_UpdateBlendRegs() {
    sCommCautionWindow.updateBlendRegs();
}

extern "C" void CommCaution_LoadMessages() {
    u8 c[3];
    c[0] = 0xe3;
    c[1] = 0xe4;
    c[2] = 0xe5;
    String_Load2d(&sCommCautionLagMsg, &c[0], 0);
    String_Load2d(&sCommCautionSecondsMsg, &c[1], 0);
    String_Load2d(&sCommCautionEndedMsg, &c[2], 0);
}

void CommCautionWindow::init() {
    BOOL a = TRUE;
    u8 v = gFieldSceneKind;
    if (!Unk_02038058_IsZero(v)) {
        if (!Unk_02038058_IsOne(v)) {
            a = FALSE;
        }
    }
    BOOL b;
    if (gActorDefaultParent->unk_0c == 5) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    clearPlaneState();
    if (a || b) {
        _ZN11CachedModel10loadCachedEPvS0_(&unk_04, 0x43617557, (void *)"caution/caution_window.nsbmd");
        setupModelMatrix();
        unk_c4 = 0;
        unk_c8 = 0;
        enterWatch();
    } else {
        enterIdle();
    }
}

void CommCautionWindow::release() {
    if (unk_bc != 0) {
        _ZN11CachedModel7releaseEv(&unk_04);
        unk_bc = 0;
    }
}

void CommCautionWindow::update(u8 a) {
    unk_c9 = a;
    checkNetError();
    static void (CommCautionWindow::*tbl[8])() = {
        &CommCautionWindow::execIdle, &CommCautionWindow::execWatch, &CommCautionWindow::execDelay,
        &CommCautionWindow::execPrepare, &CommCautionWindow::execCountdown, &CommCautionWindow::execShutdown,
        &CommCautionWindow::execEnded, &CommCautionWindow::func_020376f4,
    };
    (this->*tbl[unk_bc])();
}

void CommCautionWindow::draw() {
    if (unk_c8) {
        G3i_PerspectiveW_(0x424, 0xf74, 0x1548, 0xf6, 0x3e800, 0x1000, 0, data_027e00d0);
        data_027e0148[0x7c / 4] &= ~0x50;
        Unk_02037ea0_V a, b, c, d;
        a = gVec3Zero;
        b.x = 0;
        b.y = 0;
        b.z = -0x1000;
        c.x = 0;
        c.y = 0x1000;
        c.z = 0;
        data_027e02c8.a = a;
        data_027e02c8.c = c;
        data_027e02c8.b = b;
        G3i_LookAt_(&a, &c, &b, 0, data_027e0114);
        data_027e0148[0x7c / 4] &= ~0xe8;
        s32 r = func_01ffcb0c(0xb7, 0xf6d);
        d.x = r;
        d.y = r;
        d.z = 0x1000;
        _ZN5Model10drawScaledEPi(&unk_04, &d);
    }
}

void CommCautionWindow::updateBlendRegs() {
    if (unk_cb) {
        if (unk_ca) {
            unk_cc = *(volatile u16 *)0x4000050;
            unk_ce = *(volatile u16 *)0x4001050;
            *(volatile u16 *)0x4000050 = 0;
            *(volatile u16 *)0x4001050 = 0;
        } else {
            *(volatile u16 *)0x4000050 = unk_cc;
            *(volatile u16 *)0x4001050 = unk_ce;
        }
        unk_cb = 0;
    }
}

void CommCautionWindow::setupModelMatrix() {
    func_020e8388(&data_021f47e0, 0, 0, -0x1000, 0, 0, -0x1000);
    unk_04.unk_64 = data_021f47e0;
}

void CommCautionWindow::uploadLine(s32 i) {
    u8 *b = (u8 *)unk_04.unk_5c;
    b += *(s32 *)(b + 8);
    u8 *c = b + *(u16 *)(b + 0xa);
    u32 v = _ZN10G3dMatData10getTexAddrEv(b + *(s32 *)(c + 8));
    unk_a0.requestTex((u32)unk_2e4, v + (i << 11), 0x800, 2);
}

void CommCautionWindow::clearLines() {
    MI_CpuFill8(unk_2e4, 0x11, 0x800);
    for (s32 i = 0; i < 4; i++) {
        uploadLine(i);
    }
}

void CommCautionWindow::renderLine() {
    void *buf = Mem_AllocTail(0x800);
    if (buf != NULL) {
        MsgTextLabel *o = MsgTextLabel_CreateBuffer(buf, 0x20, 2);
        if (o != NULL) {
            o->unk_2c = 5;
            o->unk_10 = (u32)unk_250.vfunc_0c();
            o->unk_58 = 2;
            o->unk_50 = 0;
            o->unk_28 = (GameFontDesc *)gFontA;
            o->unk_55 = 0;
            o->alignCenter();
            o->unk_39 = 1;
            o->unk_38 = 0;
            o->requestRedraw();
            u32 w = o->unk_30;
            MsgTextLabel_Destroy(o);
            if (unk_e4 >= 0 && unk_e0 != 0) {
                renderCountdown(buf, w);
            }
            Gfx2d_TilesToLinear4bpp(buf, unk_2e4, 0x20, 2);
        }
        Mem_Free(buf);
    }
}

void CommCautionWindow::renderCountdown(void *buf, s32 x) {
    MsgString25 t;
    String_FormatNumber(&t, unk_e4, 2, 0, 0, 0);
    u32 w = func_020a7f94(&t);
    u32 off;
    if (w < 0x10) {
        off = (0x10 - w) >> 1;
    } else {
        off = 0;
    }
    s32 px = x + unk_e0 + off;
    MsgTextLabel *o = MsgTextLabel_CreateBuffer(buf, 0x20, 2);
    if (o != NULL) {
        o->unk_2c = 5;
        o->unk_10 = (u32)((MsgString *)&t)->vfunc_0c();
        o->unk_58 = 2;
        o->unk_50 = 0;
        o->unk_28 = (GameFontDesc *)gFontA;
        o->unk_55 = 0;
        o->unk_30 = px;
        o->unk_39 = 1;
        o->unk_38 = 0;
        o->unk_56 = 1;
        o->requestRedraw();
        MsgTextLabel_Destroy(o);
    }
}

void CommCautionWindow::buildLine(u32 a, u32 b) {
    unk_250.clear();
    unk_e0 = 0;
    u8 *r = (u8 *)Msg_SkipLines((char *)unk_e8.vfunc_0c(), a);
    if (r != NULL) {
        unk_250.setLine(r);
        if (unk_e4 >= 0 && a == 3) {
            unk_e0 = func_020a7f94(&unk_250);
            Unk_02037b90_S s = *(Unk_02037b90_S *)sCommCautionNumberGap;
            unk_250.append((u8 *)&s);
            unk_250.appendString(&unk_1fc);
        }
        if (b != 0 && a == 3 && sCommCautionShowErrorCode != 0) {
            unk_250.append(CommCaution_FormatErrorCode());
        }
    }
}

void CommCautionWindow::clearPlaneState() {
    unk_ca = 0;
    unk_d0 = 0;
    unk_d4 = 0;
    unk_d8 = 0;
    unk_dc = 0;
}

void CommCautionWindow::hidePlanes() {
    if (!unk_ca) {
        unk_ca = 1;
        unk_d0 = Gfx2d_GetMainPlanes();
        unk_d4 = Gfx2d_GetSubPlanes();
        unk_d8 = Gfx2d_GetMainWindows();
        unk_dc = Gfx2d_GetSubWindows();
        Gfx2d_SetMainPlanes(1);
        Gfx2d_SetSubPlanes(0);
        Gfx2d_SetMainWindows(0);
        Gfx2d_SetSubWindows(0);
        unk_cb = 1;
    }
}

void CommCautionWindow::restorePlanes() {
    if (unk_ca) {
        unk_ca = 0;
        Gfx2d_SetMainPlanes(unk_d0);
        Gfx2d_SetSubPlanes(unk_d4);
        Gfx2d_SetMainWindows(unk_d8);
        Gfx2d_SetSubWindows(unk_dc);
        unk_cb = 1;
    }
}

void CommCautionWindow::muteSound() {
    func_020af330();
    Snd_VolumeOff();
}

void CommCautionWindow::checkNetError() {
    s32 s = Net_GetMode();
    if (s != 0 && s != 6) {
        s32 r4 = _ZN11CommManager12getErrorModeEv(gCommManager);
        s32 v = Net_GetError();
        if ((r4 == 0 && v != 0 && v != 0x800c && v != 0x400b) ||
            (r4 == 1 && v != 0 && v != 0x80ff && v != 0x800c && v != 0x4006 && v != 0x400a && v != 0x400b)) {
            void *o = gCommManager;
            u32 f = _ZN11CommManager13getErrorFlagsEv(o) | 0x10;
            _ZN11CommManager13setErrorFlagsEj(o, f);
        }
    }
}

void CommCautionWindow::enterIdle() {
    unk_bc = 0;
}

void CommCautionWindow::execIdle() {}

void CommCautionWindow::enterWatch() {
    unk_bc = 1;
    unk_c8 = 0;
    restorePlanes();
}

void CommCautionWindow::execWatch() {
    if (unk_c9 != 0) {
        if ((_ZN11CommManager20getLatchedErrorFlagsEv(gCommManager) & 0x7c) != 0) {
            hidePlanes();
            enterShutdown();
        } else {
            enterDelay();
        }
    }
}

void CommCautionWindow::enterDelay() {
    unk_bc = 2;
    unk_c0 = 0x14;
    unk_c8 = 0;
}

void CommCautionWindow::execDelay() {
    if (unk_c9 == 0) {
        enterWatch();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= 0) {
            enterPrepare();
        }
    }
}

void CommCautionWindow::enterPrepare() {
    unk_bc = 3;
    unk_c8 = 0;
    clearLines();
    hidePlanes();
}

void CommCautionWindow::execPrepare() {
    _ZN9MsgString4copyEPS_(&unk_e8, &sCommCautionLagMsg);
    _ZN9MsgString4copyEPS_((u8 *)this + 0x1fc, &sCommCautionSecondsMsg);
    enterCountdown();
}

void CommCautionWindow::enterCountdown() {
    unk_bc = 4;
    unk_c0 = 0x12c;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = 0xf;
}

void CommCautionWindow::execCountdown() {
    s32 q = _s32_div_f(unk_c0 + 0x13, 0x14);
    BOOL changed;
    if (unk_e4 != q) {
        changed = TRUE;
    } else {
        changed = FALSE;
    }
    unk_e4 = q;
    if (unk_c4 < 4) {
        buildLine(unk_c4, 0);
        renderLine();
        uploadLine(unk_c4);
        unk_c4 = unk_c4 + 1;
    } else if (changed) {
        buildLine(3, 0);
        renderLine();
        uploadLine(3);
    }
    if (unk_c9 == 0) {
        enterWatch();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= -0x14) {
            enterShutdown();
        }
    }
}

void CommCautionWindow::enterShutdown() {
    unk_bc = 5;
    unk_c8 = 1;
    clearLines();
    muteSound();
    CommCaution_SaveErrorCode();
    Backup_CancelAndWait();
    Comm_Shutdown();
}

void CommCautionWindow::execShutdown() {
    _ZN9MsgString4copyEPS_(&unk_e8, &sCommCautionEndedMsg);
    enterEnded();
}

void CommCautionWindow::enterEnded() {
    unk_bc = 6;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = -1;
    unk_c0 = 0x14;
}

void CommCautionWindow::execEnded() {
    if (unk_c4 < 4) {
        buildLine(unk_c4, 1);
        renderLine();
        uploadLine(unk_c4);
        unk_c4 = unk_c4 + 1;
    }
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        BOOL b, a;
        if (gTouchHeld != 0 && gTouchChanged != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
        b = (gPad[1] & 1) ? TRUE : FALSE;
        if (a != 0 || b != 0) {
            func_0203771c();
        }
    }
}

// Data order: this unit is placed object by object (see object_order.txt).

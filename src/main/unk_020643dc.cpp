#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02064674_Vec { s32 x, y, z; };

// Class "LightLevel" of symbols.txt (0x020b22ac...).
class LightLevel {
public:
    LightLevel();
    ~LightLevel();
    s32 getLevel();
    BOOL switchLight(BOOL on, s32 a, s32 b, u32 param);
    void update();
    BOOL switchLightAnimated(BOOL on);

    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_020d93b8 {
    s16 getEyeCurveAngle();
};

struct Unk_02064674_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
};

struct Unk_02064870_Time {
    u16 v;
};

// Element of the 3-entry array at +0x58 of SceneLights (0x44 bytes).
struct LightSwitch {
    BOOL sync(s32 mode);
    u8 unk_00;
    s32 unk_04;
    LightLevel unk_08;
    s32 unk_1c;
};

struct ThunderSe {
    void schedule(s32 a, s32 b);
    s32 func_02064bc4();
    s32 tickAll();
    s32 clearAll();
    s32 func_02064c18(s32 a, s32 b);
    s32 func_02064c20();
    void tick();
    s32 clear();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct FlashLight {
    s32 stepColorFlash();
    s32 startColorFlash();
    s32 updateColorFlash();
    s32 stepLightning();
    s32 startLightning();
    s32 updateLightning();
    s32 shutdown();
    void apply(void *m);
    void update();
    s32 reset();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
    /* 0x08 */ Unk_02064674_Vec unk_08;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ ThunderSe unk_24[4];
};

struct SceneLight {
    ~SceneLight();
    void apply(void *m);
    void update();
    void updateColorAndDir();
    void calcWarmColor();
    void calcLampColor();
    void calcSwitchColor();
    void updateOutdoor();
    void calcDirection(Unk_02064674_Vec *out);
    s16 getTimeAngle();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ LightSwitch unk_14;
    /* 0x34 */ u16 unk_34;
    /* 0x38 */ Unk_02064674_Vec unk_38;
};

struct Unk_0206513c_Def {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
};

struct Unk_0206513c_DefList {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ const Unk_0206513c_Def *const *unk_04;
};

struct Unk_02065078_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

struct Unk_02064fa8_Data {
    /* 0x00 */ u8 unk_00[0x24];
};

struct Unk_020652c0_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020652c0_Node *unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_020652c0_List {
    /* 0x00 */ Unk_020652c0_Node *unk_00;
    /* 0x04 */ Unk_020652c0_Node *unk_04;
};

struct Unk_020652ec_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020652ec_Node *unk_04;
    /* 0x08 */ u8 unk_08;
};

struct Unk_020652ec_List {
    /* 0x00 */ Unk_020652ec_Node *unk_00;
    /* 0x04 */ Unk_020652ec_Node *unk_04;
};

struct Unk_02064d6c_Rgb {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

class SceneLights : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    void updateBaseColor();
    void setupLights();

    /* 0x050 */ s32 unk_50;
    /* 0x054 */ s32 unk_54;
    /* 0x058 */ SceneLight unk_58[3];
    /* 0x124 */ FlashLight unk_124;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u16 unk_16a;
    /* 0x16c */ u16 unk_16c;
    /* 0x16e */ u16 unk_16e;
    /* 0x170 */ u16 unk_170;
    /* 0x174 */ LightLevel *unk_174;
    /* 0x178 */ u8 unk_178;
};

// Object filled with a constant colour by __sinit.
struct Unk_021c9f40_Color {
    u8 a, b, c, d;
    Unk_021c9f40_Color(u8 a_, u8 b_, u8 c_, u8 d_) { a = a_; b = b_; c = c_; d = d_; }
};

// Flags and values at sLightSwitchState (0x14 bytes).
struct Unk_021c9f5c {
    u8 flag[2];
    u32 b[2];
    u32 a[2];
};

// Scene registration entry: constructor, two halfwords.
struct Unk_020dd3b8 {
    SceneLights *(*unk_00)(void);
    s16 unk_04;
    s16 unk_06;
};

struct Unk_020b22ac_Dummy;

extern "C" {
extern u8 data_020e416c;
extern Unk_020d93b8 *gCamera;
extern Unk_02064fa8_Data gViewMtx;
}

extern SceneLights *gSceneLights;
extern Unk_021c9f5c sLightSwitchState;
extern const u16 data_020cb728[];
extern const u16 data_020cb6f8[];
extern const u16 data_020cb6fc[];
extern const u8 data_020cb7d8[];
extern const Unk_02065078_Rec data_020cb80c[];
extern const Unk_0206513c_DefList *data_020dd3ec[];

extern "C" {
void G3_MultMtx33(void *m);
void NNS_G3dGlbLightVector(s32 id, s32 x, s32 y, s32 z);
void NNS_G3dGlbLightColor(s32 id, u32 c);
u16 Sky_GetLightColor(s32 a);
void func_020e944c(Unk_02064674_Vec *v, s32 a);
void func_020e93a0(Unk_02064674_Vec *v, s32 a);
s32 func_020e94f8(Unk_02064674_Vec *v);
s32 VEC_Mag(Unk_02064674_Vec *v);
s32 func_01ffcb0c(s32 a, s32 b);
void Clock_GetMinuteHour(Unk_02064870_Time *t);
void func_0209cdf8(Unk_02064870_Time a, Unk_02064870_Time b, Unk_02064870_Time *out);
s32 func_020b5184();
s32 func_020b5164();
void Snd_PlaySe(u32 a);
s32 func_020b50e8(void);
s32 func_020b52f8(void);
void VEC_Normalize(void *a, void *b);
void func_020e7968(void);
void func_020e7a10(void *list, void *node, void *prev);

void Light_ClampDir(Unk_02064674_Vec *in, Unk_02064674_Vec *out);
void Light_GetViewRotation(void *a, void *b);
void func_020648d8(void *p);
void LightSwitch_SetOff(s32 i, u32 v);
void LightSwitch_SetOn(s32 i, u32 a, u32 b);
}

inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }


extern "C" u8 Sky_GetLightParam(u32 x);

// ---- SceneLights::updateBaseColor
static inline void Unk_02064d6c_Adjust(Unk_02064d6c_Rgb *c) {
    s32 r = c->r + 10;
    s32 g = c->g + 10;
    s32 b = c->b + 7;
    if (r > 31) {
        c->r = 31;
    } else {
        c->r = r;
    }
    if (g > 31) {
        c->g = 31;
    } else {
        c->g = g;
    }
    if (b > 31) {
        c->b = 31;
    } else {
        c->b = b;
    }
}

extern "C" void PrioList_Init(Unk_020652c0_List *list) {
    list->unk_00 = NULL;
    list->unk_04 = NULL;
}

extern "C" BOOL PrioList_Insert(Unk_020652ec_List *list, Unk_020652ec_Node *node) {
    Unk_020652ec_Node *prev = list->unk_00;
    if (prev == NULL) {
        list->unk_00 = node;
        list->unk_04 = node;
        return TRUE;
    }
    Unk_020652ec_Node *cur = prev->unk_04;
    while (cur != NULL) {
        if (cur->unk_08 > node->unk_08) {
            func_020e7a10(list, node, prev);
            return TRUE;
        }
        prev = cur;
        cur = cur->unk_04;
    }
    func_020e7a10(list, node, prev);
    return TRUE;
}

extern "C" BOOL func_020652dc(void) {
    func_020e7968();
    return TRUE;
}

extern "C" Unk_020652c0_Node *PrioList_FindById(Unk_020652c0_List *list, s32 key) {
    if (key == 0) return NULL;
    Unk_020652c0_Node *p;
    for (p = list->unk_00; p != NULL; p = p->unk_04) {
        if (key == p->unk_08) return p;
    }
    return NULL;
}

extern "C" SceneLights *SceneLights_Create(void) {
    return new SceneLights();
}

void SceneLights::setupLights() {
    s32 id;
    s32 i = 0;
    id = func_020b50e8();
    if (IsOne(data_020e416c)) {
        if (func_020b52f8() == 0) i = 1;
    }
    if (i) {
        LightSwitch_SetOn(0, 2, 0);
    } else {
        LightSwitch_SetOff(0, 1);
    }
    LightSwitch_SetOff(1, 1);
    const Unk_0206513c_DefList *dl = data_020dd3ec[unk_50];
    const Unk_0206513c_Def *const *list = dl->unk_04;
    s32 count = dl->unk_00;
    unk_54 = count;
    i = 0;
    const Unk_02065078_Rec *rec = &data_020cb80c[id];
    for (; i < count; i++) {
        Unk_0206513c_Def d = *list[i];
        unk_58[i].unk_00 = d.unk_00;
        unk_58[i].unk_04 = d.unk_04;
        unk_58[i].unk_08 = d.unk_08;
        unk_58[i].unk_0c = d.unk_0c;
        unk_58[i].unk_10 = d.unk_10;
        unk_58[i].unk_12 = d.unk_12;
        switch (list[i]->unk_00) {
        case 3:
        case 4:
        case 5:
            unk_58[i].unk_10 = rec->unk_04;
            unk_58[i].unk_12 = rec->unk_06;
            SceneLight *e = &unk_58[i];
            e->unk_14.unk_00 = 0;
            e->unk_14.unk_08.switchLightAnimated(0);
            unk_174 = &e->unk_14.unk_08;
        }
    }
}

BOOL SceneLights::vfunc_00() {
    gSceneLights = this;
    s32 id = func_020b50e8();
    unk_50 = data_020cb7d8[id];
    if (id == 0x21) {
        unk_16a = 0x3e99;
        unk_16c = 0x3caa;
        unk_16e = 0x494a;
        unk_170 = 0x518c;
        unk_178 = 0xb;
    } else {
        const Unk_02065078_Rec *rec = &data_020cb80c[id];
        unk_16a = rec->unk_00;
        unk_16c = 0;
        unk_16e = rec->unk_02;
        unk_170 = 0;
        unk_178 = rec->unk_08;
    }
    setupLights();
    SceneLight *p;
    s32 i;
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        func_020648d8(p);
        p->update();
    }
    unk_124.reset();
    return TRUE;
}

BOOL SceneLights::onExecute() {
    SceneLight *p;
    s32 i;
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        p->update();
    }
    unk_124.update();
    updateBaseColor();
    return TRUE;
}

BOOL SceneLights::onDraw() {
    u8 l[0x24];
    s32 i;
    SceneLight *p;
    Light_GetViewRotation(&gViewMtx, l);
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        p->apply(l);
    }
    unk_124.apply(l);
    return TRUE;
}

BOOL SceneLights::vfunc_0c() {
    unk_124.shutdown();
    gSceneLights = NULL;
    return TRUE;
}

extern "C" void Light_GetViewRotation(void *a, void *b) {
    VEC_Normalize(a, b);
    VEC_Normalize((u8 *)a + 0xc, (u8 *)b + 0xc);
    VEC_Normalize((u8 *)a + 0x18, (u8 *)b + 0x18);
}

extern "C" s32 SceneLights_GetMatLightMask(void) {
    s32 r = 15;
    u8 t = data_020cb7d8[func_020b50e8()];
    switch (t) {
    case 2:
    case 3:
        r = 1;
    }
    return r;
}

extern "C" s32 SceneLights_GetMatLightMask2(void) {
    s32 r = 15;
    u8 t = data_020cb7d8[func_020b50e8()];
    switch (t) {
    case 2:
    case 3:
        r = 1;
    }
    return r;
}

extern "C" s16 SceneLights_GetFlashColor(void) {
    volatile s16 v = 0;
    SceneLights *o = gSceneLights;
    if (o != NULL) {
        if (*(s32 *)((u8 *)o + 0x124) != 9) {
            v = *(u16 *)((u8 *)o + 0x128);
        }
    }
    return v;
}

extern "C" s16 SceneLights_GetBaseColor(void) {
    return gSceneLights->unk_168;
}

void SceneLights::updateBaseColor() {
    struct {
        volatile u16 a;
        Unk_02064d6c_Rgb c;
        volatile u16 b;
        u16 pad;
    } l;
    l.a = Sky_GetLightColor(3);
    l.b = l.a;
    *(u16 *)&l.c = l.b;
    if (func_020b52f8()) {
        if (unk_58[2].unk_14.unk_00 != 0) {
            Unk_02064d6c_Adjust(&l.c);
        }
    } else if (IsOne(data_020e416c)) {
        switch (func_020b50e8()) {
        case 0xb:
            Unk_02064d6c_Adjust(&l.c);
            break;
        case 0x27:
        case 0x28:
            break;
        default:
            l.c.r = 31;
            l.c.g = 31;
            l.c.b = 31;
        }
    }
    unk_168 = *(u16 *)&l.c;
}

extern "C" s16 SceneLights_GetRoomColor(void) {
    struct {
        volatile u16 a;
        u16 c;
        volatile u16 b;
        u16 d;
    } l;
    l.c = 0;
    SceneLights *o = gSceneLights;
    if (o == NULL) {
        return l.c;
    }
    switch (o->unk_50) {
    case 2:
    case 3: {
        s32 t = o->unk_174->getLevel();
        Unk_02064d6c_Rgb *x = (Unk_02064d6c_Rgb *)&gSceneLights->unk_170;
        Unk_02064d6c_Rgb *y = (Unk_02064d6c_Rgb *)&gSceneLights->unk_16e;
        s32 b = x->b + (((y->b - x->b) * t) >> 12);
        s32 r = x->r + (((y->r - x->r) * t) >> 12);
        s32 g = x->g + (((y->g - x->g) * t) >> 12);
        l.d = (b << 10) | (r | (g << 5));
        break;
    }
    default:
        l.a = Sky_GetLightColor(2);
        l.b = l.a;
        l.d = l.b;
    }
    return l.d;
}

extern "C" u8 func_02064c84(u32 x) {
    BOOL b = (data_020e416c == 1);
    if (b) {
        if (x == 0) {
            return gSceneLights->unk_178;
        }
        return Sky_GetLightParam(x);
    }
    return Sky_GetLightParam(x);
}

s32 ThunderSe::clear()
{
    unk_00 = 2;
    unk_04 = 0;
}

void ThunderSe::tick()
{
    u32 x;
    if (unk_00 == 0) {
        unk_04--;
        if (unk_04 < 0) {
            if (func_020b5184() || func_020b5164()) {
                x = data_020cb6fc[unk_00];
            } else {
                x = data_020cb6f8[unk_00];
            }
            Snd_PlaySe(x);
            unk_00 = 2;
        }
    } else {
        unk_00 = 2;
    }
}

s32 ThunderSe::func_02064c20() {}

s32 ThunderSe::func_02064c18(s32 a, s32 b)
{
    unk_00 = a;
    unk_04 = b;
}

s32 ThunderSe::clearAll()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        clear();
    }
}

s32 ThunderSe::tickAll()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        tick();
    }
}

s32 ThunderSe::func_02064bc4()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02064c20();
    }
}

void ThunderSe::schedule(s32 a, s32 b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        if (unk_00 == 2) {
            func_02064c18(a, b);
        }
    }
}

s32 FlashLight::reset()
{
    unk_00 = 9;
    return unk_24[0].clearAll();
}

void FlashLight::update()
{
    Unk_02064674_Vec v;
    switch (unk_00) {
    case 0:
        updateLightning();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        updateColorFlash();
        break;
    }
    if (gCamera) {
        func_020e944c(&unk_08, gCamera->getEyeCurveAngle());
    }
    v.x = unk_08.x;
    v.y = unk_08.y;
    v.z = unk_08.z;
    Light_ClampDir(&v, &unk_08);
    unk_24[0].tickAll();
}

void FlashLight::apply(void *m)
{
    if (unk_00 != 9) {
        *(volatile s32 *)0x4000440 = 2;
        *(volatile s32 *)0x4000454 = 0;
        G3_MultMtx33(m);
        NNS_G3dGlbLightVector(2, (s16)unk_08.x, (s16)unk_08.y, (s16)unk_08.z);
        NNS_G3dGlbLightColor(2, unk_04);
    } else {
        NNS_G3dGlbLightColor(2, 0);
    }
}

s32 FlashLight::shutdown()
{
    return unk_24[0].func_02064bc4();
}

s32 FlashLight::updateLightning()
{
    switch (unk_14) {
    case 1:
        startLightning();
        break;
    case 2:
        stepLightning();
        break;
    }
}

s32 FlashLight::startLightning()
{
    unk_04 = 0;
    unk_14 = 2;
    unk_1c = 0;
    unk_20 = 0x800;
    unk_18 = 0;
    unk_24[0].schedule(0, 0xb4);
}

s32 FlashLight::stepLightning()
{
    unk_08.x = 0;
    unk_08.y = -0x1000;
    unk_08.z = 0;
    unk_1c = unk_1c + unk_20;
    if (unk_18 == 0) {
        if (unk_1c >= 0x1000) {
            unk_1c = 0x1000;
            unk_20 = -0x333;
            unk_18 = 1;
        }
    } else if (unk_1c < 0) {
        unk_1c = 0;
        unk_20 = 0;
        unk_00 = 9;
        unk_14 = 0;
    }
    s32 c = unk_1c * 9 >> 12;
    unk_04 = (c << 10) | (c | (c << 5));
}

s32 FlashLight::updateColorFlash()
{
    switch (unk_14) {
    case 1:
        startColorFlash();
        break;
    case 2:
        stepColorFlash();
        break;
    }
}

s32 FlashLight::startColorFlash()
{
    unk_04 = 0;
    unk_14 = 2;
    unk_1c = 0;
    unk_20 = 0x548;
    unk_18 = 0;
}

s32 FlashLight::stepColorFlash()
{
    unk_08.x = 0;
    unk_08.y = -0x1000;
    unk_08.z = 0;
    unk_1c = unk_1c + unk_20;
    if (unk_18 == 0) {
        if (unk_1c >= 0x1000) {
            unk_1c = 0x1000;
            unk_20 = -0x266;
            unk_18 = 1;
        }
    } else if (unk_1c < 0) {
        unk_1c = 0;
        unk_00 = 9;
        unk_14 = 0;
    }
    if (unk_00 != 9) {
        s32 t = unk_1c;
        u16 c = data_020cb728[unk_00 - 1];
        s32 hi = ((c & 0x7c00) >> 10) * t >> 12;
        s32 lo = (c & 0x1f) * t >> 12;
        s32 mid = ((c & 0x3e0) >> 5) * t >> 12;
        unk_04 = (hi << 10) | (lo | (mid << 5));
    }
}

extern "C" void SceneLights_StartFlash(u32 v)
{
    SceneLights *g = gSceneLights;
    if (g != 0) {
        u32 *p = (u32 *)((u8 *)g + 0x124);
        p[0] = v;
        p[5] = 1;
    }
}

BOOL LightSwitch::sync(s32 mode)
{
    BOOL r = FALSE;
    u8 v;
    switch (mode) {
    case 3:
    case 4:
        v = sLightSwitchState.flag[0];
        if (unk_00 != v) {
            unk_00 = v;
            unk_04 = sLightSwitchState.b[0];
            unk_1c = sLightSwitchState.a[0];
            r = TRUE;
        }
        break;
    case 5:
        v = sLightSwitchState.flag[1];
        if (unk_00 != v) {
            unk_00 = v;
            unk_04 = sLightSwitchState.b[1];
            unk_1c = sLightSwitchState.a[1];
            r = TRUE;
        }
        break;
    }
    return r;
}

extern "C" void func_020648d8(void *) {}

s16 SceneLight::getTimeAngle()
{
    Unk_02064870_Time res, tm, now;
    tm.v = unk_08;
    Clock_GetMinuteHour(&now);
    func_0209cdf8(now, tm, &res);
    u8 *p = (u8 *)&res;
    return -(((p[0] + p[1] * 60) << 15) / 0x5a0 - 0x4000);
}

extern "C" void Light_ClampDir(Unk_02064674_Vec *in, Unk_02064674_Vec *out)
{
    if (func_020e94f8(in)) {
        if (VEC_Mag(in) >= 0xff0) {
            in->x = func_01ffcb0c(in->x, 0xff0);
            in->y = func_01ffcb0c(in->y, 0xff0);
            in->z = func_01ffcb0c(in->z, 0xff0);
        }
    }
    if (out) {
        out->x = in->x;
        out->y = in->y;
        out->z = in->z;
    }
}

void SceneLight::calcDirection(Unk_02064674_Vec *out)
{
    switch (unk_00) {
    case 0:
    case 1:
    case 2:
        func_020e944c(out, unk_10);
        func_020e93a0(out, getTimeAngle());
        break;
    default:
        func_020e944c(out, unk_10);
        func_020e93a0(out, unk_12);
        break;
    }
}

void SceneLight::updateOutdoor()
{
    Unk_02064674_Color c0;
    volatile u16 c1;
    Unk_02064674_Vec v, w;
    v.x = 0;
    v.y = 0;
    v.z = -0x1000;
    calcDirection(&v);
    if (gCamera) {
        func_020e944c(&v, gCamera->getEyeCurveAngle());
    }
    *(u16 *)&c0 = Sky_GetLightColor(unk_0c);
    c1 = *(u16 *)&c0;
    unk_34 = c1;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    Light_ClampDir(&w, &unk_38);
}

void SceneLight::calcSwitchColor()
{
    s32 t = unk_14.unk_08.getLevel();
    SceneLights *g = gSceneLights;
    Unk_02064674_Color *pa = (Unk_02064674_Color *)&g->unk_16c;
    Unk_02064674_Color *pb = (Unk_02064674_Color *)&g->unk_16a;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    if (unk_14.unk_00 == 0) {
        if (unk_14.unk_04 != 0) {
            r = 0;
            gr = 0;
            bl = 0;
        }
    } else if (unk_14.unk_04 == 2) {
        r = 0x10;
        gr = 0x10;
        bl = 0xd;
    }
    unk_34 = (bl << 10) | (r | (gr << 5));
}

void SceneLight::calcLampColor()
{
    s32 t = unk_14.unk_08.getLevel();
    SceneLights *g = gSceneLights;
    Unk_02064674_Color *pa = (Unk_02064674_Color *)&g->unk_16c;
    Unk_02064674_Color *pb = (Unk_02064674_Color *)&g->unk_16a;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    unk_34 = (bl << 10) | (r | (gr << 5));
}

void SceneLight::calcWarmColor()
{
    s32 t = unk_14.unk_08.getLevel();
    unk_34 = ((((t << 4) >> 12) + 15) << 10) | ((((t << 2) >> 12) + 25) | (((t * 9 >> 12) + 20) << 5));
}

void SceneLight::updateColorAndDir()
{
    Unk_02064674_Color c0;
    volatile u16 c1;
    Unk_02064674_Vec v, w;
    switch (unk_00) {
    case 3:
        calcSwitchColor();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    case 4:
        calcLampColor();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    case 5:
        calcWarmColor();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    default:
        *(u16 *)&c0 = Sky_GetLightColor(unk_0c);
        c1 = *(u16 *)&c0;
        unk_34 = c1;
        v.x = 0;
        v.y = 0;
        v.z = -0x1000;
        break;
    }
    calcDirection(&v);
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    Light_ClampDir(&w, &unk_38);
}

void SceneLight::update()
{
    if (gSceneLights->unk_50 == 0) {
        updateOutdoor();
        return;
    }
    if (unk_14.sync(unk_00)) {
        if (unk_14.unk_00 != 0) {
            switch (unk_14.unk_04) {
            case 0:
            case 3:
                unk_14.unk_08.switchLight(1, 1, 0, 0x1000 / unk_14.unk_1c);
                break;
            case 1:
                unk_14.unk_08.switchLight(1, 1, 1, 0x800);
                break;
            default:
                unk_14.unk_08.switchLight(1, 0, 0, 0x800);
                break;
            }
        } else {
            switch (unk_14.unk_04) {
            case 0:
            case 3:
                unk_14.unk_08.switchLight(0, 1, 0, 0x1000 / unk_14.unk_1c);
                break;
            default:
                unk_14.unk_08.switchLight(0, 0, 0, 0x800);
                break;
            }
        }
    }
    unk_14.unk_08.update();
    updateColorAndDir();
}

void SceneLight::apply(void *m)
{
    s32 id = unk_04;
    *(volatile s32 *)0x4000440 = 2;
    *(volatile s32 *)0x4000454 = 0;
    G3_MultMtx33(m);
    NNS_G3dGlbLightVector(id, (s16)unk_38.x, (s16)unk_38.y, (s16)unk_38.z);
    NNS_G3dGlbLightColor(id, unk_34);
}

extern "C" void LightSwitch_SetOn(s32 i, u32 a, u32 b)
{
    sLightSwitchState.flag[i] = 1;
    sLightSwitchState.a[i] = a;
    sLightSwitchState.b[i] = b;
}

extern "C" void LightSwitch_SetOff(s32 i, u32 v)
{
    sLightSwitchState.flag[i] = 0;
    sLightSwitchState.a[i] = v;
}

SceneLight::~SceneLight() {}

// ---- data (definition order = creation order, solved by inverting the heapsort)
extern const Unk_0206513c_DefList data_020cb700;
extern const Unk_0206513c_DefList data_020cb708;
extern const Unk_0206513c_DefList data_020cb710;
extern const Unk_0206513c_DefList data_020cb718;
extern const Unk_0206513c_DefList data_020cb720;
extern const Unk_0206513c_Def data_020cb738;
extern const Unk_0206513c_Def data_020cb74c;
extern const Unk_0206513c_Def data_020cb760;
extern const Unk_0206513c_Def data_020cb774;
extern const Unk_0206513c_Def data_020cb788;
extern const Unk_0206513c_Def data_020cb79c;
extern const Unk_0206513c_Def data_020cb7b0;
extern const Unk_0206513c_Def data_020cb7c4;
extern const Unk_0206513c_Def *data_020dd3b4[1];
extern const Unk_0206513c_Def *data_020dd3c0[2];
extern const Unk_0206513c_Def *data_020dd3c8[3];
extern const Unk_0206513c_Def *data_020dd3d4[3];
extern const Unk_0206513c_Def *data_020dd3e0[3];

extern const Unk_02065078_Rec data_020cb80c[51] = {
    {0x0000, 0x0000, 0, 0, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x535a, 0x494a, 8192, 4096, 18, 0},
    {0x67de, 0x494a, 10240, 4096, 15, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67ff, 0x494a, 8192, 0, 20, 0},
    {0x67ff, 0x494a, 8192, 0, 20, 0},
    {0x67de, 0x51ef, 8192, 0, 28, 0},
    {0x53ff, 0x498c, 8192, 4096, 25, 0},
    {0x0000, 0x0000, 8192, 4096, 25, 0},
    {0x67ff, 0x494a, 8192, 4096, 21, 0},
    {0x679c, 0x48e7, 8192, 4096, 15, 0},
    {0x679c, 0x48e7, 8192, 4096, 15, 0},
    {0x53ff, 0x498c, 8192, 4096, 25, 0},
    {0x53ff, 0x498c, 8192, 4096, 25, 0},
    {0x3610, 0x31ef, 4096, 4096, 11, 0},
    {0x3610, 0x31ef, 4096, 4096, 11, 0},
    {0x7bde, 0x494a, 8192, 4096, 25, 0},
    {0x0000, 0x0000, 4096, 4096, 11, 0},
    {0x0000, 0x0000, 4096, 4096, 11, 0},
    {0x0000, 0x0000, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x0000, 0x0000, 4096, 4096, 11, 0},
    {0x67de, 0x31ef, 4096, 4096, 11, 0},
    {0x67ff, 0x3108, 8192, 4096, 25, 0},
    {0x0000, 0x0000, 0, 0, 11, 0},
    {0x0000, 0x0000, 4096, 4096, 11, 0},
};
const Unk_0206513c_Def *data_020dd3e0[3] = {&data_020cb774, &data_020cb760, &data_020cb788};
extern const Unk_0206513c_Def data_020cb79c = {3, 0, 0, 1, 0x1000, 0x1000};
// ---- .data
const Unk_0206513c_Def *data_020dd3b4[1] = {&data_020cb79c};
extern const u16 data_020cb6fc[2] = {0x07f3, 0};
// ---- .bss (in __sinit construction order)
Unk_021c9f40_Color data_021c9f58(31, 20, 20, 31);
extern const Unk_0206513c_DefList data_020cb708 = {3, data_020dd3e0};
extern const Unk_0206513c_DefList data_020cb710 = {3, data_020dd3c8};
const Unk_0206513c_Def *data_020dd3c8[3] = {&data_020cb738, &data_020cb74c, &data_020cb760};
extern const u8 data_020cb7d8[0x34] = {
    0, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 4, 4, 2, 0, 0, 0, 1, 2, 1, 2, 0, 2, 0};
const Unk_0206513c_DefList *data_020dd3ec[5] = {&data_020cb710, &data_020cb708, &data_020cb700, &data_020cb720, &data_020cb718};
extern const Unk_0206513c_Def data_020cb760 = {2, 1, 0xc00, 1, 0, 0};
extern const Unk_0206513c_Def data_020cb774 = {0, 0, 0, 0, -0x2000, 0};
extern const Unk_0206513c_DefList data_020cb718 = {3, data_020dd3d4};
const Unk_0206513c_Def *data_020dd3d4[3] = {&data_020cb774, &data_020cb760, &data_020cb788};
// ---- .rodata
extern const u16 data_020cb6f8[2] = {0x04cf, 0};
extern const Unk_0206513c_Def data_020cb788 = {3, 3, 0, 1, 0x1000, 0x1000};
extern const Unk_0206513c_Def data_020cb7c4 = {5, 1, 0, 1, 0x1000, 0x1000};
extern const Unk_0206513c_DefList data_020cb720 = {2, data_020dd3c0};
extern const u16 data_020cb728[8] = {0x0922, 0x08c9, 0x30c3, 0x30a9, 0x1224, 0x1192, 0x5da6, 0x5531};
Unk_020dd3b8 data_020dd3b8 = {SceneLights_Create, 7, 5};
Unk_021c9f40_Color data_021c9f54(20, 20, 31, 31);
Unk_021c9f40_Color data_021c9f50(31, 31, 20, 31);
extern const Unk_0206513c_DefList data_020cb700 = {1, data_020dd3b4};
const Unk_0206513c_Def *data_020dd3c0[2] = {&data_020cb7b0, &data_020cb7c4};
Unk_021c9f40_Color data_021c9f48(20, 31, 20, 31);
Unk_021c9f5c sLightSwitchState;
extern const Unk_0206513c_Def data_020cb738 = {0, 0, 0, 0, 0, 0};
Unk_021c9f40_Color data_021c9f4c(20, 31, 31, 31);
Unk_021c9f40_Color data_021c9f40(20, 24, 24, 31);
extern const Unk_0206513c_Def data_020cb7b0 = {4, 0, 0, 1, 0x1000, 0x1000};
extern const Unk_0206513c_Def data_020cb74c = {1, 3, 0, 0, 0, 0};
SceneLights *gSceneLights;

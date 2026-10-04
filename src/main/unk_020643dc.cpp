#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/LightLevel.h"
#include "gfx/Camera.h"
#include "gfx/Mtx43.h"
#include "sys/ListNode.h"
#include "sys/PrioListNode.h"
#include "sys/ProcProfile.h"
#include "gfx/DebugColor.h"
#include "gfx/Rgb555.h"

struct Unk_02064674_Vec { s32 x, y, z; };



struct Unk_02064674_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
};

struct MinuteHour {
    u16 v;
};

// Element of the 3-entry array at +0x58 of SceneLights (0x44 bytes).
struct LightSwitch {
    BOOL sync(s32 mode);
    u8 isOn;
    s32 switchMode;
    LightLevel lightLevel;
    s32 fadeFrames;
};

struct ThunderSe {
    void schedule(s32 a, s32 b);
    s32 stopAll();
    s32 tickAll();
    s32 clearAll();
    s32 arm(s32 a, s32 b);
    s32 stop();
    void tick();
    s32 clear();

    /* 0x00 */ s32 seIndex;
    /* 0x04 */ s32 delayTimer;
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

    /* 0x00 */ s32 flashKind;
    /* 0x04 */ u16 color;
    /* 0x08 */ Unk_02064674_Vec direction;
    /* 0x14 */ s32 flashPhase;
    /* 0x18 */ s32 isFalling;
    /* 0x1c */ s32 intensity;
    /* 0x20 */ s32 intensityStep;
    /* 0x24 */ ThunderSe thunderSes[4];
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

    /* 0x00 */ s32 lightKind;
    /* 0x04 */ s32 lightId;
    /* 0x08 */ u16 timeOffset;
    /* 0x0c */ s32 skyColorId;
    /* 0x10 */ s16 dirPitch;
    /* 0x12 */ s16 dirYaw;
    /* 0x14 */ LightSwitch lightSwitch;
    /* 0x34 */ u16 color;
    /* 0x38 */ Unk_02064674_Vec direction;
};

struct SceneLightDef {
    /* 0x00 */ s32 lightKind;
    /* 0x04 */ s32 lightId;
    /* 0x08 */ u16 timeOffset;
    /* 0x0c */ s32 skyColorId;
    /* 0x10 */ s16 dirPitch;
    /* 0x12 */ s16 dirYaw;
};

struct SceneLightDefList {
    /* 0x00 */ s32 numLights;
    /* 0x04 */ const SceneLightDef *const *defs;
};

struct SceneLightColorSet {
    /* 0x00 */ u16 lampColorOn;
    /* 0x02 */ u16 roomColorOn;
    /* 0x04 */ s16 lampDirPitch;
    /* 0x06 */ s16 lampDirYaw;
    /* 0x08 */ u8 lightParam;
    /* 0x09 */ u8 unk_09;
};

struct IdListNode {
    /* 0x00 */ s32 prev;
    /* 0x04 */ IdListNode *next;
    /* 0x08 */ s32 id;
};

class SceneLights : public GameProc {
public:
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    void updateBaseColor();
    void setupLights();

    /* 0x050 */ s32 setupKind;
    /* 0x054 */ s32 numLights;
    /* 0x058 */ SceneLight lights[3];
    /* 0x124 */ FlashLight flashLight;
    /* 0x168 */ s16 baseColor;
    /* 0x16a */ u16 lampColorOn;
    /* 0x16c */ u16 lampColorOff;
    /* 0x16e */ u16 roomColorOn;
    /* 0x170 */ u16 roomColorOff;
    /* 0x174 */ LightLevel *roomLightLevel;
    /* 0x178 */ u8 lightParam;
};

// Object filled with a constant colour by __sinit.
// Flags and values at sLightSwitchState (0x14 bytes).
struct LightSwitchState {
    u8 isOn[2];
    u32 switchModes[2];
    u32 fadeFrames[2];
};


struct Unk_020b22ac_Dummy;

extern "C" {
extern u8 gFieldSceneKind;
extern Camera *gCamera;
extern Mtx43 gViewMtx;
}

extern SceneLights *gSceneLights;
extern LightSwitchState sLightSwitchState;
extern const u16 sFlashLightColors[];
extern const u16 sThunderSeIds[];
extern const u16 sThunderSeIdsAlt[];
extern const u8 sSceneLightSetupIds[];
extern const SceneLightColorSet sSceneLightColors[];
extern const SceneLightDefList *sSceneLightSetups[];

extern "C" {
void G3_MultMtx33(void *m);
void NNS_G3dGlbLightVector(s32 id, s32 x, s32 y, s32 z);
void NNS_G3dGlbLightColor(s32 id, u32 c);
u16 Sky_GetLightColor(s32 a);
void Vec_RotateX(Unk_02064674_Vec *v, s32 a);
void Vec_RotateY(Unk_02064674_Vec *v, s32 a);
s32 Vec_SafeNormalize(Unk_02064674_Vec *v);
s32 VEC_Mag(Unk_02064674_Vec *v);
s32 func_01ffcb0c(s32 a, s32 b);
void Clock_GetMinuteHour(MinuteHour *t);
void Time_AddHourMinute(MinuteHour a, MinuteHour b, MinuteHour *out);
s32 Scene_InTown();
s32 Scene_InTownUnk31();
void Snd_PlaySe(u32 a);
s32 Scene_GetCurrent(void);
s32 Scene_InHouseRoom(void);
void VEC_Normalize(void *a, void *b);
void List_PushBack(void);
void List_InsertAfter(void *list, void *node, void *prev);

void Light_ClampDir(Unk_02064674_Vec *in, Unk_02064674_Vec *out);
void Light_GetViewRotation(void *a, void *b);
void SceneLight_InitStub(void *p);
void LightSwitch_SetOff(s32 i, u32 v);
void LightSwitch_SetOn(s32 i, u32 a, u32 b);
}

inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }


extern "C" u8 Sky_GetLightParam(u32 x);

// ---- SceneLights::updateBaseColor
static inline void Unk_02064d6c_Adjust(Rgb555 *c) {
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

extern "C" void PrioList_Init(List *list) {
    list->head = NULL;
    list->tail = NULL;
}

extern "C" BOOL PrioList_Insert(List *list, PrioListNode *node) {
    PrioListNode *prev = (PrioListNode *)list->head;
    if (prev == NULL) {
        list->head = (ListNode *)node;
        list->tail = (ListNode *)node;
        return TRUE;
    }
    PrioListNode *cur = (PrioListNode *)prev->next;
    while (cur != NULL) {
        if (cur->priority > node->priority) {
            List_InsertAfter(list, node, prev);
            return TRUE;
        }
        prev = cur;
        cur = (PrioListNode *)cur->next;
    }
    List_InsertAfter(list, node, prev);
    return TRUE;
}

extern "C" BOOL PrioList_PushBack(void) {
    List_PushBack();
    return TRUE;
}

extern "C" IdListNode *PrioList_FindById(List *list, s32 key) {
    if (key == 0) return NULL;
    IdListNode *p;
    for (p = (IdListNode *)list->head; p != NULL; p = p->next) {
        if (key == p->id) return p;
    }
    return NULL;
}

extern "C" SceneLights *SceneLights_Create(void) {
    return new SceneLights();
}

void SceneLights::setupLights() {
    s32 id;
    s32 i = 0;
    id = Scene_GetCurrent();
    if (IsOne(gFieldSceneKind)) {
        if (Scene_InHouseRoom() == 0) i = 1;
    }
    if (i) {
        LightSwitch_SetOn(0, 2, 0);
    } else {
        LightSwitch_SetOff(0, 1);
    }
    LightSwitch_SetOff(1, 1);
    const SceneLightDefList *dl = sSceneLightSetups[setupKind];
    const SceneLightDef *const *list = dl->defs;
    s32 count = dl->numLights;
    numLights = count;
    i = 0;
    const SceneLightColorSet *rec = &sSceneLightColors[id];
    for (; i < count; i++) {
        SceneLightDef d = *list[i];
        lights[i].lightKind = d.lightKind;
        lights[i].lightId = d.lightId;
        lights[i].timeOffset = d.timeOffset;
        lights[i].skyColorId = d.skyColorId;
        lights[i].dirPitch = d.dirPitch;
        lights[i].dirYaw = d.dirYaw;
        switch (list[i]->lightKind) {
        case 3:
        case 4:
        case 5:
            lights[i].dirPitch = rec->lampDirPitch;
            lights[i].dirYaw = rec->lampDirYaw;
            SceneLight *e = &lights[i];
            e->lightSwitch.isOn = 0;
            e->lightSwitch.lightLevel.switchLightAnimated(0);
            roomLightLevel = &e->lightSwitch.lightLevel;
        }
    }
}

BOOL SceneLights::onCreate() {
    gSceneLights = this;
    s32 id = Scene_GetCurrent();
    setupKind = sSceneLightSetupIds[id];
    if (id == 0x21) {
        lampColorOn = 0x3e99;
        lampColorOff = 0x3caa;
        roomColorOn = 0x494a;
        roomColorOff = 0x518c;
        lightParam = 0xb;
    } else {
        const SceneLightColorSet *rec = &sSceneLightColors[id];
        lampColorOn = rec->lampColorOn;
        lampColorOff = 0;
        roomColorOn = rec->roomColorOn;
        roomColorOff = 0;
        lightParam = rec->lightParam;
    }
    setupLights();
    SceneLight *p;
    s32 i;
    for (p = lights, i = 0; i < numLights; p++, i++) {
        SceneLight_InitStub(p);
        p->update();
    }
    flashLight.reset();
    return TRUE;
}

BOOL SceneLights::onExecute() {
    SceneLight *p;
    s32 i;
    for (p = lights, i = 0; i < numLights; p++, i++) {
        p->update();
    }
    flashLight.update();
    updateBaseColor();
    return TRUE;
}

BOOL SceneLights::onDraw() {
    u8 l[0x24];
    s32 i;
    SceneLight *p;
    Light_GetViewRotation(&gViewMtx, l);
    for (p = lights, i = 0; i < numLights; p++, i++) {
        p->apply(l);
    }
    flashLight.apply(l);
    return TRUE;
}

BOOL SceneLights::onDelete() {
    flashLight.shutdown();
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
    u8 t = sSceneLightSetupIds[Scene_GetCurrent()];
    switch (t) {
    case 2:
    case 3:
        r = 1;
    }
    return r;
}

extern "C" s32 SceneLights_GetMatLightMask2(void) {
    s32 r = 15;
    u8 t = sSceneLightSetupIds[Scene_GetCurrent()];
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
    return gSceneLights->baseColor;
}

void SceneLights::updateBaseColor() {
    struct {
        volatile u16 a;
        Rgb555 c;
        volatile u16 b;
        u16 pad;
    } l;
    l.a = Sky_GetLightColor(3);
    l.b = l.a;
    *(u16 *)&l.c = l.b;
    if (Scene_InHouseRoom()) {
        if (lights[2].lightSwitch.isOn != 0) {
            Unk_02064d6c_Adjust(&l.c);
        }
    } else if (IsOne(gFieldSceneKind)) {
        switch (Scene_GetCurrent()) {
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
    baseColor = *(u16 *)&l.c;
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
    switch (o->setupKind) {
    case 2:
    case 3: {
        s32 t = o->roomLightLevel->getLevel();
        Rgb555 *x = (Rgb555 *)&gSceneLights->roomColorOff;
        Rgb555 *y = (Rgb555 *)&gSceneLights->roomColorOn;
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

extern "C" u8 SceneLights_GetLightParam(u32 x) {
    BOOL b = (gFieldSceneKind == 1);
    if (b) {
        if (x == 0) {
            return gSceneLights->lightParam;
        }
        return Sky_GetLightParam(x);
    }
    return Sky_GetLightParam(x);
}

s32 ThunderSe::clear()
{
    seIndex = 2;
    delayTimer = 0;
}

void ThunderSe::tick()
{
    u32 x;
    if (seIndex == 0) {
        delayTimer--;
        if (delayTimer < 0) {
            if (Scene_InTown() || Scene_InTownUnk31()) {
                x = sThunderSeIdsAlt[seIndex];
            } else {
                x = sThunderSeIds[seIndex];
            }
            Snd_PlaySe(x);
            seIndex = 2;
        }
    } else {
        seIndex = 2;
    }
}

s32 ThunderSe::stop() {}

s32 ThunderSe::arm(s32 a, s32 b)
{
    seIndex = a;
    delayTimer = b;
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

s32 ThunderSe::stopAll()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        stop();
    }
}

void ThunderSe::schedule(s32 a, s32 b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        if (seIndex == 2) {
            arm(a, b);
        }
    }
}

s32 FlashLight::reset()
{
    flashKind = 9;
    return thunderSes[0].clearAll();
}

void FlashLight::update()
{
    Unk_02064674_Vec v;
    switch (flashKind) {
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
        Vec_RotateX(&direction, gCamera->getEyeCurveAngle());
    }
    v.x = direction.x;
    v.y = direction.y;
    v.z = direction.z;
    Light_ClampDir(&v, &direction);
    thunderSes[0].tickAll();
}

void FlashLight::apply(void *m)
{
    if (flashKind != 9) {
        *(volatile s32 *)0x4000440 = 2;
        *(volatile s32 *)0x4000454 = 0;
        G3_MultMtx33(m);
        NNS_G3dGlbLightVector(2, (s16)direction.x, (s16)direction.y, (s16)direction.z);
        NNS_G3dGlbLightColor(2, color);
    } else {
        NNS_G3dGlbLightColor(2, 0);
    }
}

s32 FlashLight::shutdown()
{
    return thunderSes[0].stopAll();
}

s32 FlashLight::updateLightning()
{
    switch (flashPhase) {
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
    color = 0;
    flashPhase = 2;
    intensity = 0;
    intensityStep = 0x800;
    isFalling = 0;
    thunderSes[0].schedule(0, 0xb4);
}

s32 FlashLight::stepLightning()
{
    direction.x = 0;
    direction.y = -0x1000;
    direction.z = 0;
    intensity = intensity + intensityStep;
    if (isFalling == 0) {
        if (intensity >= 0x1000) {
            intensity = 0x1000;
            intensityStep = -0x333;
            isFalling = 1;
        }
    } else if (intensity < 0) {
        intensity = 0;
        intensityStep = 0;
        flashKind = 9;
        flashPhase = 0;
    }
    s32 c = intensity * 9 >> 12;
    color = (c << 10) | (c | (c << 5));
}

s32 FlashLight::updateColorFlash()
{
    switch (flashPhase) {
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
    color = 0;
    flashPhase = 2;
    intensity = 0;
    intensityStep = 0x548;
    isFalling = 0;
}

s32 FlashLight::stepColorFlash()
{
    direction.x = 0;
    direction.y = -0x1000;
    direction.z = 0;
    intensity = intensity + intensityStep;
    if (isFalling == 0) {
        if (intensity >= 0x1000) {
            intensity = 0x1000;
            intensityStep = -0x266;
            isFalling = 1;
        }
    } else if (intensity < 0) {
        intensity = 0;
        flashKind = 9;
        flashPhase = 0;
    }
    if (flashKind != 9) {
        s32 t = intensity;
        u16 c = sFlashLightColors[flashKind - 1];
        s32 hi = ((c & 0x7c00) >> 10) * t >> 12;
        s32 lo = (c & 0x1f) * t >> 12;
        s32 mid = ((c & 0x3e0) >> 5) * t >> 12;
        color = (hi << 10) | (lo | (mid << 5));
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
        v = sLightSwitchState.isOn[0];
        if (isOn != v) {
            isOn = v;
            switchMode = sLightSwitchState.switchModes[0];
            fadeFrames = sLightSwitchState.fadeFrames[0];
            r = TRUE;
        }
        break;
    case 5:
        v = sLightSwitchState.isOn[1];
        if (isOn != v) {
            isOn = v;
            switchMode = sLightSwitchState.switchModes[1];
            fadeFrames = sLightSwitchState.fadeFrames[1];
            r = TRUE;
        }
        break;
    }
    return r;
}

extern "C" void SceneLight_InitStub(void *) {}

s16 SceneLight::getTimeAngle()
{
    MinuteHour res, tm, now;
    tm.v = timeOffset;
    Clock_GetMinuteHour(&now);
    Time_AddHourMinute(now, tm, &res);
    u8 *p = (u8 *)&res;
    return -(((p[0] + p[1] * 60) << 15) / 0x5a0 - 0x4000);
}

extern "C" void Light_ClampDir(Unk_02064674_Vec *in, Unk_02064674_Vec *out)
{
    if (Vec_SafeNormalize(in)) {
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
    switch (lightKind) {
    case 0:
    case 1:
    case 2:
        Vec_RotateX(out, dirPitch);
        Vec_RotateY(out, getTimeAngle());
        break;
    default:
        Vec_RotateX(out, dirPitch);
        Vec_RotateY(out, dirYaw);
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
        Vec_RotateX(&v, gCamera->getEyeCurveAngle());
    }
    *(u16 *)&c0 = Sky_GetLightColor(skyColorId);
    c1 = *(u16 *)&c0;
    color = c1;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    Light_ClampDir(&w, &direction);
}

void SceneLight::calcSwitchColor()
{
    s32 t = lightSwitch.lightLevel.getLevel();
    SceneLights *g = gSceneLights;
    Unk_02064674_Color *pa = (Unk_02064674_Color *)&g->lampColorOff;
    Unk_02064674_Color *pb = (Unk_02064674_Color *)&g->lampColorOn;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    if (lightSwitch.isOn == 0) {
        if (lightSwitch.switchMode != 0) {
            r = 0;
            gr = 0;
            bl = 0;
        }
    } else if (lightSwitch.switchMode == 2) {
        r = 0x10;
        gr = 0x10;
        bl = 0xd;
    }
    color = (bl << 10) | (r | (gr << 5));
}

void SceneLight::calcLampColor()
{
    s32 t = lightSwitch.lightLevel.getLevel();
    SceneLights *g = gSceneLights;
    Unk_02064674_Color *pa = (Unk_02064674_Color *)&g->lampColorOff;
    Unk_02064674_Color *pb = (Unk_02064674_Color *)&g->lampColorOn;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    color = (bl << 10) | (r | (gr << 5));
}

void SceneLight::calcWarmColor()
{
    s32 t = lightSwitch.lightLevel.getLevel();
    color = ((((t << 4) >> 12) + 15) << 10) | ((((t << 2) >> 12) + 25) | (((t * 9 >> 12) + 20) << 5));
}

void SceneLight::updateColorAndDir()
{
    Unk_02064674_Color c0;
    volatile u16 c1;
    Unk_02064674_Vec v, w;
    switch (lightKind) {
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
        *(u16 *)&c0 = Sky_GetLightColor(skyColorId);
        c1 = *(u16 *)&c0;
        color = c1;
        v.x = 0;
        v.y = 0;
        v.z = -0x1000;
        break;
    }
    calcDirection(&v);
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    Light_ClampDir(&w, &direction);
}

void SceneLight::update()
{
    if (gSceneLights->setupKind == 0) {
        updateOutdoor();
        return;
    }
    if (lightSwitch.sync(lightKind)) {
        if (lightSwitch.isOn != 0) {
            switch (lightSwitch.switchMode) {
            case 0:
            case 3:
                lightSwitch.lightLevel.switchLight(1, 1, 0, 0x1000 / lightSwitch.fadeFrames);
                break;
            case 1:
                lightSwitch.lightLevel.switchLight(1, 1, 1, 0x800);
                break;
            default:
                lightSwitch.lightLevel.switchLight(1, 0, 0, 0x800);
                break;
            }
        } else {
            switch (lightSwitch.switchMode) {
            case 0:
            case 3:
                lightSwitch.lightLevel.switchLight(0, 1, 0, 0x1000 / lightSwitch.fadeFrames);
                break;
            default:
                lightSwitch.lightLevel.switchLight(0, 0, 0, 0x800);
                break;
            }
        }
    }
    lightSwitch.lightLevel.update();
    updateColorAndDir();
}

void SceneLight::apply(void *m)
{
    s32 id = lightId;
    *(volatile s32 *)0x4000440 = 2;
    *(volatile s32 *)0x4000454 = 0;
    G3_MultMtx33(m);
    NNS_G3dGlbLightVector(id, (s16)direction.x, (s16)direction.y, (s16)direction.z);
    NNS_G3dGlbLightColor(id, color);
}

extern "C" void LightSwitch_SetOn(s32 i, u32 a, u32 b)
{
    sLightSwitchState.isOn[i] = 1;
    sLightSwitchState.fadeFrames[i] = a;
    sLightSwitchState.switchModes[i] = b;
}

extern "C" void LightSwitch_SetOff(s32 i, u32 v)
{
    sLightSwitchState.isOn[i] = 0;
    sLightSwitchState.fadeFrames[i] = v;
}

SceneLight::~SceneLight() {}

// ---- data (definition order = creation order, solved by inverting the heapsort)
extern const SceneLightDefList sSceneLightSetup2;
extern const SceneLightDefList sSceneLightSetup1;
extern const SceneLightDefList sSceneLightSetup0;
extern const SceneLightDefList sSceneLightSetup4;
extern const SceneLightDefList sSceneLightSetup3;
extern const SceneLightDef sSceneLightDefSky0L0;
extern const SceneLightDef sSceneLightDefSky1L3;
extern const SceneLightDef sSceneLightDefSky2L1;
extern const SceneLightDef sSceneLightDefSky0L0Tilted;
extern const SceneLightDef sSceneLightDefSwitchL3;
extern const SceneLightDef sSceneLightDefSwitchL0;
extern const SceneLightDef sSceneLightDefLampL0;
extern const SceneLightDef sSceneLightDefWarmL1;
extern const SceneLightDef *sSceneLightSetup2Defs[1];
extern const SceneLightDef *sSceneLightSetup3Defs[2];
extern const SceneLightDef *sSceneLightSetup0Defs[3];
extern const SceneLightDef *sSceneLightSetup4Defs[3];
extern const SceneLightDef *sSceneLightSetup1Defs[3];

extern const SceneLightColorSet sSceneLightColors[51] = {
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
const SceneLightDef *sSceneLightSetup1Defs[3] = {&sSceneLightDefSky0L0Tilted, &sSceneLightDefSky2L1, &sSceneLightDefSwitchL3};
extern const SceneLightDef sSceneLightDefSwitchL0 = {3, 0, 0, 1, 0x1000, 0x1000};
// ---- .data
const SceneLightDef *sSceneLightSetup2Defs[1] = {&sSceneLightDefSwitchL0};
extern const u16 sThunderSeIdsAlt[2] = {0x07f3, 0};
// ---- .bss (in __sinit construction order)
DebugColor data_021c9f58(31, 20, 20, 31);
extern const SceneLightDefList sSceneLightSetup1 = {3, sSceneLightSetup1Defs};
extern const SceneLightDefList sSceneLightSetup0 = {3, sSceneLightSetup0Defs};
const SceneLightDef *sSceneLightSetup0Defs[3] = {&sSceneLightDefSky0L0, &sSceneLightDefSky1L3, &sSceneLightDefSky2L1};
extern const u8 sSceneLightSetupIds[0x34] = {
    0, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 4, 4, 2, 0, 0, 0, 1, 2, 1, 2, 0, 2, 0};
const SceneLightDefList *sSceneLightSetups[5] = {&sSceneLightSetup0, &sSceneLightSetup1, &sSceneLightSetup2, &sSceneLightSetup3, &sSceneLightSetup4};
extern const SceneLightDef sSceneLightDefSky2L1 = {2, 1, 0xc00, 1, 0, 0};
extern const SceneLightDef sSceneLightDefSky0L0Tilted = {0, 0, 0, 0, -0x2000, 0};
extern const SceneLightDefList sSceneLightSetup4 = {3, sSceneLightSetup4Defs};
const SceneLightDef *sSceneLightSetup4Defs[3] = {&sSceneLightDefSky0L0Tilted, &sSceneLightDefSky2L1, &sSceneLightDefSwitchL3};
// ---- .rodata
extern const u16 sThunderSeIds[2] = {0x04cf, 0};
extern const SceneLightDef sSceneLightDefSwitchL3 = {3, 3, 0, 1, 0x1000, 0x1000};
extern const SceneLightDef sSceneLightDefWarmL1 = {5, 1, 0, 1, 0x1000, 0x1000};
extern const SceneLightDefList sSceneLightSetup3 = {2, sSceneLightSetup3Defs};
extern const u16 sFlashLightColors[8] = {0x0922, 0x08c9, 0x30c3, 0x30a9, 0x1224, 0x1192, 0x5da6, 0x5531};
ProcProfile sSceneLightsProfile = {(void *(*)())SceneLights_Create, 7, 5};
DebugColor data_021c9f54(20, 20, 31, 31);
DebugColor data_021c9f50(31, 31, 20, 31);
extern const SceneLightDefList sSceneLightSetup2 = {1, sSceneLightSetup2Defs};
const SceneLightDef *sSceneLightSetup3Defs[2] = {&sSceneLightDefLampL0, &sSceneLightDefWarmL1};
DebugColor data_021c9f48(20, 31, 20, 31);
LightSwitchState sLightSwitchState;
extern const SceneLightDef sSceneLightDefSky0L0 = {0, 0, 0, 0, 0, 0};
DebugColor data_021c9f4c(20, 31, 31, 31);
DebugColor data_021c9f40(20, 24, 24, 31);
extern const SceneLightDef sSceneLightDefLampL0 = {4, 0, 0, 1, 0x1000, 0x1000};
extern const SceneLightDef sSceneLightDefSky1L3 = {1, 3, 0, 0, 0, 0};
SceneLights *gSceneLights;

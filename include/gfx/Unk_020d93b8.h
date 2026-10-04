#ifndef GFX_UNK_020D93B8_H
#define GFX_UNK_020D93B8_H

// Field/room camera (vtable 0x020d93b0): CameraBase + a 4x3 view matrix, follow/blend offsets, poses and modes.
// Defined in src/main/unk_0203a0cc.cpp; Unk_0203b350_V is the vector type of its method signatures. The global
// pointer gCamera points to it; Unk_021c3070 is the name of that view (the extern "C" camera functions of main and ov004).
// ov004 reads the 4-word mode parameter block at 0x21c as its own struct (by cast), main as {len, ang, vel}.
#include "types.h"
#include "sys/CameraBase.h"
#include "gfx/FxMtx43.h"
#include "gfx/CameraPose.h"

struct Unk_0203b350_V {
    s32 x, y, z;
};

class Unk_020d93b8 : public CameraBase, public FxMtx43 {
public:
    Unk_020d93b8() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    // 0x0203a9b8 .. 0x0203b28c
    BOOL initModeShake();
    void updateModeRestore();
    BOOL initModeRestore();
    void updateModeTrackPair();
    BOOL initModeTrackPair();
    void updateMode4();
    BOOL initMode4();
    void updateMode3();
    BOOL initMode3();
    void updateModeFocus();
    BOOL initModeFocus();
    void updateMode1();
    BOOL initMode1();
    void popView();
    void pushView();
    void updateModeDefault();
    BOOL initModeDefault();

    // 0x0203b350 .. 0x0203bc48
    void dragFocusTo(Unk_0203b350_V *p);
    void setLookAt(Unk_0203b350_V *a, Unk_0203b350_V *b);
    void setLookAtOrbit(Unk_0203b350_V *a, s32 r, s32 s, s32 z);
    void updateBlend();
    void setDefaultProjection();
    void updateMode();
    BOOL setMode(s32 idx);
    s32 getRoomEdgeSide(s32 *p);
    void setFocusPreset11(u8 *o, Unk_0203b350_V *v);
    BOOL clampToRoomBounds(s32 *p);
    void calcRoomBounds();
    void updateEyeCurveAngle();
    void setFovy(s32 a);
    s32 getBlendEaseOut();
    s32 getBlendEaseIn();
    s32 getBlendEnd();
    s32 getBlendDelay();
    s32 getFovTan();
    s32 getDistance();

    // 0x0203bc58 ..
    s32 getFollowSlack();
    s16 getYaw();
    s16 getPitch();
    s16 getEyeCurveAngle();
    Unk_0203b350_V *getEye();
    void resetOffsets();
    void setBlendParams(u32 *src);
    void setBlendPreset(s32 i);
    void lerpPoses(s32 a, s32 b, s32 n);
    void loadPose(s32 i, CameraPose *out);

    /* 0x80 */ s32 distanceOffset, unk_84, unk_88, unk_8c, nearOffset, farOffset;
    /* 0x98 */ s16 fovyOffset, pitchOffset, yawOffset, unk_9e;
    /* 0xa0 */ s32 followSlackOffset, unk_a4, blendDelayOffset, blendEndOffset, blendEaseInOffset, blendEaseOutOffset;
    /* 0xb8 */ s32 blendDelay, blendEnd, blendEaseIn, blendEaseOut;
    /* 0xc8 */ s32 blendTime;
    /* 0xcc */ s32 invViewMtx[9];
    /* 0xf0 */ u8 pad_f0[0xfc - 0xf0];
    /* 0xfc */ CameraPose target;
    /* 0x110 */ Unk_0203b350_V targetFocus;
    /* 0x11c */ s16 saved, savedPitch;
    /* 0x120 */ s32 savedDistance, savedOffset, savedOffsetY, savedOffsetZ, savedFocus, savedFocusY, savedFocusZ;
    /* 0x13c */ s32 savedEye, savedEyeY, savedEyeZ;
    /* 0x148 */ s16 current, currentPitch;
    /* 0x14c */ s32 currentDistance, currentOffset, currentOffsetY, currentOffsetZ, currentFocus, currentFocusY, currentFocusZ;
    /* 0x168 */ s32 eye, eyeY, eyeZ;
    /* 0x174 */ u8 pad_174[0x188 - 0x174];
    /* 0x188 */ s32 lookTarget, lookTargetY, lookTargetZ, lookEye, lookEyeY, lookEyeZ, lookUp, lookUpY, lookUpZ;
    /* 0x1ac */ s16 eyeCurveAngle;
    /* 0x1ae */ s16 pad_1ae;
    /* 0x1b0 */ s32 aspect, nearClip, farClip;
    /* 0x1bc */ u8 pad_1bc[0x1c8 - 0x1bc];
    /* 0x1c8 */ s16 fovy;
    /* 0x1ca */ u8 focusIsPair;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ Unk_0203b350_V focusPointA;
    /* 0x1d8 */ Unk_0203b350_V focusPointB;
    /* 0x1e4 */ s32 closeUpFactorTarget, closeUpFactor, presetCol, presetRow;
    /* 0x1f4 */ u8 viewPushed, focusYawLocked, roomFocusSide, seMuted;
    /* 0x1f8 */ s32 mode, prevMode, startMode;
    /* 0x204 */ s32 restoreFocus, restoreFocusY, restoreFocusZ, restoreEye, restoreEyeY, restoreEyeZ;
    /* 0x21c */ s32 modeParam;
    /* 0x220 */ u8 pad_220[0x14];
};

typedef Unk_020d93b8 Unk_021c3070;

#endif // GFX_UNK_020D93B8_H

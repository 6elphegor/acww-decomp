// mwcc-flags: -nothumb
// NitroSystem G3D (glbstate.c): NNS_G3dGlb, the global geometry state (projection and camera matrices, light and
// material command packets, base SRT, the inverse matrices and the look-at vectors), DTCM .data
// 0x027e00c8-0x027e032c, zero in the image. A data-only unit: the NNS_G3dGlb* functions are in autoload_2
// (src/autoload_2/unk_021040ac.c) and ITCM, and a unit cannot own ranges in two modules. Placed with the SDK's
// DTCM section pragma (see unk_027e0000.c). Other code uses labels of members (projMtx, cameraMtx, lightVec,
// lightColor, prmBaseRot/Trans/Scale, invCameraMtx, srtCameraMtx, invSrtCameraMtx, and invCameraProjMtx, which
// the game's camera code declares as a block of its own); they are recorded in config/usa/arm9/dtcm/lcf_symbols.txt.
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned long u32;
typedef signed long fx32;

typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 m[4][4]; } MtxFx44;
typedef struct { fx32 m[4][3]; } MtxFx43;
typedef struct { fx32 m[3][3]; } MtxFx33;

typedef struct NNSG3dGlb {
    u32 cmd0;                 // 0x000
    u32 mtxmode_proj;         // 0x004
    MtxFx44 projMtx;          // 0x008
    u32 mtxmode_posvec;       // 0x048
    MtxFx43 cameraMtx;        // 0x04c
    u32 cmd1;                 // 0x07c
    u32 lightVec[4];          // 0x080
    u32 cmd2;                 // 0x090
    u32 prmMatColor0;         // 0x094
    u32 prmMatColor1;         // 0x098
    u32 prmPolygonAttr;       // 0x09c
    u32 prmViewPort;          // 0x0a0
    u32 cmd3;                 // 0x0a4
    u32 lightColor[4];        // 0x0a8
    u32 cmd4;                 // 0x0b8
    MtxFx33 prmBaseRot;       // 0x0bc
    VecFx32 prmBaseTrans;     // 0x0e0
    VecFx32 prmBaseScale;     // 0x0ec
    u32 prmTexImageParam;     // 0x0f8
    u32 flag;                 // 0x0fc
    MtxFx43 invCameraMtx;     // 0x100
    MtxFx43 srtCameraMtx;     // 0x130
    MtxFx43 invSrtCameraMtx;  // 0x160
    MtxFx43 invBaseMtx;       // 0x190
    MtxFx44 invProjMtx;       // 0x1c0
    MtxFx44 invCameraProjMtx; // 0x200
    VecFx32 camPos;           // 0x240
    VecFx32 camUp;            // 0x24c
    VecFx32 camTarget;        // 0x258
} NNSG3dGlb;                  // 0x264

#pragma section DTCM begin

// NNS_G3dGlb
NNSG3dGlb data_027e00c8;

#pragma section DTCM end

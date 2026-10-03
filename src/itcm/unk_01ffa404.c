// mwcc-flags: -nothumb -O4,p
// I002c: itcm 0x01ffa404-0x01ffa494, NitroSDK OS_SetIrqFunction (1 function)
// I001e: itcm 0x01ff9e10-0x01ffa2ec, NitroSystem g3d Maya texture matrix + NitroSDK MI GX-command DMA (MI_SendGXCommandAsync, MI_WaitDma, MIi_DmaSetParams, FIFO callbacks) (8 functions). ARM, mwcc 1.2/base, -O4,p.
// NitroSDK types: s32/u32 are long (this matters: int and long operands are not folded together)
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define NULL 0
#define FX32_ONE ((fx32)0x00001000L)

typedef volatile u64 vu64;
typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;

/* ---------------------------------------------------------------- NitroSystem g3d */
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;

// NNSG3dMatAnmResult (texture SRT part)
typedef struct MatAnm {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;   // 0x18
    fx32 scaleT;   // 0x1c
    fx16 sinR;     // 0x20
    fx16 cosR;     // 0x22
    fx32 transS;   // 0x24
    fx32 transT;   // 0x28
    u16 origW;     // 0x2c
    u16 origH;     // 0x2e
    fx32 magW;     // 0x30
    fx32 magH;     // 0x34
} MatAnm;

// NNSG3dAnmObj
typedef struct AnmObj {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    void *funcAnm;
    struct AnmObj *next;   // 0x10
    void *resTex;          // 0x14
    u8 priority;           // 0x18
    u8 numMapData;         // 0x19
    u16 mapData[1];        // 0x1a
} AnmObj;

// NNSG3dResMdl (view)
typedef struct ResMdl {
    u32 size;
    u32 ofsSbc;      // 0x04
    u32 ofsMat;      // 0x08
    u32 ofsShp;      // 0x0c
    u32 ofsEvpMtx;   // 0x10
    u8 sbcType;      // 0x14
    u8 scalingRule;  // 0x15
    u8 texMtxMode;   // 0x16
    u8 numNode;
    u32 pad18;
    fx32 posScale;   // 0x1c
    fx32 invPosScale; // 0x20
} ResMdl;

// NNSG3dResDict / entry header
typedef struct ResDict { u8 revision; u8 numEntry; u16 sizeDictBlk; u16 dummy_; u16 ofsEntry; } ResDict;
typedef struct ResDictEntryHeader { u16 sizeUnit; u16 ofsName; u8 data[4]; } ResDictEntryHeader;

// NNSG3dResMat / NNSG3dResMatData
typedef struct ResMat { u16 ofsDictTexToMatList; u16 ofsDictPlttToMatList; ResDict dict; } ResMat;
typedef struct ResDictMatData { u32 offset; } ResDictMatData;
typedef struct ResMatData {
    u16 itemTag;            // 0x00
    u16 size;               // 0x02
    u32 diffAmb;            // 0x04
    u32 specEmi;            // 0x08
    u32 polyAttr;           // 0x0c
    u32 polyAttrMask;       // 0x10
    u32 texImageParam;      // 0x14
    u32 texImageParamMask;  // 0x18
    u16 texPlttBase;        // 0x1c
    u16 flag;               // 0x1e
    u16 origWidth, origHeight; // 0x20
    fx32 magW, magH;        // 0x24
    fx32 texMtx[1];         // 0x2c: scale / rotation / translation, present according to flag
} ResMatData;

typedef struct VecFx32 { fx32 x, y, z; } VecFx32;
typedef struct A3 { s32 a[3]; } A3;
typedef struct MtxFx33 { fx32 a[9]; } MtxFx33;

// NNSG3dJntAnmResult (0x58 bytes)
typedef struct JntAnm {
    u32 flag;          // 0x00
    VecFx32 scale;     // 0x04
    VecFx32 scaleEx0;  // 0x10
    VecFx32 scaleEx1;  // 0x1c
    MtxFx33 rot;       // 0x28
    VecFx32 trans;     // 0x4c
} JntAnm;

// NNSG3dVisAnmResult
typedef struct VisAnm { BOOL isVisible; } VisAnm;

// NNSG3dResNodeInfo / NNSG3dResNodeData
typedef struct ResNodeInfo { ResDict dict; } ResNodeInfo;
typedef struct ResNodeData { u16 flag; fx16 _00; } ResNodeData;

// NNSG3dResShp / NNSG3dResShpData
typedef struct ResShp { ResDict dict; } ResShp;
typedef struct ResShpData {
    u16 itemTag;
    u16 size;
    u32 flag;
    u32 ofsDL;     // 0x08
    u32 sizeDL;    // 0x0c
} ResShpData;

// joint scale cache entry (NNS_G3dRSOnGlb)
typedef struct ScaleCache { VecFx32 s; VecFx32 inv; } ScaleCache;

struct RS;
// NNSG3dRenderObj (view)
typedef struct RenderObj {
    u32 flag;            // 0x00
    ResMdl *resMdl;      // 0x04
    AnmObj *anmMat;      // 0x08
    void (*funcBlendMat)(MatAnm *, AnmObj *, u32); // 0x0c
    AnmObj *anmJnt;      // 0x10
    BOOL (*funcBlendJnt)(JntAnm *, AnmObj *, u32); // 0x14
    AnmObj *anmVis;      // 0x18
    BOOL (*funcBlendVis)(VisAnm *, AnmObj *, u32); // 0x1c
    void (*cbFunc)(struct RS *); // 0x20
    u8 cbCmd;            // 0x24
    u8 cbTiming;         // 0x25
    u16 dummy_;
    void (*cbInitFunc)(struct RS *); // 0x28
    void *ptrUser;       // 0x2c
    u8 *ptrUserSbc;      // 0x30
    JntAnm *recJntAnm;   // 0x34
    MatAnm *recMatAnm;   // 0x38
    u32 hintMatAnmExist[2]; // 0x3c
    u32 hintJntAnmExist[2]; // 0x44
    u32 hintVisAnmExist[2]; // 0x4c
} RenderObj;

// NNSG3dRS (0x188 bytes)
typedef struct RS {
    u8 *c;                    // 0x00
    RenderObj *pRenderObj;    // 0x04
    u32 flag;                 // 0x08
    void (*cbVecFunc[32])(struct RS *); // 0x0c
    u8 cbVecTiming[32];       // 0x8c
    u8 currentNode;           // 0xac
    u8 currentMat;            // 0xad
    u8 currentNodeDesc;       // 0xae
    u8 dummy_;
    MatAnm *pMatAnmResult;    // 0xb0
    JntAnm *pJntAnmResult;    // 0xb4
    VisAnm *pVisAnmResult;    // 0xb8
    u32 isMatCached[2];       // 0xbc
    u32 isScaleCacheOne[2];   // 0xc4
    u32 isEnvCached[2];       // 0xcc
    ResNodeInfo *pResNodeInfo; // 0xd4
    ResMat *pResMat;          // 0xd8
    ResShp *pResShp;          // 0xdc
    fx32 posScale;            // 0xe0
    fx32 invPosScale;         // 0xe4
    void (*funcJntScale)(JntAnm *, const fx32 *, const u8 *, u32); // 0xe8
    void (*funcJntMtx)(JntAnm *); // 0xec
    void (*funcTexMtx)(MatAnm *); // 0xf0
    MatAnm tmpMatAnmResult;   // 0xf4
    JntAnm tmpJntAnmResult;   // 0x12c
    VisAnm tmpVisAnmResult;   // 0x184
} RS;

#define reg_OS_IF  (*(vu32 *)0x04000214)

typedef struct OSIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

extern OSIrqCallbackInfo data_027e0058[]; // OSi_IrqCallbackInfo (DTCM)
extern u8 data_027e0000[];                // DTCM start (OSi_IrqFunctionTable)

extern u32 OS_DisableInterrupts(void);                            // OS_DisableInterrupts (assembly)
extern u32 OS_RestoreInterrupts(u32 enabled);                     // OS_RestoreInterrupts (assembly)
extern u32 func_01ffa314(void);                            // OS_EnableInterrupts (assembly)
extern void func_01ffa3c0(void);                           // OS_Halt (assembly)
extern u32 OS_EnableIrqMask(u32 intr);                        // OS_EnableIrqMask

extern volatile u64 data_021fcf24;

                         // OSi_TickCounter

/* PROTOS */
/* END PROTOS */

// OS_SetIrqFunction
void OS_SetIrqFunction(u32 intrBit, void (*function)(void)) {
    int n;
    for (n = 0; n < 22; n++) {
        if (intrBit & 1) {
            OSIrqCallbackInfo *info = 0;
            if (n >= 8 && n <= 11) {
                info = &data_027e0058[n - 8];
            } else if (n >= 3 && n <= 6) {
                info = &data_027e0058[n + 1];
            } else {
                ((void (**)(void))data_027e0000)[n] = function;
            }
            if (info) {
                info->func = (void (*)(void *))function;
                info->arg = 0;
                info->enable = 1;
            }
        }
        intrBit >>= 1;
    }
}


#include "nitro/mtx.h"
// mwcc-flags: -nothumb -O4,p
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

/* ---------------------------------------------------------------- NitroSDK CP / OS */
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;

#define reg_CP_DIVCNT     (*(vu16 *)0x04000280)
#define reg_CP_DIV_NUMER  (*(vu64 *)0x04000290)
#define reg_CP_DIV_DENOM  (*(vu64 *)0x04000298)
#define reg_CP_SQRTCNT    (*(vu16 *)0x040002b0)
#define reg_CP_SQRT_PARAM (*(vu64 *)0x040002b8)

#define reg_OS_IME (*(vu16 *)0x04000208)
#define reg_OS_IE  (*(vu32 *)0x04000210)
#define reg_OS_IF  (*(vu32 *)0x04000214)

typedef struct OSIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

extern OSIrqCallbackInfo data_027e0058[]; // OSi_IrqCallbackInfo (DTCM)
extern u16 data_027e00b8[];               // OSi_IrqCallbackInfoIndex
extern u8 data_027e0000[];                // DTCM start (SDK_AUTOLOAD_DTCM_START)

static inline BOOL OS_DisableIrq(void) {
    u16 prep = reg_OS_IME;
    reg_OS_IME = 0;
    return (BOOL)prep;
}

static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep = reg_OS_IME;
    reg_OS_IME = (u16)enable;
    return (BOOL)prep;
}

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

// NNS_G3dGlb (view)
typedef struct GlbView {
    u8 pad[0x94];
    u32 prmMatColor0;    // 0x94
    u32 prmMatColor1;    // 0x98
    u32 prmPolygonAttr;  // 0x9c
} GlbView;

// NNSG3dGeBuffer
typedef struct GeBuffer {
    u32 idx;
    u32 data[192];
} GeBuffer;

#define reg_G3X_GXFIFO (*(vu32 *)0x04000400)

extern void (*data_0213bd34[])(JntAnm *, const fx32 *, const u8 *, u32); // joint scale functions (by scaling rule)
extern void (*data_0213bd28[])(JntAnm *); // joint matrix functions (by scaling rule)
extern void (*data_0213bd40[])(MatAnm *); // texture matrix functions (by texture matrix mode)
extern void (*data_0213be50[])(RS *, u32); // NNS_G3dFuncSbcTable
extern void (*data_0213bd60[])(RS *, u32, const ResMatData *, u32); // NNS_G3dFuncSbcMatTable
extern RS *data_021f5cc0;                 // NNS_G3dRS
extern ScaleCache data_021f6ac4[];        // joint scale cache
extern const u8 data_02135d38[][4];       // pivot index table
extern void (*data_0213bd70[])(RS *, u32, const ResShpData *, u32); // NNS_G3dFuncSbcShpTable
extern void (*const data_01ff8ab4[8])(MtxFx44 *, const MatAnm *); // texture SRT functions (table inside itcm .text)
extern MatAnm data_021f5cc4[];            // NNS_G3dRSOnGlb material cache
extern GlbView data_027e00c8;             // NNS_G3dGlb
extern const u32 data_02135d18[8];        // material colour bit masks
extern GeBuffer *data_021f89c4;           // NNS_G3dGeBuffer
extern volatile int data_021f89c8;        // DL send busy flag
extern int data_021f89cc;                 // use the fast GX DMA
extern u32 data_0213bfec;                 // GXi_DmaId

extern void MIi_CpuClear32(u32 data, void *dest, u32 size); // MIi_CpuClear32
extern void MIi_CpuClearFast(u32 data, void *dest, u32 size); // MIi_CpuClearFast
extern void MIi_CpuCopyFast(const void *src, void *dest, u32 size); // MIi_CpuCopyFast
extern void MIi_CpuSend32(const void *src, volatile void *dest, u32 size); // MIi_CpuSend32
extern void MI_SendGXCommandAsyncFast(u32 dmaNo, const void *src, u32 size, void (*cb)(void *), void *arg); // MI_SendGXCommandAsyncFast
extern void updateHintVec_(u32 *vec, AnmObj *anm);          // updateHintVec
extern void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 size, void (*cb)(void *), void *arg); // MI_SendGXCommandAsync
extern void FX_DivAsync(fx32 numer, fx32 denom);         // FX_DivAsync
extern fx32 FX_GetDivResult(void);                           // FX_GetDivResult
extern void MI_Zero36B(void *dst);                      // MI_Zero36B (Thumb)
extern void StrmCallback(void *p, u32 n);

static inline void *GetResDataByIdx(const ResDict *dict, u32 idx)
{
    const ResDictEntryHeader *hdr = (const ResDictEntryHeader *)((u8 *)dict + dict->ofsEntry);
    return (void *)&hdr->data[hdr->sizeUnit * idx];
}

static inline ResMatData *GetMatDataByIdx(const ResMat *pResMat, u32 idx)
{
    ResDictMatData *pDictData = (ResDictMatData *)GetResDataByIdx(&pResMat->dict, idx);
    return (ResMatData *)((u8 *)pResMat + pDictData->offset);
}

static inline BOOL BitVecCheck(const u32 *vec, u32 idx)
{
    return (BOOL)(vec[idx >> 5] & (1 << (idx & 31)));
}

static inline void BitVecReset(u32 *vec, u32 idx)
{
    vec[idx >> 5] &= ~(1 << (idx & 31));
}

static inline ResNodeData *GetNodeDataByIdx(const ResNodeInfo *info, u32 idx)
{
    ResDictMatData *pDictData = (ResDictMatData *)GetResDataByIdx(&info->dict, idx);
    return (ResNodeData *)((u8 *)info + pDictData->offset);
}

static inline ResShpData *GetShpDataByIdx(const ResShp *shp, u32 idx)
{
    ResDictMatData *pDictData = (ResDictMatData *)GetResDataByIdx(&shp->dict, idx);
    return (ResShpData *)((u8 *)shp + pDictData->offset);
}

static inline void BitVecSet(u32 *vec, u32 idx)
{
    vec[idx >> 5] |= 1 << (idx & 31);
}

/* ---------------------------------------------------------------- NitroSDK MI (GX command DMA) */
// MIi_GXDmaParams (DTCM)
typedef struct MIGXDmaParams {
    volatile BOOL isBusy;   // 0x00
    u32 dmaNo;              // 0x04
    u32 src;                // 0x08
    u32 length;             // 0x0c
    void (*callback)(void *); // 0x10
    void *arg;              // 0x14
    u32 fifoCond;           // 0x18
    void (*fifoFunc)(void); // 0x1c
} MIGXDmaParams;
extern MIGXDmaParams data_027e0414;

#define reg_G3X_GXSTAT (*(vu32 *)0x04000600)

static inline u32 G3X_GetCommandFifoStatus(void) {
    return (reg_G3X_GXSTAT & 0x07000000) >> 24;
}

static inline void G3X_SetFifoIntrCond(u32 cond) {
    reg_G3X_GXSTAT = ((reg_G3X_GXSTAT & ~0xc0000000) | (cond << 30));
}

typedef enum { GX_FIFOINTR_COND_DISABLE = 0, GX_FIFOINTR_COND_UNDERHALF = 1, GX_FIFOINTR_COND_EMPTY = 2 } GXFifoIntrCond;

static inline void G3X_SetFifoIntrCond2(GXFifoIntrCond cond) {
    reg_G3X_GXSTAT = ((reg_G3X_GXSTAT & ~0xc0000000) | (cond << 30));
}

static inline void G3X_SetFifoIntrCond3(u32 cond) {
    u32 v = reg_G3X_GXSTAT & ~0xc0000000;
    reg_G3X_GXSTAT = v | (cond << 30);
}

static inline void MIi_CallCallback(void (*callback)(void *), void *arg) {
    if (callback) {
        callback(arg);
    }
}

extern u32 OS_DisableInterrupts(void);                            // OS_DisableInterrupts (assembly)
extern u32 OS_RestoreInterrupts(u32 enabled);                     // OS_RestoreInterrupts (assembly)
extern void (*OS_GetIrqFunction(u32 intrBit))(void);           // OS_GetIrqFunction
extern void OS_SetIrqFunction(u32 intrBit, void (*function)(void)); // OS_SetIrqFunction
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg); // OSi_EnterDmaCallback
extern void Fatal_Trap(void);                           // OS_Terminate (Thumb, main)

/* PROTOS */
void func_01ff8000(const CPContext *context);
void func_01ff806c(CPContext *context);
u32 OS_DisableIrqMask(u32 intr);
u32 OS_EnableIrqMask(u32 intr);
void func_01ff8160(void);
u32 OS_ResetRequestIrqMask(u32 intr);
u32 OS_SetIrqMask(u32 intr);
void OSi_IrqCallback(int index);
void OSi_IrqDma0(void);
void OSi_IrqDma1(void);
void OSi_IrqDma2(void);
void OSi_IrqDma3(void);
void OSi_IrqTimer0(void);
void OSi_IrqTimer1(void);
void OSi_IrqTimer2(void);
void OSi_IrqTimer3(void);
void simpleUnlock_(void *arg);
void texmtxCalc_flagRS_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagR_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagS_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagTRS_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagTR_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagTS_(MtxFx44 *m, const MatAnm *a);
void texmtxCalc_flagT_(MtxFx44 *m, const MatAnm *a);
void func_01ff8740(MtxFx44 *m, const MatAnm *a);
void func_01ff8858(u32 *vec, const AnmObj *anm);
void G3dDrawInternal_(RS *rs, RenderObj *obj);
void G3dDrawInternal_Loop_(RS *rs);
void NNS_G3dDraw(RenderObj *obj);
void NNS_G3dGeBufferOP_N(u32 op, const u32 *args, u32 num);
void NNS_G3dGeFlushBuffer(void);
void NNS_G3dGeSendDL(const void *src, u32 szByte);
void NNS_G3dGeWaitSendDL(void);
void NNSi_G3dFuncSbc_MAT(RS *rs, u32 opt);
void NNSi_G3dFuncSbc_MAT_InternalDefault(RS *rs, u32 opt, const ResMatData *mat, u32 idxMat);
void NNSi_G3dFuncSbc_MTX(RS *rs, u32 opt);
void NNSi_G3dFuncSbc_NODE(RS *rs, u32 opt);
void NNSi_G3dFuncSbc_NODEDESC(RS *rs, u32 opt);
void func_01ff99c8(RS *rs, u32 opt);
void func_01ff99f4(RS *rs, u32 opt);
void func_01ff9a60(RS *rs, u32 opt);
void NNSi_G3dFuncSbc_SHP(RS *rs, u32 opt);
void NNSi_G3dFuncSbc_SHP_InternalDefault(RS *rs, u32 opt, const ResShpData *shp, u32 idxShp);
void NNSi_G3dGetJointScaleMaya(JntAnm *pResult, const fx32 *p, const u8 *cmd, u32 srtflag);
void NNSi_G3dSendJointSRTMaya(JntAnm *pResult);
void func_01ff9e10(MatAnm *pResult);
void func_01ff9f5c(void *p);
void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 commandLength, void (*callback)(void *), void *arg);
void MI_WaitDma(u32 dmaNo);
void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
void MIi_DMACallback(void *arg);
void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void MIi_FIFOCallback(void);

// MIi_FIFOCallback
void MIi_FIFOCallback(void) {
    u32 length;
    u32 src;
    if (data_027e0414.length == 0) {
        return;
    }
    length = (data_027e0414.length >= 472) ? 472 : data_027e0414.length;
    src = data_027e0414.src;
    data_027e0414.length -= length;
    data_027e0414.src = src + length;
    if (data_027e0414.length == 0) {
        OSi_EnterDmaCallback(data_027e0414.dmaNo, MIi_DMACallback, NULL);
        MIi_DmaSetParams(data_027e0414.dmaNo, src, 0x04000400, 0xc4400000 | (length >> 2));
        (void)OS_ResetRequestIrqMask(0x200000);
    } else {
        MIi_DmaSetParams(data_027e0414.dmaNo, src, 0x04000400, 0x84400000 | (length >> 2));
        (void)OS_ResetRequestIrqMask(0x200000);
    }
}

// MIi_DmaSetParams
void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl) {
    u32 enabled = OS_DisableInterrupts();
    vu32 *p = (vu32 *)(0x040000b0 + dmaNo * 12);
    *p = src;
    *(p + 1) = dest;
    *(p + 2) = ctrl;
    (void)OS_RestoreInterrupts(enabled);
}

// MIi_DMACallback (end of a GX command DMA)
void MIi_DMACallback(void *arg) {
    (void)OS_DisableIrqMask(0x200000);
    G3X_SetFifoIntrCond2(data_027e0414.fifoCond);
    OS_SetIrqFunction(0x200000, data_027e0414.fifoFunc);
    data_027e0414.isBusy = FALSE;
    MIi_CallCallback(data_027e0414.callback, data_027e0414.arg);
}

// MIi_CheckDma0SourceAddress
void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir) {
    if (dmaNo == 0) {
        u32 addStart = src & 0xff000000;
        u32 addEnd;
        switch (dir) {
        case 0:
            addEnd = src + size;
            break;
        case 0x800000:
            addEnd = src - size;
            break;
        default:
            addEnd = src;
            break;
        }
        addEnd &= 0xff000000;
        if (addStart == 0x04000000 || addStart >= 0x08000000 || addEnd == 0x04000000 || addEnd >= 0x08000000) {
            Fatal_Trap();
        }
    }
}

// MI_WaitDma
void MI_WaitDma(u32 dmaNo) {
    u32 enabled = OS_DisableInterrupts();
    vu32 *dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000) {
    }
    if (dmaNo == 0) {
        vu32 *p = (vu32 *)(0x040000b0 + dmaNo * 12);
        *p = 0;
        *(p + 1) = 0;
        *(p + 2) = 0x81400001;
    }
    (void)OS_RestoreInterrupts(enabled);
}

// MI_SendGXCommandAsync
void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 commandLength, void (*callback)(void *), void *arg) {
    if (commandLength == 0) {
        if (callback) {
            callback(arg);
        }
        return;
    }
    while (data_027e0414.isBusy) {
    }
    while (!(G3X_GetCommandFifoStatus() & 2)) {
    }
    data_027e0414.isBusy = TRUE;
    data_027e0414.dmaNo = dmaNo;
    data_027e0414.src = (u32)src;
    data_027e0414.length = commandLength;
    data_027e0414.callback = callback;
    data_027e0414.arg = arg;
    MIi_CheckDma0SourceAddress(dmaNo, (u32)src, commandLength, 0);
    MI_WaitDma(dmaNo);
    {
        u32 enabled = OS_DisableInterrupts();
        data_027e0414.fifoCond = (reg_G3X_GXSTAT & 0xc0000000) >> 30;
        data_027e0414.fifoFunc = OS_GetIrqFunction(0x200000);
        reg_G3X_GXSTAT = (reg_G3X_GXSTAT & ~0xc0000000) | (1 << 30);
        OS_SetIrqFunction(0x200000, MIi_FIFOCallback);
        (void)OS_EnableIrqMask(0x200000);
        MIi_FIFOCallback();
        (void)OS_RestoreInterrupts(enabled);
    }
}

// calls StrmCallback(p, 1)
void func_01ff9f5c(void *p) {
    StrmCallback(p, 1);
}

// NNS g3d texture matrix (Maya): build the 4x4 texture matrix and send it
void func_01ff9e10(MatAnm *pResult) {
    struct {
        u32 op;
        u32 mode;
        MtxFx44 m;
        u32 mode2;
    } cmd;
    if (pResult->flag & 8) {
        cmd.op = 0x00101610;
    } else {
        cmd.op = 0x00101810;
    }
    cmd.mode = 3;
    cmd.mode2 = 2;
    cmd.m._02 = cmd.m._03 = cmd.m._12 = cmd.m._13 = cmd.m._20 = cmd.m._21 = cmd.m._22 = cmd.m._23 = cmd.m._32 = 0;
    cmd.m._33 = FX32_ONE;
    data_01ff8ab4[pResult->flag & 7](&cmd.m, pResult);
    if (pResult->magW != FX32_ONE) {
        cmd.m._00 = (fx32)(((fx64)pResult->magW * cmd.m._00) >> 12);
        cmd.m._01 = (fx32)(((fx64)pResult->magW * cmd.m._01) >> 12);
        cmd.m._30 = (fx32)(((fx64)pResult->magW * cmd.m._30) >> 12);
    }
    if (pResult->magH != FX32_ONE) {
        cmd.m._10 = (fx32)(((fx64)pResult->magH * cmd.m._10) >> 12);
        cmd.m._11 = (fx32)(((fx64)pResult->magH * cmd.m._11) >> 12);
        cmd.m._31 = (fx32)(((fx64)pResult->magH * cmd.m._31) >> 12);
    }
    NNS_G3dGeBufferOP_N(cmd.op, (u32 *)&cmd + 1, 18);
}


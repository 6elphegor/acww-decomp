// mwcc-flags: -nothumb -O4,p
// I002d: itcm 0x01ffa4a0-0x01ffb040, NitroSDK OSi_EnterDmaCallback / idle loop / PXI recv IRQ / callback dispatch / OS_GetTick + NitroSystem g3d joint animation blend and bca evaluation (10 functions)
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

extern u32 func_01ffa2ec(void);                            // OS_DisableInterrupts (assembly)
extern u32 func_01ffa3d4(u32 enabled);                     // OS_RestoreInterrupts (assembly)
extern u32 func_01ffa314(void);                            // OS_EnableInterrupts (assembly)
extern void func_01ffa3c0(void);                           // OS_Halt (assembly)
extern u32 func_01ff8128(u32 intr);                        // OS_EnableIrqMask

extern volatile u64 data_021fcf24;                         // OSi_TickCounter

typedef struct ResJntAnm {
    u32 anmHeader;     // 0x00
    u16 numFrame;      // 0x04
    u16 numNode;       // 0x06
    u32 flag;          // 0x08
    u32 ofsRot3;       // 0x0c
    u32 ofsRot5;       // 0x10
    u16 ofsAnm[1];     // 0x14
} ResJntAnm;

typedef struct ScaleTmp { fx32 s; fx32 inv; } ScaleTmp;

extern RS *data_021f5cc0;                 // NNS_G3dRS
extern const u8 data_02135e5c[][4];       // pivot index tables

extern void func_02115ea8(u32 data, void *dest, u32 size);     // MIi_CpuClearFast
extern fx32 func_01ffc5a4(fx32 a, fx32 b);                     // FX_Div
extern void func_01ffc714(VecFx32 *src, VecFx32 *dst);         // VEC_Normalize
extern void func_01ffc928(VecFx32 *a, VecFx32 *b, VecFx32 *dst); // VEC_CrossProduct
extern void func_02104518(VecFx32 *dst, const VecFx32 *src, fx32 ratio, u32 isOne);   // blend scale
extern void func_02106f90(fx32 *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_0210710c(fx32 *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_0210685c(MtxFx33 *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_02106ba8(ScaleTmp *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_02106d60(ScaleTmp *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_02107460(JntAnm *pResult);
extern void func_02107298(JntAnm *pResult);
extern void func_021073f8(JntAnm *pResult);
extern void func_01ffb040(MtxFx33 *dst, fx32 frame, const u32 *pData, const ResJntAnm *pJntAnm);
extern void func_01ffaab0(const ResJntAnm *pJntAnm, u32 dataIdx, fx32 frame, JntAnm *pResult);

/* PROTOS */
/* END PROTOS */

#define reg_PXI_FIFO_CNT (*(vu16 *)0x04000184)
#define reg_PXI_SEND_FIFO (*(vu32 *)0x04000188)
#define reg_PXI_RECV_FIFO (*(vu32 *)0x04100000)

extern void (*data_027e0394[32])(u32 tag, u32 data, u32 err);   // PXI callback table

typedef union PXIFifoMessage {
    u32 raw;
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
} PXIFifoMessage;

static inline int PXIi_RecvWordByFifo(PXIFifoMessage *data) {
    u32 enabled;
    if (reg_PXI_FIFO_CNT & 0x4000) {
        reg_PXI_FIFO_CNT |= 0xc000;
        return -3;
    }
    enabled = func_01ffa2ec();
    if (reg_PXI_FIFO_CNT & 0x100) {
        func_01ffa3d4(enabled);
        return -4;
    }
    data->raw = reg_PXI_RECV_FIFO;
    func_01ffa3d4(enabled);
    return 0;
}

static inline int PXIi_SendWordByFifo(u32 data) {
    u32 enabled;
    if (reg_PXI_FIFO_CNT & 0x4000) {
        reg_PXI_FIFO_CNT |= 0xc000;
        return -3;
    }
    enabled = func_01ffa2ec();
    if (reg_PXI_FIFO_CNT & 2) {
        func_01ffa3d4(enabled);
        return -1;
    }
    reg_PXI_SEND_FIFO = data;
    func_01ffa3d4(enabled);
    return 0;
}

typedef struct CbEntry {
    void (*func)(void *);
    void *arg;
    u8 tag;
} CbEntry;
extern CbEntry data_027e032c[];

// NNSi_G3dAnmCalcGetRotMtx
BOOL func_01ffaea0(MtxFx33 *pMtx, const fx16 *pArray3, const fx16 *pArray5, u32 idx) {
    if (idx & 0x8000) {
        u32 n;
        fx32 A;
        fx32 B;
        const fx16 *p;
        u32 pivot;
        pMtx->a[0] = pMtx->a[1] = pMtx->a[2] = pMtx->a[3] = pMtx->a[4] = pMtx->a[5] = pMtx->a[6] = pMtx->a[7] = pMtx->a[8] = 0;
        n = (idx & 0x7fff) * 3;
        p = pArray3 + n;
        A = p[1];
        B = p[2];
        pivot = pArray3[n] & 0xf;
        pMtx->a[pivot] = (pArray3[n] & 0x10) ? -FX32_ONE : FX32_ONE;
        pMtx->a[data_02135e5c[pivot][0]] = A;
        pMtx->a[data_02135e5c[pivot][1]] = B;
        if (p[0] & 0x20) {
            B = -B;
        }
        pMtx->a[data_02135e5c[pivot][2]] = B;
        if (p[0] & 0x40) {
            A = -A;
        }
        pMtx->a[data_02135e5c[pivot][3]] = A;
        return FALSE;
    } else {
        u32 n = (idx & 0x7fff) * 5;
        const fx16 *p = pArray5 + n;
        fx32 v0, v1, v2, v3, v4;
        s16 tmp;
        v4 = p[4];
        pMtx->a[4] = v4 >> 3;
        v0 = pArray5[n];
        pMtx->a[0] = v0 >> 3;
        tmp = v4 & 7;
        tmp = (v0 & 7) | (tmp << 3);
        v1 = p[1];
        pMtx->a[1] = v1 >> 3;
        tmp = (v1 & 7) | (tmp << 3);
        v2 = p[2];
        pMtx->a[2] = v2 >> 3;
        tmp = (v2 & 7) | (tmp << 3);
        v3 = p[3];
        tmp = (v3 & 7) | (tmp << 3);
        pMtx->a[3] = v3 >> 3;
        pMtx->a[5] = (tmp << 19) >> 19;
        return TRUE;
    }
}

// NNSi_G3dAnmCalcNsBca
void func_01ffaab0(const ResJntAnm *pJntAnm, u32 dataIdx, fx32 frame, JntAnm *pResult) {
    u32 ofs = pJntAnm->ofsAnm[dataIdx];
    BOOL interpolate;
    u32 info = *(const u32 *)((const u8 *)pJntAnm + ofs);
    const u32 *pData;
    ScaleTmp tx, ty, tz;
    fx32 scale[6];
    if (info & 1) {
        pResult->flag = 7;
        return;
    }
    pData = (const u32 *)((const u8 *)pJntAnm + ofs) + 1;
    if ((frame & 0xfff) && (pJntAnm->flag & 1)) {
        interpolate = TRUE;
    } else {
        interpolate = FALSE;
    }
    pResult->flag = 0;
    if (!(info & 6)) {
        if (!(info & 8)) {
            if (interpolate) {
                func_02106f90(&pResult->trans.x, frame, pData, pJntAnm);
            } else {
                func_0210710c(&pResult->trans.x, frame, pData, pJntAnm);
            }
            pData += 2;
        } else {
            pResult->trans.x = *pData++;
        }
        if (!(info & 16)) {
            if (interpolate) {
                func_02106f90(&pResult->trans.y, frame, pData, pJntAnm);
            } else {
                func_0210710c(&pResult->trans.y, frame, pData, pJntAnm);
            }
            pData += 2;
        } else {
            pResult->trans.y = *pData++;
        }
        if (!(info & 32)) {
            if (interpolate) {
                func_02106f90(&pResult->trans.z, frame, pData, pJntAnm);
            } else {
                func_0210710c(&pResult->trans.z, frame, pData, pJntAnm);
            }
            pData += 2;
        } else {
            pResult->trans.z = *pData++;
        }
    } else {
        if (info & 2) {
            pResult->flag |= 4;
        } else {
            func_02107460(pResult);
        }
    }
    if (!(info & 0xc0)) {
        if (!(info & 0x100)) {
            if (interpolate) {
                func_0210685c(&pResult->rot, frame, pData, pJntAnm);
            } else {
                func_01ffb040(&pResult->rot, frame, pData, pJntAnm);
            }
            pData += 2;
        } else {
            if (func_01ffaea0(&pResult->rot, (const fx16 *)((const u8 *)pJntAnm + pJntAnm->ofsRot3),
                              (const fx16 *)((const u8 *)pJntAnm + pJntAnm->ofsRot5), *pData)) {
                fx32 c0, c1, c2;
                c0 = (pResult->rot.a[1] * pResult->rot.a[5] - pResult->rot.a[2] * pResult->rot.a[4]) >> 12;
                c1 = (pResult->rot.a[2] * pResult->rot.a[3] - pResult->rot.a[0] * pResult->rot.a[5]) >> 12;
                c2 = (pResult->rot.a[0] * pResult->rot.a[4] - pResult->rot.a[1] * pResult->rot.a[3]) >> 12;
                pResult->rot.a[6] = c0;
                pResult->rot.a[7] = c1;
                pResult->rot.a[8] = c2;
            }
            pData++;
        }
    } else {
        if (info & 0x40) {
            pResult->flag |= 2;
        } else {
            func_02107298(pResult);
        }
    }
    if (!(info & 0x600)) {
        if (!(info & 0x800)) {
            if (interpolate) {
                func_02106ba8(&tx, frame, pData, pJntAnm);
            } else {
                func_02106d60(&tx, frame, pData, pJntAnm);
            }
            scale[0] = tx.s;
            scale[3] = tx.inv;
        } else {
            scale[0] = pData[0];
            scale[3] = pData[1];
        }
        if (!(info & 0x1000)) {
            if (interpolate) {
                func_02106ba8(&ty, frame, pData + 2, pJntAnm);
            } else {
                func_02106d60(&ty, frame, pData + 2, pJntAnm);
            }
            scale[1] = ty.s;
            scale[4] = ty.inv;
        } else {
            scale[1] = pData[2];
            scale[4] = pData[3];
        }
        if (!(info & 0x2000)) {
            if (interpolate) {
                func_02106ba8(&tz, frame, pData + 4, pJntAnm);
            } else {
                func_02106d60(&tz, frame, pData + 4, pJntAnm);
            }
            scale[2] = tz.s;
            scale[5] = tz.inv;
        } else {
            scale[2] = pData[4];
            scale[5] = pData[5];
        }
    } else {
        if (info & 0x200) {
            pResult->flag |= 1;
        } else {
            func_021073f8(pResult);
            return;
        }
    }
    data_021f5cc0->funcJntScale(pResult, scale, data_021f5cc0->c, (pResult->flag & 1) ? 4 : 0);
}

// NNSi_G3dAnmCalcNsBca (frame clamp wrapper)
void func_01ffaa68(JntAnm *pResult, const AnmObj *pAnmObj, u32 dataIdx) {
    const ResJntAnm *pJntAnm = (const ResJntAnm *)pAnmObj->resAnm;
    fx32 frame = pAnmObj->frame;
    if (frame >= (fx32)(pJntAnm->numFrame << 12)) {
        frame = (pJntAnm->numFrame << 12) - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    func_01ffaab0(pJntAnm, dataIdx, frame, pResult);
}

// NNSi_G3dAnmBlendJnt
BOOL func_01ffa764(JntAnm *pResult, const AnmObj *pAnmObj, u32 dataIdx) {
    if (!pAnmObj->next) {
        u16 mapData = pAnmObj->mapData[dataIdx];
        if ((mapData & 0x300) != 0x100) {
            return FALSE;
        }
        ((void (*)(JntAnm *, const AnmObj *, u32))pAnmObj->funcAnm)(pResult, pAnmObj, mapData & 0xff);
        return TRUE;
    } else {
        fx32 sumOfRatio = 0;
        const AnmObj *p;
        int cnt = 0;
        const AnmObj *pLast;
        p = pAnmObj;
        do {
            if ((p->mapData[dataIdx] & 0x300) == 0x100) {
                sumOfRatio += p->ratio;
                cnt++;
                pLast = p;
            }
            p = p->next;
        } while (p);
        if (sumOfRatio == 0) {
            return FALSE;
        }
        if (cnt == 1) {
            ((void (*)(JntAnm *, const AnmObj *, u32))pLast->funcAnm)(pResult, pLast, pLast->mapData[dataIdx] & 0xff);
            return TRUE;
        } else {
            JntAnm tmp;
            fx32 ratio;
            {
                volatile u32 zero = 0;
                func_02115ea8(zero, pResult, sizeof(JntAnm));
            }
            pResult->flag = 0xffffffff;
            do {
                u16 mapData = pAnmObj->mapData[dataIdx];
                if ((mapData & 0x300) != 0x100 || pAnmObj->ratio <= 0) {
                    continue;
                }
                ((void (*)(JntAnm *, const AnmObj *, u32))pAnmObj->funcAnm)(&tmp, pAnmObj, mapData & 0xff);
                if (sumOfRatio == 0x1000) {
                    ratio = pAnmObj->ratio;
                } else {
                    ratio = func_01ffc5a4(pAnmObj->ratio, sumOfRatio);
                }
                func_02104518(&pResult->scale, &tmp.scale, ratio, tmp.flag & 1);
                func_02104518(&pResult->scaleEx0, &tmp.scaleEx0, ratio, tmp.flag & 8);
                func_02104518(&pResult->scaleEx1, &tmp.scaleEx1, ratio, tmp.flag & 16);
                if (!(tmp.flag & 4)) {
                    pResult->trans.x += (fx32)(((s64)ratio * tmp.trans.x) >> 12);
                    pResult->trans.y += (fx32)(((s64)ratio * tmp.trans.y) >> 12);
                    pResult->trans.z += (fx32)(((s64)ratio * tmp.trans.z) >> 12);
                }
                if (!(tmp.flag & 2)) {
                    pResult->rot.a[0] += (ratio * tmp.rot.a[0]) >> 12;
                    pResult->rot.a[1] += (ratio * tmp.rot.a[1]) >> 12;
                    pResult->rot.a[2] += (ratio * tmp.rot.a[2]) >> 12;
                    pResult->rot.a[3] += (ratio * tmp.rot.a[3]) >> 12;
                    pResult->rot.a[4] += (ratio * tmp.rot.a[4]) >> 12;
                    pResult->rot.a[5] += (ratio * tmp.rot.a[5]) >> 12;
                } else {
                    pResult->rot.a[0] += ratio;
                    pResult->rot.a[4] += ratio;
                }
                pResult->flag &= tmp.flag;
            } while ((pAnmObj = pAnmObj->next));
            func_01ffc928((VecFx32 *)&pResult->rot.a[0], (VecFx32 *)&pResult->rot.a[3], (VecFx32 *)&pResult->rot.a[6]);
            func_01ffc714((VecFx32 *)&pResult->rot.a[0], (VecFx32 *)&pResult->rot.a[0]);
            func_01ffc714((VecFx32 *)&pResult->rot.a[6], (VecFx32 *)&pResult->rot.a[6]);
            func_01ffc928((VecFx32 *)&pResult->rot.a[6], (VecFx32 *)&pResult->rot.a[0], (VecFx32 *)&pResult->rot.a[3]);
            return TRUE;
        }
    }
}

// OS_GetTick
u64 func_01ffa6b4(void) {
    u32 enabled = func_01ffa2ec();
    vu16 countL = *(vu16 *)0x04000100;
    vu64 countH = data_021fcf24 & 0x0000ffffffffffffULL;
    if ((reg_OS_IF & 8) && !(countL & 0x8000)) {
        countH++;
    }
    func_01ffa3d4(enabled);
    return (countH << 16) | countL;
}

void func_01ffa654(s32 msg) {
    CbEntry *e = &data_027e032c[msg & 0xff];
    if (((msg >> 8) & 0xff) != e->tag) {
        return;
    }
    if (e->func == 0) {
        return;
    }
    e->func(e->arg);
}

void func_01ffa624(u32 a, s32 msg) {
    u32 enabled = func_01ffa2ec();
    func_01ffa654(msg);
    func_01ffa3d4(enabled);
}

// PXI receive FIFO not-empty IRQ handler
void func_01ffa500(void) {
    PXIFifoMessage data;
    int error;
    u32 tag;
    for (;;) {
        error = PXIi_RecvWordByFifo(&data);
        if (error == -4) {
            return;
        }
        if (error == -3) {
            continue;
        }
        tag = data.e.tag;
        if (tag == 0) {
            continue;
        }
        if (data_027e0394[tag]) {
            data_027e0394[tag](tag, data.e.data, data.e.err);
        } else if (!data.e.err) {
            data.e.err = 1;
            PXIi_SendWordByFifo(data.raw);
        }
    }
}

void func_01ffa4ec(void) {
    func_01ffa314();
    while (1) {
        func_01ffa3c0();
    }
}

// OSi_EnterDmaCallback
void func_01ffa4a0(u32 dmaNo, void (*callback)(void *), void *arg) {
    u32 mask;
    data_027e0058[dmaNo].func = callback;
    data_027e0058[dmaNo].arg = arg;
    data_027e0058[dmaNo].enable = func_01ff8128(1 << (dmaNo + 8)) & (1 << (dmaNo + 8));
}


// mwcc-flags: -nothumb -O4,p


// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef struct AnmObj {
    s32 frame;          // 0x00
    s32 ratio;          // 0x04
    void *resAnm;       // 0x08
    void *funcAnm;      // 0x0c
    struct AnmObj *next;// 0x10
    const void *resTex; // 0x14
    u8 priority;        // 0x18
} AnmObj;
typedef struct ResAnmHeader { u8 category0; u8 revision; u16 category1; } ResAnmHeader;
typedef struct AnmObjInitFunc {
    u8 category0;
    u8 dummy_;
    u16 category1;
    void (*func)(AnmObj *, void *, const void *);
} AnmObjInitFunc;
extern u32 data_0213bcb4;               // NNS_G3dAnmFmtNum
extern AnmObjInitFunc data_0213bcd8[10];  // NNS_G3dAnmObjInitFuncArray

// NNS_G3dAnmObjInit
void NNS_G3dAnmObjInit(AnmObj *pAnmObj, void *pResAnm, const void *pResMdl, const void *pResTex)
{
    const ResAnmHeader *hdr;
    u32 i;
    pAnmObj->frame = 0;
    pAnmObj->resAnm = pResAnm;
    pAnmObj->next = 0;
    pAnmObj->priority = 127;
    pAnmObj->ratio = 0x1000;
    pAnmObj->resTex = pResTex;
    hdr = (const ResAnmHeader *)pResAnm;
    for (i = 0; i < data_0213bcb4; ++i) {
        if (data_0213bcd8[i].category0 == hdr->category0 && data_0213bcd8[i].category1 == hdr->category1) {
            (*data_0213bcd8[i].func)(pAnmObj, pResAnm, pResMdl);
            break;
        }
    }
}

// ---- file-scope objects (.data 0x0213bcb4-0x0213bd28): the animation format count, the default animation calculation
// and blend functions (NNS_G3dFuncAnm*Default / NNS_G3dFuncBlend*Default; used by the units of the formats and by
// NNS_G3dRenderObjInit) and NNS_G3dAnmObjInitFuncArray. This definition order gives the original order after mwcc's size
// sort.
void NNSi_G3dAnmBlendJnt();
void NNSi_G3dAnmBlendMat();
void NNSi_G3dAnmCalcNsBca();
void NNSi_G3dAnmCalcNsBma();
void NNSi_G3dAnmCalcNsBta();
void NNSi_G3dAnmCalcNsBtp();
void NNSi_G3dAnmCalcNsBva();
void NNSi_G3dAnmObjInitNsBma();
void NNSi_G3dAnmObjInitNsBta();
void NNSi_G3dAnmObjInitNsBtp();
void NNSi_G3dAnmObjInitNsBva();
void NNSi_G3dAnmBlendVis();
void NNSi_G3dAnmObjInitNsBca();
AnmObjInitFunc data_0213bcd8[10] = { // NNS_G3dAnmObjInitFuncArray
    {'M', 0, 'M' << 8 | 'A', NNSi_G3dAnmObjInitNsBma},
    {'M', 0, 'T' << 8 | 'P', NNSi_G3dAnmObjInitNsBtp},
    {'M', 0, 'T' << 8 | 'A', NNSi_G3dAnmObjInitNsBta},
    {'V', 0, 'V' << 8 | 'A', NNSi_G3dAnmObjInitNsBva},
    {'J', 0, 'C' << 8 | 'A', NNSi_G3dAnmObjInitNsBca},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
};
void *data_0213bcd0 = (void *)NNSi_G3dAnmBlendJnt;
void *data_0213bccc = (void *)NNSi_G3dAnmBlendVis;
void *data_0213bcc8 = (void *)NNSi_G3dAnmCalcNsBma;
void *data_0213bcc4 = (void *)NNSi_G3dAnmCalcNsBtp;
void *data_0213bcd4 = (void *)NNSi_G3dAnmBlendMat;
void *data_0213bcbc = (void *)NNSi_G3dAnmCalcNsBca;
void *data_0213bcb8 = (void *)NNSi_G3dAnmCalcNsBva;
void *data_0213bcc0 = (void *)NNSi_G3dAnmCalcNsBta;
u32 data_0213bcb4 = 5; // NNS_G3dAnmFmtNum

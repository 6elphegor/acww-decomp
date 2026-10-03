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
extern AnmObjInitFunc data_0213bcd8[];  // NNS_G3dAnmObjInitFuncArray

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

// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef int BOOL;
#define NULL 0

typedef struct ResDict { u8 revision; u8 numEntry; u16 sizeDictBlk; u16 dummy_; u16 ofsEntry; } ResDict;
typedef struct ResDictEntryHeader { u16 sizeUnit; u16 ofsName; u8 data[4]; } ResDictEntryHeader;
typedef struct ResMat { u16 ofsDictTexToMatList; u16 ofsDictPlttToMatList; ResDict dict; } ResMat;
typedef struct ResDictMatData { u32 offset; } ResDictMatData;
typedef struct ResMatData {
    u8 pad[0x14];
    u32 texImageParam;      // 0x14
    u32 pad18;
    u16 texPlttBase;        // 0x1c
    u16 flag;               // 0x1e
    u16 origWidth, origHeight;  // 0x20
    s32 magW, magH;         // 0x24
} ResMatData;
typedef struct BindData { u16 offset; u8 numIdx; u8 flag; } BindData;
typedef struct ResDictTexData { u32 texImageParam; u32 extraParam; } ResDictTexData;
typedef struct ResDictPlttData { u16 offset; u16 flag; } ResDictPlttData;
typedef struct ResTex {
    u8 pad0[8];
    u32 texKey;         // 0x08
    u8 pad0c[0xc];
    u32 tex4x4Key;      // 0x18
    u8 pad1c[0x10];
    u32 plttKey;        // 0x2c
} ResTex;
extern s32 FX_Div(s32, s32);

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
#define KeyAddr(k) (((k) & 0xffff) << 3)

void bindMdlTex_Internal_(ResMat *pMat, BindData *pBindData, const ResTex *pTex, const ResDictTexData *pTexData)
{
    u8 *base = (u8 *)pMat + pBindData->offset;
    u32 vramOffset;
    u32 j;
    if ((pTexData->texImageParam & 0x1c000000) != 0x14000000) {
        vramOffset = KeyAddr(pTex->texKey) >> 3;
    } else {
        vramOffset = KeyAddr(pTex->tex4x4Key) >> 3;
    }
    for (j = 0; j < pBindData->numIdx; ++j) {
        ResMatData *matData = GetMatDataByIdx(pMat, *(base + j));
        matData->texImageParam |= (pTexData->texImageParam + vramOffset);
        {
            u32 w = pTexData->extraParam & 0x7ff;
            u32 h = (pTexData->extraParam >> 11) & 0x7ff;
            matData->magW = (w != matData->origWidth) ? FX_Div(w << 12, matData->origWidth << 12) : 0x1000;
            matData->magH = (h != matData->origHeight) ? FX_Div(h << 12, matData->origHeight << 12) : 0x1000;
        }
    }
    pBindData->flag |= 1;
}

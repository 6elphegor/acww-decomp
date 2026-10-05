// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: texture/palette VRAM upload objects (tex key, plttkey), sorted render-object lists.
// autoload_2 0x02103bc0-0x02104000. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
#define NULL 0

typedef struct Node { u8 pad[0x10]; struct Node *next; u8 pad14[4]; u8 prio; } Node;

typedef struct TexData {
    u32 sig;            // 0x00
    u32 pad4;
    u32 pltt08;         // 0x08
    u16 plttSize;       // 0x0c
    u16 pad0e;
    u16 plttFlag;       // 0x10
    u16 pad12;
    u32 plttOfs;        // 0x14
    u32 pltt18;         // 0x18
    u16 pltt4Size;      // 0x1c
    u16 pad1e;
    u16 pltt4Flag;      // 0x20
    u16 pad22;
    u32 pltt4Ofs;       // 0x24
    u32 pltt4Ofs2;      // 0x28
    u32 tex2c;          // 0x2c
    u16 texSize;        // 0x30
    u16 texFlag;        // 0x32
    u8 pad34[4];
    u32 texOfs;         // 0x38
} TexData;

extern u32 data_0213bcd4, data_0213bcd0, data_0213bccc;
extern void MIi_CpuClear32(u32, void *, u32);   // MIi_CpuClear32
extern void updateHintVec___kernel(void *, Node *);
extern void GX_BeginLoadTexPltt(void);                // GX_BeginLoadTex
extern void GX_LoadTexPltt(void *, u32, u32);    // GX_LoadTex
extern void GX_EndLoadTexPltt(void);                // GX_EndLoadTex
extern void GX_BeginLoadTex(void);                // GX_BeginLoadTexPltt
extern void GX_LoadTex(void *, u32, u32);    // GX_LoadTexPltt
extern void GX_EndLoadTex(void);                // GX_EndLoadTexPltt
void addLink_(Node **head, Node *n);
BOOL removeLink_(Node **head, Node *n);

// add a node to the list chosen by its kind ('M', 'J', 'V')
void NNS_G3dRenderObjAddAnmObj(u8 *o, Node *n)
{
    switch (*(u8 *)((u32 *)n)[2]) {
    case 'M':
        updateHintVec___kernel(o + 0x3c, n);
        addLink_((Node **)(o + 8), n);
        break;
    case 'J':
        updateHintVec___kernel(o + 0x44, n);
        addLink_((Node **)(o + 16), n);
        break;
    case 'V':
        updateHintVec___kernel(o + 0x4c, n);
        addLink_((Node **)(o + 24), n);
        break;
    }
}


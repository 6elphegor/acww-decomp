// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: texture/palette VRAM upload objects (tex key, plttkey), sorted render-object lists.
// autoload_2 0x02103edc-0x02104000. ARM, mwcc 1.2/base, -O4,p.
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
extern void updateHintVec___kernel(void *);
extern void GX_BeginLoadTexPltt(void);                // GX_BeginLoadTex
extern void GX_LoadTexPltt(void *, u32, u32);    // GX_LoadTex
extern void GX_EndLoadTexPltt(void);                // GX_EndLoadTex
extern void GX_BeginLoadTex(void);                // GX_BeginLoadTexPltt
extern void GX_LoadTex(void *, u32, u32);    // GX_LoadTexPltt
extern void GX_EndLoadTex(void);                // GX_EndLoadTexPltt
void addLink_(Node **head, Node *n);

void NNS_G3dRenderObjInit(u32 *o, u32 x)
{
    volatile u32 zero = 0;
    MIi_CpuClear32(zero, o, 0x54);
    o[3] = data_0213bcd4;
    o[5] = data_0213bcd0;
    o[7] = data_0213bccc;
    o[1] = x;
}

// insert a node (chain) into a list sorted by priority
void addLink_(Node **head, Node *n)
{
    Node *h = *head;
    Node *c;
    if (h == NULL) {
        *head = n;
        return;
    }
    c = h->next;
    if (c == NULL) {
        if (h->prio > n->prio) {
            Node *t = n;
            while (t->next != NULL) t = t->next;
            t->next = h;
            *head = n;
        } else {
            h->next = n;
        }
        return;
    }
    while (c != NULL) {
        if (c->prio >= n->prio) {
            Node *t = n;
            while (t->next != NULL) t = t->next;
            h->next = n;
            t->next = c;
            return;
        }
        h = c;
        c = c->next;
    }
    h->next = n;
}


// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: texture/palette VRAM upload objects (tex key, plttkey), sorted render-object lists.
// autoload_2 0x02103bc0-0x02103e40. ARM, mwcc 1.2/base, -O4,p.
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

extern void GX_BeginLoadTexPltt(void);                // GX_BeginLoadTex
extern void GX_LoadTexPltt(void *, u32, u32);    // GX_LoadTex
extern void GX_EndLoadTexPltt(void);                // GX_EndLoadTex
extern void GX_BeginLoadTex(void);                // GX_BeginLoadTexPltt
extern void GX_LoadTex(void *, u32, u32);    // GX_LoadTexPltt
extern void GX_EndLoadTex(void);                // GX_EndLoadTexPltt
BOOL removeLink_(Node **head, Node *n);

// remove a node from a singly linked list
BOOL removeLink_(Node **head, Node *n)
{
    Node *c;
    Node *prev = *head;
    if (prev == NULL) return 0;
    if (prev == n) {
        *head = prev->next;
        n->next = NULL;
        return 1;
    }
    for (c = prev->next; c != NULL; c = c->next) {
        if (c == n) {
            prev->next = c->next;
            c->next = NULL;
            return 1;
        }
        prev = c;
    }
    return 0;
}

// remove a node from any of the three lists
void NNS_G3dRenderObjRemoveAnmObj(u8 *o, Node *n)
{
    if (removeLink_((Node **)(o + 8), n) || removeLink_((Node **)(o + 16), n) || removeLink_((Node **)(o + 24), n)) {
        *(u32 *)o |= 0x10;
    }
}

void func_02103d50(u8 *o, u32 a, u32 b, u32 c, u32 d)
{
    *(u32 *)(o + 0x20) = a;
    o[0x24] = c;
    o[0x25] = d;
}

void func_02103d48(u8 *o, u32 v) { *(u32 *)(o + 0x28) = v; }

// palette size in bytes
u32 NNS_G3dTexGetRequiredSize(TexData *o) { return o->plttSize << 3; }

// 4x4-compressed palette size in bytes
u32 NNS_G3dTex4x4GetRequiredSize(TexData *o) { return o->pltt4Size << 3; }

void NNS_G3dTexSetTexKey(TexData *o, u32 a, u32 b)
{
    if (a != 0) o->pltt08 = a;
    if (b != 0) o->pltt18 = b;
}

// upload palette data to VRAM
void NNS_G3dTexLoad(TexData *o, BOOL lock)
{
    u32 size;
    u32 size4;
    if (lock) GX_BeginLoadTex();
    size = o->plttSize << 3;
    if (size != 0) {
        GX_LoadTex((u8 *)o + o->plttOfs, (o->pltt08 & 0xffff) << 3, size);
        o->plttFlag |= 1;
    }
    size4 = o->pltt4Size << 3;
    if (size4 != 0) {
        u32 a = o->pltt18 & 0xffff;
        u32 b = a << 3;
        u8 *p = (u8 *)o + o->pltt4Ofs2;
        GX_LoadTex((u8 *)o + o->pltt4Ofs, b, size4);
        GX_LoadTex(p, (((a << 3) & 0x1ffff) >> 1) + 0x20000 + ((b & 0x40000) >> 2), size4 >> 1);
        o->pltt4Flag |= 1;
    }
    if (lock) GX_EndLoadTex();
}

// texture size in bytes
u32 NNS_G3dPlttGetRequiredSize(TexData *o) { return o->texSize << 3; }

void NNS_G3dPlttSetPlttKey(TexData *o, u32 v) { o->tex2c = v; }

// upload texture data to VRAM
void NNS_G3dPlttLoad(TexData *o, BOOL lock)
{
    if (lock) GX_BeginLoadTexPltt();
    GX_LoadTexPltt((u8 *)o + o->texOfs, (o->tex2c & 0xffff) << 3, o->texSize << 3);
    o->texFlag |= 1;
    if (lock) GX_EndLoadTexPltt();
}

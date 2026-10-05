// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: model/palette binding helpers (NNS_G3dBindMdlPltt family).
// autoload_2 0x02103978-0x02103aa4. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
#define NULL 0

extern u8 *NNS_G3dGetResDataByName(void *dict, void *name);          // NNS_G3dGetResDataByName-like
extern void bindMdlTex_Internal_(u8 *, u8 *, u8 *, u8 *);         // BindMdlPltt inner

static inline u8 *Ent(u8 *dict, u32 i)
{
    u8 *p = dict + *(u16 *)(dict + 6);
    return p + 4 + *(u16 *)p * i;
}

// NNS_G3dBindMdlPltt (all palettes of a model)
BOOL NNS_G3dBindMdlTex(u8 *mdl, u8 *pltt)
{
    BOOL ret;
    u8 *set = mdl + *(u32 *)(mdl + 8);
    u8 *dict = set + *(u16 *)set;
    u32 i;
    ret = 1;
    i = 0;
    while (i < dict[1]) {
        u8 *ents = dict + *(u16 *)(dict + 6);
        u8 *res = NNS_G3dGetResDataByName(pltt + 0x3c, ents + *(u16 *)(ents + 2) + i * 16);
        if (res != NULL) {
            u8 *e = dict + *(u16 *)(dict + 6);
            e = e + 4 + *(u16 *)e * i;
            if ((e[3] & 1) == 0) {
                bindMdlTex_Internal_(set, e, pltt, res);
            }
        } else {
            ret = 0;
        }
        i++;
    }
    return ret;
}

// NNS_G3dBindMdlPlttEx-like (by indices)
BOOL NNS_G3dForceBindMdlTex(u8 *mdl, u8 *pltt, u32 i, u32 j)
{
    u8 *set = mdl + *(u32 *)(mdl + 8);
    u8 *dict = set + *(u16 *)set;
    u8 *t = Ent(pltt + 0x3c, j);
    u8 *e = Ent(dict, i);
    if (e == NULL) return 0;
    bindMdlTex_Internal_(set, e, pltt, t);
    return 1;
}

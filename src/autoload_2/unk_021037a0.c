// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: model/texture binding helpers (NNS_G3dBindMdlTex family) + a u16 stream reader.
// autoload_2 0x021037a0-0x021038e0. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
#define NULL 0

extern u8 *func_02106460(void *dict, void *name);          // NNS_G3dGetResDataByName-like (dict, name) -> data
extern void func_021038e0(u8 *, u8 *, u8 *, u8 *);         // BindMdlTex inner (mdl set, map entry, tex, tex data)

// entry of a resource dictionary data block: [u16 unitSize, u16 ...] then units from +4
static inline u8 *Ent(u8 *dict, u32 i)
{
    u8 *p = dict + *(u16 *)(dict + 6);
    return p + 4 + *(u16 *)p * i;
}

// NNS_G3dBindMdlTex (all textures of a model)
BOOL func_02103830(u8 *mdl, u8 *tex)
{
    u8 *set = mdl + *(u32 *)(mdl + 8);
    u8 *dict = set + *(u16 *)(set + 2);
    u32 i;
    BOOL ret;
    ret = 1;
    i = 0;
    while (i < dict[1]) {
        u8 *ents = dict + *(u16 *)(dict + 6);
        u8 *res = func_02106460(tex + *(u16 *)(tex + 0x34), ents + *(u16 *)(ents + 2) + i * 16);
        if (res != NULL) {
            u8 *e = dict + *(u16 *)(dict + 6);
            e = e + 4 + *(u16 *)e * i;
            if ((e[3] & 1) == 0) {
                func_021038e0(set, e, tex, res);
            }
        } else {
            ret = 0;
        }
        i++;
    }
    return ret;
}

// NNS_G3dBindMdlTexEx-like (by indices)
BOOL func_021037b4(u8 *mdl, u8 *tex, u32 i, u32 j)
{
    u8 *set = mdl + *(u32 *)(mdl + 8);
    u8 *dict = set + *(u16 *)(set + 2);
    u8 *tdict = tex + *(u16 *)(tex + 0x34);
    u8 *t = Ent(tdict, j);
    u8 *e = Ent(dict, i);
    if (e != NULL && (e[3] & 1) == 0) {
        func_021038e0(set, e, tex, t);
        return 1;
    }
    return 0;
}

// read one u16 from a stream pointer and advance it
u16 NNSi_G2dSplitCharUTF16(const u16 **pp)
{
    const u16 *p = *pp;
    u16 v = *p++;
    *pp = p;
    return v;
}

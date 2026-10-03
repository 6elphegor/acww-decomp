// mwcc-version: 1.2/base
#include "types.h"

// TU26 of ov003: the 0x80-byte table of eight 0x10-byte records (bss 0x0225b468)
struct InsectNetSyncRec {
    u32 a, b, c;
    s8 d;
    u8 e;
    u8 pad[2];
    InsectNetSyncRec() {}
    ~InsectNetSyncRec() {}
};

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;

BOOL func_020a62a0();
BOOL _ZN11CommManager8isOnlineEv(void *g);
u8 *_ZN11CommManager10getSyncVarEj(void *self, u32 a);
void NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
void NetBuf_PackPair20(void *p, s32 a, s32 b);
s32 CommSyncVar_GetVarSize(s32 a);
s32 CommSyncVar_SetVar(s32 a, s32 b, s32 c, s32 d);
void MI_CpuCopy8(void *, void *, s32);
}

InsectNetSyncRec sInsectNetSync[8];

extern "C" void _ZN18Unk_ov003_0222e708C2Ev() {}

extern "C" void _ZN18Unk_ov003_0222e708D2Ev() {}

extern "C" BOOL InsectNetSync_Set(s32 unused, s32 idx, s32 v, s32 *p, u8 e, s32 f) {
    if (func_020a62a0()) {
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            CommSyncVar_SetVar(idx + 0x18, (s32)&f, 0, 0);
            s32 off = idx << 4;
            s8 *pd = &sInsectNetSync[0].d;
            u32 *pa = &sInsectNetSync[0].a;
            u32 *pb = &sInsectNetSync[0].b;
            u32 *pc = &sInsectNetSync[0].c;
            u8 *pe = &sInsectNetSync[0].e;
            pd[off] = v;
            *(u32 *)((u8 *)pa + off) = p[0];
            *(u32 *)((u8 *)pb + off) = p[1];
            *(u32 *)((u8 *)pc + off) = p[2];
            pe[off] = e;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void InsectNetSync_PackVar(void *dst, s32 idx) {
    u32 off = (idx - 0x18) << 4;
    u8 rec[8];
    u32 *pa = &sInsectNetSync[0].a;
    u32 *pc = &sInsectNetSync[0].c;
    s8 *pd = &sInsectNetSync[0].d;
    u8 *pe = &sInsectNetSync[0].e;
    NetBuf_PackPair20(rec, *(s32 *)((u8 *)pa + off), *(s32 *)((u8 *)pc + off));
    rec[5] = pd[off];
    rec[6] = pe[off];
    MI_CpuCopy8(rec, dst, CommSyncVar_GetVarSize(idx));
}

extern "C" BOOL InsectNetSync_Get(s32 a, s32 b, s8 *c, s32 *d, s32 *e, u8 *f) {
    if (!func_020a62a0()) {
        Unk_020cbb18_Ptr *g = gCommManager;
        if (_ZN11CommManager8isOnlineEv(g)) {
            s8 *r = (s8 *)_ZN11CommManager10getSyncVarEj(g, b + 0x18);
            if (r != 0) {
                NetBuf_UnpackPair20(r, d, e);
                if (*e > 0) {
                    *c = r[5];
                    *f = ((u8 *)r)[6];
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

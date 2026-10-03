// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02220ad8_S {
    u16 state;
    u16 m[6];
    u8 pad_0e[0x1b140 - 0x0e];
    void *unk_1b140;
    void *unk_1b144;
};
struct Unk_ov001_02220ad8_Z { u8 pad[0x1b140]; s32 unk_140; s32 unk_144; };

struct Unk_ov001_02221734_Z { u16 v[7]; };

struct Unk_ov001_02221734_D {
    u8 lo : 4;
    u8 hi : 4;
    u8 b1;
    u8 data[0x14];
    Unk_ov001_02221734_Z z;
};

struct Unk_ov001_02221734_B {
    u8 pad_00[1];
    u8 unk_01;
    u8 pad_02[2];
    u8 unk_04[0x14];
    u16 unk_18;
    u8 pad_1a[0x54 - 0x1a];
};

extern "C" Unk_ov001_02220ad8_S *sWfcMoveMb;
extern "C" u16 *sWfcMoveMbMaskPtrs[6];

extern "C" {
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void MI_CpuCopy8(void *, void *, u32);
s32 MB_CommResponseRequest(s32, s32);
s32 MB_CommIsBootable(s32);
s32 MB_CommGetChildUser(s32);
void func_02124a94(s32);
void MB_End();
void Fatal_Trap();
void FS_InitFile(void *);
s32 FS_OpenFile(void *, s32);
s32 MB_GetSegmentLength(void *);
s32 MB_ReadSegment(void *, void *, u32);
s32 MB_RegisterFile(void *, void *);
void FS_CloseFile(void *);
s32 MB_StartParentFromIdle(s32);
void OS_GetOwnerInfo(void *);
s32 func_021251ac(void *, void *, s32, s32, s32);
void MB_SetParentCommParam(u32, u32);
void MB_CommSetParentStateCallback(void *);
void WfcMoveWh_SetWork(void *);

u32 WfcMoveMb_FindAidByMac(u8 *mac);
u8 *WfcMoveMb_GetChildInfo(u32 id);
u32 WfcMoveMb_GetChildState(u32 id);
u32 WfcMoveMb_GetChildMask(u32 i);
u32 WfcMoveMb_GetState();
void WfcMoveMb_SetState(u32 v);
void WfcMoveMb_ParentStateCallback(u32 id, u32 cmd, u8 *data);
void WfcMoveMb_Cancel();
void WfcMoveMb_StartRebootAll();
u32 WfcMoveMb_IsAllBootable();
void WfcMoveMb_StartDownloadAll();
void WfcMoveMb_StartDownload(u32 id);
void WfcMoveMb_KickChild(u32 n);
void WfcMoveMb_AcceptChild(u32 n);
s32 WfcMoveMb_RegisterFile(s32 *p);
void WfcMoveMb_StartParent(s32 *a, s32 b);
void WfcMoveMb_Init(s32 a, s32 b);
void WfcMoveMb_SetWork(void *p);
}

void WfcMoveMb_SetWork(void *p) {
    sWfcMoveMb = (Unk_ov001_02220ad8_S *)p;
    WfcMoveWh_SetWork((u8 *)p + 0x1b160);
    sWfcMoveMb->unk_1b140 = 0;
    sWfcMoveMb->unk_1b144 = 0;
}

void WfcMoveMb_Init(s32 a, s32 b) {
    Unk_ov001_02221734_D d;
    Unk_ov001_02221734_B buf;
    OS_GetOwnerInfo(&buf);
    d.lo = buf.unk_01;
    d.b1 = buf.unk_18;
    MI_CpuCopy8(buf.unk_04, d.data, buf.unk_18 * 2);
    d.hi = 0;
    Unk_ov001_02221734_Z *zp = &d.z;
    zp->v[0] = 0;
    zp->v[1] = 0;
    zp->v[2] = 0;
    zp->v[3] = 0;
    zp->v[4] = 0;
    zp->v[5] = 0;
    zp->v[6] = 0;
    *(Unk_ov001_02221734_Z *)sWfcMoveMb = *zp;
    sWfcMoveMb->unk_1b140 = (u8 *)sWfcMoveMb + 0x10040;
    if (func_021251ac(sWfcMoveMb->unk_1b140, &d, a, b, 2) != 0) Fatal_Trap();
    MB_SetParentCommParam(0x100, 1);
    MB_CommSetParentStateCallback((void *)WfcMoveMb_ParentStateCallback);
    WfcMoveMb_SetState(1);
}

void WfcMoveMb_StartParent(s32 *a, s32 b) {
    WfcMoveMb_SetState(2);
    if (MB_StartParentFromIdle(b) != 0) {
        WfcMoveMb_SetState(7);
        return;
    }
    if (WfcMoveMb_RegisterFile(a) != 0) return;
    Fatal_Trap();
}

s32 WfcMoveMb_RegisterFile(s32 *p) {
    void *q;
    s32 r = 0;
    u8 buf[0x48];
    if (*p == 0) {
        q = 0;
    } else {
        FS_InitFile(buf);
        if (FS_OpenFile(buf, *p) == 0) return r;
        q = buf;
    }
    if (MB_GetSegmentLength(q) != 0) {
        Unk_ov001_02220ad8_S *g = sWfcMoveMb;
        g->unk_1b144 = (u8 *)g + 0x2c;
        if (sWfcMoveMb->unk_1b144 != 0) {
            if (MB_ReadSegment(q, sWfcMoveMb->unk_1b144, 0x10000) != 0) {
                if (MB_RegisterFile(p, sWfcMoveMb->unk_1b144) != 0) r = 1;
            }
        }
    }
    if (q == buf) FS_CloseFile(buf);
    return r;
}

void WfcMoveMb_AcceptChild(u32 n) {
    if (MB_CommResponseRequest(n, 1) != 0) return;
    u16 m = ~(1 << n);
    s32 e = OS_DisableInterrupts();
    sWfcMoveMb->m[0] &= m;
    sWfcMoveMb->m[1] &= m;
    sWfcMoveMb->m[2] &= m;
    sWfcMoveMb->m[3] &= m;
    sWfcMoveMb->m[4] &= m;
    sWfcMoveMb->m[5] &= m;
    OS_RestoreInterrupts(e);
    func_02124a94(n);
}

void WfcMoveMb_KickChild(u32 n) {
    if (MB_CommResponseRequest(n, 0) == 0) {
        u16 m = ~(1 << n);
        s32 e = OS_DisableInterrupts();
        sWfcMoveMb->m[0] &= m;
        sWfcMoveMb->m[1] &= m;
        sWfcMoveMb->m[2] &= m;
        sWfcMoveMb->m[3] &= m;
        sWfcMoveMb->m[4] &= m;
        sWfcMoveMb->m[5] &= m;
        OS_RestoreInterrupts(e);
        func_02124a94(n);
    } else {
        s32 e = OS_DisableInterrupts();
        u32 m = ~(1 << n);
        sWfcMoveMb->m[1] &= m;
        sWfcMoveMb->m[0] &= m;
        OS_RestoreInterrupts(e);
    }
}

void WfcMoveMb_StartDownload(u32 id)
{
    if (MB_CommResponseRequest(id, 2) == 0) {
        u16 k = ~(1 << id);
        u32 r = OS_DisableInterrupts();
        sWfcMoveMb->m[0] &= k;
        sWfcMoveMb->m[1] &= k;
        sWfcMoveMb->m[2] &= k;
        sWfcMoveMb->m[3] &= k;
        sWfcMoveMb->m[4] &= k;
        sWfcMoveMb->m[5] &= k;
        OS_RestoreInterrupts(r);
        func_02124a94(id);
    } else {
        u32 r = OS_DisableInterrupts();
        u32 one = 1;
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        s->m[2] = s->m[2] & ~(one << id);
        s = sWfcMoveMb;
        s->m[3] = s->m[3] | (one << id);
        OS_RestoreInterrupts(r);
    }
}

void WfcMoveMb_StartDownloadAll()
{
    WfcMoveMb_SetState(3);
    u16 i;
    for (i = 1; i < 16; i++) {
        u32 bit = 1 << i;
        if (sWfcMoveMb->m[0] & bit) {
            if (!(sWfcMoveMb->m[1] & bit)) {
                if (!(sWfcMoveMb->m[2] & bit)) {
                    u16 k = ~bit;
                    u32 r = OS_DisableInterrupts();
                    sWfcMoveMb->m[0] &= k;
                    sWfcMoveMb->m[1] &= k;
                    sWfcMoveMb->m[2] &= k;
                    sWfcMoveMb->m[3] &= k;
                    sWfcMoveMb->m[4] &= k;
                    sWfcMoveMb->m[5] &= k;
                    OS_RestoreInterrupts(r);
                    func_02124a94(i);
                } else {
                    WfcMoveMb_StartDownload(i);
                }
            }
        }
    }
}

u32 WfcMoveMb_IsAllBootable()
{
    if (sWfcMoveMb->m[0] == 0) return 0;
    u16 i;
    for (i = 1; i < 16; i++) {
        if (sWfcMoveMb->m[0] & (1 << i)) {
            if (MB_CommIsBootable(i) == 0) return 0;
        }
    }
    return 1;
}

void WfcMoveMb_StartRebootAll()
{
    u16 i, ok;
    ok = 0;
    for (i = 1; i < 16; i++) {
        u32 bit = 1 << i;
        if (sWfcMoveMb->m[4] & bit) {
            if (MB_CommResponseRequest(i, 3)) {
                ok = ok | bit;
            } else {
                u16 k = ~bit;
                u32 r = OS_DisableInterrupts();
                sWfcMoveMb->m[0] &= k;
                sWfcMoveMb->m[1] &= k;
                sWfcMoveMb->m[2] &= k;
                sWfcMoveMb->m[3] &= k;
                sWfcMoveMb->m[4] &= k;
                sWfcMoveMb->m[5] &= k;
                OS_RestoreInterrupts(r);
                func_02124a94(i);
            }
        }
    }
    if (ok == 0) {
        WfcMoveMb_SetState(7);
    } else {
        WfcMoveMb_SetState(4);
    }
}

void WfcMoveMb_Cancel()
{
    WfcMoveMb_SetState(6);
    MB_End();
}

void WfcMoveMb_ParentStateCallback(u32 id, u32 cmd, u8 *data)
{
    switch (cmd) {
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
    case 11:
        break;
    case 2: {
        if (WfcMoveMb_GetState() != 2) return;
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        u32 r = OS_DisableInterrupts();
        s->m[0] = s->m[0] | (1 << id);
        OS_RestoreInterrupts(r);
        u8 *e = (u8 *)sWfcMoveMb + 0x24 + (id - 1) * 0x1e;
        e[0] = data[0xa];
        e[1] = data[0xb];
        e[2] = data[0xc];
        e[3] = data[0xd];
        e[4] = data[0xe];
        e[5] = data[0xf];
        *(u16 *)((u8 *)sWfcMoveMb + (id - 1) * 0x1e + 0x2a) = id;
        break;
    }
    case 3: {
        if (WfcMoveMb_GetChildState(id) == 6) return;
        u16 k = ~(1 << id);
        u32 r = OS_DisableInterrupts();
        sWfcMoveMb->m[0] &= k;
        sWfcMoveMb->m[1] &= k;
        sWfcMoveMb->m[2] &= k;
        sWfcMoveMb->m[3] &= k;
        sWfcMoveMb->m[4] &= k;
        sWfcMoveMb->m[5] &= k;
        OS_RestoreInterrupts(r);
        break;
    }
    case 10: {
        if (WfcMoveMb_GetState() != 2) {
            WfcMoveMb_KickChild(id);
            return;
        }
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        s->m[1] = s->m[1] | (1 << id);
        WfcMoveMb_AcceptChild(id);
        s32 r = MB_CommGetChildUser(id);
        if (r == 0) return;
        MI_CpuCopy8((void *)r, (u8 *)sWfcMoveMb + 0xe + (id - 1) * 0x1e, 0x16);
        break;
    }
    case 14: {
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        u32 one = 1;
        s->m[1] = s->m[1] & ~(one << id);
        s = sWfcMoveMb;
        s->m[2] = s->m[2] | (one << id);
        if (WfcMoveMb_GetState() != 3) return;
        WfcMoveMb_StartDownload(id);
        break;
    }
    case 7: {
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        u32 one = 1;
        s->m[3] = s->m[3] & ~(one << id);
        s = sWfcMoveMb;
        s->m[4] = s->m[4] | (one << id);
        break;
    }
    case 9: {
        Unk_ov001_02220ad8_S *s = sWfcMoveMb;
        u32 one = 1;
        s->m[4] = s->m[4] & ~(one << id);
        s = sWfcMoveMb;
        s->m[5] = s->m[5] | (one << id);
        s = sWfcMoveMb;
        if (s->m[0] != s->m[5]) return;
        MB_End();
        break;
    }
    case 12: {
        if (WfcMoveMb_GetState() == 4) {
            WfcMoveMb_SetState(5);
        } else {
            WfcMoveMb_SetState(0);
        }
        Unk_ov001_02220ad8_Z *z = (Unk_ov001_02220ad8_Z *)sWfcMoveMb;
        if (z->unk_144 != 0) z->unk_144 = 0;
        z = (Unk_ov001_02220ad8_Z *)sWfcMoveMb;
        if (z->unk_140 != 0) z->unk_140 = 0;
        break;
    }
    case 13: {
        s32 v = *(u16 *)data;
        switch (v) {
        case 1:
        case 2:
        case 9:
            WfcMoveMb_SetState(7);
            break;
        case 8:
            break;
        }
        break;
    }
    default:
        Fatal_Trap();
        break;
    }
}

void WfcMoveMb_SetState(u32 v)
{
    sWfcMoveMb->state = v;
}

u32 WfcMoveMb_GetState()
{
    return sWfcMoveMb->state;
}

u32 WfcMoveMb_GetChildMask(u32 i)
{
    Unk_ov001_02220ad8_S *s = sWfcMoveMb;
    sWfcMoveMbMaskPtrs[0] = &s->m[0];
    sWfcMoveMbMaskPtrs[1] = &s->m[1];
    sWfcMoveMbMaskPtrs[2] = &s->m[2];
    sWfcMoveMbMaskPtrs[3] = &s->m[3];
    sWfcMoveMbMaskPtrs[4] = &s->m[4];
    sWfcMoveMbMaskPtrs[5] = &s->m[5];
    return *sWfcMoveMbMaskPtrs[i];
}

u32 WfcMoveMb_GetChildState(u32 id)
{
    u16 buf[7];
    u32 r = OS_DisableInterrupts();
    u16 bit = 1 << id;
    Unk_ov001_02220ad8_S *s = sWfcMoveMb;
    if (!(s->m[0] & bit)) {
        OS_RestoreInterrupts(r);
        return 0;
    }
    MI_CpuCopy8(s, buf, 0xe);
    OS_RestoreInterrupts(r);
    if (buf[2] & bit) return 2;
    if (buf[3] & bit) return 3;
    if (buf[4] & bit) return 4;
    if (buf[5] & bit) return 5;
    if (buf[6] & bit) return 6;
    return 1;
}

u8 *WfcMoveMb_GetChildInfo(u32 id)
{
    Unk_ov001_02220ad8_S *s = sWfcMoveMb;
    if (s->m[0] & (1 << id)) {
        return (u8 *)s + 0xe + (id - 1) * 0x1e;
    }
    return 0;
}

u32 WfcMoveMb_FindAidByMac(u8 *mac)
{
    Unk_ov001_02220ad8_S *s = sWfcMoveMb;
    u16 i;
    u16 mask = s->m[0];
    for (i = 1; i < 2; i++) {
        if (mask & (1 << i)) {
            u8 *e = (u8 *)s + 0x24 + (i - 1) * 0x1e;
            if (mac[0] == e[0] && mac[1] == e[1] && mac[2] == e[2] && mac[3] == e[3] && mac[4] == e[4] && mac[5] == e[5]) {
                return *(u16 *)((u8 *)s + (i - 1) * 0x1e + 0x2a);
            }
        }
    }
    return 0;
}

extern "C" Unk_ov001_02220ad8_S *sWfcMoveMb = 0;
extern "C" u16 *sWfcMoveMbMaskPtrs[6] = {0, 0, 0, 0, 0, 0};

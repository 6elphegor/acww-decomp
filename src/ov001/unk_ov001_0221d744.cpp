// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221d744_Ent {
    u8 unk_00[0x20];
    u8 unk_20[6];
    u16 unk_26;
    u8 unk_28;
    u8 unk_29;
};

struct Unk_ov001_0221d744_Tlv {
    u8 type;
    u8 len;
    u16 pad;
    u8 *data;
};

struct Unk_ov001_0221d744_Buf {
    u8 cnt;
    u8 pad[3];
    Unk_ov001_0221d744_Tlv v[16];
};

struct Unk_ov001_0221db6c_Blob { u32 v[17]; };

struct Unk_ov001_0221d744_Node {
    u8 unk_00[4];
    u8 unk_04[6];
    u8 unk_0a[2];
    u8 unk_0c;
    u8 unk_0d[0x1f];
    u16 unk_2c;
    u8 unk_2e[0xe];
    u16 unk_3c;
};

struct Unk_ov001_0221d744_List {
    u8 unk_00[0xe];
    u16 unk_0e;
    Unk_ov001_0221d744_Node *unk_10[0x10];
    u16 unk_50[1];
};

extern "C" {
s32 DC_InvalidateRange(void *, s32);
s32 memcmp(const void *, const void *, s32);
s32 MI_CpuCopy8(void *, void *, s32);
s32 WM_GetOtherElements(void *, void *);
s32 func_0206d49c(void *);
s32 func_0211faa0(void *);
s32 WM_Reset(void *);
s32 WM_End(void *);
s32 func_0211fdd4(void *, void *);
s32 MIi_CpuClear16(s32, void *, s32);
s32 WM_Initialize(void *, void *, s32);
s32 WM_GetDispersionScanPeriod();
u32 WM_GetAllowedChannel();
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);

void func_ov001_0221d744(Unk_ov001_0221d744_List *);
void func_ov001_0221d970(u16 *);
s32 func_ov001_0221da0c(Unk_ov001_0221d744_Ent **out);
BOOL func_ov001_0221da70();
BOOL func_ov001_0221db28();
BOOL func_ov001_0221db6c();
void func_ov001_0221dc60();
void func_ov001_0221dca4();
}

extern "C" const u8 data_ov001_0222a2ac[4] = { 0x00, 0x50, 0xf2, 0x01 };
extern "C" const u8 data_ov001_0222a2b0[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
extern "C" const u32 data_ov001_0222a2b8[17] = { 0, 0x3fff0400, 0xffff0000, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
u8 *data_ov001_0222deec;

void func_ov001_0221dca4() {
    if (data_ov001_0222deec != 0) return;
    data_ov001_0222deec = (u8 *)func_ov001_02225db0(0x1e60, 0x20);
}

void func_ov001_0221dc60() {
    if (data_ov001_0222deec == 0) return;
    do {
    } while (WM_GetAllowedChannel() != 0x8000);
    func_ov001_02225d58(&data_ov001_0222deec);
}

BOOL func_ov001_0221db6c() {
    volatile u16 z = 0;
    MIi_CpuClear16(z, data_ov001_0222deec + 0x1300, 0x348);
    if (WM_Initialize(data_ov001_0222deec, (void *)func_ov001_0221d970, 3) != 2) return FALSE;
    u8 *g;
    do {
        func_0211faa0(data_ov001_0222deec + 0x168c);
        g = data_ov001_0222deec;
    } while (*(u16 *)(g + 0x168c) != 2);
    *(Unk_ov001_0221db6c_Blob *)(g + 0x1648) = *(const Unk_ov001_0221db6c_Blob *)data_ov001_0222a2b8;
    *(u32 *)(g + 0x1648) = (u32)(g + 0xf00);
    *(u16 *)(data_ov001_0222deec + 0x1650) = WM_GetDispersionScanPeriod();
    if (func_ov001_0221db28() != 0) return TRUE;
    return FALSE;
}

BOOL func_ov001_0221db28() {
    if (func_0211fdd4((void *)func_ov001_0221d970, data_ov001_0222deec + 0x1648) == 2) return TRUE;
    return FALSE;
}

BOOL func_ov001_0221da70() {
    data_ov001_0222deec[0x1e48] = 1;
    func_0211faa0(data_ov001_0222deec + 0x168c);
    if (*(u16 *)(data_ov001_0222deec + 0x168c) != 2) {
        if (WM_Reset((void *)func_ov001_0221d970) != 2) return FALSE;
        do {
            func_0211faa0(data_ov001_0222deec + 0x168c);
        } while (*(u16 *)(data_ov001_0222deec + 0x168c) != 2);
    }
    if (WM_End((void *)func_ov001_0221d970) != 2) return FALSE;
    return TRUE;
}

s32 func_ov001_0221da0c(Unk_ov001_0221d744_Ent **out) {
    s32 cnt = 0;
    s32 i = 0;
    *out = (Unk_ov001_0221d744_Ent *)(data_ov001_0222deec + 0x1300);
    Unk_ov001_0221d744_Ent *e = *out;
    for (; i < 20; i++, e++) {
        if (memcmp(e->unk_20, data_ov001_0222a2b0, 6) != 0) cnt++;
    }
    return cnt;
}

void func_ov001_0221d970(u16 *p) {
    if (p[1] != 0) return;
    if (data_ov001_0222deec[0x1e48] != 0) return;
    if (p[0] != 0x26) return;
    switch (p[4]) {
    case 5:
        func_ov001_0221d744((Unk_ov001_0221d744_List *)p);
        func_ov001_0221db28();
        break;
    case 4:
        func_ov001_0221db28();
        break;
    default:
        func_0206d49c(p);
        break;
    }
}

void func_ov001_0221d744(Unk_ov001_0221d744_List *p) {
    Unk_ov001_0221d744_Ent *tbl;
    Unk_ov001_0221d744_Buf buf;
    s32 i;
    tbl = (Unk_ov001_0221d744_Ent *)(data_ov001_0222deec + 0x1300);
    DC_InvalidateRange(data_ov001_0222deec + 0xf00, 0x400);
    for (i = 0; i < p->unk_0e; i++) {
        Unk_ov001_0221d744_Node *n = p->unk_10[i];
        if (n->unk_0c != 0 && n->unk_3c == 0) {
            s32 j = 0;
            Unk_ov001_0221d744_Ent *e = tbl;
            do {
                if (memcmp(n->unk_04, e->unk_20, 6) == 0) break;
                e++;
                j++;
            } while (j < 20);
            if (j == 20) {
                j = 0;
                e = tbl;
                do {
                    if (memcmp(e->unk_20, data_ov001_0222a2b0, 6) == 0) break;
                    e++;
                    j++;
                } while (j < 20);
                if (j == 20) return;
            }
            e = tbl + j;
            MI_CpuCopy8(n->unk_04, e->unk_20, 6);
            MI_CpuCopy8(&n->unk_0c, e, 0x20);
            e->unk_26 = p->unk_50[i];
            if ((n->unk_2c & 0x10) == 0) {
                e->unk_28 = 0;
            } else {
                e->unk_28 = 1;
                WM_GetOtherElements(&buf, n);
                s32 k;
                s32 cnt = buf.cnt;
                for (k = 0; k < cnt; k++) {
                    if (buf.v[k].type == 0x30) {
                        e->unk_28 = 2;
                        break;
                    }
                    if (buf.v[k].type == 0xdd && buf.v[k].len >= 4 && memcmp(buf.v[k].data, data_ov001_0222a2ac, 4) == 0) {
                        e->unk_28 = 2;
                        break;
                    }
                }
            }
        }
    }
}


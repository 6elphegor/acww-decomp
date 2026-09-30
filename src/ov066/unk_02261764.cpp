// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02261764_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02261764_TBits {
    s32 pad : 8;
    s32 f8 : 1;
};

struct Unk_ov066_02261764_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08[3];
    u8 unk_0b;
    u8 unk_0c[8];
    u8 unk_14;
    u8 unk_15[0x3c - 0x15];
    Unk_ov066_02261764_TBits unk_3c;
};

struct Unk_ov066_02261764_V {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 *unk_14;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u8 unk_20[8];
    u8 unk_28[0x60];
    u8 unk_88[4];
    u8 unk_8c;
    u8 unk_8d[5];
    u8 unk_92[4];
    u8 unk_96;
    u8 unk_97;
    u16 unk_98;
    u8 unk_9a[2];
    void (*unk_9c)(void);
    u8 pad[0xac - 0xa0];
    void (*unk_ac)(u8 *, u32, u32, void (*)(void));
    u8 pad2[0xbc - 0xb0];
    void (*unk_bc)(u32);
    Unk_ov066_02261764_CBits unk_c0;
};

struct Unk_ov066_02261764_Msg {
    u8 unk_00[0xa];
    u16 unk_0a;
    u8 *unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_ov066_02261764_R6 {
    u8 b[6];
};

struct Unk_ov066_02261764_Hdr {
    u16 a;
    u16 b;
    u32 c;
};

extern "C" {
extern Unk_ov066_02261764_S *data_ov066_022647ac;
extern Unk_ov066_02261764_V *data_ov066_022647b4;
extern u32 data_ov066_022647b8;

s32 func_02116048(void *, void *, s32);
s32 func_02115fb4(void *, u32, u32);

void func_ov066_0225f1c0(u32 a, u32 b);
s32 func_ov066_0225f7c8(void);
void func_ov066_0225f824(void);
void func_ov066_0225f5b4(void);
void func_ov066_02260e4c(u32 a);
BOOL func_ov066_022609e4(u8 *p);
void func_ov066_022610b0(void);
void func_ov066_022611b4(void);
s32 func_ov066_02261650(void);
void func_ov066_02261704(u8 *p);
void func_ov066_0226223c(u32 a, u32 b);

void func_ov066_02261764(Unk_ov066_02261764_Msg *m);
void func_ov066_022617d4(void);
void func_ov066_0226185c(void);
void func_ov066_02261860(Unk_ov066_02261764_Msg *m);
void func_ov066_02261894(u32 idx, u8 *src);
void func_ov066_022618dc(Unk_ov066_02261764_Msg *m);
void func_ov066_02261958(Unk_ov066_02261764_Msg *m);
void func_ov066_02261a4c(Unk_ov066_02261764_Msg *m);
void func_ov066_02261b14(void);
void func_ov066_02261bc4(u32 a);
void func_ov066_02261bfc(Unk_ov066_02261764_Msg *m);
void func_ov066_02261c5c(void);
void func_ov066_02261c80(void);
void func_ov066_02261ce0(u8 *a, u8 *b);
void func_ov066_02261db0(void);
void func_ov066_02261dfc(void);
void func_ov066_02261ee8(void);
void func_ov066_02261f6c(u32 idx, u8 *src);
s32 func_ov066_02261ff8(void *a, u32 n);
}

#pragma thumb off
extern "C" {

void func_ov066_02261764(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    func_02116048(m->unk_0c, b, 4);
    switch (b[0]) {
    case 0:
        func_ov066_02261704(m->unk_0c);
        break;
    case 1:
        return;
    case 2:
        break;
    }
}

void func_ov066_022617d4(void) {
    data_ov066_022647ac->unk_04 = 4;
    data_ov066_022647b4->unk_9c();
    if (data_ov066_022647ac->unk_3c.f8 != 0) {
        func_ov066_02261f6c(0, 0);
    }
    if (data_ov066_022647b4->unk_c0.f2 == 0) {
        func_ov066_0225f824();
    }
    func_ov066_0225f1c0(2, 0);
}

void func_ov066_0226185c(void) {
}

void func_ov066_02261860(Unk_ov066_02261764_Msg *m) {
    data_ov066_022647ac->unk_04 = 9;
    data_ov066_022647b4->unk_1e = m->unk_0a;
    func_ov066_022610b0();
}

void func_ov066_02261894(u32 idx, u8 *src) {
    u8 buf[8];
    func_02116048(src, buf, 8);
    data_ov066_022647b4->unk_98 |= 1 << idx;
    func_ov066_02261dfc();
}

void func_ov066_022618dc(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    func_02116048(m->unk_0c, b, 4);
    if (b[0] == 0) {
        return;
    }
    if (b[0] == 1) {
        return;
    }
    if (b[0] != 2) {
        return;
    }
    func_ov066_02261894(m->unk_12, m->unk_0c);
}

void func_ov066_02261958(Unk_ov066_02261764_Msg *m) {
    if (data_ov066_022647b4->unk_8c == data_ov066_022647ac->unk_0b) {
        func_ov066_02260e4c(1);
    }
    data_ov066_022647b4->unk_98 &= ~(1 << m->unk_10);
    func_ov066_02261f6c(m->unk_10, 0);
    func_ov066_0225f1c0(1, m->unk_10);
    if (data_ov066_022647b4->unk_8c <= 1) {
        if (data_ov066_022647b4->unk_c0.f2 != 0) {
            return;
        }
        data_ov066_022647b4->unk_9c();
        data_ov066_022647b4->unk_c0.f0 = 0;
        data_ov066_022647b4->unk_c0.f1 = 0;
    } else {
        func_ov066_02261bc4(m->unk_10);
        func_ov066_02261dfc();
        data_ov066_022647b4->unk_c0.f4 = 1;
    }
}

void func_ov066_02261a4c(Unk_ov066_02261764_Msg *m) {
    data_ov066_022647b4->unk_c0.f4 = 1;
    if (data_ov066_022647ac->unk_04 == 6) {
        data_ov066_022647ac->unk_04 = 9;
        data_ov066_022647b4->unk_1e = 0;
        func_ov066_02261c5c();
        data_ov066_022647b4->unk_c0.f5 = 1;
        func_ov066_0226223c(0xbd8a, data_ov066_022647b4->unk_8c);
        func_ov066_022611b4();
    }
    func_ov066_02261f6c(m->unk_10, (u8 *)&m->unk_0a);
    func_ov066_0225f1c0(0, m->unk_10);
    if (data_ov066_022647b4->unk_8c < data_ov066_022647ac->unk_0b) {
        return;
    }
    func_ov066_02260e4c(0);
}

void func_ov066_02261b14(void) {
    if (data_ov066_022647b4->unk_c0.f4 != 0) {
        func_ov066_0226223c(0xe34d, data_ov066_022647b4->unk_8c);
        func_ov066_022611b4();
        data_ov066_022647b4->unk_c0.f4 = 0;
    }
    if (data_ov066_022647ac->unk_04 != 6) {
        return;
    }
    data_ov066_022647b4->unk_96++;
    if (data_ov066_022647b4->unk_96 < data_ov066_022647ac->unk_14) {
        return;
    }
    func_ov066_0225f5b4();
}

void func_ov066_02261bc4(u32 a) {
    if (data_ov066_022647b4->unk_bc == NULL) {
        return;
    }
    data_ov066_022647b4->unk_bc(a);
}

void func_ov066_02261bfc(Unk_ov066_02261764_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (func_ov066_02261650() != 0) {
        return;
    }
    if (data_ov066_022647b4->unk_1e == 0) {
        func_ov066_022618dc(m);
        return;
    }
    func_ov066_02261764(m);
}

void func_ov066_02261c5c(void) {
    func_02115fb4(data_ov066_022647b4->unk_28, 0, 0x60);
}

void func_ov066_02261c80(void) {
    s32 i;
    u8 n;
    s32 off;
    n = 0;
    i = 0;
    off = 0;
    do {
        if (func_ov066_022609e4(data_ov066_022647b4->unk_28 + off) != 0) {
            n++;
        }
        i++;
        off += 6;
    } while (i < 16);
    data_ov066_022647b4->unk_8c = n;
}

void func_ov066_02261ce0(u8 *a, u8 *b) {
    u16 i = 0;
    do {
        BOOL ra = func_ov066_022609e4(a + i * 6);
        BOOL rb = func_ov066_022609e4(b + i * 6);
        *(Unk_ov066_02261764_R6 *)(a + i * 6) = *(Unk_ov066_02261764_R6 *)(b + i * 6);
        if (ra == 0 && rb != 0) {
            func_ov066_0225f1c0(0, i);
        }
        if (ra != 0 && rb == 0) {
            func_ov066_0225f1c0(1, i);
        }
        i++;
    } while (i < 16);
}

void func_ov066_02261db0(void) {
    data_ov066_022647b4->unk_c0.f0 = 0;
    if (data_ov066_022647b4->unk_c0.f1 == 0) {
        return;
    }
    func_ov066_02261dfc();
}

void func_ov066_02261dfc(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    if (data_ov066_022647b4->unk_c0.f0 != 0) {
        data_ov066_022647b4->unk_c0.f1 = 1;
        return;
    }
    data_ov066_022647b4->unk_c0.f0 = 1;
    data_ov066_022647b4->unk_c0.f1 = 0;
    h.a = 0;
    h.b = 0x68;
    seed = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b8 = seed;
    h.c = seed;
    func_02116048(&h, data_ov066_022647b4->unk_14, 8);
    func_02116048(data_ov066_022647b4->unk_28, data_ov066_022647b4->unk_14 + 8, 0x60);
    data_ov066_022647b4->unk_ac(data_ov066_022647b4->unk_14, 0x68, 0xffff, func_ov066_02261db0);
}

void func_ov066_02261ee8(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    seed = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    h.a = 2;
    h.b = 8;
    data_ov066_022647b8 = seed;
    h.c = seed;
    func_02116048(&h, data_ov066_022647b4->unk_14, 8);
    data_ov066_022647b4->unk_ac(data_ov066_022647b4->unk_14, 8, 1, 0);
}

void func_ov066_02261f6c(u32 idx, u8 *src) {
    u8 buf[6];
    u8 *r;
    if (src != NULL) {
        func_02116048(src, buf, 6);
    } else {
        func_02115fb4(buf, 0, 6);
    }
    r = (u8 *)data_ov066_022647b4 + idx * 6;
    *(Unk_ov066_02261764_R6 *)(r + 0x28) = *(Unk_ov066_02261764_R6 *)buf;
    func_ov066_02261c80();
}

s32 func_ov066_02261ff8(void *a, u32 n) {
    if (data_ov066_022647b4 != NULL && n <= 0x68) {
        u8 *p = (u8 *)data_ov066_022647b4->unk_08;
        data_ov066_022647b4->unk_c0.f4 = 1;
        func_02116048(a, p + 8, n);
        p[7] = n;
        data_ov066_022647b4->unk_18 = (n + 9) & ~1;
        return TRUE;
    }
    return FALSE;
}

}
#pragma thumb reset

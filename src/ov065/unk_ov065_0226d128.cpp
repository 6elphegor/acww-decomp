// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef unsigned long long u64;
typedef long long s64;

typedef void *(*Unk_ov065_0226dd2c_Alloc)(const char *, u32);
typedef void (*Unk_ov065_0226dd2c_Free)(const char *, void *, u32);

struct Unk_ov065_0226d158_Form {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Date {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226d158_Time {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Kv {
    const char *key;
    const char *val;
};

struct Unk_ov065_0226d158_Owner {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u16 unk_04[10];
    u16 unk_18;
    u16 unk_1a[26];
    u16 unk_4e;
};

struct Unk_ov065_02290604_S {
    u64 unk_00;
    u64 unk_08;
    u16 unk_10;
};

struct Unk_ov065_02290600_Obj {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x938 - 0x28];
    void *unk_938;
    u8 pad_93c[0x968 - 0x93c];
    u8 unk_968[0x9d4 - 0x968];
    s32 unk_9d4;
};

struct Unk_ov065_0226dd2c_Cfg {
    u32 v[11];
};

struct Unk_ov065_02290600_S {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    char unk_0c[4];
    char unk_10[0xf];
    char unk_1f[0x33];
    char unk_52[0x12d];
    char unk_17f[9];
    char unk_188[0x41];
    u8 pad_1c9[0x1cc - 0x1c9];
    Unk_ov065_0226dd2c_Cfg unk_1cc;
    u8 unk_1f8[0x2f8 - 0x1f8];
    Unk_ov065_02290600_Obj *unk_2f8;
    u8 unk_2fc[0x368 - 0x2fc];
    s32 unk_368;
    u8 pad_36c[0x3bc - 0x36c];
    u8 unk_3bc[0x18];
    s32 unk_3d4;
    u8 unk_3d8[0x13e0 - 0x3d8];
};

typedef Unk_ov065_02290600_S S;

struct Unk_ov065_0228b778 {
    char *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_ov065_0226dd2c_Alloc unk_10;
    Unk_ov065_0226dd2c_Free unk_14;
    s32 unk_18;
    s32 unk_1c;
};

// the same symbol is called with and without its argument
namespace Unk_ov065_0226e4dc_A {
extern "C" s32 func_ov065_0226e4dc(void);
}
namespace Unk_ov065_0226e4dc_B {
extern "C" s32 func_ov065_0226e4dc(void *p);
}

extern "C" {
extern S *data_ov065_02290600;
extern Unk_ov065_02290604_S data_ov065_02290604;
extern u32 data_0220064c;
extern char data_ov065_0228b720[4];
extern char data_ov065_0228b724[4];
extern char data_ov065_0228b728[4];
extern char data_ov065_0228b72c[4];
extern char data_ov065_0228b730[4];
extern char data_ov065_0228b734[4];
extern char data_ov065_0228b738[4];
extern char *data_ov065_0228b73c[7];
extern char data_ov065_0228b758[0x20];
extern Unk_ov065_0228b778 data_ov065_0228b778;

extern s32 memcmp(const void *a, const void *b, u32 n);
extern void MI_CpuCopy8(const void *src, void *dst, u32 n);
extern void MI_CpuFill8(void *dst, u32 v, u32 n);
extern void OS_GetMacAddress(void *p);
extern void OS_GetOwnerInfo(void *p);
extern s32 func_0211d3a0(void *p);
extern s32 func_0211d2e0(void *p);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32 v);
extern s32 OS_SPrintf(char *buf, const char *fmt, ...);
extern s32 OS_SNPrintf(char *buf, u32 n, const char *fmt, ...);
extern s32 func_0212a438(const char *s);
extern s32 func_0212dcb4(const void *s);
extern void func_020ff0bc(void *p);
extern void OS_LockMutex(void *m);
extern void OS_UnlockMutex(void *m);
extern s32 OS_InitMutex(void *m);
extern s32 func_0212b770(void);
extern s32 func_0212b784(const char *s, char **end, s32 base);
extern s32 func_020ff6f4(void *p, u32 v);
extern void func_020ff5cc(void *p);
extern void func_020ff734(u32 v);
extern void OS_JoinThread(void *p);
extern s32 OS_IsThreadTerminated(void *t);
extern s32 OS_WakeupThreadDirect(void *t);
extern s32 func_02113a70(void *t, s32 (*fn)(void *), void *arg, void *stack, u32 size, u32 prio);
extern s64 OS_GetTick(void);
extern void func_021132e0(u32 ms);
extern s32 func_0212a190(const char *a, const char *b);
extern char *func_0212a360(char *dst, const char *src);

extern void func_ov065_0226d0b0(void *a, void *dst);
extern u8 *func_ov065_0226abb0(void);
extern u8 *func_ov065_0226ab5c(u16 *out);
extern u32 func_ov065_0226b148(void);
extern s32 func_ov065_0226e07c(void *l, const char *k, const char *v);
extern s32 func_ov065_0226e3ac(void *a, const char *k, const char *v);
extern s32 func_ov065_0226e2e4(void *a, const char *k, const char *v, u32 n);
extern char *func_ov065_0226de90(void *buf, s32 n, const char *key);
extern s32 func_ov065_0226de4c(void *buf, s32 n, const char *key, char *out, u32 max);
extern s32 func_ov065_0226de0c(void *buf, s32 n, const char *key, char *out, s32 max);
extern s32 func_ov065_0226ded4(void *buf, s32 n, s32 a, void *b);
extern s32 func_ov065_0226ebe4(u32 a, void *b);
extern s32 func_ov065_0226eb6c(u32 a);
extern s32 func_ov065_0226eacc(u32 a);
extern s32 func_ov065_0226ea84(void);
extern s32 func_ov065_0226f9e0(const char *s, s32 len, char *dst, u32 size);

void func_ov065_0226d128(s32 v);
s32 func_ov065_0226d158(void *a0, const char *a1, const u16 *a2, Unk_ov065_0226d158_Kv *a3, s32 a4, s32 a5);
s32 func_ov065_0226d544(void);
s32 func_ov065_0226d6e4(void);
void func_ov065_0226d860(void);
s32 func_ov065_0226da64(s32 a);
void func_ov065_0226db28(s32 *p);
s32 func_ov065_0226db98(void);
void func_ov065_0226dbd0(void);
void func_ov065_0226dbfc(void);
void func_ov065_0226dc40(void);
void func_ov065_0226dcac(void);
s32 func_ov065_0226dd2c(Unk_ov065_0226dd2c_Cfg *cfg, u32 a);
void func_ov065_0226de00(char *s);
}

extern "C" {
char data_ov065_0228b728[4] = "04";
Unk_ov065_02290604_S data_ov065_02290604;
char data_ov065_0228b720[4] = "01";
char data_ov065_0228b738[4] = "06";
char data_ov065_0228b758[0x20] = "https://nas.nintendowifi.net/ac";
char data_ov065_0228b734[4] = "00";
char data_ov065_0228b730[4] = "05";
char data_ov065_0228b72c[4] = "02";
Unk_ov065_0228b778 data_ov065_0228b778 = {data_ov065_0228b758, 0, 0, 0x1000, 0, 0, 0, 0x4e20};
char data_ov065_0228b724[4] = "03";
S *data_ov065_02290600;
char *data_ov065_0228b73c[7] = {data_ov065_0228b734, data_ov065_0228b720, data_ov065_0228b72c,
                                data_ov065_0228b724, data_ov065_0228b728, data_ov065_0228b730,
                                data_ov065_0228b738};
}

extern "C" {

void func_ov065_0226de00(char *s) {
    data_ov065_0228b778.unk_00 = s;
}

s32 func_ov065_0226dd2c(Unk_ov065_0226dd2c_Cfg *cfg, u32 a) {
    if (data_ov065_02290600 != NULL) {
        return 2;
    }
    void *p = ((Unk_ov065_0226dd2c_Alloc)cfg->v[9])("DWCAuth", 0x13e0);
    if (p == NULL) {
        return 2;
    }
    data_ov065_02290600 = (S *)p;
    MI_CpuFill8(p, 0, 0x13e0);
    data_ov065_02290600->unk_2f8 = (Unk_ov065_02290600_Obj *)a;
    MI_CpuFill8(&data_ov065_02290600->unk_08, 0, 0x1c4);
    data_ov065_02290600->unk_08 = -1;
    data_ov065_02290600->unk_1cc = *cfg;
    *((u8 *)data_ov065_02290600 + 0x1e0) = 0;
    *((u8 *)data_ov065_02290600 + 0x1e1) = 0;
    *((u8 *)data_ov065_02290600 + 0x1ed) = 0;
    data_ov065_0228b778.unk_10 = (Unk_ov065_0226dd2c_Alloc)cfg->v[9];
    data_ov065_0228b778.unk_14 = (Unk_ov065_0226dd2c_Free)cfg->v[10];
    data_ov065_02290600->unk_04 = func_ov065_0226da64(1);
    if (data_ov065_02290600->unk_04 == 0) {
        func_ov065_0226dcac();
        return 0;
    }
    return data_ov065_02290600->unk_04;
}

void func_ov065_0226dcac(void) {
    OS_InitMutex(data_ov065_02290600->unk_3bc);
    data_ov065_02290600->unk_3d4 = 0;
    if (data_ov065_02290600->unk_368 == 0 || OS_IsThreadTerminated(data_ov065_02290600->unk_2fc) != 0) {
        func_02113a70(data_ov065_02290600->unk_2fc, (s32 (*)(void *))func_ov065_0226d860, &data_ov065_02290600,
                      (u8 *)data_ov065_02290600 + 0x13e0, 0x1000, 0x10);
        OS_WakeupThreadDirect(data_ov065_02290600->unk_2fc);
    }
}

void func_ov065_0226dc40(void) {
    if (data_ov065_02290600 != NULL) {
        OS_LockMutex(data_ov065_02290600->unk_3bc);
        data_ov065_02290600->unk_3d4 = 1;
        OS_UnlockMutex(data_ov065_02290600->unk_3bc);
        if (data_ov065_02290600->unk_2f8) {
            func_ov065_0226ea84();
        }
        if (data_ov065_02290600->unk_368) {
            OS_JoinThread(data_ov065_02290600->unk_2fc);
        }
    }
}

void func_ov065_0226dbfc(void) {
    if (data_ov065_02290600 != NULL) {
        if (data_ov065_02290600->unk_2f8) {
            Unk_ov065_0226e4dc_A::func_ov065_0226e4dc();
        }
        ((Unk_ov065_0226dd2c_Free)data_ov065_02290600->unk_1cc.v[10])("DWCauth", data_ov065_02290600, 0);
        data_ov065_02290600 = NULL;
    }
}

void func_ov065_0226dbd0(void) {
    if (data_ov065_02290600->unk_368) {
        OS_JoinThread(data_ov065_02290600->unk_2fc);
    }
}

s32 func_ov065_0226db98(void) {
    s32 r;
    if (data_ov065_02290600 == NULL) {
        return 0x15;
    }
    OS_LockMutex(data_ov065_02290600->unk_3bc);
    r = data_ov065_02290600->unk_04;
    OS_UnlockMutex(data_ov065_02290600->unk_3bc);
    return r;
}

void func_ov065_0226db28(s32 *p) {
    if (data_ov065_02290600 == NULL) {
        MI_CpuFill8(p, 0, 0x1c4);
    }
    MI_CpuCopy8(&data_ov065_02290600->unk_08, p, 0x1c4);
    s32 v = p[0];
    if (v >= 0) {
        if (v < 20000 || v >= 30000) {
            p[0] = -20998;
        }
    } else if (v > -20000 || v <= -30000) {
        p[0] = -20998;
    }
}

s32 func_ov065_0226da64(s32 a) {
    if (func_0212a190(data_ov065_0228b778.unk_00, data_ov065_0228b758)) {
        data_ov065_0228b778.unk_18 = 1;
    }
    if (func_ov065_0226ebe4((u32)data_ov065_02290600->unk_2f8, &data_ov065_0228b778)) {
        return 4;
    }
    if (a == 1) {
        func_020ff0bc(&data_ov065_02290604);
    }
    data_ov065_02290600->unk_04 = func_ov065_0226d158(
        data_ov065_02290600->unk_2f8, (char *)data_ov065_02290600 + 0x1e2, (u16 *)((u8 *)data_ov065_02290600 + 0x1cc),
        (Unk_ov065_0226d158_Kv *)((u8 *)data_ov065_02290600 + 0x1f8), 0x20, 0);
    if (data_ov065_02290600->unk_04 != 0) {
        return 4;
    }
    if (func_ov065_0226eb6c((u32)data_ov065_02290600->unk_2f8)) {
        return 4;
    }
    func_ov065_0226eacc((u32)data_ov065_02290600->unk_2f8);
    return 0;
}

void func_ov065_0226d860(void) {
    s32 tries = 0;
    s32 flag;
    s32 z0 = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 r;
    s64 t0;
    s64 ms;
    Unk_ov065_02290600_Obj *o;
    S *g;

    for (;;) {
        o = data_ov065_02290600->unk_2f8;
        if (o->unk_9d4 != 0) {
            OS_JoinThread(o->unk_968);
        }
        g = data_ov065_02290600;
        if (g->unk_2f8->unk_24 != 8) {
            g->unk_08 = -0x4e84;
            r = data_ov065_02290600->unk_2f8->unk_24;
            if (r == 7) {
                func_ov065_0226d128(0x13);
                return;
            }
            if (tries > 2) {
                if (r == 2) {
                    func_ov065_0226d128(9);
                    return;
                }
                func_ov065_0226d128(0xc);
                return;
            }
            tries++;
            flag = 1;
        } else {
            r = func_ov065_0226d6e4();
            switch (r) {
            case 0x14:
                func_ov065_0226d128(0x14);
                return;
            case 0xf:
                if (tries >= 2) {
                    func_ov065_0226d128(0xf);
                    data_ov065_02290600->unk_08 = -data_ov065_02290600->unk_08;
                    return;
                }
                tries++;
                flag = z1;
                break;
            case 0x10:
                data_ov065_02290600->unk_08 = -data_ov065_02290600->unk_08;
                func_ov065_0226d128(r);
                return;
            default:
                if (tries >= 2) {
                    data_ov065_02290600->unk_08 = -data_ov065_02290600->unk_08;
                    func_ov065_0226d128(r);
                    return;
                }
                tries++;
                flag = 1;
                break;
            }
        }
        t0 = OS_GetTick();
        while ((u64)((OS_GetTick() - t0) * 64) / 0x82ea < 0x1388) {
            OS_LockMutex(data_ov065_02290600->unk_3bc);
            if (data_ov065_02290600->unk_3d4 == 1) {
                data_ov065_02290600->unk_08 = -0x4e84;
                OS_UnlockMutex(data_ov065_02290600->unk_3bc);
                func_ov065_0226d128(0x13);
                return;
            }
            OS_UnlockMutex(data_ov065_02290600->unk_3bc);
            func_021132e0(0x1388);
        }
        Unk_ov065_0226e4dc_B::func_ov065_0226e4dc(data_ov065_02290600->unk_2f8);
        OS_LockMutex(data_ov065_02290600->unk_3bc);
        data_ov065_02290600->unk_04 = func_ov065_0226da64(flag);
        if (data_ov065_02290600->unk_04 != 0) {
            data_ov065_02290600->unk_08 = -0x4e84;
            OS_UnlockMutex(data_ov065_02290600->unk_3bc);
            return;
        }
        OS_UnlockMutex(data_ov065_02290600->unk_3bc);
    }
}

s32 func_ov065_0226d6e4(void) {
    S *g;
    char *m;
    void *r;

    g = data_ov065_02290600;
    if (func_ov065_0226ded4(g->unk_1f8, 0x20, 0, g->unk_2f8->unk_938) != 1) {
        data_ov065_02290600->unk_08 = 0x4e84;
        return 0xd;
    }
    if (func_ov065_0226d544() != 0) {
        return 0xd;
    }
    g = data_ov065_02290600;
    s32 st = g->unk_08;
    if (st < 0x4e84) {
        if (st == 0x4e22) {
            m = "bmwork";
            r = ((Unk_ov065_0226dd2c_Alloc)g->unk_1cc.v[9])(m, 0x71f);
            if (r == 0) {
                data_ov065_02290600->unk_08 = 0x4e84;
                return 2;
            }
            if (func_020ff6f4(&data_ov065_02290604, ((u32)r + 0x1f) & ~0x1f) != 1) {
                ((Unk_ov065_0226dd2c_Free)data_ov065_02290600->unk_1cc.v[10])(m, r, 0);
                data_ov065_02290600->unk_08 = 0x4e84;
                return 0xe;
            }
            ((Unk_ov065_0226dd2c_Free)data_ov065_02290600->unk_1cc.v[10])(m, r, 0);
        }
        return 0x14;
    }
    switch (st) {
    case 0x4e88:
        func_020ff5cc(&data_ov065_02290604);
        data_ov065_02290600->unk_08 = 0x4e88;
        return 0xf;
    case 0x4e8c:
        m = "bmwork";
        r = ((Unk_ov065_0226dd2c_Alloc)g->unk_1cc.v[9])(m, 0x71f);
        if (r == 0) {
            data_ov065_02290600->unk_08 = 0x4e8c;
            return 0x10;
        }
        func_020ff734(((u32)r + 0x1f) & ~0x1f);
        ((Unk_ov065_0226dd2c_Free)data_ov065_02290600->unk_1cc.v[10])(m, r, 0);
        data_ov065_02290600->unk_08 = 0x4e8c;
        return 0x10;
    default:
        return 0x11;
    }
}

s32 func_ov065_0226d544(void) {
    char *end = 0;
    S *g;

    func_ov065_0226de90(data_ov065_02290600->unk_1f8, 0x20, "httpresult");
    s32 st = func_0212b770();
    if (data_0220064c == 0x22) {
        data_ov065_02290600->unk_08 = 0x4e85;
        return 0xb;
    }
    if (st != 200) {
        data_ov065_02290600->unk_08 = st + 0x59d8;
        return 0x11;
    }
    g = data_ov065_02290600;
    if (func_ov065_0226de4c(g->unk_1f8, 0x20, "returncd", g->unk_0c, 4) <= 0) {
        data_ov065_02290600->unk_08 = 0x4e85;
        return 0xd;
    }
    s32 code = func_0212b784(data_ov065_02290600->unk_0c, &end, 10);
    g = data_ov065_02290600;
    s32 l = func_0212a438(g->unk_0c);
    if (end != g->unk_0c + l) {
        g->unk_08 = 0x4e85;
        return 0xb;
    }
    g->unk_08 = code + 0x4e20;
    if (code < 100) {
        data_ov065_02290600->unk_52[0] = 0;
        data_ov065_02290600->unk_1f[0] = 0;
        data_ov065_02290600->unk_17f[0] = 0;
        data_ov065_02290600->unk_10[0] = 0;
        data_ov065_02290600->unk_188[0] = 0;
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, "token", g->unk_52, 0x12d);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, "locator", g->unk_1f, 0x33);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, "challenge", g->unk_17f, 9);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, "datetime", g->unk_10, 0xf);
        g = data_ov065_02290600;
        func_ov065_0226de0c(g->unk_1f8, 0x20, "Set-Cookie", g->unk_188, 0x41);
        data_ov065_02290600->unk_188[0x2b] = 0;
    }
    return 0;
}

s32 func_ov065_0226d158(void *a0, const char *a1, const u16 *a2, Unk_ov065_0226d158_Kv *a3, s32 a4, s32 a5) {
    u16 len;
    u8 mac[6];
    u8 mac2[6];
    char code4[5];
    char code2[3];
    char birth[5];
    char pw[4];
    Unk_ov065_0226d158_Date date;
    Unk_ov065_0226d158_Time time;
    Unk_ov065_0226d158_Form form;
    char macstr[13];
    char devtime[13];
    char nick[0x15];
    char bssid[13];
    u8 buf[0x21];
    char apinfo[14];
    char userid[14];
    Unk_ov065_0226d158_Owner owner;
    s32 i;
    u32 irq;
    u8 *ptr;

    OS_GetMacAddress(mac);
    OS_GetOwnerInfo(&owner);
    if (func_0211d3a0(&date) != 0 || func_0211d2e0(&time) != 0) {
        return 5;
    }
    irq = OS_DisableInterrupts();
    ptr = func_ov065_0226abb0();
    if (ptr == 0) {
        OS_RestoreInterrupts(irq);
        return 3;
    }
    MI_CpuCopy8(ptr, mac2, 6);
    MI_CpuFill8(buf, 0, 0x21);
    ptr = func_ov065_0226ab5c(&len);
    if (ptr == 0) {
        OS_RestoreInterrupts(irq);
        return 3;
    }
    MI_CpuCopy8(ptr, buf, len);
    OS_RestoreInterrupts(irq);
    MI_CpuCopy8((void *)0x27ffe0c, code4, 4);
    code4[4] = 0;
    MI_CpuCopy8((void *)0x27ffe10, code2, 2);
    code2[2] = 0;
    for (i = 0; i < 6; i++) {
        OS_SPrintf(macstr + i * 2, "%02x", mac[i]);
    }
    macstr[12] = 0;
    if (owner.unk_00 > 6) {
        owner.unk_00 = 1;
    }
    OS_SNPrintf(birth, 5, "%02x%02x", owner.unk_02, owner.unk_03);
    OS_SNPrintf(devtime, 13, "%02d%02d%02d%02d%02d%02d", date.unk_00, date.unk_04, date.unk_08,
                  time.unk_00, time.unk_04, time.unk_08);
    MI_CpuCopy8(owner.unk_04, nick, 0x14);
    nick[0x14] = 0;
    MI_CpuFill8(&form, 0, 0xc);
    form.unk_00 = a3;
    form.unk_04 = a4;
    if (a5 != 1) {
        if (data_ov065_02290604.unk_00 == 0) {
            func_ov065_0226e07c(&form, "action", "acctcreate");
        } else {
            if (func_0212a438(a1) == 0) {
                return 6;
            }
            func_ov065_0226e07c(&form, "action", "login");
            func_ov065_0226e07c(&form, "gsbrcd", a1);
        }
    } else {
        func_020ff0bc(&data_ov065_02290604);
    }
    func_ov065_0226e07c(&form, "sdkver", "001000");
    if (data_ov065_02290604.unk_00 != 0) {
        OS_SNPrintf(userid, 14, "%013llu", data_ov065_02290604.unk_00);
    } else {
        OS_SNPrintf(userid, 14, "%013llu", data_ov065_02290604.unk_08);
    }
    func_ov065_0226e07c(&form, "userid", userid);
    OS_SNPrintf(pw, 4, "%03u", data_ov065_02290604.unk_10);
    func_ov065_0226e07c(&form, "passwd", pw);
    OS_SNPrintf(bssid, 13, "%02x%02x%02x%02x%02x%02x", mac2[0], mac2[1], mac2[2], mac2[3], mac2[4], mac2[5]);
    OS_SNPrintf(apinfo, 14, "%02d:0000000-00", func_ov065_0226b148());
    func_ov065_0226d0b0(buf, apinfo + 3);
    func_ov065_0226e07c(&form, "gamecd", code4);
    func_ov065_0226e07c(&form, "makercd", code2);
    func_ov065_0226e07c(&form, "unitcd", "0");
    func_ov065_0226e07c(&form, "macadr", macstr);
    func_ov065_0226e07c(&form, "lang", data_ov065_0228b73c[owner.unk_00]);
    func_ov065_0226e07c(&form, "birth", birth);
    func_ov065_0226e07c(&form, "devtime", devtime);
    func_ov065_0226e07c(&form, "bssid", bssid);
    func_ov065_0226e07c(&form, "apinfo", apinfo);
    if (func_ov065_0226e3ac(a0, "User-Agent", "Nitro WiFi SDK/1.0") != 0) {
        return 7;
    }
    if (func_ov065_0226e3ac(a0, "HTTP_X_GAMECD", code4) != 0) {
        return 7;
    }
    i = 0;
    for (; a3->key != 0; a3++, i++) {
        const char *v = a3->val;
        if (func_ov065_0226e2e4(a0, a3->key, v, func_0212a438(v)) != 0) {
            return 8;
        }
    }
    if (func_ov065_0226e2e4(a0, "devname", nick, 0x14) != 0) {
        return 8;
    }
    if (func_0212dcb4(a2) != 0) {
        if (func_ov065_0226e2e4(a0, "ingamesn", (const char *)a2, func_0212dcb4(a2) * 2) != 0) {
            return 8;
        }
    }
    return 0;
}

void func_ov065_0226d128(s32 v) {
    OS_LockMutex(data_ov065_02290600->unk_3bc);
    data_ov065_02290600->unk_04 = v;
    OS_UnlockMutex(data_ov065_02290600->unk_3bc);
}

}

// mwcc-flags: -O4,p
#include "types.h"

typedef unsigned long long u64;
typedef long long s64;

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

typedef void *(*Unk_ov065_02290600_Alloc)(const char *, u32);
typedef void (*Unk_ov065_02290600_Free)(const char *, void *, u32);

struct Unk_ov065_02290600_S {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    char unk_0c[4];
    char unk_10[0xf];
    char unk_1f[0x33];
    char unk_52[0x12d];
    char unk_17f[9];
    char unk_188[0x41];
    u8 pad_1c9[0x1f0 - 0x1c9];
    Unk_ov065_02290600_Alloc unk_1f0;
    Unk_ov065_02290600_Free unk_1f4;
    u8 unk_1f8[0x2f8 - 0x1f8];
    Unk_ov065_02290600_Obj *unk_2f8;
    u8 pad_2fc[0x3bc - 0x2fc];
    u8 unk_3bc[0x18];
    s32 unk_3d4;
};

typedef Unk_ov065_02290600_S S;

extern "C" {
extern S *data_ov065_02290600;
extern Unk_ov065_02290604_S data_ov065_02290604;
extern u32 data_0220064c;
extern char data_ov065_0228b708[];
extern char data_ov065_0228b714[];
extern char *data_ov065_0228b73c[];
extern char data_ov065_0228b798[];
extern char data_ov065_0228b7a0[];
extern char data_ov065_0228b7ac[];
extern char data_ov065_0228b7c8[];
extern char data_ov065_0228b7d0[];
extern char data_ov065_0228b7dc[];
extern char data_ov065_0228b7e4[];
extern char data_ov065_0228b7ec[];
extern char data_ov065_0228b7f4[];
extern char data_ov065_0228b7fc[];
extern char data_ov065_0228b804[];
extern char data_ov065_0228b80c[];
extern char data_ov065_0228b814[];
extern char data_ov065_0228b81c[];
extern char data_ov065_0228b838[];
extern char data_ov065_0228b848[];
extern char data_ov065_0228b850[];
extern char data_ov065_0228b858[];
extern char data_ov065_0228b860[];
extern char data_ov065_0228b864[];
extern char data_ov065_0228b86c[];
extern char data_ov065_0228b874[];
extern char data_ov065_0228b87c[];
extern char data_ov065_0228b884[];
extern char data_ov065_0228b88c[];
extern char data_ov065_0228b894[];
extern char data_ov065_0228b8a0[];
extern char data_ov065_0228b8b4[];
extern char data_ov065_0228b8c4[];
extern char data_ov065_0228b8cc[];
extern char data_ov065_0228b8d8[];
extern char data_ov065_0228b8e4[];
extern char data_ov065_0228b8f0[];
extern char data_ov065_0228b8f8[];
extern char data_ov065_0228b900[];
extern char data_ov065_0228b90c[];
extern char data_ov065_0228b918[];
extern char data_ov065_0228b924[];

extern s32 func_02128930(const void *a, const void *b, u32 n);
extern void func_02116048(const void *src, void *dst, u32 n);
extern void func_02115fb4(void *dst, u32 v, u32 n);
extern void func_02115640(void *p);
extern void func_021155c4(void *p);
extern s32 func_0211d3a0(void *p);
extern s32 func_0211d2e0(void *p);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32 v);
extern s32 func_021130d0(char *buf, const char *fmt, ...);
extern s32 func_02113088(char *buf, u32 n, const char *fmt, ...);
extern s32 func_0212a438(const char *s);
extern s32 func_0212dcb4(const void *s);
extern void func_020ff0bc(void *p);
extern void func_02114480(void *m);
extern void func_02114410(void *m);
extern s32 func_0212b770(void);
extern s32 func_0212b784(const char *s, char **end, s32 base);
extern s32 func_020ff6f4(void *p, u32 v);
extern void func_020ff5cc(void *p);
extern void func_020ff734(u32 v);
extern void func_02113788(void *p);
extern u64 func_01ffa6b4(void);
extern void func_021132e0(u32 ms);

extern void func_ov065_0226cec0(void *p);
extern void func_ov065_0226cfe4(void *in, void *out);
extern void func_ov065_0226cfb0(void *in, void *p);
extern u8 *func_ov065_0226abb0(void);
extern u8 *func_ov065_0226ab5c(u16 *out);
extern u32 func_ov065_0226b148(void);
extern s32 func_ov065_0226e07c(Unk_ov065_0226d158_Form *f, const char *k, const char *v);
extern s32 func_ov065_0226e3ac(void *a, const char *k, const char *v);
extern s32 func_ov065_0226e2e4(void *a, const char *k, const char *v, u32 n);
extern s32 func_ov065_0226de90(void *buf, u32 n, const char *key);
extern s32 func_ov065_0226de4c(void *buf, u32 n, const char *key, void *out, u32 max);
extern s32 func_ov065_0226de0c(void *buf, u32 n, const char *key, void *out, u32 max);
extern s32 func_ov065_0226ded4(void *buf, u32 n, u32 a, void *b);
extern s32 func_ov065_0226e4dc(void *p);
extern s32 func_ov065_0226da64(s32 a);

void func_ov065_0226d080(u8 *p) {
    func_ov065_0226cec0(p + 0xc);
}

s32 func_ov065_0226d08c(void *p) {
    if (func_02128930(p, data_ov065_0228b708, 8) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226d0b0(void *a, void *dst) {
    u8 buf[0x18];
    func_ov065_0226cfe4(a, buf);
    if (func_02128930(buf, data_ov065_0228b714, 8) == 0) {
        func_02116048(buf + 8, dst, 10);
    }
}

void func_ov065_0226d0e0(void *a, void *b) {
    u8 buf[0x18];
    func_ov065_0226cfe4(a, buf);
    func_ov065_0226cfb0(buf, b);
}

s32 func_ov065_0226d0fc(void *a) {
    u8 buf[0x1c];
    func_ov065_0226cfe4(a, buf);
    if (func_02128930(buf, data_ov065_0228b714, 8) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226d128(s32 v) {
    func_02114480(data_ov065_02290600->unk_3bc);
    data_ov065_02290600->unk_04 = v;
    func_02114410(data_ov065_02290600->unk_3bc);
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

    func_02115640(mac);
    func_021155c4(&owner);
    if (func_0211d3a0(&date) != 0 || func_0211d2e0(&time) != 0) {
        return 5;
    }
    irq = func_01ffa2ec();
    ptr = func_ov065_0226abb0();
    if (ptr == 0) {
        func_01ffa3d4(irq);
        return 3;
    }
    func_02116048(ptr, mac2, 6);
    func_02115fb4(buf, 0, 0x21);
    ptr = func_ov065_0226ab5c(&len);
    if (ptr == 0) {
        func_01ffa3d4(irq);
        return 3;
    }
    func_02116048(ptr, buf, len);
    func_01ffa3d4(irq);
    func_02116048((void *)0x27ffe0c, code4, 4);
    code4[4] = 0;
    func_02116048((void *)0x27ffe10, code2, 2);
    code2[2] = 0;
    for (i = 0; i < 6; i++) {
        func_021130d0(macstr + i * 2, data_ov065_0228b798, mac[i]);
    }
    macstr[12] = 0;
    if (owner.unk_00 > 6) {
        owner.unk_00 = 1;
    }
    func_02113088(birth, 5, data_ov065_0228b7a0, owner.unk_02, owner.unk_03);
    func_02113088(devtime, 13, data_ov065_0228b7ac, date.unk_00, date.unk_04, date.unk_08,
                  time.unk_00, time.unk_04, time.unk_08);
    func_02116048(owner.unk_04, nick, 0x14);
    nick[0x14] = 0;
    func_02115fb4(&form, 0, 0xc);
    form.unk_00 = a3;
    form.unk_04 = a4;
    if (a5 != 1) {
        if (data_ov065_02290604.unk_00 == 0) {
            func_ov065_0226e07c(&form, data_ov065_0228b7c8, data_ov065_0228b7d0);
        } else {
            if (func_0212a438(a1) == 0) {
                return 6;
            }
            func_ov065_0226e07c(&form, data_ov065_0228b7c8, data_ov065_0228b7dc);
            func_ov065_0226e07c(&form, data_ov065_0228b7e4, a1);
        }
    } else {
        func_020ff0bc(&data_ov065_02290604);
    }
    func_ov065_0226e07c(&form, data_ov065_0228b7ec, data_ov065_0228b7f4);
    if (data_ov065_02290604.unk_00 != 0) {
        func_02113088(userid, 14, data_ov065_0228b7fc, data_ov065_02290604.unk_00);
    } else {
        func_02113088(userid, 14, data_ov065_0228b7fc, data_ov065_02290604.unk_08);
    }
    func_ov065_0226e07c(&form, data_ov065_0228b804, userid);
    func_02113088(pw, 4, data_ov065_0228b80c, data_ov065_02290604.unk_10);
    func_ov065_0226e07c(&form, data_ov065_0228b814, pw);
    func_02113088(bssid, 13, data_ov065_0228b81c, mac2[0], mac2[1], mac2[2], mac2[3], mac2[4], mac2[5]);
    func_02113088(apinfo, 14, data_ov065_0228b838, func_ov065_0226b148());
    func_ov065_0226d0b0(buf, apinfo + 3);
    func_ov065_0226e07c(&form, data_ov065_0228b848, code4);
    func_ov065_0226e07c(&form, data_ov065_0228b850, code2);
    func_ov065_0226e07c(&form, data_ov065_0228b858, data_ov065_0228b860);
    func_ov065_0226e07c(&form, data_ov065_0228b864, macstr);
    func_ov065_0226e07c(&form, data_ov065_0228b86c, data_ov065_0228b73c[owner.unk_00]);
    func_ov065_0226e07c(&form, data_ov065_0228b874, birth);
    func_ov065_0226e07c(&form, data_ov065_0228b87c, devtime);
    func_ov065_0226e07c(&form, data_ov065_0228b884, bssid);
    func_ov065_0226e07c(&form, data_ov065_0228b88c, apinfo);
    if (func_ov065_0226e3ac(a0, data_ov065_0228b894, data_ov065_0228b8a0) != 0) {
        return 7;
    }
    if (func_ov065_0226e3ac(a0, data_ov065_0228b8b4, code4) != 0) {
        return 7;
    }
    i = 0;
    for (; a3->key != 0; a3++, i++) {
        const char *v = a3->val;
        if (func_ov065_0226e2e4(a0, a3->key, v, func_0212a438(v)) != 0) {
            return 8;
        }
    }
    if (func_ov065_0226e2e4(a0, data_ov065_0228b8c4, nick, 0x14) != 0) {
        return 8;
    }
    if (func_0212dcb4(a2) != 0) {
        if (func_ov065_0226e2e4(a0, data_ov065_0228b8cc, (const char *)a2, func_0212dcb4(a2) * 2) != 0) {
            return 8;
        }
    }
    return 0;
}

s32 func_ov065_0226d544(void) {
    char *end = 0;
    S *g;

    func_ov065_0226de90(data_ov065_02290600->unk_1f8, 0x20, data_ov065_0228b8d8);
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
    if (func_ov065_0226de4c(g->unk_1f8, 0x20, data_ov065_0228b8e4, g->unk_0c, 4) <= 0) {
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
        func_ov065_0226de4c(g->unk_1f8, 0x20, data_ov065_0228b8f0, g->unk_52, 0x12d);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, data_ov065_0228b8f8, g->unk_1f, 0x33);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, data_ov065_0228b900, g->unk_17f, 9);
        g = data_ov065_02290600;
        func_ov065_0226de4c(g->unk_1f8, 0x20, data_ov065_0228b90c, g->unk_10, 0xf);
        g = data_ov065_02290600;
        func_ov065_0226de0c(g->unk_1f8, 0x20, data_ov065_0228b918, g->unk_188, 0x41);
        data_ov065_02290600->unk_188[0x2b] = 0;
    }
    return 0;
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
            m = data_ov065_0228b924;
            r = g->unk_1f0(m, 0x71f);
            if (r == 0) {
                data_ov065_02290600->unk_08 = 0x4e84;
                return 2;
            }
            if (func_020ff6f4(&data_ov065_02290604, ((u32)r + 0x1f) & ~0x1f) != 1) {
                data_ov065_02290600->unk_1f4(m, r, 0);
                data_ov065_02290600->unk_08 = 0x4e84;
                return 0xe;
            }
            data_ov065_02290600->unk_1f4(m, r, 0);
        }
        return 0x14;
    }
    switch (st) {
    case 0x4e88:
        func_020ff5cc(&data_ov065_02290604);
        data_ov065_02290600->unk_08 = 0x4e88;
        return 0xf;
    case 0x4e8c:
        m = data_ov065_0228b924;
        r = g->unk_1f0(m, 0x71f);
        if (r == 0) {
            data_ov065_02290600->unk_08 = 0x4e8c;
            return 0x10;
        }
        func_020ff734(((u32)r + 0x1f) & ~0x1f);
        data_ov065_02290600->unk_1f4(m, r, 0);
        data_ov065_02290600->unk_08 = 0x4e8c;
        return 0x10;
    default:
        return 0x11;
    }
}

void func_ov065_0226d860(void) {
    s32 tries = 0;
    s32 flag;
    s32 z0 = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 r;
    u64 t0;
    u64 ms;
    Unk_ov065_02290600_Obj *o;
    S *g;

    for (;;) {
        o = data_ov065_02290600->unk_2f8;
        if (o->unk_9d4 != 0) {
            func_02113788(o->unk_968);
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
        t0 = func_01ffa6b4();
        while ((u64)((func_01ffa6b4() - t0) * 64) / 0x82ea < 0x1388) {
            func_02114480(data_ov065_02290600->unk_3bc);
            if (data_ov065_02290600->unk_3d4 == 1) {
                data_ov065_02290600->unk_08 = -0x4e84;
                func_02114410(data_ov065_02290600->unk_3bc);
                func_ov065_0226d128(0x13);
                return;
            }
            func_02114410(data_ov065_02290600->unk_3bc);
            func_021132e0(0x1388);
        }
        func_ov065_0226e4dc(data_ov065_02290600->unk_2f8);
        func_02114480(data_ov065_02290600->unk_3bc);
        data_ov065_02290600->unk_04 = func_ov065_0226da64(flag);
        if (data_ov065_02290600->unk_04 != 0) {
            data_ov065_02290600->unk_08 = -0x4e84;
            func_02114410(data_ov065_02290600->unk_3bc);
            return;
        }
        func_02114410(data_ov065_02290600->unk_3bc);
    }
}
}

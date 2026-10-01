// mwcc-flags: -O4,p
#include "types.h"


typedef void (*Unk_ov001_022034a0_Cb)(s32, ...);

extern "C" {
void *memset(void *, int, unsigned long);
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 v);
void func_02115fb4(void *p, u32 v, u32 n);
void func_02115e78(void *src, void *dst, u32 n);
void func_02128a00(void *dst, void *src, u32 n);
void func_021132e0(s32 n);
s32 func_02113774(void *a);
void func_0211366c(void *a);
void func_02113788(void *a);
s32 func_021131f4(void);
void func_02113a70(void *a, void *fn, u32 b, void *c, u32 d, u32 e);

s32 func_ov065_0226a284(void);
s32 func_ov065_02269e50(void);
s32 func_ov065_0226a264(s32 a, s32 b, s32 c);
s32 func_ov065_0226a33c(s32 a, void *b);
s32 func_ov065_02269f24(s32 a, s32 b, s32 c);
void func_ov065_0226a4c8(void);
void func_ov065_0226a87c(s32 a);
s32 func_ov065_0226a8e4(void);
void *func_ov065_0226a828(u32 a);
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];

s32 func_ov001_02203e34(void);
s32 func_ov001_02203db8(char *dst, s32 v);
s32 func_ov001_02206ef8(s32 a);
s32 func_ov001_02206e98(void);
void func_ov001_022059bc(void);
s32 func_ov001_022036ec(void);
s32 func_ov001_02203b50(s32 *out);
s32 func_ov001_02203b1c(void);
void func_ov001_02203770(void *p);

extern s32 data_ov001_0222a534;
extern s32 data_ov001_0222a538;
extern s32 data_ov001_0222a53c;
extern s32 data_ov001_0222c804;
extern s32 data_ov001_0222c808;
extern s32 data_ov001_0222c80c;
extern u8 *data_ov001_0222c810;
extern u8 *data_ov001_0222c814;
extern s32 data_ov001_0222c818;
extern Unk_ov001_022034a0_Cb data_ov001_0222c81c;
extern s32 data_ov001_0222c820;
extern s32 data_ov001_0222c824;
extern u8 data_ov001_0222c828[6];
extern u8 data_ov001_0222c830[0x20];
extern s32 data_ov001_0222c854;
extern void (*data_ov001_0222c85c)(s32);
extern s32 data_ov001_0222c860;
extern s32 data_ov001_0222c880;
extern s32 data_ov001_0222c888;
extern s32 data_ov001_0222c8b4;
extern s32 data_ov001_0222c8c4;
extern s32 data_ov001_0222c8c8;
extern void (*data_ov001_0222c8cc)(void *);
extern u32 data_ov001_0222ca48[58];
extern u8 data_ov001_0222c988[];
}

extern "C" {

s32 func_ov001_022034a0(void) {
    u32 irq = func_01ffa2ec();
    if (data_ov001_0222c818 == 3) {
        if (func_ov065_0226a284() != 3) {
            func_01ffa3d4(irq);
            return FALSE;
        }
        data_ov001_0222c818 = 2;
        func_01ffa3d4(irq);
        return TRUE;
    }
    if (func_ov001_022036ec() == 1) {
        data_ov001_0222c818 = 2;
        func_01ffa3d4(irq);
        return TRUE;
    }
    func_01ffa3d4(irq);
    return FALSE;
}

s32 func_ov001_02203508(void) {
    u32 irq = func_01ffa2ec();
    if (data_ov001_0222c818 == 7) {
        if (func_ov065_02269e50() == 3) {
            data_ov001_0222c818 = 4;
            func_01ffa3d4(irq);
            return TRUE;
        }
    }
    func_01ffa3d4(irq);
    return FALSE;
}

s32 func_ov001_02203548(void) {
    u32 irq = func_01ffa2ec();
    if (data_ov001_0222c818 == 5) {
        if (func_ov065_0226a264(0, 0, 0) == 3) {
            data_ov001_0222c818 = 4;
            func_01ffa3d4(irq);
            return TRUE;
        }
    }
    func_01ffa3d4(irq);
    return FALSE;
}

s32 func_ov001_0220358c(u8 *a, u8 *b, s32 n, s32 d) {
    u32 irq = func_01ffa2ec();
    s32 i;
    data_ov001_0222c804 = d;
    if (a != NULL) {
        u8 *dst;
        for (i = 0, dst = data_ov001_0222c828; i < 6; i++) {
            *dst++ = *a++;
        }
        data_ov001_0222c810 = data_ov001_0222c828;
    } else {
        func_02115fb4(data_ov001_0222c828, 0xff, 6);
        data_ov001_0222c810 = data_ov065_0228b2a4;
    }
    if (b != NULL && n > 0 && n <= 0x20) {
        i = 0;
        if (i < n) {
            u8 *dst = data_ov001_0222c830;
            do {
                *dst++ = *b++;
                i++;
            } while (i < n);
        }
        if (i < 0x20) {
            u8 *z = data_ov001_0222c830 + i;
            do {
                *z++ = 0;
                i++;
            } while (i < 0x20);
        }
        data_ov001_0222c814 = data_ov001_0222c830;
    } else {
        func_02115fb4(data_ov001_0222c830, 0xff, 0x20);
        data_ov001_0222c814 = data_ov065_0228b2ac;
    }
    if (data_ov001_0222c818 == 3) {
        if (func_ov065_0226a264((s32)data_ov001_0222c810, (s32)data_ov001_0222c814, data_ov001_0222c804) != 3) {
            goto fail;
        }
        data_ov001_0222c818 = 6;
        func_01ffa3d4(irq);
        return TRUE;
    } else {
        if (func_ov001_022036ec() != 1) {
            goto fail;
        }
        data_ov001_0222c818 = 6;
        func_01ffa3d4(irq);
        return TRUE;
    }
fail:
    func_01ffa3d4(irq);
    return FALSE;
}

s32 func_ov001_022036a0(u8 *dst, s32 max) {
    s32 cnt;
    s32 i;
    func_ov065_0226a87c(1);
    cnt = func_ov065_0226a8e4();
    if (cnt > 0) {
        for (i = 0; i < cnt; i++, dst += 0xc0) {
            if (i >= max) {
                break;
            }
            func_02115e78(func_ov065_0226a828((u16)i), dst, 0xc0);
        }
    }
    func_ov065_0226a87c(0);
    return cnt;
}

s32 func_ov001_022036ec(void) {
    switch (data_ov001_0222c818) {
    case 5:
        if (func_ov065_0226a264(0, 0, 0) == 3) {
            goto ok;
        }
        return FALSE;
    case 7:
        if (func_ov065_02269e50() == 3) {
            goto ok;
        }
        return FALSE;
    case 1:
        if (func_ov065_0226a33c(data_ov001_0222c808, (void *)func_ov001_02203770) == 3) {
            goto ok;
        }
        return FALSE;
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
        break;
    }
    return FALSE;
ok:
    return TRUE;
}

void func_ov001_02203770(void *arg) {
    s16 *p = (s16 *)arg;
    if (p == NULL) {
        return;
    }
    switch ((u32)p[0]) {
    case 1:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 4) {
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(6, 0);
                }
            } else if (data_ov001_0222c818 == 6) {
                if (func_ov065_0226a264((s32)data_ov001_0222c810, (s32)data_ov001_0222c814, data_ov001_0222c804) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else if (data_ov001_0222c818 == 8) {
                if (func_ov065_02269f24(data_ov001_0222c820, data_ov001_0222c824, data_ov001_0222c80c) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            }
        } else {
            data_ov001_0222c818 = 1;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(2, 0);
            }
        }
        break;
    case 3:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 6) {
                data_ov001_0222c818 = 5;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(8, 0);
                }
            }
        } else {
            data_ov001_0222c818 = 3;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(9, 0);
            }
        }
        break;
    case 5:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 8) {
                data_ov001_0222c818 = 7;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(0xc, 0);
                }
            }
        } else {
            data_ov001_0222c818 = 3;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(0xd, 0);
            }
        }
        break;
    case 4:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 4) {
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(0xa, 0);
                }
            } else if (data_ov001_0222c818 == 6) {
                if (func_ov065_0226a264((s32)data_ov001_0222c810, (s32)data_ov001_0222c814, data_ov001_0222c804) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else if (data_ov001_0222c818 == 2) {
                if (func_ov065_0226a284() == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else if (data_ov001_0222c818 == 8) {
                if (func_ov065_02269f24(data_ov001_0222c820, data_ov001_0222c824, data_ov001_0222c80c) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            }
        } else {
            data_ov001_0222c818 = 3;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(0xb, 0);
            }
        }
        break;
    case 6:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 4) {
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(0xe, 0);
                }
            } else if (data_ov001_0222c818 == 6) {
                if (func_ov065_0226a264((s32)data_ov001_0222c810, (s32)data_ov001_0222c814, data_ov001_0222c804) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else if (data_ov001_0222c818 == 2) {
                if (func_ov065_0226a284() == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else if (data_ov001_0222c818 == 8) {
                if (func_ov065_02269f24(data_ov001_0222c820, data_ov001_0222c824, data_ov001_0222c80c) == 3) {
                    return;
                }
                data_ov001_0222c818 = 3;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(2, 0);
                }
            } else {
                data_ov001_0222c818 = 3;
            }
        } else {
            data_ov001_0222c818 = 3;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(0xf, 0);
            }
        }
        break;
    case 2:
        if (p[1] == 0) {
            if (data_ov001_0222c818 == 2) {
                func_ov065_0226a4c8();
                data_ov001_0222c818 = 0;
                if (data_ov001_0222c81c != NULL) {
                    data_ov001_0222c81c(0x14, 0);
                }
            }
        } else {
            data_ov001_0222c818 = 3;
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(2, 0);
            }
        }
        break;
    case 7:
        if (data_ov001_0222c818 == 5) {
            if (data_ov001_0222c81c != NULL) {
                data_ov001_0222c81c(5, 0);
            }
        }
        break;
    default:
        if (data_ov001_0222c81c != NULL) {
            data_ov001_0222c81c(1, 0);
        }
        break;
    }
}

s32 func_ov001_02203b1c(void) {
    s32 buf[3];
    func_ov001_02203b50(buf);
    data_ov001_0222c8cc(buf);
}

s32 func_ov001_02203b38(void *dst) {
    func_02128a00(dst, data_ov001_0222ca48, 0xe8);
    return TRUE;
}

s32 func_ov001_02203b50(s32 *out) {
    out[0] = data_ov001_0222c888;
    if (data_ov001_0222a538 == -1) {
        out[1] = -1;
    } else {
        out[1] = data_ov001_0222a538 - func_ov001_02203e34();
    }
    out[2] = data_ov001_0222c8c8;
    return TRUE;
}

s32 func_ov001_02203b90(void) {
    if (data_ov001_0222c8b4 != 0) {
        s32 prev = data_ov001_0222c888;
        data_ov001_0222c860 = 1;
        while (data_ov001_0222c888 >= 1 && data_ov001_0222c888 <= 5) {
            func_021132e0(100);
        }
        func_021132e0(500);
        if (func_02113774(data_ov001_0222c988) == 0) {
            do {
                func_0211366c(data_ov001_0222c988);
                func_02113788(data_ov001_0222c988);
            } while (func_02113774(data_ov001_0222c988) == 0);
        }
        if (data_ov001_0222c880 != 0) {
            data_ov001_0222c85c(data_ov001_0222c880);
            data_ov001_0222c880 = 0;
        }
        data_ov001_0222c8b4 = 0;
        if (prev != data_ov001_0222c888) {
            func_ov001_02203b1c();
        }
    }
    if (data_ov001_0222c8c4 > 0) {
        s32 r = func_ov001_02206e98();
        data_ov001_0222c8c4 = 0;
        return r;
    }
    return -10;
}

s32 func_ov001_02203c48(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 r;
    if (data_ov001_0222c888 >= 1 && data_ov001_0222c888 <= 5) {
        return -10;
    }
    data_ov001_0222a53c = a1;
    data_ov001_0222c888 = 7;
    data_ov001_0222c8cc = (void (*)(void *))a2;
    data_ov001_0222c854 = a3;
    data_ov001_0222c85c = (void (*)(s32))a4;
    data_ov001_0222a534 = a5;
    r = func_ov001_02206ef8(a1);
    data_ov001_0222c8c4 = 1;
    if (r < 0) {
        data_ov001_0222c8c8 = r;
        return r;
    }
    data_ov001_0222c880 = ((s32 (*)(s32))data_ov001_0222c854)(data_ov001_0222a534);
    if (data_ov001_0222c880 == 0) {
        r = -1;
        data_ov001_0222c8c8 = r;
        return r;
    }
    if (func_021131f4() != 1) {
        r = -9;
        data_ov001_0222c8c8 = r;
        return r;
    }
    func_02113a70(data_ov001_0222c988, (void *)func_ov001_022059bc, 0, (void *)(data_ov001_0222c880 + (data_ov001_0222a534 & ~7)), data_ov001_0222a534, a0);
    data_ov001_0222c888 = 1;
    data_ov001_0222a538 = func_ov001_02203e34() + 60000;
    data_ov001_0222c860 = 0;
    __builtin__clear(data_ov001_0222ca48, 0xe8);
    func_ov001_02203b1c();
    func_0211366c(data_ov001_0222c988);
    data_ov001_0222c8b4 = 1;
    return 1;
}

s32 func_ov001_02203d7c(char *dst, s8 *src) {
    char *start = dst;
    char *cur = dst;
    s32 i;
    for (i = 0; i < 6; i++) {
        cur += func_ov001_02203db8(cur, *src++);
        if (i < 5) {
            *cur++ = ':';
        }
    }
    *cur = 0;
    return cur - start;
}

}

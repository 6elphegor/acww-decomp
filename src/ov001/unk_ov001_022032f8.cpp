// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_022034a0_Cb)(s32, ...);

struct Unk_ov001_022032f8_P {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};


extern "C" u8 *data_ov001_0222c800 = 0;
extern "C" u8 *data_ov001_0222c824 = 0;
extern "C" u8 *data_ov001_0222c820 = 0;
extern "C" u8 data_ov001_0222c828[6] = {0};
extern "C" s32 data_ov001_0222c818 = 0;
extern "C" u8 data_ov001_0222c830[0x20] = {0};
extern "C" u8 *data_ov001_0222c810 = 0;
extern "C" s32 data_ov001_0222c80c = 0;
extern "C" Unk_ov001_022034a0_Cb data_ov001_0222c81c = 0;
extern "C" u8 *data_ov001_0222c814 = 0;
extern "C" Unk_ov001_022032f8_P *data_ov001_0222c808 = 0;
extern "C" s32 data_ov001_0222c804 = 0;

extern "C" {
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 v);
void func_02115fb4(void *p, u32 v, u32 n);
void func_02115e78(void *src, void *dst, u32 n);
void func_02116048(void *a, void *b, u32 n);

s32 func_ov065_0226a284(void);
s32 func_ov065_02269e50(void);
s32 func_ov065_0226a264(s32 a, s32 b, s32 c);
s32 func_ov065_0226a33c(void *a, void *b);
s32 func_ov065_02269f24(void *a, void *b, s32 c);
s32 func_ov065_0226a510(void *, s32);
void func_ov065_0226a4c8(void);
void func_ov065_0226a87c(s32 a);
s32 func_ov065_0226a8e4(void);
void *func_ov065_0226a828(u32 a);
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];

s32 func_ov001_022036ec(void);
void func_ov001_02203770(void *p);
}

extern "C" void func_ov001_02203770(void *arg) {
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

extern "C" s32 func_ov001_022036ec(void) {
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

extern "C" s32 func_ov001_022036a0(u8 *dst, s32 max) {
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

extern "C" s32 func_ov001_0220358c(u8 *a, u8 *b, s32 n, s32 d) {
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

extern "C" s32 func_ov001_02203548(void) {
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

extern "C" s32 func_ov001_02203508(void) {
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

extern "C" s32 func_ov001_022034a0(void) {
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

extern "C" s32 func_ov001_022033f0(void *a, void *b, u32 c) {
    u32 irq = func_01ffa2ec();
    data_ov001_0222c80c = c;
    if (b) {
        func_02116048(b, data_ov001_0222c824, 0x50);
    } else {
        func_02115fb4(data_ov001_0222c824, 0, 0x50);
    }
    func_02115e78(a, data_ov001_0222c820, 0xc0);
    if (func_ov001_022036ec() == 1) {
        data_ov001_0222c818 = 8;
        func_01ffa3d4(irq);
        return 1;
    }
    if (data_ov001_0222c818 == 3) {
        if (func_ov065_02269f24(data_ov001_0222c820, data_ov001_0222c824, data_ov001_0222c80c) == 3) {
            data_ov001_0222c818 = 8;
            func_01ffa3d4(irq);
            return 1;
        }
    }
    func_01ffa3d4(irq);
    return 0;
}

extern "C" s32 func_ov001_022032f8(void *fn, void *buf, u32 size) {
    u32 irq = func_01ffa2ec();
    data_ov001_0222c824 = (u8 *)buf;
    Unk_ov001_022032f8_P *p = (Unk_ov001_022032f8_P *)(((u32)buf + 0x53) & ~3);
    data_ov001_0222c808 = p;
    u32 t = (((u32)p + 0x2f) & ~0x1f);
    data_ov001_0222c800 = (u8 *)t;
    t = ((t + 0x231f) & ~0x1f);
    data_ov001_0222c820 = (u8 *)t;
    p->unk_04 = (t + 0xdf) & ~0x1f;
    data_ov001_0222c808->unk_08 = (s32)((u32)buf + size - data_ov001_0222c808->unk_04);
    data_ov001_0222c808->unk_0c = 0;
    data_ov001_0222c808->unk_00 = 3;
    data_ov001_0222c81c = (Unk_ov001_022034a0_Cb)fn;
    if (data_ov001_0222c818 == 0) {
        if (func_ov065_0226a510(data_ov001_0222c800, 0x2300)) {
            func_01ffa3d4(irq);
            return 0;
        }
        data_ov001_0222c818 = 1;
    }
    if (data_ov001_0222c818 == 1) {
        if (func_ov065_0226a33c(data_ov001_0222c808, (void *)func_ov001_02203770) != 3) {
            func_01ffa3d4(irq);
            return 0;
        }
        data_ov001_0222c818 = 4;
        func_01ffa3d4(irq);
        return 1;
    }
    func_01ffa3d4(irq);
    return 0;
}


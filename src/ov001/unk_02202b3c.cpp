// mwcc-flags: -O4,p
#include "types.h"

typedef void *(*Unk_ov001_02202b3c_Alloc)(u32);
typedef void (*Unk_ov001_02202b3c_Free)(void *);

struct Unk_ov001_02202b3c_Cfg {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[0x100];
    s16 unk_106;
    s16 unk_108;
    s16 unk_10a;
    s16 unk_10c;
    s16 unk_10e;
    u8 pad_110[6];
    u8 unk_116;
};

struct Unk_ov001_02202c90_In {
    s32 unk_00;
    u8 unk_04[0x20];
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c[1];
};

struct Unk_ov001_022032f8_P {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov001_02203258_Src {
    u8 pad_00[4];
    u8 unk_04[6];
    u16 unk_0a;
    u8 unk_0c[0x20];
    u16 unk_2c;
    u16 unk_2e;
    u16 unk_30;
    u16 unk_32;
    u8 pad_34[2];
    u16 unk_36;
};

struct Unk_ov001_02203258_Dst {
    u32 unk_00;
    u8 unk_04[0x20];
    u32 unk_24;
    u8 pad_28[8];
    u8 unk_30[6];
    u8 pad_36[2];
    u32 unk_38;
    u8 unk_3c[0x10];
    u32 unk_4c;
    u32 unk_50;
};

struct Unk_ov001_02203258_Ent {
    u16 mask;
    u8 val;
};

extern "C" {
extern Unk_ov001_02202b3c_Alloc data_ov001_0222c68c;
extern s32 (*data_ov001_0222c690)(void *);
extern void *data_ov001_0222c694;
extern Unk_ov001_02202b3c_Free data_ov001_0222c698;
extern u32 data_ov001_0222c69c[];
extern u32 data_ov001_0222c6ac[];
extern u8 data_ov001_0222c6cc[];
extern u8 data_ov001_0222c6ce[];
extern u8 data_ov001_0222c740[];
extern u8 *data_ov001_0222c800;
extern Unk_ov001_022032f8_P *data_ov001_0222c808;
extern s32 data_ov001_0222c80c;
extern s32 data_ov001_0222c818;
extern s32 data_ov001_0222c81c;
extern u8 *data_ov001_0222c820;
extern u8 *data_ov001_0222c824;
extern void *data_ov001_0222b8d4;
extern s32 data_ov001_0222a484;
extern Unk_ov001_02203258_Ent data_ov001_0222a4fc[];

u32 func_01ffa2ec();
void func_01ffa3d4(u32);
s32 func_021132e0(s32, s32, s32);
s32 func_02114188(void *, void *, s32);
s32 func_02114234(void *, s32, s32);
void func_021142dc(void *, void *, s32);
void func_02115094(void *);
void func_021152e4(void *);
void func_0211512c(void *, u32, s32, void *, s32);
void func_02115e30(u16, void *, u32);
void func_02115e48(void *, void *, u32);
void func_02115e78(void *, void *, u32);
void func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);

void func_ov001_02203224(void *, void *);
s32 func_ov001_022032f8(void *, void *, u32);
s32 func_ov001_022033f0(void *, void *, u32);
void func_ov001_02203214(void *, void *, s32);
s32 func_ov001_02201ff8();
s32 func_ov001_02201c14(s32);
s32 func_ov001_02202050(void *);
s32 func_ov001_022007c4();
s32 func_ov001_0220358c(s32, void *, s32, s32);
s32 func_ov001_022036a0(void *, s32);
s32 func_ov001_022036ec();
s32 func_ov001_02203548();
s32 func_ov001_02203508();
s32 func_ov001_022034a0();
s32 func_ov065_0226a934();
s32 func_ov065_0226a510(void *, s32);
s32 func_ov065_0226a33c(void *, void *);
s32 func_ov065_02269f24(void *, void *, s32);
s32 func_ov065_0226a284();
void func_ov001_02203770(void);
void func_ov001_022031ec(s32);
void func_ov001_02203200(s32);
void func_ov001_02203258(Unk_ov001_02203258_Src *, Unk_ov001_02203258_Dst *);

void *func_ov001_02202c58(u32 a) {
    return data_ov001_0222c68c(a);
}

void func_ov001_02202c44(void *a) {
    data_ov001_0222c698(a);
}

s32 func_ov001_02202b3c(Unk_ov001_02202b3c_Cfg *a) {
    s32 r;
    if (a->unk_106 == 0 || a->unk_106 < -1 || a->unk_108 < -1 || a->unk_10a == 0 || a->unk_10a < -1
        || a->unk_10c < -1 || a->unk_10e < -1 || a->unk_04 == 0 || a->unk_04 > 0x100
        || a->unk_06[a->unk_04 - 1] != 0) {
        r = -1;
    } else {
        r = 0;
    }
    if (data_ov001_0222c68c == 0 || data_ov001_0222c698 == 0) {
        r = -1;
    }
    if (r == -1) {
        a->unk_116 = 0xf;
        func_ov001_02201ff8();
        return -1;
    }
    data_ov001_0222b8d4 = func_ov001_02202c58(0x5f8);
    if (data_ov001_0222b8d4 == 0) {
        a->unk_116 = 0xf;
        func_ov001_02201ff8();
        return -1;
    }
    func_ov001_02201c14(-1);
    s32 res = func_ov001_02202050(a);
    func_ov001_02202c44(data_ov001_0222b8d4);
    func_ov001_02201ff8();
    s32 t = data_ov001_0222a484;
    s32 m = -1;
    if (t != m) {
        func_ov001_022007c4();
    }
    return res;
}

s32 func_ov001_02202c6c(void *a) {
    if (data_ov001_0222c690) {
        data_ov001_0222c690(a);
    }
    return 0;
}

s32 func_ov001_02202c88(s32 a, s32 b, s32 c) {
    return func_021132e0(a, b, c);
}

s32 func_ov001_02202c90(Unk_ov001_02202c90_In *a, void *b) {
    s32 r4;
    s32 res;
    s32 cnt;
    s32 got;
    u32 r6;
    r4 = 1;
    got = 0;
    res = -1;
    if (a->unk_24 == 0) {
        r6 = 0x80000;
    } else if (a->unk_24 == 1) {
        r6 = 0xc0000;
    }
    func_02115fb4(data_ov001_0222c6cc, 0, 0x60);
    if (a->unk_28 == 5) {
        data_ov001_0222c6cc[0] = 1;
    } else if (a->unk_28 == 0xd) {
        data_ov001_0222c6cc[0] = 2;
    } else if (a->unk_28 == 0x10) {
        data_ov001_0222c6cc[0] = 3;
    } else {
        return -1;
    }
    data_ov001_0222c6cc[1] = 0;
    func_02116048(a->unk_2c, data_ov001_0222c6ce, a->unk_28);
    func_ov065_0226a934();
    if (func_ov001_0220358c(0, a->unk_04, a->unk_00, 0x30bffe)) {
        s32 msg;
        u32 thr[12];
        cnt = 0;
        func_021152e4(thr);
        func_0211512c(thr, 0x3fec42, 0, (void *)func_ov001_022031ec, 0x12);
        r6 = r6 | 0x30000;
        s32 r5 = 0;
        do {
            func_02114188(data_ov001_0222c6ac, &msg, 1);
            switch (msg) {
            case 18:
                if (got == 0) {
                    r4 = r5;
                }
                break;
            case 5:
                if (got == 0) {
                    func_02115094(thr);
                    if (func_ov001_022036a0(data_ov001_0222c740, 1) != 1) {
                        r4 = r5;
                    } else {
                        func_ov001_02203224(a, data_ov001_0222c740);
                        if (func_ov001_022033f0(data_ov001_0222c740, data_ov001_0222c6cc, r6) == 0) {
                            r4 = r5;
                        } else {
                            got = 1;
                        }
                    }
                }
                break;
            case 10:
                func_ov001_02203224(a, data_ov001_0222c740);
                if (func_ov001_022033f0(data_ov001_0222c740, data_ov001_0222c6cc, r6) == 0) {
                    r4 = r5;
                }
                break;
            case 12:
                res = r5;
                r4 = r5;
                break;
            case 13:
                cnt++;
                if (cnt < 3) {
                    if (func_ov001_022033f0(data_ov001_0222c740, data_ov001_0222c6cc, r6) == 0) {
                        r4 = r5;
                    }
                } else {
                    r4 = r5;
                }
                break;
            default:
                r4 = r5;
                break;
            case 4:
            case 8:
            case 19:
                break;
            }
        } while (r4 != 0);
        func_02115094(thr);
        do {
        } while (func_02114188(data_ov001_0222c6ac, &msg, r5) == 1);
    }
    func_ov001_02203214(b, data_ov001_0222c740, res == 0);
    return res;
}

s32 func_ov001_02202e74(void **out) {
    s32 r6 = 0;
    s32 res = -1;
    s32 loop = 1;
    s32 r7 = r6;
    s32 r5 = r6;
    void *buf;
    u8 *r4;
    s32 msg;
    u32 thr[11];
    if (data_ov001_0222c68c == 0 || data_ov001_0222c698 == 0) {
        return -1;
    }
    r4 = (u8 *)data_ov001_0222c68c(0x3000);
    if (r4 == 0) {
        return -1;
    }
    buf = r4;
    if (func_ov001_0220358c(r6, (void *)r6, r6, 0x30bffe)) {
        func_021152e4(thr);
        func_0211512c(thr, 0x3fec42, r6, (void *)func_ov001_022031ec, 0x13);
        do {
            func_02114188(data_ov001_0222c6ac, &msg, 1);
            switch (msg) {
            case 19:
                if (r6 == 0) {
                    if (r5 != 0) {
                        r7 = func_ov001_022036a0(r4, 0x40);
                    }
                    if (func_ov001_02203548() == 0) {
                        goto done;
                    }
                    r6 = 1;
                }
                break;
            case 5:
                if (r6 == 0) {
                    if (r5 < 8) {
                        r5++;
                    } else {
                        r7 = func_ov001_022036a0(r4, 0x40);
                        if (func_ov001_02203548() == 0) {
                            goto done;
                        }
                        r6 = 1;
                    }
                }
                break;
            case 10:
                loop = 0;
                res = 0;
                break;
            case 4:
            case 8:
            case 18:
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 6:
            case 7:
            case 9:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            default:
                goto done;
            }
        } while (loop != 0);
        {
            u8 *p;
            if (r7 != 0) {
                p = (u8 *)data_ov001_0222c68c((r7 - 1) * 0x54 + 0x58);
                if (p == 0) {
                    goto done;
                }
            } else {
                p = (u8 *)data_ov001_0222c68c(0x58);
                if (p == 0) {
                    goto done;
                }
            }
            *out = p;
            *(s32 *)p = r7;
            r6 = 0;
            if (r7 > 0) {
                u8 *q = p + 4;
                do {
                    func_ov001_02203258((Unk_ov001_02203258_Src *)r4, (Unk_ov001_02203258_Dst *)q);
                    r4 += 0xc0;
                    q += 0x54;
                    r6++;
                } while (r6 < r7);
            }
        }
    done:
        func_02115094(thr);
        do {
        } while (func_02114188(data_ov001_0222c6ac, &msg, r6) == 1);
    }
    data_ov001_0222c698(buf);
    return res;
}

s32 func_ov001_02203004() {
    s32 res = -1;
    s32 msg;
    if (func_ov001_02203508()) {
        s32 z = 0;
        s32 loop = 1;
        do {
            func_02114188(data_ov001_0222c6ac, &msg, 1);
            switch (msg) { case 14: res = z; break; default: break; }
            loop = z;
        } while (loop);
    }
    return res;
}

s32 func_ov001_02203040() {
    s32 r4 = 1;
    s32 res = -1;
    s32 msg;
    if (data_ov001_0222c698 == 0) {
        return res;
    }
    if (func_ov001_022034a0() == 0) {
        return -1;
    }
    do {
        func_02114188(data_ov001_0222c6ac, &msg, 1);
        switch (msg) {
        case 20:
            r4 = 0;
            res = r4;
            data_ov001_0222c698(data_ov001_0222c694);
            break;
        case 4:
        case 5:
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        default:
            r4 = 0;
            break;
        }
    } while (r4 != 0);
    u32 irq = func_01ffa2ec();
    data_ov001_0222c68c = 0;
    data_ov001_0222c698 = 0;
    func_01ffa3d4(irq);
    return res;
}

s32 func_ov001_022030fc(Unk_ov001_02202b3c_Alloc a, Unk_ov001_02202b3c_Free b) {
    s32 ok = 1;
    s32 msg;
    void *p;
    func_021142dc(data_ov001_0222c6ac, data_ov001_0222c69c, 4);
    if (a == 0 || b == 0) {
        return -1;
    }
    u32 irq = func_01ffa2ec();
    data_ov001_0222c68c = a;
    data_ov001_0222c698 = b;
    func_01ffa3d4(irq);
    p = data_ov001_0222c68c(0x5890);
    data_ov001_0222c694 = p;
    if (p == 0) {
        return -1;
    }
    if (func_ov001_022032f8((void *)func_ov001_02203200, p, 0x5890) == 0) {
        ok = 0;
    }
    if (ok != 0) {
        do {
            func_02114188(data_ov001_0222c6ac, &msg, 1);
            switch (msg) {
            case 4:
            case 5:
                break;
            case 6:
                return 0;
            case 0:
            case 1:
            case 2:
            case 3:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            default:
                ok = 0;
                break;
            }
        } while (ok != 0);
    }
    data_ov001_0222c698(data_ov001_0222c694);
    return -1;
}

void func_ov001_022031ec(s32 a) {
    func_02114234(data_ov001_0222c6ac, a, 0);
}

void func_ov001_02203200(s32 a) {
    func_02114234(data_ov001_0222c6ac, a, 0);
}

void func_ov001_02203214(void *a, void *b, s32 c) {
    *(s32 *)a = c;
    func_ov001_02203258((Unk_ov001_02203258_Src *)b, (Unk_ov001_02203258_Dst *)((u8 *)a + 4));
}

void func_ov001_02203224(void *a, void *b) {
    volatile u16 z = 0;
    func_02115e30(z, (u8 *)b + 0xc, 0x20);
    *(u16 *)((u8 *)b + 0xa) = *(u32 *)a;
    func_02116048((u8 *)a + 4, (u8 *)b + 0xc, *(u16 *)((u8 *)b + 0xa));
}

void func_ov001_02203258(Unk_ov001_02203258_Src *a, Unk_ov001_02203258_Dst *b) {
    b->unk_00 = a->unk_0a;
    func_02115e48(a->unk_0c, b->unk_04, 0x20);
    b->unk_24 = a->unk_36;
    func_02115e48(a->unk_04, b->unk_30, 6);
    s32 i;
    s32 n;
    n = 0;
    i = 0;
    Unk_ov001_02203258_Ent *e = data_ov001_0222a4fc;
    for (; i < 12; e++, i++) {
        if (a->unk_30 & e->mask) {
            b->unk_3c[n] = e->val;
            if (a->unk_2e & e->mask) {
                b->unk_3c[n] |= 0x80;
            }
            n++;
        }
    }
    b->unk_38 = n;
    b->unk_4c = a->unk_32;
    u32 t = a->unk_2c & 3;
    if (t == 1) {
        b->unk_50 = 1;
    } else if (t == 2) {
        b->unk_50 = 2;
    } else {
        b->unk_50 = 0;
    }
}

s32 func_ov001_022032f8(void *fn, void *buf, u32 size) {
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
    data_ov001_0222c81c = (s32)fn;
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

s32 func_ov001_022033f0(void *a, void *b, u32 c) {
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
}

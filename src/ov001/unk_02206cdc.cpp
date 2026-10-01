// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_022070f0_Ctl {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

typedef void (*Unk_ov001_0220751c_Cb)(...);

extern "C" {
extern s32 data_ov001_0222c870;
extern s32 data_ov001_0222c874;
extern u8 *data_ov001_0222c8ac;
extern s32 data_ov001_0222c868;
extern s32 data_ov001_0222c860;
extern u32 data_ov001_0222a538;
extern u8 data_ov001_0222a59c[];
extern s32 data_ov001_0222c8bc;
extern s32 data_ov001_0222c8b8;
extern u32 data_ov001_0222c8ec[];
extern u8 *data_ov001_0222c8a4;
extern void (*data_ov001_0222c85c)(void *);
extern void *(*data_ov001_0222c854)(s32);
extern s32 data_ov001_0222c8c0;
extern u8 *data_ov001_0222c890;
extern u8 data_ov001_0222c90c[];
extern s32 data_ov001_0222c87c;
extern s32 data_ov001_0222c878;
extern Unk_ov001_022070f0_Ctl *data_ov001_0222c858;
extern u8 *data_ov001_0222c88c;
extern u8 *data_ov001_0222c89c;
extern Unk_ov001_0220751c_Cb data_ov001_0222c8d0;
extern s32 data_ov001_0222c8a8;
extern u8 data_ov001_0222c8e4[];
extern u8 *data_ov001_0222c894;
extern u8 data_ov001_0222c944[];
extern u8 *data_ov001_0222c898;
extern s32 data_ov001_0222c8b0;
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];

s32 func_ov001_02207300(void);
s32 func_ov001_02207008(void);
s32 func_ov001_02207298(void);
s32 func_ov001_02207498(void);
s32 func_ov001_022071e8(void *p, void *x, s32 y);
void func_ov001_02206fc0(u32 a);
void func_ov001_02206fcc(u32 v, u32 w);

s32 func_ov001_022070f0(void *cb, void *buf, s32 size);
void func_ov001_02207048(void);
void func_ov001_0220751c(void *p);

s32 func_ov065_02261110(void);
s32 func_ov065_02261118(void *p);
s32 func_ov065_0226a510(void *p, s32 n);
s32 func_ov065_0226a33c(void *p, void *cb);
s32 func_ov065_02269f24(void *a, void *b, s32 c);
s32 func_ov065_0226a284(void);
s32 func_ov065_02269e50(void);
s32 func_ov065_0226a264(void *a, void *b, s32 c);
s32 func_ov065_0226a87c(s32 a);
s32 func_ov065_0226a8e4(void);
void *func_ov065_0226a828(u32 i);
s32 func_ov065_0226a4c8(void);

s32 func_ov001_02203e34(void);
void func_021132e0(s32 ms);
void func_021152e4(void *p);
void func_0211512c(void *p, s32 a, s32 b, void *cb, s32 prio);
void func_02115094(void *p);
s32 func_01ffa2ec(void);
void func_01ffa3d4(s32 e);
void func_02114480(void *p);
void func_02114410(void *p);
void func_02116048(void *dst, void *src, s32 n);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02115e78(void *dst, void *src, s32 n);

void func_ov001_02206cdc(void) {
    s32 cont = 1;
    s32 m;
    if (data_ov001_0222c870 != 0) {
        if (func_ov001_02207300() != 0) {
            do {
                func_021132e0(10);
                m = func_ov001_02207008();
                if (m != 0) {
                    do {
                        switch (m) {
                        case 4:
                        case 5:
                            break;
                        case 14:
                            cont = 0;
                            break;
                        default:
                            cont = 0;
                            break;
                        }
                        m = func_ov001_02207008();
                    } while (m != 0);
                }
            } while (cont != 0);
        }
        data_ov001_0222c870 = 0;
    }
    if (data_ov001_0222c874 != 0) {
        data_ov001_0222c874 = 0;
        func_ov065_02261110();
    }
}

s32 func_ov001_02206d44(void) {
    s32 cont = 1;
    s32 res = -2;
    u8 *p = data_ov001_0222c8ac + data_ov001_0222c868 * 0xc0;
    u32 alarm[11];
    if (p == 0) {
        return 0;
    }
    if (func_ov001_022071e8(p, 0, 0x30000) == 0) {
        return -2;
    }
    func_021152e4(alarm);
    func_0211512c(alarm, 0x3fec42, 0, (void *)func_ov001_02206fc0, 0x12);
    s32 z = 0;
    s32 k = -8;
    do {
        if ((u32)func_ov001_02203e34() >= data_ov001_0222a538) {
            res = -3;
            break;
        }
        if (data_ov001_0222c860 != 0) {
            res = -8;
            break;
        }
        func_021132e0(10);
        s32 m = func_ov001_02207008();
        if (m != 0) {
            do {
                switch (m) {
                case 12:
                    cont = z;
                    res = 1;
                    break;
                case 4:
                case 5:
                case 18:
                case 19:
                    break;
                case 13:
                    if (data_ov001_0222c860 != 0) {
                        cont = z;
                        res = k;
                    } else if (func_ov001_022071e8(p, 0, 0x30000) == 0) {
                        return res;
                    }
                    break;
                default:
                    cont = z;
                    break;
                }
                m = func_ov001_02207008();
            } while (m != 0);
        }
    } while (cont != 0);
    func_02115094(alarm);
    while (func_ov001_02207008() != 0) {
    }
    if (res > 0) {
        data_ov001_0222c870 = 1;
        if (func_ov065_02261118(data_ov001_0222a59c) < 0) {
            res = -2;
        } else {
            data_ov001_0222c874 = 1;
        }
    }
    return res;
}

s32 func_ov001_02206e98(void) {
    s32 cont = 1;
    if (func_ov001_02207298() != 0) {
        do {
            func_021132e0(10);
            s32 m = func_ov001_02207008();
            if (m != 0) {
                do {
                    switch (m) {
                    case 4:
                    case 5:
                        break;
                    case 20:
                        cont = 0;
                        break;
                    default:
                        cont = 0;
                        break;
                    }
                    m = func_ov001_02207008();
                } while (m != 0);
            }
        } while (cont != 0);
    }
    if (data_ov001_0222c8a4 != 0) {
        data_ov001_0222c85c(data_ov001_0222c8a4);
        data_ov001_0222c8a4 = 0;
    }
    return 1;
}

static inline u32 Unk_ov001_02206ef8_AL(u32 v, u32 a) {
    return (v + a - 1) & ~(a - 1);
}

s32 func_ov001_02206ef8(s32 n) {
    s32 cont = 1;
    s32 res;
    u32 o;
    u8 *q;
    u8 *r;
    data_ov001_0222c8c0 = n;
    func_ov001_02207048();
    o = n * 0xd0;
    q = (u8 *)data_ov001_0222c854(o + 0x24d0 + n * 0xc0);
    data_ov001_0222c8a4 = q;
    if (q == 0) {
        return -1;
    }
    u32 m = 0x20 - 1;
    u32 k = ~m;
    u32 al = ((u32)q + m) & k;
    data_ov001_0222c890 = (u8 *)al;
    u32 t = o + 0x2490;
    u32 s2 = al + t;
    r = (u8 *)((s2 + m) & k);
    data_ov001_0222c8ac = r;
    if (func_ov001_022070f0((void *)func_ov001_02206fcc, (void *)al, t) == 0) {
        return -2;
    }
    s32 z = 0;
    s32 e2 = -2;
    do {
        func_021132e0(10);
        s32 m = func_ov001_02207008();
        if (m != 0) {
            do {
                if (m == 4 || m == 5) {
                } else if (m == 6) {
                    cont = z;
                    res = 1;
                } else {
                    cont = z;
                    res = e2;
                }
                m = func_ov001_02207008();
            } while (m != 0);
        }
    } while (cont != 0);
    return res;
}

void func_ov001_02206fc0(u32 a) {
    func_ov001_02206fcc(a, 0);
}

void func_ov001_02206fcc(u32 v, u32 w) {
    u32 head = data_ov001_0222c8bc;
    u32 tail = data_ov001_0222c8b8;
    u32 nt = tail + 1;
    if (nt == head || tail == head + 3) {
        return;
    }
    data_ov001_0222c8ec[tail] = v;
    data_ov001_0222c8b8 = nt;
    if ((s32)nt >= 4) {
        data_ov001_0222c8b8 = 0;
    }
}

s32 func_ov001_02207008(void) {
    s32 e = func_01ffa2ec();
    s32 head = data_ov001_0222c8bc;
    s32 r;
    if (data_ov001_0222c8b8 == head) {
        r = 0;
    } else {
        r = data_ov001_0222c8ec[head];
        head++;
        data_ov001_0222c8bc = head;
        if (head >= 4) {
            data_ov001_0222c8bc = 0;
        }
    }
    func_01ffa3d4(e);
    return r;
}

void func_ov001_02207048(void) {
    s32 i;
    u32 *p;
    s32 e = func_01ffa2ec();
    data_ov001_0222c8b8 = 0;
    data_ov001_0222c8bc = 0;
    p = data_ov001_0222c8ec;
    for (i = 0; i < 4; i++) {
        *p++ = 0;
    }
    func_01ffa3d4(e);
}

void func_ov001_0220707c(s32 a, void *p, s32 n) {
    if (p != 0 && n > 0) {
        func_02114480(data_ov001_0222c90c);
        data_ov001_0222c85c(p);
        func_02114410(data_ov001_0222c90c);
    }
}

void *func_ov001_022070ac(s32 a, s32 n) {
    void *r;
    if (n > 0) {
        func_02114480(data_ov001_0222c90c);
        r = data_ov001_0222c854(n);
        func_02114410(data_ov001_0222c90c);
        return r;
    }
    return 0;
}

s32 func_ov001_022070e4(void) {
    return data_ov001_0222c87c;
}

s32 func_ov001_022070f0(void *cb, void *buf, s32 size) {
    s32 e = func_01ffa2ec();
    u32 a, b;
    data_ov001_0222c878 = (s32)buf;
    a = ((u32)buf + 0x63) & ~3;
    data_ov001_0222c858 = (Unk_ov001_022070f0_Ctl *)a;
    b = (a + 0x2f) & ~0x1f;
    data_ov001_0222c88c = (u8 *)b;
    b = (b + 0x231f) & ~0x1f;
    data_ov001_0222c89c = (u8 *)b;
    b += 0xdf;
    b &= ~0x1f;
    data_ov001_0222c858->unk_04 = b;
    data_ov001_0222c858->unk_08 = ((u32)buf + size) - data_ov001_0222c858->unk_04;
    data_ov001_0222c858->unk_0c = 0;
    data_ov001_0222c858->unk_00 = 3;
    data_ov001_0222c8d0 = (Unk_ov001_0220751c_Cb)cb;
    if (data_ov001_0222c87c == 0) {
        if (func_ov065_0226a510(data_ov001_0222c88c, 0x2300) != 0) {
            func_01ffa3d4(e);
            return 0;
        }
        data_ov001_0222c87c = 1;
    }
    if (data_ov001_0222c87c == 1) {
        if (func_ov065_0226a33c(data_ov001_0222c858, (void *)func_ov001_0220751c) != 3) {
            func_01ffa3d4(e);
            return 0;
        }
        data_ov001_0222c87c = 4;
        func_01ffa3d4(e);
        return 1;
    }
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov001_022071e8(void *p, void *x, s32 y) {
    s32 e = func_01ffa2ec();
    data_ov001_0222c8a8 = y;
    if (x != 0) {
        func_02116048(x, (void *)data_ov001_0222c878, 0x60);
    } else {
        func_02115fb4((void *)data_ov001_0222c878, 0, 0x60);
    }
    func_02115e78(p, data_ov001_0222c89c, 0xc0);
    if (func_ov001_02207498() == 1) {
        data_ov001_0222c87c = 8;
        func_01ffa3d4(e);
        return 1;
    }
    if (data_ov001_0222c87c == 3) {
        if (func_ov065_02269f24(data_ov001_0222c89c, (void *)data_ov001_0222c878, data_ov001_0222c8a8) == 3) {
            data_ov001_0222c87c = 8;
            func_01ffa3d4(e);
            return 1;
        }
    }
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov001_02207298(void) {
    s32 e = func_01ffa2ec();
    if (data_ov001_0222c87c == 3) {
        if (func_ov065_0226a284() != 3) {
            func_01ffa3d4(e);
            return 0;
        }
        data_ov001_0222c87c = 2;
        func_01ffa3d4(e);
        return 1;
    }
    if (func_ov001_02207498() == 1) {
        data_ov001_0222c87c = 2;
        func_01ffa3d4(e);
        return 1;
    }
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov001_02207300(void) {
    s32 e = func_01ffa2ec();
    if (data_ov001_0222c87c == 7) {
        if (func_ov065_02269e50() == 3) {
            data_ov001_0222c87c = 4;
            func_01ffa3d4(e);
            return 1;
        }
    }
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov001_02207340(u8 *a, u8 *b, s32 c, s32 d) {
    s32 e = func_01ffa2ec();
    u8 *p;
    s32 i;
    data_ov001_0222c8b0 = d;
    p = data_ov001_0222c8e4;
    data_ov001_0222c894 = p;
    if (a != 0) {
        i = 0;
        do {
            *p++ = *a++;
            i++;
        } while (i < 6);
    } else {
        func_02115fb4(p, 0xff, 6);
        data_ov001_0222c894 = data_ov065_0228b2a4;
    }
    p = data_ov001_0222c944;
    data_ov001_0222c898 = p;
    if (b != 0 && c > 0 && c < 0x20) {
        i = 0;
        if (c > 0) {
            do {
                *p++ = *b++;
                i++;
            } while (i < c);
        }
        if (i < 0x20) {
            p = data_ov001_0222c944 + i;
            do {
                *p++ = 0;
                i++;
            } while (i < 0x20);
        }
    } else {
        func_02115fb4(data_ov001_0222c944, 0xff, 0x20);
        data_ov001_0222c898 = data_ov065_0228b2ac;
    }
    if (data_ov001_0222c87c == 3) {
        if (func_ov065_0226a264(data_ov001_0222c8e4, data_ov001_0222c898, data_ov001_0222c8b0) == 3) {
            data_ov001_0222c87c = 6;
            func_01ffa3d4(e);
            return 1;
        }
    } else if (func_ov001_02207498() == 1) {
        data_ov001_0222c87c = 6;
        func_01ffa3d4(e);
        return 1;
    }
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov001_0220744c(u8 *buf, s32 n) {
    s32 cnt;
    s32 i;
    func_ov065_0226a87c(1);
    cnt = func_ov065_0226a8e4();
    if (cnt > 0) {
        for (i = 0; i < cnt; i++, buf += 0xc0) {
            if (i >= n) {
                break;
            }
            func_02115e78(func_ov065_0226a828((u16)i), buf, 0xc0);
        }
    }
    func_ov065_0226a87c(0);
    return cnt;
}

s32 func_ov001_02207498(void) {
    switch (data_ov001_0222c87c) {
    case 5:
        if (func_ov065_0226a264(0, 0, 0) != 3) {
            return 0;
        }
        break;
    case 7:
        if (func_ov065_02269e50() != 3) {
            return 0;
        }
        break;
    case 1:
        if (func_ov065_0226a33c(data_ov001_0222c858, (void *)func_ov001_0220751c) != 3) {
            return 0;
        }
        break;
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
    default:
        return 0;
    }
    return 1;
}

void func_ov001_0220751c(void *pp) {
    s16 *p = (s16 *)pp;
    s32 z = 0;
    if (p == 0) {
        return;
    }
    switch (*p) {
    case 1:
        if (p[1] == 0) {
            s32 s = data_ov001_0222c87c;
            if (s == 4) {
                data_ov001_0222c87c = 3;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(6);
                }
                return;
            } else if (s == 6) {
                if (func_ov065_0226a264(data_ov001_0222c894, data_ov001_0222c898, data_ov001_0222c8b0) == 3) {
                    return;
                }
                data_ov001_0222c87c = 3;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(2, 0);
                }
                return;
            } else if (s == 8) {
                if (func_ov065_02269f24(data_ov001_0222c89c, (void *)data_ov001_0222c878, data_ov001_0222c8a8) == 3) {
                    return;
                }
                data_ov001_0222c87c = 3;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(2, 0);
                }
                return;
            }
            return;
        } else {
            data_ov001_0222c87c = 1;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(2);
            }
            return;
        }
    case 3:
        if (p[1] == 0) {
            if (data_ov001_0222c87c == 6) {
                data_ov001_0222c87c = 5;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(8);
                }
            }
        } else {
            data_ov001_0222c87c = 3;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(9);
            }
        }
        return;
    case 5:
        if (p[1] == 0) {
            if (data_ov001_0222c87c == 8) {
                data_ov001_0222c87c = 7;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(12);
                }
            }
        } else {
            data_ov001_0222c87c = 3;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(13);
            }
        }
        return;
    case 4:
        if (p[1] == 0) {
            s32 s = data_ov001_0222c87c;
            if (s == 4) {
                data_ov001_0222c87c = 3;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(10);
                }
            } else if (s == 6) {
                if (func_ov065_0226a264(data_ov001_0222c894, data_ov001_0222c898, data_ov001_0222c8b0) != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            } else if (s == 2) {
                if (func_ov065_0226a284() != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            } else if (s == 8) {
                if (func_ov065_02269f24(data_ov001_0222c89c, (void *)data_ov001_0222c878, data_ov001_0222c8a8) != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            }
        } else {
            data_ov001_0222c87c = 3;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(11);
            }
        }
        return;
    case 6:
        if (p[1] == 0) {
            s32 s = data_ov001_0222c87c;
            if (s == 4) {
                data_ov001_0222c87c = 3;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(14);
                }
            } else if (s == 6) {
                if (func_ov065_0226a264(data_ov001_0222c894, data_ov001_0222c898, data_ov001_0222c8b0) != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            } else if (s == 2) {
                if (func_ov065_0226a284() != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            } else if (s == 8) {
                if (func_ov065_02269f24(data_ov001_0222c89c, (void *)data_ov001_0222c878, data_ov001_0222c8a8) != 3) {
                    data_ov001_0222c87c = 3;
                    if (data_ov001_0222c8d0 != 0) {
                        data_ov001_0222c8d0(2, 0);
                    }
                }
            } else if (s == 7) {
                data_ov001_0222c87c = 3;
            }
        } else {
            data_ov001_0222c87c = 3;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(15);
            }
        }
        return;
    case 2:
        if (p[1] == 0) {
            if (data_ov001_0222c87c == 2) {
                func_ov065_0226a4c8();
                data_ov001_0222c87c = 0;
                if (data_ov001_0222c8d0 != 0) {
                    data_ov001_0222c8d0(0x14);
                }
            }
        } else {
            data_ov001_0222c87c = 3;
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(2);
            }
        }
        return;
    case 7:
        if (data_ov001_0222c87c == 5) {
            if (data_ov001_0222c8d0 != 0) {
                data_ov001_0222c8d0(5);
            }
        }
        return;
    case 8:
        if (data_ov001_0222c8d0 != 0) {
            data_ov001_0222c8d0(4);
        }
        return;
    case 9:
        data_ov001_0222c87c = z;
        if (data_ov001_0222c8d0 != 0) {
            data_ov001_0222c8d0(3);
        }
        return;
    default:
        if (data_ov001_0222c8d0 != 0) {
            data_ov001_0222c8d0(1, 0);
        }
        return;
    }
}
}

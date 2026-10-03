// mwcc-flags: -O4,p
#include "types.h"

typedef void *(*Unk_ov001_02202b3c_Alloc)(u32);
typedef void (*Unk_ov001_02202b3c_Free)(void *);

struct Unk_ov001_02202c90_In {
    s32 unk_00;
    u8 unk_04[0x20];
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c[1];
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
#define data_ov001_0222c6ce (data_ov001_0222c6cc + 2)

extern "C" void *data_ov001_0222c694 = 0;
extern "C" Unk_ov001_02202b3c_Free data_ov001_0222c698 = 0;
extern "C" Unk_ov001_02202b3c_Alloc data_ov001_0222c68c = 0;
extern "C" s32 (*data_ov001_0222c690)(void *) = 0;
extern "C" u32 data_ov001_0222c6ac[8] = {0};
extern "C" Unk_ov001_02203258_Ent data_ov001_0222a4fc[12] = {
    {0x1, 2}, {0x2, 4}, {0x4, 0xb}, {0x8, 0xc}, {0x10, 0x12}, {0x20, 0x16}, {0x40, 0x18}, {0x80, 0x24},
    {0x100, 0x30}, {0x200, 0x48}, {0x400, 0x60}, {0x800, 0x6c},
};
extern "C" u32 data_ov001_0222c69c[4] = {0};
extern "C" u8 data_ov001_0222c740[0xc0] = {0};
extern "C" u8 data_ov001_0222c6cc[0x74] = {0};

extern "C" {
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
s32 OS_Sleep(s32, s32, s32);
s32 OS_ReceiveMessage(void *, void *, s32);
s32 OS_SendMessage(void *, s32, s32);
void OS_InitMessageQueue(void *, void *, s32);
void OS_CancelAlarm(void *);
void OS_CreateAlarm(void *);
void OS_SetAlarm(void *, u32, s32, void *, s32);
void MIi_CpuClear16(u16, void *, u32);
void MIi_CpuCopy16(void *, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);

void func_ov001_02203224(void *, void *);
s32 func_ov001_022032f8(void *, void *, u32);
s32 func_ov001_022033f0(void *, void *, u32);
void func_ov001_02203214(void *, void *, s32);
s32 func_ov001_02201ff8();
s32 func_ov001_02201c14(s32);
s32 func_ov001_02202050(void *);
void func_ov001_022007c4(s32);
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

}

enum Loop_02203004 { LOOP_02203004_0 = 0 };

extern "C" void func_ov001_02203258(Unk_ov001_02203258_Src *a, Unk_ov001_02203258_Dst *b) {
    b->unk_00 = a->unk_0a;
    MIi_CpuCopy16(a->unk_0c, b->unk_04, 0x20);
    b->unk_24 = a->unk_36;
    MIi_CpuCopy16(a->unk_04, b->unk_30, 6);
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

extern "C" void func_ov001_02203224(void *a, void *b) {
    volatile u16 z = 0;
    MIi_CpuClear16(z, (u8 *)b + 0xc, 0x20);
    *(u16 *)((u8 *)b + 0xa) = *(u32 *)a;
    MI_CpuCopy8((u8 *)a + 4, (u8 *)b + 0xc, *(u16 *)((u8 *)b + 0xa));
}

extern "C" void func_ov001_02203214(void *a, void *b, s32 c) {
    *(s32 *)a = c;
    func_ov001_02203258((Unk_ov001_02203258_Src *)b, (Unk_ov001_02203258_Dst *)((u8 *)a + 4));
}

extern "C" void func_ov001_02203200(s32 a) {
    OS_SendMessage(data_ov001_0222c6ac, a, 0);
}

extern "C" void func_ov001_022031ec(s32 a) {
    OS_SendMessage(data_ov001_0222c6ac, a, 0);
}

extern "C" s32 func_ov001_022030fc(Unk_ov001_02202b3c_Alloc a, Unk_ov001_02202b3c_Free b) {
    s32 ok = 1;
    s32 msg;
    void *p;
    OS_InitMessageQueue(data_ov001_0222c6ac, data_ov001_0222c69c, 4);
    if (a == 0 || b == 0) {
        return -1;
    }
    u32 irq = OS_DisableInterrupts();
    data_ov001_0222c68c = a;
    data_ov001_0222c698 = b;
    OS_RestoreInterrupts(irq);
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
            OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 1);
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

extern "C" s32 func_ov001_02203040() {
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
        OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 1);
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
    u32 irq = OS_DisableInterrupts();
    data_ov001_0222c68c = 0;
    data_ov001_0222c698 = 0;
    OS_RestoreInterrupts(irq);
    return res;
}

extern "C" s32 func_ov001_02203004() {
    Loop_02203004 loop;
    s32 res = -1;
    s32 msg;
    if (func_ov001_02203508()) {
        loop = LOOP_02203004_0;
        do {
            OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 1);
            switch (msg) {
            case 14:
                res = loop;
                break;
            default:
                break;
            }
        } while (loop);
    }
    return res;
}

extern "C" s32 func_ov001_02202e74(void **out) {
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
        OS_CreateAlarm(thr);
        OS_SetAlarm(thr, 0x3fec42, r6, (void *)func_ov001_022031ec, 0x13);
        do {
            OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 1);
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
        OS_CancelAlarm(thr);
        do {
        } while (OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 0) == 1);
    }
    data_ov001_0222c698(buf);
    return res;
}

extern "C" s32 func_ov001_02202c90(Unk_ov001_02202c90_In *a, void *b) {
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
    MI_CpuFill8(data_ov001_0222c6cc, 0, 0x60);
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
    MI_CpuCopy8(a->unk_2c, data_ov001_0222c6ce, a->unk_28);
    func_ov065_0226a934();
    if (func_ov001_0220358c(0, a->unk_04, a->unk_00, 0x30bffe)) {
        s32 msg;
        u32 thr[12];
        cnt = 0;
        OS_CreateAlarm(thr);
        OS_SetAlarm(thr, 0x3fec42, 0, (void *)func_ov001_022031ec, 0x12);
        r6 = r6 | 0x30000;
        s32 r5 = 0;
        do {
            OS_ReceiveMessage(data_ov001_0222c6ac, &msg, 1);
            switch (msg) {
            case 18:
                if (got == 0) {
                    r4 = r5;
                }
                break;
            case 5:
                if (got == 0) {
                    OS_CancelAlarm(thr);
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
        OS_CancelAlarm(thr);
        do {
        } while (OS_ReceiveMessage(data_ov001_0222c6ac, &msg, r5) == 1);
    }
    func_ov001_02203214(b, data_ov001_0222c740, res == 0);
    return res;
}

extern "C" s32 func_ov001_02202c88(s32 a, s32 b, s32 c) {
    return OS_Sleep(a, b, c);
}// Declarations for data defined further down (definition order sets the data layout)




extern "C" s32 func_ov001_02202c6c(void *a) {
    if (data_ov001_0222c690) {
        data_ov001_0222c690(a);
    }
    return 0;
}

extern "C" void *func_ov001_02202c58(u32 a) {
    return data_ov001_0222c68c(a);
}

extern "C" void func_ov001_02202c44(void *a) {
    data_ov001_0222c698(a);
}






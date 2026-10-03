// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {

// const objects have internal linkage in C++ unless declared extern; TU12 reads these two
extern const u8 data_ov065_0228b2a4[8];
extern const u8 data_ov065_0228b2ac[0x20];
const u8 data_ov065_0228b2a4[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0};
const u8 data_ov065_0228b2ac[0x20] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
u32 data_ov065_022905ac;
void *data_ov065_022905a8;
u8 data_ov065_022905b0[8];
u8 data_ov065_022905b8[0x20];

}

namespace N_ab40 {

// ov065_019: network library, connection/event state (0x0226ab40..0x0226b3c4)

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 unk_0f00[0x1244];
    u8 unk_2144[6];
    u16 unk_214a;
    u8 unk_214c[0x114];
    s32 unk_2260;
    u8 unk_2264[7];
    u8 unk_226b;
};

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    u8 unk_00;
    u8 unk_01[3];
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    u32 unk_24;
    Unk_ov065_0226ac54_Cb unk_28;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
    u8 unk_10[4];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
};

struct Unk_ov065_0226b27c_Cfg {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov065_0226b27c_F8 {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    u8 lo : 4;
    u8 mid : 2;
};

struct Unk_ov065_0226b3c4_Key {
    u8 unk_00[4];
};

struct Unk_ov065_0226b3c4_Rec {
    u8 unk_00[0xc0];
};

extern "C" {

extern Unk_ov065_0226ab40_Glb data_ov065_022905ac;
extern u8 data_ov065_022905b8[];
extern volatile u8 data_ov065_022905d8;
extern u8 data_ov065_022905dc[];
extern u8 *data_ov065_022905ec;
extern void *data_ov065_022905f0;
extern void *data_ov065_022905f4;
extern Unk_ov065_0226b27c_F8 *data_ov065_022905f8;
extern Unk_ov065_0226aed4_Fc *data_ov065_022905fc;

u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
s32 func_02133150(s32, s32);
void OS_InitMutex(void *);
s32 DGT_Hash1GetDigest_R();
s32 DGT_Hash1SetSource();
s32 DGT_Hash1Reset();
void func_02115e64(u32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
s32 strncmp(void *, void *, u32);
s32 WM_SetDCFData(void *, void *, void *, u32);
void func_020ff154(void *);

Unk_ov065_0226ab5c_Conn *func_ov065_02269bd0();
s32 func_ov065_0226a510(void *, u32);
s32 func_ov065_0226a97c(void *);
s32 func_ov065_0226a9a8(void *);
void func_ov065_0226a9d4();
s32 func_ov065_0226bd18(u8 *);
s32 func_ov065_0226be9c();
u8 func_ov065_0226bee4();
u8 func_ov065_0226bc40();
u8 func_ov065_0226c1e0();
u8 func_ov065_0226c8a4();
u8 func_ov065_0226c924();
u8 func_ov065_0226ccc8();

u8 func_ov065_0226ad30();
















void func_ov065_0226b084(u32, void *, u32);



u8 func_ov065_0226af18();
void *func_ov065_0226af74(u32);


















void func_ov065_0226ac7c() {
    if (data_ov065_022905ac.unk_00 == 0) {
        data_ov065_022905ac.unk_00 = 1;
        data_ov065_022905ac.unk_24 = 0;
        data_ov065_022905ac.unk_08 = 0;
        data_ov065_022905ac.unk_04 = 0;
        OS_InitMutex(data_ov065_022905b8);
    }
}

void func_ov065_0226ac54(u8 *p) {
    Unk_ov065_0226ac54_Cb cb = data_ov065_022905ac.unk_28;
    if (cb != 0) {
        cb(p + 0x1e, p + 0x18, p + 0x2c, *(u16 *)(p + 6));
    }
}

void func_ov065_0226abf4() {
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b != 1) {
        if (func_ov065_0226a9a8(data_ov065_022905b8) != 0) {
            if (WM_SetDCFData((void *)func_ov065_0226a9d4, c->unk_2144, c->unk_0f00, 0) != 2) {
                func_ov065_0226a97c(data_ov065_022905b8);
            }
        }
    }
}

u8 *func_ov065_0226abb0() {
    u8 *r5 = 0;
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    u32 irq = OS_DisableInterrupts();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b == 0) {
        r5 = c->unk_2144;
    }
    OS_RestoreInterrupts(irq);
    return r5;
}

u8 *func_ov065_0226ab5c(u16 *out) {
    u8 *r7 = 0;
    u32 r6 = 0;
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    u32 irq = OS_DisableInterrupts();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b == 0) {
        r7 = c->unk_214c;
        r6 = c->unk_214a;
    }
    OS_RestoreInterrupts(irq);
    if (out != 0) {
        *out = r6;
    }
    return r7;
}

void func_ov065_0226ab40(Unk_ov065_0226ac54_Cb cb) {
    u32 irq = OS_DisableInterrupts();
    data_ov065_022905ac.unk_28 = cb;
    OS_RestoreInterrupts(irq);
}

}
}  // namespace N_ab40

namespace N_a144 {

// Network library state (big object pointed to by data_ov065_022905a8)

struct Unk_ov065_0226a73c_Node {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    struct Unk_ov065_0226a73c_Node *unk_08;
    struct Unk_ov065_0226a73c_Node *unk_0c;
    u8 unk_10[0xc0];
};

struct Unk_ov065_0226a73c_List {
    u32 unk_00;
    Unk_ov065_0226a73c_Node *unk_04;
    Unk_ov065_0226a73c_Node *unk_08;
    Unk_ov065_0226a73c_Node unk_0c[1];
};

struct Unk_ov065_022905a8_S {
    u8 unk_0000[0x2260];
    s32 unk_2260;
    u8 unk_2264[4];
    u16 unk_2268;
    u8 unk_226a;
    u8 unk_226b;
    u32 unk_226c;
    Unk_ov065_0226a73c_List *unk_2270;
    u32 unk_2274;
    s32 unk_2278;
    u8 unk_227c[4];
    u16 unk_2280;
    u16 unk_2282;
    u32 unk_2284;
    u32 unk_2288;
    u16 unk_228c;
    u8 unk_228e[0x3e];
    u8 unk_22cc[0x2c];
    u16 unk_22f8;
};

struct Unk_ov065_0226a97c_Mutex {
    u32 unk_00[2];
    void *unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226a9e4_G {
    u8 unk_00[0x24];
    s32 unk_24;
};

struct Unk_ov065_0226a9e4_Msg {
    u16 unk_00;
    u16 unk_02;
};

extern "C" {
extern Unk_ov065_022905a8_S *volatile data_ov065_022905a8;
extern Unk_ov065_0226a97c_Mutex data_ov065_022905b8;
extern Unk_ov065_0226a9e4_G data_ov065_022905ac;
extern u8 data_ov065_022905b0[];

// main module
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void OS_IrqHandler(void);
void DC_InvalidateRange(u32, u32);
s32 func_0211fdd4(void *, void *);
s32 WM_PowerOff(void *);
s32 WM_Init(void *, u32);
s32 WM_GetAllowedChannel(void);
s32 func_0211f188(void);
s32 func_0211fb68(void *);
s32 WM_Enable(void *);
s32 func_02114e38(void);
void OS_InitTick(void);
s32 func_021152f4(void);
void OS_InitAlarm(void);
void OS_CreateAlarm(void *);
void MIi_CpuCopyFast(void *, void *, u32);
void *MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 WM_SetDCFData(void *, void *, void *, u32);
void OS_WakeupThread(void *);
void OS_SleepThread(void *);
void OS_LockMutex(void *);
void OS_UnlockMutex(void *);

// overlay 065, other groups
void func_ov065_02269350(void);
void func_ov065_02269550(void);
void func_ov065_02269784(void);
void func_ov065_022699e8(void *, void *, s32);
void func_ov065_02269b18(void *, void *);
void func_ov065_0226989c(s32);
void func_ov065_022699d0(void);
void func_ov065_02269848(void);
Unk_ov065_022905a8_S *func_ov065_02269bd0(void);
s32 func_ov065_0226a0c4(void *, void *, s32);
s32 func_ov065_0226adbc(void *, void *);
void func_ov065_0226ac7c(void);

// same group
s32 func_ov065_0226a144(void *, void *, s32);
s32 func_ov065_0226a264(void *, void *, s32);
s32 func_ov065_0226a284(void);
s32 func_ov065_0226a33c(void *, void *);
s32 func_ov065_0226a4c8(void);
s32 func_ov065_0226a510(void *, u32);
void func_ov065_0226a5f8(Unk_ov065_0226a73c_Node *);
Unk_ov065_0226a73c_Node *func_ov065_0226a678(u32);
Unk_ov065_0226a73c_Node *func_ov065_0226a6b4(void *);
Unk_ov065_0226a73c_Node *func_ov065_0226a70c(void);
Unk_ov065_0226a73c_Node *func_ov065_0226a73c(void);
void func_ov065_0226a7bc(u8 *, u32);
void *func_ov065_0226a828(u32);
BOOL func_ov065_0226a87c(BOOL);
u32 func_ov065_0226a8e4(void);
void func_ov065_0226a934(void);
void func_ov065_0226a97c(Unk_ov065_0226a97c_Mutex *);
BOOL func_ov065_0226a9a8(Unk_ov065_0226a97c_Mutex *);
void func_ov065_0226a9d4(void);
void func_ov065_0226a9e4(Unk_ov065_0226a9e4_Msg *);
s32 func_ov065_0226aa14(u32, void *, u32);









static inline u8 *Unk_ov065_0226a6b4_Data(Unk_ov065_0226a73c_Node *n)
{
    return n->unk_10;
}















s32 func_ov065_0226aa14(u32 a, void *b, u32 c)
{
    u32 e = OS_DisableInterrupts();
    if (func_ov065_02269bd0() == NULL) {
        OS_RestoreInterrupts(e);
        return -1;
    }
    OS_LockMutex(&data_ov065_022905b8);
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        OS_UnlockMutex(&data_ov065_022905b8);
        OS_RestoreInterrupts(e);
        return -1;
    }
    if (s->unk_2260 != 9 || s->unk_226b == 1) {
        OS_UnlockMutex(&data_ov065_022905b8);
        OS_RestoreInterrupts(e);
        return -4;
    }
    MI_CpuCopy8(b, (u8 *)s + 0xf00, c);
    switch (WM_SetDCFData((void *)func_ov065_0226a9e4, (void *)a, (u8 *)s + 0xf00, (u16)c)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        OS_UnlockMutex(&data_ov065_022905b8);
        OS_RestoreInterrupts(e);
        return -5;
    case 2:
        break;
    }
    OS_SleepThread(data_ov065_022905b0);
    switch (data_ov065_022905ac.unk_24) {
    case 1:
    default:
        OS_UnlockMutex(&data_ov065_022905b8);
        OS_RestoreInterrupts(e);
        return -5;
    case 0:
        OS_UnlockMutex(&data_ov065_022905b8);
        OS_RestoreInterrupts(e);
        return c;
    }
}

void func_ov065_0226a9e4(Unk_ov065_0226a9e4_Msg *p)
{
    if (p->unk_00 == 0x12) {
        data_ov065_022905ac.unk_24 = p->unk_02;
        if (p->unk_02 == 0) {
            func_ov065_02269848();
        }
        OS_WakeupThread(data_ov065_022905b0);
    }
}

void func_ov065_0226a9d4(void)
{
    func_ov065_0226a97c(&data_ov065_022905b8);
}

BOOL func_ov065_0226a9a8(Unk_ov065_0226a97c_Mutex *m)
{
    void *o = m->unk_08;
    if (o == NULL) {
        m->unk_08 = (void *)OS_IrqHandler;
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    if (o == (void *)OS_IrqHandler) {
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226a97c(Unk_ov065_0226a97c_Mutex *m)
{
    if (m->unk_08 == (void *)OS_IrqHandler) {
        m->unk_0c = m->unk_0c - 1;
        if (m->unk_0c == 0) {
            m->unk_08 = NULL;
            OS_WakeupThread(m);
        }
    }
}

void func_ov065_0226a934(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && (s32)s->unk_2274 > 0) {
        MI_CpuFill8(list, 0, s->unk_2274);
    }
    OS_RestoreInterrupts(e);
}

u32 func_ov065_0226a8e4(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    u32 r = 0;
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return r;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        r = list->unk_00;
    }
    OS_RestoreInterrupts(e);
    return r;
}

BOOL func_ov065_0226a87c(BOOL a)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return FALSE;
    }
    if (a != 0) {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 1;
    } else {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 0;
    }
    OS_RestoreInterrupts(e);
    return a;
}

void *func_ov065_0226a828(u32 id)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return NULL;
    }
    Unk_ov065_0226a73c_Node *n = func_ov065_0226a678(id);
    if (n == NULL) {
        OS_RestoreInterrupts(e);
        return NULL;
    }
    OS_RestoreInterrupts(e);
    return n->unk_10;
}

void func_ov065_0226a7bc(u8 *a, u32 b)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s != NULL) {
        if (s->unk_226a == 0) {
            if (*(u16 *)(a + 0x3c) == 0) {
                Unk_ov065_0226a73c_Node *n = func_ov065_0226a6b4(a + 4);
                if (n == NULL) {
                    n = func_ov065_0226a73c();
                }
                if (n == NULL && s->unk_2278 == 1) {
                    n = func_ov065_0226a70c();
                }
                if (n != NULL) {
                    n->unk_02 = b;
                    MIi_CpuCopyFast(a, n->unk_10, 0xc0);
                    func_ov065_0226a5f8(n);
                }
            }
        }
    }
}

Unk_ov065_0226a73c_Node *func_ov065_0226a73c(void)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *r = NULL;
    if (list != NULL && s->unk_2274 > 0xc) {
        u32 sz = 0xd0;
        u32 n = (s->unk_2274 - 0xc) / sz;
        if (n != 0 && n > list->unk_00) {
            s32 i = 0;
            for (i = 0; (u32)i < n; i++) {
                u32 off = i * sz;
                u8 *base = (u8 *)list + 0xc;
                r = (Unk_ov065_0226a73c_Node *)(base + off);
                if (base[off] == 0) {
                    break;
                }
            }
            if ((u32)i < n) {
                r->unk_00 = 1;
                r->unk_04 = list->unk_00;
                r->unk_0c = NULL;
                r->unk_08 = list->unk_08;
                list->unk_08 = r;
                if (r->unk_08 != NULL) {
                    r->unk_08->unk_0c = r;
                } else {
                    list->unk_04 = r;
                }
                list->unk_00 = list->unk_00 + 1;
            }
        }
    }
    return r;
}

Unk_ov065_0226a73c_Node *func_ov065_0226a70c(void)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        return list->unk_04;
    }
    return NULL;
}

Unk_ov065_0226a73c_Node *func_ov065_0226a6b4(void *key)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *n = NULL;
    if (key == NULL) {
        return n;
    }
    if (list != NULL && s->unk_2274 > 0xc) {
        for (n = list->unk_04; n != NULL; n = n->unk_0c) {
            if (func_ov065_0226adbc(Unk_ov065_0226a6b4_Data(n) + 4, key) != 0) {
                break;
            }
        }
    }
    return n;
}

Unk_ov065_0226a73c_Node *func_ov065_0226a678(u32 id)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *n = NULL;
    if (list != NULL && s->unk_2274 > 0xc) {
        for (n = list->unk_04; n != NULL; n = n->unk_0c) {
            if (n->unk_04 == id) {
                break;
            }
        }
    }
    return n;
}

void func_ov065_0226a5f8(Unk_ov065_0226a73c_Node *node)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (node != NULL && list != NULL && s->unk_2274 > 0xc) {
        Unk_ov065_0226a73c_Node *c = list->unk_04;
        for (; c != NULL; c = c->unk_0c) {
            if (c == node) {
                if (c->unk_08 != NULL) {
                    c->unk_08->unk_0c = c->unk_0c;
                } else {
                    list->unk_04 = c->unk_0c;
                }
                if (c->unk_0c != NULL) {
                    c->unk_0c->unk_08 = c->unk_08;
                } else {
                    list->unk_08 = c->unk_08;
                }
                break;
            }
        }
        node->unk_0c = NULL;
        node->unk_08 = list->unk_08;
        list->unk_08 = node;
        if (node->unk_08 != NULL) {
            node->unk_08->unk_0c = node;
        } else {
            list->unk_04 = node;
        }
        if (c == NULL) {
            node->unk_04 = list->unk_00;
            list->unk_00 = list->unk_00 + 1;
        }
    }
}

s32 func_ov065_0226a510(void *a, u32 b)
{
    u32 e = OS_DisableInterrupts();
    if (data_ov065_022905a8 != NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (a == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (((u32)a & 0x1f) != 0) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (b < 0x2300) {
        OS_RestoreInterrupts(e);
        return 6;
    }
    data_ov065_022905a8 = (Unk_ov065_022905a8_S *)a;
    ((Unk_ov065_022905a8_S *)a)->unk_2260 = 1;
    data_ov065_022905a8->unk_2280 = 0;
    data_ov065_022905a8->unk_2268 = 0;
    data_ov065_022905a8->unk_226a = 0;
    data_ov065_022905a8->unk_226b = 0;
    data_ov065_022905a8->unk_2282 = 0;
    data_ov065_022905a8->unk_22f8 = 0;
    func_ov065_022699d0();
    func_ov065_0226ac7c();
    if (func_02114e38() == 0) {
        OS_InitTick();
    }
    if (func_021152f4() == 0) {
        OS_InitAlarm();
    }
    OS_CreateAlarm(data_ov065_022905a8->unk_22cc);
    OS_RestoreInterrupts(e);
    return 0;
}

s32 func_ov065_0226a4c8(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (g->unk_2260 != 1) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    data_ov065_022905a8 = NULL;
    OS_RestoreInterrupts(e);
    return 0;
}

s32 func_ov065_0226a33c(void *a, void *b)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 1:
        func_ov065_02269b18(a, b);
        break;
    case 2:
        OS_RestoreInterrupts(e);
        return 2;
    case 3:
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    }
    Unk_ov065_022905a8_S *t = data_ov065_022905a8;
    switch (WM_Init(t, (u16)t->unk_226c)) {
    case 3:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    case 4:
        OS_RestoreInterrupts(e);
        return 5;
    case 1:
    case 2:
    case 5:
    case 6:
    default:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    case 0:
        break;
    }
    if (WM_GetAllowedChannel() == 0) {
        if (func_0211f188() != 0) {
            func_ov065_0226989c(0xb);
            OS_RestoreInterrupts(e);
            return 7;
        }
        OS_RestoreInterrupts(e);
        return 5;
    }
    if (func_0211fb68((void *)func_ov065_02269784) != 0) {
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    switch (WM_Enable((void *)func_ov065_02269550)) {
    case 2:
        func_ov065_0226989c(2);
        data_ov065_022905a8->unk_2280 = 1;
        break;
    case 8:
        func_ov065_0226989c(0xc);
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

s32 func_ov065_0226a284(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 4:
        OS_RestoreInterrupts(e);
        return 2;
    case 1:
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
        break;
    }
    switch (WM_PowerOff((void *)func_ov065_02269550)) {
    case 2:
        func_ov065_0226989c(4);
        data_ov065_022905a8->unk_2280 = 2;
        break;
    case 8:
        OS_RestoreInterrupts(e);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

s32 func_ov065_0226a264(void *a, void *b, s32 c)
{
    if (a == NULL || b == NULL) {
        return func_ov065_0226a0c4(a, b, c);
    }
    return func_ov065_0226a144(a, b, c);
}

s32 func_ov065_0226a144(void *a, void *b, s32 c)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 5:
        func_ov065_022699e8(a, b, c);
        OS_RestoreInterrupts(e);
        return 2;
    case 6:
        func_ov065_022699e8(a, b, c);
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
        break;
    }
    func_ov065_022699e8(a, b, c);
    {
        Unk_ov065_022905a8_S *t = data_ov065_022905a8;
        DC_InvalidateRange(t->unk_2288, t->unk_228c);
    }
    {
        u32 *cp = &data_ov065_022905a8->unk_2284;
        *cp = *cp + 1;
    }
    switch (func_0211fdd4((void *)func_ov065_02269350, &data_ov065_022905a8->unk_2288)) {
    case 2:
        func_ov065_0226989c(5);
        data_ov065_022905a8->unk_2280 = 3;
        break;
    case 8:
        OS_RestoreInterrupts(e);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

}
}  // namespace N_a144

namespace N_97ec {

struct Unk_ov065_0226990c_Ev {
    s16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

typedef void (*Unk_ov065_0226990c_Cb)(Unk_ov065_0226990c_Ev *);

struct Unk_ov065_022697ec_G {
    u8 pad_0000[0x2140];
    u8 unk_2140[0x2e];
    u16 unk_216e;
    u16 unk_2170;
    u8 pad_2172[0x2200 - 0x2172];
    u8 unk_2200[0x50];
    u8 unk_2250;
    u8 unk_2251;
    u8 pad_2252[0x2260 - 0x2252];
    s32 unk_2260;
    u32 unk_2264;
    u16 unk_2268;
    u8 pad_226a;
    u8 unk_226b;
    u32 unk_226c;
    u32 unk_2270;
    u32 unk_2274;
    u32 unk_2278;
    Unk_ov065_0226990c_Cb unk_227c;
    s16 unk_2280;
    u8 pad_2282[2];
    u32 unk_2284;
    void *unk_2288;
    u16 unk_228c;
    u16 unk_228e;
    u16 unk_2290;
    u8 unk_2292[6];
    u16 unk_2298;
    u16 unk_229a;
    u8 unk_229c[0x20];
    u8 unk_22bc[0x10];
    u8 unk_22cc[0x20];
};

typedef Unk_ov065_022697ec_G G;

struct Unk_ov065_02269b18_In {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
};

extern "C" {
extern G *data_ov065_022905a8;
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];

// main module
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void OS_CancelAlarm(void *);
void func_0211512c(void *, u32, u32, void *, u32);
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 WM_Reset(void *);
u32 WM_GetDispersionScanPeriod();
u16 *WMi_GetStatusAddress();
void DC_InvalidateRange(void *, u32);
s32 func_0211f188();
s32 WM_Disable(void *);
s32 WM_PowerOff(void *);
s32 WM_EndDCF(void *);
s32 WM_SetLifeTime(void *, u32, u32, u32, u32);
s32 func_02133150(s32, s32);

// same overlay, out of range
void func_ov065_02268c64();
void func_ov065_02268ec8();
void func_ov065_02269550();
void func_ov065_0226abf4();

// in range
void func_ov065_022697ec();
void func_ov065_02269834();
void func_ov065_02269848();
void func_ov065_0226989c(s32);
void func_ov065_0226990c(s32, s32, s32, s32, s32);
void func_ov065_02269944(s32, s32, s32, s32);
u32 func_ov065_0226997c(s32);
void func_ov065_022699d0();
void func_ov065_022699e8(u8 *, u8 *, u32);
void func_ov065_02269b18(Unk_ov065_02269b18_In *, u32);
u32 func_ov065_02269bd0();
u32 func_ov065_02269bdc(u32);
u32 func_ov065_02269c9c();
s32 func_ov065_02269cc4();
s32 func_ov065_02269e50();
s32 func_ov065_02269f24(u8 *, u8 *, u32);
s32 func_ov065_0226a0c4();
}

s32 func_ov065_0226a0c4() {
    u32 irq = OS_DisableInterrupts();
    G *g = data_ov065_022905a8;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 6:
        func_ov065_0226989c(7);
        data_ov065_022905a8->unk_2280 = 4;
        break;
    case 7:
        OS_RestoreInterrupts(irq);
        return 2;
    case 3:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    }
    OS_RestoreInterrupts(irq);
    return 3;
}

s32 func_ov065_02269f24(u8 *a, u8 *b, u32 c) {
    u32 irq;
    G *g;
    s32 r;
    irq = OS_DisableInterrupts();
    g = data_ov065_022905a8;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 3:
        if (a == 0) {
            OS_RestoreInterrupts(irq);
            return 1;
        }
        if (*(u16 *)(a + 0x3c) != 0) {
            OS_RestoreInterrupts(irq);
            return 1;
        }
        if (b != 0) {
            u32 x = b[0];
            if (x >= 4 || b[1] >= 4) {
                OS_RestoreInterrupts(irq);
                return 1;
            }
            g->unk_2250 = x;
            data_ov065_022905a8->unk_2251 = b[1];
            g = data_ov065_022905a8;
            if (g->unk_2250 == 0) {
                MI_CpuFill8(g->unk_2200, 0, 0x50);
            } else {
                MI_CpuCopy8(b + 2, g->unk_2200, 0x50);
            }
        } else {
            MI_CpuFill8(g->unk_2200, 0, 0x52);
        }
        MI_CpuCopy8(a, data_ov065_022905a8->unk_2140, 0xc0);
        g = data_ov065_022905a8;
        g->unk_2170 = g->unk_216e | 3;
        func_ov065_02269bdc(c);
        break;
    case 8:
        OS_RestoreInterrupts(irq);
        return 2;
    case 9:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    }
    r = WM_SetLifeTime((void *)func_ov065_02269550, 0xffff, 0x50, 0xffff, 0xffff);
    switch (r) {
    case 2:
        func_ov065_0226989c(8);
        data_ov065_022905a8->unk_2280 = 5;
        break;
    case 8:
        OS_RestoreInterrupts(irq);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        OS_RestoreInterrupts(irq);
        return 7;
    }
    OS_RestoreInterrupts(irq);
    return 3;
}

s32 func_ov065_02269e50() {
    u32 irq = OS_DisableInterrupts();
    G *g = data_ov065_022905a8;
    s32 r;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 10:
        OS_RestoreInterrupts(irq);
        return 2;
    case 3:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    case 9:
        if (g->unk_226b == 1) {
            func_ov065_0226989c(0xa);
            data_ov065_022905a8->unk_2280 = 6;
        } else {
            r = WM_EndDCF((void *)func_ov065_02268ec8);
            switch (r) {
            case 2:
                func_ov065_0226989c(0xa);
                data_ov065_022905a8->unk_2280 = 6;
                break;
            case 8:
                OS_RestoreInterrupts(irq);
                return 4;
            case 3:
            default:
                func_ov065_0226989c(0xb);
                OS_RestoreInterrupts(irq);
                return 7;
            }
        }
        OS_RestoreInterrupts(irq);
        return 3;
    }
}

s32 func_ov065_02269cc4() {
    u32 irq = OS_DisableInterrupts();
    G *g = data_ov065_022905a8;
    s32 r;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 13:
        OS_RestoreInterrupts(irq);
        return 2;
    case 1:
        OS_RestoreInterrupts(irq);
        return 0;
    case 6:
        func_ov065_0226989c(0xd);
        data_ov065_022905a8->unk_2280 = 9;
        OS_RestoreInterrupts(irq);
        return 3;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    case 3:
    case 9:
    case 12:
        if (g->unk_226b == 1) {
            func_ov065_0226989c(0xd);
            data_ov065_022905a8->unk_2280 = 9;
            goto done;
        } else {
            u16 *p = WMi_GetStatusAddress();
            DC_InvalidateRange(p, 2);
            switch (*p) {
            case 0:
                r = func_0211f188();
                if (r == 0) {
                    func_ov065_0226989c(1);
                    data_ov065_022905a8->unk_2280 = 0;
                    OS_RestoreInterrupts(irq);
                    return 0;
                }
                break;
            case 1:
                r = WM_Disable((void *)func_ov065_02269550);
                break;
            case 2:
                r = WM_PowerOff((void *)func_ov065_02269550);
                break;
            default:
                data_ov065_022905a8->unk_226b = 1;
                r = WM_Reset((void *)func_ov065_02268c64);
                break;
            }
            switch (r) {
            case 2:
                func_ov065_0226989c(0xd);
                data_ov065_022905a8->unk_2280 = 9;
                goto done;
            case 8:
                OS_RestoreInterrupts(irq);
                return 4;
            case 3:
            default:
                func_ov065_0226989c(0xb);
                OS_RestoreInterrupts(irq);
                return 7;
            }
        }
    }
done:
    OS_RestoreInterrupts(irq);
    return 3;
}

u32 func_ov065_02269c9c() {
    u32 irq = OS_DisableInterrupts();
    u32 r = 0;
    G *g = data_ov065_022905a8;
    if (g != 0) {
        r = g->unk_2260;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

u32 func_ov065_02269bdc(u32 v) {
    u32 irq = OS_DisableInterrupts();
    u32 m = 0;
    G *g = data_ov065_022905a8;
    u32 old = g->unk_2264;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 0;
    }
    if ((v & 0x8000) != 0) {
        m |= 0x3ffe;
        if ((v & 0x3ffe) == 0) v |= 0xa082;
    }
    if ((v & 0x20000) != 0) m |= 0x10000;
    if ((v & 0x80000) != 0) m |= 0x40000;
    if ((v & 0x200000) != 0) m |= 0x100000;
    if ((v & 0x800000) != 0) m |= 0x400000;
    g->unk_2264 = v | (old & ~m);
    OS_RestoreInterrupts(irq);
    return old;
}

u32 func_ov065_02269bd0() {
    return (u32)data_ov065_022905a8;
}

void func_ov065_02269b18(Unk_ov065_02269b18_In *p, u32 arg) {
    if (p == 0) {
        data_ov065_022905a8->unk_226c = 3;
        data_ov065_022905a8->unk_2270 = 0;
        data_ov065_022905a8->unk_2274 = 0;
        data_ov065_022905a8->unk_2278 = 0;
    } else {
        u32 t4;
        data_ov065_022905a8->unk_226c = p->unk_00 & 3;
        t4 = p->unk_04;
        if (((4 - (t4 & 3)) & 3) + 0xc > p->unk_08) {
            data_ov065_022905a8->unk_2270 = 0;
            data_ov065_022905a8->unk_2274 = 0;
        } else {
            data_ov065_022905a8->unk_2270 = (t4 + 3) & ~3;
            data_ov065_022905a8->unk_2274 = p->unk_08 - ((4 - (p->unk_04 & 3)) & 3);
            MI_CpuFill8((void *)data_ov065_022905a8->unk_2270, 0, data_ov065_022905a8->unk_2274);
        }
        data_ov065_022905a8->unk_2278 = p->unk_0c;
    }
    data_ov065_022905a8->unk_227c = (Unk_ov065_0226990c_Cb)arg;
}

void func_ov065_022699e8(u8 *a, u8 *b, u32 c) {
    G *g;
    u32 t;
    func_ov065_02269bdc(c);
    g = data_ov065_022905a8;
    g->unk_2288 = (u8 *)g + 0x1500;
    data_ov065_022905a8->unk_228c = 0x400;
    data_ov065_022905a8->unk_228e = (1 << func_ov065_0226997c(0)) >> 1;
    t = data_ov065_022905a8->unk_2268;
    if (t == 0) t = WM_GetDispersionScanPeriod();
    g = data_ov065_022905a8;
    g->unk_2290 = t;
    g = data_ov065_022905a8;
    g->unk_2298 = (g->unk_2264 & 0x300000) != 0x300000 ? 1 : 0;
    if (a == 0) {
        MI_CpuCopy8(data_ov065_0228b2a4, data_ov065_022905a8->unk_2292, 6);
    } else {
        MI_CpuCopy8(a, data_ov065_022905a8->unk_2292, 6);
    }
    if (b == 0 || b == data_ov065_0228b2ac) {
        MI_CpuCopy8(data_ov065_0228b2ac, data_ov065_022905a8->unk_229c, 0x20);
        data_ov065_022905a8->unk_229a = 0;
    } else {
        s32 n;
        MI_CpuCopy8(b, data_ov065_022905a8->unk_229c, 0x20);
        n = 0;
        for (;;) {
            if (*b == 0) break;
            b++;
            n++;
            if (n >= 0x20) break;
        }
        data_ov065_022905a8->unk_229a = n;
    }
    data_ov065_022905a8->unk_2284 = 0;
}

void func_ov065_022699d0() {
    data_ov065_022905a8->unk_2264 = 0xaaa082;
}

u32 func_ov065_0226997c(s32 a) {
    s32 i = 0;
    s32 c = a;
    u32 mask = data_ov065_022905a8->unk_2264;
    do {
        if ((mask & (1 << (c % 13 + 1))) != 0) break;
        c++;
        i++;
    } while (i < 13);
    return (u16)((a + i) % 13 + 1);
}

void func_ov065_02269944(s32 a, s32 b, s32 c, s32 d) {
    G *g = data_ov065_022905a8;
    s32 old = g->unk_2280;
    g->unk_2280 = 0;
    func_ov065_0226990c(old, a, b, c, d);
}

void func_ov065_0226990c(s32 a, s32 b, s32 c, s32 d, s32 e) {
    G *g = data_ov065_022905a8;
    Unk_ov065_0226990c_Cb *cb = &g->unk_227c;
    if (*cb != 0) {
        Unk_ov065_0226990c_Ev ev;
        ev.unk_00 = a;
        ev.unk_02 = b;
        ev.unk_04 = c;
        ev.unk_08 = d;
        ev.unk_0c = e;
        (*cb)(&ev);
    }
}

void func_ov065_0226989c(s32 st) {
    u32 irq = OS_DisableInterrupts();
    G *g = data_ov065_022905a8;
    if (g->unk_2260 == 9 && st != 9) {
        OS_CancelAlarm(g->unk_22cc);
    }
    g = data_ov065_022905a8;
    if (g->unk_2260 != 0xb) {
        g->unk_2260 = st;
    }
    if (st == 9) {
        g = data_ov065_022905a8;
        func_0211512c(g->unk_22cc, 0x22f5341, 0, (void *)func_ov065_02269834, 0);
    }
    OS_RestoreInterrupts(irq);
}

void func_ov065_02269848() {
    u32 irq = OS_DisableInterrupts();
    G *g = data_ov065_022905a8;
    OS_CancelAlarm(g->unk_22cc);
    g = data_ov065_022905a8;
    if (g->unk_2260 == 9) {
        func_0211512c(g->unk_22cc, 0x22f5341, 0, (void *)func_ov065_02269834, 0);
    }
    OS_RestoreInterrupts(irq);
}

void func_ov065_02269834() {
    func_ov065_0226abf4();
    func_ov065_02269848();
}

void func_ov065_022697ec() {
    G *g = data_ov065_022905a8;
    if (g->unk_226b == 0) {
        g->unk_226b = 1;
        if (WM_Reset((void *)func_ov065_02268c64) != 2) {
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, 0, 0, 0x611);
        }
    }
}

}  // namespace N_97ec

namespace N_8ec8 {

// ov065_016: network state-machine message handlers, 0x02268ec8..0x02269784

struct Unk_ov065_02268ec8_Msg {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u16 hc;
    u16 he;
    u32 p10[16];
    u16 h50[16];
};

struct Unk_ov065_02268fb0_Ptr {
    u8 pad_00[0xe];
    u16 he;
};

struct Unk_ov065_02268ec8_G {
    u8 pad_0000[0x1500];
    u8 unk_1500[0xc40];
    u8 unk_2140[0xc0];
    u8 unk_2200[0x50];
    u8 unk_2250;
    u8 unk_2251;
    u8 pad_2252[0xe];
    s32 unk_2260;
    u32 unk_2264;
    u8 pad_2268[0x14];
    u32 unk_227c;
    s16 unk_2280;
    s16 unk_2282;
    u32 unk_2284;
    u8 unk_2288[4];
    u16 unk_228c;
    s16 unk_228e;
    u8 pad_2290[0x68];
    u16 unk_22f8;
};

typedef Unk_ov065_02268ec8_Msg Unk_ov065_02268ec8_M;
typedef Unk_ov065_02268ec8_G Unk_ov065_02268ec8_GG;

extern "C" {

extern Unk_ov065_02268ec8_G *data_ov065_022905a8;

void func_ov065_0226989c(u32);
s32 func_ov065_02269944(u32, void *, u32, u32);
void func_ov065_0226990c(u32, u32, u32, void *, u32);
void func_ov065_022697ec();
u32 func_ov065_02268c38(u32);
u32 func_ov065_02268c5c(u32);
u32 func_ov065_0226997c(u32);
void func_ov065_0226aca8(u32);
void func_ov065_0226ac54(void *);
void func_ov065_0226a7bc(u32, u32);
void DC_InvalidateRange(void *, u32);
s32 func_0211fbb4(void *, u32);
s32 WM_StartDCF(void *, void *, u32);
s32 func_0211fdd4(void *, void *);
s32 WM_EndScan(void *);
s32 WM_PowerOn(void *);
s32 func_0211f188();
s32 WM_Disable(void *);
s32 WM_SetBeaconIndication(void *, u32);
s32 WM_SetWEPKeyEx(void *, u32, u32, void *);
s32 func_0211fcbc(void *, void *, u32, u32, u32);

void func_ov065_02268ec8(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02268fb0(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269080(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269128(Unk_ov065_02268ec8_Msg *m);
void func_ov065_022692ec(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269350(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269550(Unk_ov065_02268ec8_Msg *m);










void func_ov065_02269784(Unk_ov065_02268ec8_Msg *m) {
    if (m->h2 == 8 && m->h4 == 0x16 && m->h6 == 0x25) {
        switch (data_ov065_022905a8->unk_2260) {
        case 8:
            func_ov065_0226989c(0xc);
            break;
        case 9:
        case 12:
            func_ov065_022697ec();
            break;
        case 10:
            func_ov065_0226989c(0xc);
            break;
        case 11:
            break;
        }
    }
}

void func_ov065_02269550(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        switch (m->h0) {
        case 3:
            res = WM_PowerOn((void *)func_ov065_02269550);
            break;
        case 4: {
            s32 r = func_0211f188();
            switch (r) {
            case 0:
                func_ov065_0226989c(1);
                func_ov065_02269944(0, 0, 0, 0x663);
                return;
            case 4:
            default:
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, 0, 0, 0x66a);
                return;
            }
        }
        case 5:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, 0, 0, 0x670);
            return;
        case 6:
            res = WM_Disable((void *)func_ov065_02269550);
            break;
        case 0x1d:
            res = WM_SetBeaconIndication((void *)func_ov065_02269550, 0);
            break;
        case 0x19: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            res = WM_SetWEPKeyEx((void *)func_ov065_02269550, g->unk_2250, g->unk_2251, g->unk_2200);
            break;
        }
        case 0x27: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            u32 t = g->unk_2264;
            s32 a0;
            u32 b;
            if ((t & 0xc0000) == 0xc0000) a0 = 1; else a0 = 0;
            u16 a = a0;
            if ((t & 0x30000) != 0x30000) b = 1; else b = 0;
            res = func_0211fcbc((void *)func_ov065_02269128, g->unk_2140, 0, b, a);
            break;
        }
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6a7);
        return;
    e3:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6b0);
        return;
    }
    case 1:
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6d0);
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6da);
        return;
    }
}

void func_ov065_02269350(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        if (data_ov065_022905a8->unk_2260 == 5) {
            func_ov065_0226989c(6);
            func_ov065_02269944(0, 0, 0, 0x6f6);
        }
        switch (data_ov065_022905a8->unk_2260) {
        case 6: {
            data_ov065_022905a8->unk_2280 = 7;
            if (m->h8 == 5) {
                s32 i;
                DC_InvalidateRange(*(void **)data_ov065_022905a8->unk_2288, data_ov065_022905a8->unk_228c);
                for (i = 0; i < (s32)m->he; i++) {
                    func_ov065_0226a7bc(m->p10[i], m->h50[i]);
                    func_ov065_0226990c(7, 0, m->p10[i], m, 0x70b);
                }
            }
            u32 t = data_ov065_022905a8->unk_2264;
            if ((t & 0xc00000) == 0xc00000) {
                u32 cnt = func_ov065_02268c38(t & 0x3ffe);
                if (cnt != 0) {
                    u32 x = data_ov065_022905a8->unk_2284;
                    if (x % cnt == 0) {
                        func_ov065_0226990c(8, 0, x, 0, 0x718);
                    }
                }
            }
            {
                u32 n = func_ov065_02268c5c(m->ha);
                u32 k = func_ov065_0226997c((u16)(32 - n));
                data_ov065_022905a8->unk_228e = (s16)((1 << k) >> 1);
            }
            DC_InvalidateRange(*(void **)data_ov065_022905a8->unk_2288, data_ov065_022905a8->unk_228c);
            data_ov065_022905a8->unk_2284++;
            res = func_0211fdd4((void *)func_ov065_02269350, data_ov065_022905a8->unk_2288);
            break;
        }
        case 7:
            res = WM_EndScan((void *)func_ov065_022692ec);
            break;
        case 0xd:
            func_ov065_022697ec();
            return;
        default:
            break;
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, 0, 0, 0x743);
        return;
    e3:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x74c);
        return;
    }
    case 1:
        func_ov065_022697ec();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x75d);
        return;
    }
}

void func_ov065_022692ec(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        func_ov065_0226989c(3);
        func_ov065_02269944(0, 0, 0, 0x774);
        return;
    case 1:
        func_ov065_022697ec();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x784);
        return;
    }
}

void func_ov065_02269128(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h8) {
        case 8:
        case 9: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            switch (g->unk_2260 - 8) {
            case 2:
                g->unk_2282 = 0;
            case 0:
                func_ov065_0226989c(0xc);
                break;
            case 1:
                g->unk_2282 = 0;
                data_ov065_022905a8->unk_2280 = 6;
            case 4:
                func_ov065_022697ec();
                break;
            case 3:
                break;
            }
            break;
        }
        case 7: {
            if (data_ov065_022905a8->unk_2260 == 0xc) {
                func_ov065_0226989c(8);
                func_ov065_022697ec();
                return;
            }
            u32 v = m->ha;
            if (v >= 1 && v <= 0x7d7) {
                data_ov065_022905a8->unk_2282 = v;
                s32 r = WM_StartDCF((void *)func_ov065_02268fb0, data_ov065_022905a8->unk_1500, 0x620);
                if (r == 2) {
                    return;
                }
                if (r == 3) goto e3;
                if (r != 8) goto e3;
                func_ov065_0226989c(0xc);
                func_ov065_02269944(1, data_ov065_022905a8->unk_2140, 0, 0x7d7);
                return;
            e3:
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x7e0);
                return;
            }
            func_ov065_022697ec();
            return;
        }
        case 6:
            break;
        case 0: case 1: case 2: case 3: case 4: case 5:
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, data_ov065_022905a8->unk_2140, m->h8, 0x7ee);
            return;
        }
        break;
    case 1:
        data_ov065_022905a8->unk_22f8 = m->he;
    case 6:
    case 11:
    case 12:
        func_ov065_0226989c(8);
        func_ov065_022697ec();
        return;
    case 2: case 3: case 4: case 5: case 7: case 8: case 9: case 10:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x804);
        return;
    }
}

void func_ov065_02269080(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
        if (g->unk_2260 == 0xc) {
            func_ov065_0226989c(0xa);
            func_ov065_022697ec();
            return;
        }
        g->unk_2282 = 0;
        func_ov065_0226989c(3);
        func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x827);
        return;
    }
    case 1:
    case 3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    case 2:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x839);
        return;
    }
}

void func_ov065_02268fb0(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h4) {
        case 0xe:
            if (data_ov065_022905a8->unk_2260 == 0xc) {
                func_ov065_0226989c(8);
                func_ov065_022697ec();
                return;
            }
            func_ov065_0226989c(9);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x85d);
            return;
        case 0xf: {
            Unk_ov065_02268fb0_Ptr *p = *(Unk_ov065_02268fb0_Ptr **)&m->h8;
            func_ov065_0226aca8((u8)(p->he >> 8));
            DC_InvalidateRange(*(void **)&m->h8, 0x620);
            func_ov065_0226ac54(*(void **)&m->h8);
            return;
        }
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, data_ov065_022905a8->unk_2140, m->h4, 0x86b);
            return;
        }
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x877);
    }
}

void func_ov065_02268ec8(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        if (data_ov065_022905a8->unk_2260 == 0xc) {
            func_ov065_0226989c(0xa);
            func_ov065_022697ec();
            return;
        }
        s32 r = func_0211fbb4((void *)func_ov065_02269080, 0);
        if (r == 2) {
            return;
        }
        if (r == 3) goto b3;
        if (r != 8) goto b0;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2140, 0, 0x8a0);
        return;
    b3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    b0:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x8ac);
        return;
    }
    case 1:
    case 3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    case 2:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x8bf);
        return;
    }
}

}
}  // namespace N_8ec8

namespace N_8470 {
struct Unk_ov065_02268c64_Msg {
    u8 unk_00[2];
    u16 unk_02;
};

struct Unk_ov065_022905a8 {
    u8 unk_0000[0x2140];
    u8 unk_2140[0x30];
    u16 unk_2170;
    u8 unk_2172[0xee];
    u32 unk_2260;
    u32 unk_2264;
    u8 unk_2268[3];
    u8 unk_226b;
    u8 unk_226c[0x14];
    u16 unk_2280;
    u16 unk_2282;
    u8 unk_2284[0x74];
    u16 unk_22f8;
};

extern "C" {
extern Unk_ov065_022905a8 *data_ov065_022905a8;
s32 func_ov065_0226989c(s32 a);
s32 func_ov065_02269944(s32 a, void *b, u32 c, u32 d);
s32 func_ov065_02269128(void *);
s32 func_ov065_02269550(void *);
s32 func_0211fcbc(void *cb, void *buf, u32 a, u32 b, u32 c);
s32 WM_PowerOff(void *cb);

void func_ov065_02268c64(Unk_ov065_02268c64_Msg *m)
{
    if (m->unk_02 == 0) {
        data_ov065_022905a8->unk_226b = 0;
        data_ov065_022905a8->unk_2282 = 0;
        switch (data_ov065_022905a8->unk_2260) {
        case 5:
        case 6:
            func_ov065_0226989c(3);
            func_ov065_02269944(1, 0, 0, 0x8e1);
            break;
        case 7:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, 0, 0, 0x8e7);
            break;
        case 8: {
            u32 old;
            u32 w;
            u32 x;
            u32 y;
            u16 xs;
            s32 r;
            old = data_ov065_022905a8->unk_22f8;
            data_ov065_022905a8->unk_22f8 = 0;
            if (old == 0x12) {
                Unk_ov065_022905a8 *g = data_ov065_022905a8;
                if ((g->unk_2170 & 0x24) != 0x24) {
                    x = 0;
                    g->unk_2170 |= 0x24;
                    w = data_ov065_022905a8->unk_2264;
                    if ((w & 0xc0000) == 0xc0000) {
                        x = 1;
                    }
                    xs = x;
                    if ((w & 0x30000) == 0x30000) {
                        y = 0;
                    } else {
                        y = 1;
                    }
                    r = func_0211fcbc((void *)func_ov065_02269128, data_ov065_022905a8->unk_2140, 0, y, xs);
                    if (r == 2) {
                        break;
                    }
                    if (r != 3 && r == 8) {
                        func_ov065_0226989c(0xc);
                        func_ov065_02269944(1, data_ov065_022905a8->unk_2140, old, 0x905);
                    } else {
                        func_ov065_0226989c(0xb);
                        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, old, 0x90c);
                    }
                    break;
                }
            }
            func_ov065_0226989c(3);
            func_ov065_02269944(1, data_ov065_022905a8->unk_2140, old, 0x913);
            break;
        }
        case 9:
        case 12:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 1, 0x91b);
            break;
        case 10:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x922);
            break;
        case 13: {
            s32 r = WM_PowerOff((void *)func_ov065_02269550);
            if (r == 2) {
                break;
            }
            if (r != 3 && r == 8) {
                func_ov065_0226989c(0xc);
                func_ov065_02269944(1, 0, 0, 0x930);
            } else {
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, 0, 0, 0x939);
            }
            break;
        }
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, 0, data_ov065_022905a8->unk_2260, 0x93f);
            break;
        }
    } else {
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x946);
    }
}
}
}  // namespace N_8470

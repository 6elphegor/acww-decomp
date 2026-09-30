// mwcc-flags: -O4,p
#include "types.h"

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
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32);
void func_01ffd50c(void);
void func_02114594(u32, u32);
s32 func_0211fdd4(void *, void *);
s32 func_0212035c(void *);
s32 func_0211f3dc(void *, u32);
s32 func_0211f800(void);
s32 func_0211f188(void);
s32 func_0211fb68(void *);
s32 func_02120434(void *);
s32 func_02114e38(void);
void func_02114e48(void);
s32 func_021152f4(void);
void func_02115304(void);
void func_021152e4(void *);
void func_02115ef4(void *, void *, u32);
void *func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);
s32 func_021208bc(void *, void *, void *, u32);
void func_021136a0(void *);
void func_02113720(void *);
void func_02114480(void *);
void func_02114410(void *);

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

s32 func_ov065_0226a144(void *a, void *b, s32 c)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 5:
        func_ov065_022699e8(a, b, c);
        func_01ffa3d4(e);
        return 2;
    case 6:
        func_ov065_022699e8(a, b, c);
        func_01ffa3d4(e);
        return 0;
    default:
        func_01ffa3d4(e);
        return 1;
    case 3:
        break;
    }
    func_ov065_022699e8(a, b, c);
    {
        Unk_ov065_022905a8_S *t = data_ov065_022905a8;
        func_02114594(t->unk_2288, t->unk_228c);
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
        func_01ffa3d4(e);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    }
    func_01ffa3d4(e);
    return 3;
}

s32 func_ov065_0226a264(void *a, void *b, s32 c)
{
    if (a == NULL || b == NULL) {
        return func_ov065_0226a0c4(a, b, c);
    }
    return func_ov065_0226a144(a, b, c);
}

s32 func_ov065_0226a284(void)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 4:
        func_01ffa3d4(e);
        return 2;
    case 1:
        func_01ffa3d4(e);
        return 0;
    default:
        func_01ffa3d4(e);
        return 1;
    case 3:
        break;
    }
    switch (func_0212035c((void *)func_ov065_02269550)) {
    case 2:
        func_ov065_0226989c(4);
        data_ov065_022905a8->unk_2280 = 2;
        break;
    case 8:
        func_01ffa3d4(e);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    }
    func_01ffa3d4(e);
    return 3;
}

s32 func_ov065_0226a33c(void *a, void *b)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 1:
        func_ov065_02269b18(a, b);
        break;
    case 2:
        func_01ffa3d4(e);
        return 2;
    case 3:
        func_01ffa3d4(e);
        return 0;
    default:
        func_01ffa3d4(e);
        return 1;
    }
    Unk_ov065_022905a8_S *t = data_ov065_022905a8;
    switch (func_0211f3dc(t, (u16)t->unk_226c)) {
    case 3:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    case 4:
        func_01ffa3d4(e);
        return 5;
    case 1:
    case 2:
    case 5:
    case 6:
    default:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    case 0:
        break;
    }
    if (func_0211f800() == 0) {
        if (func_0211f188() != 0) {
            func_ov065_0226989c(0xb);
            func_01ffa3d4(e);
            return 7;
        }
        func_01ffa3d4(e);
        return 5;
    }
    if (func_0211fb68((void *)func_ov065_02269784) != 0) {
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    }
    switch (func_02120434((void *)func_ov065_02269550)) {
    case 2:
        func_ov065_0226989c(2);
        data_ov065_022905a8->unk_2280 = 1;
        break;
    case 8:
        func_ov065_0226989c(0xc);
        func_01ffa3d4(e);
        return 1;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(e);
        return 7;
    }
    func_01ffa3d4(e);
    return 3;
}

s32 func_ov065_0226a4c8(void)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *g = data_ov065_022905a8;
    if (g == NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    if (g->unk_2260 != 1) {
        func_01ffa3d4(e);
        return 1;
    }
    data_ov065_022905a8 = NULL;
    func_01ffa3d4(e);
    return 0;
}

s32 func_ov065_0226a510(void *a, u32 b)
{
    u32 e = func_01ffa2ec();
    if (data_ov065_022905a8 != NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    if (a == NULL) {
        func_01ffa3d4(e);
        return 1;
    }
    if (((u32)a & 0x1f) != 0) {
        func_01ffa3d4(e);
        return 1;
    }
    if (b < 0x2300) {
        func_01ffa3d4(e);
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
        func_02114e48();
    }
    if (func_021152f4() == 0) {
        func_02115304();
    }
    func_021152e4(data_ov065_022905a8->unk_22cc);
    func_01ffa3d4(e);
    return 0;
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

static inline u8 *Unk_ov065_0226a6b4_Data(Unk_ov065_0226a73c_Node *n)
{
    return n->unk_10;
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

Unk_ov065_0226a73c_Node *func_ov065_0226a70c(void)
{
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        return list->unk_04;
    }
    return NULL;
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
                    func_02115ef4(a, n->unk_10, 0xc0);
                    func_ov065_0226a5f8(n);
                }
            }
        }
    }
}

void *func_ov065_0226a828(u32 id)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        func_01ffa3d4(e);
        return NULL;
    }
    Unk_ov065_0226a73c_Node *n = func_ov065_0226a678(id);
    if (n == NULL) {
        func_01ffa3d4(e);
        return NULL;
    }
    func_01ffa3d4(e);
    return n->unk_10;
}

BOOL func_ov065_0226a87c(BOOL a)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        func_01ffa3d4(e);
        return FALSE;
    }
    if (a != 0) {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 1;
    } else {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 0;
    }
    func_01ffa3d4(e);
    return a;
}

u32 func_ov065_0226a8e4(void)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    u32 r = 0;
    if (s == NULL) {
        func_01ffa3d4(e);
        return r;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        r = list->unk_00;
    }
    func_01ffa3d4(e);
    return r;
}

void func_ov065_0226a934(void)
{
    u32 e = func_01ffa2ec();
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        func_01ffa3d4(e);
        return;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && (s32)s->unk_2274 > 0) {
        func_02115fb4(list, 0, s->unk_2274);
    }
    func_01ffa3d4(e);
}

void func_ov065_0226a97c(Unk_ov065_0226a97c_Mutex *m)
{
    if (m->unk_08 == (void *)func_01ffd50c) {
        m->unk_0c = m->unk_0c - 1;
        if (m->unk_0c == 0) {
            m->unk_08 = NULL;
            func_021136a0(m);
        }
    }
}

BOOL func_ov065_0226a9a8(Unk_ov065_0226a97c_Mutex *m)
{
    void *o = m->unk_08;
    if (o == NULL) {
        m->unk_08 = (void *)func_01ffd50c;
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    if (o == (void *)func_01ffd50c) {
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226a9d4(void)
{
    func_ov065_0226a97c(&data_ov065_022905b8);
}

void func_ov065_0226a9e4(Unk_ov065_0226a9e4_Msg *p)
{
    if (p->unk_00 == 0x12) {
        data_ov065_022905ac.unk_24 = p->unk_02;
        if (p->unk_02 == 0) {
            func_ov065_02269848();
        }
        func_021136a0(data_ov065_022905b0);
    }
}

s32 func_ov065_0226aa14(u32 a, void *b, u32 c)
{
    u32 e = func_01ffa2ec();
    if (func_ov065_02269bd0() == NULL) {
        func_01ffa3d4(e);
        return -1;
    }
    func_02114480(&data_ov065_022905b8);
    Unk_ov065_022905a8_S *s = func_ov065_02269bd0();
    if (s == NULL) {
        func_02114410(&data_ov065_022905b8);
        func_01ffa3d4(e);
        return -1;
    }
    if (s->unk_2260 != 9 || s->unk_226b == 1) {
        func_02114410(&data_ov065_022905b8);
        func_01ffa3d4(e);
        return -4;
    }
    func_02116048(b, (u8 *)s + 0xf00, c);
    switch (func_021208bc((void *)func_ov065_0226a9e4, (void *)a, (u8 *)s + 0xf00, (u16)c)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        func_02114410(&data_ov065_022905b8);
        func_01ffa3d4(e);
        return -5;
    case 2:
        break;
    }
    func_02113720(data_ov065_022905b0);
    switch (data_ov065_022905ac.unk_24) {
    case 1:
    default:
        func_02114410(&data_ov065_022905b8);
        func_01ffa3d4(e);
        return -5;
    case 0:
        func_02114410(&data_ov065_022905b8);
        func_01ffa3d4(e);
        return c;
    }
}

}

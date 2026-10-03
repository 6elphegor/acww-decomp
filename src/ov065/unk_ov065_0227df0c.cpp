// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)

struct Unk_ov065_0227d8e0_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227d8e0_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e0e8_Wrap {
    Unk_ov065_0227d8e0_Pair unk_00;
};

struct Unk_ov065_0227d8e0_Node {
    void (*unk_00)(void *, void *, s32);
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    void *unk_10;
    Unk_ov065_0227d8e0_Node *unk_14;
};

struct Unk_ov065_0227d8e0_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227e0e8_Wrap unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    u8 pad_1e0[0x1ec - 0x1e0];
    char *unk_1ec;
    u8 pad_1f0[4];
    Unk_ov065_0227d8e0_Buf unk_1f4;
    s32 unk_204;
    u8 pad_208[0x418 - 0x208];
    s32 unk_418;
    s32 unk_41c;
    u8 pad_420[4];
    void *unk_424;
    u8 pad_428[0x434 - 0x428];
    void *unk_434;
    Unk_ov065_0227d8e0_Node *unk_438;
    Unk_ov065_0227d8e0_Node *unk_43c;
    void *unk_440;
    u8 pad_444[0x450 - 0x444];
    void *unk_450;
};

struct Unk_ov065_0227d8e0_Handle {
    Unk_ov065_0227d8e0_Ctx *unk_00;
};

struct Unk_ov065_0227d8e0_Arg {
    u8 pad_00[0x10];
    char *unk_10;
};

struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf unk_28;
    s32 unk_38;
};

struct Unk_ov065_0227dfd8_D3 {
    u8 pad_00[0x38];
    s32 unk_38;
    s32 *unk_3c;
    s32 *unk_40;
};

struct Unk_ov065_0227dfd8_D4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227dfd8_D9 {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
};

struct Unk_ov065_0227e0e8_G {
    u8 pad_00[0x18];
    void *unk_18;
};

struct Unk_ov065_0227e160_Cb {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
};

typedef Unk_ov065_0227d8e0_Handle Unk_H;
typedef Unk_ov065_0227d8e0_Ctx Unk_C;
typedef Unk_ov065_0227d8e0_Buf Unk_B;
typedef Unk_ov065_0227d8e0_Node Unk_N;
extern "C" {
char *func_0212a120(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
u32 STD_GetStringLength(const char *);
void func_021289b4(void *, void *, s32);
void func_02128a00(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
void func_ov065_02283720(void *, const char *, ...);
void *func_ov065_02277ad8(void *, s32);
void *func_ov065_02277af0(s32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_02278ce0(s32, void *, s32, s32);
s32 func_ov065_02278ca0(s32, void *, s32, s32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_02278684(s32);
s32 func_ov065_02278da4(s32, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_0228090c(void *, void *);
s32 func_ov065_022810fc(void *, void *);
s32 func_ov065_022817c8(void *, s32, s32);
s32 func_ov065_0227e350(void);

s32 func_ov065_0227dd38(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 func_ov065_0227dde8(Unk_H *, Unk_B *, s32);
s32 func_ov065_0227de10(Unk_H *, Unk_B *, const char *);
s32 func_ov065_0227de30(Unk_H *, Unk_B *, const char *, s32);
s32 func_ov065_0227deb4(Unk_H *, Unk_B *, char);
s32 func_ov065_0227dc48(Unk_H *, Unk_ov065_0227dc48_Conn *, const char *, s32);
s32 func_ov065_0227da7c(Unk_H *, s32, Unk_B *, s32 *, s32, const char *);
s32 func_ov065_0227dfd8(Unk_H *, Unk_N *);
s32 func_ov065_0227e0e8(Unk_H *, Unk_ov065_0227e0e8_Wrap, Unk_N *, Unk_ov065_0227e0e8_G *, s32);
void func_ov065_0227e160(Unk_H *, s32, s32);
}

extern "C" {
s32 func_ov065_0227e0e8(Unk_H *h, Unk_ov065_0227e0e8_Wrap p, Unk_N *m, Unk_ov065_0227e0e8_G *g, s32 k) {
    Unk_C *ctx = h->unk_00;
    Unk_N *node = (Unk_N *)func_ov065_02277af0(0x18);
    if (node == NULL) {
        func_ov065_02283460(h, "Out of memory.");
        return 1;
    }
    *(Unk_ov065_0227e0e8_Wrap *)node = p;
    node->unk_08 = m;
    if (g != NULL) {
        node->unk_10 = g->unk_18;
    } else {
        node->unk_10 = NULL;
    }
    node->unk_0c = k;
    node->unk_14 = NULL;
    if (ctx->unk_438 == NULL) {
        ctx->unk_438 = node;
    }
    if (ctx->unk_43c != NULL) {
        ctx->unk_43c->unk_14 = node;
    }
    ctx->unk_43c = node;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227dfd8(Unk_H *h, Unk_N *n) {
    s32 i;
    s32 k;
    n->unk_00(h, n->unk_08, n->unk_04);
    k = n->unk_0c;
    if (k == 2) {
        func_ov065_02277ac8((void *)((Unk_ov065_0227dfd8_D4 *)n->unk_08)->unk_08);
        ((Unk_ov065_0227dfd8_D4 *)n->unk_08)->unk_08 = 0;
    } else if (k == 3) {
        Unk_ov065_0227dfd8_D3 *d = (Unk_ov065_0227dfd8_D3 *)n->unk_08;
        for (i = 0; i < d->unk_38; i++) {
            func_ov065_02277ac8((void *)d->unk_3c[i]);
            d->unk_3c[i] = 0;
            func_ov065_02277ac8((void *)d->unk_40[i]);
            d->unk_40[i] = 0;
        }
        func_ov065_02277ac8(d->unk_3c);
        d->unk_3c = NULL;
        func_ov065_02277ac8(d->unk_40);
        d->unk_40 = NULL;
    } else if (k == 4) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->unk_08;
        func_ov065_02277ac8((void *)d->unk_0c);
        d->unk_0c = 0;
    } else if (k == 7) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->unk_08;
        if (d->unk_10 != 0) {
            func_ov065_02277ac8((void *)d->unk_10);
            d->unk_10 = 0;
        }
    } else if (k == 8) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->unk_08;
        if (d->unk_08 != 0) {
            func_ov065_02277ac8((void *)d->unk_08);
            d->unk_08 = 0;
        }
    } else if (k == 9) {
        Unk_ov065_0227dfd8_D9 *d = (Unk_ov065_0227dfd8_D9 *)n->unk_08;
        for (i = 0; i < d->unk_04; i++) {
            func_ov065_02277ac8((void *)d->unk_08[i]);
            d->unk_08[i] = 0;
        }
        func_ov065_02277ac8(d->unk_08);
        d->unk_08 = NULL;
    }
    func_ov065_02277ac8(n->unk_08);
    n->unk_08 = NULL;
    func_ov065_02277ac8(n);
}
}

extern "C" {
s32 func_ov065_0227df0c(Unk_H *h, void *key) {
    Unk_C *ctx = h->unk_00;
    Unk_N *head;
    Unk_N *tail;
    Unk_N *prev;
    Unk_N *node;
    Unk_N *next;
    if (key != NULL) {
        head = ctx->unk_438;
        tail = ctx->unk_43c;
        prev = NULL;
        ctx->unk_438 = NULL;
        ctx->unk_43c = NULL;
        node = head;
        if (node != NULL) {
            do {
                next = node->unk_14;
                if (node->unk_10 == key || node->unk_0c == 1) {
                    if (prev != NULL) {
                        prev->unk_14 = next;
                    } else {
                        head = next;
                    }
                    if (tail == node) {
                        tail = prev;
                    }
                    func_ov065_0227dfd8(h, node);
                } else {
                    prev = node;
                }
                node = next;
            } while (node != NULL);
        }
        if (ctx->unk_438 != NULL) {
            ctx->unk_43c->unk_14 = head;
            ctx->unk_43c = tail;
        } else {
            ctx->unk_438 = head;
            ctx->unk_43c = tail;
        }
        return 0;
    }
    node = ctx->unk_438;
    if (node != NULL) {
        do {
            ctx->unk_438 = NULL;
            ctx->unk_43c = NULL;
            if (node != NULL) {
                do {
                    next = node->unk_14;
                    func_ov065_0227dfd8(h, node);
                    node = next;
                } while (node != NULL);
            }
            node = ctx->unk_438;
        } while (node != NULL);
    }
    return 0;
}
}

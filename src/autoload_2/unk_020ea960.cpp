// mwcc-flags: -nothumb -O4,p
// G003a: network file (WFC / GameSpy stats glue, overlays 65/66/67), autoload_2 0x020ea960-0x020ec848 (64 functions).
// mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, no vtable, everything extern.
// Continues G002c (0x020ea34c-0x020ea960); the file ends at 0x020ec848 (tail-call stubs from there on are another file).
#include "types.h"

extern "C" {
void func_02115fb4(void *dst, u32 v, u32 n); // MI_CpuFill8
void func_02116048(const void *src, void *dst, u32 n); // MI_CpuCopy8
u64 func_01ffa6b4(void); // OS_GetTick
BOOL func_02114050(void *p, void *q, u32 v);
s64 _ll_sdiv(s64 a, s64 b);

s32 func_ov066_0225ffcc(void);
u32 func_ov066_022622f4(void);
s32 func_ov066_022601a0(u32 a);
s32 func_ov066_0226233c(void);
s32 func_ov066_0226238c(void);
u32 func_ov065_02270584(u8 **p);
u32 func_ov065_022705d0(void);
BOOL func_ov065_022778a4(u32 a);
u32 func_ov065_02270558(void);
s32 func_ov065_02272254(u8 *a, u32 b);
u32 func_ov066_02260a3c(void);
BOOL func_ov066_02263284(u32 a, u32 b, u32 c);
s32 func_ov065_022705e8(void);
BOOL func_ov065_02277714(u32 a, u32 b, u32 c);
u32 func_ov065_02277bb8(void);
u32 func_ov066_0225f6a8(void);
void func_ov066_02261158(void);
s32 func_ov065_0227067c(void);
void func_ov065_022780c0(void);
void func_ov065_02270ba4(void);
BOOL func_ov065_02277bdc(void);
void func_ov066_0225fc78(u32 a, u32 b, u32 c);
void func_ov066_022642cc(void);
BOOL func_ov066_0225fdc4(void);

BOOL func_020eaca0(void);
BOOL func_020ead08(void);
BOOL func_020ead70(u32 a);
BOOL func_020eb650(void);
BOOL func_020ec70c(void);
void func_020ec60c(void);
BOOL func_020ec454(u32 a, u32 b, u16 c, u32 d);
s32 func_020eaee4(void);
s32 func_020eaec8(void);
u32 func_020ea748(void);
void func_020ec82c(void);
void func_020ec7e4(void *p);
u32 func_020eb164(void);
u32 func_020eb12c(void);
BOOL func_020eb2dc(void);
BOOL func_020eb578(void);
BOOL func_020eb278(void);

extern u8 data_021f4890;
extern u8 data_021f4900[];
extern u8 data_021f4930[];
extern u32 data_021f48b0;
extern u32 data_0213b060;
extern u8 *data_021f48d4;
extern u16 data_021f4894;
extern u16 data_021f4898;
extern u32 data_021f48ec;
extern u32 data_0213b06c;
extern u32 data_021f48e0;
extern void *data_021f48c0;
extern void *data_021f48b4;
extern void *data_021f48c4;
extern char *data_021f48dc;
extern u8 *data_021f48a4;
}

static inline BOOL timedout48ec(void) {
    s64 ms = _ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
    u64 diff = ms - (s64)data_021f48ec;
    BOOL over = diff > (u64)data_0213b060;
    return over;
}

typedef void (*NetCb)(u32);
typedef void (*NetCb3)(u32, u32, u32);
typedef void *(*AllocFn)(u32, u32);
typedef void (*FreeFn)(void *);
struct Ent {
    u16 a;
    u8 b;
    u8 c;
};
struct NetInit {
    u32 w;
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
};
extern "C" {
void func_ov065_02277e1c(void *p);
void func_ov065_02277dd4(u32 a);
void func_ov065_02277d68(void);
BOOL func_ov065_02277d30(void);
s32 func_ov065_02277c68(void);
void func_ov065_022780d0(void *p);
void func_ov065_02270c94(void *a, void *b, u32 c, void *d, void *e, u32 f, u32 g, void *h, u32 i);
void func_ov065_02270958(u32 a, u32 b, void *c, u32 d);
void func_ov065_02277680(u32 a);
void func_ov065_022776a0(void *p);
void func_ov065_02277ba4(void *a, void *b);
void func_ov065_02277cdc(void);
void func_ov065_022709c0(void);
void func_ov065_022780b0(void);
void func_ov066_0225fe4c(u32 a, void *b, void *c, u32 d);
void func_ov066_0225f1a0(void *p);
void func_ov066_02264378(void *p);
void func_ov066_022609a8(void *p);
void func_021142dc(void *a, void *b, u32 n);
void func_020ebd04(void);
void func_020ebd54(void);
void func_020ebc3c(void);
void *func_020ec7d0(u32 a, u32 b, u32 c);
void func_020ec7c0(u32 a, void *b);
void *func_020ec808(u32 a, u32 b);
void func_020ec400(u8 *p);
void func_020ec3dc(u32 a, u32 b, u32 c);
u32 func_020eaf28(void);
BOOL func_020eb898(void);
BOOL func_020eb6b0(void);
extern u8 data_021f48f4[];
extern u8 data_0213b0ec[];
extern u8 data_0213b0f8[];
extern u8 data_021f4bc0[];
extern u8 *data_021f48d8;
extern u32 data_0213b064;
extern u32 data_0213b068;
extern NetCb3 data_021f48d0;
extern NetCb data_021f48c8;
extern Ent data_021f4990[];

extern u32 data_021f48e4;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
extern u32 data_021f48cc;
extern u32 data_021f48b8;
extern u8 data_021f488c;
extern u8 data_0213b05c;
extern u32 data_021f489c;
extern AllocFn data_021f48a0;
extern FreeFn data_021f48f0;
extern u8 data_021f4950[];
}
struct HexPair {
    u8 hi;
    u8 lo;
};
struct HexTable {
    u8 c[17];
};
extern "C" {
BOOL func_ov065_02277038(void);
void func_ov065_0227702c(void);
void func_ov065_02277054(u32 a, u32 *b);
BOOL func_ov065_0227051c(u32 a);
void func_ov065_022776dc(u32 a);
void func_ov065_02277f70(void *a, void *b, void *c);
void func_ov065_0226f9e0(u32 a, u32 b, u32 c, u32 d);
void func_ov065_022721ec(void *p, u32 n);
void func_ov065_0227089c(u32 a, void *b, u32 c, void *d, u32 e, void *f, u32 g);
u32 func_ov065_02272290(u8 *a, u8 *b, u8 *c, u8 *d, u32 *e);
BOOL func_020ffde0(void *p);
char *func_02127838(char *dst, const char *src);
char *func_021277a4(char *dst, const char *src);
u32 func_021277d4(const char *s);
void *func_02127460(void *dst, const void *src, u32 n);
void func_02113088(char *dst, u32 len, const char *fmt, ...);
s64 func_020ea3c4(void *p);
void func_020ec038(void *a, void *b, u32 c, void *d);
void func_020ec088(void *a, void *b, u32 c, u32 d);
void func_020ec158(u32 a);
void func_020ec1e4(u32 a);
void func_020ec258(u32 a);
void func_020ebe5c(u32 a, u32 i);
void func_020ec0ec(u32 a, u32 b, u32 c);
extern u8 data_0213b058;
extern u8 data_0213b0b0[];
extern HexTable data_0213b070;
extern u8 data_0213b100[];
extern u32 data_021f48e8;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
}
struct NetSlot {
    u32 a;
    u32 b;
    u16 c;
    NetCb d;
};
extern "C" {
BOOL func_02114188(void *q, void *msg, u32 flags);
BOOL func_02114234(void *q, u32 msg, u32 flags);
s32 func_ov066_022622ac(u32 a, u32 b, u32 c, void *d);
BOOL func_ov065_02277824(u32 a, u32 b, u32 c);
void func_0206d760(void);
void func_020ebb00(void);
void func_020ec668(u32 a);
BOOL func_020ec54c(u32 a, u32 b, u32 c, u32 d);
BOOL func_020ec4b4(u32 a, u32 b, u32 c, u32 d);
BOOL func_020ec58c(u32 a, u32 b, u32 c, u32 d);
extern NetSlot data_021f4ac0[];
}

extern "C" void func_020ec82c(void) {
    func_020ebb00();
    func_0206d760();
}

extern "C" void *func_020ec808(u32 a, u32 b) {
    return data_021f48a0(a, b);
}

extern "C" void func_020ec7e4(void *p) {
    data_021f48f0(p);
}

extern "C" void *func_020ec7d0(u32 a, u32 b, u32 c) {
    return func_020ec808(b, c);
}

extern "C" void func_020ec7c0(u32 a, void *b) {
    func_020ec7e4(b);
}

extern "C" BOOL func_020ec70c(void) {
    u32 msg;
    NetSlot *s;
    u32 st;
    if (func_02114050(data_021f4930, &msg, 0) != 0) {
        s = &data_021f4ac0[msg];
        st = data_021f4890;
        if ((u8)(st + 255) <= 1) return func_ov066_022622ac(s->a, s->b, s->c, (void *)func_020ec668);
        if ((u8)(st + 253) <= 1) return func_ov065_02277824((u8)s->c, s->a, s->b);
    }
    return FALSE;
}

extern "C" void func_020ec668(u32 a) {
    u32 msg[2];
    NetSlot *s;
    if (func_02114188(data_021f4930, msg, 0) == 0) return;
    s = &data_021f4ac0[msg[0]];
    if (s->d != NULL) s->d(a);
    s->a = 0;
    while (func_02114050(data_021f4930, msg, 0) != 0 && func_020ec70c() == 0) {
        func_020ec82c();
    }
}

extern "C" void func_020ec60c(void) {
    u32 msg[2];
    u32 i;
    while (func_02114188(data_021f4930, msg, 0) != 0) {
    }
    for (i = 0; i < 16; i++) {
        data_021f4ac0[i].a = 0;
    }
}

extern "C" BOOL func_020ec58c(u32 a, u32 b, u32 c, u32 d) {
    u32 i; BOOL r;
    i = r = 0;
    for (; i < 16; i++) {
        if (data_021f4ac0[i].a == 0) {
            data_021f4ac0[i].a = a;
            data_021f4ac0[i].b = b;
            data_021f4ac0[i].c = c;
            data_021f4ac0[i].d = (NetCb)d;
            func_02114234(data_021f4930, i, 0);
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" BOOL func_020ec54c(u32 a, u32 b, u32 c, u32 d) {
    if (a != 0 && b != 0 && c != 0) return func_020ec58c(a, b, c, d);
    return FALSE;
}

extern "C" BOOL func_020ec4b4(u32 a, u32 b, u32 c, u32 d) {
    u32 i;
    if (a != 0 && b != 0 && c != 0) {
        for (i = 0; i < 16; i++) {
            if ((c & (1 << i)) != 0) {
                if (func_020ec58c(a, b, (u16)i, d) == 0) return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020ec454(u32 a, u32 b, u16 c, u32 d) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_020ec54c(a, b, c, d);
    if ((u8)(st + 253) > 1) return FALSE;
    return func_020ec4b4(a, b, c, d);
}

extern "C" void func_020ec400(u8 *p) {
    switch (p[0]) {
    case 0:
        data_021f4900[p[1]] = 1;
        break;
    case 1:
        data_021f4900[p[1]] = 0;
        break;
    case 2:
        data_021f4900[0] = 0xff;
        break;
    }
}

extern "C" void func_020ec3dc(u32 a, u32 b, u32 c) {
    data_021f48d0(a, b, c);
}

extern "C" void func_020ec3c4(u32 a) {
    if (a == 0) data_0213b06c = 0;
}

extern "C" void func_020ec3c0(void) {
}

extern "C" void func_020ec3a4(u32 a, u32 b) {
    data_021f4990[b].b = 0;
    func_020ec668(a);
}

extern "C" void func_020ec370(u32 a, u32 b, u32 c) {
    data_021f4990[a].b = 0;
    data_021f48d0(a, b, c);
}

extern "C" void func_020ec310(u32 a, u32 b) {
    if (a != 0) return;
    if (b != 0) return;
    data_021f48cc = (u32)_ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
}

extern "C" void func_020ec30c(void) {
}

extern "C" void func_020ec258(u32 a) {
    u32 local;
    u32 i; u32 u; u32 t; 
    if (a != 0) return;
    data_0213b06c = 0;
    t = u = i = 0;
    for (; i < 32; i++) {
        if (func_020ffde0(data_021f48d4 + u) != 0) {
            u8 *p = data_021f48d4;
            u32 r = func_ov065_02272290(p + u, p + 0x191 + t, p + 0x192 + t, p + 0x180 + t, &local);
            (data_021f48d4 + t)[0x190] = r;
        }
        u += 12;
        t += 19;
    }
}

extern "C" void func_020ec1e4(u32 a) {
    u32 local;
    u8 *base = data_021f48d4;
    u32 t = a * 19;
    u32 r = func_ov065_02272290(base + a * 12, base + 0x191 + t, base + 0x192 + t, base + 0x180 + t, &local);
    (data_021f48d4 + t)[0x190] = r;
}

extern "C" void func_020ec158(u32 a) {
    u32 t;
    func_02115fb4(data_021f48d4 + a * 12, 0, 12);
    t = a * 19;
    func_02115fb4(data_021f48d4 + 0x180 + t, 0, 19);
    (data_021f48d4 + t)[0x190] = 0;
    if (data_021f48c8 != NULL) data_021f48c8(a);
}

extern "C" void func_020ec0ec(u32 a, u32 b, u32 c) {
    if (a != 0) return;
    func_ov065_022721ec(data_021f48d8, 16);
    func_ov065_0227089c(0, (void *)func_020ec258, c, (void *)func_020ec1e4, c, (void *)func_020ec158, c);
}

extern "C" void func_020ec0d8(void) {
    data_0213b064 = 1;
}

extern "C" void func_020ec088(void *a, void *b, u32 c, u32 d) {
    if (a != NULL && b != NULL && c == 0) {
        func_ov065_0226f9e0((u32)a, (u32)b, d, data_021f48ac);
    }
    data_0213b068 = 1;
}

extern "C" void func_020ec038(void *a, void *b, u32 c, void *d) {
    if (a != NULL && b != NULL && c == 0) {
        func_02116048(a, d, data_021f48ac);
    }
    data_0213b068 = 1;
}

extern "C" void func_020ebeac(const char *a, u32 b, u32 c, char *d) {
    u32 i;
    if (a != NULL && b != 0 && c == 0) {
        func_02127838(d, (const char *)data_0213b0b0);
        func_021277a4(d, a);
        func_02127460(data_021f48a4 + 20, d, b + func_021277d4((const char *)data_0213b0b0));
        HexTable hex = data_0213b070;
        u8 *src = data_021f48a4 + 20;
        for (i = 0; i < 20; i++) {
            ((HexPair *)data_021f48a4)[i].hi = hex.c[src[i] >> 4];
            ((HexPair *)data_021f48a4)[i].lo = hex.c[src[i] & 15];
        }
        data_021f48a4[40] = 0;
        func_02113088(data_021f48dc, 0x100, (const char *)data_0213b100, data_021f48e4, func_020ea3c4(data_021f48d8 + 16), data_021f48a4, data_021f48a8);
        func_ov065_02277f70(data_021f48dc, (void *)func_020ec088, d);
    } else {
        data_0213b068 = 1;
    }
}

extern "C" void func_020ebe94(u32 a) {
    if (a == 0) data_021f48e0 = 1;
}

extern "C" void func_020ebe80(void) {
    data_021f48e8 = 1;
}

extern "C" void func_020ebe5c(u32 a, u32 i) {
    data_021f4990[i].a = a;
    data_021f4990[i].b = 0;
}

extern "C" void func_020ebd54(void) {
    s64 ms;
    u8 v;
    if (data_021f4894 < 5) return;
    ms = _ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
    ms = _ll_sdiv(ms, 250);
    v = (u8)(ms % data_021f488c);
    if (data_0213b058 == v) return;
    data_0213b058 = v;
    if (v != func_ov065_022705d0()) {
        if (func_ov065_0227051c(v) != 0) {
            data_021f4990[v].b++;
            func_ov065_022776dc(v);
        } else {
            data_021f4990[v].a = 0xffff;
            data_021f4990[v].b = 0;
        }
    } else {
        data_021f4990[v].a = 0;
        data_021f4990[v].b = 0;
    }
}

extern "C" void func_020ebd04(void) {
    u32 v;
    data_021f48cc = 0;
    if (data_021f4890 != 3) return;
    v = 1;
    func_ov065_02277054(1, &v);
}

extern "C" void func_020ebc3c(void) {
    if (data_021f4890 != 3) return;
    if (func_ov065_02277038() == 0) return;
    if (data_021f48cc == 0) return;
    {
        s64 ms = _ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
        u64 diff = ms - (s64)data_021f48cc;
        BOOL over = diff > (u64)120000;
        if (!over) return;
    }
    data_021f48cc = 0;
    func_ov065_0227702c();
}

extern "C" void func_020ebc38(void) {
}

extern "C" void func_020ebc34(void) {
}

extern "C" void func_020ebb6c(u32 a, u32 b, u32 c, u64 d, u8 e, AllocFn f, FreeFn g) {
    data_021f4890 = 0;
    data_021f489c = a;
    data_021f48b8 = b;
    data_0213b05c = c;
    data_0213b060 = (u32)_ll_sdiv((s64)(d << 6), 33514);
    data_021f488c = e;
    data_021f48a0 = f;
    data_021f48f0 = g;
    func_021142dc(data_021f4930, data_021f4950, 16);
    func_02115fb4(data_021f4ac0, 0, 256);
}

extern "C" void func_020ebb00(void) {
    if ((u8)(data_021f4890 + 253) > 1) return;
    if (data_021f4894 == 1) {
        func_ov065_02277cdc();
        return;
    }
    func_ov065_022709c0();
    func_ov065_022780b0();
    func_020ebd54();
    func_020ebc3c();
}

extern "C" void func_020eb9fc(u32 a, NetCb3 b) {
    NetInit init;
    data_021f48d0 = b;
    data_021f4890 = a;
    func_02115fb4(data_021f4900, 0, 16);
    init.w = data_021f48b8;
    init.b4 = data_021f488c;
    init.b6 = 60;
    init.b7 = 2;
    init.b5 = 8;
    func_ov066_0225fe4c(data_0213b05c, (void *)func_020ec808, (void *)func_020ec7e4, 0);
    func_ov066_0225f1a0((void *)func_020ec400);
    func_ov066_02264378(&init);
    func_ov066_022609a8((void *)func_020ec3dc);
    if (a == 1) {
        func_ov066_0225fc78(3, 0, 0);
    } else if (a == 2) {
        func_ov066_0225fc78(4, 0, 0);
    }
}

extern "C" void func_020eb8c0(u32 a, NetCb3 b, NetCb c, u8 *d, u8 *e) {
    u32 i;
    u32 t;
    data_021f4890 = a;
    data_021f48d0 = b;
    data_021f48d8 = d;
    data_021f48c8 = c;
    data_021f48d4 = e;
    data_021f4894 = 0;
    data_021f4898 = 0;
    data_0213b064 = 0;
    data_0213b068 = 1;
    data_021f48b4 = NULL;
    data_021f48c4 = NULL;
    data_021f48dc = NULL;
    data_021f48e4 = 0;
    data_021f48ac = 0;
    data_021f48a8 = 0;
    data_021f48a4 = NULL;
    data_021f48cc = 0;
    func_02115fb4(data_021f4990, 0, 64);
    t = i = 0;
    for (; i < 32; i++) {
        (data_021f48d4 + t)[0x190] = 0;
        t += 19;
    }
    func_ov065_02277ba4((void *)func_020ec7d0, (void *)func_020ec7c0);
}

extern "C" BOOL func_020eb898(void) {
    return (u32)(func_ov066_0225ffcc() - 10) <= 1;
}

extern "C" BOOL func_020eb6b0(void) {
    switch (data_021f4894) {
    case 0:
        func_ov065_02277e1c(data_021f48f4);
        func_ov065_02277dd4(2);
        func_ov065_02277d68();
        data_021f4894 = 1;
        break;
    case 1:
        if (func_ov065_02277d30() != 0) {
            if (func_ov065_02277c68() == 4) data_021f4894 = 2;
        }
        break;
    case 2:
        func_ov065_022780d0(data_0213b0ec);
        data_0213b064 = 1;
        data_0213b06c = 1;
        func_ov065_02270c94(data_021f4bc0, data_021f48d8 + 16, 0x299e, data_0213b0ec, data_0213b0f8, 0, 0, data_021f48d4, 32);
        func_ov065_02270958(0, 0, (void *)func_020ec0ec, 0);
        data_021f4894 = 3;
        break;
    case 3:
        if (data_0213b06c == 0) {
            data_0213b06c = 1;
            data_021f4894 = 4;
        }
        break;
    case 4:
        if (data_021f4890 == 3) data_0213b06c = 0;
        if (data_0213b06c == 0) {
            func_ov065_02277680(0x100);
            func_ov065_022776a0((void *)func_020ebe5c);
            func_020ebd04();
            data_021f4894 = 5;
        }
        break;
    case 5:
        if (data_021f4890 == 4) {
            if ((func_020eaf28() & 1) == 0) return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020eb650(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_020eb898();
    if ((u8)(st + 253) > 1) return FALSE;
    return func_020eb6b0();
}

extern "C" BOOL func_020eb578(void) {
    u32 start;
    func_ov066_0225fc78(0, 0, 0);
    start = (u32)_ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
    while (func_ov066_0225ffcc() != 2) {
        s64 ms = _ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
        u64 diff = ms - (s64)start;
        BOOL over = diff > (u64)data_0213b060;
        if (over != 0) return FALSE;
    }
    func_ov066_022642cc();
    if (func_ov066_0225fdc4() == 0) return FALSE;
    data_021f4890 = 6;
    return TRUE;
}

extern "C" BOOL func_020eb2dc(void) {
    switch (data_021f4898) {
    case 0:
        data_021f48ec = (u32)_ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
        data_021f4898 = 1;
        break;
    case 1:
        if (data_0213b06c == 0 || data_021f4894 == 4 || timedout48ec()) {
            func_020ea748();
            if (func_ov065_0227067c() < 0) {
                data_021f48ec = 0;
            } else {
                data_021f48ec = (u32)_ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
            }
            data_021f4898 = 2;
        }
        break;
    case 2:
        if (func_ov065_022705e8() < 2) {
            data_021f4898 = 3;
        } else if (timedout48ec()) {
            data_021f4898 = 3;
        }
        break;
    case 3:
        func_ov065_022780c0();
        data_021f4898 = 4;
        break;
    case 4:
        func_ov065_02270ba4();
        data_021f4898 = 5;
        break;
    case 5:
        if (func_ov065_02277bdc() != 0) data_021f4898 = 6;
        break;
    case 6:
        if (data_021f48b4 != NULL) {
            func_020ec7e4(data_021f48b4);
            func_020ec7e4(data_021f48c4);
            data_021f48b4 = NULL;
            data_021f48c4 = NULL;
        }
        if (data_021f48dc != NULL) {
            func_020ec7e4(data_021f48dc);
            func_020ec7e4(data_021f48a4);
            data_021f48dc = NULL;
            data_021f48a4 = NULL;
        }
        data_021f4898 = 7;
        break;
    case 7:
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020eb278(void) {
    func_ov066_02261158();
    while (data_021f48e0 == 0) {
        func_020ec82c();
    }
    func_020ec7e4(data_021f48c0);
    data_021f48c0 = NULL;
    data_021f4890 = 6;
    return TRUE;
}

extern "C" BOOL func_020eb1d8(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_020eb578();
    if (st == 3 || st == 4) {
        while (func_020eb2dc() == 0) {
            func_020ec82c();
        }
        data_021f4890 = 6;
        return TRUE;
    }
    if (st != 5) return FALSE;
    return func_020eb278();
}

extern "C" BOOL func_020eb1cc(void) {
    return func_020eb2dc();
}

extern "C" u32 func_020eb164(void) {
    switch (func_ov066_0225f6a8()) {
    case 0:
        break;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    }
    return 0;
}

extern "C" u32 func_020eb12c(void) {
    if (data_021f4894 <= 1) return 0;
    return func_ov065_02277bb8();
}

extern "C" BOOL func_020eb0cc(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_020eb164();
    if ((u8)(st + 253) > 1) return FALSE;
    return func_020eb12c();
}

extern "C" BOOL func_020eb068(u32 a, u32 b, u32 c) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_ov066_02263284(a, b, c);
    if ((u8)(st + 253) > 1) return FALSE;
    return func_ov065_02277714((u8)a, b, c);
}

extern "C" u32 func_020eb004(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_ov066_02260a3c();
    if ((u8)(st + 253) > 1) return TRUE;
    return (u8)func_ov065_022705e8();
}

extern "C" u32 func_020eaf90(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) {
        if (st == 1) return FALSE;
        return func_ov066_0226238c();
    }
    if ((u8)(st + 253) > 1) return FALSE;
    return func_ov065_022705d0();
}

extern "C" u32 func_020eaf28(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) return func_ov066_0226233c();
    if ((u8)(st + 253) > 1) return TRUE;
    return (u16)func_ov065_02270558();
}

extern "C" u32 func_020eaf18(void) {
    return data_021f4890;
}

extern "C" s32 func_020eaee4(void) {
    if (func_ov066_0225ffcc() != 7) return -1;
    return func_ov066_022601a0(0);
}

extern "C" s32 func_020eaec8(void) {
    return func_ov065_02272254(data_021f48d4, 32);
}

extern "C" s32 func_020eae78(void) {
    u32 st = data_021f4890;
    if (st == 2) return func_020eaee4();
    if (st != 4) return -1;
    return func_020eaec8();
}

extern "C" BOOL func_020ead70(u32 a) {
    u32 tmp;
    if (a != 0) {
        if (func_02114050(data_021f4930, &tmp, 0) != 0) {
            if (data_021f48b0 != 0) {
                s64 ms = _ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
                u64 diff = ms - (s64)data_021f48b0;
                BOOL over = diff > (u64)data_0213b060;
                if (over) {
                    data_021f48b0 = 0;
                    func_020ec70c();
                }
            } else {
                data_021f48b0 = (u32)_ll_sdiv((s64)(func_01ffa6b4() << 6), 33514);
            }
        } else {
            data_021f48b0 = 0;
            return TRUE;
        }
    } else {
        data_021f48b0 = 0;
    }
    return FALSE;
}

extern "C" BOOL func_020ead08(void) {
    u8 *buf;
    u32 i;
    u32 n;
    n = func_ov065_02270584(&buf);
    i = 0;
    for (; i < n; i++) {
        u32 c = buf[i];
        if (c != func_ov065_022705d0()) {
            if (func_ov065_022778a4(c) == 0) return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_020eaca0(void) {
    u32 st = data_021f4890;
    if ((u8)(st + 255) <= 1) {
        return func_020ead70(func_ov066_022622f4());
    }
    if ((u8)(st + 253) > 1) return FALSE;
    return func_020ead70(func_020ead08());
}

extern "C" BOOL func_020eabe8(u32 a0, u32 b0, u16 c0, u32 d0, u32 a1, u32 b1, u16 c1, u32 d1, u32 a2, u32 b2, u16 c2, u32 d2) {
    if (func_020eb650() != 0) {
        if (func_020eaca0() != 0) {
            BOOL r5 = func_020ec454(a0, b0, c0, d0);
            BOOL r4 = func_020ec454(a1, b1, c1, d1);
            BOOL r = func_020ec454(a2, b2, c2, d2);
            if (r5 != 0 || r4 != 0 || r != 0) {
                if (func_020ec70c() != 0) return TRUE;
                func_020ec60c();
            }
        }
    }
    return FALSE;
}

extern "C" u32 func_020ea960(void) {
    s32 st = func_ov066_0225ffcc();
    if ((st & 0x80) != 0) {
        switch (st & ~0x80) {
        case 0:
            return 0;
        case 12:
            return 0x800c;
        case 1:
            return 0x8001;
        case 2:
            return 0x8002;
        case 3:
            return 0x8003;
        case 4:
            return 0x8004;
        case 5:
            return 0x8005;
        case 6:
            return 0x8006;
        case 7:
            return 0x8007;
        case 8:
            return 0x8008;
        case 9:
            return 0x8009;
        case 10:
            return 0x800a;
        case 11:
            return 0x800b;
        case 13:
            return 0x800d;
        case 14:
            return 0x800e;
        case 15:
            return 0x800f;
        case 16:
            return 0x8010;
        case 65:
            return 0x8041;
        case 66:
            return 0x8042;
        case 67:
            return 0x8043;
        case 68:
            return 0x8044;
        default:
            return 0xffff;
        }
    }
    if (data_021f4900[0] == 0xff) return 0x80ff;
    return 0;
}


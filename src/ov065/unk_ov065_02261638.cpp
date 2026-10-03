// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" u8 data_ov065_0228f3c0[0x800] = {0};
extern "C" u8 data_ov065_0228fbc0[0x800] = {0};
extern "C" u8 data_ov065_0228f200[0x1c0] = {0};
extern "C" u8 data_ov065_0228ef00[0x180] = {0};
extern "C" u8 data_ov065_0228f080[0x180] = {0};
extern "C" u8 data_ov065_0228ed80[0xc0] = {0};
extern "C" u8 data_ov065_0228ee40[0xc0] = {0};
extern "C" u32 data_ov065_0228ecb8[25] = {0};
extern "C" u32 data_ov065_0228ed1c[25] = {0};
extern "C" u8 data_ov065_0228ec58[0x60] = {0};
extern "C" u8 data_ov065_0228ec1c[0x3c] = {0};
extern "C" u64 data_ov065_0228ec04[3] = {0};
extern "C" u8 data_ov065_0228b434[12] = {0xaa, 0xaa, 3, 0, 0, 0, 8, 0, 0, 0, 0, 0};
extern "C" char data_ov065_0228b428[] = "NintendoDS";
extern "C" u32 data_ov065_0228ebfc[2] = {0};
extern "C" u8 data_ov065_0228b420[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0};
extern "C" u8 data_ov065_0228ebf4[6] = {0};
extern "C" u32 data_ov065_0228ebec = 0;
extern "C" u32 data_ov065_0228ebb0 = 0;
extern "C" void *data_ov065_0228ebe4 = 0;
extern "C" u32 data_ov065_0228ebe0 = 0;
extern "C" u32 data_ov065_0228ebdc = 0;
extern "C" void (*data_ov065_0228eba8)(void) = 0;
extern "C" u32 data_ov065_0228ebd4 = 0;
extern "C" void (*data_ov065_0228ebd0)(void *) = 0;
extern "C" void (*data_ov065_0228ebcc)(void) = 0;
extern "C" u32 data_ov065_0228ebb8 = 0;
extern "C" u32 data_ov065_0228ebc0 = 0;
extern "C" u32 data_ov065_0228ebc4 = 0;
extern "C" u32 data_ov065_0228ebf0 = 0;
extern "C" u8 *data_ov065_0228ebe8 = 0;
extern "C" u32 data_ov065_0228eba0 = 0;
extern "C" u32 data_ov065_0228b418 = 1;
extern "C" s32 (*data_ov065_0228ebac)(void) = 0;
extern "C" u32 data_ov065_0228b41c = 0x10;
extern "C" u32 data_ov065_0228eba4 = 0;
extern "C" u32 data_ov065_0228ebbc = 0;
extern "C" void *(*data_ov065_0228ebc8)(u32) = 0;
extern "C" u32 data_ov065_0228ebd8 = 0;
extern "C" u32 data_ov065_0228ebb4 = 0;
extern "C" u16 data_ov065_0228eb9c = 0;
extern "C" u16 data_ov065_0228eb90 = 0;
extern "C" u16 data_ov065_0228eb94 = 0;
extern "C" u16 data_ov065_0228eb98 = 0;
extern "C" u8 data_ov065_0228eb88 = 0;
extern "C" u8 data_ov065_0228eb8c = 0;


namespace Unk_ov065_0226482c_Ns {

// ov065_009: socket/SSL library: checksum, init, record send/receive buffering (0x0226482c..0x02265074)

struct Unk_ov065_02264a48_Cfg {
    u32 unk_00;
    void *(*unk_04)(u32);
    void (*unk_08)(void *);
    s32 (*unk_0c)(void);
    s32 (*unk_10)(void);
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02264a48_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_02264c44_Ent {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06[0x2e];
    void *unk_34;
};

struct Unk_ov065_02264c44_Sub {
    void *unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov065_02264c44_Thr {
    u8 unk_00[0x68];
    Unk_ov065_02264c44_Thr *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02264c44_Sub *unk_a4;
};

struct Unk_ov065_02264c44_Info {
    u32 unk_00;
    Unk_ov065_02264c44_Thr *unk_04;
    Unk_ov065_02264c44_Thr *unk_08;
};

struct Unk_ov065_02264d24_Ent {
    u8 unk_00[0x50];
    s32 unk_50;
    u8 unk_54[6];
    u8 unk_5a;
    u8 unk_5b;
};

struct Unk_ov065_02264d80_Conn {
    u8 unk_000[0x2c0];
    u8 unk_2c0[0xb8];
    u8 unk_378[0xb0];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x3cd];
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02264d80_Obj {
    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09[3];
    Unk_ov065_02264d80_Conn *unk_0c;
    u8 unk_10[0x34];
    u32 unk_44;
};

extern "C" {
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228b41c;
extern u8 data_ov065_0228ee40[];
extern u8 data_ov065_0228ed80[];
extern u32 data_ov065_0228ebe4;
extern u32 data_ov065_0228ebe8;
extern u32 data_ov065_0228ebec;
extern void (*data_ov065_0228ebcc)(void);
extern u32 data_ov065_0228ebd4;
extern u32 data_ov065_0228eba0;
extern u32 data_ov065_0228ebfc[2];
extern u32 data_ov065_0228ebb0;
extern u8 data_ov065_0228ec58[];
extern Unk_ov065_02264c44_Info data_021fcc2c;
extern Unk_ov065_02264c44_Ent data_ov065_0228f200[8];
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228ebb4;
extern Unk_ov065_02264d24_Ent data_ov065_02290438[4];
extern void *(*data_ov065_0228ebc8)(u32);
extern void *(*data_ov065_0228eba8)(void);
extern s32 (*data_ov065_0228ebac)(void);
extern u32 data_ov065_0228ebbc;
extern u16 data_ov065_0228eb94;
extern u32 data_ov065_0228ebe0;
extern u32 data_ov065_0228ebf0;
extern u32 data_ov065_0228ebb8;
extern u16 data_ov065_0228eb98;
extern u8 data_ov065_0228ebf4[];
extern u8 data_ov065_0228eb8c;
extern Unk_ov065_02264a48_Rng data_ov065_0228ec04;

void func_ov065_02262ae4(void);
void func_ov065_02261fd8(void);
u32 func_ov065_02265dac(void *, void *);
u32 func_ov065_0226242c(void *, u32, u32, u32, Unk_ov065_02264d80_Obj *);
u8 *func_ov065_02262708(u32 *, Unk_ov065_02264d80_Obj *);
void func_ov065_02262670(u32, Unk_ov065_02264d80_Obj *);
void func_ov065_02265b9c(void *, void *);
s32 func_ov065_02265d5c(void *, u32, Unk_ov065_02264d80_Obj *);
s32 func_ov065_02265a5c(Unk_ov065_02264d80_Obj *);

u64 OS_GetTick(void);
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void func_02000b44(u32);
void OS_SetThreadPriority(void *, u32);
void OS_JoinThread(void *);
void OS_DestroyThread(void *);
s32 OS_IsThreadTerminated(void *);
void OS_WakeupThreadDirect(void *);
void OS_YieldThread(void);
void OS_Sleep(void);
void OS_CreateThread(void *, void *, u32, void *, u32, u32);
void OS_GetMacAddress(void *);
void *MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);

u32 func_ov065_02264900(u8 *p, u32 len, u32 sum);
s32 func_ov065_02264848(u32 a);
void func_ov065_02264c44(u32 a);
s32 func_ov065_02264a08(void);
void func_ov065_02264d0c(void);
void func_ov065_02264f28(Unk_ov065_02264d80_Obj *o);
s32 func_ov065_02264c18(void);
void func_ov065_02264c1c(void);
}

extern "C" {

extern "C" {
void func_ov065_02264c44(u32 a);
void func_ov065_02264c20(void);
void func_ov065_02264c1c(void);
s32 func_ov065_02264c18(void);
void func_ov065_02264a48(Unk_ov065_02264a48_Cfg *c);
s32 func_ov065_02264a08(void);
void func_ov065_022649fc(void (*f)(void));
void func_ov065_022649b8(void);
void func_ov065_0226498c(u32 a);
u32 func_ov065_02264900(u8 *p, u32 len, u32 sum);
u32 func_ov065_022648ec(u32 x);
u32 func_ov065_022648d4(u8 *a, u32 b);
s32 func_ov065_02264884(u8 *a, u32 b, u8 *c, u32 d);
s32 func_ov065_02264848(u32 a);
u32 func_ov065_0226482c(u32 a);
}

void func_ov065_02264c44(u32 a) {
    BOOL f;
    if (data_ov065_0228ebd8 != 0) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    data_ov065_0228eba0 = a;
    data_ov065_0228ebd8 = 0;
    data_ov065_0228eba4 = 0;
    data_ov065_0228ebc0 = 0;
    data_ov065_0228ebfc[0] = 0;
    data_ov065_0228ebfc[1] = 0;
    data_ov065_0228ebb0 = 0;
    if (f) {
        MI_CpuFill8(data_ov065_0228ec58, 0, 0x60);
        {
            Unk_ov065_02264c44_Thr *t = data_021fcc2c.unk_08;
            if (t != 0) {
                do {
                    Unk_ov065_02264c44_Sub *s = t->unk_a4;
                    if (s != 0) {
                        if (s->unk_00 != 0) {
                            if (s->unk_08 != 10 && s->unk_08 != 11) {
                                s->unk_08 = 0;
                            }
                            if (s->unk_04 != 0) {
                                s->unk_04 = 0;
                                OS_WakeupThreadDirect(s->unk_00);
                            }
                        }
                    }
                    t = t->unk_68;
                } while (t != 0);
            }
        }
        {
            s32 i;
            Unk_ov065_02264c44_Ent *e;
            for (i = 0, e = data_ov065_0228f200; i < 8; e++, i++) {
                if (e->unk_04 != 0) {
                    data_ov065_0228ebd0(e->unk_34);
                    e->unk_04 = 0;
                }
            }
        }
        func_ov065_02264d0c();
    }
}

void func_ov065_02264c20(void) {
    if (data_ov065_0228ebb4 == 0) {
        OS_YieldThread();
    } else {
        OS_Sleep();
    }
}

void func_ov065_02264c1c(void) {
}

s32 func_ov065_02264c18(void) {
    return 1;
}

void func_ov065_02264a48(Unk_ov065_02264a48_Cfg *c) {
    func_02000b44(0x2000bfc);
    u64 seed = *(u64 *)&c->unk_14;
    if (seed != 0) {
        data_ov065_0228ec04.unk_00 = seed;
        data_ov065_0228ec04.unk_08 = 0x5d588b656c078965ULL;
        data_ov065_0228ec04.unk_10 = 0x269ec3;
    } else {
        data_ov065_0228ec04.unk_00 = OS_GetTick();
        data_ov065_0228ec04.unk_08 = 0x5d588b656c078965ULL;
        data_ov065_0228ec04.unk_10 = 0x269ec3;
    }
    if (c->unk_04 != 0 && c->unk_08 != 0) {
        data_ov065_0228ebc8 = c->unk_04;
        data_ov065_0228ebd0 = c->unk_08;
    } else {
        data_ov065_0228ebc8 = (void *(*)(u32))func_ov065_02264c1c;
        data_ov065_0228ebd0 = (void (*)(void *))func_ov065_02264c1c;
    }
    data_ov065_0228ebbc = c->unk_00;
    if (c->unk_24 != 0) {
        data_ov065_0228eb94 = c->unk_24;
    } else {
        data_ov065_0228eb94 = 0x5b4;
    }
    data_ov065_0228ebe0 = c->unk_28;
    data_ov065_0228ebb4 = c->unk_2c;
    if (c->unk_0c != 0) {
        data_ov065_0228eba8 = (void *(*)(void))c->unk_0c;
    } else {
        data_ov065_0228eba8 = (void *(*)(void))func_ov065_02264c1c;
    }
    if (c->unk_10 != 0) {
        data_ov065_0228ebac = c->unk_10;
    } else {
        data_ov065_0228ebac = func_ov065_02264c18;
    }
    data_ov065_0228ebe8 = c->unk_1c;
    data_ov065_0228ebec = c->unk_20;
    data_ov065_0228ebf0 = 0;
    data_ov065_0228ebb8 = 0;
    {
        Unk_ov065_02264a48_Rng *r = &data_ov065_0228ec04;
        r->unk_00 = (u64)((s64)r->unk_08 * (s64)r->unk_00) + r->unk_10;
        u32 hi = (u32)(r->unk_00 >> 32);
        data_ov065_0228eb98 = ((u64)((s64)hi * (s64)0xf88) >> 32) + 0x400;
    }
    OS_GetMacAddress(data_ov065_0228ebf4);
    data_ov065_0228eb8c = 0;
    OS_CreateThread(data_ov065_0228ee40, (void *)func_ov065_02262ae4, 0, data_ov065_0228fbc0 + 0x800, 0x800, data_ov065_0228b41c);
    OS_CreateThread(data_ov065_0228ed80, (void *)func_ov065_02261fd8, 0, data_ov065_0228f3c0 + 0x800, 0x800, data_ov065_0228b41c);
    OS_WakeupThreadDirect(data_ov065_0228ee40);
    OS_WakeupThreadDirect(data_ov065_0228ed80);
}

s32 func_ov065_02264a08(void) {
    u32 s = OS_DisableInterrupts();
    s32 r = OS_IsThreadTerminated(data_ov065_0228ed80);
    if (r == 0) {
        if (data_ov065_0228ebd4 == 0) {
            data_ov065_0228ebd4 = 1;
            OS_WakeupThreadDirect(data_ov065_0228ed80);
        }
    }
    OS_RestoreInterrupts(s);
    return r;
}

void func_ov065_022649fc(void (*f)(void)) {
    data_ov065_0228ebcc = f;
}

void func_ov065_022649b8(void) {
    func_ov065_02264a08();
    OS_JoinThread(data_ov065_0228ed80);
    OS_DestroyThread(data_ov065_0228ee40);
    data_ov065_0228ebe4 = 0;
    func_ov065_02264c44(0);
    data_ov065_0228ebe8 = 0;
    data_ov065_0228ebec = 0;
}

void func_ov065_0226498c(u32 a) {
    data_ov065_0228b41c = a;
    OS_SetThreadPriority(data_ov065_0228ee40, a);
    OS_SetThreadPriority(data_ov065_0228ed80, a);
}

u32 func_ov065_02264900(u8 *p, u32 len, u32 sum) {
    u32 t;
    if (((u32)p & 1) != 0) {
        while (len > 1) {
            t = (u16)((p[0] << 8) | p[1]);
            sum += t;
            p += 2;
            len -= 2;
        }
    } else {
        u32 w;
        u32 v;
        u16 h = sum;
        sum = (u16)((h >> 8) | (h << 8));
        while (len > 1) {
            w = *(u16 *)p;
            sum += w;
            p += 2;
            len -= 2;
        }
        v = ((sum >> 8) & 0xff00ff) | ((sum << 8) & 0xff00ff00);
        sum = (v >> 16) | (v << 16);
    }
    if (len != 0) {
        sum += p[0] << 8;
    }
    t = (sum & 0xffff) + (sum >> 16);
    t = t + (t >> 16);
    return (u16)t;
}

u32 func_ov065_022648ec(u32 x) {
    x = (u16)(x ^ 0xffff);
    if (x == 0) {
        x = 0xffff;
    }
    return x;
}

u32 func_ov065_022648d4(u8 *a, u32 b) {
    return func_ov065_022648ec((u16)func_ov065_02264900(a, b, 0));
}

s32 func_ov065_02264884(u8 *a, u32 b, u8 *c, u32 d) {
    u32 s = func_ov065_02264900(a, b, d);
    s = func_ov065_02264900(c + 0xc, 8, s);
    s += b;
    if ((s & 0x10000) != 0) {
        s = (s + 1) & 0xffff;
    }
    if (s != 0xffff) {
        return 1;
    }
    return 0;
}

s32 func_ov065_02264848(u32 a) {
    s32 r = TRUE;
    s32 z = 0;
    if (a != (u32)-1) {
        if (a != 0x7f000001) {
            u32 m = data_ov065_0228eba4;
            if ((a & m) != (data_ov065_0228ebd8 & m)) {
                r = z;
            }
        }
    }
    return r;
}

u32 func_ov065_0226482c(u32 a) {
    if (func_ov065_02264848(a) == 0) {
        a = data_ov065_0228ebc0;
    }
    return a;
}


}

}

namespace Unk_ov065_02263f24_Ns {

#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

struct Unk_ov065_02263f24_Pkt {
    u8 unk_00[0x0a];
    u16 unk_0a;
    u8 unk_0c[0x10];
    u32 unk_1c;
    u8 unk_20[0x2c];
    u8 *unk_4c;
};

struct Unk_ov065_02264298_E {
    s32 unk_00;
    u8 unk_04[6];
    u16 unk_0a;
};

extern "C" {
extern u32 data_021fcc2c[];
extern u8 data_ov065_0228b420[];
extern u8 data_ov065_0228b434[];
extern u8 data_ov065_0228eb88;
extern u16 data_ov065_0228eb90;
extern u16 data_ov065_0228eb9c;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebb8;
extern u32 data_ov065_0228ebd8;
extern void *data_ov065_0228ebe4;
extern u8 *data_ov065_0228ebe8;
extern u32 data_ov065_0228ebec;
extern u32 data_ov065_0228ebf0;
extern u8 data_ov065_0228ebf4[];
extern Unk_ov065_02264298_E data_ov065_0228ec58[8];

u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
u64 OS_GetTick();
void OS_Sleep(s32);
void OS_SleepThread(void *);
s32 OS_IsThreadTerminated(void *);
void OS_WakeupThreadDirect(void *);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(const void *, void *, u32);

s32 func_ov065_0226aa14(u8 *, u8 *, u32);
u32 func_ov065_022648d4(u8 *, u32);
u32 func_ov065_022648ec(u32);
u32 func_ov065_02264900(u8 *, u32, u32);
s32 func_ov065_0226482c(u32);
s32 func_ov065_02264848(u32);

void func_ov065_02263f24(u32 a, u32 b, Unk_ov065_02263f24_Pkt *c);
void func_ov065_02263f98(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag);
void func_ov065_02264110(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w);
void func_ov065_022641ec(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w);
void func_ov065_02264298(u8 *mac, u32 ip, u32 flag);
u8 *func_ov065_02264360(u32 ip);
void func_ov065_0226439c(u32 ip);
u8 *func_ov065_02264440(u32 ip);
void func_ov065_022644cc();
u8 *func_ov065_0226450c(u32 *out);
void func_ov065_0226459c(u8 *, u8 *, u8 *, u32);
void func_ov065_022645d0(u8 *, u8 *, u8 *, u32, u8 *, u32);
void func_ov065_02264718(u8 *hdr, u32 hlen, u8 *data, u32 n);
s32 func_ov065_02264760(u16 *a, u16 *b);
s32 func_ov065_02264788(u32 ip);
s32 func_ov065_022647e0(u32 ip);
s32 func_ov065_022647fc(u32 ip);

extern "C" {
s32 func_ov065_022647fc(u32 ip);
s32 func_ov065_022647e0(u32 ip);
s32 func_ov065_02264788(u32 ip);
s32 func_ov065_02264760(u16 *a, u16 *b);
void func_ov065_02264718(u8 *hdr, u32 hlen, u8 *data, u32 n);
void func_ov065_022645d0(u8 *a, u8 *b, u8 *c, u32 d, u8 *data, u32 n);
void func_ov065_0226459c(u8 *a, u8 *b, u8 *c, u32 d);
u8 *func_ov065_0226450c(u32 *out);
void func_ov065_022644cc();
u8 *func_ov065_02264440(u32 ip);
void func_ov065_0226439c(u32 ip);
u8 *func_ov065_02264360(u32 ip);
void func_ov065_02264298(u8 *mac, u32 ip, u32 flag);
void func_ov065_022641ec(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w);
void func_ov065_02264110(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w);
void func_ov065_02263f98(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag);
void func_ov065_02263f24(u32 a, u32 b, Unk_ov065_02263f24_Pkt *c);
}

s32 func_ov065_022647fc(u32 ip)
{
    BOOL r = FALSE;
    if (func_ov065_02264848(ip) != 0) {
        u32 m = ~data_ov065_0228eba4;
        if (m == (m & ip)) {
            r = TRUE;
        }
    }
    return r;
}

s32 func_ov065_022647e0(u32 ip)
{
    if ((ip & 0xf0000000) == 0xe0000000) {
        return 1;
    }
    return 0;
}

s32 func_ov065_02264788(u32 ip)
{
    BOOL r = TRUE;
    BOOL c = TRUE;
    BOOL b = TRUE;
    BOOL a = TRUE;
    u32 g = data_ov065_0228ebd8;
    if (g != 0 && ip != g) {
        a = FALSE;
    }
    if (a == 0) {
        if (ip != 0x7f000001) {
            b = FALSE;
        }
    }
    if (b == 0) {
        if (func_ov065_022647fc(ip) == 0) {
            c = FALSE;
        }
    }
    if (c == 0) {
        if (func_ov065_022647e0(ip) == 0) {
            r = FALSE;
        }
    }
    return r;
}

s32 func_ov065_02264760(u16 *a, u16 *b)
{
    s32 i;
    for (i = 0; i < 3; i++) {
        u32 x = *a++;
        u32 y = *b++;
        if (x != y) {
            return 1;
        }
    }
    return 0;
}

void func_ov065_02264718(u8 *hdr, u32 hlen, u8 *data, u32 n)
{
    s32 r;
    if (hdr + hlen != data) {
        MI_CpuCopy8(data, hdr + hlen, n);
    }
    MI_CpuCopy8(data_ov065_0228b434, hdr + 6, 6);
    r = func_ov065_0226aa14(hdr, hdr + 6, hlen + n - 6);
    data_ov065_0228eb88 = (r < 0) ? 1 : 0;
}

void func_ov065_022645d0(u8 *a, u8 *b, u8 *c, u32 d, u8 *data, u32 n)
{
    u8 *buf = data_ov065_0228ebe8;
    u32 lim;
    u32 tot;
    u32 sz;
    u32 wr;
    u32 rd;
    u32 end;
    u32 nw;
    if (buf == 0) {
        return;
    }
    lim = data_ov065_0228ebec;
    if (lim == 0) {
        return;
    }
    tot = d + n;
    if (tot < 8 || tot > 0x5e4) {
        return;
    }
    if (c[0] != data_ov065_0228b434[0]) {
        return;
    }
    if (c[1] != data_ov065_0228b434[1]) {
        return;
    }
    if (c[2] != data_ov065_0228b434[2]) {
        return;
    }
    if (c[6] != 8) {
        return;
    }
    if (c[7] != 0 && c[7] != 6) {
        return;
    }
    sz = (u16)((tot + 9) & ~1);
    wr = data_ov065_0228ebb8;
    end = wr + sz;
    nw = end;
    rd = data_ov065_0228ebf0;
    if (wr < rd) {
        if (rd <= end) {
            return;
        }
    }
    if (end == lim) {
        nw = 0;
        if (rd == 0) {
            return;
        }
    } else if (end > lim) {
        nw = sz;
        if (rd <= sz) {
            return;
        }
    }
    if (end > lim) {
        if (lim - wr >= 2) {
            buf[wr] = 0;
            u8 *pw = data_ov065_0228ebe8 + data_ov065_0228ebb8;
            pw[1] = 0;
        }
        data_ov065_0228ebb8 = 0;
    }
    data_ov065_0228ebe8[data_ov065_0228ebb8] = sz;
    u8 *pw2 = data_ov065_0228ebe8 + data_ov065_0228ebb8;
    pw2[1] = (s32)sz >> 8;
    MI_CpuCopy8(b, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 2, 6);
    MI_CpuCopy8(a, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 8, 6);
    MI_CpuCopy8(c + 6, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 0xe, d - 6);
    if (data != 0 && n != 0) {
        MI_CpuCopy8(data, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 8 + d, n);
    }
    data_ov065_0228ebb8 = nw;
}

void func_ov065_0226459c(u8 *a, u8 *b, u8 *c, u32 d)
{
    func_ov065_022645d0(a, b, c, d, 0, 0);
    if (data_ov065_0228ebe4 != 0) {
        if (OS_IsThreadTerminated(data_ov065_0228ebe4) == 0) {
            OS_WakeupThreadDirect(data_ov065_0228ebe4);
        }
    }
}

u8 *func_ov065_0226450c(u32 *out)
{
    u32 len;
    u32 lim;
    u8 *buf;
    while (data_ov065_0228ebf0 == data_ov065_0228ebb8) {
        data_ov065_0228ebe4 = (void *)data_021fcc2c[1];
        OS_SleepThread(0);
        data_ov065_0228ebe4 = 0;
    }
    lim = data_ov065_0228ebec;
    buf = data_ov065_0228ebe8;
    do {
        u32 o;
        if (lim - data_ov065_0228ebf0 < 2) {
            data_ov065_0228ebf0 = 0;
        }
        o = data_ov065_0228ebf0;
        u8 *pp = buf + o;
        u32 l0 = buf[o];
        len = (u16)(l0 + (pp[1] << 8));
        if (len == 0) {
            data_ov065_0228ebf0 = 0;
        }
    } while (len == 0);
    *out = len - 2;
    return data_ov065_0228ebe8 + data_ov065_0228ebf0 + 2;
}

void func_ov065_022644cc()
{
    u32 irq = OS_DisableInterrupts();
    u32 o = data_ov065_0228ebf0;
    u8 *base = data_ov065_0228ebe8;
    u32 lo = base[o];
    u32 v = o + (lo + ((base + o)[1] << 8));
    data_ov065_0228ebf0 = v;
    if (v >= data_ov065_0228ebec) {
        data_ov065_0228ebf0 = 0;
    }
    OS_RestoreInterrupts(irq);
}

u8 *func_ov065_02264440(u32 ip)
{
    u32 irq = OS_DisableInterrupts();
    u8 *r = 0;
    if (ip == 0x7f000001 || ip == data_ov065_0228ebd8) {
        r = data_ov065_0228ebf4;
    } else if (func_ov065_022647fc(ip) != 0 || func_ov065_022647e0(ip) != 0) {
        r = data_ov065_0228b420;
    } else {
        s32 i;
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (ip == e->unk_00) {
                u32 t = (u32)(OS_GetTick() >> 16);
                data_ov065_0228ec58[i].unk_0a = t;
                r = data_ov065_0228ec58[i].unk_04;
                break;
            }
        }
    }
    OS_RestoreInterrupts(irq);
    return r;
}

void func_ov065_0226439c(u32 ip)
{
    u8 b[0x30];
    MI_CpuFill8(b, 0, 0x2a);
    MI_CpuFill8(b, 0xff, 6);
    MI_CpuCopy8(data_ov065_0228ebf4, b + 6, 6);
    *(u16 *)(b + 0xc) = 0x608;
    b[0xf] = 1;
    b[0x10] = 8;
    *(u16 *)(b + 0x12) = 0x406;
    b[0x15] = 1;
    MI_CpuCopy8(data_ov065_0228ebf4, b + 0x16, 6);
    *(u16 *)(b + 0x1c) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(b + 0x1e) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(b + 0x26) = BS16((u16)(ip >> 16));
    *(u16 *)(b + 0x28) = BS16((u16)ip);
    func_ov065_02264718(b, 0x2a, 0, 0);
}

u8 *func_ov065_02264360(u32 ip)
{
    u32 j = 0;
    u32 z = 0;
    do {
        u32 k;
        func_ov065_0226439c(ip);
        k = z;
        do {
            u8 *r;
            OS_Sleep(100);
            r = func_ov065_02264440(ip);
            if (r != 0) {
                return r;
            }
            k++;
        } while (k < 0x14);
        j++;
    } while (j < 8);
    return 0;
}

void func_ov065_02264298(u8 *mac, u32 ip, u32 flag)
{
    u32 now;
    s32 i;
    if (ip == 0x7f000001 || ip == data_ov065_0228ebd8) {
        return;
    }
    if (func_ov065_02264848(ip) == 0) {
        return;
    }
    if (func_ov065_022647e0(ip) != 0) {
        return;
    }
    now = (u16)(OS_GetTick() >> 16);
    {
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (ip == e->unk_00) {
                data_ov065_0228ec58[i].unk_0a = now;
                MI_CpuCopy8(mac, data_ov065_0228ec58[i].unk_04, 6);
                return;
            }
        }
    }
    if (flag != 0) {
        u32 best = 0;
        u32 idx = 0;
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (e->unk_00 == 0) {
                idx = i;
                break;
            }
            s32 d = (s16)(now - e->unk_0a);
            if (d > (s32)best) {
                best = (u16)(now - e->unk_0a);
                idx = i;
            }
        }
        data_ov065_0228ec58[idx].unk_00 = ip;
        MI_CpuCopy8(mac, data_ov065_0228ec58[idx].unk_04, 6);
        data_ov065_0228ec58[idx].unk_0a = now;
    }
}

void func_ov065_022641ec(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w)
{
    *(u16 *)(p - 2) = BS16(w);
    if (func_ov065_022647e0(x) == 0) {
        u8 *r;
        u32 k = func_ov065_0226482c(x);
        if (k == 0) {
            return;
        }
        r = func_ov065_02264440(k);
        if (r == 0) {
            r = func_ov065_02264360(k);
        }
        if (r == 0) {
            return;
        }
        MI_CpuCopy8(r, p - 0xe, 6);
    } else {
        p[-0xe] = 1;
        p[-0xd] = 0;
        p[-0xc] = 0x5e;
        p[-0xb] = (x >> 16) & 0x7f;
        p[-0xa] = x >> 8;
        p[-9] = x;
    }
    MI_CpuCopy8(data_ov065_0228ebf4, p - 8, 6);
    func_ov065_02264718(p - 0xe, off + 0xe, data, n);
}

void func_ov065_02264110(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w)
{
    *(u16 *)(p - 0x12) = BS16((u16)(off + 0x14 + n));
    *(u16 *)(p - 0xe) = BS16((u16)w);
    *(u16 *)(p - 0xa) = 0;
    u32 ck = func_ov065_022648d4(p - 0x14, 0x14);
    *(u16 *)(p - 0xa) = BS16(ck);
    if (x != 0x7f000001 && x != data_ov065_0228ebd8) {
        func_ov065_022641ec(p - 0x14, off + 0x14, data, n, x, 0x800);
    }
    if (x == 0x7f000001 || x == data_ov065_0228ebd8 || func_ov065_022647e0(x) != 0) {
        MI_CpuCopy8(data_ov065_0228b434, p - 0x1c, 8);
        u32 irq = OS_DisableInterrupts();
        func_ov065_022645d0(data_ov065_0228ebf4, data_ov065_0228ebf4, p - 0x1c, off + 0x1c, data, n);
        OS_RestoreInterrupts(irq);
    }
}

void func_ov065_02263f98(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag)
{
    u32 i;
    p[-0x14] = 0x45;
    i = 0;
    p[-0x13] = 0;
    data_ov065_0228eb9c = data_ov065_0228eb9c + 1;
    *(u16 *)(p - 0x10) = BS16(data_ov065_0228eb9c);
    p[-0xc] = 0x80;
    p[-0xb] = flag;
    *(u16 *)(p - 8) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(p - 6) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(p - 4) = BS16((u16)(x >> 16));
    *(u16 *)(p - 2) = BS16((u16)x);
    if (len > 0x5c8) {
        u8 *s = p;
        while (len > 0x5c8) {
            func_ov065_02264110(p, 0, s, 0x5c8, x, i | 0x2000);
            s += 0x5c8;
            len -= 0x5c8;
            i = (u16)(i + 0xb9);
        }
        if (len != 0) {
            if (n != 0) {
                func_ov065_02264110(p, 0, s, len, x, i | 0x2000);
            } else {
                func_ov065_02264110(p, 0, s, len, x, i);
            }
            i = (u16)(i + (len >> 3));
            len = 0;
        }
    }
    if (len + n > 0x5c8) {
        do {
            u32 c = 0x5c8 - len;
            func_ov065_02264110(p, len, data, c, x, i | 0x2000);
            data += c;
            n -= c;
            i = (u16)(i + 0xb9);
            len = 0;
        } while (n > 0x5c8);
    }
    if (len + n != 0) {
        func_ov065_02264110(p, len, data, n, x, i);
    }
}

void func_ov065_02263f24(u32 a, u32 b, Unk_ov065_02263f24_Pkt *c)
{
    u8 *h = c->unk_4c;
    u8 *q = h + 0x22;
    *(u16 *)(h + 0x22) = 8;
    *(u16 *)(q + 4) = data_021fcc2c[1];
    *(u16 *)(q + 2) = 0;
    u16 id = data_ov065_0228eb90;
    c->unk_0a = id;
    data_ov065_0228eb90 = data_ov065_0228eb90 + 1;
    *(u16 *)(q + 6) = id;
    u32 t = func_ov065_02264900(q, 8, 0);
    t = func_ov065_02264900((u8 *)a, b, t);
    u32 ck = func_ov065_022648ec((u16)t);
    *(u16 *)(q + 2) = BS16(ck);
    func_ov065_02263f98(q, 8, (u8 *)a, b, c->unk_1c, 1);
}

}

}

namespace Unk_ov065_02263578_Ns {

struct Unk_ov065_02262240_Sess;

struct Unk_ov065_02262240_Thr {
    u8 pad_00[0x68];
    Unk_ov065_02262240_Thr *next;
    u8 pad_6c[0xa4 - 0x6c];
    Unk_ov065_02262240_Sess *sess;
};

struct Unk_ov065_02262240_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 state;
    u8 unk_09;
    u16 unk_0a;
    u8 pad_0c[4];
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u16 unk_2c;
    u16 unk_2e;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u8 *unk_40;
    u32 unk_44;
    u32 unk_48;
    u8 *unk_4c;
    u8 pad_50[0x64 - 0x50];
};

struct Unk_ov065_02262240_Os {
    u32 unk_00;
    Unk_ov065_02262240_Thr *cur;
    Unk_ov065_02262240_Thr *list;
};

typedef Unk_ov065_02262240_Sess Sess;
typedef Unk_ov065_02262240_Thr Thr;

extern "C" {
extern Unk_ov065_02262240_Os data_021fcc2c;
extern Sess data_ov065_0228ed1c;
extern u8 data_ov065_0228ee40[];
extern u32 data_ov065_0228b418;
extern u32 data_ov065_0228ebd8;
extern u8 data_ov065_0228ebf4[];
extern u8 data_ov065_0228eb8c;
extern u16 data_ov065_0228eb94;
#define data_ov065_0228ec3e (data_ov065_0228ec1c + 0x22)

// main module
u64 OS_GetTick();
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(void *, void *, u32);
void OS_WakeupThreadDirect(u32);

// same overlay, out of range
s32 func_ov065_0226439c(u32);
u32 func_ov065_0226482c(u32);
s32 func_ov065_02264440(u32);
s32 func_ov065_022647e0(u32);
u32 func_ov065_022648d4(u8 *, u32);
u32 func_ov065_022648ec(u32);
u32 func_ov065_02264900(u8 *, u32, u32);
s32 func_ov065_02264760(u8 *, u8 *);
s32 func_ov065_02264298(u8 *, u32, u32);
s32 func_ov065_02264718(u8 *, u32, u32, u32);
s32 func_ov065_02263f98(u8 *, u32, u32, u32, u32, u32);

// in range
void func_ov065_02263578(u8 *, u8 *, Sess *);
void func_ov065_02263618(u8 *, u8 *, u32, u32);
void func_ov065_022636e8(Sess *, u32);
void func_ov065_022636f4(Sess *, u32);
void func_ov065_02263700(Sess *, u32, u32);
s32 func_ov065_02263750(u32);
void func_ov065_02263770(u8 *, Sess *);
Sess *func_ov065_022637d0(u8 *, u8 *);
s32 func_ov065_0226381c(u8 *, u8 *, Sess *);
Sess *func_ov065_0226389c(u8 *, u8 *);
void func_ov065_02263924(u8 *, u8 *, u32);
s32 func_ov065_022639c4(u32, u32);
void func_ov065_022639e0(u8 *, u8 *, u32);
void func_ov065_02263a88(u8 *, u8 *, u32);
void func_ov065_02263b28(u8 *, u32);
void func_ov065_02263c14(u8 *);
void func_ov065_02263c90(u8 *, u32, Sess *, u32, u32);
void func_ov065_02263e4c(u8 *, u32, Sess *);
}

#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

static inline u32 Swap32(u8 *p) {
    u32 hi = BS16(*(u16 *)(p));
    u32 lo = BS16(*(u16 *)(p + 2));
    return (hi << 16) | lo;
}

extern "C" {
void func_ov065_02263e4c(u8 *a, u32 b, Sess *s);
void func_ov065_02263c90(u8 *x, u32 y, Sess *s, u32 flags, u32 z);
void func_ov065_02263c14(u8 *a);
void func_ov065_02263b28(u8 *a, u32 len);
void func_ov065_02263a88(u8 *a, u8 *b, u32 c);
void func_ov065_022639e0(u8 *a, u8 *b, u32 c);
s32 func_ov065_022639c4(u32 x, u32 y);
void func_ov065_02263924(u8 *a, u8 *b, u32 c);
Sess *func_ov065_0226389c(u8 *a, u8 *b);
s32 func_ov065_0226381c(u8 *a, u8 *b, Sess *s);
Sess *func_ov065_022637d0(u8 *a, u8 *b);
void func_ov065_02263770(u8 *a, Sess *s);
s32 func_ov065_02263750(u32 x);
void func_ov065_02263700(Sess *s, u32 a, u32 b);
void func_ov065_022636f4(Sess *s, u32 x);
void func_ov065_022636e8(Sess *s, u32 x);
void func_ov065_02263618(u8 *a, u8 *b, u32 c, u32 d);
void func_ov065_02263578(u8 *a, u8 *b, Sess *s);
}

void func_ov065_02263e4c(u8 *a, u32 b, Sess *s) {
    u8 *q = s->unk_4c;
    u8 *p = q + 0x22;
    *(u16 *)(p - 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(p - 0xa) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(p - 8) = BS16((u16)(s->unk_1c >> 16));
    *(u16 *)(p - 6) = BS16((u16)s->unk_1c);
    *(u16 *)(p - 4) = 0x1100;
    *(u16 *)(p + 4) = BS16((u16)(b + 8));
    *(u16 *)(p - 2) = *(u16 *)(p + 4);
    *(u16 *)(p + 2) = BS16(s->unk_18);
    *(u16 *)(q + 0x22) = BS16(s->unk_0a);
    *(u16 *)(p + 6) = 0;
    u32 v = func_ov065_022648ec((u16)func_ov065_02264900(a, b, func_ov065_02264900(p - 0xc, 0x14, 0)));
    *(u16 *)(p + 6) = BS16(v);
    func_ov065_02263f98(p, 8, (u32)a, b, s->unk_1c, 0x11);
}

void func_ov065_02263c90(u8 *x, u32 y, Sess *s, u32 flags, u32 z) {
    u8 *p;
    u32 hl;
    u32 f2;
    if (s->state != 0) {
        if ((u8 *)data_021fcc2c.cur == data_ov065_0228ee40) {
            p = data_ov065_0228ec3e;
        } else {
            p = s->unk_4c + 0x22;
        }
        f2 = flags & 2;
        if (f2 != 0) {
            hl = 0x18;
        } else {
            hl = 0x14;
        }
        *(u16 *)(p - 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
        *(u16 *)(p - 0xa) = BS16((u16)data_ov065_0228ebd8);
        *(u16 *)(p - 8) = BS16((u16)(s->unk_1c >> 16));
        *(u16 *)(p - 6) = BS16((u16)s->unk_1c);
        *(u16 *)(p - 4) = 0x600;
        *(u16 *)(p - 2) = BS16((u16)(hl + y));
        *(u16 *)(p) = BS16(s->unk_0a);
        *(u16 *)(p + 2) = BS16(s->unk_18);
        *(u16 *)(p + 4) = BS16((u16)(s->unk_28 >> 16));
        *(u16 *)(p + 6) = BS16((u16)s->unk_28);
        *(u16 *)(p + 8) = BS16((u16)(s->unk_24 >> 16));
        *(u16 *)(p + 0xa) = BS16((u16)s->unk_24);
        p[0xc] = (hl >> 2) << 4;
        p[0xd] = flags;
        *(u16 *)(p + 0xe) = BS16((u16)(s->unk_3c - s->unk_44));
        *(u16 *)(p + 0x10) = 0;
        *(u16 *)(p + 0x12) = BS16(*(u16 *)&z);
        if (f2 != 0) {
            *(u16 *)(p + 0x14) = BS16((u16)((data_ov065_0228eb94 + 0x2040000U) >> 16));
            *(u16 *)(p + 0x16) = BS16((u16)(data_ov065_0228eb94 + 0x2040000U));
        }
        u32 v = func_ov065_022648ec((u16)func_ov065_02264900(x, y, func_ov065_02264900(p - 0xc, hl + 0xc, 0)));
        *(u16 *)(p + 0x10) = BS16(v);
        func_ov065_02263f98(p, hl, (u32)x, y, s->unk_1c, 6);
        s->unk_28 = s->unk_28 + y;
        flags &= 3;
        if (flags != 0) {
            s->unk_28 = s->unk_28 + 1;
        }
    }
}

void func_ov065_02263c14(u8 *a) {
    *(u16 *)(a + 6) = 0x200;
    MI_CpuCopy8(a + 8, a + 0x12, 10);
    MI_CpuCopy8(data_ov065_0228ebf4, a + 8, 6);
    *(u16 *)(a + 0xe) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(a + 0x10) = BS16((u16)data_ov065_0228ebd8);
    MI_CpuCopy8(a + 0x12, a - 0xe, 6);
    MI_CpuCopy8(data_ov065_0228ebf4, a - 8, 6);
    func_ov065_02264718(a - 0xe, 0x2a, 0, 0);
}

void func_ov065_02263b28(u8 *a, u32 len) {
    if (len >= 0x1c && func_ov065_02264760(a + 8, data_ov065_0228ebf4) != 0 && *(volatile u32 *)&data_ov065_0228ebd8 != 0
        && *(u16 *)a == 0x100 && *(u16 *)(a + 2) == 8 && *(u16 *)(a + 4) == 0x406) {
        u32 t = BS16(*(u16 *)(a + 6));
        if (t != 1) {
            if (t != 2) {
                return;
            }
        }
        {
            u32 x = Swap32(a + 0xe);
            u32 g = data_ov065_0228ebd8;
            BOOL k7;
            BOOL k4;
            if (x == g) {
                k7 = TRUE;
            } else {
                k7 = FALSE;
            }
            if (g == Swap32(a + 0x18)) {
                k4 = TRUE;
            } else {
                k4 = FALSE;
            }
            if (!k7) {
                func_ov065_02264298(a + 8, x, k4);
            }
            if (t == 1 && k4) {
                func_ov065_02263c14(a);
                return;
            }
            if (t == 2 && k4 && k7) {
                data_ov065_0228eb8c = 1;
            }
        }
    }
}

void func_ov065_02263a88(u8 *a, u8 *b, u32 c) {
    u32 k = Swap32(a + 0xc);
    if (func_ov065_022647e0(k) == 0) {
        k = func_ov065_0226482c(k);
        if (k != 0) {
            if (func_ov065_02264440(k) == 0) {
                func_ov065_0226439c(k);
                return;
            }
            b[0] = 0;
            *(u16 *)(b + 2) = 0;
            u32 r = func_ov065_022648d4(b, c);
            *(u16 *)(b + 2) = BS16(r);
            func_ov065_02263f98(b, c, 0, 0, Swap32(a + 0xc), 1);
        }
    }
}

void func_ov065_022639e0(u8 *a, u8 *b, u32 c) {
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        Sess *s = t->sess;
        if (s != 0 && s->unk_00 != 0 && s->state == 11 && (u16)s->unk_00 == *(u16 *)(b + 4)
            && s->unk_0a == *(u16 *)(b + 6) && s->unk_44 == 0 && s->unk_1c == Swap32(a + 0xc)) {
            u32 m = s->unk_3c;
            c -= 8;
            if (c > m) {
                s->unk_44 = m;
            } else {
                s->unk_44 = c;
            }
            MI_CpuCopy8(b + 8, s->unk_40, s->unk_44);
            if (s->unk_04 == 3) {
                s->unk_04 = 0;
                OS_WakeupThreadDirect(s->unk_00);
            }
            return;
        }
    }
}

s32 func_ov065_022639c4(u32 x, u32 y) {
    if (x != 0 && x != -1 && y != 0 && y != -1) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02263924(u8 *a, u8 *b, u32 c) {
    if (func_ov065_022648d4(b, c) == 0xffff) {
        if (func_ov065_022639c4(Swap32(a + 0xc), Swap32(a + 0x10)) != 0) {
            switch (b[0]) {
            case 0:
                func_ov065_022639e0(a, b, c);
                break;
            case 8:
                if (data_ov065_0228b418 != 0) {
                    func_ov065_02263a88(a, b, c);
                }
                break;
            }
        }
    }
}

Sess *func_ov065_0226389c(u8 *a, u8 *b) {
    Sess *s;
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        s = t->sess;
        if (s != 0 && s->unk_00 != 0 && s->state == 1 && s->unk_0a == BS16(*(u16 *)(b + 2))
            && (s->unk_18 == 0 || s->unk_18 == BS16(*(u16 *)b))
            && (s->unk_1c == 0 || s->unk_1c == Swap32(a + 0xc))) {
            return s;
        }
    }
    return 0;
}

s32 func_ov065_0226381c(u8 *a, u8 *b, Sess *s) {
    s32 result = 0;
    BOOL c = FALSE;
    BOOL bb = FALSE;
    BOOL aa = FALSE;
    if (s->state != 10 && s->state != 11) {
        aa = TRUE;
    }
    if (aa) {
        if (s->unk_0a == BS16(*(u16 *)(b + 2))) {
            bb = TRUE;
        }
    }
    if (bb) {
        if (s->unk_18 == BS16(*(u16 *)b)) {
            c = TRUE;
        }
    }
    if (c) {
        if (s->unk_1c == Swap32(a + 0xc)) {
            result = 1;
        }
    }
    return result;
}

Sess *func_ov065_022637d0(u8 *a, u8 *b) {
    Sess *s;
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        s = t->sess;
        if (s != 0 && s->unk_00 != 0 && func_ov065_0226381c(a, b, s) != 0) {
            return s;
        }
    }
    return 0;
}

void func_ov065_02263770(u8 *a, Sess *s) {
    s32 n;
    u8 *p;
    s->unk_2e = 0x218;
    n = (s32)(a[0xc] & 0xf0) / 4 - 0x14;
    p = a + 0x14;
    while (n--) {
        u32 k = *p++;
        if (k == 0) {
            break;
        }
        if (k == 1) {
            continue;
        }
        if (k == 2) {
            s->unk_2e = (p[1] << 8) | p[2];
            p += 3;
            n -= 3;
        } else {
            s32 t = *p - 1;
            n -= t;
            p += t;
        }
    }
}

s32 func_ov065_02263750(u32 x) {
    u32 r = func_ov065_0226482c(x);
    if (r == 0) {
        return 1;
    }
    return func_ov065_02264440(r);
}

void func_ov065_02263700(Sess *s, u32 a, u32 b) {
    if (func_ov065_02263750(s->unk_1c) != 0 || (u8 *)data_021fcc2c.cur != data_ov065_0228ee40) {
        func_ov065_02263c90(0, 0, s, a, b);
    } else {
        func_ov065_0226439c(func_ov065_0226482c(s->unk_1c));
    }
}

void func_ov065_022636f4(Sess *s, u32 x) {
    func_ov065_02263700(s, 0x10, x);
}

void func_ov065_022636e8(Sess *s, u32 x) {
    func_ov065_02263700(s, 0x11, x);
}

void func_ov065_02263618(u8 *a, u8 *b, u32 c, u32 d) {
    Sess *g = &data_ov065_0228ed1c;
    MI_CpuFill8(g, 0, 0x64);
    g->unk_0a = BS16(*(u16 *)(b + 2));
    g->unk_18 = BS16(*(u16 *)b);
    g->unk_1c = Swap32(a + 0xc);
    if ((b[0xd] & 0x10) != 0) {
        g->unk_28 = Swap32(b + 8);
        func_ov065_02263700(g, 4, d);
        return;
    }
    g->unk_28 = 0;
    g->unk_24 = c + Swap32(b + 4);
    if ((b[0xd] & 3) != 0) {
        g->unk_24 = g->unk_24 + 1;
    }
    func_ov065_02263700(g, 0x14, d);
}

void func_ov065_02263578(u8 *a, u8 *b, Sess *s) {
    s->state = 3;
    s->unk_10 = (u32)(OS_GetTick() >> 16);
    s->unk_14 = Swap32(a + 0x10);
    s->unk_18 = BS16(*(u16 *)b);
    s->unk_1c = Swap32(a + 0xc);
    s->unk_24 = Swap32(b + 4) + 1;
    func_ov065_02263770(b, s);
    func_ov065_02263700(s, 0x12, (u16)((a[5] << 8) + 1));
}


}

namespace Unk_ov065_02262c5c_Ns {

// ov065_006: TCP/IP input path (socket library), 0x02262c5c..0x02263577

struct Unk_ov065_02262c5c_Ip {
    u8 b0;
    u8 b1;
    u16 h2;
    u8 b4;
    u8 b5;
    u16 h6;
    u8 b8;
    u8 b9;
    u16 ha;
    u16 hc;
    u16 he;
    u16 h10;
    u16 h12;
};

struct Unk_ov065_02262c5c_Frag {
    u32 key;
    u16 cnt;
    u16 id;
    u16 total;
    u16 end;
    u16 start[8];
    u16 fin[8];
    u32 tick;
    u8 *data;
    u8 *buf;
};

struct Unk_ov065_02262e64_Tcp {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u8 bc;
    u8 bd;
    u16 he;
};

struct Unk_ov065_02262e64_Sock {
    u32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
    u8 pad_0c[8];
    u32 unk_14;
    u16 unk_18;
    u16 pad_1a;
    u32 unk_1c;
    u8 pad_20[4];
    s32 unk_24;
    s32 unk_28;
    u16 unk_2c;
    u16 pad_2e;
    u32 unk_30;
    s32 unk_34;
    s32 (*unk_38)(u8 *, u32, Unk_ov065_02262e64_Sock *);
    u32 unk_3c;
    u8 *unk_40;
    u32 unk_44;
};

struct Unk_ov065_02262e64_Conn {
    u8 pad_00[0x68];
    Unk_ov065_02262e64_Conn *unk_68;
    u8 pad_6c[0x38];
    Unk_ov065_02262e64_Sock *unk_a4;
};

struct Unk_ov065_02262e64_Ctx {
    u8 pad_00[8];
    Unk_ov065_02262e64_Conn *unk_08;
};

static inline u16 Unk_ov065_02262c5c_Bs(u16 v) {
    return (u16)((v >> 8) | (v << 8));
}

extern "C" {

extern Unk_ov065_02262c5c_Frag data_ov065_0228f200[8];
extern u8 *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(u8 *);
extern Unk_ov065_02262e64_Ctx data_021fcc2c;

u64 OS_GetTick();
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void OS_YieldThread();
void OS_WakeupThreadDirect(u32);
void MI_CpuCopy8(void *, void *, u32);
s32 _s32_div_f(s32, s32);

s32 func_ov065_02264884(Unk_ov065_02262e64_Tcp *, u32, Unk_ov065_02262c5c_Ip *, u32);
s32 func_ov065_02263618(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *, u32, u16);
s32 func_ov065_022636f4(Unk_ov065_02262e64_Sock *, u16);
s32 func_ov065_022636e8(Unk_ov065_02262e64_Sock *, u16);
s32 func_ov065_02263770(Unk_ov065_02262e64_Tcp *, Unk_ov065_02262e64_Sock *);
Unk_ov065_02262e64_Sock *func_ov065_022637d0(Unk_ov065_02262c5c_Ip *);
Unk_ov065_02262e64_Sock *func_ov065_0226389c(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *);
s32 func_ov065_022639c4(u32, u32);
s32 func_ov065_02263578(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *, Unk_ov065_02262e64_Sock *);

void func_ov065_02263098(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q);
void func_ov065_022630c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_02263174(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_022633c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_0226347c(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
s32 func_ov065_02263518(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);

extern "C" {
s32 func_ov065_02263518(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_0226347c(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_022633c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_02263174(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_022630c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_02263098(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q);
void func_ov065_02262fbc(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_02262e64(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 c);
u8 *func_ov065_02262c5c(Unk_ov065_02262c5c_Ip *p, s32 *out);
}

s32 func_ov065_02263518(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        if (s->unk_08 == 1) {
            func_ov065_02263578(p, q, s);
        } else if ((u8)(s->unk_08 + 0xfd) <= 1) {
            s->unk_28--;
            func_ov065_02263578(p, q, s);
        } else {
            func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 3));
        }
        return 1;
    }
    return 0;
}

void func_ov065_0226347c(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    if (func_ov065_022639c4(((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he),
                            ((u32)Unk_ov065_02262c5c_Bs(p->h10) << 16) | Unk_ov065_02262c5c_Bs(p->h12)) != 0) {
        if (func_ov065_02263518(p, q, r) == 0) {
            Unk_ov065_02262e64_Sock *x = func_ov065_0226389c(p, q);
            if (x != 0) {
                func_ov065_02263578(p, q, x);
                return;
            }
            OS_YieldThread();
            x = func_ov065_0226389c(p, q);
            if (x != 0) func_ov065_02263578(p, q, x);
        }
    }
}

void func_ov065_022633c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s == 0 || s->unk_08 != 2) {
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 5));
        return;
    }
    OS_YieldThread();
    s->unk_24 = (((u32)Unk_ov065_02262c5c_Bs(q->h4) << 16) | Unk_ov065_02262c5c_Bs(q->h6)) + 1;
    s->unk_30 = ((u32)Unk_ov065_02262c5c_Bs(q->h8) << 16) | Unk_ov065_02262c5c_Bs(q->ha);
    s->unk_2c = Unk_ov065_02262c5c_Bs(q->he);
    func_ov065_02263770(q, s);
    func_ov065_022636f4(s, (u16)((p->b5 << 8) + 6));
    s->unk_08 = 4;
    if (s->unk_04 == 1) {
        s->unk_04 = 0;
        OS_WakeupThreadDirect(s->unk_00);
    }
}

void func_ov065_02263174(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    s32 fl;
    s32 last;
    u32 seq;
    if (s == 0) {
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 9));
        return;
    }
    fl = q->bd;
    s->unk_30 = ((u32)Unk_ov065_02262c5c_Bs(q->h8) << 16) | Unk_ov065_02262c5c_Bs(q->ha);
    seq = ((u32)Unk_ov065_02262c5c_Bs(q->h4) << 16) | Unk_ov065_02262c5c_Bs(q->h6);
    if (s->unk_08 == 4 && (u32)s->unk_24 != seq) {
        func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xa));
        return;
    }
    s->unk_2c = Unk_ov065_02262c5c_Bs(q->he);
    switch (s->unk_08) {
    case 0:
    case 2:
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x63));
        break;
    case 3:
        s->unk_08 = 4;
        if (s->unk_04 == 1) {
            s->unk_04 = 0;
            OS_WakeupThreadDirect(s->unk_00);
        }
        if (r == 0) break;
    case 4:
        s->unk_34++;
        {
            u32 room = s->unk_3c - s->unk_44;
            if (r > room) {
                r = room;
                last = 0;
            } else {
                last = 1;
            }
        }
        if (r != 0) {
            u32 sv = OS_DisableInterrupts();
            MI_CpuCopy8((u8 *)q + _s32_div_f(q->bc & 0xf0, 4), s->unk_40 + s->unk_44, r);
            s->unk_44 += r;
            s->unk_24 += r;
            OS_RestoreInterrupts(sv);
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                OS_WakeupThreadDirect(s->unk_00);
            }
        }
        if (last != 0 && (fl & 1) != 0) {
            s->unk_08 = 6;
            s->unk_24++;
            func_ov065_022636e8(s, (u16)((p->b5 << 8) + 0xb));
            if (r == 0 && s->unk_04 == 2) {
                s->unk_04 = 0;
                OS_WakeupThreadDirect(s->unk_00);
            }
        } else if (r != 0) {
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xc));
        }
        break;
    case 7:
    case 8:
        if ((fl & 1) != 0) {
            s->unk_24 += r + 1;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xd));
            s->unk_08 = 0;
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                OS_WakeupThreadDirect(s->unk_00);
            }
        } else {
            if (r != 0) {
                s->unk_24 += r;
                func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xe));
            }
            s->unk_08 = 8;
        }
        break;
    case 6:
    case 9:
        s->unk_08 = 0;
        if (s->unk_04 == 2) {
            s->unk_04 = 0;
            OS_WakeupThreadDirect(s->unk_00);
        }
        break;
    case 1:
    case 5:
    default:
        if ((fl & 1) != 0) s->unk_24++;
        func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x12));
        break;
    }
    OS_YieldThread();
}

void func_ov065_022630c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        switch (s->unk_08) {
        case 7:
            s->unk_24++;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x13));
            s->unk_08 = 9;
            return;
        case 8:
            s->unk_24++;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x14));
            s->unk_08 = 0;
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                OS_WakeupThreadDirect(s->unk_00);
                return;
            }
            return;
        case 4:
            s->unk_24++;
            func_ov065_022636e8(s, (u16)((p->b5 << 8) + 0x15));
            s->unk_08 = 6;
            return;
        default:
            func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x16));
            break;
        }
    }
}

void func_ov065_02263098(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        OS_YieldThread();
        s->unk_08 = 0;
        if ((u32)(s->unk_04 - 1) <= 1) {
            s->unk_04 = 0;
            OS_WakeupThreadDirect(s->unk_00);
        }
    }
}

void func_ov065_02262fbc(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    if (func_ov065_02264884(q, r, p, 6) == 0) {
        s32 t;
        r -= _s32_div_f(q->bc & 0xf0, 4);
        t = q->bd;
        switch (t & 0x17) {
        case 2:
            if ((t & 0x28) == 0) func_ov065_0226347c(p, q, r);
            return;
        case 0x12:
            if ((t & 0x28) == 0) func_ov065_022633c4(p, q, r);
            return;
        case 0x10:
        case 0x11:
            func_ov065_02263174(p, q, r);
            return;
        case 1:
            func_ov065_022630c4(p, q, r);
            return;
        default:
            break;
        }
        if ((t & 4) != 0) {
            func_ov065_02263098(p, q);
            return;
        }
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x17));
    }
}

void func_ov065_02262e64(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 c) {
    if (q->h6 != 0 && func_ov065_02264884(q, c, p, 0x11) != 0) return;
    Unk_ov065_02262e64_Conn *s = data_021fcc2c.unk_08;
    for (; s != 0; s = s->unk_68) {
        Unk_ov065_02262e64_Sock *k = s->unk_a4;
        if (k != 0 && k->unk_00 != 0 && k->unk_08 == 10 && k->unk_0a == Unk_ov065_02262c5c_Bs(q->h2)
            && (k->unk_18 == 0 || k->unk_18 == Unk_ov065_02262c5c_Bs(q->h0))
            && (k->unk_1c == 0 || k->unk_1c == (u32)-1
                || k->unk_1c == (((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he)))) {
            k->unk_14 = ((u32)Unk_ov065_02262c5c_Bs(p->h10) << 16) | Unk_ov065_02262c5c_Bs(p->h12);
            if (k->unk_1c == 0) {
                k->unk_1c = ((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he);
                k->unk_18 = Unk_ov065_02262c5c_Bs(q->h0);
            }
            if (k->unk_44 != 0) return;
            u32 m = k->unk_3c;
            c -= 8;
            if (c > m) k->unk_44 = m;
            else k->unk_44 = c;
            MI_CpuCopy8((u8 *)q + 8, k->unk_40, k->unk_44);
            if (k->unk_04 == 3) {
                k->unk_04 = 0;
                OS_WakeupThreadDirect(k->unk_00);
                return;
            }
            if (k->unk_38 != 0) {
                if (k->unk_38(k->unk_40, k->unk_44, k) != 0) k->unk_44 = 0;
            }
            return;
        }
    }
    return;
}

u8 *func_ov065_02262c5c(Unk_ov065_02262c5c_Ip *p, s32 *out) {
    u32 flags;
    u8 *ret;
    *out = 0;
    Unk_ov065_02262c5c_Frag *free = 0;
    flags = Unk_ov065_02262c5c_Bs(p->h6);
    if ((flags & 0x3fff) != 0) {
        u32 len, off, hl, end, o8;
        hl = (p->b0 & 0xf) << 2;
        u32 id = *(u16 *)&p->b4;
        u32 key = ((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he);
        Unk_ov065_02262c5c_Frag *e = data_ov065_0228f200;
        u32 i;
        for (i = 0; i < 8; e++, i++) {
            if (e->cnt != 0 && e->key == key && e->id == id) break;
            if (e->cnt == 0 && free == 0) free = e;
        }
        len = Unk_ov065_02262c5c_Bs(p->h2) - hl;
        off = flags & 0x1fff;
        o8 = off << 3;
        end = len + o8;
        if (i == 8) {
            if (free == 0 || end > 0x1000) return 0;
            e = free;
            e->buf = data_ov065_0228ebc8(hl + 0x100e);
            if (e->buf == 0) return 0;
            e->key = key;
            e->id = id;
            e->total = 0;
            u64 t = OS_GetTick();
            e->tick = (u32)(t >> 16);
            e->data = e->buf + 0xe + hl;
            MI_CpuCopy8(p, e->buf + 0xe, hl);
        }
        if (e->cnt == 8 || end > 0x1000) {
            e->cnt = 0;
            data_ov065_0228ebd0(e->buf);
            return 0;
        }
        u32 fin = off + ((len + 7) >> 3);
        flags &= 0x2000;
        if (flags == 0) {
            e->end = end;
            e->total = fin;
        }
        e->start[e->cnt] = off;
        e->fin[e->cnt] = fin;
        e->cnt++;
        MI_CpuCopy8((u8 *)p + hl, e->data + o8, len);
        u32 total = e->total;
        if (total == 0) return 0;
        u32 n, k, cur = 0;
        k = cur;
        n = e->cnt;
        for (; k < n;) {
            if (e->start[k] <= cur && cur < e->fin[k]) {
                cur = e->fin[k];
                k = 0;
            } else {
                k++;
            }
        }
        if (cur < total) return 0;
        ret = e->buf + 0xe;
        *(u16 *)(ret + 2) = Unk_ov065_02262c5c_Bs((u16)(e->end + ((ret[0] & 0xf) << 2)));
        e->cnt = 0;
        *out = 1;
        return ret;
    }
    return (u8 *)p;
}


}

}

namespace Unk_ov065_02262240_Ns {

struct Unk_ov065_02262240_Sess;

struct Unk_ov065_02262240_Thr {
    u8 pad_00[0x68];
    Unk_ov065_02262240_Thr *next;
    u8 pad_6c[0xa4 - 0x6c];
    Unk_ov065_02262240_Sess *sess;
};

struct Unk_ov065_02262240_Sess {
    Unk_ov065_02262240_Thr *unk_00;
    u32 unk_04;
    u8 state;
    u8 unk_09;
    u16 unk_0a;
    u8 pad_0c[4];
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 pad_24[4];
    u32 unk_28;
    u16 unk_2c;
    u16 unk_2e;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u8 pad_3c[4];
    u8 *unk_40;
    u32 unk_44;
    u8 pad_48[0x5c - 0x48];
    u8 *unk_5c;
    u32 unk_60;
};

struct Unk_ov065_02262240_Os {
    u32 unk_00;
    Unk_ov065_02262240_Thr *cur;
    Unk_ov065_02262240_Thr *list;
};

struct Unk_ov065_02262a54_Rng {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

typedef Unk_ov065_02262240_Sess Sess;
typedef Unk_ov065_02262240_Thr Thr;

extern "C" {
extern Unk_ov065_02262240_Os data_021fcc2c;
extern void (*data_ov065_0228eba8)();
extern s32 (*data_ov065_0228ebac)();
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228ebd8;
extern u8 data_ov065_0228eb8c;
extern u8 data_ov065_0228eb88;
extern u16 data_ov065_0228eb94;
extern u16 data_ov065_0228eb98;
extern Unk_ov065_02262a54_Rng data_ov065_0228ec04;

// main module
u64 OS_GetTick();
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void OS_Sleep(s32);
void OS_YieldThread();
void OS_SleepThread(void *);
void memmove(void *, void *, u32);
s64 _ll_mul(s64, s64);

// same overlay, out of range
s32 func_ov065_0226439c(u32);
s32 func_ov065_02264c44(u32);
s32 func_ov065_02264c20();
s32 func_ov065_02264eac(Sess *);
s32 func_ov065_02263e4c(u8 *, u32, Sess *);
s32 func_ov065_02263f24(u8 *, u32, Sess *);
s32 func_ov065_02264dd4(u8 *, u32, u8 *, u32, Sess *);
s32 func_ov065_02263c90(u8 *, u32, Sess *, u32, u32);
s32 func_ov065_0226502c(u32, Sess *);
s32 func_ov065_02265074(u32 *, Sess *);
s32 func_ov065_022636f4(Sess *, u32);
s32 func_ov065_022636e8(Sess *, u32);
s32 func_ov065_02263700(Sess *, u32, u32);
s32 func_ov065_02264d80(Sess *);
s32 func_ov065_02265130(Sess *);
s32 func_ov065_02265228(Sess *);
u8 *func_ov065_0226450c(u32 *);
s32 func_ov065_022644cc();
s32 func_ov065_02263b28(u8 *, u32);
s32 func_ov065_02264788(u32);
u32 func_ov065_022648d4(u8 *, u32);
s32 func_ov065_02264298(u8 *, u32, u32);
s32 func_ov065_02262e64(u8 *, u8 *, u32);
s32 func_ov065_02263924(u8 *, u8 *, u32);
s32 func_ov065_02262fbc(u8 *, u8 *, u32);
u8 *func_ov065_02262c5c(u8 *, s32 *);

// in range
void func_ov065_02262240();
void func_ov065_022622c0();
s32 func_ov065_022622ec();
u32 func_ov065_02262334(u32, u32);
u32 func_ov065_022623a4(u8 *, u32, u8 *, u32);
u32 func_ov065_0226242c(u8 *, u32, u8 *, u32, Sess *);
void func_ov065_02262580(u8 *, u32, u8 *, u32, Sess *, u32);
u32 func_ov065_022625ac(u8 *, u32, Sess *, u32);
void func_ov065_02262640(u32);
void func_ov065_02262670(u32, Sess *);
u8 *func_ov065_022626b8(u32 *);
u8 *func_ov065_02262708(u32 *, Sess *);
u8 *func_ov065_0226275c(u32 *, Sess *);
void func_ov065_02262788();
void func_ov065_022627d4();
void func_ov065_02262804(Sess *);
u32 func_ov065_02262840(u16 *, u32 *);
s32 func_ov065_02262874();
s32 func_ov065_022628ac(Sess *);
void func_ov065_02262924();
void func_ov065_02262954(u32);
void func_ov065_02262968(Sess *);
void func_ov065_02262984(Thr *);
void func_ov065_02262998();
void func_ov065_022629b0();
void func_ov065_022629d0(u32, u32, u32);
void func_ov065_02262a18();
void func_ov065_02262a34();
void func_ov065_02262a44(Sess *);
u32 func_ov065_02262a54();
u16 func_ov065_02262a80();
void func_ov065_02262ae4();
void func_ov065_02262b30(u8 *, u32);
}

static inline u16 Swap16(u16 v) {
    return (v >> 8) | (v << 8);
}

extern "C" {
void func_ov065_02262b30(u8 *p, u32 len);
void func_ov065_02262ae4();
u16 func_ov065_02262a80();
u32 func_ov065_02262a54();
void func_ov065_02262a44(Sess *s);
void func_ov065_02262a34();
void func_ov065_02262a18();
void func_ov065_022629d0(u32 a, u32 b, u32 c);
void func_ov065_022629b0();
void func_ov065_02262998();
void func_ov065_02262984(Thr *t);
void func_ov065_02262968(Sess *s);
void func_ov065_02262954(u32 v);
void func_ov065_02262924();
s32 func_ov065_022628ac(Sess *s);
s32 func_ov065_02262874();
u32 func_ov065_02262840(u16 *a, u32 *b);
void func_ov065_02262804(Sess *s);
void func_ov065_022627d4();
void func_ov065_02262788();
u8 *func_ov065_0226275c(u32 *out, Sess *s);
u8 *func_ov065_02262708(u32 *out, Sess *s);
u8 *func_ov065_022626b8(u32 *out);
void func_ov065_02262670(u32 a, Sess *s);
void func_ov065_02262640(u32 a);
u32 func_ov065_022625ac(u8 *a, u32 b, Sess *s, u32 flag);
void func_ov065_02262580(u8 *a, u32 b, u8 *c, u32 d, Sess *s, u32 flag);
u32 func_ov065_0226242c(u8 *a, u32 b, u8 *c, u32 d, Sess *s);
u32 func_ov065_022623a4(u8 *a, u32 b, u8 *c, u32 d);
u32 func_ov065_02262334(u32 a, u32 b);
s32 func_ov065_022622ec();
void func_ov065_022622c0();
void func_ov065_02262240();
}

void func_ov065_02262b30(u8 *p, u32 len) {
    s32 flag;
    u32 dst;
    u32 src;
    src = (Swap16(*(u16 *)(p + 0xc)) << 16) | Swap16(*(u16 *)(p + 0xe));
    dst = (Swap16(*(u16 *)(p + 0x10)) << 16) | Swap16(*(u16 *)(p + 0x12));
    if (dst != src) {
        if (func_ov065_02264788(dst) == 0) return;
        if (len < Swap16(*(u16 *)(p + 2))) return;
        if (func_ov065_022648d4(p, (p[0] & 0xf) * 4) != 0xffff) return;
        {
            u16 c = *(u16 *)(p + 0x12);
            u16 d = *(u16 *)(p + 0x10);
            u32 x = (Swap16(d) << 16) | Swap16(c);
            if (data_ov065_0228ebd8 == x) {
                u16 a = *(u16 *)(p + 0xe);
                u16 b = *(u16 *)(p + 0xc);
                func_ov065_02264298(p - 8, (Swap16(b) << 16) | Swap16(a), 0);
            }
        }
    }
    p = func_ov065_02262c5c(p, &flag);
    if (p == 0) return;
    {
        u32 hl = (p[0] & 0xf) * 4;
        u8 *pay = p + hl;
        u32 n = Swap16(*(u16 *)(p + 2)) - hl;
        u8 proto = p[9];
        if (proto == 0x11) {
            func_ov065_02262e64(p, pay, n);
        } else if (data_ov065_0228ebd8 != 0) {
            if (proto == 1) {
                func_ov065_02263924(p, pay, n);
            } else if (proto == 6) {
                func_ov065_02262fbc(p, pay, n);
            }
        }
        if (flag != 0) {
            data_ov065_0228ebd0(p - 0xe);
        }
    }
}

void func_ov065_02262ae4() {
    u32 len;
    for (;;) {
        u8 *p = func_ov065_0226450c(&len);
        if (len > 0x22) {
            u16 t = Swap16(*(u16 *)(p + 0xc));
            switch (t) {
            case 0x800:
                func_ov065_02262b30(p + 0xe, len - 0xe);
                break;
            case 0x806:
                func_ov065_02263b28(p + 0xe, len - 0xe);
                break;
            }
        }
        func_ov065_022644cc();
    }
}

u16 func_ov065_02262a80() {
    s32 found;
    do {
        found = 0;
        data_ov065_0228eb98++;
        if (data_ov065_0228eb98 < 0x400 || data_ov065_0228eb98 >= 0x1388) {
            data_ov065_0228eb98 = 0x400;
        }
        Thr *t;
        for (t = data_021fcc2c.list; t != 0; t = t->next) {
            Sess *s = t->sess;
            if (s != 0 && s->unk_00 != 0 && s->unk_0a == data_ov065_0228eb98) {
                found = 1;
                break;
            }
        }
    } while (found != 0);
    return data_ov065_0228eb98;
}

u32 func_ov065_02262a54() {
    Unk_ov065_02262a54_Rng *g = &data_ov065_0228ec04;
    g->unk_00 = _ll_mul(g->unk_08, g->unk_00) + g->unk_10;
    return (u32)((u64)g->unk_00 >> 32);
}

void func_ov065_02262a44(Sess *s) {
    data_021fcc2c.cur->sess = s;
}

void func_ov065_02262a34() {
    data_021fcc2c.cur->sess = 0;
}

void func_ov065_02262a18() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->state = 10;
        s->unk_44 = 0;
    }
}

void func_ov065_022629d0(u32 a, u32 b, u32 c) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (c == 0x7f000001) {
            c = data_ov065_0228ebd8;
        }
        s->unk_1a = b;
        s->unk_18 = s->unk_1a;
        s->unk_20 = c;
        s->unk_1c = s->unk_20;
        if (a == 0) {
            s->unk_0a = func_ov065_02262a80();
        } else {
            s->unk_0a = a;
        }
    }
}

void func_ov065_022629b0() {
    Thr *c = data_021fcc2c.cur;
    Sess *s = c->sess;
    if (s != 0) {
        s->unk_00 = c;
        s->state = 0;
        s->unk_44 = 0;
        s->unk_60 = 0;
        s->unk_38 = 0;
    }
}

void func_ov065_02262998() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->unk_00 = 0;
    }
}

void func_ov065_02262984(Thr *t) {
    t->sess = data_021fcc2c.cur->sess;
}

void func_ov065_02262968(Sess *s) {
    s->unk_28 = func_ov065_02262a54();
    s->state = 1;
    s->unk_04 = 1;
    OS_SleepThread(0);
}

void func_ov065_02262954(u32 v) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->unk_38 = v;
    }
}

void func_ov065_02262924() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_02265228(s);
        } else {
            func_ov065_02262968(s);
        }
    }
}

s32 func_ov065_022628ac(Sess *s) {
    u32 i;
    u32 seed = func_ov065_02262a54();
    i = 0;
    do {
        s->unk_28 = seed;
        s->state = 2;
        s->unk_10 = (u32)(OS_GetTick() >> 16);
        func_ov065_02263700(s, 2, 0x18);
        u32 ints = OS_DisableInterrupts();
        if (data_ov065_0228ebd8 != 0) {
            s->unk_04 = 1;
            OS_SleepThread(0);
        }
        OS_RestoreInterrupts(ints);
        if (s->state == 4) {
            return 0;
        }
        if (data_ov065_0228ebd8 == 0) break;
        i++;
    } while (i < 3);
    return 1;
}

s32 func_ov065_02262874() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            return func_ov065_02265130(s);
        }
        return func_ov065_022628ac(s);
    }
    return 1;
}

u32 func_ov065_02262840(u16 *a, u32 *b) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->state == 4 || s->state == 10) {
            if (a != 0) {
                *a = s->unk_18;
            }
            if (b != 0) {
                *b = s->unk_14;
            }
            return s->unk_1c;
        }
    }
    return 0;
}

void func_ov065_02262804(Sess *s) {
    OS_YieldThread();
    u8 st = s->state;
    if ((u8)(st + 0xfd) <= 1) {
        func_ov065_022636e8(s, 0x19);
        s->state = 7;
    } else if (st != 0) {
        func_ov065_022636f4(s, 0x1a);
    }
}

void func_ov065_022627d4() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_02264d80(s);
        } else {
            func_ov065_02262804(s);
        }
    }
}

void func_ov065_02262788() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s32 t = (s32)(OS_GetTick() >> 16);
        while (data_ov065_0228ebac() != 0 && s->state != 0 && (s32)(OS_GetTick() >> 16) - t < 0x27) {
            func_ov065_02264c20();
        }
    }
}

u8 *func_ov065_0226275c(u32 *out, Sess *s) {
    while (s->unk_44 == 0) {
        s->unk_04 = 3;
        OS_SleepThread(0);
    }
    *out = s->unk_44;
    return s->unk_40;
}

u8 *func_ov065_02262708(u32 *out, Sess *s) {
    if (s->unk_44 == 0 && s->state == 4) {
        while (s->unk_44 == 0 && s->state == 4) {
            s->unk_04 = 2;
            OS_SleepThread(0);
        }
    } else {
        OS_YieldThread();
    }
    *out = s->unk_44;
    if (*out != 0) {
        return s->unk_40;
    }
    return 0;
}

u8 *func_ov065_022626b8(u32 *out) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if ((u8)(s->state + 0xf6) <= 1) {
            return func_ov065_0226275c(out, s);
        }
        if (s->unk_09 != 0) {
            return (u8 *)func_ov065_02265074(out, s);
        }
        return func_ov065_02262708(out, s);
    }
    *out = 0;
    return 0;
}

void func_ov065_02262670(u32 a, Sess *s) {
    u32 ints = OS_DisableInterrupts();
    u32 n = s->unk_44;
    if (a >= n) {
        s->unk_44 = 0;
    } else {
        u8 *p = s->unk_40;
        u8 *q = p + a;
        n -= a;
        s->unk_44 = n;
        q = n ? q : q;
        memmove(p, q, n);
    }
    OS_RestoreInterrupts(ints);
    if (s->state != 10 && s->state != 11 && s->unk_44 == 0) {
        func_ov065_022636f4(s, 0x1b);
    }
}

void func_ov065_02262640(u32 a) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_0226502c(a, s);
            return;
        }
        func_ov065_02262670(a, s);
    }
}

u32 func_ov065_022625ac(u8 *a, u32 b, Sess *s, u32 flag) {
    u32 r4;
    u32 win;
    u32 cnt;
    u32 budget;
    if (flag != 0) {
        win = 1;
    } else {
        win = s->unk_2c;
    }
    cnt = s->unk_34;
    budget = cnt * 2 + 4;
    while (b != 0 && s->state == 4) {
        r4 = s->unk_2e;
        if (r4 >= win) r4 = win;
        if (data_ov065_0228eb94 < r4) r4 = data_ov065_0228eb94;
        if (flag == 0) r4 &= ~1;
        if (b < r4) r4 = b;
        {
            u32 t = budget + (s->unk_34 - cnt);
            cnt = s->unk_34;
            budget = t - 1;
            if (t == 0) r4 = 0;
        }
        if (r4 == 0) break;
        win -= r4;
        func_ov065_02263c90(a, r4, s, 0x18, 0);
        OS_YieldThread();
        a += r4;
        b -= r4;
    }
    return r4;
}

void func_ov065_02262580(u8 *a, u32 b, u8 *c, u32 d, Sess *s, u32 flag) {
    if (func_ov065_022625ac(a, b, s, flag) != 0) {
        if (d != 0) {
            func_ov065_022625ac(c, d, s, 0);
        }
    }
}

u32 func_ov065_0226242c(u8 *a, u32 b, u8 *c, u32 d, Sess *s) {
    s32 total = 0;
    u32 prev;
    s32 now;
    s32 t1;
    u32 sent;
    u32 flag;
    s->unk_34 = 0;
    flag = 0;
    now = (s32)(OS_GetTick() >> 16);
    while (data_ov065_0228ebac() != 0 && b != 0 && s->state == 4 && (s32)(OS_GetTick() >> 16) - now < 0x9f) {
        prev = s->unk_28;
        func_ov065_02262580(a, b, c, d, s, flag);
        t1 = (s32)(OS_GetTick() >> 16);
        for (;;) {
            func_ov065_02264c20();
            if (data_ov065_0228ebac() == 0) break;
            if (s->state != 4) break;
            if (s->unk_28 == s->unk_30) break;
            if ((s32)(OS_GetTick() >> 16) - t1 >= 0xf) break;
            if (flag != 0 && s->unk_2c != 0) break;
        }
        sent = s->unk_30 - prev;
        total += sent;
        if (sent != 0) {
            now = (s32)(OS_GetTick() >> 16);
        }
        s->unk_28 = s->unk_30;
        if (s->state == 4 && s->unk_2c == 0 && sent == 0) {
            if (flag == 0) {
                t1 = (s32)(OS_GetTick() >> 16);
                while (data_ov065_0228ebac() != 0 && (s32)(OS_GetTick() >> 16) - t1 < 0xf) {
                    func_ov065_02264c20();
                    if (s->unk_2c != 0) break;
                }
                if (s->unk_2c == 0) {
                    flag = 1;
                }
            }
        } else {
            flag = 0;
        }
        if (sent >= b) {
            u32 x = sent - b;
            a = c + x;
            b = d - x;
            c = 0;
            d = 0;
        } else {
            a = a + sent;
            b = b - sent;
        }
    }
    return total;
}

u32 func_ov065_022623a4(u8 *a, u32 b, u8 *c, u32 d) {
    u32 r;
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        u8 st = s->state;
        if (st == 10) {
            if (b != 0) {
                func_ov065_02263e4c(a, b, s);
            }
            if (d != 0) {
                func_ov065_02263e4c(c, d, s);
            }
            r = b + d;
        } else if (st == 11) {
            if (b != 0) {
                func_ov065_02263f24(a, b, s);
            }
            if (d != 0) {
                func_ov065_02263f24(c, d, s);
            }
            r = b + d;
        } else {
            if (s->unk_09 != 0) {
                r = func_ov065_02264dd4(a, b, c, d, s);
            } else {
                r = func_ov065_0226242c(a, b, c, d, s);
            }
        }
        if (data_ov065_0228eb88 == 0) {
            return r;
        }
    }
    return 0;
}

u32 func_ov065_02262334(u32 a, u32 b) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        u32 r;
        if (s->unk_60 != 0) {
            r = func_ov065_022623a4(s->unk_5c, s->unk_60, (u8 *)a, b);
            if (r < s->unk_60) {
                memmove(s->unk_5c, s->unk_5c + r, s->unk_60 - r);
                s->unk_60 = s->unk_60 - r;
                return 0;
            }
            r = r - s->unk_60;
            s->unk_60 = 0;
            return r;
        }
        return func_ov065_022623a4((u8 *)a, b, 0, 0);
    }
    return 0;
}

s32 func_ov065_022622ec() {
    Sess *s = data_021fcc2c.cur->sess;
    s32 r;
    if (s != 0) {
        if (s->unk_09 != 0) {
            r = func_ov065_02264eac(s);
        } else {
            r = s->unk_44;
        }
        if (r == 0) {
            if (s->state != 4 && (u8)(s->state + 0xf6) > 1) {
                return -1;
            }
        }
        return r;
    }
    return 0;
}

void func_ov065_022622c0() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_60 != 0) {
            func_ov065_022623a4(s->unk_5c, s->unk_60, 0, 0);
            s->unk_60 = 0;
        }
    }
}

void func_ov065_02262240() {
    s32 start;
    data_ov065_0228eba8();
    if (data_ov065_0228ebd8 != 0) {
        func_ov065_0226439c(data_ov065_0228ebd8);
        OS_Sleep(0x64);
        func_ov065_0226439c(data_ov065_0228ebd8);
        start = (s32)(OS_GetTick() >> 16);
        while (data_ov065_0228ebac() != 0 && (s32)(OS_GetTick() >> 16) - start < 0x17) {
            if (data_ov065_0228eb8c != 0) {
                func_ov065_02264c44(4);
                return;
            }
            OS_Sleep(0x64);
        }
    }
}


}

namespace Unk_ov065_02261718_Ns {

struct Unk_ov065_02261fd8_B {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09[7];
    s32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1a;
    s32 unk_1c;
    s32 unk_20;
};

struct Unk_ov065_02261fd8_N {
    u8 unk_00[0x68];
    Unk_ov065_02261fd8_N *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02261fd8_B *unk_a4;
};

struct Unk_ov065_02261fd8_H {
    u8 unk_00[8];
    Unk_ov065_02261fd8_N *unk_08;
};

struct Unk_ov065_02261fd8_E {
    s32 unk_00;
    u8 unk_04[6];
    u16 unk_0a;
};

struct Unk_ov065_02261fd8_Q {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08[0x24];
    s32 unk_2c;
    u32 unk_30;
    u32 unk_34;
};

struct Unk_ov065_02261e94_R {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

extern "C" {
#define data_ov065_0228ef2a (data_ov065_0228ef00 + 0x2a)
extern s32 (*data_ov065_0228ebac)(void);
extern void (*data_ov065_0228ebcc)(void);
extern void (*data_ov065_0228ebd0)(u32);
extern u32 data_ov065_0228eba0;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebb0;
extern u32 data_ov065_0228ebbc;
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228ebc4;
extern u32 data_ov065_0228ebd4;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228ebdc;
extern u32 data_ov065_0228ebe0;
extern u32 data_ov065_0228ebf4[];
extern u32 data_ov065_0228ebfc[2];
extern Unk_ov065_02261e94_R data_ov065_0228ec04;
extern Unk_ov065_02261fd8_E data_ov065_0228ec58[8];
extern u32 data_ov065_0228ecb8[25];
extern u8 data_ov065_0228ef00[];
extern u32 data_ov065_0228f080;
extern Unk_ov065_02261fd8_Q data_ov065_0228f200[8];
extern u8 data_ov065_0228b428[];
extern Unk_ov065_02261fd8_H data_021fcc2c;

u64 OS_GetTick(void);
void MI_CpuFill8(void *dst, s32 v, s32 n);
void MI_CpuCopy8(const void *src, void *dst, s32 n);
void OS_Sleep(s32 ms);
void OS_WakeupThreadDirect(s32 a);
u64 _ll_mul(u64 a, u64 b);

void func_ov065_02262334(u8 *buf, u32 len);
u8 *func_ov065_022626b8(u32 *len);
void func_ov065_02262640(u32 len);
s32 func_ov065_022622ec(void);
void func_ov065_02264c20(void);
void func_ov065_02264c44(s32 a);
void func_ov065_02264d24(u32 a);
s32 func_ov065_02264760(const void *a, const void *b);
void func_ov065_022629b0(void);
void func_ov065_02262a18(void);
void func_ov065_022629d0(u32 a, u32 b, s32 c);
void func_ov065_02262998(void);
void func_ov065_02262a34(void);
void func_ov065_02262a44(void *a);
void func_ov065_02262240(void);
}

static inline u32 RD16(const u8 *p) { return (u16)(p[0] << 8 | p[1]); }
#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

extern "C" {
s32 func_ov065_022617e4(const u8 *name, u32 type, s32 xid);
u32 func_ov065_022617bc(const u8 *p, const u8 **end);
u8 *func_ov065_02261980(u8 *p);
u8 *func_ov065_02261e94(u8 *buf, u32 msgtype, u32 *xidout);
u8 *func_ov065_02261e74(u32 a, u32 size, u8 *dst, u32 used);
u32 func_ov065_02261d60(u32 mode);
u32 func_ov065_02261e00(void);
s32 func_ov065_02261af8(u32 xid, s32 i);
s32 func_ov065_022619f8(u32 *out, s32 mode);
s32 func_ov065_02261aac(void);
void func_ov065_022619a4(void);

extern "C" {
void func_ov065_02261fd8(void);
u8 *func_ov065_02261e94(u8 *buf, u32 msgtype, u32 *xidout);
u8 *func_ov065_02261e74(u32 a, u32 size, u8 *dst, u32 used);
u32 func_ov065_02261e00(void);
u32 func_ov065_02261d60(u32 mode);
s32 func_ov065_02261af8(u32 xid, s32 i);
s32 func_ov065_02261aac(void);
s32 func_ov065_022619f8(u32 *out, s32 mode);
void func_ov065_022619a4(void);
u8 *func_ov065_02261980(u8 *p);
s32 func_ov065_022617e4(const u8 *name, u32 type, s32 xid);
u32 func_ov065_022617bc(const u8 *p, const u8 **end);
s32 func_ov065_02261758(const u8 *s, u32 *out);
s32 func_ov065_02261718(const u8 *a, const u8 *b, s32 c);
}

void func_ov065_02261fd8(void) {
    s32 state;
    s32 first;
    u32 cnt;
    u32 now;
    s32 i;
    Unk_ov065_02261fd8_E *e;
    Unk_ov065_02261fd8_N *n;
    s32 j;
    Unk_ov065_02261fd8_Q *q;

    data_ov065_0228ebd4 = 0;
    MI_CpuFill8(data_ov065_0228ecb8, 0, 0x64);
    data_ov065_0228ecb8[15] = 0x180;
    data_ov065_0228ecb8[16] = (u32)&data_ov065_0228f080;
    data_ov065_0228ecb8[18] = 0x180;
    data_ov065_0228ecb8[19] = (u32)&data_ov065_0228ef00;
    func_ov065_02262a44(data_ov065_0228ecb8);
    state = 0;
    first = 1;
    cnt = 1;
    data_ov065_0228eba0 = 1;
    for (;;) {
        OS_Sleep(1000);
        if (data_ov065_0228ebd4 != 0) {
            break;
        }
        now = (u32)(OS_GetTick() >> 16);
        if (data_ov065_0228ebac() != 0) {
            cnt--;
            if (cnt == 0) {
                if ((data_ov065_0228ebbc & 1) != 0) {
                    if (state == 0) {
                        func_ov065_02262240();
                        state = 1;
                    }
                } else {
                    switch (state) {
                    case 0:
                        if (first != 0) {
                            data_ov065_0228eba0 = 2;
                            first = 0;
                        }
                        if (func_ov065_02261aac() == 0 || func_ov065_022619f8(&cnt, 0) == 0) {
                            func_ov065_02262240();
                            state = 3;
                        } else {
                            state = 1;
                        }
                        break;
                    case 1:
                        if (func_ov065_022619f8(&cnt, 1) == 0) {
                            if (cnt < 0x3c) {
                                state = 2;
                            }
                        }
                        break;
                    case 2:
                        if (func_ov065_022619f8(&cnt, 2) != 0) {
                            state = 1;
                        } else if (cnt < 0x3c) {
                            func_ov065_02264c44(3);
                            state = 0;
                            cnt = 1;
                        }
                        break;
                    case 3:
                        break;
                    }
                }
            }
        } else {
            func_ov065_02264c44(1);
            state = 0;
            cnt = 1;
        }
        for (i = 0, e = data_ov065_0228ec58; i < 8; e++, i++) {
            if (e->unk_00 != 0) {
                if ((s16)(now - e->unk_0a) > 0x3bd) {
                    e->unk_00 = 0;
                }
            }
        }
        for (n = data_021fcc2c.unk_08; n != NULL; n = n->unk_68) {
            Unk_ov065_02261fd8_B *b = n->unk_a4;
            if (b != NULL && b->unk_00 != 0) {
                u32 st = b->unk_08;
                if (st == 3 && (s32)(now - b->unk_10) > 0x27) {
                    b->unk_08 = 1;
                    b->unk_18 = b->unk_1a;
                    b->unk_1c = b->unk_20;
                } else if (st == 2 && (s32)(now - b->unk_10) > 0x27) {
                    if (b->unk_04 == 1) {
                        b->unk_08 = 0;
                        b->unk_04 = 0;
                        OS_WakeupThreadDirect(b->unk_00);
                    }
                }
            }
        }
        for (j = 0, q = data_ov065_0228f200; j < 8; q++, j++) {
            if (q->unk_04 != 0) {
                if ((s32)(now - q->unk_2c) > 0xef) {
                    data_ov065_0228ebd0(q->unk_34);
                    q->unk_04 = 0;
                }
            }
        }
        func_ov065_02264d24(now);
        if (data_ov065_0228ebcc != NULL) {
            data_ov065_0228ebcc();
        }
    }
    if ((data_ov065_0228ebbc & 1) == 0 && state != 3) {
        func_ov065_022619a4();
    }
    func_ov065_02262a34();
}

u8 *func_ov065_02261e94(u8 *buf, u32 msgtype, u32 *xidout) {
    u64 m;
    u32 hi;
    MI_CpuFill8(buf, 0, 0xec);
    *(u16 *)(buf + 0) = 0x101;
    buf[2] = 6;
    m = _ll_mul(data_ov065_0228ec04.unk_08, data_ov065_0228ec04.unk_00);
    data_ov065_0228ec04.unk_00 = data_ov065_0228ec04.unk_10 + m;
    m = data_ov065_0228ec04.unk_00;
    hi = (u32)(m >> 32);
    if (xidout != 0) {
        *xidout = hi;
    }
    *(u16 *)(buf + 4) = BS16((u16)(hi >> 16));
    *(u16 *)(buf + 6) = BS16((u16)hi);
    *(u16 *)(buf + 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(buf + 0xe) = BS16((u16)data_ov065_0228ebd8);
    MI_CpuCopy8(data_ov065_0228ebf4, buf + 0x1c, 6);
    *(u16 *)(buf + 0xec) = 0x8263;
    *(u16 *)(buf + 0xee) = 0x6353;
    *(u16 *)(buf + 0xf0) = 0x135;
    buf[0xf2] = msgtype;
    buf[0xf3] = 0x3d;
    buf[0xf4] = 7;
    buf[0xf5] = 1;
    MI_CpuCopy8(data_ov065_0228ebf4, buf + 0xf6, 6);
    buf[0xfc] = 0xc;
    buf[0xfd] = 0xa;
    MI_CpuCopy8(data_ov065_0228b428, buf + 0xfe, 0xa);
    buf[0x108] = 0x37;
    buf[0x109] = 3;
    buf[0x10a] = 1;
    buf[0x10b] = 3;
    buf[0x10c] = 6;
    return buf + 0x10d;
}

u8 *func_ov065_02261e74(u32 a, u32 size, u8 *dst, u32 used) {
    if (used < size) {
        u32 n = size - used;
        MI_CpuFill8(dst, a, n);
        dst += n;
    }
    return dst;
}

u32 func_ov065_02261e00(void) {
    u32 xid;
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 1, &xid);
    if (data_ov065_0228ebe0 != 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (u16)(data_ov065_0228ebe0 >> 16) >> 8;
        p[3] = data_ov065_0228ebe0 >> 16;
        p[4] = (u16)data_ov065_0228ebe0 >> 8;
        p[5] = data_ov065_0228ebe0;
        p += 6;
    }
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    return xid;
}

u32 func_ov065_02261d60(u32 mode) {
    u32 xid;
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 3, &xid);
    if (mode == 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (u16)(data_ov065_0228ebe0 >> 16) >> 8;
        p[3] = data_ov065_0228ebe0 >> 16;
        p[4] = (u16)data_ov065_0228ebe0 >> 8;
        p[5] = data_ov065_0228ebe0;
        p[6] = 0x36;
        p[7] = 4;
        p[8] = (u16)(data_ov065_0228ebb0 >> 16) >> 8;
        p[9] = data_ov065_0228ebb0 >> 16;
        p[10] = (u16)data_ov065_0228ebb0 >> 8;
        p[11] = data_ov065_0228ebb0;
        p += 12;
    }
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    return xid;
}

s32 func_ov065_02261af8(u32 xid, s32 i) {
    u32 len;
    s32 result;
    u32 start;
    s32 timeout;
    u8 *p;

    timeout = (i + 1) * 15;
    start = (u32)(OS_GetTick() >> 16);
    result = 0;
    goto test;
loop:
    if (func_ov065_022622ec() == 0) {
        func_ov065_02264c20();
        goto test;
    }
    {
        p = func_ov065_022626b8(&len);
        if (len > 0xf0 && p[0] == 2) {
            u32 rx = (BS16(*(u16 *)(p + 4)) << 16) | BS16(*(u16 *)(p + 6));
            if (xid == rx && func_ov065_02264760(p + 0x1c, data_ov065_0228ebf4) == 0) {
                u8 *o;
                u8 *end;
                u32 ip;
                result = 3;
                ip = ((u16)(p[0x10] << 8 | p[0x11]) << 16) | (u16)(p[0x12] << 8 | p[0x13]);
                end = p + len;
                if (p[0xec] == 0x63 && p[0xed] == 0x82 && p[0xee] == 0x53 && ((o = p + 0xf0), p[0xef] == 0x63)) {
                    s32 c;
                    goto otest;
                    {
                    oloop:
                        if (c == 0) {
                            goto otest;
                        }
                        switch (c) {
                        case 1:
                            data_ov065_0228eba4 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 3:
                            data_ov065_0228ebc0 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 6:
                            if (o[0] < 8) {
                                data_ov065_0228ebfc[1] = 0;
                            } else {
                                data_ov065_0228ebfc[1] = ((u16)(o[5] << 8 | o[6]) << 16) | (u16)(o[7] << 8 | o[8]);
                            }
                            data_ov065_0228ebfc[0] = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 0x33:
                            data_ov065_0228ebdc = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 0x35:
                            switch (o[1]) {
                            case 2:
                                data_ov065_0228ebe0 = ip;
                                result = 1;
                                break;
                            case 5:
                                data_ov065_0228ebd8 = ip;
                                result = 2;
                                break;
                            }
                            break;
                        case 0x36:
                            data_ov065_0228ebb0 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        }
                        o += o[0] + 1;
                    otest:
                        if (o < end) {
                            c = *o++;
                            if (c != 0xff) {
                                goto oloop;
                            }
                        }
                    }
                }
            }
        }
        func_ov065_02262640(len);
    }
test:
    if (data_ov065_0228ebac() != 0 && result == 0) {
        u32 now = (u32)(OS_GetTick() >> 16);
        if ((s32)(now - start) < timeout) {
            goto loop;
        }
    }
    return result;
}

s32 func_ov065_02261aac(void) {
    s32 r;
    s32 i;
    func_ov065_022629b0();
    func_ov065_02262a18();
    func_ov065_022629d0(0x44, 0x43, -1);
    for (i = 0; i < 4; i++) {
        r = func_ov065_02261af8(func_ov065_02261e00(), i);
        if (r == 1) {
            break;
        }
    }
    func_ov065_02262998();
    if (r == 1) {
        return 1;
    }
    return 0;
}

s32 func_ov065_022619f8(u32 *out, s32 mode) {
    s32 r;
    s32 i;
    u32 v;
    func_ov065_022629b0();
    func_ov065_02262a18();
    if (mode == 1) {
        func_ov065_022629d0(0x44, 0x43, data_ov065_0228ebb0);
    } else {
        func_ov065_022629d0(0x44, 0x43, -1);
    }
    for (i = 0; i < 4; i++) {
        r = func_ov065_02261af8(func_ov065_02261d60(mode), i);
        if (r != 0) {
            break;
        }
    }
    func_ov065_02262998();
    if (r == 2) {
        *out = data_ov065_0228ebdc >> 1;
        data_ov065_0228ebc4 = (data_ov065_0228ebdc * 3) >> 3;
        return 1;
    }
    v = data_ov065_0228ebc4 >> 1;
    data_ov065_0228ebc4 = v;
    *out = v;
    switch (mode) {
    case 1:
        if (v < 0x3c) {
            *out = 1;
            data_ov065_0228ebc4 = data_ov065_0228ebdc >> 3;
        }
        break;
    case 2:
        if (v < 0x3c) {
            *out = 1;
        }
        break;
    }
    return 0;
}

void func_ov065_022619a4(void) {
    func_ov065_022629b0();
    func_ov065_02262a18();
    func_ov065_022629d0(0x44, 0x43, data_ov065_0228ebb0);
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 7, 0);
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    func_ov065_02262998();
}

u8 *func_ov065_02261980(u8 *p) {
    u32 c = *p++;
    while (c != 0) {
        if ((c & 0xc0) == 0xc0) {
            p++;
            return p;
        }
        u8 *n = p + c;
        p = n + 1;
        c = *n;
    }
    return p;
}

s32 func_ov065_022617e4(const u8 *name, u32 type, s32 xid) {
    struct {
        u32 len;
        u16 id;
        u16 flags;
        u16 qd;
        u16 an;
        u16 ns;
        u16 ar;
        u8 name[0x30];
    } l;
    u8 *w;
    u8 *lp;
    u32 c;
    s32 result;

    l.id = BS16(xid);
    if (type == 1) {
        l.flags = 1;
    } else {
        l.flags = 0x1001;
    }
    l.qd = 0x100;
    l.an = 0;
    l.ns = 0;
    l.ar = 0;
    lp = l.name;
    w = lp + 1;
    l.len = 0;
    c = *name++;
    while (c != 0) {
        if (c != '.') {
            if (w - (u8 *)&l.id >= 0x3c) {
                return -1;
            }
            *w = c;
            w++;
            l.len++;
        } else {
            *lp = l.len;
            lp = w;
            w++;
            l.len = 0;
        }
        c = *name++;
    }
    *lp = l.len;
    *w = 0;
    w[1] = type >> 8;
    w[2] = type;
    w[3] = 0;
    w[4] = 1;
    func_ov065_02262334((u8 *)&l.id, (w + 5) - (u8 *)&l.id);

    result = 0;
    u32 start = (u32)(OS_GetTick() >> 16);
    goto test;
loop:
    if (func_ov065_022622ec() == 0) {
        func_ov065_02264c20();
        goto test;
    }
    {
        u8 *p = func_ov065_022626b8(&l.len);
        if (l.len > 0xc) {
            u32 id = BS16(*(u16 *)p);
            if (xid == id) {
                u32 rc = p[3] & 0xf;
                if (rc == 3) {
                    result = -1;
                } else if (rc == 0) {
                    u32 qd;
                    u32 n;
                    u8 *end;
                    u8 *q;
                    end = p + l.len;
                    qd = (u16)(p[4] << 8 | p[5]);
                    q = p + 0xc;
                    n = qd - 1;
                    if (qd != 0) {
                        do {
                            q = func_ov065_02261980(q) + 4;
                        } while (n--);
                    }
                    while (q < end) {
                        u32 rdl;
                        u8 *a;
                        u8 *b;
                        u8 *pa;
                        u8 *pb;
                        q = func_ov065_02261980(q);
                        rdl = RD16(q + 8);
                        if (type == RD16(q)) {
                            a = q + 8;
                            pa = a + rdl;
                            b = q + 6;
                            pb = b + rdl;
                            result = (RD16(pb) << 16) | RD16(pa);
                            break;
                        }
                        q += rdl + 10;
                    }
                }
            }
        }
        func_ov065_02262640(l.len);
    }
test:
    if (data_ov065_0228ebac() != 0 && result == 0) {
        u32 now = (u32)(OS_GetTick() >> 16);
        if ((s32)(now - start) < 15) {
            goto loop;
        }
    }
    return result;
}

u32 func_ov065_022617bc(const u8 *p, const u8 **end) {
    *end = p;
    u32 n = 0;
    for (;;) {
        u8 d = *p - '0';
        if (d > 9) {
            break;
        }
        n = n * 10 + d;
        p++;
        *end = p;
    }
    return n;
}

s32 func_ov065_02261758(const u8 *s, u32 *out) {
    const u8 *end;
    u32 acc = 0;
    s32 i = 0;
    do {
        acc <<= 8;
        u32 v = func_ov065_022617bc(s, &end);
        if (s == end) {
            return 0;
        }
        s = end;
        if (v > 0xff || (i != 3 && (s = end + 1, *end != '.')) || (i == 3 && *s != 0)) {
            return 0;
        }
        acc |= v;
        i++;
    } while (i < 4);
    *out = acc;
    return 1;
}

s32 func_ov065_02261718(const u8 *a, const u8 *b, s32 c) {
    s32 r;
    if (b == NULL) {
        return -1;
    } else {
        func_ov065_022629b0();
        func_ov065_02262a18();
        func_ov065_022629d0(0, 0x35, (s32)b);
        r = func_ov065_022617e4(a, 1, c);
        func_ov065_02262998();
    }
    return r;
}


}

}

namespace Unk_ov065_02260de4_Ns {

struct Unk_ov065_02261638_Rng {
    u64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

extern "C" {
s64 _ll_mul(s64, s64);
s32 func_ov065_02261718(s32, u32, u32);
s32 func_ov065_02261758(s32, s32 *);
extern u32 data_ov065_0228ebfc[2];
extern Unk_ov065_02261638_Rng data_ov065_0228ec04;

extern "C" {
s32 func_ov065_02261638(s32 self);
}

s32 func_ov065_02261638(s32 self) {
    struct {
        u8 flag[2];
        s32 res;
        u16 port[2];
    } l;
    s32 i;
    u8 *pf;
    u16 *pp;
    u32 *pt;
    s32 j;
    Unk_ov065_02261638_Rng *g = &data_ov065_0228ec04;
    g->unk_00 = _ll_mul(g->unk_08, g->unk_00) + g->unk_10;
    l.port[0] = (u32)(((g->unk_00 >> 32) * 0x10000) >> 32);
    g->unk_00 = _ll_mul(g->unk_08, g->unk_00) + g->unk_10;
    l.port[1] = (u32)(((g->unk_00 >> 32) * 0x10000) >> 32);
    if (func_ov065_02261758(self, &l.res)) {
        return l.res;
    }
    l.flag[0] = 1;
    l.flag[1] = 1;
    for (i = 0; i < 3; i++) {
        j = 0;
        pf = l.flag;
        pp = l.port;
        pt = data_ov065_0228ebfc;
        for (; j < 2; pf++, pp++, pt++, j++) {
            if (*pf) {
                l.res = func_ov065_02261718(self, *pt, *pp);
                if (l.res != 0 && l.res != -1) {
                    goto done;
                }
                if (l.res == -1) {
                    *pf = 0;
                }
            }
        }
    }
done:
    if (l.res == -1) {
        l.res = 0;
    }
    return l.res;
}

}
}

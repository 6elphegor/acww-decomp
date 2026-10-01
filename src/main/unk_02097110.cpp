// mwcc-flags: -str reuse
#include "types.h"

class Unk_020dd458 {
public:
    Unk_020dd458();
    virtual ~Unk_020dd458();

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

struct Unk_020973e4 {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020973ec_G {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};

extern "C" {
extern Unk_020973ec_G data_021e9350;
extern u8 data_021cb3b8;
extern u8 data_021d7352[];

extern s32 data_020e1df8;
extern s32 data_020e1dfc;
extern s32 data_020e1e00;
extern s32 data_020e1e04;
extern s32 data_020e1e08;
extern s32 data_020e1e0c;

s32 func_0209750c(void);
s32 _ZN12Unk_02097ff413func_02098320Ev(s32);
s32 _ZN12Unk_0209865c13func_0209888cEv(s32);
s32 _ZN12Unk_02097ff413func_02098044Ej(s32, s32);
s32 _ZN12Unk_02097ff413func_02097ff4Ej(s32, s32);
s32 _ZN12Unk_02097ff413func_0209801cEj(s32, s32);
s32 func_0206e844(void);
void _ZN12Unk_020dd38cC2Ev(void *);
void _ZN12Unk_020dd38cD1Ev(void *);
void func_020638d0(void *, void *);
void func_0203ce4c(s32, void *);
void _ZN12Unk_020e3efcC1Ev(void *);
void _ZN12Unk_020e3efcD1Ev(void *);
void func_020b3270(void *, s32, s32, s32, s32, s32);
s32 _s32_div_f(s32, s32);
u32 _ZN12Unk_0206555413func_02065588Etj(void *, u32, u32);
void func_020656dc(void *, void *, void *, void *, void *, s32);
BOOL func_02096aac(Unk_020dd458 *e);
void func_0211ea4c(s32 (*f)());
s32 func_02097438();
void func_02097410(Unk_020973e4 *p, u32 v);
u32 func_02097414(Unk_020973e4 *p);
u32 func_020973e8(Unk_020973e4 *p);
}

s32 data_020e1e08 = 6;
s32 data_020e1e04 = 0x1c;
s32 data_020e1e00 = 6;
s32 data_020e1dfc = 0x1c;
s32 data_020e1df8 = 0x10;
s32 data_020e1e0c = 0x1c;

extern "C" s32 func_02097438() {
    data_021cb3b8 = 1;
    return 1;
}

extern "C" void func_02097428() { func_0211ea4c(func_02097438); }

extern "C" void func_02097424() {}

extern "C" void func_02097420() {}

extern "C" void func_02097418(Unk_020973e4 *p) {
    p->unk_00 = 0;
    p->unk_04 = 0;
}

extern "C" u32 func_02097414(Unk_020973e4 *p) { return p->unk_00; }

extern "C" void func_02097410(Unk_020973e4 *p, u32 v) { p->unk_00 = v; }

extern "C" s32 func_02097404() { return data_021e9350.unk_08; }

extern "C" void func_020973ec(s32 v) {
    if (v > 999999999) v = 999999999;
    data_021e9350.unk_08 = v;
}

extern "C" u32 func_020973e8(Unk_020973e4 *p) { return p->unk_04; }

extern "C" void func_020973e4(Unk_020973e4 *p, u32 v) { p->unk_04 = v; }

extern "C" void func_02097318(s32 n) {
    s32 s = func_0209750c();
    s32 o = _ZN12Unk_02097ff413func_02098320Ev(s);
    if (func_0206e844() == 0) {
        if (n > 0) {
            s32 m = func_02097414((Unk_020973e4 *)o);
            s32 q = _s32_div_f(m, 2000);
            n = q * n * 10;
            if (n > 99999) {
                n = 99999;
            }
            if (n != 0) {
                if (m != 999999999) {
                    s32 t = m + n;
                    if (t > 999999999) {
                        t = 999999999;
                    }
                    func_02097410((Unk_020973e4 *)o, t);
                    Unk_020dd458 e;
                    u8 ch;
                    u32 buf[11];
                    ch = 0;
                    _ZN12Unk_020e3efcC1Ev(buf);
                    func_020b3270(buf, n, 10, 1, 0, 0);
                    func_0203ce4c(1, buf);
                    func_020656dc(&e, &ch, (void *)"sp_npc_pelican", &data_020e1e08, &data_020e1e04, _ZN12Unk_0209865c13func_0209888cEv(s));
                    func_02096aac(&e);
                    _ZN12Unk_020e3efcD1Ev(buf);
                }
            }
        }
    }
}

extern "C" void func_02097214(s32 n) {
    s32 s = func_0209750c();
    s32 o = _ZN12Unk_02097ff413func_02098320Ev(s);
    if (n > 0) {
        s32 m = func_02097414((Unk_020973e4 *)o);
        if (m >= 1000000) {
            u32 col = 0x37dc;
            s32 k = 0;
            if (m == 999999999) {
                k = 4;
                col = 0x3874;
            } else if (m >= 500000000) {
                k = 3;
                col = 0x4a44;
            } else if (m >= 100000000) {
                k = 2;
                col = 0x4a40;
            } else if (m >= 10000000) {
                k = 1;
                col = 0x3700;
            }
            s32 bit = k + 0x11;
            if (_ZN12Unk_02097ff413func_02098044Ej(s, bit) == 0) {
                u8 ch;
                ch = k + 0x15;
                Unk_020dd458 e;
                u32 buf[7];
                _ZN12Unk_020dd38cC2Ev(buf);
                func_020638d0(data_021d7352, buf);
                func_0203ce4c(0, buf);
                func_020656dc(&e, &ch, (void *)"sp_npc_pelican", &data_020e1e00, &data_020e1dfc, _ZN12Unk_0209865c13func_0209888cEv(s));
                _ZN12Unk_0206555413func_02065588Etj(&e, col, 1);
                if (func_02096aac(&e)) {
                    _ZN12Unk_02097ff413func_0209801cEj(s, bit);
                }
                _ZN12Unk_020dd38cD1Ev(buf);
            }
        }
    }
}// Declarations for data defined further down (definition order sets the data layout)






extern "C" void func_02097110(s32 n) {
    s32 s = func_0209750c();
    s32 o = _ZN12Unk_02097ff413func_02098320Ev(s);
    if (n > 0) {
        if (_ZN12Unk_02097ff413func_02098044Ej(s, 0x16)) {
            s32 id = func_020973e8((Unk_020973e4 *)o);
            Unk_020dd458 e;
            u8 ch;
            ch = id;
            u32 v;
            func_020656dc(&e, &ch, (void *)"sp_npc_pelican", &data_020e1df8, &data_020e1e0c, _ZN12Unk_0209865c13func_0209888cEv(s));
            v = 0xfff1;
            if (id > 13) goto hi;
            if (id >= 13) goto c13;
            switch (id) {
            case 0: goto done;
            case 1: goto c1;
            case 4: goto c4;
            case 7: goto c7;
            case 10: goto c10;
            }
            goto done;
        hi:
            if (id > 16) goto hi2;
            switch (id) {
            case 16: goto c16;
            }
            goto done;
        hi2:
            switch (id) {
            case 20: goto c20;
            }
            goto done;
        c1: v = 0x13fe; goto done;
        c4: v = 0x13ff; goto done;
        c7: v = 0x1400; goto done;
        c10: v = 0x1401; goto done;
        c13: v = 0x1402; goto done;
        c16: v = 0x1403; goto done;
        c20: v = 0x1404;
        done:
            if (v != 0xfff1) {
                _ZN12Unk_0206555413func_02065588Etj(&e, v, 1);
            }
            if (func_02096aac(&e)) {
                _ZN12Unk_02097ff413func_02097ff4Ej(s, 0x16);
            }
        }
    }
}


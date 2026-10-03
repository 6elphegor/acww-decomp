// mwcc-flags: -str reuse
#include "types.h"

class Letter {
public:
    Letter();
    virtual ~Letter();

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
extern u8 sFatalEntered;
extern u8 gSaveTownId[];

extern s32 data_020e1df8;
extern s32 data_020e1dfc;
extern s32 data_020e1e00;
extern s32 data_020e1e04;
extern s32 data_020e1e08;
extern s32 data_020e1e0c;

s32 PlayerData_GetCurrent(void);
s32 _ZN12Unk_02097ff413func_02098320Ev(s32);
s32 _ZN10PlayerData11getPlayerIdEv(s32);
s32 _ZN12Unk_02097ff48testFlagEj(s32, s32);
s32 _ZN12Unk_02097ff49clearFlagEj(s32, s32);
s32 _ZN12Unk_02097ff47setFlagEj(s32, s32);
s32 MenuCtrl_IsClockMovedForward(void);
void _ZN12Unk_020dd38cC2Ev(void *);
void _ZN12Unk_020dd38cD1Ev(void *);
void func_020638d0(void *, void *);
void MailText_SetSlot(s32, void *);
void _ZN11MsgString25C1Ev(void *);
void _ZN11MsgString25D1Ev(void *);
void String_FormatNumber(void *, s32, s32, s32, s32, s32);
s32 _s32_div_f(s32, s32);
u32 _ZN12Unk_0206555410setPresentEtj(void *, u32, u32);
void Letter_ComposeFromMail(void *, void *, void *, void *, void *, s32);
BOOL LetterDelivery_PutInAddresseeMailbox(Letter *e);
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
    sFatalEntered = 1;
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
    s32 s = PlayerData_GetCurrent();
    s32 o = _ZN12Unk_02097ff413func_02098320Ev(s);
    if (MenuCtrl_IsClockMovedForward() == 0) {
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
                    Letter e;
                    u8 ch;
                    u32 buf[11];
                    ch = 0;
                    _ZN11MsgString25C1Ev(buf);
                    String_FormatNumber(buf, n, 10, 1, 0, 0);
                    MailText_SetSlot(1, buf);
                    Letter_ComposeFromMail(&e, &ch, (void *)"sp_npc_pelican", &data_020e1e08, &data_020e1e04, _ZN10PlayerData11getPlayerIdEv(s));
                    LetterDelivery_PutInAddresseeMailbox(&e);
                    _ZN11MsgString25D1Ev(buf);
                }
            }
        }
    }
}

extern "C" void func_02097214(s32 n) {
    s32 s = PlayerData_GetCurrent();
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
            if (_ZN12Unk_02097ff48testFlagEj(s, bit) == 0) {
                u8 ch;
                ch = k + 0x15;
                Letter e;
                u32 buf[7];
                _ZN12Unk_020dd38cC2Ev(buf);
                func_020638d0(gSaveTownId, buf);
                MailText_SetSlot(0, buf);
                Letter_ComposeFromMail(&e, &ch, (void *)"sp_npc_pelican", &data_020e1e00, &data_020e1dfc, _ZN10PlayerData11getPlayerIdEv(s));
                _ZN12Unk_0206555410setPresentEtj(&e, col, 1);
                if (LetterDelivery_PutInAddresseeMailbox(&e)) {
                    _ZN12Unk_02097ff47setFlagEj(s, bit);
                }
                _ZN12Unk_020dd38cD1Ev(buf);
            }
        }
    }
}// Declarations for data defined further down (definition order sets the data layout)






extern "C" void func_02097110(s32 n) {
    s32 s = PlayerData_GetCurrent();
    s32 o = _ZN12Unk_02097ff413func_02098320Ev(s);
    if (n > 0) {
        if (_ZN12Unk_02097ff48testFlagEj(s, 0x16)) {
            s32 id = func_020973e8((Unk_020973e4 *)o);
            Letter e;
            u8 ch;
            ch = id;
            u32 v;
            Letter_ComposeFromMail(&e, &ch, (void *)"sp_npc_pelican", &data_020e1df8, &data_020e1e0c, _ZN10PlayerData11getPlayerIdEv(s));
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
                _ZN12Unk_0206555410setPresentEtj(&e, v, 1);
            }
            if (LetterDelivery_PutInAddresseeMailbox(&e)) {
                _ZN12Unk_02097ff49clearFlagEj(s, 0x16);
            }
        }
    }
}


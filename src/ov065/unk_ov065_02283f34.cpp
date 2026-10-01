// mwcc-flags: -O4,p -str reuse

#include "types.h"

extern "C" { u8 data_ov065_0228e14c[4] = {0xfe, 0xfe, 0, 0}; }



namespace N022838c4 {
extern "C" {


// ov065_058: GameSpy-style pauthr/getpidr/setpdr reply handling, string buffer helpers (0x022838c4..0x022841a4)

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02284100_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0228412c_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_0228412c_Obj *, s32, s32, s32, s32);
};

extern "C" {
extern Unk_ov065_022786bc_Vec *data_ov065_022910f4;
extern s32 data_ov065_0228df74;
extern s32 data_ov065_022910f8;
extern char *data_ov065_022910f0;
extern s32 data_ov065_02291100;
extern s32 data_ov065_022910ec;
extern volatile s32 data_ov065_022910fc;
extern char data_ov065_02291304[];
extern char *data_ov065_0228df78;
extern char data_ov065_0228e128[];
extern char data_ov065_0228e108[];

s32 func_0212a15c(const char *, const char *, u32);
s32 func_0212b770(const char *);
char *func_02129f1c(const char *, const char *);
u32 func_021277d4(const char *);
void func_021277a4(char *, const char *);
void func_021289b4(void *, void *, u32);
void func_02128a00(void *, const void *, s32);
s32 func_02128c70();
void func_02128c60(s32);
s32 func_02127b40(s32);

void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void func_ov065_022837bc(s32, s32, s32, char *, s32);
s32 func_ov065_02283868(char *, s32);
void func_ov065_02283744();
s32 func_ov065_02278ee8(s32);
s32 func_ov065_02278ce0(s32, char *, s32, s32);
void func_ov065_02278da4(s32, s32);
void func_ov065_02278dbc(s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277ad8(void *, s32);
void *func_ov065_02277af0(s32);
s32 func_ov065_02279144(u8 *);
void func_ov065_02286564(Unk_ov065_0228412c_Obj *);

void func_ov065_02283af0(char *, s32);
void func_ov065_02283a88(char *, s32);
void func_ov065_022839e4(char *, s32);
s32 func_ov065_02283974(char *, s32);
s32 func_ov065_02283b68(s32, s32, s32);
char *func_ov065_02283c34(char *, char *);
char *func_ov065_02283c4c(char *, char *);
s32 func_ov065_02283c2c(s32);
void func_ov065_02283e00();
s32 func_ov065_02283fdc(u8 *);



























}

}
}

namespace N02284240 {
extern "C" {


// ov065_059: GT2-like connection callbacks / state (0x02284240..0x02284a80)

struct Unk_ov065_02284240_Sock {
    u8 pad_00[8];
    u16 unk_08;
    u8 pad_0a[2];
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    s32 (*unk_20)(Unk_ov065_02284240_Sock *, void *, s32, s32, s32, s32, s32);
    s32 (*unk_24)(Unk_ov065_02284240_Sock *);
};

struct Unk_ov065_02284240_Conn;

typedef s32 (*Unk_ov065_02284240_Filter)(Unk_ov065_02284240_Conn *, s32, u32, u32, u32);

struct Unk_ov065_02284240_Blob {
    s32 v[4];
};

struct Unk_ov065_02284240_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02284240_Sock *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_02284240_Conn *, s32);
    s32 (*unk_34)(Unk_ov065_02284240_Conn *, s32);
    void *unk_38;
    s32 unk_3c;
    s32 unk_40;
    void *unk_44;
    u8 pad_48[8];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u8 pad_64[0x88 - 0x64];
    u32 unk_88;
    u8 pad_8c[4];
    s32 unk_90;
    u32 unk_94;
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_02284908_Buf {
    u32 v[9];
};

namespace Unk_ov065_02284a80_Ns {
extern "C" s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
}

extern "C" {
extern void *func_ov065_0227866c(void *, s32);
extern s32 func_ov065_02278684(void *);
extern void func_ov065_02278688(void *);
extern void func_ov065_02277ac8(void *);
extern void *func_ov065_02277af0(s32);
extern s32 func_ov065_02278810(void *, void *);
extern s32 func_ov065_02278658(void *, void *);
extern s32 func_ov065_02278790(s32, void *, s32);
extern s32 func_ov065_02279144();
extern void func_ov065_0227913c(s32);
extern void func_02128a00(void *, const void *, s32);

extern s32 func_ov065_02286564(void *);
extern s32 func_ov065_0228627c(void *, s32, u32, u32, u32);
extern s32 func_ov065_0228638c(void *);
extern s32 func_ov065_022863f8(void *, void *, u32, u32);
extern void func_ov065_02286788(void *, void *);
extern s32 func_ov065_022867c0(u32, u32 *, u16 *);

extern void func_ov065_02283f34(void *);
extern void func_ov065_02283e88(void *, void *);
extern void func_ov065_022850b0(void *, void *);
extern s32 func_ov065_02284ba4(void *);
extern s32 func_ov065_02284bf0(void *, s32, s32, s32);
extern s32 func_ov065_02284c0c(void *, void *);
extern void func_ov065_02284ca4(void *);
extern s32 func_ov065_02284cc0(Unk_ov065_02284240_Conn *);
extern s32 func_ov065_02284d94(void *);
extern s32 func_ov065_02284e90(void *);
extern void func_ov065_02284edc(void *);
extern void func_ov065_02284f28(void *, s32, s32);
extern void func_ov065_02284f84(void *);

s32 func_ov065_02284240(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 func_ov065_022842d0(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 func_ov065_022843c0(Unk_ov065_02284240_Conn *c, s32 a);
s32 func_ov065_02284498(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d);
void func_ov065_02284654(Unk_ov065_02284240_Conn *c, ...);
void func_ov065_02284688(Unk_ov065_02284240_Conn *c, s32 x);
s32 func_ov065_0228472c(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_0228475c(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_02284798(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_022847ec(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_02284854(Unk_ov065_02284240_Conn *c, u32 a, u32 b);
s32 func_ov065_02284908(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x);
s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
void func_ov065_02284a0c(Unk_ov065_02284240_Conn **p);
void func_ov065_02284a18(Unk_ov065_02284240_Conn *c);



































}

}
}

namespace N02284b8c {
extern "C" {


// ov065_060: GameSpy-style (SOCKS5-like) connection handshake builders and UDP receive path (0x02284b8c..0x02285440)

struct Unk_ov065_02284c0c_Vec;

struct Unk_ov065_02284c0c_Buf {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_02285398_Sock;
typedef Unk_ov065_02285398_Sock Sock;

struct Unk_ov065_02284c0c_Conn {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
    Sock *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    u32 unk_38[6];
    Unk_ov065_02284c0c_Buf unk_50;
    s32 unk_5c;
    Unk_ov065_02284c0c_Vec *unk_60;
    u16 unk_64;
    u16 unk_66;
    u32 unk_68[8];
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;
};

struct Unk_ov065_02285398_Sock {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
};

typedef Unk_ov065_02284c0c_Conn Conn;
typedef Unk_ov065_02284c0c_Buf Buf;

extern "C" {
extern u8 data_ov065_0228e14c[];


s32 func_02128930(const void *, const void *, s32);

s32 func_ov065_02284888(Conn *, s32, s32);
s32 func_ov065_022848b8(Conn *, void *);
s32 func_ov065_02286560(void *);
s32 func_ov065_02286208(Sock *);
s32 func_ov065_022861d8(Sock *);
s32 func_ov065_022861b0(Sock *);
s32 func_ov065_022849f8(Conn *);
s32 func_ov065_02286564(Conn *);
s32 func_ov065_0228659c(s32, s32, s32, s32, s32);
s32 func_ov065_02286188(u8 *, s32, s32);
s32 func_ov065_02284854(Conn *, u8 *, s32);
s32 func_ov065_02279144();
s32 func_ov065_0228627c(Sock *, s32, s32, u8 *, s32);
s32 func_ov065_02284090(Buf *, const u8 *, s32);
s32 func_ov065_022840cc(Buf *, s32);
s32 func_ov065_022840ec(Buf *, s32);
s32 func_ov065_022840f8(Buf *);
s32 func_ov065_0228405c(Buf *, s32, s32);
s32 func_ov065_02278684(Unk_ov065_02284c0c_Vec *);
void *func_ov065_0227866c(Unk_ov065_02284c0c_Vec *, s32);
void func_ov065_02278658(Unk_ov065_02284c0c_Vec *, void *);
s32 func_ov065_022860ec(Conn *);
s32 func_ov065_02278ee8(s32);
s32 func_ov065_02278cb8(s32, u8 *, s32, s32, void *, s32 *);
s32 func_ov065_02278be8(s32);
Conn *func_ov065_0228671c(Sock *, s32, s32);
s32 func_ov065_022841a4(Sock *, Conn *, s32, s32, s32, s32, s32, s32);
s32 func_ov065_0228412c(Sock *, s32, s32, u8 *, s32, s32 *);
s32 func_ov065_0228497c(Sock *, Conn **, s32, s32);
s32 func_ov065_0228611c(Conn *, s32, s32);
s32 func_ov065_02285fbc(Conn *, u8 *, s32);
s32 func_ov065_02286110(Conn *);
s32 func_ov065_02285868(Conn *, s32, u8 *, s32);
s32 func_ov065_02285630(Conn *, s32, u8 *, s32);

s32 func_ov065_02284c68(Sock *, s32, s32);
s32 func_ov065_02284ca4(Conn *);
s32 func_ov065_022851a8(Conn *, u32, s32, s32 *);
s32 func_ov065_02285168(Conn *);
s32 func_ov065_02285264(Conn *, u32, s32);
s32 func_ov065_022852b8(Sock *);
s32 func_ov065_02285398(Sock *, s32, u32);
s32 func_ov065_02285440(Sock *, u8 *, s32, s32, s32);
s32 func_ov065_0228510c(Conn *, u8 *, s32);
s32 func_ov065_02284de4(Conn *, u8 *, s32);
s32 func_ov065_02284f28(Conn *, u8 *, s32);


























struct Unk_ov065_02285264_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};


struct Unk_ov065_022852b8_Addr {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

static inline u16 Swap16(u16 p) {
    return ((p >> 8) & 0xff) | ((p << 8) & 0xff00);
}



}

}
}

namespace N02285630 {
extern "C" {


// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)

struct Unk_ov065_02285630_Item {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    u8 pad_00[8];
    u16 unk_08;
};

struct Unk_ov065_02285630_Peer {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02285630_Buf {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov065_02285630_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02285630_Peer *unk_08;
    s32 unk_0c;
    u8 pad_10[0x24];
    s32 unk_34;
    void *unk_38;
    s32 unk_3c;
    u8 pad_40[4];
    Unk_ov065_02285630_Buf unk_44;
    s32 unk_4c;
    u8 pad_50[0xc];
    void *unk_5c;
    void *unk_60;
    u8 pad_64[2];
    u16 unk_66;
    u8 unk_68[0x24];
    s32 unk_8c;
    s32 unk_90;
    s32 unk_94;
};

struct Unk_ov065_022856f8_B4 { u8 a, b, c, d; };

typedef Unk_ov065_02285630_Conn Cn;
typedef Unk_ov065_02285630_Item It;

extern "C" {

s32 func_02128930(void *, const void *, u32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_0227866c(void *, s32);
s32 func_ov065_02278684(void *);
s32 func_ov065_02278570(void *, s32);
s32 func_ov065_022785c8(void *, void *, void *);
s32 func_ov065_02279144();
s32 func_ov065_02283e5c(void *, void *);
s32 func_ov065_02283e88(void *, void *);
s32 func_ov065_02283f34(void *);
s32 func_ov065_0228405c(void *, s32, s32);
s32 func_ov065_02284090(void *, void *, s32);
s32 func_ov065_022840f8(void *);
s32 func_ov065_02284360(Cn *, s32);
s32 func_ov065_02284498(Cn *, s32, void *, s32);
s32 func_ov065_02284514(void *, Cn *, s32, s32, s32, void *, s32);
s32 func_ov065_02284654(Cn *);
s32 func_ov065_02284c0c(Cn *, void *);
s32 func_ov065_02284ca4(Cn *);
s32 func_ov065_02284cb4(Cn *, void *, s32);
s32 func_ov065_02284d34(Cn *, u16, u16);
s32 func_ov065_02284fd0(Cn *, void *, void *, s32);
s32 func_ov065_0228503c(Cn *, void *, void *);
s32 func_ov065_022860ec(Cn *);
s32 func_ov065_02286110(Cn *);
s32 func_ov065_0228611c(Cn *, s32, s32);
s32 func_ov065_02286180(u32, u32);
s32 func_ov065_02286194(void *, s32);
s32 func_ov065_02286034(Cn *, s32);

s32 func_ov065_02285824(Cn *c, void *p, s32 n);
s32 func_ov065_02285780(Cn *c, void *p, s32 n);
s32 func_ov065_02285778(Cn *c, void *p, s32 n);
s32 func_ov065_022856f8(Cn *c, void *p, s32 n);
s32 func_ov065_022856c0(Cn *c);
void func_ov065_02285964(Cn *c);
s32 func_ov065_02285988(Cn *c);
void func_ov065_022859e4(Cn *c, It *e, s32 i);
s32 func_ov065_02285a44(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out);
s32 func_ov065_02285b6c(It *a, It *b);
s32 func_ov065_02285b78(Cn *c, s32 mode, void *p, s32 n);
s32 func_ov065_02285c44(Cn *c);
s32 func_ov065_02285c80(Cn *c, void *p, s32 n);
s32 func_ov065_02285cdc(Cn *c);
s32 func_ov065_02285d20(Cn *c, void *p, s32 n);
s32 func_ov065_02285e04(Cn *c, void *p, s32 n);
s32 func_ov065_02285eb8(Cn *c, void *p, s32 n);
s32 func_ov065_02285f3c(Cn *c, void *p, s32 n);



















}

}
}

namespace N02285630 { extern "C" {
BOOL func_ov065_022856f8(Cn *c, void *p, s32 n)
{
    Unk_ov065_022856f8_B4 t;
    s32 now;
    if (c->unk_34 == 0) return TRUE;
    if (n != 8) return TRUE;
    if (func_02128930(p, (u8 *)"time", 4) != 0) return TRUE;
    u32 a = (u32)&t;
    Unk_ov065_022856f8_B4 *q = (Unk_ov065_022856f8_B4 *)((u8 *)p + 4);
    ((Unk_ov065_022856f8_B4 *)a)->a = q->a;
    ((Unk_ov065_022856f8_B4 *)a)->b = q->b;
    ((Unk_ov065_022856f8_B4 *)a)->c = q->c;
    ((Unk_ov065_022856f8_B4 *)a)->d = q->d;
    now = ((s32 (*)(void *))func_ov065_02279144)((void *)a);
    if (func_ov065_02284360(c, now - *(s32 *)&t) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_022856c0(Cn *c)
{
    if (c->unk_0c == 7) return TRUE;
    s32 f;
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (func_ov065_0228611c(c, 2, f) == 0) return FALSE;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285630(Cn *c, s32 t, s32 a, s32 b)
{
    s32 x = a + 3;
    s32 y = b - 3;
    if (t == 100) {
        if (func_ov065_02285824(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 101) {
        if (func_ov065_02285780(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 102) {
        if (func_ov065_02285778(c, (void *)a, b) == 0) return FALSE;
    } else if (t == 103) {
        if (func_ov065_022856f8(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 104) {
        if (func_ov065_022856c0(c) == 0) return FALSE;
    }
    return TRUE;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02285440(Sock *s, u8 *data, s32 n, s32 addr, s32 port) {
    Conn *c = func_ov065_0228671c(s, addr, port);
    s32 flag;
    s32 out;
    if (s->unk_2c != 0) {
        if (func_ov065_022841a4(s, c, addr, port, 0, (s32)data, n, 0) == 0) {
            return 0;
        }
    }
    if (n > 2 && func_02128930(data, data_ov065_0228e14c, 2) == 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (c == 0) {
        if (func_ov065_0228412c(s, addr, port, data, n, &out) == 0) {
            return 0;
        }
        if (out != 0) {
            return 1;
        }
        if (!(flag != 0 && data[2] == 1)) {
            if (flag == 0 || data[2] != 0x68) {
                if (func_ov065_02284c68(s, addr, port) == 0) {
                    return 0;
                }
            }
            return 1;
        } else {
            if (s->unk_20 == 0) {
                return 1;
            }
            s32 r = func_ov065_0228497c(s, &c, addr, port);
            if (r != 0) {
                if (r != 5) {
                    if (func_ov065_02284c68(s, addr, port) == 0) {
                        return 0;
                    }
                }
                return 1;
            }
        }
    }
    Conn *k = c;
    if (k->unk_0c == 7) {
        if (flag == 0 || data[2] != 0x68) {
            if (func_ov065_02284ca4(k) == 0) {
                return 0;
            }
        }
        return 1;
    }
    if (flag != 0 && n >= 4 && func_02128930(data + 2, data_ov065_0228e14c, 2) == 0) {
        data += 2;
        n -= 2;
        flag = 0;
    }
    if (flag == 0) {
        if (func_ov065_02285fbc(k, data, n) != 0) {
            return 1;
        }
        return 0;
    }
    s32 t = data[2];
    if (t < 0) {
        if (func_ov065_02286110(k) != 0) {
            return 1;
        }
        return 0;
    }
    if (t < 8) {
        if (func_ov065_02285868(k, t, data, n) != 0) {
            return 1;
        }
        return 0;
    }
    if (func_ov065_02285630(k, t, data, n) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02285398(Sock *s, s32 addr, u32 port) {
    Conn *c = func_ov065_0228671c(s, addr, port);
    if (s->unk_2c != 0) {
        if (func_ov065_022841a4(s, c, addr, port, 1, 0, 0, 0) == 0) {
            return 0;
        }
    }
    if (c == 0) {
        return 1;
    }
    if (c->unk_0c == 0) {
        if (c->unk_20 == 0 || (u32)(func_ov065_02279144() - c->unk_1c) < c->unk_20) {
            return 1;
        }
        if (func_ov065_0228611c(c, 6, 1) == 0) {
            return 0;
        }
    } else {
        if (func_ov065_0228611c(c, 2, 1) == 0) {
            return 0;
        }
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_022852b8(Sock *s) {
    Unk_ov065_022852b8_Addr a;
    s32 len;
    u8 buf[0x5dc];
    if (func_ov065_02278ee8(s->unk_00) != 0) {
        do {
            len = 8;
            s32 n = func_ov065_02278cb8(s->unk_00, buf, 0x5dc, 0, &a, &len);
            s32 m = -1;
            if (n == m) {
                s32 e = func_ov065_02278be8(s->unk_00);
                if (e == -15) {
                    if (func_ov065_02285398(s, a.unk_04, Swap16(a.unk_02)) == 0) {
                        return 0;
                    }
                } else if (e != -35) {
                    func_ov065_022861b0(s);
                    return 0;
                }
            } else {
                if (func_ov065_02285440(s, buf, n, a.unk_04, Swap16(a.unk_02)) == 0) {
                    return 0;
                }
            }
        } while (func_ov065_02278ee8(s->unk_00) != 0);
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02285264(Conn *o, u32 seq, s32 need) {
    Unk_ov065_02285264_Rec r = {0, 0, 0, 0};
    r.unk_00 = o->unk_50.unk_08;
    r.unk_04 = need;
    *(u16 *)&r.unk_08 = seq;
    r.unk_0c = func_ov065_02279144();
    s32 c = func_ov065_02278684(o->unk_60);
    func_ov065_02278658(o->unk_60, &r);
    if (c + 1 == func_ov065_02278684(o->unk_60)) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_022851a8(Conn *o, u32 type, s32 need, s32 *out) {
    if (func_ov065_022840f8(&o->unk_50) < need) {
        if (func_ov065_022860ec(o) == 0) {
            return 0;
        }
        *out = 1;
        return 1;
    }
    if (func_ov065_02285264(o, o->unk_64, need) == 0) {
        if (func_ov065_022860ec(o) == 0) {
            return 0;
        }
        *out = 1;
        return 1;
    }
    func_ov065_02284090(&o->unk_50, data_ov065_0228e14c, 2);
    func_ov065_022840ec(&o->unk_50, (u8)type);
    s32 seq = o->unk_64;
    o->unk_64 = *(volatile u16 *)&o->unk_64 + 1;
    func_ov065_022840cc(&o->unk_50, seq);
    func_ov065_022840cc(&o->unk_50, o->unk_66);
    *out = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02285168(Conn *o) {
    s32 c = func_ov065_02278684(o->unk_60);
    s32 *it = (s32 *)func_ov065_0227866c(o->unk_60, c - 1);
    if (func_ov065_02284854(o, o->unk_50.unk_00 + it[0], it[1]) == 0) {
        return 0;
    }
    o->unk_90 = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_0228510c(Conn *o, u8 *a, s32 n) {
    s32 r;
    if (func_ov065_022851a8(o, 0, n + 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    func_ov065_02284090(&o->unk_50, a, n);
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_022850b0(Conn *o, u8 *a) {
    s32 r;
    if (func_ov065_022851a8(o, 1, 0x27, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    func_ov065_02284090(&o->unk_50, a, 0x20);
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_0228503c(Conn *o, u8 *a, u8 *b) {
    s32 r;
    if (func_ov065_022851a8(o, 2, 0x47, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    func_ov065_02284090(&o->unk_50, a, 0x20);
    func_ov065_02284090(&o->unk_50, b, 0x20);
    if (func_ov065_02285168(o) == 0) {
        return 0;
    }
    o->unk_8c = o->unk_88;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284fd0(Conn *o, u8 *a, u8 *b, s32 n) {
    s32 r;
    if (func_ov065_022851a8(o, 3, n + 0x27, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    func_ov065_02284090(&o->unk_50, a, 0x20);
    func_ov065_02284090(&o->unk_50, b, n);
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284f84(Conn *o) {
    s32 r;
    if (func_ov065_022851a8(o, 4, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284f28(Conn *o, u8 *a, s32 n) {
    s32 r;
    if (func_ov065_022851a8(o, 5, n + 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    func_ov065_02284090(&o->unk_50, a, n);
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284edc(Conn *o) {
    s32 r;
    if (func_ov065_022851a8(o, 6, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284e90(Conn *o) {
    s32 r;
    if (func_ov065_022851a8(o, 7, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (func_ov065_02285168(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284de4(Conn *o, u8 *data, s32 n) {
    s32 t;
    s32 total;
    if (n < 2 || func_02128930(data, data_ov065_0228e14c, 2) != 0) {
        if (func_ov065_02284854(o, data, n) == 0) {
            return 0;
        }
        return 1;
    }
    total = n + 2;
    if (func_ov065_022840f8(&o->unk_50) < total) {
        return 1;
    }
    t = (s32)o->unk_50.unk_00 + o->unk_50.unk_08;
    func_ov065_02284090(&o->unk_50, data_ov065_0228e14c, 2);
    func_ov065_02284090(&o->unk_50, data, n);
    if (func_ov065_02284854(o, (u8 *)t, total) == 0) {
        return 0;
    }
    func_ov065_0228405c(&o->unk_50, -1, total);
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284d94(Conn *o) {
    u8 buf[5];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x64;
    func_ov065_02286188(buf, 3, o->unk_66);
    if (func_ov065_02284854(o, buf, 5) == 0) {
        return 0;
    }
    o->unk_90 = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284d34(Conn *o, s32 a, s32 b) {
    u8 buf[8];
    s32 n = 0;
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x65;
    func_ov065_02286188(buf, 3, a);
    n += 5;
    if (a != b) {
        func_ov065_02286188(buf, n, b);
        n += 2;
    }
    if (func_ov065_02284854(o, buf, n) == 0) {
        return 0;
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284cc0(Conn *o) {
    u32 t;
    u8 buf[11];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x66;
    u8 *const q = buf + 3;
    const u8 *const r = (u8 *)"time";
    q[0] = r[0];
    q[1] = r[1];
    q[2] = r[2];
    q[3] = r[3];
    t = func_ov065_02279144();
    u8 *const x = buf + 7;
    const u8 *const y = (u8 *)&t;
    x[0] = y[0];
    x[1] = y[1];
    x[2] = y[2];
    x[3] = y[3];
    if (func_ov065_02284854(o, buf, 11) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284cb4(Conn *o, u8 *b, s32 n) {
    b[2] = 0x67;
    return func_ov065_02284854(o, b, n);
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284ca4(Conn *o) {
    return func_ov065_02284c68(o->unk_08, o->unk_00, o->unk_04);
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284c68(Sock *a, s32 b, s32 c) {
    u8 buf[3];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x68;
    if (func_ov065_0228627c(a, b, c, buf, 3) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284c0c(Conn *o, s32 *m) {
    func_ov065_02286188(o->unk_50.unk_00, m[0] + 5, o->unk_66);
    if (func_ov065_02284854(o, o->unk_50.unk_00 + m[0], m[1]) == 0) {
        return 0;
    }
    m[3] = o->unk_88;
    if (o->unk_50.unk_00[m[0] + 2] == 2) {
        o->unk_8c = o->unk_88;
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
void func_ov065_02284bf0(Conn *o, u8 *a, s32 b, s32 mode) {
    if (mode != 0) {
        func_ov065_0228510c(o, a, b);
    } else {
        func_ov065_02284de4(o, a, b);
    }
}
} }

namespace N02284b8c { extern "C" {
void func_ov065_02284bdc(s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_ov065_0228659c(a, b, c, d, e);
}
} }

namespace N02284b8c { extern "C" {
void func_ov065_02284bc8(Conn *o) {
    func_ov065_022849f8(o);
    func_ov065_02286564(o);
}
} }

namespace N02284b8c { extern "C" {
void func_ov065_02284ba4(Sock *s) {
    if (func_ov065_022852b8(s) != 0) {
        if (func_ov065_02286208(s) != 0) {
            func_ov065_022861d8(s);
        }
    }
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284b9c(void *p) {
    return func_ov065_02286560(p);
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284b94(Conn *o, void *x) {
    return func_ov065_022848b8(o, x);
}
} }

namespace N02284b8c { extern "C" {
s32 func_ov065_02284b8c(Conn *o, s32 a, s32 b) {
    return func_ov065_02284888(o, a, b);
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284a80(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **out, u32 host, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7)
{
    u32 port;
    u16 port16;
    Unk_ov065_02284240_Conn *conn;
    u32 ip;
    s32 r;

    if (func_ov065_022867c0(host, &ip, &port16) == 0 || ip == 0 || (port = port16) == 0) {
        return 4;
    }
    u32 sw = ((ip << 24) & 0xff000000) | (((ip << 8) & 0xff0000) | (((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00)));
    if ((sw & 0xe0000000) == 0xe0000000) {
        return 4;
    }
    r = func_ov065_0228499c(s, &conn, ip, port);
    if (r != 0) {
        return r;
    }
    conn->unk_20 = p5;
    r = func_ov065_02284908(conn, p3, p4, (Unk_ov065_02284240_Blob *)p6);
    if (r != 0) {
        func_ov065_0228638c(conn);
        return r;
    }
    if (p7 == 0) {
        if (out != NULL) {
            *out = conn;
        }
        return 0;
    }
    conn->unk_24++;
    BOOL one = TRUE;
    BOOL done;
    do {
        func_ov065_02284ba4(s);
        if (conn->unk_0c >= 5) {
            done = one;
        } else {
            done = FALSE;
        }
        if (done == 0) {
            func_ov065_0227913c(one);
        }
    } while (done == 0);
    conn->unk_24--;
    if (conn->unk_0c == 5) {
        *out = conn;
    }
    return conn->unk_18;
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284a2c(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, s32 p3)
{
    if (c->unk_0c == 5) {
        func_ov065_02286788(&msg, &len);
        if (func_ov065_02278684(c->unk_98) != 0) {
            func_ov065_022842d0(c, 0, msg, len, p3);
        } else {
            func_ov065_02284bf0(c, msg, len, p3);
        }
    }
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284a24(Unk_ov065_02284240_Conn *c)
{
    return func_ov065_02284cc0(c);
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284a18(Unk_ov065_02284240_Conn *c)
{
    func_ov065_02284688(c, 1);
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284a0c(Unk_ov065_02284240_Conn **p)
{
    func_ov065_02284a18(*p);
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022849f8(Unk_ov065_02284240_Sock *s)
{
    return func_ov065_02278790((s32)s->unk_0c, (void *)func_ov065_02284a0c, 0);
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022849d8(Unk_ov065_02284240_Conn *c)
{
    s32 s = c->unk_0c;
    if (s < 5) {
        return 0;
    }
    if (s == 5) {
        return 1;
    }
    if (s == 6) {
        return 2;
    }
    return 3;
}
} }

namespace N02284240 { extern "C" {
u32 func_ov065_022849d4(Unk_ov065_02284240_Sock *c)
{
    return c->unk_08;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022849cc(Unk_ov065_02284240_Conn *c)
{
    return c->unk_54 - c->unk_58;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022849c8(Unk_ov065_02284240_Conn *c)
{
    return c->unk_00;
}
} }

namespace N02284240 { extern "C" {
void func_ov065_022849c4(Unk_ov065_02284240_Conn *c, s32 v)
{
    *(s32 *)&c->unk_30 = v;
}
} }

namespace N02284240 { extern "C" {
void func_ov065_022849c0(Unk_ov065_02284240_Conn *c, s32 v)
{
    c->unk_40 = v;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022849bc(Unk_ov065_02284240_Conn *c)
{
    return c->unk_40;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = func_ov065_022863f8(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 0;
    (*pc)->unk_10 = 1;
    return 0;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_0228497c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = func_ov065_022863f8(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 2;
    (*pc)->unk_10 = 0;
    return 0;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284908(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x)
{
    Unk_ov065_02284908_Buf buf;
    func_ov065_02286788(&msg, &len);
    if (len > 0) {
        c->unk_38 = func_ov065_02277af0(len);
        if (c->unk_38 == NULL) {
            return TRUE;
        }
        func_02128a00(c->unk_38, (void *)msg, len);
        c->unk_3c = len;
    }
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    func_ov065_02283f34(&buf);
    func_ov065_02283e88((u8 *)c + 0x68, &buf);
    func_ov065_022850b0(c, &buf);
    c->unk_0c = 0;
    return FALSE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022848b8(Unk_ov065_02284240_Conn *c, Unk_ov065_02284240_Blob *x)
{
    if (c->unk_14 != 0) {
        c->unk_14 = 0;
        return FALSE;
    }
    s32 z = 0;
    c->unk_14 = z;
    if (c->unk_0c != 4) {
        return z;
    }
    func_ov065_02284f84(c);
    c->unk_0c = 5;
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284888(Unk_ov065_02284240_Conn *c, s32 msg, s32 len)
{
    c->unk_14 = 0;
    if (c->unk_0c == 4) {
        func_ov065_02286788(&msg, &len);
        func_ov065_02284f28(c, msg, len);
        c->unk_0c = 6;
    }
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284854(Unk_ov065_02284240_Conn *c, u32 a, u32 b)
{
    if (func_ov065_0228627c(c->unk_08, c->unk_00, c->unk_04, a, b) == 0) {
        return FALSE;
    }
    c->unk_88 = func_ov065_02279144();
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022847ec(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_0c < 5) {
        BOOL r = FALSE;
        if (c->unk_10 != 0) {
            u32 to = c->unk_20;
            if (to != 0) {
                if (t - c->unk_1c > to) {
                    r = TRUE;
                }
            }
        } else if (c->unk_0c < 4) {
            if (t - c->unk_1c > 60000) {
                r = TRUE;
            }
        }
        if (r != 0) {
            func_ov065_02284ca4(c);
            func_ov065_02284654(c);
            if (func_ov065_02284498(c, 6, 0, 0) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284798(Unk_ov065_02284240_Conn *c, u32 t)
{
    s32 n = func_ov065_02278684(c->unk_60);
    s32 i;
    for (i = 0; i < n; i++) {
        s32 *e = (s32 *)func_ov065_0227866c(c->unk_60, i);
        u32 d = t - e[3];
        if (d > 1000) {
            if (func_ov065_02284c0c(c, e) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_0228475c(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_90 == 0) {
        return TRUE;
    }
    u32 d = t - c->unk_94;
    if (d > 100) {
        if (func_ov065_02284d94(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_0228472c(Unk_ov065_02284240_Conn *c, u32 t)
{
    u32 d = t - c->unk_88;
    if (d > 30000) {
        if (func_ov065_02284e90(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022846c4(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (func_ov065_022847ec(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_0228472c(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_02284798(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_0228475c(c, t) != 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284688(Unk_ov065_02284240_Conn *c, s32 x)
{
    if (x != 0) {
        if (c->unk_0c < 7) {
            func_ov065_02284654(c);
            func_ov065_02284ca4(c);
            func_ov065_022843c0(c, 0);
            func_ov065_0228638c(c);
        }
    } else {
        c->unk_0c = 6;
        func_ov065_02284edc(c);
    }
}
} }

namespace N02284240 { extern "C" {
void func_ov065_02284654(Unk_ov065_02284240_Conn *c, ...)
{
    if (c->unk_0c != 7) {
        c->unk_0c = 7;
        func_ov065_02278810(c->unk_08->unk_0c, &c);
        func_ov065_02278658(c->unk_08->unk_10, &c);
    }
}
} }

namespace N02284240 { extern "C" {
void func_ov065_022845f4(Unk_ov065_02284240_Conn *c)
{
    if (c->unk_38 != NULL) {
        func_ov065_02277ac8(c->unk_38);
    }
    if (c->unk_44 != NULL) {
        func_ov065_02277ac8(c->unk_44);
    }
    if (c->unk_50 != NULL) {
        func_ov065_02277ac8(c->unk_50);
    }
    if (c->unk_5c != NULL) {
        func_ov065_02278688(c->unk_5c);
    }
    if (c->unk_60 != NULL) {
        func_ov065_02278688(c->unk_60);
    }
    if (c->unk_98 != NULL) {
        func_ov065_02278688(c->unk_98);
    }
    if (c->unk_9c != NULL) {
        func_ov065_02278688(c->unk_9c);
    }
    func_ov065_02277ac8(c);
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022845a4(Unk_ov065_02284240_Sock *s)
{
    if (s == NULL) {
        return TRUE;
    }
    if (s->unk_24 == NULL) {
        return TRUE;
    }
    s->unk_1c++;
    s->unk_24(s);
    s->unk_1c--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        func_ov065_02286564(s);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284514(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 p4, s32 p5, s32 p6)
{
    if (s == NULL || c == NULL) {
        return TRUE;
    }
    if (s->unk_20 == NULL) {
        return TRUE;
    }
    if (p6 == 0 || p5 == 0) {
        p5 = 0;
        p6 = 0;
    }
    s->unk_1c++;
    c->unk_24++;
    s->unk_20(s, c, a, b, p4, p5, p6);
    s->unk_1c--;
    c->unk_24--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        func_ov065_02286564(s);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284498(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    c->unk_18 = a;
    if (c->unk_28 == NULL) {
        return TRUE;
    }
    if (d == 0 || b == 0) {
        b = 0;
        d = b;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_28(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284420(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_2c == NULL) {
        return TRUE;
    }
    if (b == 0 || a == 0) {
        a = 0;
        b = a;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_2c(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022843c0(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_30 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_30(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284360(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_34 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_34(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_022842d0(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)func_ov065_0227866c(c->unk_98, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 func_ov065_02284240(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)func_ov065_0227866c(c->unk_9c, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_022841a4(Unk_ov065_0228412c_Obj *o, Unk_ov065_0228412c_Obj *x, s32 u2, s32 u3, s32 s4, s32 s5, s32 s6, s32 s7) {
    s32 (*f)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    if (o == 0) {
        return 1;
    }
    if (s7 != 0) {
        f = o->unk_28;
    } else {
        f = o->unk_2c;
    }
    if (f == 0) {
        return 1;
    }
    if (s6 == 0 || s5 == 0) {
        s5 = 0;
        s6 = 0;
    }
    o->unk_1c++;
    if (x != 0) {
        x->unk_24++;
    }
    f(o, x, u2, u3, s4, s5, s6);
    o->unk_1c--;
    if (x != 0) {
        x->unk_24--;
    }
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        func_ov065_02286564(o);
        return 0;
    }
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_0228412c(Unk_ov065_0228412c_Obj *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 *out) {
    *out = 0;
    if (o == 0) {
        return 1;
    }
    if (o->unk_30 == 0) {
        return 1;
    }
    if (a4 == 0 || a3 == 0) {
        a3 = 0;
        a4 = 0;
    }
    o->unk_1c++;
    *out = o->unk_30(o, a1, a2, a3, a4);
    o->unk_1c--;
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        func_ov065_02286564(o);
        return 0;
    }
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_02284100(Unk_ov065_02284100_Buf *b, s32 size) {
    b->unk_00 = (char *)func_ov065_02277af0(size);
    if (b->unk_00 == 0) {
        return 0;
    }
    b->unk_04 = size;
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_022840f8(Unk_ov065_02284100_Buf *b) {
    return b->unk_04 - b->unk_08;
}
} }

namespace N022838c4 { extern "C" {
void func_ov065_022840ec(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v;
}
} }

namespace N022838c4 { extern "C" {
void func_ov065_022840cc(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v >> 8;
    b->unk_00[b->unk_08++] = v;
}
} }

namespace N022838c4 { extern "C" {
void func_ov065_02284090(Unk_ov065_02284100_Buf *b, char *s, s32 n) {
    if (s != 0 && n != 0) {
        if (n == -1) {
            n = func_021277d4(s);
        }
        func_02128a00(b->unk_00 + b->unk_08, s, n);
        b->unk_08 += n;
    }
}
} }

namespace N022838c4 { extern "C" {
void func_ov065_0228405c(Unk_ov065_02284100_Buf *b, s32 pos, s32 n) {
    if (pos == -1) {
        pos = b->unk_08 - n;
    }
    func_021289b4(b->unk_00 + pos, b->unk_00 + pos + n, b->unk_08 - pos - n);
    b->unk_08 -= n;
}
} }

namespace N022838c4 { extern "C" {
BOOL func_ov065_02283fdc(u8 *p) {
    u32 t2;
    u32 t1;
    u32 v[8];
    u32 acc;
    s32 i;
    u32 c;
    u32 b;
    u32 x;
    acc = 0;
    i = 1;
    c = p[0];
    v[0] = c;
    v[0] &= i;
    v[2] = 0;
    v[1] = 1;
    v[4] = 0;
    v[3] = 1;
    v[6] = 1;
    v[5] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = p[i - 1];
        if (b < c) {
            t1 = v[1];
        } else {
            t1 = v[2];
        }
        if (c < 0x4f) {
            t2 = v[3];
        } else {
            t2 = v[4];
        }
        x = i;
        x ^= b;
        x &= v[5];
        acc ^= x;
        b = v[0];
        b ^= acc;
        b ^= t2;
        acc = b;
        acc ^= t1;
        if ((acc != 0 && (p[i] & v[6]) == 0) || (acc == 0 && (p[i] & v[7]) == 1)) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N022838c4 { extern "C" {
char *func_ov065_02283f34(u8 *out) {
    u32 t2;
    u32 b;
    u8 *p;
    u32 c;
    s32 i;
    u32 t1;
    u32 v[9];
    u32 acc;
    func_02128c60(func_ov065_02279144(out));
    out[0] = func_02128c70() % 0x5d + 0x21;
    acc = 0;
    i = 1;
    v[1] = 0;
    v[0] = 1;
    v[3] = 0;
    v[2] = 1;
    v[5] = 1;
    v[4] = 1;
    v[6] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = out[i - 1];
        c = out[0];
        if (b < c) {
            t1 = v[0];
        } else {
            t1 = v[1];
        }
        if (c < 0x4f) {
            t2 = v[2];
        } else {
            t2 = v[3];
        }
        c &= v[5];
        v[8] = i;
        v[8] = v[8] ^ b;
        v[8] = v[8] & v[4];
        acc ^= v[8];
        c ^= acc;
        c ^= t2;
        acc = c;
        acc ^= t1;
        p = out + i;
        out[i] = func_02128c70() % 0x5d + 0x21;
        if ((acc != 0 && (*p & v[6]) == 0) || (acc == 0 && (*p & v[7]) == 1)) {
            (*p)++;
        }
    }
    return (char *)out;
}
} }

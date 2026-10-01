// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU37: ghttp (1): ghttpBuffer / connection table / ghttpMain (0x0227931c..0x0227a284)


extern "C" {
s32 data_ov065_0228ca50 = 125;
u32 data_ov065_0228ca4c = 250;
void **data_ov065_022910d4;
s32 data_ov065_022910d0;
s32 data_ov065_022910cc;
s32 data_ov065_022910c8;
void *data_ov065_022910c4;
u32 data_ov065_022910c0;
s32 data_ov065_022910d8;
}

namespace Ng {
struct Unk_ov065_02278c64_Sa {
    u8 b[8];
};

struct Unk_ov065_02278f0c_Pfd {
    s32 fd;
    s16 events;
    s16 revents;
};

struct Unk_ov065_0227931c_Owner {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3c[0x0c];
    s32 unk_48;
    s32 unk_4c;
    u8 pad_50[4];
    char *unk_54;
    u8 pad_58[4];
    s32 unk_5c;
    s32 unk_60;
    u8 pad_64[0x98];
    s32 unk_fc;
    u8 pad_100[0x64];
    u32 unk_164[6];
    s32 (*unk_17c)(Unk_ov065_0227931c_Owner *, void *, char *, s32 *, char *, s32 *);
};

struct Unk_ov065_0227931c_Buf {
    Unk_ov065_0227931c_Owner *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};

extern s32 data_ov065_02291080;
struct Unk_ov065_02291094 {
    u32 unk_00;
};
extern Unk_ov065_02291094 data_ov065_02291094;
extern u8 data_0213a410[];

struct Unk_ov065_02278e64_A {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 unk_0c;
};
struct Unk_ov065_02278e64_B {
    u32 *unk_00;
    u32 unk_04;
};
extern Unk_ov065_02278e64_A data_ov065_02291084;
extern Unk_ov065_02278e64_B data_ov065_022910a8;
extern u8 data_ov065_0229107c[];

extern "C" {
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_ov065_0226149c(s32 a, s32 b, s32 c, u32 d, void *sa);
s32 func_ov065_0226150c(s32 a, s32 b, s32 c, u32 d);
s32 func_ov065_02261524(s32 a, s32 b, s32 c, u32 d, u8 *sa);
s32 func_ov065_02261588(s32 a, s32 b, s32 c, u32 d);
s32 func_ov065_0226129c(s32 a, u8 *sa);
s32 func_ov065_022612f4(s32 a, s32 b, s32 c);
s32 func_ov065_022615a0(s32 a, void *sa);
s32 func_ov065_022615f0(s32 a, void *sa);
s32 func_ov065_02261494(s32 a, s32 b, s32 c);
s32 func_ov065_0226148c(s32 a, s32 b, s32 c);
s32 func_ov065_02261610(s32 a, s32 b);
s32 func_ov065_02260fa4(Unk_ov065_02278f0c_Pfd *arr, u32 n, s64 timeout);
s32 func_ov065_0226125c(s32 a, s32 cmd, u32 flags);
u32 func_ov065_02260cb4();
s32 func_ov065_02261034(u32 v, u32 *p);
u32 func_ov065_02278be8(s32 s);
s32 func_ov065_022796a8(Unk_ov065_0227931c_Owner *o, char *buf, s32 n);
u32 func_021277d4(const char *s);
char *func_02127838(char *d, const char *s);
void *func_ov065_02277af0(u32 n);
void *func_ov065_02277ad8(void *p, s32 n);
void func_ov065_02277ac8(void *p);
void func_021132e0(s32 ms);
u64 func_01ffa6b4();
u64 func_02132ef8(u64 a, u32 b, u32 c);
void func_02128a00(void *d, const void *s, u32 n);
void func_0212899c(void *d, s32 v, u32 n);
s32 func_021130d0(char *buf, const char *fmt, ...);

s32 func_ov065_02278dec(s32 a, s32 b);
s32 func_ov065_02278c38(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov065_02278c44(s32 a, s32 b, s32 c, void *val, s32 *len);
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n);

}

extern "C" {
static inline u32 Unk_ov065_02278dfc_Ntohl(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}
}
extern "C" {
s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
void func_ov065_0227946c(Unk_ov065_0227931c_Buf *o);
s32 func_ov065_02279494(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, char *buf, s32 size);
s32 func_ov065_022794d0(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, s32 size, s32 grow);
s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n);
}
}

namespace Nc {
struct Unk_ov065_02279c7c;

typedef void (*Unk_ov065_02279588_Cb1)(u32, u32, u32, u32, u32, u32);
typedef void (*Unk_ov065_022795d4_Cb2)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_0227960c_Cb3)(u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_022798f8_Cb4)(Unk_ov065_02279c7c *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*Unk_ov065_02279a64_Cb5)(Unk_ov065_02279c7c *, void *);

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    Unk_ov065_022795d4_Cb2 unk_3c;
    Unk_ov065_0227960c_Cb3 unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    u32 unk_5c;
    u32 unk_60[5];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    void *unk_13c;
    u32 unk_140;
    u32 unk_144;
    u32 unk_148;
    u32 unk_14c;
    Unk_ov065_02279588_Cb1 unk_150;
    u32 unk_154;
    u32 unk_158;
    void *unk_15c;
    u16 unk_160;
    u32 unk_164;
    u32 unk_168;
    u32 unk_16c;
    u32 unk_170;
    u32 unk_174;
    Unk_ov065_02279a64_Cb5 unk_178;
    u32 unk_17c;
    Unk_ov065_022798f8_Cb4 unk_180;
};

extern "C" {
extern Unk_ov065_02279c7c **data_ov065_022910d4;
extern s32 data_ov065_022910c8;
extern s32 data_ov065_022910cc;
extern s32 data_ov065_022910d0;
extern u32 data_ov065_0228ca4c;
extern s32 data_ov065_0228ca50;

u32 func_ov065_02278684(u32);
s32 func_ov065_02278ca0(s32, u8 *, s32, s32);
s32 func_ov065_02278ce0(s32, u8 *, s32, s32);
s32 func_ov065_02278be8(s32);
void func_ov065_02278da4(s32, s32);
void func_ov065_02278dbc(s32);
u32 func_ov065_02279144();
BOOL func_ov065_02279168(void *, u8 *, s32 *);
void func_ov065_0227924c(void *);
BOOL func_ov065_0227931c(void *, u8 *, s32);
void func_ov065_0227946c(void *);
BOOL func_ov065_022794d0(void *, void *, s32, s32);
BOOL func_ov065_0227953c(void *, s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277ad8(void *, u32);
void *func_ov065_02277af0(u32);
void func_ov065_0227a884(void *);
BOOL func_ov065_0227acf8(void *);
void func_ov065_0227ace0(void *);
void func_021289b4(void *, void *, u32);
void func_0212899c(void *, s32, u32);

void func_ov065_022799f4();
void func_ov065_022799f8();
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *);
s32 func_ov065_02279e04();
BOOL func_ov065_022798f8(Unk_ov065_02279c7c *);
void func_ov065_02279b08(BOOL (*)(Unk_ov065_02279c7c *));
}


extern "C" {
s32 func_ov065_022796a8(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
}
extern "C" {
void func_ov065_02279588(Unk_ov065_02279c7c *self);
void func_ov065_022795d4(Unk_ov065_02279c7c *self, u32 p1, u32 p2);
void func_ov065_0227960c(Unk_ov065_02279c7c *self);
s32 func_ov065_02279654(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
s32 func_ov065_022796a8(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
s32 func_ov065_02279714(Unk_ov065_02279c7c *self, u8 *buf, s32 *plen);
BOOL func_ov065_022798f8(Unk_ov065_02279c7c *self);
void func_ov065_02279a04();
void func_ov065_02279a64(Unk_ov065_02279c7c *self);
void func_ov065_02279b08(BOOL (*cb)(Unk_ov065_02279c7c *));
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *s);
Unk_ov065_02279c7c *func_ov065_02279c7c();
s32 func_ov065_02279e04();
void func_ov065_022799f4();
void func_ov065_022799f8();
void func_ov065_022799fc();
void func_ov065_02279a00();
}
}

namespace Nm {
struct Unk_ov065_0227a4e8_Part {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227a4e8_Slot {
    Unk_ov065_0227a4e8_Part *unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227a3f4_List {
    void *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227a4e8_Req {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    void *unk_3c;
    void *unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    s32 unk_5c;
    s32 unk_60;
    u32 unk_64[4];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    Unk_ov065_0227a4e8_Req *unk_13c;
    void *unk_140;
    s32 unk_144;
    u32 unk_148;
};

extern "C" {
extern s32 data_ov065_022910d8;
extern void *data_ov065_022910c4;
extern u32 data_ov065_0228ca4c;
extern s32 data_ov065_0228ca50;

s32 func_ov065_0227ac34(void *, const char *, const char *);
s32 func_ov065_0227acfc();
void func_ov065_02279b08(s32 (*)(Unk_ov065_02279c7c *));
char *func_ov065_02279100(const char *);
Unk_ov065_02279c7c *func_ov065_02279c7c();
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *);
BOOL func_ov065_0227a8ec(Unk_ov065_02279c7c *);
void func_ov065_0227913c(s32);
void func_ov065_0227bb5c(Unk_ov065_02279c7c *);
void func_ov065_0227b9c4(Unk_ov065_02279c7c *);
void func_ov065_0227b8e4(Unk_ov065_02279c7c *);
void func_ov065_0227b72c(Unk_ov065_02279c7c *);
void func_ov065_0227b6dc(Unk_ov065_02279c7c *);
void func_ov065_0227b68c(Unk_ov065_02279c7c *);
void func_ov065_0227b51c(Unk_ov065_02279c7c *);
void func_ov065_0227ae94(Unk_ov065_02279c7c *);
void func_ov065_0227ada4(Unk_ov065_02279c7c *);
void func_ov065_02279a64(Unk_ov065_02279c7c *);
void func_ov065_0227960c(Unk_ov065_02279c7c *);
void func_ov065_022799f4();
void func_ov065_022799f8();
void func_ov065_022799fc();
void func_ov065_02279a00();
void func_ov065_02279a04();
void func_ov065_02277ac8(void *);
s32 func_ov065_02278684(void *);
Unk_ov065_0227a4e8_Slot *func_ov065_0227866c(void *, s32);
s32 func_ov065_022791c0(Unk_ov065_02279c7c *);
void func_ov065_0227924c(void *);
s32 func_ov065_02279654(Unk_ov065_02279c7c *, const void *, s32);
s32 func_ov065_022796a8(Unk_ov065_02279c7c *, const void *, s32);
BOOL func_ov065_02279494(Unk_ov065_02279c7c *, void *, void *, s32);
BOOL func_ov065_022794d0(Unk_ov065_02279c7c *, void *, s32, s32);
void func_ov065_02279280(void *, s32);
BOOL func_ov065_0227931c(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_021277d4(const char *);
s32 func_0212a120(const char *, s32);
s32 func_02128030(void *, s32, s32, u32);

s32 func_ov065_0227a284(Unk_ov065_02279c7c *);
void func_ov065_0227a350(Unk_ov065_02279c7c *);
s32 func_ov065_0227a4e8(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *, s32);
s32 func_ov065_0227a624(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 func_ov065_0227a694(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 func_ov065_0227a788(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
void func_ov065_0227a244();
}
extern "C" {
s32 func_ov065_02279eb4(void *a, const char *b, const char *c);
s32 func_ov065_02279eec();
void func_ov065_02279ef4();
s32 func_ov065_02279f04(const char *a, const char *b, Unk_ov065_0227a4e8_Req *c, u32 d, s32 e, u32 f, u32 g, u32 h);
s32 func_ov065_0227a024(const char *a, Unk_ov065_0227a4e8_Req *b, s32 c, u32 d, u32 e);
s32 func_ov065_0227a048(const char *a, const char *b, void *c, s32 d, Unk_ov065_0227a4e8_Req *e, u32 f, s32 g, u32 h, u32 i, u32 j);
s32 func_ov065_0227a1d4(const char *a, s32 b, u32 c, u32 d);
void func_ov065_0227a1f8();
void func_ov065_0227a244();
}
}

namespace Nm {
extern "C" {
void func_ov065_0227a244() {
    func_ov065_022799f8();
    if (++data_ov065_022910d8 == 1) {
        func_ov065_02279a00();
        data_ov065_0228ca50 = 0x7d;
        data_ov065_0228ca4c = 0xfa;
    } else {
        func_ov065_022799f4();
    }
}
}
}

namespace Nm {
extern "C" {
void func_ov065_0227a1f8() {
    func_ov065_022799f8();
    if (--data_ov065_022910d8 == 0) {
        func_ov065_02279a04();
        if (data_ov065_022910c4 != 0) {
            func_ov065_02277ac8(data_ov065_022910c4);
            data_ov065_022910c4 = 0;
        }
        func_ov065_022799f4();
        func_ov065_022799fc();
    } else {
        func_ov065_022799f4();
    }
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a1d4(const char *a, s32 b, u32 c, u32 d) {
    return func_ov065_0227a048(a, 0, 0, 0, 0, 0, b, 0, c, d);
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a048(const char *a, const char *b, void *c, s32 d, Unk_ov065_0227a4e8_Req *e, u32 f, s32 g, u32 h, u32 i, u32 j) {
    Unk_ov065_02279c7c *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (d < 0) {
        return -1;
    }
    if (c != 0 && d == 0) {
        return -1;
    }
    if (data_ov065_022910d8 == 0) {
        func_ov065_0227a244();
    }
    conn = func_ov065_02279c7c();
    if (conn == 0) {
        return -1;
    }
    conn->unk_0c = 0;
    conn->unk_14 = func_ov065_02279100(a);
    if (conn->unk_14 == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = func_ov065_02279100(b);
        if (conn->unk_28 == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    conn->unk_13c = e;
    conn->unk_30 = g;
    conn->unk_3c = (void *)h;
    conn->unk_40 = (void *)i;
    conn->unk_44 = j;
    conn->unk_134 = f;
    conn->unk_e0 = (c != 0) ? 1 : 0;
    BOOL ok;
    if (conn->unk_e0 != 0) {
        ok = func_ov065_02279494(conn, &conn->unk_bc, c, d);
    } else {
        ok = func_ov065_022794d0(conn, &conn->unk_bc, 0x800, 0x800);
    }
    if (ok == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (e != 0) {
        if (func_ov065_0227a8ec(conn) == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    if (g != 0) {
        if (func_ov065_0227a284(conn) == 0) {
            s32 t = 10;
            do {
                func_ov065_0227913c(t);
            } while (func_ov065_0227a284(conn) == 0);
        }
        return 0;
    }
    return conn->unk_04;
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a024(const char *a, Unk_ov065_0227a4e8_Req *b, s32 c, u32 d, u32 e) {
    return func_ov065_02279f04(a, 0, b, 0, c, 0, d, e);
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_02279f04(const char *a, const char *b, Unk_ov065_0227a4e8_Req *c, u32 d, s32 e, u32 f, u32 g, u32 h) {
    Unk_ov065_02279c7c *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (c == 0) {
        return -1;
    }
    if (data_ov065_022910d8 == 0) {
        func_ov065_0227a244();
    }
    conn = func_ov065_02279c7c();
    if (conn == 0) {
        return -1;
    }
    conn->unk_0c = 4;
    conn->unk_14 = func_ov065_02279100(a);
    if (conn->unk_14 == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = func_ov065_02279100(b);
        if (conn->unk_28 == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    conn->unk_13c = c;
    conn->unk_30 = e;
    conn->unk_3c = (void *)f;
    conn->unk_40 = (void *)g;
    conn->unk_44 = h;
    conn->unk_134 = d;
    if (c != 0) {
        if (func_ov065_0227a8ec(conn) == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    if (e != 0) {
        if (func_ov065_0227a284(conn) == 0) {
            s32 t = 10;
            do {
                func_ov065_0227913c(t);
            } while (func_ov065_0227a284(conn) == 0);
        }
        return 0;
    }
    return conn->unk_04;
}
}
}

namespace Nm {
extern "C" {
void func_ov065_02279ef4() {
    func_ov065_02279b08(func_ov065_0227a284);
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_02279eec() {
    return func_ov065_0227acfc();
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_02279eb4(void *a, const char *b, const char *c) {
    if (a == 0) {
        return 0;
    }
    if (b == 0 || *b == 0) {
        return 0;
    }
    if (c == 0) {
        c = "";
    }
    return func_ov065_0227ac34(a, b, c);
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_02279e04() {
    s32 i = 0;
    s32 base;
    s32 end;
    for (i = 0; i < data_ov065_022910c8; i++) {
        if (data_ov065_022910d4[i]->unk_00 == 0) {
            return i;
        }
    }
    base = data_ov065_022910c8;
    end = base + 4;
    void *p = func_ov065_02277ad8(data_ov065_022910d4, end * 4);
    if (p == 0) {
        return -1;
    }
    data_ov065_022910d4 = (Unk_ov065_02279c7c **)p;
    i = base;
    for (; i < end; i++) {
        data_ov065_022910d4[i] = (Unk_ov065_02279c7c *)func_ov065_02277af0(0x184);
        if (data_ov065_022910d4[i] == 0) {
            for (i--; i >= base; i--) {
                func_ov065_02277ac8(data_ov065_022910d4[i]);
            }
            return -1;
        }
        data_ov065_022910d4[i]->unk_00 = 0;
    }
    data_ov065_022910c8 = end;
    return base;
}
}
}

namespace Nc {
extern "C" {
Unk_ov065_02279c7c *func_ov065_02279c7c() {
    Unk_ov065_02279c7c *s;
    s32 idx;
    BOOL r;
    func_ov065_022799f8();
    idx = func_ov065_02279e04();
    if (idx == -1) {
        func_ov065_022799f4();
        return 0;
    }
    s = data_ov065_022910d4[idx];
    func_0212899c(s, 0, 0x184);
    s->unk_00 = 1;
    s->unk_04 = idx;
    s->unk_08 = data_ov065_022910d0++;
    s->unk_0c = 0;
    s->unk_10 = 0;
    s->unk_14 = 0;
    s->unk_18 = 0;
    s->unk_1c = 0;
    s->unk_20 = 0;
    s->unk_24 = 0;
    s->unk_28 = 0;
    s->unk_2c = 0;
    s->unk_30 = 0;
    s->unk_34 = 0;
    s->unk_38 = 0;
    s->unk_3c = 0;
    s->unk_40 = 0;
    s->unk_44 = 0;
    s->unk_48 = -1;
    s->unk_4c = 0;
    s->unk_e0 = 0;
    s->unk_e4 = 0;
    s->unk_e8 = 0;
    s->unk_ec = 0;
    s->unk_f0 = 0;
    s->unk_f4 = 0;
    s->unk_f8 = 0;
    s->unk_fc = 0;
    s->unk_100 = 0;
    s->unk_104 = -1;
    s->unk_108 = 0;
    s->unk_10c = 0;
    s->unk_110 = 0;
    s->unk_12c = 0;
    s->unk_134 = 0;
    s->unk_138 = 0;
    s->unk_13c = 0;
    s->unk_158 = 0x1f4;
    s->unk_160 = 0x50;
    s->unk_15c = 0;
    s->unk_164 = 0;
    r = func_ov065_022794d0(s, &s->unk_50, 0x800, 0x1000);
    if (r != 0) {
        r = func_ov065_022794d0(s, &s->unk_74, 0x800, 0x800);
    }
    if (r != 0) {
        r = func_ov065_022794d0(s, &s->unk_98, 0x800, 0x400);
    }
    if (r == 0) {
        func_ov065_02279b58(s);
        func_ov065_022799f4();
        return 0;
    }
    data_ov065_022910cc++;
    func_ov065_022799f4();
    return s;
}
}
}

namespace Nc {
extern "C" {
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *s) {
    if (s == 0) {
        return FALSE;
    }
    if (s->unk_00 == 0) {
        return FALSE;
    }
    if (s->unk_04 < 0) {
        return FALSE;
    }
    if (s->unk_04 >= data_ov065_022910c8) {
        return FALSE;
    }
    func_ov065_022799f8();
    func_ov065_02277ac8(s->unk_14);
    func_ov065_02277ac8(s->unk_18);
    func_ov065_02277ac8(s->unk_24);
    func_ov065_02277ac8(s->unk_28);
    func_ov065_02277ac8(s->unk_108);
    func_ov065_02277ac8(s->unk_15c);
    if (s->unk_48 != -1) {
        func_ov065_02278da4(s->unk_48, 2);
        func_ov065_02278dbc(s->unk_48);
    }
    func_ov065_0227946c(&s->unk_50);
    func_ov065_0227946c(&s->unk_74);
    func_ov065_0227946c(&s->unk_98);
    func_ov065_0227946c(&s->unk_bc);
    if (s->unk_140 != 0) {
        func_ov065_0227a884(s);
    }
    if (s->unk_13c != 0) {
        if (func_ov065_0227acf8(s->unk_13c) != 0) {
            func_ov065_0227ace0(s->unk_13c);
            s->unk_13c = 0;
        }
    }
    if (s->unk_16c != 0) {
        if (s->unk_178 != 0) {
            s->unk_178(s, &s->unk_164);
        }
        s->unk_16c = 0;
    }
    s->unk_00 = 0;
    data_ov065_022910cc--;
    func_ov065_022799f4();
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
void func_ov065_02279b08(BOOL (*cb)(Unk_ov065_02279c7c *)) {
    if (data_ov065_022910cc > 0) {
        s32 i;
        func_ov065_022799f8();
        for (i = 0; i < data_ov065_022910c8; i++) {
            Unk_ov065_02279c7c *s = data_ov065_022910d4[i];
            if (s->unk_00 != 0) {
                cb(s);
            }
        }
        func_ov065_022799f4();
    }
}
}
}

namespace Nc {
extern "C" {
void func_ov065_02279a64(Unk_ov065_02279c7c *self) {
    self->unk_10 = 0;
    func_ov065_02277ac8(self->unk_14);
    self->unk_14 = self->unk_108;
    self->unk_108 = 0;
    func_ov065_02277ac8(self->unk_18);
    self->unk_18 = 0;
    self->unk_1c = 0;
    self->unk_20 = 0;
    func_ov065_02277ac8(self->unk_24);
    self->unk_24 = 0;
    func_ov065_02278da4(self->unk_48, 2);
    func_ov065_02278dbc(self->unk_48);
    self->unk_48 = -1;
    func_ov065_0227924c(&self->unk_50);
    func_ov065_0227924c(&self->unk_74);
    func_ov065_0227924c(&self->unk_98);
    self->unk_e4 = 0;
    self->unk_e8 = 0;
    self->unk_ec = 0;
    self->unk_f0 = 0;
    self->unk_f4 = 0;
    self->unk_f8 = 0;
    self->unk_130 = 0;
    self->unk_10c++;
}
}
}

namespace Nc {
extern "C" {
void func_ov065_02279a04() {
    if (data_ov065_022910d4 != 0) {
        s32 i;
        func_ov065_02279b08(func_ov065_02279b58);
        for (i = 0; i < data_ov065_022910c8; i++) {
            func_ov065_02277ac8(data_ov065_022910d4[i]);
        }
        func_ov065_02277ac8(data_ov065_022910d4);
        data_ov065_022910d4 = 0;
        data_ov065_022910c8 = 0;
        data_ov065_022910cc = 0;
    }
}
}
}

namespace Nc {
extern "C" {
void func_ov065_02279a00() {
}
}
}

namespace Nc {
extern "C" {
void func_ov065_022799fc() {
}
}
}

namespace Nc {
extern "C" {
void func_ov065_022799f8() {
}
}
}

namespace Nc {
extern "C" {
void func_ov065_022799f4() {
}
}
}

namespace Nc {
extern "C" {
BOOL func_ov065_022798f8(Unk_ov065_02279c7c *self) {
    s32 inl = 0;
    s32 outl = 0;
    s32 r;
    do {
        s32 pos = self->unk_a8;
        u8 *in = self->unk_9c + pos;
        inl = self->unk_a4 - pos;
        s32 w = self->unk_80;
        u8 *out = self->unk_78 + w;
        outl = self->unk_7c - w;
        r = self->unk_180(self, &self->unk_164, in, &inl, out, &outl);
        if (r == 2 && func_ov065_0227953c(&self->unk_74, self->unk_88) == 0) {
            return FALSE;
        }
    } while (r == 2 && outl == 0);
    self->unk_a8 += inl;
    self->unk_80 += outl;
    if (self->unk_a8 > 0xff) {
        s32 rest = self->unk_a4 - self->unk_a8;
        if (rest == 0) {
            func_ov065_0227924c(&self->unk_98);
        } else {
            func_021289b4(self->unk_9c, self->unk_9c + self->unk_a8, rest);
            self->unk_a8 = 0;
            self->unk_a4 = rest;
        }
    }
    if (r == 3) {
        self->unk_fc = 1;
        self->unk_38 = 0x11;
        return FALSE;
    }
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_02279714(Unk_ov065_02279c7c *self, u8 *buf, s32 *plen) {
    s32 len;
    s32 n = *plen - 1;
    if (self->unk_134 != 0) {
        u32 t = func_ov065_02279144();
        if (t < self->unk_138 + data_ov065_0228ca4c) {
            return 1;
        }
        self->unk_138 = t;
        if (n >= data_ov065_0228ca50) {
            n = data_ov065_0228ca50;
        }
    }
    if (self->unk_84 < self->unk_80) {
        func_ov065_02279168(&self->unk_74, buf, plen);
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
        }
        return 0;
    }
    len = func_ov065_02278ce0(self->unk_48, buf, n, 0);
    if (len == -1) {
        s32 e = func_ov065_02278be8(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 1;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        self->unk_130 = 1;
        return 3;
    }
    if (len == 0) {
        self->unk_130 = 1;
        return 2;
    }
    if (self->unk_168 != 0) {
        if (func_ov065_0227931c(&self->unk_98, buf, len) == 0) {
            return 3;
        }
        if (func_ov065_022798f8(self) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 0x11;
            return 3;
        }
        if (self->unk_80 - self->unk_84 <= 0) {
            buf[0] = 0;
            *plen = 0;
            return 1;
        }
        len = *plen - 1;
        if (func_ov065_02279168(&self->unk_74, buf, &len) == 0) {
            return 3;
        }
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
        }
        if (len <= 0) {
            return 1;
        }
    }
    s32 r = 0;
    buf[len] = 0;
    *plen = len;
    if (len <= 0) {
        r = 1;
    }
    return r;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_022796a8(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = func_ov065_02278ca0(self->unk_48, buf, len, 0);
    if (r == -1) {
        s32 e = func_ov065_02278be8(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 0;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        return -1;
    }
    if (self->unk_10 == 4) {
        self->unk_148 += r;
    }
    return r;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_02279654(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = 0;
    if (self->unk_5c == 0) {
        r = func_ov065_022796a8(self, buf, len);
        if (r == -1) {
            return 0;
        }
        if (r == len) {
            return 1;
        }
    }
    if (func_ov065_0227931c(&self->unk_50, buf + r, len - r) == 0) {
        return 0;
    }
    return 2;
}
}
}

namespace Nc {
extern "C" {
void func_ov065_0227960c(Unk_ov065_02279c7c *self) {
    if (self->unk_40 != 0) {
        u32 a;
        u32 b;
        if (self->unk_0c != 0) {
            a = 0;
            b = 0;
        } else {
            a = self->unk_c0;
            b = self->unk_100;
        }
        s32 r = self->unk_40(self->unk_04, self->unk_38, a, b, self->unk_44);
        if (a != 0 && r == 0) {
            self->unk_d8 = 1;
        }
    }
}
}
}

namespace Nc {
extern "C" {
void func_ov065_022795d4(Unk_ov065_02279c7c *self, u32 p1, u32 p2) {
    if (self->unk_3c != 0) {
        self->unk_3c(self->unk_04, self->unk_10, p1, p2, self->unk_100, self->unk_104, self->unk_44);
    }
}
}
}

namespace Nc {
extern "C" {
void func_ov065_02279588(Unk_ov065_02279c7c *self) {
    if (self->unk_150 != 0) {
        u32 a = func_ov065_02278684(self->unk_140);
        self->unk_150(self->unk_04, self->unk_148, self->unk_14c, self->unk_144, a, self->unk_44);
    }
}
}
}

namespace Ng {
extern "C" {
s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n) {
    s32 newsize;
    void *p;
    if (o == 0) {
        return FALSE;
    }
    if (n <= 0) {
        return FALSE;
    }
    newsize = o->unk_08 + n;
    p = func_ov065_02277ad8(o->unk_04, newsize);
    if (p == 0) {
        return FALSE;
    }
    o->unk_04 = (char *)p;
    o->unk_08 = newsize;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 func_ov065_022794d0(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, s32 size, s32 grow) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    if (grow <= 0) {
        return FALSE;
    }
    o->unk_00 = ow;
    o->unk_04 = 0;
    o->unk_08 = 0;
    o->unk_0c = 0;
    o->unk_10 = 0;
    o->unk_14 = grow;
    o->unk_18 = 0;
    o->unk_1c = 0;
    o->unk_20 = 0;
    if (func_ov065_0227953c(o, size) == 0) {
        return FALSE;
    }
    *o->unk_04 = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 func_ov065_02279494(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, char *buf, s32 size) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (buf == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    o->unk_00 = ow;
    o->unk_04 = buf;
    o->unk_08 = size;
    o->unk_0c = 0;
    o->unk_14 = 0;
    o->unk_18 = 1;
    o->unk_1c = 1;
    o->unk_20 = 0;
    *o->unk_04 = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
void func_ov065_0227946c(Unk_ov065_0227931c_Buf *o) {
    if (o != 0 && o->unk_04 != 0) {
        if (o->unk_1c == 0) {
            func_ov065_02277ac8(o->unk_04);
        }
        func_0212899c(o, 0, 0x24);
    }
}
}
}

namespace Ng {
extern "C" {
s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len) {
    Unk_ov065_0227931c_Owner *ow = o->unk_00;
    s32 n;
    s32 r;
    if (o == 0) {
        return FALSE;
    }
    if (s == 0) {
        return FALSE;
    }
    if (len < 0) {
        return FALSE;
    }
    if (len == 0) {
        len = func_021277d4(s);
    }
    if (o->unk_20 == 1) {
        do {
            n = o->unk_08 - o->unk_0c;
            r = ow->unk_17c(ow, &ow->unk_164, s, &len, o->unk_04 + o->unk_0c, &n);
            if (r == 2) {
                if (o->unk_18 != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 2;
                    return FALSE;
                }
                if (func_ov065_0227953c(o, o->unk_14) != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 1;
                    return FALSE;
                }
            } else {
                o->unk_0c += n;
            }
        } while (r == 2);
    } else {
        s32 t = o->unk_0c + len;
        while (t >= o->unk_08) {
            if (o->unk_18 != 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 2;
                return FALSE;
            }
            if (func_ov065_0227953c(o, o->unk_14) == 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 1;
                return FALSE;
            }
        }
        func_02128a00(o->unk_04 + o->unk_0c, s, len);
        o->unk_0c = t;
        o->unk_04[o->unk_0c] = 0;
    }
    return TRUE;
}
}
}

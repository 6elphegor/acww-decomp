// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU38: ghttp (2): request post / process / response handlers (0x0227a284..0x0227bd20)


extern "C" {
char data_ov065_0228ca58[4] = "%00";
volatile s32 data_ov065_022910e4;
volatile s32 data_ov065_022910e0;
volatile s32 data_ov065_022910dc;
volatile s32 data_ov065_022910e8;
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
extern char data_ov065_0228ca58[4];

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
s32 OS_SPrintf(char *, const char *, ...);
s32 STD_GetStringLength(const char *);
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
s32 func_ov065_0227a284(Unk_ov065_02279c7c *c);
void func_ov065_0227a350(Unk_ov065_02279c7c *c);
s32 func_ov065_0227a3f4(Unk_ov065_02279c7c *c);
s32 func_ov065_0227a4e8(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c, s32 first);
s32 func_ov065_0227a624(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
s32 func_ov065_0227a694(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
s32 func_ov065_0227a788(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
}
}

namespace Na {
typedef void (*Unk_ov065_02278740_Dtor)(void *);

struct Unk_ov065_022786bc_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    Unk_ov065_02278740_Dtor unk_10;
    u8 *unk_14;
};

struct Unk_ov065_0227a884_Rec {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
};

struct Unk_ov065_0227a8ec_Item {
    Unk_ov065_0227a884_Rec *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;

};

struct Unk_ov065_0227acfc_Task {
    Unk_ov065_022786bc_Vec *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227a884_Obj {
    u8 unk_00[0xc];
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14[4];
    char *unk_18;
    u8 unk_1c[4];
    u16 unk_20;
    u8 unk_22[0x38 - 0x22];
    s32 unk_38;
    u8 unk_3c[0x48 - 0x3c];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x74 - 0x50];
    s32 unk_74;
    u8 *unk_78;
    u8 unk_7c[4];
    s32 unk_80;
    s32 unk_84;
    u8 unk_88[0xec - 0x88];
    s32 unk_ec;
    u8 unk_f0[4];
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    s32 unk_100;
    s32 unk_104;
    char *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u8 unk_114;
    u8 unk_115[0x120 - 0x115];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    u8 unk_12c[0x13c - 0x12c];
    Unk_ov065_0227acfc_Task *unk_13c;
    Unk_ov065_022786bc_Vec *unk_140;
    s32 unk_144;
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    s32 unk_154;
    u32 unk_158;
};

struct Unk_ov065_0227ae94_Blk {
    char b[11];
};

extern "C" {
extern volatile s32 data_ov065_022910e8;
extern volatile s32 data_ov065_022910e4;
extern volatile s32 data_ov065_022910e0;
extern volatile s32 data_ov065_022910dc;
extern u16 data_0213a510[];

s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *);
void func_ov065_02278658(Unk_ov065_022786bc_Vec *, void *);
Unk_ov065_022786bc_Vec *func_ov065_022786bc(s32, s32, Unk_ov065_02278740_Dtor);
void *func_ov065_02277af0(s32);
void func_ov065_02277ac8(void *);
char *func_ov065_02279100(const char *);
s32 func_ov065_02279144(void);
s32 func_ov065_02279714(void *, u8 *, s32 *);
s32 func_ov065_0227931c(void *, u8 *, s32);
void func_ov065_0227924c(void *);
void func_ov065_022795d4(void *, u32, u32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_0227b2a8(void *, u8 *, s32);
u32 STD_GetStringLength(const char *);
void func_02128250(s32);
s32 func_02128318(s32, s32, s32);
s32 func_02128650(s32);
void func_021282f0(s32);
void func_021289b4(void *, void *, s32);
char *func_02129f1c(char *, char *);
u32 func_0212a060(char *, char *);
char *func_0212a120(char *, s32);
s32 strncmp(char *, char *, s32);
s32 func_0212b770(char *);
s32 OS_SPrintf(char *, char *, ...);

s32 func_ov065_0227aa74(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227a9ec(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aa10(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aaa8(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227aba8(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227ace0(Unk_ov065_0227acfc_Task *t);
void func_ov065_0227ad54(Unk_ov065_0227a884_Rec *r);
}


extern "C" {
struct Unk_ov065_0227ac34_Item {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};
}

extern "C" {
#pragma enumsalwaysint off
enum Unk_ov065_0227acfc_Z { Unk_ov065_0227acfc_Z_0 = 0, Unk_ov065_0227acfc_Z_FF = 0xff };
#pragma enumsalwaysint reset
}
extern "C" {
void func_ov065_0227a884(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227a8ec(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227a9ec(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aa10(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aa74(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227aaa8(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227aba8(Unk_ov065_0227a884_Obj *self);
char *func_ov065_0227ac08(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227ac34(Unk_ov065_0227acfc_Task *self, char *a, char *b);
void func_ov065_0227ace0(Unk_ov065_0227acfc_Task *t);
s32 func_ov065_0227acf8(Unk_ov065_0227acfc_Task *t);
Unk_ov065_0227acfc_Task *func_ov065_0227acfc(void);
void func_ov065_0227ad54(Unk_ov065_0227a884_Rec *r);
void func_ov065_0227ada4(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227ae94(Unk_ov065_0227a884_Obj *self);
}
}

namespace Nb {
struct Unk_ov065_0227b2a8_Obj;

struct Unk_ov065_0227b2a8_Buf {
    Unk_ov065_0227b2a8_Obj *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};

struct Unk_ov065_0227b2a8_Obj {
    u8 pad_00[0x0c];
    s32 unk_0c;
    s32 unk_10;
    char *unk_14;
    char *unk_18;
    s32 unk_1c;
    u16 unk_20;
    char *unk_24;
    char *unk_28;
    u8 pad_2c[8];
    s32 unk_34;
    s32 unk_38;
    u8 pad_3c[0x0c];
    s32 unk_48;
    s32 unk_4c;
    Unk_ov065_0227b2a8_Buf unk_50;
    Unk_ov065_0227b2a8_Buf unk_74;
    Unk_ov065_0227b2a8_Buf unk_98;
    Unk_ov065_0227b2a8_Buf unk_bc;
    u8 pad_e0[4];
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    u8 pad_f4[4];
    s32 unk_f8;
    s32 unk_fc;
    s32 unk_100;
    s32 unk_104;
    u8 pad_108[8];
    s32 unk_110;
    char unk_114[12];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    u8 pad_12c[4];
    s32 unk_130;
    s32 unk_134;
    u8 pad_138[4];
    s32 unk_13c;
    u8 pad_140[8];
    s32 unk_148;
    s32 unk_14c;
    u8 pad_150[12];
    char *unk_15c;
    u16 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16c;
    s32 unk_170;
    s32 (*unk_174)(Unk_ov065_0227b2a8_Obj *, void *);
};

struct Unk_ov065_0227b9c4_Addr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02261408_Hostent {
    u8 pad_00[0x0c];
    u32 **unk_0c;
};

extern "C" {
extern s32 data_ov065_0228ca50;
extern char *data_ov065_022910c4;
extern u16 data_ov065_022910c0;
extern u16 data_0213a510[];

char *func_0212a120(const char *, s32);
void func_02128a00(void *, const void *, s32);
s32 func_02128ca4(const char *, const char *, ...);
char *func_02129f1c(const char *hay, const char *needle);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);

s32 func_ov065_02278be8(s32);
s32 func_ov065_02278bf4(char *);
s32 func_ov065_02278d34(s32 a, void *src, u32 len);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 func_ov065_0227905c(s32 sock, s32 val);
s32 func_ov065_0227908c(s32 sock, s32 flag);
s32 func_ov065_02279138();
s32 func_ov065_022791c0(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_0227924c(void *);
s32 func_ov065_02279258(Unk_ov065_0227b2a8_Buf *, s32);
s32 func_ov065_02279280(Unk_ov065_0227b2a8_Buf *, s32);
s32 func_ov065_022792a4(Unk_ov065_0227b2a8_Buf *, const char *, const char *);
s32 func_ov065_0227931c(void *, const char *, s32);
s32 func_ov065_02279588(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_022795d4(Unk_ov065_0227b2a8_Obj *, s32, s32);
s32 func_ov065_02279714(Unk_ov065_0227b2a8_Obj *, char *, s32 *);
s32 func_ov065_0227a3f4(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_0227a884(Unk_ov065_0227b2a8_Obj *);
char *func_ov065_0227ac08(Unk_ov065_0227b2a8_Obj *);
Unk_ov065_02261408_Hostent *func_ov065_02261408(char *);
s32 func_ov065_0227bbf4(Unk_ov065_0227b2a8_Obj *);

void func_ov065_0227b404(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 func_ov065_0227b450(Unk_ov065_0227b2a8_Obj *self);
s32 func_ov065_0227b480(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 func_ov065_0227b5d4(Unk_ov065_0227b2a8_Obj *self);
}

#define HTONS(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

static inline s32 Unk_ov065_0227b5d4_Chk(char *s, s32 i) {
    BOOL bad = TRUE;
    s32 v;
    s32 ch = s[i];
    if (ch >= 0 && ch < 0x80) {
        bad = FALSE;
    }
    if (bad) {
        v = 0;
    } else {
        v = data_0213a510[ch] & 0x100;
    }
    return v;
}
extern "C" {
s32 func_ov065_0227b2a8(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
void func_ov065_0227b404(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 func_ov065_0227b450(Unk_ov065_0227b2a8_Obj *self);
s32 func_ov065_0227b480(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
void func_ov065_0227b51c(Unk_ov065_0227b2a8_Obj *self);
s32 func_ov065_0227b5d4(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227b68c(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227b6dc(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227b72c(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227b8e4(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227b9c4(Unk_ov065_0227b2a8_Obj *self);
void func_ov065_0227bb5c(Unk_ov065_0227b2a8_Obj *self);
}
}

namespace Nh {
struct Unk_ov065_0227bd20_Ctx {
    u8 pad_000[0x100];
    s32 unk_100;
    u8 pad_104[4];
    s32 unk_108;
    u8 pad_10c[0x198 - 0x10c];
    s32 unk_198;
    u8 pad_19c[0x1d8 - 0x19c];
    s32 unk_1d8;
    u8 pad_1dc[0x1f4 - 0x1dc];
    char unk_1f4[0x14];
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    char unk_218[0x100];
    char unk_318[0x100];
    u8 pad_418[0x430 - 0x418];
    s32 unk_430;
};

struct Unk_ov065_0227bd20_Handle {
    Unk_ov065_0227bd20_Ctx *unk_00;
};

struct Unk_ov065_0227bbf4_Url {
    u8 pad_00[0x14];
    char *unk_14;
    char *unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u16 unk_22;
    char *unk_24;
};

struct Unk_ov065_0227c05c_Src {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    char *unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Ent {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c05c_Src *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Out {
    s32 unk_000;
    s32 unk_004;
    char unk_008[0x100];
    char unk_108[0x100];
    s32 unk_208;
    s32 unk_20c;
};

struct Unk_ov065_0227c400_Buf {
    u32 v[0x81];
};

typedef void (*Unk_ov065_0227c400_Cb)(void *, void *, void *);


extern "C" {
s32 func_0212a190(const char *, const char *);
s32 strncmp(const char *, const char *, s32);
s32 func_02129fa0(const char *, const char *);
char *func_0212a120(const char *, s32);
s32 func_0212b770(const char *);
void *func_0212899c(void *, s32, s32);
char *func_ov065_02279100(const char *);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283728(char *, const char *, s32);
s32 func_ov065_0227ced4(void *, s32, s32, s32);
s32 func_ov065_0227cd34(void *, s32);
s32 func_ov065_0227ce44(void *, s32);
s32 func_ov065_0227f54c(void *, s32, s32);
s32 func_ov065_0227f3c4(void *, s32, s32, s32, s32, s32);
s32 func_ov065_02282f90(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_ov065_0227de10(void *, char *, const char *);
s32 func_ov065_0227dde8(void *, char *, s32);
s32 func_ov065_022818bc(void *, s32, void *);
s32 func_ov065_02281790(void *, s32);
s32 func_ov065_0228176c(void *);
s32 func_ov065_02281880(void *, void *);
void func_ov065_02277ac8(void *);

}

extern "C" {
struct Unk_ov065_0227c4b0_Args {
    s32 v[4];
};
}
extern "C" {
BOOL func_ov065_0227bbf4(Unk_ov065_0227bbf4_Url *u);
}
}

namespace Nh {
extern "C" {
BOOL func_ov065_0227bbf4(Unk_ov065_0227bbf4_Url *u) {
    char *p;
    char *e;
    BOOL https;
    char saved;
    s32 n;
    char *q;
    if (u == NULL) {
        return FALSE;
    }
    p = u->unk_14;
    if (p == NULL) {
        return FALSE;
    }
    if (strncmp(p, "http://", 7) == 0) {
        https = FALSE;
        p += 7;
    } else if (strncmp(p, "https://", 8) == 0) {
        https = TRUE;
        p += 8;
    } else {
        return FALSE;
    }
    n = func_02129fa0(p, ":/");
    e = p + n;
    saved = p[n];
    p[n] = 0;
    u->unk_18 = func_ov065_02279100(p);
    if (u->unk_18 == NULL) {
        return FALSE;
    }
    *e = saved;
    p += n;
    if (*p == ':') {
        p++;
        u->unk_20 = func_0212b770(p);
        if (u->unk_20 == 0) {
            return FALSE;
        }
        do {
            p++;
        } while (*p != 0 && *p != '/');
    } else if (https) {
        u->unk_20 = 0x1bb;
    } else {
        u->unk_20 = 0x50;
    }
    if (*p == 0) {
        p = "/";
    }
    u->unk_24 = func_ov065_02279100(p);
    p = u->unk_24;
    q = func_0212a120(p, 0x20);
    while (q != NULL) {
        *q = '+';
        p = u->unk_24;
        q = func_0212a120(p, 0x20);
    }
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227bb5c(Unk_ov065_0227b2a8_Obj *self) {
    char *h;
    func_ov065_022795d4(self, 0, 0);
    func_ov065_02279138();
    if (func_ov065_0227bbf4(self) == 0) {
        self->unk_fc = 1;
        self->unk_38 = 3;
        return;
    }
    h = self->unk_15c;
    if (h == 0) {
        h = data_ov065_022910c4;
        if (h == 0) {
            h = self->unk_18;
        }
    }
    self->unk_1c = func_ov065_02278bf4(h);
    if (self->unk_1c == -1) {
        Unk_ov065_02261408_Hostent *he = func_ov065_02261408(h);
        if (he == 0) {
            self->unk_fc = 1;
            self->unk_38 = 4;
            return;
        }
        self->unk_1c = **he->unk_0c;
    }
    self->unk_10 = 1;
    func_ov065_022795d4(self, 0, 0);
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b9c4(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b9c4_Addr sa;
    s32 r;
    s32 w[2];
    if (self->unk_48 == -1) {
        self->unk_48 = func_ov065_02278dd4(2, 1, 0);
        if (self->unk_48 == -1) {
            self->unk_fc = 1;
            self->unk_38 = 5;
            self->unk_4c = func_ov065_02278be8(self->unk_48);
            return;
        }
        if (func_ov065_0227908c(self->unk_48, 0) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 5;
            self->unk_4c = func_ov065_02278be8(self->unk_48);
            return;
        }
        if (self->unk_134 != 0) {
            func_ov065_0227905c(self->unk_48, data_ov065_0228ca50);
        }
        u32 *z = (u32 *)&sa;
        z[0] = 0;
        z[1] = 0;
        sa.family = 2;
        if (self->unk_15c != 0) {
            sa.port = HTONS(self->unk_160);
        } else if (data_ov065_022910c4 != 0) {
            sa.port = HTONS(data_ov065_022910c0);
        } else {
            sa.port = HTONS(self->unk_20);
        }
        sa.addr = self->unk_1c;
        r = func_ov065_02278d34(self->unk_48, &sa, 8);
        if (r == -1) {
            s32 e = func_ov065_02278be8(self->unk_48);
            if (e != -6 && e != -26 && e != -76) {
                self->unk_fc = 1;
                self->unk_38 = 6;
                self->unk_4c = e;
                return;
            }
        }
    }
    r = func_ov065_02278f0c(self->unk_48, 0, &w[0], &w[1]) > 0 ? 1 : 0;
    if (r == -1 || w[1] != 0) {
        self->unk_fc = 1;
        self->unk_38 = 6;
        if (r == 0) {
            self->unk_4c = func_ov065_02278be8(self->unk_48);
        }
        return;
    }
    if (w[0] != 0) {
        self->unk_10 = 2;
        func_ov065_022795d4(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b8e4(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    if (self->unk_168 == 0) {
        if (strncmp(self->unk_14, "https://", 8) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 0x11;
            return;
        }
        self->unk_10 = 3;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (self->unk_170 != 0) {
        self->unk_10 = 3;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (self->unk_16c == 0) {
        if (self->unk_174(self, &self->unk_164) == 3) {
            return;
        }
    }
    if (self->unk_50.unk_10 < self->unk_50.unk_0c) {
        if (func_ov065_022791c0(self) == 0) {
            return;
        }
        if (self->unk_50.unk_10 < self->unk_50.unk_0c) {
            return;
        }
        func_ov065_0227924c(&self->unk_50);
    }
    len = 0x400;
    func_ov065_02279714(self, buf, &len);
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b72c(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b2a8_Buf *b;
    char tmp[0x14];
    if (self->unk_50.unk_0c == 0) {
        b = &self->unk_50;
        const char *m;
        if (self->unk_13c != 0) {
            m = "POST ";
        } else if (self->unk_0c == 3) {
            m = "HEAD ";
        } else {
            m = "GET ";
        }
        func_ov065_0227931c(b, m, 0);
        if (self->unk_15c != 0 || data_ov065_022910c4 != 0) {
            func_ov065_0227931c(b, self->unk_14, 0);
        } else {
            func_ov065_0227931c(b, self->unk_24, 0);
        }
        func_ov065_0227931c(b, " HTTP/1.1\r\n", 0);
        if (self->unk_20 == 0x50) {
            func_ov065_022792a4(b, "Host", self->unk_18);
        } else {
            func_ov065_0227931c(b, "Host: ", 0);
            func_ov065_0227931c(b, self->unk_18, 0);
            func_ov065_02279280(b, 0x3a);
            func_ov065_02279258(b, self->unk_20);
            func_ov065_0227931c(b, "\r\n", 2);
        }
        if (self->unk_28 == 0 || func_02129f1c(self->unk_28, "User-Agent") == 0) {
            func_ov065_022792a4(b, "User-Agent", "GameSpyHTTP/1.0");
        }
        if (self->unk_34 != 0) {
            func_ov065_022792a4(b, "Connection", "Keep-Alive");
        } else {
            func_ov065_022792a4(b, "Connection", "close");
        }
        if (self->unk_13c != 0) {
            OS_SPrintf(tmp, "%d", self->unk_14c);
            func_ov065_022792a4(b, "Content-Length", tmp);
            func_ov065_022792a4(b, "Content-Type", func_ov065_0227ac08(self));
        }
        if (self->unk_28 != 0) {
            func_ov065_0227931c(b, self->unk_28, 0);
        }
        func_ov065_0227931c(b, "\r\n", 2);
        if (b != &self->unk_50) {
            func_ov065_0227931c(&self->unk_50, b->unk_04, b->unk_0c);
        }
    }
    if (func_ov065_022791c0(self) != 0 && self->unk_50.unk_10 >= self->unk_50.unk_0c) {
        func_ov065_0227924c(&self->unk_50);
        if (self->unk_13c != 0) {
            self->unk_10 = 4;
        } else {
            self->unk_10 = 5;
        }
        func_ov065_022795d4(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b6dc(Unk_ov065_0227b2a8_Obj *self) {
    s32 old = self->unk_148;
    s32 r = func_ov065_0227a3f4(self);
    if (r == 0) {
        func_ov065_0227a884(self);
        return;
    }
    if (old != self->unk_148) {
        func_ov065_02279588(self);
    }
    if (r == 1) {
        func_ov065_0227a884(self);
        self->unk_10 = 5;
        func_ov065_022795d4(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b68c(Unk_ov065_0227b2a8_Obj *self) {
    s32 v[2];
    if (func_ov065_02278f0c(self->unk_48, v, 0, 0) == -1) {
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
        return;
    }
    if (v[0] != 0) {
        self->unk_10 = 6;
        func_ov065_022795d4(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227b5d4(Unk_ov065_0227b2a8_Obj *self) {
    s32 a, b, c, d;
    s32 r;
    r = func_02128ca4(self->unk_74.unk_04, "HTTP/%d.%d %d%n", &a, &b, &c, &d);
    while (self->unk_74.unk_04[d] != 0 && Unk_ov065_0227b5d4_Chk(self->unk_74.unk_04, d) != 0) {
        d++;
    }
    if (r != 3 || a < 1 || c < 100 || c >= 0x258) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        return 0;
    }
    self->unk_e4 = a;
    self->unk_e8 = b;
    self->unk_ec = c;
    self->unk_f0 = d;
    return 1;
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b51c(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    s32 r;
    len = 0x400;
    r = func_ov065_02279714(self, buf, &len);
    if (r == 3) {
        return;
    }
    if (r == 1) {
        if (self->unk_74.unk_10 == self->unk_74.unk_0c) {
            return;
        }
    }
    if (r == 0) {
        if (func_ov065_0227931c(&self->unk_74, buf, len) == 0) {
            return;
        }
    }
    char *e = func_02129f1c(self->unk_74.unk_04, "\r\n");
    if (e != 0) {
        s32 d;
        *e = 0;
        d = e - self->unk_74.unk_04;
        self->unk_f8 = d + 1;
        if (func_ov065_0227b5d4(self) == 0) {
            return;
        }
        self->unk_74.unk_10 = d + 2;
        self->unk_10 = 7;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (r == 2) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
    }
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227b480(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    char *a = 0;
    s32 b = 0;
    self->unk_100 += n;
    if (self->unk_100 == self->unk_104 || self->unk_130 != 0) {
        self->unk_fc = 1;
    }
    if (self->unk_0c == 0) {
        if (func_ov065_0227931c(&self->unk_bc, p, n) == 0) {
            return 0;
        }
        a = self->unk_bc.unk_04;
        b = self->unk_bc.unk_0c;
    } else if (self->unk_0c == 1) {
        if (n != 0) {
            self->unk_fc = 1;
            self->unk_38 = 13;
            return 0;
        }
        a = p;
        b = n;
    } else if (self->unk_0c == 2) {
        a = p;
        b = n;
    }
    func_ov065_022795d4(self, (s32)a, b);
    return 1;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227b450(Unk_ov065_0227b2a8_Obj *self) {
    s32 v;
    if (func_02128ca4(self->unk_114, "%x", &v) != 1) {
        return -1;
    }
    return v;
}
}
}

namespace Nb {
extern "C" {
void func_ov065_0227b404(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (n != 0 && self->unk_120 < 10) {
        s32 l = 10 - self->unk_120;
        if (l >= n) {
            l = n;
        }
        func_02128a00(self->unk_114 + self->unk_120, p, l);
        self->unk_120 += l;
        self->unk_114[self->unk_120] = 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227b2a8(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (self->unk_110 != 0) {
        while (n > 0) {
            if (self->unk_128 == 0) {
                char *nl = func_0212a120(p, 10);
                if (nl != 0) {
                    func_ov065_0227b404(self, p, nl - p);
                    s32 k = nl + 1 - p;
                    n -= k;
                    p = nl + 1;
                    self->unk_124 = func_ov065_0227b450(self);
                    s32 t = self->unk_124;
                    if (t == -1) {
                        self->unk_fc = 1;
                        self->unk_38 = 7;
                        return 0;
                    }
                    if (t == 0) {
                        self->unk_128 = 3;
                    } else {
                        self->unk_128 = 1;
                    }
                } else {
                    func_ov065_0227b404(self, p, n);
                    return 1;
                }
            } else if (self->unk_128 == 1) {
                s32 c = self->unk_124;
                if (c >= n) {
                    c = n;
                }
                if (func_ov065_0227b480(self, p, c) == 0) {
                    return 0;
                }
                p += c;
                n -= c;
                self->unk_124 = self->unk_124 - c;
                if (self->unk_124 == 0) {
                    self->unk_128 = 2;
                }
            } else if (self->unk_128 == 2) {
                char *nl = func_0212a120(p, 10);
                if (nl == 0) {
                    return 1;
                }
                nl = nl + 1;
                n -= nl - p;
                p = nl;
                self->unk_114[0] = 0;
                self->unk_120 = 0;
                self->unk_124 = 0;
                self->unk_128 = 0;
            } else if (self->unk_128 == 3) {
                self->unk_fc = 1;
                return 1;
            } else {
                return 0;
            }
        }
        return 1;
    }
    return func_ov065_0227b480(self, p, n);
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227ae94(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x1000];
    s32 r4;
    s32 off;
    u8 *p;
    u8 *rest;
    s32 rem;
    char *q;
    char *digits;
    s32 st;
    char *e;
    len = 0x1000;
    r4 = func_ov065_02279714(self, buf, &len);
    if (r4 == 3) {
        return;
    }
    if (r4 == 1 && self->unk_84 == self->unk_80) {
        return;
    }
    if (r4 == 0 && func_ov065_0227931c(&self->unk_74, buf, len) == 0) {
        return;
    }
    off = self->unk_84;
    p = self->unk_78 + off;
    self->unk_f4 = off;
    q = func_02129f1c((char *)p, "\r\n\r\n");
    if (q == NULL) {
        q = func_02129f1c((char *)p, "\n\n");
    }
    if (q == NULL) {
        goto nomatch;
    }
    q[2] = 0;
    rest = (u8 *)q + 4;
    rem = self->unk_80 - (rest - self->unk_78);
    self->unk_80 = (u8 *)(q + 2) - self->unk_78;
    self->unk_f8 = (u8 *)(q + 2) - self->unk_78;
    self->unk_84 = self->unk_f8;
    st = self->unk_ec / 100;
    if (st == 1) {
        if (rem != 0) {
            func_021289b4(self->unk_78, rest, rem + 1);
            self->unk_80 = rem;
            self->unk_84 = 0;
        } else {
            func_ov065_0227924c(&self->unk_74);
        }
        self->unk_10 = 6;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (st == 3) {
        if (self->unk_10c > 10) {
            self->unk_fc = 1;
            self->unk_38 = 0xb;
            return;
        }
        q = func_02129f1c((char *)p, "Location:");
        if (q != NULL) {
            char *d = q + 9;
            s32 c;
            s32 v;
            goto t1;
        l1:
            d++;
        t1:
            c = *d;
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v != 0) {
                goto l1;
            }
            e = d;
            goto t2;
        l2:
            e++;
        t2:
            c = *e;
            if (c == 0) {
                goto d2;
            }
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v == 0) {
                goto l2;
            }
        d2:
            *e = 0;
            if (*d == '/') {
                s32 l = STD_GetStringLength(self->unk_18);
                s32 m = STD_GetStringLength(d);
                self->unk_108 = (char *)func_ov065_02277af0(l + 0xe + m);
                if (self->unk_108 == NULL) {
                    self->unk_fc = 1;
                    self->unk_38 = 1;
                }
                OS_SPrintf(self->unk_108, "http://%s:%d%s", self->unk_18, self->unk_20, d);
                return;
            }
            self->unk_108 = func_ov065_02279100(d);
            if (self->unk_108 != NULL) {
                return;
            }
            self->unk_fc = 1;
            self->unk_38 = 1;
            return;
        }
    }
    q = func_02129f1c((char *)p, "Content-Length:");
    if (q != NULL) {
        s32 n;
        char *d0;
        s32 dl;
        char *t;
        Unk_ov065_0227ae94_Blk hb = *(Unk_ov065_0227ae94_Blk *)"2147483647";
        char *hdr = hb.b;
        e = q + 0x10;
        t = e;
        n = STD_GetStringLength(hdr);
        while (t != NULL && *t != 0 && *t != 10 && *t != 13 && *t != 0x20) {
            t++;
        }
        dl = t - e;
        if (dl > n) {
            self->unk_fc = 1;
            self->unk_38 = 0x10;
            return;
        }
        if (n == dl) {
            if (strncmp(e, hdr, dl) >= 0) {
                self->unk_fc = 1;
                self->unk_38 = 0x10;
                return;
            }
        }
        self->unk_104 = func_0212b770(e);
    }
    self->unk_110 = func_02129f1c((char *)p, "Transfer-Encoding: chunked") != NULL ? 1 : 0;
    if (self->unk_110 != 0) {
        self->unk_114 = 0;
        self->unk_120 = 0;
        self->unk_124 = 0;
        self->unk_128 = 0;
    }
    if ((u32)(self->unk_0c - 3) <= 1) {
        self->unk_fc = 1;
        return;
    }
    self->unk_10 = 8;
    if (q != NULL) {
        if (self->unk_104 == 0) {
            self->unk_fc = 1;
            return;
        }
    }
    if (rem > 0) {
        func_ov065_0227b2a8(self, rest, rem);
    }
    return;
nomatch:
    if (r4 == 2) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
    }
}
}
}

namespace Na {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right after func_ov065_0227ae94, so that the literal
// "2147483647" is pooled where the original has it; removed by the dead-stripping link (see notes.txt).
__declspec(weak) void Unk_ov065_0227ae94_pool_order(void) {
    STD_GetStringLength("2147483647");
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227ada4(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x2000];
    s32 start = func_ov065_02279144();
    u32 elapsed = 0;
    s32 r;
    while (self->unk_fc == 0 && elapsed < self->unk_158) {
        len = 0x2000;
        r = func_ov065_02279714(self, buf, &len);
        if (r == 3 || r == 1) {
            break;
        }
        if (r == 2) {
            self->unk_fc = 1;
            if (self->unk_104 > 0 && self->unk_100 < self->unk_104) {
                self->unk_38 = 0xf;
                return;
            }
            break;
        }
        if (func_ov065_0227b2a8(self, buf, len) == 0) {
            break;
        }
        elapsed = func_ov065_02279144() - start;
    }
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227ad54(Unk_ov065_0227a884_Rec *r) {
    func_ov065_02277ac8(r->unk_04);
    if (r->unk_00 == 0) {
        func_ov065_02277ac8(r->unk_08);
    } else if (r->unk_00 == 1) {
        func_ov065_02277ac8(r->unk_08);
        func_ov065_02277ac8(r->unk_0c);
        func_ov065_02277ac8(r->unk_10);
    } else if (r->unk_00 == 2) {
        func_ov065_02277ac8(r->unk_10);
        func_ov065_02277ac8(r->unk_14);
    }
}
}
}

namespace Na {
extern "C" {
Unk_ov065_0227acfc_Task *func_ov065_0227acfc(void) {
    Unk_ov065_0227acfc_Task *t = (Unk_ov065_0227acfc_Task *)func_ov065_02277af0(0x14);
    u8 *p;
    u32 i;
    u8 *q;
    u8 *k;
    Unk_ov065_0227acfc_Z z;
    if (t == NULL) {
        return NULL;
    }
    q = (u8 *)t;
    k = (u8 *)0x14;
    z = Unk_ov065_0227acfc_Z_0;
    do {
        *q++ = z;
        k--;
    } while (k != NULL);
    t->unk_10 = 1;
    t->unk_00 = func_ov065_022786bc(0x18, 0, (Unk_ov065_02278740_Dtor)func_ov065_0227ad54);
    if (t->unk_00 == NULL) {
        func_ov065_02277ac8(t);
        return NULL;
    }
    return t;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227acf8(Unk_ov065_0227acfc_Task *t) {
    return t->unk_10;
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227ace0(Unk_ov065_0227acfc_Task *t) {
    func_ov065_02278688(t->unk_00);
    func_ov065_02277ac8(t);
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227ac34(Unk_ov065_0227acfc_Task *self, char *a, char *b) {
    s32 len;
    s32 cnt;
    s32 i;
    s32 c;
    a = func_ov065_02279100(a);
    b = func_ov065_02279100(b);
    if (a == NULL || b == NULL) {
        func_ov065_02277ac8(a);
        func_ov065_02277ac8(b);
        return 0;
    }
    Unk_ov065_0227ac34_Item item = {0, 0, 0, 0, 0, 0};
    item.unk_00 = 0;
    item.unk_04 = a;
    item.unk_08 = b;
    len = STD_GetStringLength(b);
    item.unk_0c = len;
    item.unk_10 = 0;
    c = func_0212a060(b, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*");
    if (c != len) {
        cnt = 0;
        item.unk_10 = 1;
        for (i = 0; b[i] != 0; i++) {
            c = b[i];
            if (func_0212a120("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", c) == NULL && c != 0x20) {
                cnt++;
            }
        }
        item.unk_14 = cnt;
    }
    func_ov065_02278658(self->unk_00, &item);
    return 1;
}
}
}

namespace Na {
extern "C" {
char *func_ov065_0227ac08(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_13c == NULL) {
        return "";
    }
    if (self->unk_13c->unk_0c != 0) {
        return "multipart/form-data; boundary=Qr4G823s23d---<<><><<<>--7d118e0536";
    }
    return "application/x-www-form-urlencoded";
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227aba8(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->unk_13c;
    s32 sum = 0;
    s32 n;
    s32 i;
    n = func_ov065_02278684(t->unk_00);
    if (n == 0) {
        return sum;
    }
    i = sum;
    if (i < n) {
        do {
            Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(t->unk_00, i);
            s32 l = STD_GetStringLength(r->unk_04);
            s32 t = sum + l;
            s32 u = t + (s32)r->unk_0c;
            sum = u + (s32)r->unk_14 * 2 + 1;
            i++;
        } while (i < n);
    }
    return sum + (n - 1);
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227aaa8(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->unk_13c;
    s32 sum = 0;
    s32 n;
    s32 i;
    if (data_ov065_022910e8 == 0) {
        s32 l = STD_GetStringLength("--Qr4G823s23d---<<><><<<>--7d118e0536");
        data_ov065_022910e8 = l;
        data_ov065_022910e4 = l + 0x2f;
        data_ov065_022910e0 = l + 0x4c;
        data_ov065_022910dc = l + 4;
    }
    n = func_ov065_02278684(t->unk_00);
    for (i = 0; i < n; i++) {
        Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(t->unk_00, i);
        if (r->unk_00 == 0) {
            sum += data_ov065_022910e4;
            sum += STD_GetStringLength(r->unk_04);
            sum += (s32)r->unk_0c;
        } else if (r->unk_00 == 1) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->unk_04);
            sum += STD_GetStringLength(r->unk_0c);
            sum += STD_GetStringLength(r->unk_10);
            sum += (s32)((Unk_ov065_0227a884_Rec *)func_ov065_0227866c(self->unk_140, i))->unk_0c;
        } else if (r->unk_00 == 2) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->unk_04);
            sum += STD_GetStringLength(r->unk_10);
            sum += STD_GetStringLength(r->unk_14);
            sum += (s32)r->unk_0c;
        } else {
            return 0;
        }
    }
    return sum + data_ov065_022910dc;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227aa74(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_13c == NULL) {
        return 0;
    }
    if (self->unk_13c->unk_0c != 0) {
        return func_ov065_0227aaa8(self);
    }
    return func_ov065_0227aba8(self);
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227aa10(Unk_ov065_0227a8ec_Item *it) {
    s32 t = it->unk_00->unk_00;
    s32 z = 0;
    it->unk_04 = -1;
    if (t == 0) {
    } else if (t == 1) {
        if (it->unk_08 == 0) {
            return z;
        }
        if (func_02128318(it->unk_08, z, 2) != 0) {
            return 0;
        }
        it->unk_0c = func_02128650(it->unk_08);
        if (it->unk_0c == -1) {
            return 0;
        }
        func_021282f0(it->unk_08);
    } else if (t == 2) {
    } else {
        return z;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227a9ec(Unk_ov065_0227a8ec_Item *it) {
    switch (it->unk_00->unk_00) {
    case 0:
        break;
    case 1:
        if (it->unk_08 != 0) {
            func_02128250(it->unk_08);
        }
        it->unk_08 = 0;
        break;
    }
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227a8ec(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227a8ec_Item item;
    s32 n;
    s32 i;
    if (self->unk_13c == NULL) {
        return 0;
    }
    self->unk_144 = 0;
    self->unk_148 = 0;
    self->unk_14c = 0;
    self->unk_150 = self->unk_13c->unk_04;
    self->unk_154 = self->unk_13c->unk_08;
    n = func_ov065_02278684(self->unk_13c->unk_00);
    self->unk_140 = func_ov065_022786bc(0x10, n, NULL);
    if (self->unk_140 == NULL) {
        return 0;
    }
    i = 0;
    if (i < n) {
        Unk_ov065_0227a8ec_Item *pi = &item;
        volatile s32 z = 0;
        do {
            Unk_ov065_0227a884_Rec *rec = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(self->unk_13c->unk_00, i);
            s32 t = z;
            pi->unk_00 = (Unk_ov065_0227a884_Rec *)t;
            pi->unk_04 = t;
            pi->unk_08 = t;
            pi->unk_0c = t;
            item.unk_00 = rec;
            if (func_ov065_0227aa10(pi) == 0) {
                for (i--; i >= 0; i--) {
                    func_ov065_0227a9ec((Unk_ov065_0227a8ec_Item *)func_ov065_0227866c(self->unk_140, i));
                }
                func_ov065_02278688(self->unk_140);
                self->unk_140 = NULL;
                return 0;
            }
            func_ov065_02278658(self->unk_140, pi);
            i++;
        } while (i < n);
    }
    self->unk_14c = func_ov065_0227aa74(self);
    return 1;
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227a884(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_140 != NULL) {
        s32 n = func_ov065_02278684(self->unk_140);
        s32 i = 0;
        if (i < n) {
            do {
                func_ov065_0227a9ec((Unk_ov065_0227a8ec_Item *)func_ov065_0227866c(self->unk_140, i));
                i++;
            } while (i < n);
        }
        func_ov065_02278688(self->unk_140);
        self->unk_140 = NULL;
    }
    if (self->unk_13c != NULL) {
        if (self->unk_13c->unk_10 != 0) {
            func_ov065_0227ace0(self->unk_13c);
            self->unk_13c = NULL;
        }
    }
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a788(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *q = st->unk_00;
    if (q->unk_0c == 0) {
        return 1;
    }
    if (c->unk_13c->unk_0c == 0 && q->unk_10 != 0) {
        char *s = q->unk_08;
        struct T4 {
            char b[4];
        };
        T4 tmp = *(T4 *)data_ov065_0228ca58;
        s32 i = 0;
        char ch = s[i];
        if (ch != 0) {
            do {
                if (func_0212a120("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", ch) != 0) {
                    func_ov065_02279280(&c->unk_50, ch);
                } else if (ch == 0x20) {
                    func_ov065_02279280(&c->unk_50, 0x2b);
                } else {
                    tmp.b[1] = "0123456789ABCDEF"[ch / 16];
                    tmp.b[2] = "0123456789ABCDEF"[ch % 16];
                    func_ov065_0227931c(&c->unk_50, &tmp, 3);
                }
                i++;
                ch = s[i];
            } while (ch != 0);
        }
        return 1;
    }
    s32 n = q->unk_0c - st->unk_04;
    s32 r = func_ov065_022796a8(c, q->unk_08, n);
    if (r == -1) {
        return 0;
    }
    st->unk_04 = st->unk_04 + r;
    if (r == n) {
        return 1;
    }
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a694(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    char buf[0x1000];
    s32 r;
    do {
        s32 n = func_02128030(buf, 1, 0x1000, st->unk_08);
        if (n <= 0) {
            c->unk_fc = 1;
            c->unk_38 = 14;
            return 0;
        }
        st->unk_04 = st->unk_04 + n;
        if (st->unk_04 > st->unk_0c) {
            c->unk_fc = 1;
            c->unk_38 = 14;
            return 0;
        }
        r = func_ov065_02279654(c, buf, n);
        if (r == 0) {
            return 0;
        }
        if (st->unk_04 == st->unk_0c) {
            return 1;
        }
    } while (r == 1);
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a624(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *p = st->unk_00;
    s32 len = p->unk_0c;
    if (len == 0) {
        return 1;
    }
    do {
        s32 n = len - st->unk_04;
        if (n >= 0x8000) {
            n = 0x8000;
        }
        s32 r = func_ov065_022796a8(c, p->unk_08 + st->unk_04, n);
        if (r == -1) {
            return 0;
        }
        st->unk_04 = st->unk_04 + r;
        p = st->unk_00;
        len = p->unk_0c;
        if (len == st->unk_04) {
            return 1;
        }
        if (r == 0) {
            return 2;
        }
    } while (1);
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a4e8(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c, s32 first) {
    char buf[2048];
    if (st->unk_04 == -1) {
        st->unk_04 = 0;
        if (c->unk_13c->unk_0c == 0) {
            if (first != 0) {
                OS_SPrintf(buf, "%s=", st->unk_00->unk_04);
            } else {
                OS_SPrintf(buf, "&%s=", st->unk_00->unk_04);
            }
        } else {
            Unk_ov065_0227a4e8_Part *p = st->unk_00;
            if (p->unk_00 == 0) {
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->unk_04);
            } else if (p->unk_00 == 1 || p->unk_00 == 2) {
                s32 a, b;
                if (p->unk_00 == 1) {
                    a = p->unk_0c;
                    b = p->unk_10;
                } else {
                    a = p->unk_10;
                    b = p->unk_14;
                }
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\nContent-Type: %s\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->unk_04, a, b);
            }
        }
        s32 r = func_ov065_02279654(c, buf, STD_GetStringLength(buf));
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (st->unk_00->unk_00 == 0) {
        return func_ov065_0227a788(st, c);
    }
    if (st->unk_00->unk_00 == 1) {
        return func_ov065_0227a694(st, c);
    }
    return func_ov065_0227a624(st, c);
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a3f4(Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a3f4_List *l = (Unk_ov065_0227a3f4_List *)&c->unk_140;
    s32 cnt = func_ov065_02278684(l->unk_00);
    if (c->unk_5c != 0) {
        if (func_ov065_022791c0(c) == 0) {
            return 0;
        }
        if (c->unk_60 < c->unk_5c) {
            return 2;
        }
        func_ov065_0227924c(&c->unk_50);
        if (c->unk_144 == cnt) {
            return 1;
        }
    }
    for (; l->unk_04 < cnt; l->unk_04++) {
        Unk_ov065_0227a4e8_Slot *s = func_ov065_0227866c(l->unk_00, l->unk_04);
        s32 r = func_ov065_0227a4e8(s, c, l->unk_04 == 0 ? 1 : 0);
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (c->unk_13c->unk_0c != 0) {
        s32 n = STD_GetStringLength("\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n");
        if (func_ov065_02279654(c, "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n", n) == 0) {
            return 0;
        }
    }
    if (c->unk_5c != 0) {
        return 2;
    }
    return 1;
}
}
}

namespace Nm {
extern "C" {
void func_ov065_0227a350(Unk_ov065_02279c7c *c) {
    s32 code = c->unk_ec;
    switch (code / 100) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        return;
    case 4:
        switch (code) {
        case 401:
            c->unk_38 = 9;
            return;
        case 402:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
            break;
        case 403:
            c->unk_38 = 10;
            return;
        case 404:
        case 410:
            c->unk_38 = 11;
            return;
        }
        c->unk_38 = 8;
        return;
    case 5:
        c->unk_38 = 12;
        break;
    }
}
}
}

namespace Nm {
extern "C" {
s32 func_ov065_0227a284(Unk_ov065_02279c7c *c) {
    s32 r;
    if (c->unk_12c != 0) {
        return 0;
    }
    c->unk_12c = 1;
    if (c->unk_10 == 0) {
        func_ov065_0227bb5c(c);
    }
    if (c->unk_10 == 1) {
        func_ov065_0227b9c4(c);
    }
    if (c->unk_10 == 2) {
        func_ov065_0227b8e4(c);
    }
    if (c->unk_10 == 3) {
        func_ov065_0227b72c(c);
    }
    if (c->unk_10 == 4) {
        func_ov065_0227b6dc(c);
    }
    if (c->unk_10 == 5) {
        func_ov065_0227b68c(c);
    }
    if (c->unk_10 == 6) {
        func_ov065_0227b51c(c);
    }
    if (c->unk_10 == 7) {
        func_ov065_0227ae94(c);
    }
    if (c->unk_10 == 8) {
        func_ov065_0227ada4(c);
    }
    if (c->unk_108 != 0) {
        func_ov065_02279a64(c);
    }
    r = c->unk_fc;
    if (r != 0) {
        func_ov065_0227a350(c);
        func_ov065_0227960c(c);
        func_ov065_02279b58(c);
    } else {
        c->unk_12c = 0;
    }
    return r;
}
}
}

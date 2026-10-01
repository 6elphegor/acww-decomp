#include "types.h"

extern "C" {
extern u32 data_021d7352;
void func_02063990(void *p, void *s);
u32 func_02063954(void *p);
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
void func_02115fb4(void *p, u32 v, u32 n);
u32 func_02002fec(u32 id);
}

// Class with a type byte at +0x0a and an id byte at +0x0b (base class unknown, 0xc bytes in total)
class Unk_02002fc8 {
public:
    void func_0200301c(void *buf, u32 size, u32 arg);
    u32 func_02003070();
    void func_0200309c(u32 id, u32 type, void *s);
    u32 func_020030b4();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" u32 func_02003098(Unk_02002fc8 *o);
extern "C" u32 func_02003084(u32 t);
extern "C" u32 func_02003008(u32 t);
extern "C" void func_0200303c(void *buf, u32 size, u32 arg, u32 idx);

extern const u32 data_020c6140[];
extern char *data_020d5de4[6];

u32 Unk_02002fc8::func_020030b4() {
    if (func_02063954(this) == 1 && func_02002fec(unk_0b) == 1) return TRUE;
    return FALSE;
}

void Unk_02002fc8::func_0200309c(u32 id, u32 type, void *s) {
    unk_0b = id;
    unk_0a = type;
    if (s == 0) s = &data_021d7352;
    func_02063990(this, s);
}

extern "C" u32 func_02003098(Unk_02002fc8 *o) { return o->unk_0a; }

extern "C" u32 func_02003084(u32 t) {
    u32 r = 2;
    if (t < 3) r = 0;
    else if (t < 6) r = 1;
    return r;
}

u32 Unk_02002fc8::func_02003070() {
    return func_02003084(func_02003098(this));
}

extern "C" void func_0200303c(void *buf, u32 size, u32 arg, u32 idx) {
    func_02115fb4(buf, 0, size);
    func_020639e8(buf, (void *)"%s%s", (u32)data_020d5de4[idx], arg);
}

void Unk_02002fc8::func_0200301c(void *buf, u32 size, u32 arg) {
    func_0200303c(buf, size, arg, func_02003098(this));
}

extern "C" u32 func_02003008(u32 t) {
    u32 r = 5;
    if (t < 6) r = data_020c6140[t];
    return r;
}

// Declarations for data defined further down (definition order sets the data layout)
extern char data_020d5dd0[];
extern char data_020d5de0[];
extern const u32 data_020c6140[6];
extern char data_020d5dd8[];
extern char data_020d5dd4[];
extern char data_020d5ddc[];
extern char *data_020d5de4[6];
extern char data_020d5dcc[];

char data_020d5dd0[] = "ta_";

char data_020d5de0[] = "ha_";

const u32 data_020c6140[6] = {0, 0, 2, 1, 1, 1};

char data_020d5dd8[] = "fu_";

char data_020d5dd4[] = "ge_";

char data_020d5ddc[] = "ko_";

char *data_020d5de4[6] = {data_020d5dcc, data_020d5de0, data_020d5ddc, data_020d5dd8, data_020d5dd4, data_020d5dd0};

char data_020d5dcc[] = "bo_";

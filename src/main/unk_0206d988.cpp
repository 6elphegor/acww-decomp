#include "types.h"

extern "C" {
extern u8 data_021ed2f8[];
extern s32 data_020ddf8c;

u8 *func_02003ac8(void *);
u8 *func_02003ad0(void *);
void func_02003ad8(void *, u32);
BOOL func_02003ae0(void *);
void *func_02003ae8(void *);
void func_02003af0(void *, u32);
void func_02003af8(void *);
void func_02003b00(void *, u32);
void func_02003b08(void *, u32, u32);
void func_02003b44(void *, u32, void *);
void func_02003b4c(void *, void *);
void func_02003b54(void *);
s64 func_02133540(u32, u32, u32);
void func_0206dad8();
void func_0206d9d8();
void func_0206db0c(u32 *, u8 *);
void func_0206db34(u32 *, u8 *);
}

// 0x14-byte member, destructor func_020f5b84 (autoload_2, alias in aliases.txt)
class Unk_020f5b84 {
public:
    ~Unk_020f5b84();
    u8 pad_00[0x14];
};

// 0x40-byte object data_021cb420; destructor is func_0206db70 (renamed in renames.txt)
class Unk_021cb420 {
public:
    ~Unk_021cb420();
    Unk_020f5b84 unk_00;
    Unk_020f5b84 unk_14;
    u8 pad_28[0x18];
};

Unk_021cb420::~Unk_021cb420()
{
}

extern "C" {

void func_0206db34(u32 *dst, u8 *src) {
    s32 i;
    dst[0] = 0;
    dst[1] = 0;
    for (i = 0; i < 16; i++) {
        s32 v = src[i] & 0xf;
        *(s64 *)dst |= (s64)v << (i * 4);
    }
}

void func_0206db0c(u32 *src, u8 *dst) {
    s32 i;
    for (i = 0; i < 16; i++) {
        dst[i] = (u8)(func_02133540(src[0], src[1], i * 4) & 0xf);
    }
}

}

extern s32 data_021cb400;
extern u8 data_021cb410[];
extern Unk_021cb420 data_021cb420;

extern "C" {

void func_0206db04() { func_0206d9d8(); }

void func_0206daec(u32 *a) {
    func_0206db0c(a, data_021cb410);
    func_0206dad8();
}

void func_0206dad8() { func_02003b4c(&data_021cb420, data_021cb410); }

void func_0206dac0(u32 a) { func_02003b44(&data_021cb420, a, data_021cb410); }

void func_0206dab0(u32 a) { func_02003b00(&data_021cb420, a); }

void func_0206da9c(u32 a, u32 b) { func_02003b08(&data_021cb420, a, b); }

void func_0206da6c(s32 a) {
    func_02003af8(&data_021cb420);
    if (a != 0) {
        data_021cb400 = 0x190;
    } else {
        data_021cb400 = 0x14;
    }
}

void func_0206da5c(u32 a) { func_02003af0(&data_021cb420, a); }

BOOL func_0206da30() {
    if (data_021cb400 != 0 || func_02003ae0(&data_021cb420)) {
        return TRUE;
    }
    return FALSE;
}

void func_0206da20(u32 a) { func_02003ad8(&data_021cb420, a); }

void func_0206d9fc() {
    u8 *p = func_02003ad0(&data_021cb420);
    if (p) {
        func_0206db34((u32 *)data_021ed2f8, p);
    }
}

void func_0206d9d8() {
    u8 *p = func_02003ac8(&data_021cb420);
    if (p) {
        func_0206db34((u32 *)data_021ed2f8, p);
    }
}

void func_0206d9b4(void) {
    func_02003b54(&data_021cb420);
    data_020ddf8c = -1;
    func_0206dad8();
}

void func_0206d988(void) {
    if (data_021cb400 != 0) {
        data_021cb400--;
    }
    data_020ddf8c = (s32)func_02003ae8(&data_021cb420);
}

}

s32 data_021cb400;
u8 data_021cb410[0x10];
Unk_021cb420 data_021cb420;

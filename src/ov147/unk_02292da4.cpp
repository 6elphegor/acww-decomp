#include "types.h"

extern "C" {
void func_021145cc(void *p, u32 size);
void func_0211199c(void *p, u32 a, u32 size);
void func_02111ec8(void *p, u32 a, u32 size);
void func_0211165c(void *p, u32 a, u32 size);
void func_02119a28();
void func_021198b4(void *a, void *b, u32 size);
void func_021199e0(void *a);
void func_02119d78(void *a);
void *func_020e8594(u32 size);
s32 func_020e8558(void *p);
void func_ov147_02292e00(void *a, void *b, void *c);
void func_ov147_02292e28(void *a, void *b, void *c);
void func_ov147_02292e4c(void *a, void *b, void *c);
void func_ov147_02292da4(void *p);
void func_ov147_02292dc4(void *p);
void func_ov147_02292de0(void *p);
void *func_ov147_02292f4c(u32 size);
s32 func_ov147_02292f38(void *p);
}

class Unk_ov147_022935e8 {
public:
    Unk_ov147_022935e8();
    virtual ~Unk_ov147_022935e8();
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;

    void func_ov147_02292c10();
    void func_ov147_02292c68();
    void func_ov147_02292c9c();
    void func_ov147_02292cb4();
    BOOL func_ov147_02292f54();
    void func_ov147_02292fc8();
    BOOL func_ov147_02292fd4();
    void func_ov147_02292fe8();
    void func_ov147_02292ff0(s32 v);
    void func_ov147_02292ff4();
    void func_ov147_02293068();
    void func_ov147_0229306c();
};

extern "C" {

void func_ov147_02292da4(void *p) {
    func_021145cc(p, 0x800);
    func_0211199c(p, 0, 0x800);
}

void func_ov147_02292dc4(void *p) {
    func_021145cc(p, 0x20);
    func_02111ec8(p, 0x20, 0x20);
}

void func_ov147_02292de0(void *p) {
    func_021145cc(p, 0x9e0);
    func_0211165c(p, 0, 0x9e0);
}

void func_ov147_02292e00(void *a, void *b, void *c) {
    func_02119a28();
    func_021198b4(a, c, 0x800);
    func_021199e0(a);
}

void func_ov147_02292e28(void *a, void *b, void *c) {
    func_02119a28();
    func_021198b4(a, c, 0x20);
    func_021199e0(a);
}

void func_ov147_02292e4c(void *a, void *b, void *c) {
    func_02119a28();
    func_021198b4(a, c, 0x9e0);
    func_021199e0(a);
}

void func_ov147_02292e74(s32 idx) {
    char ncg[28] = "/a_mes/a_mes_ttl_bg_ncg.bin";
    const char *paths[2] = { "/a_mes/a_mes_ttl_a0_bg_nsc.bin", "/a_mes/a_mes_ttl_b0_bg_nsc.bin" };
    char ncl[28] = "/a_mes/a_mes_ttl_bg_ncl.bin";
    u32 file[19];
    void *m;
    func_02119d78(file);
    m = func_ov147_02292f4c(0x9e0);
    if (m) {
        func_ov147_02292e4c(file, ncg, m);
        func_ov147_02292de0(m);
        func_ov147_02292f38(m);
    }
    m = func_ov147_02292f4c(0x20);
    if (m) {
        func_ov147_02292e28(file, ncl, m);
        func_ov147_02292dc4(m);
        func_ov147_02292f38(m);
    }
    m = func_ov147_02292f4c(0x800);
    if (m) {
        func_ov147_02292e00(file, (void *)paths[idx], m);
        func_ov147_02292da4(m);
        func_ov147_02292f38(m);
    }
}

s32 func_ov147_02292f38(void *p) {
    if (p) {
        func_020e8558(p);
    }
}

void *func_ov147_02292f4c(u32 size) {
    return func_020e8594(size);
}

}

BOOL Unk_ov147_022935e8::func_ov147_02292f54() {
    BOOL same = (unk_0c == 2) ? TRUE : FALSE;
    if (same) {
        unk_1c = 1;
        unk_14 = 0;
    }
    if (unk_1c) {
        unk_10 = unk_10 - 1;
        if (unk_10 <= 0) {
            unk_1c = 0;
        }
    } else {
        unk_10 = unk_10 + 1;
        if (unk_10 >= 10) {
            unk_10 = 10;
            unk_14 = unk_14 + 1;
            if (unk_14 > 5) {
                unk_1c = 1;
                unk_14 = 0;
            }
        }
    }
    BOOL r0 = FALSE;
    if (unk_10 > 0) {
    } else if (same) {
        r0 = TRUE;
    } else if (unk_08 != unk_0c) {
        r0 = TRUE;
    }
    return r0;
}

void Unk_ov147_022935e8::func_ov147_02292fc8() {
    s32 z = 0;
    unk_10 = z;
    unk_14 = z;
    unk_1c = z;
}

BOOL Unk_ov147_022935e8::func_ov147_02292fd4() {
    if (unk_08 == 2 && unk_04 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov147_022935e8::func_ov147_02292fe8() {
    unk_0c = 2;
}

void Unk_ov147_022935e8::func_ov147_02292ff0(s32 v) {
    unk_0c = v;
}

void Unk_ov147_022935e8::func_ov147_02292ff4() {
    typedef void (Unk_ov147_022935e8::*Fn)();
    static Fn tbl[3] = { &Unk_ov147_022935e8::func_ov147_02292c10, &Unk_ov147_022935e8::func_ov147_02292c68, &Unk_ov147_022935e8::func_ov147_02292c9c };
    (this->*tbl[unk_04])();
}

void Unk_ov147_022935e8::func_ov147_02293068() {
}

void Unk_ov147_022935e8::func_ov147_0229306c() {
    unk_04 = 0;
    unk_08 = 2;
    unk_18 = 0;
    unk_0c = 2;
    func_ov147_02292fc8();
    func_ov147_02292cb4();
}

Unk_ov147_022935e8::Unk_ov147_022935e8() {
}

Unk_ov147_022935e8::~Unk_ov147_022935e8() {
}

#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

// size 0x54
class Unk_ov004_0224e53c : public GameProc {
public:
    Unk_ov004_0224e53c();
    virtual ~Unk_ov004_0224e53c();
    virtual BOOL vfunc_00();
    virtual BOOL onExecute();

    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
    /* 0x52 */ u8 unk_52;
    /* 0x53 */ u8 unk_53;
};

extern "C" {
u32 func_020b50e8(void);
void Clock_GetDateTime(void *p);
void Snd_PlaySe(s32 a);
Unk_ov004_0224e53c *func_ov004_0222beb8();
}

extern "C" const u8 data_ov004_022402b8[0x34] = {
    0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0
};

extern "C" Unk_ov004_SceneEntry data_ov004_0224e52c = { (void *(*)())func_ov004_0222beb8, 0x2a, 0x30 };

extern "C" Unk_ov004_0224e53c *func_ov004_0222beb8() {
    return new Unk_ov004_0224e53c;
}

Unk_ov004_0224e53c::Unk_ov004_0224e53c() {}
Unk_ov004_0224e53c::~Unk_ov004_0224e53c() {}

BOOL Unk_ov004_0224e53c::vfunc_00() {
    unk_52 = 1;
    return TRUE;
}

BOOL Unk_ov004_0224e53c::onExecute() {
    u32 idx = func_020b50e8();
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    Clock_GetDateTime(&t);
    if (idx < 0x33) {
        if (data_ov004_022402b8[idx] != 0) {
            if (t.b4 == 0xc && t.b3 == 0x1f) {
                u32 secs = 0x15180 - (t.b0 + (t.b1 * 0x3c + t.b2 * 0xe10));
                u32 h = secs / 0xe10;
                secs = secs - h * 0xe10;
                u32 m = secs / 0x3c;
                secs = secs - m * 0x3c;
                unk_51 = secs % 10;
                if (unk_51 != unk_50) {
                    if (h == 0) {
                        if (m == 1 && secs == 0) {
                            if (unk_52 == 0) Snd_PlaySe(0x62);
                        } else if (m == 0) {
                            if (secs == 0) {
                                if (unk_52 == 0) Snd_PlaySe(0x61);
                            } else if (secs <= 10) {
                                if (unk_52 == 0) Snd_PlaySe(0x60);
                            } else {
                                if (unk_52 == 0) Snd_PlaySe(0x62);
                            }
                        }
                        unk_52 = 0;
                    }
                }
                unk_50 = unk_51;
            } else if (t.b4 == 1) {
                if (t.b3 == 1 && t.b2 == 0 && t.b1 == 0 && t.b0 == 0) {
                    if (unk_53 == 0) {
                        Snd_PlaySe(0x61);
                        unk_53 = 1;
                    }
                }
            }
        }
    }
    return TRUE;
}

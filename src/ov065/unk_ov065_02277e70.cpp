// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU34: GameSpy gsAvailable (0x02277e70..0x02278328)

struct Unk_ov065_02277f70_Ctx {
    u32 unk_00;
    void (*unk_04)(s32, s32, s32, u32);
};

struct Unk_ov065_02291024 {
    s32 unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d[4];
    char unk_11[0x3b];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

extern "C" {

s32 STD_GetStringLength(const char *);
void func_02127838(void *, const void *);
s32 memcmp(const void *, const void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);

extern s32 data_ov065_02290fa0;
extern char data_ov065_02290fa4[];
extern char data_ov065_02290fe4[];

Unk_ov065_02291024 data_ov065_02291024;

void *func_ov065_02277b64(s32 a, void *b, s32 c);
void *func_ov065_02277b8c(s32 a, s32 b);
s32 func_ov065_0227a1d4(s32, s32, void *, void *);
s32 func_ov065_0227a024(s32, s32, s32, void *, void *);
s32 func_ov065_02279eb4(s32);
s32 func_ov065_02279eec();
void func_ov065_02279ef4();
void func_ov065_0227a1f8();
void func_ov065_0227a244();
s32 func_ov065_02278ee8(s32 fd);
s32 func_ov065_02278cb8(s32, void *, s32, s32, void *, void *);
void func_ov065_02278dbc(s32);
u32 func_ov065_02279144();
void func_ov065_02279138();
s32 func_ov065_02278dd4(s32, s32, s32);
s32 func_ov065_02278328(const char *, s32, void *);

void func_ov065_02270e34(s32, s32);
s32 func_ov065_02277e70(s32 e);
s32 func_ov065_02278070(s32, s32, s32, s32, Unk_ov065_02277f70_Ctx *);
s32 func_ov065_022781b0(s8 *, s32, u8 *, u32 *);
void func_ov065_022782f4();
s32 func_ov065_02278c64(s32, void *, s32, s32, void *, s32);
}

extern "C" {

void func_ov065_022782f4() {
    func_ov065_02278c64(data_ov065_02291024.unk_00, &data_ov065_02291024.unk_0c, data_ov065_02291024.unk_4c, 0,
                        data_ov065_02291024.unk_04, 8);
    data_ov065_02291024.unk_50 = func_ov065_02279144();
}

void func_ov065_02278250(char *url) {
    char buf[0x44];
    s8 c;
    func_02127838(data_ov065_02290fe4, url);
    data_ov065_02291024.unk_00 = -1;
    func_ov065_02279138();
    c = data_ov065_02290fa4[0];
    if (c == 0) {
        OS_SPrintf(buf, "%s.available.gs.nintendowifi.net", url);
    }
    if (func_ov065_02278328(c != 0 ? data_ov065_02290fa4 : buf, 0x6cfc, data_ov065_02291024.unk_04) != 0) {
        s32 s = func_ov065_02278dd4(2, 2, 0);
        data_ov065_02291024.unk_00 = s;
        if (s != -1) {
            s32 n;
            data_ov065_02291024.unk_0c = 9;
            n = STD_GetStringLength(url);
            memcpy(data_ov065_02291024.unk_11, url, n + 1);
            data_ov065_02291024.unk_4c = n + 6;
            func_ov065_022782f4();
            data_ov065_02291024.unk_54 = 0;
        }
    }
}

s32 func_ov065_022781b0(s8 *b, s32 n, u8 *addr, u32 *out) {
    if (n < 7) {
        return 1;
    }
    if (memcmp(addr + 4, data_ov065_02291024.unk_08, 4) != 0) {
        return 1;
    }
    if (*(u16 *)(addr + 2) != data_ov065_02291024.unk_06) {
        return 1;
    }
    if (memcmp(b, "\xfe\xfd\x09", 3) != 0) {
        return 1;
    }
    u32 v = ((s32)b[3] << 24) & 0xff000000;
    v |= ((s32)b[4] << 16) & 0xff0000;
    v |= ((s32)b[5] << 8) & 0xff00;
    v |= (s32)b[6] & 0xff;
    *out = v;
    return 0;
}

s32 func_ov065_022780e0() {
    u32 addr[2];
    s32 len;
    u32 flags;
    u8 buf[0x40];
    len = 8;
    if (data_ov065_02291024.unk_00 == -1) {
        data_ov065_02290fa0 = 1;
        return 1;
    }
    if (func_ov065_02278ee8(data_ov065_02291024.unk_00) != 0) {
        s32 n = func_ov065_02278cb8(data_ov065_02291024.unk_00, buf, 0x40, 0, addr, &len);
        if (func_ov065_022781b0((s8 *)buf, n, (u8 *)addr, &flags) == 0) {
            func_ov065_02278dbc(data_ov065_02291024.unk_00);
            if ((flags & 1) != 0) {
                data_ov065_02290fa0 = 2;
            } else if ((flags & 2) != 0) {
                data_ov065_02290fa0 = 3;
            } else {
                data_ov065_02290fa0 = 1;
            }
            return data_ov065_02290fa0;
        }
    }
    if (func_ov065_02279144() > data_ov065_02291024.unk_50 + 0x7d0) {
        if (data_ov065_02291024.unk_54 == 1) {
            func_ov065_02278dbc(data_ov065_02291024.unk_00);
            data_ov065_02290fa0 = 1;
            return 1;
        }
        func_ov065_022782f4();
        data_ov065_02291024.unk_54++;
    }
    return 0;
}

s32 func_ov065_022780d0() {
    func_ov065_0227a244();
    return 1;
}

s32 func_ov065_022780c0() {
    func_ov065_0227a1f8();
    return 1;
}

s32 func_ov065_022780b0() {
    func_ov065_02279ef4();
    return 1;
}

s32 func_ov065_02278070(s32 a, s32 e, s32 c, s32 d, Unk_ov065_02277f70_Ctx *p) {
    void (*cb)(s32, s32, s32, u32) = p->unk_04;
    if (cb != NULL) {
        if (e == 0) {
            cb(c, d, e, p->unk_00);
        } else {
            func_ov065_02277e70(e);
            cb(0, 0, e, p->unk_00);
        }
    }
    func_ov065_02277b64(4, p, 0);
    return 1;
}

void func_ov065_02278060(s32 *p) {
    *p = func_ov065_02279eec();
}

s32 func_ov065_02278054(s32 *p) {
    return func_ov065_02279eb4(*p);
}

s32 func_ov065_02277fe0(s32 a, s32 *pa, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)func_ov065_02277b8c(4, 8);
    if (p == NULL) {
        func_ov065_02277e70(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = func_ov065_0227a024(a, *pa, 0, (void *)func_ov065_02278070, p);
    if (r < 0) {
        func_ov065_02277e70(r);
        cb(0, 0, r, p->unk_00);
        func_ov065_02277b64(4, p, 0);
    }
    return r;
}

s32 func_ov065_02277f70(s32 a, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)func_ov065_02277b8c(4, 8);
    if (p == NULL) {
        func_ov065_02277e70(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = func_ov065_0227a1d4(a, 0, (void *)func_ov065_02278070, p);
    if (r < 0) {
        func_ov065_02277e70(r);
        cb(0, 0, r, p->unk_00);
        func_ov065_02277b64(4, p, 0);
    }
    return r;
}

s32 func_ov065_02277e70(s32 e) {
    s32 b = -0x17ed0;
    s32 a = 6;
    if (e == 0) {
        return 0;
    }
    switch (e) {
    case -7:
        b -= 0x320;
        break;
    case -6:
        b -= 0x32a;
        break;
    case -5:
        b -= 0x348;
        break;
    case -4:
    case -3:
    case -2:
        b -= 0x334;
        break;
    case -1:
        b -= 0x33e;
        break;
    case 1:
    case 20:
        a = 8;
        b -= 1;
        break;
    case 2:
        b -= 0x348;
        break;
    case 3:
        b -= 0x352;
        break;
    case 4:
        b -= 0x1e;
        break;
    case 5:
        b -= 0x32;
        break;
    case 6:
    case 11:
    case 12:
        b -= 0x14;
        break;
    case 7:
        b -= 0x35c;
        break;
    case 8:
    case 9:
    case 10:
        b -= 0x366;
        break;
    case 13:
    case 14:
        b -= 0x370;
        break;
    case 15:
        b -= 0x37a;
        break;
    case 16:
        b -= 0x384;
        break;
    case 17:
        b -= 0x38e;
        break;
    case 0:
    case 18:
    case 19:
        break;
    }
    func_ov065_02270e34(a, b);
    return e;
}

}

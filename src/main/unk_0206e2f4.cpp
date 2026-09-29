#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020de234 : public Unk_020d8c7c {
public:
    virtual ~Unk_020de234();
};

Unk_020de234::~Unk_020de234() {}

extern "C" {
extern u16 data_021cb474;
extern u8 data_021cb468;
extern s16 data_021cb470;
extern u32 data_021cb480[];
extern u8 data_027e0438[24];
extern u8 data_027e0434;
extern u8 data_021cb588[];
extern u8 data_021cb4b4;
extern u8 data_021cb4d0[];
extern u8 data_021cb49c;
extern u16 data_021cb4c0;
extern u32 data_021cb4e0;
extern u32 data_021cb4dc;
extern u8 data_021cb4f0[];
extern u32 data_021cb4cc;
extern u32 data_021cb4e4;
extern u16 data_021cb4b8;
extern u8 data_021cb5a8[];
extern u8 data_021cb4a8;
extern u16 data_021cb4bc;
extern u8 data_021cb528[];
extern u16 data_021cb548[];
extern u16 data_021cb568[];

BOOL func_0205b6e4(void *, void (*)(void), void (*)(void), s32);
void func_0205b69c(void *);
void func_01ffccf4(void);
void func_02001650(s32, s32, s32, s32);
void func_0205125c(void *, s32);
void func_02051268(u32, void *, s32);
s32 func_0206ef74(u32);
s32 func_0206ef8c(u32);
s32 func_0206ef9c(u32);
BOOL func_0206eca4(u32);
void func_0206ecc8(u32, u32);
void func_02116048(void *, const void *, u32);
void *func_020991e4(void);
void func_02065e70(void *, void *);
void func_02065b28(void *);
u32 func_0209750c(void);
void *func_02097a3c(u32);
void *func_02096e54(void *);
u8 *func_02096e50(void *);
void *func_02098750(u32);
u16 *func_02097f6c(void *, s32);
void *func_02097eb0(void *, s32);
void func_0206ebc0(void);
void func_0206e43c(void);
void func_0206e4b8(void);
void func_0206e594(void);

BOOL func_0206e2f4(void) {
    if (data_021cb474 == 12) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e308(void) {
    if ((u16)(data_021cb474 + 0xfffb) <= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e328(void) {
    if (data_021cb468 & 1) {
        return TRUE;
    }
    return FALSE;
}

void func_0206e33c(void) {
    s32 i;
    data_021cb470 = 0;
    if (func_0205b6e4(data_021cb480, func_01ffccf4, (void (*)(void))func_0206e43c, 0)) {
        data_021cb468 |= 1;
    }
    for (i = 0; i < 24; i++) {
        data_027e0438[i] = 0;
    }
    func_02001650(1, 0, 255, 192);
    data_027e0434 = 0;
}

void func_0206e3a0(void) {
    s32 i;
    data_021cb470 = 0x117;
    if (func_0205b6e4(data_021cb480, func_01ffccf4, (void (*)(void))func_0206e4b8, 0)) {
        data_021cb468 |= 1;
    }
    for (i = 0; i < 24; i++) {
        data_027e0438[i] = 0xfe;
    }
    func_02001650(data_021cb470, 0, 255, 192);
    data_027e0434 = 0;
}

void func_0206e40c(void) {
    if (data_021cb468 & 1) {
        func_0205b69c(data_021cb480);
        data_021cb468 &= ~1;
    }
}

void func_0206e43c(void) {
    s32 i, b, t;
    if (data_021cb470 < 0x103) {
        data_021cb470 += 20;
    } else {
        func_0205b69c(data_021cb480);
        data_021cb468 &= ~1;
        data_021cb470 = 0xfe;
        *(volatile u16 *)0x4000042 = 0xfeff;
    }
    i = 0;
    b = data_021cb470;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            data_027e0438[i] = 0;
        } else if (t > 0xfe) {
            data_027e0438[i] = 0xfe;
        } else {
            data_027e0438[i] = t;
        }
    }
}

void func_0206e4b8(void) {
    s32 i, b, t;
    if (data_021cb470 > 20) {
        data_021cb470 -= 20;
    } else {
        func_0205b69c(data_021cb480);
        data_021cb468 &= ~1;
        func_02001650(0, 0, 255, 192);
        *(volatile u16 *)0x4000042 = 0xff;
        data_021cb470 = 0;
    }
    i = 0;
    b = data_021cb470;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            data_027e0438[i] = 0;
        } else if (t > 0xfe) {
            data_027e0438[i] = 0xfe;
        } else {
            data_027e0438[i] = t;
        }
    }
    *(volatile u16 *)0x4000042 = ((data_027e0438[0] << 8) & 0xff00) | 0xff;
}

void func_0206e594(void) {
    func_0205125c(data_021cb588, 0x20);
}

void func_0206e5a4(u32 a) {
    func_02051268(a, data_021cb588, 0x20);
}

void *func_0206e5b4(void) {
    return data_021cb588;
}

s32 func_0206e5bc(void) { return func_0206ef8c(0x200); }
s32 func_0206e5cc(void) { return func_0206ef9c(0x200); }
s32 func_0206e5dc(void) { return func_0206ef74(0x200); }
s32 func_0206e5ec(void) { return func_0206ef74(0x100); }
s32 func_0206e5fc(void) { return func_0206ef8c(0x100); }
s32 func_0206e60c(void) { return func_0206ef9c(0x100); }

s32 func_0206e61c(void) {
    if (data_021cb4b4 != 0) {
        return 0;
    }
    return func_0206ef74(0x80);
}

void func_0206e63c(void) {
    if (func_0206ef74(0x80)) {
        if (data_021cb4b4 != 0) {
            data_021cb4b4--;
        }
    }
}

void func_0206e660(void) {
    func_0206ef8c(0x80);
    data_021cb4b4 = 0x37;
}

s32 func_0206e67c(void) { return func_0206ef9c(0x80); }

void func_0206e688(u32 i, u32 v) {
    data_021cb4d0[i] = v;
}

u8 func_0206e694(u32 i) {
    if (i == 0xff) {
        i = data_021cb49c;
    }
    return data_021cb4d0[i];
}

void func_0206e6ac(u32 v) {
    data_021cb49c = v;
}

u8 func_0206e6b8(void) {
    return data_021cb49c;
}

void func_0206e6c4(void) {
    data_021cb49c = 1;
    data_021cb4d0[0] = 0;
    data_021cb4d0[1] = 2;
    data_021cb4d0[2] = 6;
    data_021cb4d0[3] = 7;
    func_0206e594();
}

BOOL func_0206e6ec(u32 a, u32 b, u32 c) {
    if (func_0206eca4(a)) {
        func_0206ecc8(b, c);
        return TRUE;
    }
    return FALSE;
}

u16 func_0206e714(void) { return data_021cb4c0; }
void func_0206e720(u32 v) { data_021cb4c0 = v; }
u16 func_0206e72c(void) { return data_021cb4c0; }
void func_0206e738(u32 v) { data_021cb4c0 = v; }
void func_0206e744(u32 v) { data_021cb4c0 = v; }
u16 func_0206e750(void) { return data_021cb4c0; }

BOOL func_0206e75c(u32 v) {
    if (func_0206eca4(0x2a)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e780(u32 v) {
    if (func_0206eca4(0x29)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e7a4(u32 a, u32 b) {
    if (func_0206eca4(0x2c)) {
        data_021cb4e0 = b;
        data_021cb4c0 = a;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e7d4(u32 v) {
    if (func_0206eca4(0x2b)) {
        data_021cb4c0 = v;
        return TRUE;
    }
    return FALSE;
}

void func_0206e7f8(void) {
    func_0206ef8c(8);
    func_0206ef8c(0x20);
    func_0206ef8c(0x40);
}

s32 func_0206e814(void) { return func_0206ef9c(0x40); }
s32 func_0206e820(void) { return func_0206ef9c(0x20); }
s32 func_0206e82c(void) { return func_0206ef9c(8); }
s32 func_0206e838(void) { return func_0206ef74(0x40); }
s32 func_0206e844(void) { return func_0206ef74(0x20); }
s32 func_0206e850(void) { return func_0206ef74(8); }

u32 func_0206e85c(void) { return data_021cb4dc; }
u32 func_0206e868(void) { return data_021cb4e0; }

void func_0206e874(void) {
    data_021cb4e0 = 0;
    data_021cb4dc = 0;
}

BOOL func_0206e888(u32 a, u32 b) {
    if (func_0206eca4(0x3d)) {
        data_021cb4e0 = a;
        data_021cb4dc = b;
        return TRUE;
    }
    return FALSE;
}

void func_0206e8b8(void *a) {
    func_02116048(data_021cb4f0, a, 8);
}

void func_0206e8cc(void *a) {
    func_02116048(a, data_021cb4f0, 8);
}

void func_0206e8dc(u32 v) { data_021cb4cc = v; }
u32 func_0206e8e8(void) { return data_021cb4cc; }
void func_0206e8f4(u32 v) { data_021cb4e4 = v; }
u32 func_0206e900(void) { return data_021cb4e4; }

BOOL func_0206e90c(void) {
    if (data_021cb4b8 & 0x200) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206e928(void) {
    if (data_021cb4b8 & 0x100) {
        return FALSE;
    }
    return TRUE;
}

BOOL func_0206e944(void) {
    if (data_021cb4b8 & 0x400) {
        return TRUE;
    }
    return FALSE;
}

u8 func_0206e960(void) {
    return (data_021cb4b8 >> 6) & 3;
}

BOOL func_0206e974(void) {
    if (data_021cb4b8 & 8) {
        return TRUE;
    }
    return FALSE;
}

u32 func_0206e98c(void) {
    u32 v = data_021cb4b8;
    if (v & 2) {
        return 2;
    }
    if (v & 1) {
        return 1;
    }
    if (v & 0x800) {
        return 3;
    }
    return 0;
}

void func_0206e9bc(void) {
    void *p = func_020991e4();
    if (p) {
        func_02065e70(p, data_021cb5a8);
    }
}

void func_0206e9d8(void) {
    u32 a = func_0209750c();
    void *p = func_02096e54(func_02097a3c(a));
    u8 *q;
    func_02065e70(p, data_021cb5a8);
    func_02065b28(p);
    q = func_02096e50(func_02097a3c(a));
    q[0] = 1;
    q[1] = 1;
    q[2] = 0;
    q[3] = 0;
    q[0] = data_021cb4f0[3];
    q[1] = data_021cb4f0[4];
    q[2] = data_021cb4f0[5];
}

void func_0206ea2c(void *a) {
    func_02065e70(data_021cb5a8, a);
}

void func_0206ea3c(u32 v) { data_021cb4b8 = v; }

BOOL func_0206ea48(void) {
    if (func_0206eca4(0x25)) {
        data_021cb4b8 = 0;
        return TRUE;
    }
    return FALSE;
}

u8 func_0206ea6c(void) { return data_021cb4a8; }
u16 func_0206ea78(void) { return data_021cb4bc; }

u16 func_0206ea84(BOOL (*cb)(u16 *, void *)) {
    u32 a = func_0209750c();
    u16 *p = func_02097f6c(func_02098750(a), 0);
    s32 i;
    u16 mask = 0;
    for (i = 0; i < 15; i++) {
        if (cb(p + i, func_02097eb0(func_02098750(a), i))) {
            mask |= 1 << i;
        }
    }
    return mask;
}

BOOL func_0206ead4(u32 a, u32 b) {
    if (func_0206eca4(0x21)) {
        data_021cb4a8 = b;
        data_021cb4bc = a;
        return TRUE;
    }
    return FALSE;
}

void func_0206eb04(u32 key, u16 val) {
    s32 i;
    for (i = 0; i < 15; i++) {
        if (key == data_021cb548[i] && data_021cb528[i] == 0) {
            data_021cb548[i] = val;
            break;
        }
    }
}

void func_0206eb38(void *p) {
    if (p) {
        s32 i;
        for (i = 0; i < 15; i++) {
            u32 c = data_021cb568[i];
            s32 idx;
            if (c >= 0x38e4 && c <= 0x3933) {
                idx = ((s32)c - 0x38e4) >> 2;
            } else {
                idx = -1;
            }
            if (idx >= 0) {
                u32 v;
                if ((u32)idx < 20) {
                    v = 0x3934 + idx * 4;
                } else {
                    v = 0x3934;
                }
                func_0206eb04(c, v);
            }
        }
    }
    func_0206ebc0();
}

u16 *func_0206eb9c(void) { return data_021cb568; }

void func_0206eba4(u16 *src) {
    s32 i;
    for (i = 0; i < 15; i++) {
        data_021cb568[i] = src[i];
    }
}
}

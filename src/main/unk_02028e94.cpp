#include "types.h"

class Unk_0201d2d0;
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();

struct Unk_0201c870_Tbl {
    u8 range[5][2];
    u8 pad_0a[2];
    s32 val[5];
    u8 count;
    s8 unk_21;
};

extern "C" {
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_0201577c(void *, s32, void *, void *, void *);
void func_0201578c(void *, void *, s32, s32);
void *func_0202d114(void *);
s32 func_0209abc4(void *);
void *func_0209ab94(void *);
void *func_0209a92c(void *);
void *func_0209750c();
void *func_02098750(void *);
u16 *func_02097f6c(void *, s32);
s32 func_02097eb0(void *, s32);
s32 func_0209a89c(void *, u8);
void func_0209a774(u16 *, void *, u8);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void *func_0209888c(void *);
s32 func_02128930(void *, void *, s32);
s32 func_020941e8(void *, void *);
u32 func_0209a938(void *);
s32 func_02098f30(void *, BOOL (*)(u16 *));
s32 func_02098eb0(void *);
s32 func_0209a874(s32);
void *func_0209a8e0(void *);
void *func_0209a8e8(void *);
s32 func_02063b8c(s32);
u32 func_020290ac(void *);
BOOL func_020295d0(u16 *);
BOOL func_02029614(u16 *);
BOOL func_02029658(u16 *);
BOOL func_020295b4(u16 *, s32);
BOOL func_020295f8(u16 *, s32);
BOOL func_0202963c(u16 *, s32);
}

extern u8 data_021bf6c4[], data_021bf5a4[], data_021bf784[], data_021bf79c[], data_021be730[], data_021be668[];
extern u8 data_021bf5d4[], data_021bf64c[];
extern u8 data_020c74fc[], data_020c7500[], data_020d8ad4[];
extern Unk_0201d2d0_Fn data_020d7960, data_020d7950, data_020d79d8, data_020d7f78;

class Unk_0201d2d0 {
public:
    s32 func_02028e94();
    s32 func_02029234();
    s32 func_02029440();
    s32 func_02029694(BOOL (*f)(u16 *), s32 a, s32 b);
    void func_0202d1c0(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0x160 - 0x40];
    void *unk_160;
};


static inline BOOL Unk_020295d0_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_020295d0(u16 *p) {
    if (Unk_020295d0_Range(p, 0x450c, 0x45db)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020295b4(u16 *p, s32 x) {
    if (func_020295d0(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02029614(u16 *p) {
    if (Unk_020295d0_Range(p, 0x11a8, 0x12a7)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020295f8(u16 *p, s32 x) {
    if (func_02029614(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02029658(u16 *p) {
    BOOL r = FALSE;
    if (func_0204b2d4(p)) {
        if (!Unk_020295d0_Range(p, 0x450c, 0x45db)) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL func_0202963c(u16 *p, s32 x) {
    if (func_02029658(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
u32 func_020291b4(u16 *p) {
    void *s = func_02098750(func_0209750c());
    u16 *q = func_02097f6c(s, 0);
    u32 mask = 0;
    s32 i = 0;
    do {
        if (func_02097eb0(s, i) == 0) {
            BOOL r;
            if (func_0204b2d4(q)) {
                u32 a = func_0204b25c(q);
                r = (a == func_0204b25c(p)) ? TRUE : FALSE;
            } else {
                r = (*q == *p) ? TRUE : FALSE;
            }
            if (r) {
                mask = (u16)(mask | (1 << i));
            }
        }
        q++;
        i++;
    } while (i < 15);
    return mask;
}
}

extern "C" {
u32 func_020290ac(void *h) {
    void *s = func_02098750(func_0209750c());
    u16 *q = func_02097f6c(s, 0);
    u16 tmp;
    u16 l[3];
    u32 mask;
    s32 i, k;
    l[0] = 0xfff1;
    l[1] = 0xfff1;
    l[2] = 0xfff1;
    mask = 0;
    for (i = 0; i < 3; i++) {
        if (func_0209a89c(h, i) == 0) {
            func_0209a774(&tmp, func_0209a8e0(h), i);
            l[i] = tmp;
        } else {
            l[i] = 0xfff1;
        }
    }
    for (i = 0; i < 15; q++, i++) {
        if (func_02097eb0(s, i) == 0) {
            BOOL in = FALSE;
            if (*q >= 0x450c && *q <= 0x45db) {
                in = TRUE;
            }
            if (in) {
                for (k = 0; k < 3; k++) {
                    BOOL r;
                    if (func_0204b2d4(q)) {
                        u32 a = func_0204b25c(q);
                        r = (a == func_0204b25c(&l[k])) ? TRUE : FALSE;
                    } else {
                        r = (*q == l[k]) ? TRUE : FALSE;
                    }
                    if (r) {
                        mask = (u16)(mask | (1 << i));
                        break;
                    }
                }
            }
        }
    }
    return mask;
}
}


s32 Unk_0201d2d0::func_02028e94() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    struct { u8 t[2]; u8 tmp[6]; } L;
    func_0201c95c(this, &buf);
    switch (func_0209abc4(func_0202d114(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = func_0209888c(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && func_020941e8(q, p) != 0) {
            if (func_0209a938(unk_160) <= 1) {
                if (func_02098f30(L.tmp, func_020295d0) > 0) {
                    func_0201c938(this, &buf, idx, 0x1a, 0x1a, data_021bf6c4);
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                }
            } else if (func_0209a938(unk_160) >= 2) {
                if (func_020290ac(unk_160) != 0) {
                    func_0201c938(this, &buf, idx, 0x1a, 0x1a, data_021bf6c4);
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                }
            } else {
                func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
            }
            if (func_0209a938(unk_160) >= 2) {
                s32 r = func_0209a874((s32)func_0209a8e0(unk_160));
                if (r != -1) {
                    L.t[0] = r;
                    L.t[1] = 0;
                    func_0201577c(this, 0, L.t, data_020d8ad4, &L.t[1]);
                }
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf784);
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf79c);
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        func_0201c870(this, &buf);
        func_0202d1c0(data_020d7960);
        func_020679c0(unk_3c, 1);
    }
    return res;
}

static inline BOOL Unk_02029234_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

s32 Unk_0201d2d0::func_02029234() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (func_0209abc4(func_0202d114(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = func_0209888c(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && func_020941e8(q, p) != 0) {
            if (func_0209a938(unk_160) <= 1) {
                if (func_02098f30(&tmp, func_02029614) > 0) {
                    func_0201c938(this, &buf, idx, 0x1b, 0x1b, data_021bf6c4);
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                }
            } else {
                if (Unk_02029234_Range((u16 *)func_0209ab94(func_0202d114(this)), 0x11a8, 0x12a7)) {
                    if (func_02098eb0(func_0209ab94(func_0202d114(this))) != -1) {
                        func_0201c938(this, &buf, idx, 0x1b, 0x1b, data_021bf6c4);
                    } else {
                        func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                    }
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                }
            }
            if (Unk_02029234_Range((u16 *)func_0209ab94(func_0202d114(this)), 0x11a8, 0x12a7)) {
                func_0201578c(this, func_0209ab94(func_0202d114(this)), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf79c);
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        func_0201c870(this, &buf);
        func_0202d1c0(data_020d7950);
        func_020679c0(unk_3c, 1);
    }
    return res;
}

s32 Unk_0201d2d0::func_02029440() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (func_0209abc4(func_0202d114(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = func_0209888c(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && func_020941e8(q, p) != 0) {
            if (func_02098f30(&tmp, func_02029658) > 0) {
                func_0201c938(this, &buf, idx, 0x1c, 0x1c, data_021bf6c4);
            } else {
                func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf784);
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf79c);
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        func_0201c870(this, &buf);
        func_0202d1c0(data_020d79d8);
        func_020679c0(unk_3c, 1);
    }
    return res;
}

s32 Unk_0201d2d0::func_02029694(BOOL (*f)(u16 *), s32 pa, s32 pb) {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (func_0209abc4(func_0202d114(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = func_0209888c(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && func_020941e8(q, p) != 0) {
            if (func_0209a938(unk_160) == 2) {
                if (f((u16 *)func_0209a8e8(unk_160)) != 0 && func_02098f30(&tmp, f) > 0) {
                    func_0201c938(this, &buf, idx, pa, pa, data_021bf5d4);
                } else {
                    func_0201c938(this, &buf, 0, 0x14, 0x14, data_021bf5a4);
                }
            } else {
                if (f((u16 *)func_0209ab94(func_0202d114(this))) != 0) {
                    if (func_02098eb0(func_0209ab94(func_0202d114(this))) != -1) {
                        func_0201c938(this, &buf, idx, pb, pb, data_021bf64c);
                    } else {
                        func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                    }
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, data_021bf5a4);
                }
            }
            if (*(u16 *)func_0209ab94(func_0202d114(this)) != 0xfff1) {
                func_0201578c(this, func_0209ab94(func_0202d114(this)), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & 1) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf784);
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, data_021bf79c);
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        func_0201c870(this, &buf);
        func_0202d1c0(data_020d7f78);
        func_020679c0(unk_3c, 1);
    }
    return res;
}

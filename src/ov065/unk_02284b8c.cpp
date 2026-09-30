// mwcc-flags: -O4,p
#include "types.h"

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
extern u8 data_ov065_0228e150[];

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

s32 func_ov065_02284b8c(Conn *o, s32 a, s32 b) {
    return func_ov065_02284888(o, a, b);
}

s32 func_ov065_02284b94(Conn *o, void *x) {
    return func_ov065_022848b8(o, x);
}

s32 func_ov065_02284b9c(void *p) {
    return func_ov065_02286560(p);
}

void func_ov065_02284ba4(Sock *s) {
    if (func_ov065_022852b8(s) != 0) {
        if (func_ov065_02286208(s) != 0) {
            func_ov065_022861d8(s);
        }
    }
}

void func_ov065_02284bc8(Conn *o) {
    func_ov065_022849f8(o);
    func_ov065_02286564(o);
}

void func_ov065_02284bdc(s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_ov065_0228659c(a, b, c, d, e);
}

void func_ov065_02284bf0(Conn *o, u8 *a, s32 b, s32 mode) {
    if (mode != 0) {
        func_ov065_0228510c(o, a, b);
    } else {
        func_ov065_02284de4(o, a, b);
    }
}

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

s32 func_ov065_02284ca4(Conn *o) {
    return func_ov065_02284c68(o->unk_08, o->unk_00, o->unk_04);
}

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

s32 func_ov065_02284cb4(Conn *o, u8 *b, s32 n) {
    b[2] = 0x67;
    return func_ov065_02284854(o, b, n);
}

s32 func_ov065_02284cc0(Conn *o) {
    u32 t;
    u8 buf[11];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x66;
    u8 *const q = buf + 3;
    const u8 *const r = data_ov065_0228e150;
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

s32 func_ov065_02285168(Conn *o) {
    s32 c = func_ov065_02278684(o->unk_60);
    s32 *it = (s32 *)func_ov065_0227866c(o->unk_60, c - 1);
    if (func_ov065_02284854(o, o->unk_50.unk_00 + it[0], it[1]) == 0) {
        return 0;
    }
    o->unk_90 = 0;
    return 1;
}

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

struct Unk_ov065_02285264_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

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

struct Unk_ov065_022852b8_Addr {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

static inline u16 Swap16(u16 p) {
    return ((p >> 8) & 0xff) | ((p << 8) & 0xff00);
}

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
}

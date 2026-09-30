// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p
#include "types.h"

// ov065_006: TCP/IP input path (socket library), 0x02262c5c..0x02263577

struct Unk_ov065_02262c5c_Ip {
    u8 b0;
    u8 b1;
    u16 h2;
    u8 b4;
    u8 b5;
    u16 h6;
    u8 b8;
    u8 b9;
    u16 ha;
    u16 hc;
    u16 he;
    u16 h10;
    u16 h12;
};

struct Unk_ov065_02262c5c_Frag {
    u32 key;
    u16 cnt;
    u16 id;
    u16 total;
    u16 end;
    u16 start[8];
    u16 fin[8];
    u32 tick;
    u8 *data;
    u8 *buf;
};

struct Unk_ov065_02262e64_Tcp {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u8 bc;
    u8 bd;
    u16 he;
};

struct Unk_ov065_02262e64_Sock {
    u32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
    u8 pad_0c[8];
    u32 unk_14;
    u16 unk_18;
    u16 pad_1a;
    u32 unk_1c;
    u8 pad_20[4];
    s32 unk_24;
    s32 unk_28;
    u16 unk_2c;
    u16 pad_2e;
    u32 unk_30;
    s32 unk_34;
    s32 (*unk_38)(u8 *, u32, Unk_ov065_02262e64_Sock *);
    u32 unk_3c;
    u8 *unk_40;
    u32 unk_44;
};

struct Unk_ov065_02262e64_Conn {
    u8 pad_00[0x68];
    Unk_ov065_02262e64_Conn *unk_68;
    u8 pad_6c[0x38];
    Unk_ov065_02262e64_Sock *unk_a4;
};

struct Unk_ov065_02262e64_Ctx {
    u8 pad_00[8];
    Unk_ov065_02262e64_Conn *unk_08;
};

static inline u16 Unk_ov065_02262c5c_Bs(u16 v) {
    return (u16)((v >> 8) | (v << 8));
}

extern "C" {

extern Unk_ov065_02262c5c_Frag data_ov065_0228f200[8];
extern u8 *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(u8 *);
extern Unk_ov065_02262e64_Ctx data_021fcc2c;

u64 func_01ffa6b4();
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_02113498();
void func_0211366c(u32);
void func_02116048(void *, void *, u32);
s32 func_02133150(s32, s32);

s32 func_ov065_02264884(Unk_ov065_02262e64_Tcp *, u32, Unk_ov065_02262c5c_Ip *, u32);
s32 func_ov065_02263618(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *, u32, u16);
s32 func_ov065_022636f4(Unk_ov065_02262e64_Sock *, u16);
s32 func_ov065_022636e8(Unk_ov065_02262e64_Sock *, u16);
s32 func_ov065_02263770(Unk_ov065_02262e64_Tcp *, Unk_ov065_02262e64_Sock *);
Unk_ov065_02262e64_Sock *func_ov065_022637d0(Unk_ov065_02262c5c_Ip *);
Unk_ov065_02262e64_Sock *func_ov065_0226389c(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *);
s32 func_ov065_022639c4(u32, u32);
s32 func_ov065_02263578(Unk_ov065_02262c5c_Ip *, Unk_ov065_02262e64_Tcp *, Unk_ov065_02262e64_Sock *);

void func_ov065_02263098(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q);
void func_ov065_022630c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_02263174(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_022633c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
void func_ov065_0226347c(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);
s32 func_ov065_02263518(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r);

u8 *func_ov065_02262c5c(Unk_ov065_02262c5c_Ip *p, s32 *out) {
    u32 flags;
    u8 *ret;
    *out = 0;
    Unk_ov065_02262c5c_Frag *free = 0;
    flags = Unk_ov065_02262c5c_Bs(p->h6);
    if ((flags & 0x3fff) != 0) {
        u32 len, off, hl, end, o8;
        hl = (p->b0 & 0xf) << 2;
        u32 id = *(u16 *)&p->b4;
        u32 key = ((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he);
        Unk_ov065_02262c5c_Frag *e = data_ov065_0228f200;
        u32 i;
        for (i = 0; i < 8; e++, i++) {
            if (e->cnt != 0 && e->key == key && e->id == id) break;
            if (e->cnt == 0 && free == 0) free = e;
        }
        len = Unk_ov065_02262c5c_Bs(p->h2) - hl;
        off = flags & 0x1fff;
        o8 = off << 3;
        end = len + o8;
        if (i == 8) {
            if (free == 0 || end > 0x1000) return 0;
            e = free;
            e->buf = data_ov065_0228ebc8(hl + 0x100e);
            if (e->buf == 0) return 0;
            e->key = key;
            e->id = id;
            e->total = 0;
            u64 t = func_01ffa6b4();
            e->tick = (u32)(t >> 16);
            e->data = e->buf + 0xe + hl;
            func_02116048(p, e->buf + 0xe, hl);
        }
        if (e->cnt == 8 || end > 0x1000) {
            e->cnt = 0;
            data_ov065_0228ebd0(e->buf);
            return 0;
        }
        u32 fin = off + ((len + 7) >> 3);
        flags &= 0x2000;
        if (flags == 0) {
            e->end = end;
            e->total = fin;
        }
        e->start[e->cnt] = off;
        e->fin[e->cnt] = fin;
        e->cnt++;
        func_02116048((u8 *)p + hl, e->data + o8, len);
        u32 total = e->total;
        if (total == 0) return 0;
        u32 n, k, cur = 0;
        k = cur;
        n = e->cnt;
        for (; k < n;) {
            if (e->start[k] <= cur && cur < e->fin[k]) {
                cur = e->fin[k];
                k = 0;
            } else {
                k++;
            }
        }
        if (cur < total) return 0;
        ret = e->buf + 0xe;
        *(u16 *)(ret + 2) = Unk_ov065_02262c5c_Bs((u16)(e->end + ((ret[0] & 0xf) << 2)));
        e->cnt = 0;
        *out = 1;
        return ret;
    }
    return (u8 *)p;
}

void func_ov065_02262e64(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 c) {
    if (q->h6 != 0 && func_ov065_02264884(q, c, p, 0x11) != 0) return;
    Unk_ov065_02262e64_Conn *s = data_021fcc2c.unk_08;
    for (; s != 0; s = s->unk_68) {
        Unk_ov065_02262e64_Sock *k = s->unk_a4;
        if (k != 0 && k->unk_00 != 0 && k->unk_08 == 10 && k->unk_0a == Unk_ov065_02262c5c_Bs(q->h2)
            && (k->unk_18 == 0 || k->unk_18 == Unk_ov065_02262c5c_Bs(q->h0))
            && (k->unk_1c == 0 || k->unk_1c == (u32)-1
                || k->unk_1c == (((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he)))) {
            k->unk_14 = ((u32)Unk_ov065_02262c5c_Bs(p->h10) << 16) | Unk_ov065_02262c5c_Bs(p->h12);
            if (k->unk_1c == 0) {
                k->unk_1c = ((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he);
                k->unk_18 = Unk_ov065_02262c5c_Bs(q->h0);
            }
            if (k->unk_44 != 0) return;
            u32 m = k->unk_3c;
            c -= 8;
            if (c > m) k->unk_44 = m;
            else k->unk_44 = c;
            func_02116048((u8 *)q + 8, k->unk_40, k->unk_44);
            if (k->unk_04 == 3) {
                k->unk_04 = 0;
                func_0211366c(k->unk_00);
                return;
            }
            if (k->unk_38 != 0) {
                if (k->unk_38(k->unk_40, k->unk_44, k) != 0) k->unk_44 = 0;
            }
            return;
        }
    }
    return;
}

void func_ov065_02262fbc(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    if (func_ov065_02264884(q, r, p, 6) == 0) {
        s32 t;
        r -= func_02133150(q->bc & 0xf0, 4);
        t = q->bd;
        switch (t & 0x17) {
        case 2:
            if ((t & 0x28) == 0) func_ov065_0226347c(p, q, r);
            return;
        case 0x12:
            if ((t & 0x28) == 0) func_ov065_022633c4(p, q, r);
            return;
        case 0x10:
        case 0x11:
            func_ov065_02263174(p, q, r);
            return;
        case 1:
            func_ov065_022630c4(p, q, r);
            return;
        default:
            break;
        }
        if ((t & 4) != 0) {
            func_ov065_02263098(p, q);
            return;
        }
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x17));
    }
}

void func_ov065_02263098(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        func_02113498();
        s->unk_08 = 0;
        if ((u32)(s->unk_04 - 1) <= 1) {
            s->unk_04 = 0;
            func_0211366c(s->unk_00);
        }
    }
}

void func_ov065_022630c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        switch (s->unk_08) {
        case 7:
            s->unk_24++;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x13));
            s->unk_08 = 9;
            return;
        case 8:
            s->unk_24++;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x14));
            s->unk_08 = 0;
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                func_0211366c(s->unk_00);
                return;
            }
            return;
        case 4:
            s->unk_24++;
            func_ov065_022636e8(s, (u16)((p->b5 << 8) + 0x15));
            s->unk_08 = 6;
            return;
        default:
            func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x16));
            break;
        }
    }
}

void func_ov065_022633c4(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s == 0 || s->unk_08 != 2) {
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 5));
        return;
    }
    func_02113498();
    s->unk_24 = (((u32)Unk_ov065_02262c5c_Bs(q->h4) << 16) | Unk_ov065_02262c5c_Bs(q->h6)) + 1;
    s->unk_30 = ((u32)Unk_ov065_02262c5c_Bs(q->h8) << 16) | Unk_ov065_02262c5c_Bs(q->ha);
    s->unk_2c = Unk_ov065_02262c5c_Bs(q->he);
    func_ov065_02263770(q, s);
    func_ov065_022636f4(s, (u16)((p->b5 << 8) + 6));
    s->unk_08 = 4;
    if (s->unk_04 == 1) {
        s->unk_04 = 0;
        func_0211366c(s->unk_00);
    }
}

void func_ov065_0226347c(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    if (func_ov065_022639c4(((u32)Unk_ov065_02262c5c_Bs(p->hc) << 16) | Unk_ov065_02262c5c_Bs(p->he),
                            ((u32)Unk_ov065_02262c5c_Bs(p->h10) << 16) | Unk_ov065_02262c5c_Bs(p->h12)) != 0) {
        if (func_ov065_02263518(p, q, r) == 0) {
            Unk_ov065_02262e64_Sock *x = func_ov065_0226389c(p, q);
            if (x != 0) {
                func_ov065_02263578(p, q, x);
                return;
            }
            func_02113498();
            x = func_ov065_0226389c(p, q);
            if (x != 0) func_ov065_02263578(p, q, x);
        }
    }
}

s32 func_ov065_02263518(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    if (s != 0) {
        if (s->unk_08 == 1) {
            func_ov065_02263578(p, q, s);
        } else if ((u8)(s->unk_08 + 0xfd) <= 1) {
            s->unk_28--;
            func_ov065_02263578(p, q, s);
        } else {
            func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 3));
        }
        return 1;
    }
    return 0;
}

void func_ov065_02263174(Unk_ov065_02262c5c_Ip *p, Unk_ov065_02262e64_Tcp *q, u32 r) {
    Unk_ov065_02262e64_Sock *s = func_ov065_022637d0(p);
    s32 fl;
    s32 last;
    u32 seq;
    if (s == 0) {
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 9));
        return;
    }
    fl = q->bd;
    s->unk_30 = ((u32)Unk_ov065_02262c5c_Bs(q->h8) << 16) | Unk_ov065_02262c5c_Bs(q->ha);
    seq = ((u32)Unk_ov065_02262c5c_Bs(q->h4) << 16) | Unk_ov065_02262c5c_Bs(q->h6);
    if (s->unk_08 == 4 && (u32)s->unk_24 != seq) {
        func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xa));
        return;
    }
    s->unk_2c = Unk_ov065_02262c5c_Bs(q->he);
    switch (s->unk_08) {
    case 0:
    case 2:
        func_ov065_02263618(p, q, r, (u16)((p->b5 << 8) + 0x63));
        break;
    case 3:
        s->unk_08 = 4;
        if (s->unk_04 == 1) {
            s->unk_04 = 0;
            func_0211366c(s->unk_00);
        }
        if (r == 0) break;
    case 4:
        s->unk_34++;
        {
            u32 room = s->unk_3c - s->unk_44;
            if (r > room) {
                r = room;
                last = 0;
            } else {
                last = 1;
            }
        }
        if (r != 0) {
            u32 sv = func_01ffa2ec();
            func_02116048((u8 *)q + func_02133150(q->bc & 0xf0, 4), s->unk_40 + s->unk_44, r);
            s->unk_44 += r;
            s->unk_24 += r;
            func_01ffa3d4(sv);
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                func_0211366c(s->unk_00);
            }
        }
        if (last != 0 && (fl & 1) != 0) {
            s->unk_08 = 6;
            s->unk_24++;
            func_ov065_022636e8(s, (u16)((p->b5 << 8) + 0xb));
            if (r == 0 && s->unk_04 == 2) {
                s->unk_04 = 0;
                func_0211366c(s->unk_00);
            }
        } else if (r != 0) {
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xc));
        }
        break;
    case 7:
    case 8:
        if ((fl & 1) != 0) {
            s->unk_24 += r + 1;
            func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xd));
            s->unk_08 = 0;
            if (s->unk_04 == 2) {
                s->unk_04 = 0;
                func_0211366c(s->unk_00);
            }
        } else {
            if (r != 0) {
                s->unk_24 += r;
                func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0xe));
            }
            s->unk_08 = 8;
        }
        break;
    case 6:
    case 9:
        s->unk_08 = 0;
        if (s->unk_04 == 2) {
            s->unk_04 = 0;
            func_0211366c(s->unk_00);
        }
        break;
    case 1:
    case 5:
    default:
        if ((fl & 1) != 0) s->unk_24++;
        func_ov065_022636f4(s, (u16)((p->b5 << 8) + 0x12));
        break;
    }
    func_02113498();
}

}

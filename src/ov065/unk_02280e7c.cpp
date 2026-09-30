// mwcc-flags: -O4,p
#include "types.h"

// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02280e7c_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    char *unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    char *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    Unk_ov065_022786bc_Vec *unk_38;
    Unk_ov065_02280e7c_Node *unk_3c;
};

struct Unk_ov065_02280e7c_Ctx {
    u8 pad_000[0x110];
    char unk_110[0x67];
    char unk_177[0x29];
    s32 unk_1a0;
    u8 pad_1a4[0x18];
    s32 unk_1bc;
    s32 unk_1c0;
    u8 pad_1c4[0x40];
    s32 unk_204;
    u8 pad_208[0x22c];
    Unk_ov065_02280e7c_Node *unk_434;
};

struct Unk_ov065_02280e7c_Ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    char *unk_18;
};

struct Unk_ov065_02280e7c_Pair {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02280e7c_Pair() {}
    Unk_ov065_02280e7c_Pair(s32 a, s32 b) { unk_00 = a; unk_04 = b; }
};

struct Unk_ov065_02280e7c_Pair2 {
    Unk_ov065_02280e7c_Pair p;
};

struct Unk_ov065_02280e7c_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef Unk_ov065_02280e7c_Node Node0228;
typedef Unk_ov065_02280e7c_Ent Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef Unk_ov065_02280e7c_Sub Sub0228;

extern char data_ov065_0228d928[];
extern char data_ov065_0228d9c8[];
extern char data_ov065_0228d9ec[];
extern char data_ov065_0228d9f0[];
extern char data_ov065_0228da00[];
extern char data_ov065_0228da04[];
extern char data_ov065_0228da0c[];
extern char data_ov065_0228da14[];
extern char data_ov065_0228da1c[];
extern char data_ov065_0228da24[];
extern char data_ov065_0228da2c[];
extern char data_ov065_0228da34[];
extern char data_ov065_0228da3c[];
extern char data_ov065_0228da44[];
extern char data_ov065_0228da68[];

extern "C" {

s32 func_0212a15c(const char *, const char *, s32);
char *func_02129f1c(const char *, const char *);
s32 func_0212a190(const char *, const char *);
s32 func_0212b770(const char *);
s32 func_021277d4(const char *);
s32 func_021130d0(char *, const char *, ...);
void *func_0212899c(void *, s32, s32);

void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
Unk_ov065_022786bc_Vec *func_ov065_022786bc(s32, s32, void (*)(void *));
void func_ov065_02278570(Unk_ov065_022786bc_Vec *, s32);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *);
void func_ov065_0227899c(char *, s32, char *);
s32 func_ov065_02278bc0(s32);
s32 func_ov065_02278cf8(s32, s32, s32);
s32 func_ov065_02278da4(s32, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_02278ee8();
s32 func_ov065_02278fcc(s32);
s32 func_ov065_02278ffc(s32);
s32 func_ov065_0227902c(s32, s32);
s32 func_ov065_0227905c(s32, s32);
s32 func_ov065_0227908c(s32, s32);
s32 func_ov065_02279100(s32);
s32 func_ov065_0227ced4(Ctx0228 **, s32, s32, s32);
s32 func_ov065_0227cf78(Ctx0228 **, s32, s32, const char *);
s32 func_ov065_0227d96c(Ctx0228 **, char **);
s32 func_ov065_0227d9b0(Ctx0228 **, char **, s32 *, s32 *, s32 *);
s32 func_ov065_0227da7c(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 func_ov065_0227db18(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
s32 func_ov065_0227dde8(Ctx0228 **, char **, s32);
s32 func_ov065_0227de10(Ctx0228 **, char **, const char *);
s32 func_ov065_0227e0e8(Ctx0228 **, Pair0228, void *, s32, s32);
s32 func_ov065_0227f4c8(Ctx0228 **, s32, char *);
s32 func_ov065_022809a4(Ctx0228 **, s32, s32, Ent0228 **, s32, s32, s32);
s32 func_ov065_02280d70(Ctx0228 **, Node0228 *);
void func_ov065_02281880(Ctx0228 **, Ent0228 *);
s32 func_ov065_022818bc(Ctx0228 **, s32, Ent0228 **);
s32 func_ov065_02283304(Ctx0228 **, Node0228 *, s32, char *, s32, s32);
void func_ov065_02283460(Ctx0228 **, const char *);
s32 func_ov065_02283590(Ctx0228 **, s32, s32 *);
s32 func_ov065_02283630(char *, const char *, char *, s32);
void func_ov065_02283720(Ctx0228 **, const char *, ...);

s32 func_ov065_0228176c(Ent0228 *);
s32 func_ov065_02281530(Ctx0228 **, Node0228 *);
s32 func_ov065_022813ac(Ctx0228 **, Node0228 *);
s32 func_ov065_02281180(Ctx0228 **, Node0228 *);
s32 func_ov065_0228132c(Ctx0228 **, Node0228 *);
s32 func_ov065_0228113c(Ctx0228 **, Node0228 *);
void func_ov065_02281068(Ctx0228 **, Node0228 *);
void func_ov065_022810fc(Ctx0228 **, Node0228 *);
void func_ov065_02281000(s32);
void func_ov065_02280f24(void *);
Node0228 *func_ov065_02280eb8(Ctx0228 **, s32, s32);

s32 func_ov065_02280e7c(Ctx0228 **h, Node0228 *n) {
    Ent0228 *e;
    s32 r = func_ov065_022809a4(h, 2, 0, &e, 0, 0, 0);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227f4c8(h, n->unk_0c, e->unk_18);
    if (r != 0) {
        return r;
    }
    n->unk_00 = 0x65;
    return 0;
}

Node0228 *func_ov065_02280eb8(Ctx0228 **h, s32 a, s32 b) {
    Ctx0228 *c = *h;
    Node0228 *n = (Node0228 *)func_ov065_02277af0(0x40);
    if (n == NULL) {
        return NULL;
    }
    func_0212899c(n, 0, 0x40);
    n->unk_00 = 0x64;
    n->unk_04 = b;
    n->unk_08 = -1;
    n->unk_0c = a;
    n->unk_10 = func_ov065_02278bc0(0) + 0x12c;
    n->unk_3c = c->unk_434;
    n->unk_38 = func_ov065_022786bc(0x18, 0, func_ov065_02280f24);
    c->unk_434 = n;
    return n;
}

void func_ov065_02280f24(void *p) {
    func_ov065_02277ac8(*(void **)p);
    *(void **)p = NULL;
}

Node0228 *func_ov065_02280f38(Ctx0228 **h, s32 id) {
    Ctx0228 *c = *h;
    Node0228 *n = c->unk_434;
    while (n != NULL) {
        if (n->unk_0c == id && n->unk_00 == 0x69) {
            return n;
        }
        n = n->unk_3c;
    }
    return NULL;
}

s32 func_ov065_02280f5c(Ctx0228 **h) {
    Ctx0228 *c = *h;
    Node0228 *n;
    s32 s;
    if (c->unk_204 != -1 && func_ov065_02278ee8() != 0) {
        s = func_ov065_02278cf8(c->unk_204, 0, 0);
        if (s != -1) {
            n = func_ov065_02280eb8(h, -1, 0);
            if (n != NULL) {
                n->unk_00 = 0x68;
                n->unk_08 = s;
                func_ov065_0227908c(s, 0);
                func_ov065_02281000(n->unk_08);
            } else {
                func_ov065_02278dbc(s);
            }
        }
    }
    {
        Node0228 *m = c->unk_434;
        s32 z = 0;
        while (m != NULL) {
            Node0228 *next = m->unk_3c;
            s32 r = func_ov065_0228113c(h, m);
            if (m->unk_00 == 0x6a || r != 0 || func_ov065_02278bc0(z) > m->unk_10) {
                func_ov065_02281068(h, m);
            }
            m = next;
        }
    }
    return 0;
}

void func_ov065_02281000(s32 s) {
    func_ov065_0227905c(s, 0x4000);
    func_ov065_0227905c(s, 0x8000);
    func_ov065_0227905c(s, 0x10000);
    func_ov065_0227905c(s, 0x20000);
    func_ov065_0227905c(s, 0x40000);
    func_ov065_0227902c(s, 0x4000);
    func_ov065_0227902c(s, 0x8000);
    func_ov065_0227902c(s, 0x10000);
    func_ov065_02278ffc(s);
    func_ov065_02278fcc(s);
}

void func_ov065_02281068(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    Node0228 *p = c->unk_434;
    if (p == n) {
        c->unk_434 = n->unk_3c;
    } else {
        Node0228 *q = p->unk_3c;
        while (q != n) {
            if (q == NULL) {
                func_ov065_02283720(h, data_ov065_0228d9c8);
                return;
            }
            p = q;
            q = q->unk_3c;
        }
        p->unk_3c = n->unk_3c;
    }
    {
        s32 i = 0;
        while (func_ov065_02278684(n->unk_38) != 0) {
            Sub0228 *e = (Sub0228 *)func_ov065_0227866c(n->unk_38, i);
            if (e->unk_10 < 0x64) {
                func_ov065_0227cf78(h, n->unk_0c, e->unk_10, (const char *)(e->unk_00 + e->unk_14));
            }
            func_ov065_02278570(n->unk_38, i);
        }
    }
    func_ov065_022810fc(h, n);
}

void func_ov065_022810fc(Ctx0228 **h, Node0228 *n) {
    func_ov065_02278da4(n->unk_08, 2);
    func_ov065_02278dbc(n->unk_08);
    func_ov065_02277ac8(n->unk_18);
    n->unk_18 = NULL;
    func_ov065_02277ac8(n->unk_28);
    n->unk_28 = NULL;
    if (n->unk_38 != NULL) {
        func_ov065_02278688(n->unk_38);
        n->unk_38 = NULL;
    }
    func_ov065_02277ac8(n);
}

s32 func_ov065_0228113c(Ctx0228 **h, Node0228 *n) {
    s32 r = 0;
    if (n->unk_00 != 0x69) {
        if (n->unk_04 != 0) {
            r = func_ov065_02281530(h, n);
        } else {
            r = func_ov065_022813ac(h, n);
        }
    }
    if (r == 0 && n->unk_00 == 0x69) {
        r = func_ov065_02281180(h, n);
    }
    return r;
}

s32 func_ov065_02281180(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 len;
    s32 flag;
    Unk_ov065_02280e7c_Pair2 pr;
    s32 v;
    s32 type;
    s32 ext;
    s32 r;
    if (n->unk_30 != 0) {
        r = func_ov065_0227da7c(h, n->unk_08, &n->unk_28, &flag, 1, data_ov065_0228d9ec);
        if (flag != 0 || r != 0) {
            n->unk_00 = 0x6a;
            return 0;
        }
    }
    if (n->unk_30 == 0) {
        r = func_ov065_0228132c(h, n);
        if (r != 0) {
            return r;
        }
        if (n->unk_00 == 0x6a) {
            return 0;
        }
    }
    r = func_ov065_0227db18(h, n->unk_08, &n->unk_18, &len, &flag, data_ov065_0228d9ec);
    if (r != 0) {
        n->unk_00 = 0x6a;
        return 0;
    }
    if (len > 0) {
        n->unk_10 = func_ov065_02278bc0(0) + 0x12c;
    }
    do {
        r = func_ov065_0227d9b0(h, &n->unk_18, &v, &type, &ext);
        if (r != 0) {
            return r;
        }
        if (v != 0) {
            switch (type) {
            case 1:
                pr = *(Unk_ov065_02280e7c_Pair2 *)&c->unk_1bc;
                if (pr.p.unk_00 != 0) {
                    Sub0228 *m = (Sub0228 *)func_ov065_02277af0(0xc);
                    if (m == NULL) {
                        func_ov065_02283460(h, data_ov065_0228d9f0);
                        return 1;
                    }
                    m->unk_00 = n->unk_0c;
                    m->unk_08 = func_ov065_02279100(v);
                    m->unk_04 = func_ov065_02278bc0(0);
                    r = func_ov065_0227e0e8(h, pr.p, m, 0, 2);
                    if (r != 0) {
                        return r;
                    }
                }
                break;
            case 0x66:
                func_ov065_0227ced4(h, n->unk_0c, 0x67, (s32)data_ov065_0228da00);
                break;
            case 0xc8:
            case 0xc9:
            case 0xca:
            case 0xcb:
            case 0xcc:
            case 0xcd:
            case 0xce:
            case 0xcf:
            case 0xd0:
                func_ov065_02283304(h, n, type, n->unk_18, v, ext);
                break;
            }
            func_ov065_0227d96c(h, &n->unk_18);
        }
    } while (v != 0);
    if (flag != 0) {
        n->unk_00 = 0x6a;
    }
    return 0;
}

s32 func_ov065_0228132c(Ctx0228 **h, Node0228 *n) {
    s32 i;
    s32 flag;
    s32 r;
    if (n->unk_30 != 0) {
        return 0;
    }
    if (func_ov065_02278684(n->unk_38) != 0) {
        i = 0;
        do {
            Sub0228 *e = (Sub0228 *)func_ov065_0227866c(n->unk_38, i);
            r = func_ov065_0227da7c(h, n->unk_08, (char **)e, &flag, i, data_ov065_0228d9ec);
            if (flag != 0 || r != 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            if (e->unk_0c != e->unk_08) {
                break;
            }
            func_ov065_02278570(n->unk_38, i);
        } while (func_ov065_02278684(n->unk_38) != 0);
    }
    return 0;
}

s32 func_ov065_022813ac(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 len;
    s32 flag;
    char b1[0x10];
    char b2[0x1f];
    char b3[0x21];
    char b5[0x21];
    char b4[0x100];
    char *p;
    char *q;
    s32 x;
    s32 r;
    r = func_ov065_0227db18(h, n->unk_08, &n->unk_18, &len, &flag, data_ov065_0228d9ec);
    if (r != 0) {
        return r;
    }
    if (flag != 0) {
        n->unk_00 = 0x6a;
        return 0;
    }
    p = func_02129f1c(n->unk_18, data_ov065_0228da04);
    if (p != NULL) {
        *p = 0;
        q = n->unk_18;
        if (func_0212a15c(q, data_ov065_0228da0c, 6) == 0) {
            if (func_ov065_02283630(q, data_ov065_0228da14, b1, 0x10) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            x = func_0212b770(b1);
            if (func_ov065_02283630(n->unk_18, data_ov065_0228da1c, b2, 0x1f) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            if (func_ov065_02283630(n->unk_18, data_ov065_0228da24, b3, 0x21) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            func_021130d0(b4, data_ov065_0228da2c, c->unk_177, c->unk_1a0, x);
            func_ov065_0227899c(b4, func_021277d4(b4), b5);
            if (func_0212a190(b3, b5) != 0) {
                func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da34);
                func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da04);
                n->unk_00 = 0x6a;
                return 0;
            }
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da3c);
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da04);
            n->unk_00 = 0x69;
            n->unk_0c = x;
        } else {
            n->unk_00 = 0x6a;
            return 0;
        }
        n->unk_20 = 0;
    }
    return 0;
}

s32 func_ov065_02281530(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 out;
    s32 len;
    s32 flag;
    Ent0228 *e;
    s32 r;
    s32 keep;
    char *p;
    switch (n->unk_00) {
    case 0x65:
        break;
    case 0x66:
        r = func_ov065_02280d70(h, n);
        if (r != 0) {
            return r;
        }
        break;
    case 0x67:
        r = func_ov065_02283590(h, n->unk_08, &out);
        if (r != 0) {
            return r;
        }
        if (out == 4) {
            func_ov065_02283460(h, data_ov065_0228d928);
            return 3;
        } else if (out == 3) {
            keep = 1;
            if (func_ov065_022818bc(h, n->unk_0c, &e) == 0) {
                func_ov065_02283460(h, data_ov065_0228d928);
                return 3;
            }
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da0c);
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da14);
            func_ov065_0227dde8(h, &n->unk_28, c->unk_1a0);
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da1c);
            func_ov065_0227de10(h, &n->unk_28, c->unk_110);
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da24);
            func_ov065_0227de10(h, &n->unk_28, e->unk_18);
            func_ov065_0227de10(h, &n->unk_28, data_ov065_0228da04);
            {
                Node0228 *m = c->unk_434;
                while (m != NULL) {
                    if (m->unk_0c == n->unk_0c && m != n && m->unk_00 <= 0x67) {
                        keep = 0;
                    }
                    m = m->unk_3c;
                }
            }
            if (keep != 0) {
                func_ov065_02277ac8(e->unk_18);
                e->unk_18 = NULL;
                if (func_ov065_0228176c(e) != 0) {
                    func_ov065_02281880(h, e);
                }
            }
            n->unk_00 = 0x68;
        }
        break;
    case 0x68:
        r = func_ov065_0227db18(h, n->unk_08, &n->unk_18, &len, &flag, data_ov065_0228d9ec);
        if (r != 0) {
            return r;
        }
        p = func_02129f1c(n->unk_18, data_ov065_0228da04);
        if (p != NULL) {
            char *q;
            *p = 0;
            q = n->unk_18;
            if (func_0212a15c(q, data_ov065_0228da34, 7) == 0) {
                n->unk_14++;
                if (n->unk_14 > 1) {
                    func_ov065_02283460(h, data_ov065_0228da44);
                    return 3;
                }
                r = func_ov065_02280e7c(h, n);
                if (r != 0) {
                    return r;
                }
            } else if (func_0212a15c(q, data_ov065_0228da3c, 6) != 0) {
                func_ov065_02283460(h, data_ov065_0228da68);
                return 3;
            }
            n->unk_00 = 0x69;
            n->unk_20 = 0;
        }
        break;
    }
    if (n->unk_30 > 0) {
        r = func_ov065_0227da7c(h, n->unk_08, &n->unk_28, &flag, 1, data_ov065_0228d9ec);
        if (flag != 0 || r != 0) {
            n->unk_00 = 0x6a;
        }
    }
    return 0;
}

s32 func_ov065_0228176c(Ent0228 *e) {
    if (e != NULL && e->unk_0c == 0 && e->unk_08 == 0 && e->unk_18 == NULL && e->unk_10 == 0) {
        return 1;
    }
    return 0;
}

}

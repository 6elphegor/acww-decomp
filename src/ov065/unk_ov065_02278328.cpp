// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065_041: generic vector / hash table / base64 / md5 hex / PRNG (0x022782f4..0x02278c14)

typedef s32 (*Unk_ov065_02278384_Cmp)(void *, void *);
typedef s32 (*Unk_ov065_02278448_Cb)(void *, void *);
typedef void (*Unk_ov065_02278740_Dtor)(void *);
typedef s32 (*Unk_ov065_022787c4_Hash)(void *, s32);

struct Unk_ov065_022786bc_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    Unk_ov065_02278740_Dtor unk_10;
    u8 *unk_14;
};

struct Unk_ov065_02278928_Tbl {
    Unk_ov065_022786bc_Vec **unk_00;
    s32 unk_04;
    Unk_ov065_02278740_Dtor unk_08;
    Unk_ov065_022787c4_Hash unk_0c;
    Unk_ov065_02278384_Cmp unk_10;
};

struct Unk_ov065_02278328_Addr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    volatile s32 unk_04;
};

struct Unk_ov065_02278328_Host {
    u8 unk_00[0xc];
    s32 **unk_0c;
};

extern "C" {
extern u32 sGsSockLastError;
extern s32 sGsRandSeed;

s32 GsSock_SendTo(s32, void *, s32, s32, void *, s32);
s32 GsUtil_GetTimeMs(void);
Unk_ov065_02278328_Host *Sock_GetHostByName(s32);
void *GsUtil_Alloc(s32);
void *GsUtil_Realloc(void *, s32);
void GsUtil_Free(void *);
s32 Sock_InetAtoN(s32, u32 *);
s32 Sock_GetSockName(s32, void *);
s32 GsSock_CheckResult(s32, s32);
void WifiAp_HashReset(void *);
void WifiAp_HashSetSource(void *, void *, s32);
void WifiAp_HashGetDigest(void *, void *);
void func_02128acc(void *, s32, s32, Unk_ov065_02278384_Cmp);
void memmove(void *, void *, s32);
void memcpy(void *, void *, s32);
s32 OS_SPrintf(char *, char *, s32);
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u64);

s32 GsSock_InetAddr(s32);
void GsUtil_DigestToHex(u8 *, char *);
void *GsArray_At(Unk_ov065_022786bc_Vec *, s32);
s32 GsArray_Count(Unk_ov065_022786bc_Vec *);
void GsArray_CopyTo(Unk_ov065_022786bc_Vec *, void *, s32);
void GsArray_Grow(Unk_ov065_022786bc_Vec *);
void GsArray_DestroyElement(Unk_ov065_022786bc_Vec *, s32);
void GsArray_Free(Unk_ov065_022786bc_Vec *);
void GsArray_Append(Unk_ov065_022786bc_Vec *, void *);
void GsUtil_Base64EncodeBlock(char *, char *, s32);
s32 GsUtil_Rand(void);
void GsArray_DeleteAt(Unk_ov065_022786bc_Vec *, s32);
void GsArray_RemoveAt(Unk_ov065_022786bc_Vec *, s32);
void GsArray_InsertAt(Unk_ov065_022786bc_Vec *, void *, s32);
u32 GsUtil_ParkMillerNext(u32);
}

extern "C" {
void GsUtil_DigestToHex(u8 *digest, char *out);
void GsUtil_Md5Hex(void *a, s32 b, char *out);
Unk_ov065_02278928_Tbl *GsHash_New(s32 esize, s32 n, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp, Unk_ov065_02278740_Dtor dtor);
Unk_ov065_02278928_Tbl *GsHash_NewEx(s32 esize, s32 n, s32 cap, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp, Unk_ov065_02278740_Dtor dtor);
void GsHash_Free(Unk_ov065_02278928_Tbl *t);
s32 GsHash_Count(Unk_ov065_02278928_Tbl *t);
void GsHash_Insert(Unk_ov065_02278928_Tbl *t, void *key);
s32 GsHash_Remove(Unk_ov065_02278928_Tbl *t, void *key);
void *GsHash_Find(Unk_ov065_02278928_Tbl *t, void *key);
void GsHash_ForEach(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg);
void *GsHash_FindIf(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg);
void GsArray_DestroyElement(Unk_ov065_022786bc_Vec *v, s32 i);
void GsArray_Grow(Unk_ov065_022786bc_Vec *v);
void GsArray_CopyTo(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
Unk_ov065_022786bc_Vec *GsArray_New(s32 size, s32 cap, Unk_ov065_02278740_Dtor dtor);
void GsArray_Free(Unk_ov065_022786bc_Vec *v);
s32 GsArray_Count(Unk_ov065_022786bc_Vec *v);
void *GsArray_At(Unk_ov065_022786bc_Vec *v, s32 i);
void GsArray_Append(Unk_ov065_022786bc_Vec *v, void *x);
void GsArray_InsertAt(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
void GsArray_InsertSorted(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp);
void GsArray_RemoveAt(Unk_ov065_022786bc_Vec *v, s32 i);
void GsArray_DeleteAt(Unk_ov065_022786bc_Vec *v, s32 i);
void GsArray_ReplaceAt(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
void GsArray_Sort(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278384_Cmp cmp);
s32 GsArray_Search(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp, s32 start, s32 sorted);
void GsArray_ForEachBackward(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg);
void *GsArray_FindBackward(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg);
void GsArray_Clear(Unk_ov065_022786bc_Vec *v);
u8 *GsUtil_LinearSearch(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp);
u8 *GsUtil_BinarySearch(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp, s32 *found);
s32 GsSock_ResolveAddress(s32 a, u32 port, Unk_ov065_02278328_Addr *out);
}

extern "C" {

void GsUtil_DigestToHex(u8 *digest, char *out) {
    u32 i = 0;
    s32 off = 0;
    do {
        OS_SPrintf(out + off, "%02x", digest[i]);
        off += 2;
        i++;
    } while (i < 16);
}

void GsUtil_Md5Hex(void *a, s32 b, char *out) {
    u8 digest[16];
    u8 ctx[0x58];
    WifiAp_HashReset(ctx);
    WifiAp_HashSetSource(ctx, a, b);
    WifiAp_HashGetDigest(digest, ctx);
    GsUtil_DigestToHex(digest, out);
}

Unk_ov065_02278928_Tbl *GsHash_New(s32 esize, s32 n, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp,
                                            Unk_ov065_02278740_Dtor dtor) {
    return GsHash_NewEx(esize, n, 4, hash, cmp, dtor);
}

Unk_ov065_02278928_Tbl *GsHash_NewEx(s32 esize, s32 n, s32 cap, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp,
                                            Unk_ov065_02278740_Dtor dtor) {
    Unk_ov065_02278928_Tbl *t = (Unk_ov065_02278928_Tbl *)GsUtil_Alloc(0x14);
    s32 i;
    t->unk_00 = (Unk_ov065_022786bc_Vec **)GsUtil_Alloc(n * 4);
    i = 0;
    if (n > 0) {
        s32 off = i;
        do {
            Unk_ov065_022786bc_Vec *v = GsArray_New(esize, cap, dtor);
            *(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off) = v;
            off += 4;
            i++;
        } while (i < n);
    }
    t->unk_04 = n;
    t->unk_08 = dtor;
    t->unk_10 = cmp;
    t->unk_0c = hash;
    return t;
}

void GsHash_Free(Unk_ov065_02278928_Tbl *t) {
    if (t != NULL) {
        s32 i = 0;
        if (t->unk_04 > 0) {
            s32 off = i;
            do {
                GsArray_Free(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off));
                off += 4;
                i++;
            } while (i < t->unk_04);
        }
        GsUtil_Free(t->unk_00);
        GsUtil_Free(t);
    }
}

s32 GsHash_Count(Unk_ov065_02278928_Tbl *t) {
    s32 sum = 0;
    s32 i;
    if (t == NULL) {
        return sum;
    }
    i = sum;
    if (t->unk_04 > 0) {
        s32 off = sum;
        do {
            sum += GsArray_Count(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off));
            off += 4;
            i++;
        } while (i < t->unk_04);
    }
    return sum;
}

void GsHash_Insert(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t != NULL) {
        h = t->unk_0c(key, t->unk_04) * 4;
        r = GsArray_Search(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
        if (r == -1) {
            GsArray_Append(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key);
            return;
        }
        GsArray_ReplaceAt(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, r);
    }
}

s32 GsHash_Remove(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return 0;
    }
    h = t->unk_0c(key, t->unk_04) * 4;
    r = GsArray_Search(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
    if (r != -1) {
        GsArray_DeleteAt(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), r);
        return 1;
    }
    return 0;
}

void *GsHash_Find(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return NULL;
    }
    h = t->unk_0c(key, t->unk_04) * 4;
    r = GsArray_Search(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
    if (r != -1) {
        return GsArray_At(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), r);
    }
    return NULL;
}

void GsHash_ForEach(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = 0; i < t->unk_04; i++) {
        GsArray_ForEachBackward(t->unk_00[i], cb, arg);
    }
}

void *GsHash_FindIf(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = 0; i < t->unk_04; i++) {
        void *r = GsArray_FindBackward(t->unk_00[i], cb, arg);
        if (r != NULL) {
            return r;
        }
    }
    return NULL;
}

void GsArray_DestroyElement(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (v->unk_10 != NULL) {
        v->unk_10(GsArray_At(v, i));
    }
}

void GsArray_Grow(Unk_ov065_022786bc_Vec *v) {
    v->unk_04 = v->unk_04 + v->unk_0c;
    v->unk_14 = (u8 *)GsUtil_Realloc(v->unk_14, v->unk_04 * v->unk_08);
}

void GsArray_CopyTo(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    memcpy(GsArray_At(v, i), x, v->unk_08);
}

Unk_ov065_022786bc_Vec *GsArray_New(s32 size, s32 cap, Unk_ov065_02278740_Dtor dtor) {
    Unk_ov065_022786bc_Vec *v = (Unk_ov065_022786bc_Vec *)GsUtil_Alloc(0x18);
    if (cap == 0) {
        cap = 8;
    }
    v->unk_00 = 0;
    v->unk_04 = cap;
    v->unk_08 = size;
    v->unk_0c = cap;
    v->unk_10 = dtor;
    if (v->unk_04 != 0) {
        v->unk_14 = (u8 *)GsUtil_Alloc(v->unk_04 * v->unk_08);
    } else {
        v->unk_14 = NULL;
    }
    return v;
}

void GsArray_Free(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = 0; i < v->unk_00; i++) {
        GsArray_DestroyElement(v, i);
    }
    GsUtil_Free(v->unk_14);
    GsUtil_Free(v);
}

s32 GsArray_Count(Unk_ov065_022786bc_Vec *v) {
    return v->unk_00;
}

void *GsArray_At(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (i < 0 || i >= v->unk_00) {
        return NULL;
    }
    return v->unk_14 + v->unk_08 * i;
}

void GsArray_Append(Unk_ov065_022786bc_Vec *v, void *x) {
    if (v != NULL) {
        GsArray_InsertAt(v, x, v->unk_00);
    }
}

void GsArray_InsertAt(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    s32 last;
    if (v->unk_00 == v->unk_04) {
        GsArray_Grow(v);
    }
    v->unk_00 = v->unk_00 + 1;
    last = v->unk_00 - 1;
    if (i < last) {
        void *dst = GsArray_At(v, i + 1);
        void *src = GsArray_At(v, i);
        memmove(dst, src, v->unk_08 * (last - i));
    }
    GsArray_CopyTo(v, x, i);
}

void GsArray_InsertSorted(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp) {
    s32 found;
    u8 *r = GsUtil_BinarySearch(key, v->unk_14, v->unk_00, v->unk_08, cmp, &found);
    GsArray_InsertAt(v, key, (s32)(r - v->unk_14) / v->unk_08);
}

void GsArray_RemoveAt(Unk_ov065_022786bc_Vec *v, s32 i) {
    s32 last = v->unk_00 - 1;
    if (i < last) {
        void *a = GsArray_At(v, i);
        void *b = GsArray_At(v, i + 1);
        memmove(a, b, v->unk_08 * (last - i));
    }
    v->unk_00 = v->unk_00 - 1;
}

void GsArray_DeleteAt(Unk_ov065_022786bc_Vec *v, s32 i) {
    GsArray_DestroyElement(v, i);
    GsArray_RemoveAt(v, i);
}

void GsArray_ReplaceAt(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    GsArray_DestroyElement(v, i);
    GsArray_CopyTo(v, x, i);
}

void GsArray_Sort(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278384_Cmp cmp) {
    func_02128acc(v->unk_14, v->unk_00, v->unk_08, cmp);
}

s32 GsArray_Search(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp, s32 start, s32 sorted) {
    s32 found = 1;
    s32 n;
    u8 *r;
    if (v == NULL || (n = v->unk_00) == 0) {
        return -1;
    }
    if (sorted != 0) {
        r = GsUtil_BinarySearch(key, (u8 *)GsArray_At(v, start), n - start, v->unk_08, cmp, &found);
    } else {
        r = GsUtil_LinearSearch(key, (u8 *)GsArray_At(v, start), n - start, v->unk_08, cmp);
    }
    if (r != NULL && found != 0) {
        return (s32)(r - v->unk_14) / v->unk_08;
    }
    return -1;
}

void GsArray_ForEachBackward(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = v->unk_00 - 1; i >= 0; i--) {
        cb(GsArray_At(v, i), arg);
    }
}

void *GsArray_FindBackward(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = v->unk_00 - 1; i >= 0; i--) {
        void *p = GsArray_At(v, i);
        if (cb(p, arg) == 0) {
            return p;
        }
    }
    return NULL;
}

void GsArray_Clear(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = GsArray_Count(v) - 1; i >= 0; i--) {
        GsArray_DeleteAt(v, i);
    }
}

u8 *GsUtil_LinearSearch(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp) {
    s32 i = 0;
    s32 off;
    if (n > 0) {
        off = i;
        do {
            if (cmp(key, base + off) == 0) {
                return base + size * i;
            }
            off += size;
            i++;
        } while (i < n);
    }
    return NULL;
}

u8 *GsUtil_BinarySearch(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp, s32 *found) {
    s32 lo = 0;
    s32 hi = n - 1;
    *found = 0;
    while (lo <= hi) {
        s32 mid = (lo + hi) >> 1;
        s32 c = cmp(base + mid * size, key);
        if (c == 0) {
            *found = 1;
        }
        if (c < 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return base + lo * size;
}

s32 GsSock_ResolveAddress(s32 a, u32 port, Unk_ov065_02278328_Addr *out) {
    s32 p;
    out->unk_01 = 2;
    p = (u16)port;
    out->unk_02 = (u16)(((p >> 8) & 0xff) | ((p << 8) & 0xff00));
    out->unk_04 = GsSock_InetAddr(a);
    if (out->unk_04 == -1) {
        Unk_ov065_02278328_Host *h = Sock_GetHostByName(a);
        if (h == NULL) {
            return 0;
        }
        out->unk_04 = **h->unk_0c;
    }
    return 1;
}

}

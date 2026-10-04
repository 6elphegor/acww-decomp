// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/darray.h"

// ov065_041: generic vector / hash table / base64 / md5 hex / PRNG (0x022782f4..0x02278c14)

typedef s32 (*ArrayCompareFn)(void *, void *);
typedef s32 (*GsArrayMapFn)(void *, void *);
typedef void (*ArrayElementFreeFn)(void *);
typedef s32 (*TableHashFn)(void *, s32);


struct HashImplementation {
    DArrayImplementation **buckets;
    s32 nbuckets;
    ArrayElementFreeFn freefn;
    TableHashFn hashfn;
    ArrayCompareFn compfn;
};

struct Unk_ov065_02278328_Addr {
    u8 unk_00;
    u8 family;
    u16 port;
    volatile s32 addr;
};

struct Unk_ov065_02278328_Host {
    u8 unk_00[0xc];
    s32 **addrList;
};

extern "C" {
extern u32 GSINitroErrno;
extern s32 randomnum;

s32 sendto(s32, void *, s32, s32, void *, s32);
s32 current_time(void);
Unk_ov065_02278328_Host *Sock_GetHostByName(s32);
void *GsUtil_Alloc(s32);
void *GsUtil_Realloc(void *, s32);
void GsUtil_Free(void *);
s32 Sock_InetAtoN(s32, u32 *);
s32 Sock_GetSockName(s32, void *);
s32 CheckRcode(s32, s32);
void WifiAp_HashReset(void *);
void WifiAp_HashSetSource(void *, void *, s32);
void WifiAp_HashGetDigest(void *, void *);
void qsort(void *, s32, s32, ArrayCompareFn);
void memmove(void *, void *, s32);
void memcpy(void *, void *, s32);
s32 OS_SPrintf(char *, char *, s32);
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u64);

s32 inet_addr(s32);
void MD5Print(u8 *, char *);
void *ArrayNth(DArrayImplementation *, s32);
s32 ArrayLength(DArrayImplementation *);
void SetElement(DArrayImplementation *, void *, s32);
void ArrayGrow(DArrayImplementation *);
void FreeElement(DArrayImplementation *, s32);
void ArrayFree(DArrayImplementation *);
void ArrayAppend(DArrayImplementation *, void *);
void TripToQuart(char *, char *, s32);
s32 longrand(void);
void ArrayDeleteAt(DArrayImplementation *, s32);
void ArrayRemoveAt(DArrayImplementation *, s32);
void ArrayInsertAt(DArrayImplementation *, void *, s32);
u32 nextlongrand(u32);
}

extern "C" {
void MD5Print(u8 *digest, char *out);
void MD5Digest(void *a, s32 b, char *out);
HashImplementation *TableNew(s32 esize, s32 n, TableHashFn hash, ArrayCompareFn cmp, ArrayElementFreeFn dtor);
HashImplementation *TableNew2(s32 esize, s32 n, s32 cap, TableHashFn hash, ArrayCompareFn cmp, ArrayElementFreeFn dtor);
void TableFree(HashImplementation *t);
s32 TableCount(HashImplementation *t);
void TableEnter(HashImplementation *t, void *key);
s32 TableRemove(HashImplementation *t, void *key);
void *TableLookup(HashImplementation *t, void *key);
void TableMapSafe(HashImplementation *t, GsArrayMapFn cb, void *arg);
void *TableMapSafe2(HashImplementation *t, GsArrayMapFn cb, void *arg);
void FreeElement(DArrayImplementation *v, s32 i);
void ArrayGrow(DArrayImplementation *v);
void SetElement(DArrayImplementation *v, void *x, s32 i);
DArrayImplementation *ArrayNew(s32 size, s32 cap, ArrayElementFreeFn dtor);
void ArrayFree(DArrayImplementation *v);
s32 ArrayLength(DArrayImplementation *v);
void *ArrayNth(DArrayImplementation *v, s32 i);
void ArrayAppend(DArrayImplementation *v, void *x);
void ArrayInsertAt(DArrayImplementation *v, void *x, s32 i);
void ArrayInsertSorted(DArrayImplementation *v, void *key, ArrayCompareFn cmp);
void ArrayRemoveAt(DArrayImplementation *v, s32 i);
void ArrayDeleteAt(DArrayImplementation *v, s32 i);
void ArrayReplaceAt(DArrayImplementation *v, void *x, s32 i);
void ArraySort(DArrayImplementation *v, ArrayCompareFn cmp);
s32 ArraySearch(DArrayImplementation *v, void *key, ArrayCompareFn cmp, s32 start, s32 sorted);
void ArrayMapBackwards(DArrayImplementation *v, GsArrayMapFn cb, void *arg);
void *ArrayMapBackwards2(DArrayImplementation *v, GsArrayMapFn cb, void *arg);
void ArrayClear(DArrayImplementation *v);
u8 *mylsearch(void *key, u8 *base, s32 n, s32 size, ArrayCompareFn cmp);
u8 *mybsearch(void *key, u8 *base, s32 n, s32 size, ArrayCompareFn cmp, s32 *found);
s32 get_sockaddrin(s32 a, u32 port, Unk_ov065_02278328_Addr *out);
}

extern "C" {

void MD5Print(u8 *digest, char *out) {
    u32 i = 0;
    s32 off = 0;
    do {
        OS_SPrintf(out + off, "%02x", digest[i]);
        off += 2;
        i++;
    } while (i < 16);
}

void MD5Digest(void *a, s32 b, char *out) {
    u8 digest[16];
    u8 ctx[0x58];
    WifiAp_HashReset(ctx);
    WifiAp_HashSetSource(ctx, a, b);
    WifiAp_HashGetDigest(digest, ctx);
    MD5Print(digest, out);
}

HashImplementation *TableNew(s32 esize, s32 n, TableHashFn hash, ArrayCompareFn cmp,
                                            ArrayElementFreeFn dtor) {
    return TableNew2(esize, n, 4, hash, cmp, dtor);
}

HashImplementation *TableNew2(s32 esize, s32 n, s32 cap, TableHashFn hash, ArrayCompareFn cmp,
                                            ArrayElementFreeFn dtor) {
    HashImplementation *t = (HashImplementation *)GsUtil_Alloc(0x14);
    s32 i;
    t->buckets = (DArrayImplementation **)GsUtil_Alloc(n * 4);
    i = 0;
    if (n > 0) {
        s32 off = i;
        do {
            DArrayImplementation *v = ArrayNew(esize, cap, dtor);
            *(DArrayImplementation **)((u8 *)t->buckets + off) = v;
            off += 4;
            i++;
        } while (i < n);
    }
    t->nbuckets = n;
    t->freefn = dtor;
    t->compfn = cmp;
    t->hashfn = hash;
    return t;
}

void TableFree(HashImplementation *t) {
    if (t != NULL) {
        s32 i = 0;
        if (t->nbuckets > 0) {
            s32 off = i;
            do {
                ArrayFree(*(DArrayImplementation **)((u8 *)t->buckets + off));
                off += 4;
                i++;
            } while (i < t->nbuckets);
        }
        GsUtil_Free(t->buckets);
        GsUtil_Free(t);
    }
}

s32 TableCount(HashImplementation *t) {
    s32 sum = 0;
    s32 i;
    if (t == NULL) {
        return sum;
    }
    i = sum;
    if (t->nbuckets > 0) {
        s32 off = sum;
        do {
            sum += ArrayLength(*(DArrayImplementation **)((u8 *)t->buckets + off));
            off += 4;
            i++;
        } while (i < t->nbuckets);
    }
    return sum;
}

void TableEnter(HashImplementation *t, void *key) {
    s32 h;
    s32 r;
    if (t != NULL) {
        h = t->hashfn(key, t->nbuckets) * 4;
        r = ArraySearch(*(DArrayImplementation **)((u8 *)t->buckets + h), key, t->compfn, 0, 0);
        if (r == -1) {
            ArrayAppend(*(DArrayImplementation **)((u8 *)t->buckets + h), key);
            return;
        }
        ArrayReplaceAt(*(DArrayImplementation **)((u8 *)t->buckets + h), key, r);
    }
}

s32 TableRemove(HashImplementation *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return 0;
    }
    h = t->hashfn(key, t->nbuckets) * 4;
    r = ArraySearch(*(DArrayImplementation **)((u8 *)t->buckets + h), key, t->compfn, 0, 0);
    if (r != -1) {
        ArrayDeleteAt(*(DArrayImplementation **)((u8 *)t->buckets + h), r);
        return 1;
    }
    return 0;
}

void *TableLookup(HashImplementation *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return NULL;
    }
    h = t->hashfn(key, t->nbuckets) * 4;
    r = ArraySearch(*(DArrayImplementation **)((u8 *)t->buckets + h), key, t->compfn, 0, 0);
    if (r != -1) {
        return ArrayNth(*(DArrayImplementation **)((u8 *)t->buckets + h), r);
    }
    return NULL;
}

void TableMapSafe(HashImplementation *t, GsArrayMapFn cb, void *arg) {
    s32 i;
    for (i = 0; i < t->nbuckets; i++) {
        ArrayMapBackwards(t->buckets[i], cb, arg);
    }
}

void *TableMapSafe2(HashImplementation *t, GsArrayMapFn cb, void *arg) {
    s32 i;
    for (i = 0; i < t->nbuckets; i++) {
        void *r = ArrayMapBackwards2(t->buckets[i], cb, arg);
        if (r != NULL) {
            return r;
        }
    }
    return NULL;
}

void FreeElement(DArrayImplementation *v, s32 i) {
    if (v->elemfreefn != NULL) {
        v->elemfreefn(ArrayNth(v, i));
    }
}

void ArrayGrow(DArrayImplementation *v) {
    v->capacity = v->capacity + v->growby;
    v->list = (u8 *)GsUtil_Realloc(v->list, v->capacity * v->elemsize);
}

void SetElement(DArrayImplementation *v, void *x, s32 i) {
    memcpy(ArrayNth(v, i), x, v->elemsize);
}

DArrayImplementation *ArrayNew(s32 size, s32 cap, ArrayElementFreeFn dtor) {
    DArrayImplementation *v = (DArrayImplementation *)GsUtil_Alloc(0x18);
    if (cap == 0) {
        cap = 8;
    }
    v->count = 0;
    v->capacity = cap;
    v->elemsize = size;
    v->growby = cap;
    v->elemfreefn = dtor;
    if (v->capacity != 0) {
        v->list = (u8 *)GsUtil_Alloc(v->capacity * v->elemsize);
    } else {
        v->list = NULL;
    }
    return v;
}

void ArrayFree(DArrayImplementation *v) {
    s32 i;
    for (i = 0; i < v->count; i++) {
        FreeElement(v, i);
    }
    GsUtil_Free(v->list);
    GsUtil_Free(v);
}

s32 ArrayLength(DArrayImplementation *v) {
    return v->count;
}

void *ArrayNth(DArrayImplementation *v, s32 i) {
    if (i < 0 || i >= v->count) {
        return NULL;
    }
    return v->list + v->elemsize * i;
}

void ArrayAppend(DArrayImplementation *v, void *x) {
    if (v != NULL) {
        ArrayInsertAt(v, x, v->count);
    }
}

void ArrayInsertAt(DArrayImplementation *v, void *x, s32 i) {
    s32 last;
    if (v->count == v->capacity) {
        ArrayGrow(v);
    }
    v->count = v->count + 1;
    last = v->count - 1;
    if (i < last) {
        void *dst = ArrayNth(v, i + 1);
        void *src = ArrayNth(v, i);
        memmove(dst, src, v->elemsize * (last - i));
    }
    SetElement(v, x, i);
}

void ArrayInsertSorted(DArrayImplementation *v, void *key, ArrayCompareFn cmp) {
    s32 found;
    u8 *r = mybsearch(key, v->list, v->count, v->elemsize, cmp, &found);
    ArrayInsertAt(v, key, (s32)(r - v->list) / v->elemsize);
}

void ArrayRemoveAt(DArrayImplementation *v, s32 i) {
    s32 last = v->count - 1;
    if (i < last) {
        void *a = ArrayNth(v, i);
        void *b = ArrayNth(v, i + 1);
        memmove(a, b, v->elemsize * (last - i));
    }
    v->count = v->count - 1;
}

void ArrayDeleteAt(DArrayImplementation *v, s32 i) {
    FreeElement(v, i);
    ArrayRemoveAt(v, i);
}

void ArrayReplaceAt(DArrayImplementation *v, void *x, s32 i) {
    FreeElement(v, i);
    SetElement(v, x, i);
}

void ArraySort(DArrayImplementation *v, ArrayCompareFn cmp) {
    qsort(v->list, v->count, v->elemsize, cmp);
}

s32 ArraySearch(DArrayImplementation *v, void *key, ArrayCompareFn cmp, s32 start, s32 sorted) {
    s32 found = 1;
    s32 n;
    u8 *r;
    if (v == NULL || (n = v->count) == 0) {
        return -1;
    }
    if (sorted != 0) {
        r = mybsearch(key, (u8 *)ArrayNth(v, start), n - start, v->elemsize, cmp, &found);
    } else {
        r = mylsearch(key, (u8 *)ArrayNth(v, start), n - start, v->elemsize, cmp);
    }
    if (r != NULL && found != 0) {
        return (s32)(r - v->list) / v->elemsize;
    }
    return -1;
}

void ArrayMapBackwards(DArrayImplementation *v, GsArrayMapFn cb, void *arg) {
    s32 i;
    for (i = v->count - 1; i >= 0; i--) {
        cb(ArrayNth(v, i), arg);
    }
}

void *ArrayMapBackwards2(DArrayImplementation *v, GsArrayMapFn cb, void *arg) {
    s32 i;
    for (i = v->count - 1; i >= 0; i--) {
        void *p = ArrayNth(v, i);
        if (cb(p, arg) == 0) {
            return p;
        }
    }
    return NULL;
}

void ArrayClear(DArrayImplementation *v) {
    s32 i;
    for (i = ArrayLength(v) - 1; i >= 0; i--) {
        ArrayDeleteAt(v, i);
    }
}

u8 *mylsearch(void *key, u8 *base, s32 n, s32 size, ArrayCompareFn cmp) {
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

u8 *mybsearch(void *key, u8 *base, s32 n, s32 size, ArrayCompareFn cmp, s32 *found) {
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

s32 get_sockaddrin(s32 a, u32 port, Unk_ov065_02278328_Addr *out) {
    s32 p;
    out->family = 2;
    p = (u16)port;
    out->port = (u16)(((p >> 8) & 0xff) | ((p << 8) & 0xff00));
    out->addr = inet_addr(a);
    if (out->addr == -1) {
        Unk_ov065_02278328_Host *h = Sock_GetHostByName(a);
        if (h == NULL) {
            return 0;
        }
        out->addr = **h->addrList;
    }
    return 1;
}

}

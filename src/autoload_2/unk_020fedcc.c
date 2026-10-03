// mwcc-flags: -O4,p
// D001: autoload_2 0x020fe848-0x02100234, THUMB code (the build's default -thumb is kept, no -nothumb), mwcc 1.2/base, C, -O4,p.
// Library: NVRAM Wi-Fi settings / WFC-ID support (PXI tag 4 NVRAM access, CRC16 pages, WFC-ID generation) followed by
// the DWC account code (DWCUserData / DWCFriendData style records, CRC7 key check, base-32 friend key text).
// Several functions rely on the mwcc quirk that an inline helper called with constants keeps its parameters as
// variables (see clr / fld below), and on stack zero temporaries the compiler creates itself.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef unsigned long long u64;
typedef long long s64;

typedef struct { u32 w0, w1, w2; } FD;               // 12-byte friend/id record
typedef struct {
    u32 size;        // 0x00
    FD id;           // 0x04
    FD fr;           // 0x10
    u32 v1c;         // 0x1c
    u32 flags;       // 0x20
    u32 key;         // 0x24
    u32 pad28[5];    // 0x28
    u32 crc;         // 0x3c
} UserData;
typedef struct { u64 a; u64 b; u32 valid; u32 pad; } Rec;
typedef struct { u64 a; u64 b; u16 f16; u16 f18; } S;
typedef struct { u32 year, month, day; s32 week; } Date;
typedef struct { u32 hour, minute, second; } Time;

extern void MI_CpuFill8(void *dst, u32 val, u32 len);
extern u32 MATHi_CRC32InitTableRev(void *table, u32 poly);
extern u32 MATH_CalcCRC32(void *table, void *data, u32 len);
extern u64 OS_GetTick(void);
extern u64 func_02133100(u64 a, u64 b);
extern void MATHi_CRC8InitTable(void *table, u32 poly);
extern s32 MATH_CalcCRC8(void *table, void *data, u32 len);
extern void func_02000b44(void *p);
extern s32 OS_SNPrintf(char *buf, u32 size, const char *fmt, ...);

extern const u32 data_0213bba8[];
extern const u8 data_02135ca8[];
extern const u8 data_02135ca0[];
extern u8 data_021f5c62[];
extern u8 data_021f5c5c[], data_021f5c61[], data_021f5c66[], data_021f5c68[];
extern u32 data_021f5c58;
extern u16 data_021f5c50;
extern u32 data_021f5c54;
extern u8 data_021f5c80[];
extern const u8 data_02135c9c[];
extern s32 memcmp(const void *a, const void *b, u32 n);
extern s32 PXI_IsCallbackReady(u32 tag, u32 x);
extern void PXI_SetFifoRecvCallback(u32 tag, void *cb);
extern void DC_StoreRange(void *p, u32 n);
extern void DC_InvalidateRange(void *p, u32 n);
extern void MIi_CpuClear16(u16 v, void *dst, u32 n);
extern u16 MATH_CalcCRC16(void *table, void *data, u32 len);
extern void MATHi_CRC16InitTableRev(void *table, u32 poly);
extern void WaitByLoop(u32 n);
extern s32 PXI_SendWordByFifo(u32 tag, u32 data, s32 err);
extern void Fatal_Trap(void);
extern void MI_CpuCopy8(const void *src, void *dst, u32 len);
extern const char data_0213bbdc[];
extern const char data_0213bbec[];

u32 func_02100144(FD *p);
u32 func_02100130(FD *p);
BOOL func_021001b8(u32 *p, u32 v, u32 shift, u32 mask);
void func_021000dc(FD *p, u32 v);
void func_021000b8(FD *p, u32 v);
u64 func_021001a0(FD *p);
u64 func_0210018c(FD *p);
u32 func_02100188(FD *p);
u32 func_0210019c(FD *p);
void func_02100154(FD *p, u32 v);
void func_02100158(FD *p, u32 a, u32 b);
void func_02100160(FD *p, u32 v);
void func_02100164(FD *p, u64 v);
BOOL func_02100018(u64 v, u32 key);
u64 func_02100060(u32 lo, u32 key);
BOOL func_020ff554(void);
u16 func_020fe8d4(u32 tag, u32 data, u32 err);
BOOL func_020fe900(void);
BOOL func_020fe948(void *ref, u32 addr, u32 size, void *tmp);
void func_020fe984(u32 addr, u16 size, void *src);
BOOL func_020fe9d8(u32 addr, u32 size, void *dst);
u32 func_020fea34(u32 cmd, u32 a1, u16 a2, u32 a3);
BOOL func_020fedcc(u8 *p);
BOOL func_020fedec(u8 *a, u8 *b);
BOOL func_020fee44(u8 *p);
void func_020fee5c(u32 n, u8 *out);
u8 func_020fee84(u8 *p);
void func_020feeb4(u8 *p);
BOOL func_020feec4(u8 *buf);
BOOL func_020fef40(u8 *buf, u32 *flags, u8 *tmp);
BOOL func_020fefb0(u8 *dst);
BOOL func_020fefdc(u16 *p);
BOOL func_020ff154(u8 *dst);
void func_020ff180(u8 *buf, u32 idx);
BOOL func_020ff1ac(u8 *buf);
BOOL func_020ff210(u8 *page);
s32 func_020ff2e4(u8 *p);
u8 *func_020fe850(S *p);
s32 func_020ff2e4(u8 *p);
BOOL func_020ff734(u32 v);
BOOL func_020ff6f4(S *p, u32 v);
extern void RTC_Init(void);
extern s32 RTC_GetDate(Date *d);
extern s32 RTC_GetTime(Time *t);
extern s32 OS_IsTickAvailable(void);
extern void OS_GetMacAddress(u8 *mac);
void func_020ff0bc(S *out);
BOOL func_020ff014(S *p, u8 *buf);
u64 func_020ff8c8(u32 a, u32 b, u32 c, u32 d);
s64 func_020ff9f0(Date *d, Time *t);
s32 func_020ffa38(Time *t);
s32 func_020ffa4c(Date *d);
u32 func_020ffffc(u64 v, u32 key);
void func_020fffac(u64 v, s32 nbits, char *out);
void func_020fff48(FD *fd, u32 gamecode, char *out);
void func_020ffe84(FD *p);
void func_020ff588(Rec *out);
BOOL func_020ff770(S *p);
BOOL func_020ffdfc(UserData *p);
BOOL func_020ffe08(FD *p);
void func_020ffeec(UserData *p, u32 key);
BOOL func_020ffde0(FD *p);

static inline u32 clr(u32 v, u32 m) { return v & ~m; }
static inline u64 fld(u64 v, u64 mask, s32 shift) { return (v & mask) << shift; }


































// ---------------------------------------------------------------- 0x020ffa38






























static inline u32 orr(u32 a, u32 b) { return a | b; }

// top level: load, validate and repair the Wi-Fi settings and WFC-ID; returns 0 ok, 1 repaired, 2 repaired+bad, 3 bad
u32 func_021001e0(u8 *p) {
    BOOL r4 = 0;
    s32 r6;
    func_02000b44((void *)0x02000b84);
    r6 = func_020ff2e4(p);
    if (func_020ff554()) {
        func_020ff734((u32)p);
        r4 = 1;
    }
    if (r6 < 0) {
        if (r4) {
            return 2;
        }
        return 3;
    }
    if (r4) {
        return 1;
    }
    return 0;
}

// set a bit field (value, shift, mask) in a word; 0 when the value does not fit
BOOL func_021001b8(u32 *p, u32 v, u32 shift, u32 mask) {
    if (v & ~mask) {
        return 0;
    }
    *p = (*p & ~(mask << shift)) | (v << shift);
    return 1;
}

// friend record: get the 43 bit value
u64 func_021001a0(FD *p) {
    return ((u64)(p->w0 & 0x7ff) << 32) | p->w1;
}

// friend record: get word 2
u32 func_0210019c(FD *p) {
    return p->w2;
}

// friend record: get words 1,2 as 64 bit
u64 func_0210018c(FD *p) {
    return ((u64)p->w2 << 32) | p->w1;
}

// friend record: get word 1
u32 func_02100188(FD *p) {
    return p->w1;
}

// friend record: set the 43 bit value (word 1, low 11 bits of word 0)
void func_02100164(FD *p, u64 v) {
    func_021001b8((u32 *)p, (u32)(v >> 32), 0, 0x7ff);
    p->w1 = (u32)v;
}

// friend record: set word 2
void func_02100160(FD *p, u32 v) {
    p->w2 = v;
}

// friend record: set words 1 and 2
void func_02100158(FD *p, u32 a, u32 b) {
    p->w1 = a;
    p->w2 = b;
}

// friend record: set word 1
void func_02100154(FD *p, u32 v) {
    p->w1 = v;
}

// friend record: get the 21 bit attribute field
u32 func_02100144(FD *p) {
    return (p->w0 >> 11) & 0x1fffff;
}

// friend record: get 2 bit type
u32 func_02100130(FD *p) {
    return func_02100144(p) & 3;
}

// friend record: type 3 and flag bit 2 set
BOOL func_021000fc(FD *p) {
    if (func_02100130(p) == 3) {
        if ((func_02100144(p) & 4) == 4) {
            return 1;
        }
        return 0;
    }
    return 0;
}

// friend record: get type (thunk)
u32 func_021000f4(FD *p) {
    return func_02100130(p);
}

// friend record: set the 21 bit attribute field (bits 11..31 of word 0)
void func_021000dc(FD *p, u32 v) {
    func_021001b8((u32 *)p, v, 11, 0x1fffff);
}

// friend record: set the 2 bit type
void func_021000b8(FD *p, u32 v) {
    u32 t = func_02100144(p);
    t &= ~3;
    t |= v;
    func_021000dc(p, t);
}

// friend record: set the flag bit 2 of a type 3 record
void func_02100094(FD *p) {
    if (func_02100130(p) == 3) {
        u32 v = func_02100144(p) | 4;
        func_021000dc(p, v);
    }
}

// attach the CRC7 (MATH_CalcCRC8 poly 7, 0x7f) of {key, game code} to a key
u64 func_02100060(u32 lo, u32 key) {
    u32 data[2];
    u8 table[256];
    u64 r;
    data[0] = lo;
    data[1] = key;
    MATHi_CRC8InitTable(table, 7);
    r = MATH_CalcCRC8(table, data, 8) & 0x7f;
    r <<= 32;
    r |= lo;
    return r;
}

// CRC7 check of a key using the user data's game code
BOOL func_02100050(UserData *p, u64 v) {
    return func_02100018(v, p->key);
}

// CRC7 check of a key against its stored checksum
BOOL func_02100018(u64 v, u32 key) {
    u32 data[2];
    u8 table[256];
    s64 c;
    data[0] = (u32)v;
    data[1] = key;
    MATHi_CRC8InitTable(table, 7);
    c = MATH_CalcCRC8(table, data, 8) & 0x7f;
    return c == (v >> 32);
}

// key low word if the CRC7 check passes, else 0
u32 func_020ffffc(u64 v, u32 key) {
    u32 r;
    if (func_02100018(v, key)) {
        r = clr((u32)v, 0);
    } else {
        r = 0;
    }
    return r;
}

// base-32 text ('0123456789abcdefghijklmnopqrstuv') of a 64 bit value, (nbits+4)/5 characters
void func_020fffac(u64 v, s32 nbits, char *out) {
    s32 i, n;
    const char *tbl;
    n = (nbits + 4) / 5;
    tbl = data_0213bbec;
    for (i = 0; i < n; i++) {
        *(out + n - 1 - i) = tbl[(u32)v & 0x1f];
        v >>= 5;
    }
    out[n] = 0;
}

// friend record + game code -> text '%s%c%c%c%c%s' (base-32 profile id, 4 char game code, base-32 key)
void func_020fff48(FD *fd, u32 gamecode, char *out) {
    char s1[20];
    char s2[24];
    func_020fffac(func_021001a0(fd), 43, s1);
    func_020fffac(func_0210019c(fd), 32, &s2[1]);
    OS_SNPrintf(out, 21, data_0213bbdc, s1, (u8)(gamecode >> 24), (u8)(gamecode >> 16), (u8)(gamecode >> 8),
                  (u8)gamecode, &s2[1]);
}

// create (zero and initialise) a 0x40 byte user data block with a game code (DWCUserData style)
void func_020ffeec(UserData *p, u32 key) {
    u32 table[256];
    MI_CpuFill8(p, 0, 0x40);
    p->size = 0x40;
    p->v1c = 0;
    p->key = key;
    func_020ffe84(&p->id);
    func_021000b8(&p->fr, 0);
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
    p->flags |= 1;
}

// create a new own id from OS_GetTick with an LCG (0x5d588b656c078965, 0x269ec3)
void func_020ffe84(FD *p) {
    u64 tick = OS_GetTick();
    Rec t;
    func_020ff588(&t);
    if (t.valid != 0) {
        func_02100164(p, t.a);
    } else {
        func_02100164(p, t.b);
    }
    func_02100160(p, (u32)((tick * 0x5d588b656c078965ULL + 0x269ec3) >> 32));
    func_021000b8(p, 1);
}

// friend record equals the device WFC-ID
BOOL func_020ffe24(FD *fd) {
    Rec t;
    func_020ff588(&t);
    if (t.valid != 0) {
        if (func_021001a0(fd) == t.a) {
            return 1;
        }
        return 0;
    } else {
        if (func_021001a0(fd) == t.b) {
            return 1;
        }
        return 0;
    }
}

// friend record is type 1
BOOL func_020ffe08(FD *p) {
    if (func_02100130(p) == 1) {
        return 1;
    }
    return 0;
}

// user data: friend record is type 1
BOOL func_020ffdfc(UserData *p) {
    return func_020ffe08(&p->fr);
}

// friend record type != 0
BOOL func_020ffde0(FD *p) {
    if (func_02100130(p)) {
        return 1;
    }
    return 0;
}

// thunk to func_020ffde0
BOOL func_020ffdd8(FD *p) {
    return func_020ffde0(p);
}

// thunk to func_020ffeec (create user data)
void func_020ffdd0(UserData *p, u32 key) {
    func_020ffeec(p, key);
}

// user data: friend record matches the device WFC-ID
BOOL func_020ffd78(UserData *p) {
    Rec t;
    if (func_02100130(&p->fr) == 0) {
        return 1;
    }
    func_020ff588(&t);
    if (t.valid == 0) {
        return 0;
    }
    if (func_021001a0(&p->fr) == t.a) {
        return 1;
    }
    return 0;
}

// user data: store a friend record and a key, recompute CRC32, set the valid flag
void func_020ffd30(UserData *p, FD *src, u32 v) {
    u32 table[256];
    p->fr = *src;
    p->v1c = v;
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
    p->flags |= 1;
}

// user data: valid flag set
BOOL func_020ffd20(UserData *p) {
    return (p->flags & 1) == 1;
}

// user data: clear the valid flag and recompute the CRC32 (0x3c bytes)
void func_020ffce8(UserData *p) {
    u32 table[256];
    p->flags &= ~1;
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
}

// friend record of type 2 -> 64 bit key, else 0
u64 func_020ffcc4(FD *fd) {
    if (func_02100130(fd) == 2) {
        return func_0210018c(fd);
    }
    return 0;
}

// friend record -> profile id (validates the key CRC7 for type 2, -1 for type 1)
u32 func_020ffc60(UserData *p, FD *fd) {
    u64 v;
    switch (func_02100130(fd)) {
    case 2:
        v = func_0210018c(fd);
        if (func_02100018(v, p->key)) {
            return func_020ffffc(v, p->key);
        }
        return 0;
    case 3:
        return func_02100188(fd);
    case 1:
        return ~0;
    default:
        return 0;
    }
}

// user data -> own key (low word) or 0
u64 func_020ffc40(UserData *p) {
    u64 r = 0;
    if (p->v1c != 0) {
        r = func_02100060(p->v1c, p->key);
    }
    return r;
}

// make a type 2 friend record from a friend key
void func_020ffc18(FD *fd, u32 a, u32 b) {
    MI_CpuFill8(fd, 0, 12);
    func_02100158(fd, a, b);
    func_021000b8(fd, 2);
}

// get the user's own friend record from the user data
void func_020ffbd0(UserData *p, FD *out) {
    MI_CpuFill8(out, 0, 12);
    if (func_020ffdfc(p)) {
        func_02100154(out, p->v1c);
        func_021000b8(out, 3);
        return;
    }
    *out = p->id;
}

// make a type 3 friend record from a profile id
void func_020ffba8(FD *fd, u32 v) {
    MI_CpuFill8(fd, 0, 12);
    func_02100154(fd, v);
    func_021000b8(fd, 3);
}

// friend record -> friend key string using the user's game code (DWC_Acc friend key text)
void func_020ffb98(UserData *p, FD *fd, char *out) {
    func_020fff48(fd, p->key, out);
}

// compare two friend records (type, then the matching fields)
BOOL func_020ffad0(FD *a, FD *b) {
    u32 t = func_02100130(a);
    if (t != func_02100130(b)) {
        return 0;
    }
    if (t == 3) {
        if (func_02100188(a) == func_02100188(b)) {
            return 1;
        }
        return 0;
    }
    if (t == 1) {
        if (func_021001a0(a) == func_021001a0(b) && func_0210019c(a) == func_0210019c(b)) {
            return 1;
        }
        return 0;
    }
    if (t == 2) {
        if (func_0210018c(a) == func_0210018c(b)) {
            return 1;
        }
        return 0;
    }
    return 0;
}

// is a leap year (year & 3 == 0)
BOOL func_020ffac0(u32 y) {
    if ((y & 3) == 0) {
        return 1;
    }
    return 0;
}

// RTC date -> days since 2000 (RTC_ConvertDateToDay style), -1 when invalid
s32 func_020ffa4c(Date *d) {
    u32 days;
    if (d->year >= 100 || d->month < 1 || d->month > 12 || d->day < 1 || d->day > 31 || d->week >= 7 ||
        d->month < 1 || d->month > 12) {
        return -1;
    }
    days = d->day - 1 + data_0213bba8[d->month];
    if (d->month >= 3) {
        if (func_020ffac0(d->year)) {
            days++;
        }
    }
    days += d->year * 365;
    days += (d->year + 3) >> 2;
    return days;
}

// RTC time -> seconds (RTC_ConvertTimeToSecond style)
s32 func_020ffa38(Time *t) {
    return t->second + (t->minute + t->hour * 60) * 60;
}

// RTC date + time -> seconds (RTC_ConvertDateTimeToSecond style), -1 when invalid
s64 func_020ff9f0(Date *d, Time *t) {
    s32 days;
    s32 secs;
    days = func_020ffa4c(d);
    if (days == -1) {
        return -1;
    }
    secs = func_020ffa38(t);
    return (s64)days * 86400 + secs;
}

// scramble the four ID fields into a 43 bit WFC-ID (xor 0xd6, nibble table, byte permutation, xor 0x67)
u64 func_020ff8c8(u32 a, u32 b, u32 c, u32 d) {
    union { u64 v; u8 b[8]; } x;
    u8 tmp[8];
    s32 i;

    x.v = fld(a, 0xffff, 27) | (fld(b, 0xffffff, 3) | (fld(d, 3, 0) | fld(c, 1, 2)));
    for (i = 0; i < 6; i++) {
        x.b[i] ^= 0xd6;
    }
    for (i = 0; i < 5; i++) {
        x.b[i] = (data_02135ca8[(x.b[i] >> 4) & 0xf] << 4) | data_02135ca8[x.b[i] & 0xf];
    }
    MI_CpuCopy8(x.b, tmp, 8);
    for (i = 0; i < 5; i++) {
        x.b[data_02135ca0[i]] = tmp[i];
    }
    x.b[7] = 0;
    x.b[6] = 0;
    x.b[5] &= 7;
    x.v <<= 1;
    x.b[0] |= (x.b[5] >> 3) & 1;
    for (i = 0; i < 6; i++) {
        x.b[i] ^= 0x67;
    }
    x.b[7] = 0;
    x.b[6] = 0;
    x.b[5] &= 7;
    return x.v;
}

// create a WFC-ID, variant that keeps / increments the serial
BOOL func_020ff770(S *p) {
    u8 mac[6];
    u32 x0, x4;
    Date date;
    Time time;
    s64 secs;
    u32 seed;
    func_020ff0bc(p);
    RTC_Init();
    if (RTC_GetDate(&date)) {
        return 0;
    }
    if (RTC_GetTime(&time)) {
        return 0;
    }
    secs = func_020ff9f0(&date, &time);
    seed = (u32)secs;
    if (secs < 0) {
        return 0;
    }
    if (OS_IsTickAvailable()) {
        seed += (u32)OS_GetTick; // original bug: the address of OS_GetTick, not its result
    }
    OS_GetMacAddress(mac);
    x0 = (u8)(((mac[0] << 16) | (mac[1] << 8) | mac[2]) != 0x9bf);
    x4 = mac[5];
    x4 |= (mac[3] << 16) | (mac[4] << 8);
    seed = seed * 0x5d588b65 + 0x269ec3;
    p->f16 = (u16)(((seed >> 16) * 1000) >> 16);
    p->a = 0;
    if (p->f18 == 0) {
        p->b = 0;
        while (p->b == 0) {
            seed = seed * 0x5d588b65 + 0x269ec3;
            while (seed == 0) {
                seed = seed * 0x5d588b65 + 0x269ec3;
            }
            p->f18 = (u16)seed;
            p->b = func_020ff8c8(p->f18, x4, x0, 0);
        }
    } else {
        p->b = 0;
        while (p->b == 0) {
            p->f18++;
            p->b = func_020ff8c8(p->f18, x4, x0, 0);
        }
    }
    return 1;
}

// create a WFC-ID (variant) and write it
BOOL func_020ff734(u32 v) {
    S t;
    if (!func_020ff770(&t)) {
        return 0;
    }
    if (func_020ff014(&t, (u8 *)v)) {
        return 1;
    }
    return 0;
}

// rotate the WFC-ID records and write them
BOOL func_020ff6f4(S *p, u32 v) {
    S t;
    func_020ff0bc(&t);
    p->a = p->b;
    p->b = t.b;
    if (func_020ff014(p, (u8 *)v)) {
        return 1;
    }
    return 0;
}

// create a new WFC-ID from RTC date/time, MAC address and an LCG (0x5d588b65, 0x269ec3)
BOOL func_020ff5cc(S *p) {
    u8 mac[6] = {0, 0, 0, 0, 0, 0};
    u32 x0, x4;
    Date date;
    Time time;
    s64 secs;
    u32 seed;
    func_020ff0bc(p);
    RTC_Init();
    if (RTC_GetDate(&date)) {
        return 0;
    }
    if (RTC_GetTime(&time)) {
        return 0;
    }
    secs = func_020ff9f0(&date, &time);
    seed = (u32)secs;
    if (secs < 0) {
        return 0;
    }
    if (OS_IsTickAvailable()) {
        seed += (u32)OS_GetTick; // original bug: the address of OS_GetTick, not its result
    }
    OS_GetMacAddress(mac);
    x0 = (u8)(((mac[0] << 16) | (mac[1] << 8) | mac[2]) != 0x9bf);
    x4 = mac[5];
    x4 |= (mac[3] << 16) | (mac[4] << 8);
    seed = seed * 0x5d588b65 + 0x269ec3;
    p->f16 = (u16)(((seed >> 16) * 1000) >> 16);
    p->b = 0;
    while (p->b == 0) {
        seed = seed * 0x5d588b65 + 0x269ec3;
        while (seed == 0 || p->f18 == (u16)seed) {
            seed = seed * 0x5d588b65 + 0x269ec3;
        }
        p->f18 = (u16)seed;
        p->b = func_020ff8c8(p->f18, x4, x0, 0);
    }
    return 1;
}

// read the WFC-ID into a record with a validity flag
void func_020ff588(Rec *out) {
    S t;
    func_020ff0bc(&t);
    out->a = t.a;
    out->b = t.b;
    if (t.a == 0) {
        out->valid = 0;
    } else {
        out->valid = 1;
    }
}

// is the WFC-ID empty (all zero)
BOOL func_020ff554(void) {
    S t;
    func_020ff0bc(&t);
    if (t.b == 0 && t.a == 0) {
        return 1;
    }
    return 0;
}

// load the settings, check every page with CRC16 and repair from the good copies
s32 func_020ff2e4(u8 *buf) {
    u32 f[4];
    u8 *r4;
    u8 *r7;
    s32 i;
    u32 *r6;
    BOOL changed;
    u16 crc;
    if (!func_020fefdc((u16 *)buf)) {
        return -10001;
    }
    MATHi_CRC16InitTableRev(buf + 0x500, 0xa001);
    if (!func_020fefb0(buf)) {
        return -10001;
    }
    MI_CpuFill8(f, 0, 16);
    i = 0;
    r4 = buf;
    r7 = buf;
    r6 = f;
    do {
        crc = MATH_CalcCRC16(buf + 0x500, r4, 0xfe);
        if (crc == *(u16 *)(r4 + 0xfe)) {
            if (func_020ff210(r7)) {
                *r6 = 1;
            }
        }
        r4 += 0x100;
        r7 += 0x100;
        r6++;
        i++;
    } while (i < 3);
    crc = MATH_CalcCRC16(buf + 0x500, buf + 0x300, 0xfe);
    if (crc == *(u16 *)(buf + 0x3fe)) {
        f[3] = 1;
    }
    if (f[0] != 0 && f[1] != 0 && f[2] != 0 && f[3] != 0) {
        func_020feeb4(buf + 0xf0);
        return 0;
    }
    if (f[0] == 0 && f[1] == 0 && f[2] == 0 && f[3] == 0) {
        func_020ff1ac(buf);
        if (func_020feec4(buf)) {
            return 0;
        }
        return -10000;
    }
    if (!(f[0] != 0 && f[1] != 0) && !(f[2] != 0 && f[3] != 0)) {
        func_020ff1ac(buf);
        if (func_020feec4(buf)) {
            return 0;
        }
        return -10000;
    }
    if (f[0] == 0 && f[1] == 0) {
        func_020ff1ac(buf);
        if (func_020feec4(buf)) {
            return -10003;
        }
        return -10000;
    }
    if (f[0] == 0) {
        func_020ff180(buf, 0);
        MI_CpuCopy8(buf + 0x1f0, buf + 0xf0, 13);
        buf[0xef] = buf[0x1ef];
    } else if (f[1] == 0) {
        func_020ff180(buf, 1);
        MI_CpuCopy8(buf + 0xf0, buf + 0x1f0, 13);
        buf[0x1ef] = buf[0xef];
    }
    func_020feeb4(buf + 0xf0);
    if (f[2] == 0) {
        func_020ff180(buf, 2);
    }
    if (f[3] == 0) {
        volatile u16 zero = 0;
        MIi_CpuClear16(zero, buf + 0x300, 0x100);
    }
    i = changed = 0;
    for (; i < 3; i++) {
        if (f[i] == 0) {
            if (buf[0xef] & (1 << i)) {
                buf[0xef] &= ~(1 << i);
                changed = 1;
            }
        }
    }
    if (!func_020feec4(buf)) {
        return -10000;
    }
    if (changed) {
        return -10002;
    }
    return 0;
}

// validate one Wi-Fi connection settings page (SSID, IP, netmask, DNS)
BOOL func_020ff210(u8 *page) {
    u8 mask[4];
    if (page[0xe7] == 0xff) {
        return 1;
    }
    if (page[0xe7] > 2) {
        return 0;
    }
    if (!func_020fee44(page + 0x40)) {
        return 0;
    }
    if (memcmp(page + 0xc0, data_02135c9c, 4) != 0) {
        if (!func_020fedcc(page + 0xc4)) {
            return 0;
        }
        if (page[0xd0] > 32) {
            return 0;
        }
        func_020fee5c(page[0xd0], mask);
        if (!func_020fedec(page + 0xc0, mask)) {
            return 0;
        }
    }
    if (memcmp(page + 0xc8, data_02135c9c, 4) != 0) {
        if (!func_020fedcc(page + 0xc8)) {
            if (!func_020fedcc(page + 0xcc)) {
                return 0;
            }
        }
    }
    return 1;
}

// reset the settings area and set a fresh ID
BOOL func_020ff1ac(u8 *buf) {
    volatile u16 zero = 0;
    S t;
    u8 *r6;
    s32 i;
    u8 *q;
    MIi_CpuClear16(zero, buf, 0x400);
    i = 0;
    q = buf;
    for (; i < 3; i++) {
        q[0xe7] = 0xff;
        q += 0x100;
    }
    func_020ff770(&t);
    r6 = func_020fe850(&t);
    for (i = 0; i < 2; i++) {
        MI_CpuCopy8(r6, buf + 0xf0, 14);
        buf += 0x100;
    }
    return 0;
}

// clear one settings page and mark it unused (+0xe7 = 0xff)
void func_020ff180(u8 *buf, u32 idx) {
    volatile u16 zero = 0;
    MIi_CpuClear16(zero, buf + (idx << 8), 0x100);
    (buf + (idx << 8))[0xe7] = 0xff;
}

// read the 0x300 byte settings area
BOOL func_020ff154(u8 *dst) {
    if (func_020fe9d8(data_021f5c58, 0x300, dst)) {
        return 1;
    }
    return 0;
}

// unpack the 14 byte NVRAM ID block into a WFC-ID record (S)
void func_020ff0bc(S *p) {
    MI_CpuCopy8(data_021f5c5c, p, 6);
    p->a &= 0x7ffffffffffULL;
    MI_CpuCopy8(data_021f5c61, &p->b, 6);
    p->b >>= 3;
    p->b &= 0x7ffffffffffULL;
    MI_CpuCopy8(data_021f5c66, &p->f16, 2);
    p->f16 >>= 6;
    p->f16 &= 0x3ff;
    MI_CpuCopy8(data_021f5c68, &p->f18, 2);
}

// write the WFC-ID into the two ID pages, with CRC16, and verify
BOOL func_020ff014(S *p, u8 *buf) {
    u32 nv = data_021f5c58;
    s32 j;
    func_020fe850(p);
    MATHi_CRC16InitTableRev(buf + 0x200, 0xa001);
    j = 0;
    do {
        if (!func_020fe9d8(nv, 0x100, buf)) {
            Fatal_Trap();
            return 0;
        }
        MI_CpuCopy8(data_021f5c5c, buf + 0xf0, 14);
        *(u16 *)(buf + 0xfe) = MATH_CalcCRC16(buf + 0x200, buf, 0xfe);
        do {
            func_020fe984(nv, 0x100, buf);
        } while (!func_020fe948(buf, nv, 0x100, buf + 0x100));
        j++;
        nv += 0x100;
    } while (j < 2);
    if (func_020fe900()) {
        return 1;
    }
    return 0;
}

// read the NVRAM header and compute the settings base address (data_021f5c58 = size*8 - 0x400)
BOOL func_020fefdc(u16 *p) {
    if (!func_020fe9d8(0x20, 0x20, p)) {
        return 0;
    }
    data_021f5c58 = p[0] * 8 - 0x400;
    return 1;
}

// read the 0x400 byte Wi-Fi settings area
BOOL func_020fefb0(u8 *dst) {
    if (func_020fe9d8(data_021f5c58, 0x400, dst)) {
        return 1;
    }
    return 0;
}

// write the flagged pages of the Wi-Fi settings and verify
BOOL func_020fef40(u8 *buf, u32 *flags, u8 *tmp) {
    u32 nv = data_021f5c58;
    s32 i = 0;
    do {
        if (*flags != 0) {
            do {
                func_020fe984(nv, 0x100, buf);
            } while (!func_020fe948(buf, nv, 0x100, tmp));
        }
        flags++;
        buf += 0x100;
        i++;
        nv += 0x100;
    } while (i < 4);
    if (func_020fe900()) {
        return 1;
    }
    return 0;
}

// write all four 0x100 byte pages of the Wi-Fi settings (CRC16 at +0xfe) and verify
BOOL func_020feec4(u8 *buf) {
    u32 nv = data_021f5c58;
    s32 i = 0;
    u8 *r4 = buf;
    do {
        *(u16 *)(r4 + 0xfe) = MATH_CalcCRC16(buf + 0x500, r4, 0xfe);
        do {
            func_020fe984(nv, 0x100, r4);
        } while (!func_020fe948(r4, nv, 0x100, buf + 0x400));
        r4 += 0x100;
        i++;
        nv += 0x100;
    } while (i < 4);
    if (func_020fe900()) {
        return 1;
    }
    return 0;
}

// copy a 14 byte WFC-ID block into data_021f5c5c
void func_020feeb4(u8 *p) {
    MI_CpuCopy8(p, data_021f5c5c, 14);
}

// 4 byte netmask -> prefix length (popcount)
u8 func_020fee84(u8 *p) {
    u32 cnt;
    s32 i, j;
    cnt = i = 0;
    for (; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if ((p[i] >> j) & 1) {
                cnt++;
            }
        }
    }
    return cnt;
}

// prefix length -> 4 byte netmask
void func_020fee5c(u32 n, u8 *out) {
    s32 i;
    u32 mask;
    s32 sh;
    i = 0;
    mask = (0xffffffffu >> n) ^ ~0u;
    sh = 0;
    for (; i < 4; i++) {
        out[i] = mask >> (24 - sh);
        sh += 8;
    }
}

// any non-zero byte in the 32 byte SSID/key field
BOOL func_020fee44(u8 *p) {
    s32 i;
    for (i = 0; i < 32; i++) {
        if (p[i] != 0) {
            return 1;
        }
    }
    return 0;
}

// is a usable IPv4 address / netmask pair
BOOL func_020fedec(u8 *a, u8 *b) {
    u32 x, y;
    if (!func_020fedcc(a)) {
        return 0;
    }
    MI_CpuCopy8(a, &x, 4);
    MI_CpuCopy8(b, &y, 4);
    if ((x | y) == ~1u) {
        return 0;
    }
    if ((x & ~y) == 0) {
        return 0;
    }
    return 1;
}

// is a usable IPv4 first octet (1..223, not 127)
BOOL func_020fedcc(u8 *p) {
    u8 c = *p;
    if (c == 0x7f) {
        return 0;
    }
    if (c < 1) {
        return 0;
    }
    if (c > 0xdf) {
        return 0;
    }
    return 1;
}

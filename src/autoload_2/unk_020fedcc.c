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
extern void OSi_ReferSymbol(void *p);
extern s32 OS_SNPrintf(char *buf, u32 size, const char *fmt, ...);

extern u32 data_0213bba8[];
extern const u8 data_02135ca8[16];
extern const u8 data_02135ca0[8];
extern u8 data_021f5c62[];
extern u8 data_021f5c5c[], data_021f5c61[], data_021f5c66[], data_021f5c68[];
extern u32 data_021f5c58;
extern u16 data_021f5c50;
extern u32 data_021f5c54;
extern u8 data_021f5c80[];
extern const u8 data_02135c9c[4];
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

u32 DWCi_Acc_GetFlags(FD *p);
u32 DWCi_Acc_GetFlag_DataType(FD *p);
BOOL DWCi_Acc_SetMaskBits(u32 *p, u32 v, u32 shift, u32 mask);
void DWCi_Acc_SetFlags(FD *p, u32 v);
void DWCi_Acc_SetFlag_DataType(FD *p, u32 v);
u64 DWCi_Acc_GetUserId(FD *p);
u64 DWCi_Acc_GetFriendKey(FD *p);
u32 DWCi_Acc_GetGsProfileId(FD *p);
u32 DWCi_Acc_GetPlayerId(FD *p);
void DWCi_Acc_SetGsProfileId(FD *p, u32 v);
void DWCi_Acc_SetFriendKey(FD *p, u32 a, u32 b);
void DWCi_Acc_SetPlayerId(FD *p, u32 v);
void DWCi_Acc_SetUserId(FD *p, u64 v);
BOOL DWC_Acc_CheckFriendKey(u64 v, u32 key);
u64 DWC_Acc_CreateFriendKey(u32 lo, u32 key);
BOOL DWC_Auth_CheckWiFiIDNeedCreate(void);
u16 Callback_NVRAM(u32 tag, u32 data, u32 err);
BOOL writeDisable(void);
BOOL verify(void *ref, u32 addr, u32 size, void *tmp);
void writeNvram(u32 addr, u16 size, void *src);
BOOL readNvram(u32 addr, u32 size, void *dst);
u32 NVRAMm_ExecuteCommand(u32 cmd, u32 a1, u16 a2, u32 a3);
BOOL DWC_BACKUPlCheckAddress(u8 *p);
BOOL DWC_BACKUPlCheckIp(u8 *a, u8 *b);
BOOL DWC_BACKUPlCheckSsid(u8 *p);
void DWCi_BACKUPlConvMaskAddr(u32 n, u8 *out);
u8 DWCi_BACKUPlConvMaskCidr(u8 *p);
void DWCi_BACKUPlSetWiFi(u8 *p);
BOOL DWCi_BACKUPlWriteAll(u8 *buf);
BOOL DWCi_BACKUPlWritePage(u8 *buf, u32 *flags, u8 *tmp);
BOOL DWCi_BACKUPlRead(u8 *dst);
BOOL DWCi_BACKUPlInit(u16 *p);
BOOL DWCi_BM_GetApInfo(u8 *dst);
void initPage(u8 *buf, u32 idx);
BOOL init__DwcBm(u8 *buf);
BOOL checkAp(u8 *page);
s32 DWC_BM_Init(u8 *p);
u8 *DWCi_BACKUPlConvWifiInfo(S *p);
s32 DWC_BM_Init(u8 *p);
BOOL DWCi_AUTH_MakeWiFiID(u32 v);
BOOL DWCi_AUTH_UpDateWiFiID(S *p, u32 v);
extern void RTC_Init(void);
extern s32 RTC_GetDate(Date *d);
extern s32 RTC_GetTime(Time *t);
extern s32 OS_IsTickAvailable(void);
extern void OS_GetMacAddress(u8 *mac);
void DWCi_BM_GetWiFiInfo(S *out);
BOOL DWCi_BM_SetWiFiInfo(S *p, u8 *buf);
u64 DWCi_Util_WiFiId_scrambleUid(u32 a, u32 b, u32 c, u32 d);
s64 DWCi_Util_ConvertDateTimeToSecond(Date *d, Time *t);
s32 DWCi_Util_ConvertTimeToSecond(Time *t);
s32 DWCi_Util_ConvertDateToDay(Date *d);
u32 DWC_Acc_FriendKeyToGsProfileId(u64 v, u32 key);
void DWCi_Acc_U64ToString32(u64 v, s32 nbits, char *out);
void DWCi_Acc_LoginIdToUserName(FD *fd, u32 gamecode, char *out);
void DWCi_Acc_CreateTempLoginId(FD *p);
void DWC_Auth_GetId(Rec *out);
BOOL DWCi_AUTH_GetNewWiFiInfo(S *p);
BOOL DWCi_Acc_IsAuthentic(UserData *p);
BOOL DWCi_Acc_IsValidLoginId(FD *p);
void DWCi_Acc_CreateUserData(UserData *p, u32 key);
BOOL DWC_IsValidFriendData(FD *p);

static inline u32 clr(u32 v, u32 m) { return v & ~m; }
static inline u64 fld(u64 v, u64 mask, s32 shift) { return (v & mask) << shift; }


































// ---------------------------------------------------------------- 0x020ffa38






























static inline u32 orr(u32 a, u32 b) { return a | b; }

// top level: load, validate and repair the Wi-Fi settings and WFC-ID; returns 0 ok, 1 repaired, 2 repaired+bad, 3 bad
u32 DWC_Init(u8 *p) {
    BOOL r4 = 0;
    s32 r6;
    OSi_ReferSymbol((void *)0x02000b84);
    r6 = DWC_BM_Init(p);
    if (DWC_Auth_CheckWiFiIDNeedCreate()) {
        DWCi_AUTH_MakeWiFiID((u32)p);
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
BOOL DWCi_Acc_SetMaskBits(u32 *p, u32 v, u32 shift, u32 mask) {
    if (v & ~mask) {
        return 0;
    }
    *p = (*p & ~(mask << shift)) | (v << shift);
    return 1;
}

// friend record: get the 43 bit value
u64 DWCi_Acc_GetUserId(FD *p) {
    return ((u64)(p->w0 & 0x7ff) << 32) | p->w1;
}

// friend record: get word 2
u32 DWCi_Acc_GetPlayerId(FD *p) {
    return p->w2;
}

// friend record: get words 1,2 as 64 bit
u64 DWCi_Acc_GetFriendKey(FD *p) {
    return ((u64)p->w2 << 32) | p->w1;
}

// friend record: get word 1
u32 DWCi_Acc_GetGsProfileId(FD *p) {
    return p->w1;
}

// friend record: set the 43 bit value (word 1, low 11 bits of word 0)
void DWCi_Acc_SetUserId(FD *p, u64 v) {
    DWCi_Acc_SetMaskBits((u32 *)p, (u32)(v >> 32), 0, 0x7ff);
    p->w1 = (u32)v;
}

// friend record: set word 2
void DWCi_Acc_SetPlayerId(FD *p, u32 v) {
    p->w2 = v;
}

// friend record: set words 1 and 2
void DWCi_Acc_SetFriendKey(FD *p, u32 a, u32 b) {
    p->w1 = a;
    p->w2 = b;
}

// friend record: set word 1
void DWCi_Acc_SetGsProfileId(FD *p, u32 v) {
    p->w1 = v;
}

// friend record: get the 21 bit attribute field
u32 DWCi_Acc_GetFlags(FD *p) {
    return (p->w0 >> 11) & 0x1fffff;
}

// friend record: get 2 bit type
u32 DWCi_Acc_GetFlag_DataType(FD *p) {
    return DWCi_Acc_GetFlags(p) & 3;
}

// friend record: type 3 and flag bit 2 set
BOOL DWC_IsBuddyFriendData(FD *p) {
    if (DWCi_Acc_GetFlag_DataType(p) == 3) {
        if ((DWCi_Acc_GetFlags(p) & 4) == 4) {
            return 1;
        }
        return 0;
    }
    return 0;
}

// friend record: get type (thunk)
u32 DWC_GetFriendDataType(FD *p) {
    return DWCi_Acc_GetFlag_DataType(p);
}

// friend record: set the 21 bit attribute field (bits 11..31 of word 0)
void DWCi_Acc_SetFlags(FD *p, u32 v) {
    DWCi_Acc_SetMaskBits((u32 *)p, v, 11, 0x1fffff);
}

// friend record: set the 2 bit type
void DWCi_Acc_SetFlag_DataType(FD *p, u32 v) {
    u32 t = DWCi_Acc_GetFlags(p);
    t &= ~3;
    t |= v;
    DWCi_Acc_SetFlags(p, t);
}

// friend record: set the flag bit 2 of a type 3 record
void DWCi_SetBuddyFriendData(FD *p) {
    if (DWCi_Acc_GetFlag_DataType(p) == 3) {
        u32 v = DWCi_Acc_GetFlags(p) | 4;
        DWCi_Acc_SetFlags(p, v);
    }
}

// attach the CRC7 (MATH_CalcCRC8 poly 7, 0x7f) of {key, game code} to a key
u64 DWC_Acc_CreateFriendKey(u32 lo, u32 key) {
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
BOOL DWC_CheckFriendKey(UserData *p, u64 v) {
    return DWC_Acc_CheckFriendKey(v, p->key);
}

// CRC7 check of a key against its stored checksum
BOOL DWC_Acc_CheckFriendKey(u64 v, u32 key) {
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
u32 DWC_Acc_FriendKeyToGsProfileId(u64 v, u32 key) {
    u32 r;
    if (DWC_Acc_CheckFriendKey(v, key)) {
        r = clr((u32)v, 0);
    } else {
        r = 0;
    }
    return r;
}

// base-32 text ('0123456789abcdefghijklmnopqrstuv') of a 64 bit value, (nbits+4)/5 characters
void DWCi_Acc_U64ToString32(u64 v, s32 nbits, char *out) {
    s32 i, n;
    const char *tbl;
    n = (nbits + 4) / 5;
    tbl = "0123456789abcdefghijklmnopqrstuv";
    for (i = 0; i < n; i++) {
        *(out + n - 1 - i) = tbl[(u32)v & 0x1f];
        v >>= 5;
    }
    out[n] = 0;
}

// friend record + game code -> text '%s%c%c%c%c%s' (base-32 profile id, 4 char game code, base-32 key)
void DWCi_Acc_LoginIdToUserName(FD *fd, u32 gamecode, char *out) {
    char s1[20];
    char s2[24];
    DWCi_Acc_U64ToString32(DWCi_Acc_GetUserId(fd), 43, s1);
    DWCi_Acc_U64ToString32(DWCi_Acc_GetPlayerId(fd), 32, &s2[1]);
    OS_SNPrintf(out, 21, "%s%c%c%c%c%s", s1, (u8)(gamecode >> 24), (u8)(gamecode >> 16), (u8)(gamecode >> 8),
                  (u8)gamecode, &s2[1]);
}

// create (zero and initialise) a 0x40 byte user data block with a game code (DWCUserData style)
void DWCi_Acc_CreateUserData(UserData *p, u32 key) {
    u32 table[256];
    MI_CpuFill8(p, 0, 0x40);
    p->size = 0x40;
    p->v1c = 0;
    p->key = key;
    DWCi_Acc_CreateTempLoginId(&p->id);
    DWCi_Acc_SetFlag_DataType(&p->fr, 0);
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
    p->flags |= 1;
}

// create a new own id from OS_GetTick with an LCG (0x5d588b656c078965, 0x269ec3)
void DWCi_Acc_CreateTempLoginId(FD *p) {
    u64 tick = OS_GetTick();
    Rec t;
    DWC_Auth_GetId(&t);
    if (t.valid != 0) {
        DWCi_Acc_SetUserId(p, t.a);
    } else {
        DWCi_Acc_SetUserId(p, t.b);
    }
    DWCi_Acc_SetPlayerId(p, (u32)((tick * 0x5d588b656c078965ULL + 0x269ec3) >> 32));
    DWCi_Acc_SetFlag_DataType(p, 1);
}

// friend record equals the device WFC-ID
BOOL DWCi_Acc_CheckConsoleUserId(FD *fd) {
    Rec t;
    DWC_Auth_GetId(&t);
    if (t.valid != 0) {
        if (DWCi_Acc_GetUserId(fd) == t.a) {
            return 1;
        }
        return 0;
    } else {
        if (DWCi_Acc_GetUserId(fd) == t.b) {
            return 1;
        }
        return 0;
    }
}

// friend record is type 1
BOOL DWCi_Acc_IsValidLoginId(FD *p) {
    if (DWCi_Acc_GetFlag_DataType(p) == 1) {
        return 1;
    }
    return 0;
}

// user data: friend record is type 1
BOOL DWCi_Acc_IsAuthentic(UserData *p) {
    return DWCi_Acc_IsValidLoginId(&p->fr);
}

// friend record type != 0
BOOL DWC_IsValidFriendData(FD *p) {
    if (DWCi_Acc_GetFlag_DataType(p)) {
        return 1;
    }
    return 0;
}

// thunk to DWC_IsValidFriendData
BOOL DWCi_Acc_IsValidFriendData(FD *p) {
    return DWC_IsValidFriendData(p);
}

// thunk to DWCi_Acc_CreateUserData (create user data)
void DWC_CreateUserData(UserData *p, u32 key) {
    DWCi_Acc_CreateUserData(p, key);
}

// user data: friend record matches the device WFC-ID
BOOL DWC_CheckValidConsole(UserData *p) {
    Rec t;
    if (DWCi_Acc_GetFlag_DataType(&p->fr) == 0) {
        return 1;
    }
    DWC_Auth_GetId(&t);
    if (t.valid == 0) {
        return 0;
    }
    if (DWCi_Acc_GetUserId(&p->fr) == t.a) {
        return 1;
    }
    return 0;
}

// user data: store a friend record and a key, recompute CRC32, set the valid flag
void DWCi_Acc_SetLoginIdToUserData(UserData *p, FD *src, u32 v) {
    u32 table[256];
    p->fr = *src;
    p->v1c = v;
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
    p->flags |= 1;
}

// user data: valid flag set
BOOL DWC_CheckDirtyFlag(UserData *p) {
    return (p->flags & 1) == 1;
}

// user data: clear the valid flag and recompute the CRC32 (0x3c bytes)
void DWC_ClearDirtyFlag(UserData *p) {
    u32 table[256];
    p->flags &= ~1;
    MATHi_CRC32InitTableRev(table, 0xedb88320);
    p->crc = MATH_CalcCRC32(table, p, 0x3c);
}

// friend record of type 2 -> 64 bit key, else 0
u64 DWC_GetFriendKey(FD *fd) {
    if (DWCi_Acc_GetFlag_DataType(fd) == 2) {
        return DWCi_Acc_GetFriendKey(fd);
    }
    return 0;
}

// friend record -> profile id (validates the key CRC7 for type 2, -1 for type 1)
u32 DWC_GetGsProfileId(UserData *p, FD *fd) {
    u64 v;
    switch (DWCi_Acc_GetFlag_DataType(fd)) {
    case 2:
        v = DWCi_Acc_GetFriendKey(fd);
        if (DWC_Acc_CheckFriendKey(v, p->key)) {
            return DWC_Acc_FriendKeyToGsProfileId(v, p->key);
        }
        return 0;
    case 3:
        return DWCi_Acc_GetGsProfileId(fd);
    case 1:
        return ~0;
    default:
        return 0;
    }
}

// user data -> own key (low word) or 0
u64 DWC_CreateFriendKey(UserData *p) {
    u64 r = 0;
    if (p->v1c != 0) {
        r = DWC_Acc_CreateFriendKey(p->v1c, p->key);
    }
    return r;
}

// make a type 2 friend record from a friend key
void DWC_CreateFriendKeyToken(FD *fd, u32 a, u32 b) {
    MI_CpuFill8(fd, 0, 12);
    DWCi_Acc_SetFriendKey(fd, a, b);
    DWCi_Acc_SetFlag_DataType(fd, 2);
}

// get the user's own friend record from the user data
void DWC_CreateExchangeToken(UserData *p, FD *out) {
    MI_CpuFill8(out, 0, 12);
    if (DWCi_Acc_IsAuthentic(p)) {
        DWCi_Acc_SetGsProfileId(out, p->v1c);
        DWCi_Acc_SetFlag_DataType(out, 3);
        return;
    }
    *out = p->id;
}

// make a type 3 friend record from a profile id
void DWC_SetGsProfileId(FD *fd, u32 v) {
    MI_CpuFill8(fd, 0, 12);
    DWCi_Acc_SetGsProfileId(fd, v);
    DWCi_Acc_SetFlag_DataType(fd, 3);
}

// friend record -> friend key string using the user's game code (DWC_Acc friend key text)
void DWC_LoginIdToUserName(UserData *p, FD *fd, char *out) {
    DWCi_Acc_LoginIdToUserName(fd, p->key, out);
}

// compare two friend records (type, then the matching fields)
BOOL DWC_IsEqualFriendData(FD *a, FD *b) {
    u32 t = DWCi_Acc_GetFlag_DataType(a);
    if (t != DWCi_Acc_GetFlag_DataType(b)) {
        return 0;
    }
    if (t == 3) {
        if (DWCi_Acc_GetGsProfileId(a) == DWCi_Acc_GetGsProfileId(b)) {
            return 1;
        }
        return 0;
    }
    if (t == 1) {
        if (DWCi_Acc_GetUserId(a) == DWCi_Acc_GetUserId(b) && DWCi_Acc_GetPlayerId(a) == DWCi_Acc_GetPlayerId(b)) {
            return 1;
        }
        return 0;
    }
    if (t == 2) {
        if (DWCi_Acc_GetFriendKey(a) == DWCi_Acc_GetFriendKey(b)) {
            return 1;
        }
        return 0;
    }
    return 0;
}

// is a leap year (year & 3 == 0)
BOOL DWCi_Util_IsLeapYear(u32 y) {
    if ((y & 3) == 0) {
        return 1;
    }
    return 0;
}

// RTC date -> days since 2000 (RTC_ConvertDateToDay style), -1 when invalid
s32 DWCi_Util_ConvertDateToDay(Date *d) {
    u32 days;
    if (d->year >= 100 || d->month < 1 || d->month > 12 || d->day < 1 || d->day > 31 || d->week >= 7 ||
        d->month < 1 || d->month > 12) {
        return -1;
    }
    days = d->day - 1 + data_0213bba8[d->month];
    if (d->month >= 3) {
        if (DWCi_Util_IsLeapYear(d->year)) {
            days++;
        }
    }
    days += d->year * 365;
    days += (d->year + 3) >> 2;
    return days;
}

// RTC time -> seconds (RTC_ConvertTimeToSecond style)
s32 DWCi_Util_ConvertTimeToSecond(Time *t) {
    return t->second + (t->minute + t->hour * 60) * 60;
}

// RTC date + time -> seconds (RTC_ConvertDateTimeToSecond style), -1 when invalid
s64 DWCi_Util_ConvertDateTimeToSecond(Date *d, Time *t) {
    s32 days;
    s32 secs;
    days = DWCi_Util_ConvertDateToDay(d);
    if (days == -1) {
        return -1;
    }
    secs = DWCi_Util_ConvertTimeToSecond(t);
    return (s64)days * 86400 + secs;
}

// scramble the four ID fields into a 43 bit WFC-ID (xor 0xd6, nibble table, byte permutation, xor 0x67)
u64 DWCi_Util_WiFiId_scrambleUid(u32 a, u32 b, u32 c, u32 d) {
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
BOOL DWCi_AUTH_GetNewWiFiInfo(S *p) {
    u8 mac[6];
    u32 x0, x4;
    Date date;
    Time time;
    s64 secs;
    u32 seed;
    DWCi_BM_GetWiFiInfo(p);
    RTC_Init();
    if (RTC_GetDate(&date)) {
        return 0;
    }
    if (RTC_GetTime(&time)) {
        return 0;
    }
    secs = DWCi_Util_ConvertDateTimeToSecond(&date, &time);
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
            p->b = DWCi_Util_WiFiId_scrambleUid(p->f18, x4, x0, 0);
        }
    } else {
        p->b = 0;
        while (p->b == 0) {
            p->f18++;
            p->b = DWCi_Util_WiFiId_scrambleUid(p->f18, x4, x0, 0);
        }
    }
    return 1;
}

// create a WFC-ID (variant) and write it
BOOL DWCi_AUTH_MakeWiFiID(u32 v) {
    S t;
    if (!DWCi_AUTH_GetNewWiFiInfo(&t)) {
        return 0;
    }
    if (DWCi_BM_SetWiFiInfo(&t, (u8 *)v)) {
        return 1;
    }
    return 0;
}

// rotate the WFC-ID records and write them
BOOL DWCi_AUTH_UpDateWiFiID(S *p, u32 v) {
    S t;
    DWCi_BM_GetWiFiInfo(&t);
    p->a = p->b;
    p->b = t.b;
    if (DWCi_BM_SetWiFiInfo(p, (u8 *)v)) {
        return 1;
    }
    return 0;
}

// create a new WFC-ID from RTC date/time, MAC address and an LCG (0x5d588b65, 0x269ec3)
BOOL DWCi_AUTH_RemakeWiFiID(S *p) {
    u8 mac[6] = {0, 0, 0, 0, 0, 0};
    u32 x0, x4;
    Date date;
    Time time;
    s64 secs;
    u32 seed;
    DWCi_BM_GetWiFiInfo(p);
    RTC_Init();
    if (RTC_GetDate(&date)) {
        return 0;
    }
    if (RTC_GetTime(&time)) {
        return 0;
    }
    secs = DWCi_Util_ConvertDateTimeToSecond(&date, &time);
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
        p->b = DWCi_Util_WiFiId_scrambleUid(p->f18, x4, x0, 0);
    }
    return 1;
}

// read the WFC-ID into a record with a validity flag
void DWC_Auth_GetId(Rec *out) {
    S t;
    DWCi_BM_GetWiFiInfo(&t);
    out->a = t.a;
    out->b = t.b;
    if (t.a == 0) {
        out->valid = 0;
    } else {
        out->valid = 1;
    }
}

// is the WFC-ID empty (all zero)
BOOL DWC_Auth_CheckWiFiIDNeedCreate(void) {
    S t;
    DWCi_BM_GetWiFiInfo(&t);
    if (t.b == 0 && t.a == 0) {
        return 1;
    }
    return 0;
}

// load the settings, check every page with CRC16 and repair from the good copies
s32 DWC_BM_Init(u8 *buf) {
    u32 f[4];
    u8 *r4;
    u8 *r7;
    s32 i;
    u32 *r6;
    BOOL changed;
    u16 crc;
    if (!DWCi_BACKUPlInit((u16 *)buf)) {
        return -10001;
    }
    MATHi_CRC16InitTableRev(buf + 0x500, 0xa001);
    if (!DWCi_BACKUPlRead(buf)) {
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
            if (checkAp(r7)) {
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
        DWCi_BACKUPlSetWiFi(buf + 0xf0);
        return 0;
    }
    if (f[0] == 0 && f[1] == 0 && f[2] == 0 && f[3] == 0) {
        init__DwcBm(buf);
        if (DWCi_BACKUPlWriteAll(buf)) {
            return 0;
        }
        return -10000;
    }
    if (!(f[0] != 0 && f[1] != 0) && !(f[2] != 0 && f[3] != 0)) {
        init__DwcBm(buf);
        if (DWCi_BACKUPlWriteAll(buf)) {
            return 0;
        }
        return -10000;
    }
    if (f[0] == 0 && f[1] == 0) {
        init__DwcBm(buf);
        if (DWCi_BACKUPlWriteAll(buf)) {
            return -10003;
        }
        return -10000;
    }
    if (f[0] == 0) {
        initPage(buf, 0);
        MI_CpuCopy8(buf + 0x1f0, buf + 0xf0, 13);
        buf[0xef] = buf[0x1ef];
    } else if (f[1] == 0) {
        initPage(buf, 1);
        MI_CpuCopy8(buf + 0xf0, buf + 0x1f0, 13);
        buf[0x1ef] = buf[0xef];
    }
    DWCi_BACKUPlSetWiFi(buf + 0xf0);
    if (f[2] == 0) {
        initPage(buf, 2);
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
    if (!DWCi_BACKUPlWriteAll(buf)) {
        return -10000;
    }
    if (changed) {
        return -10002;
    }
    return 0;
}

// validate one Wi-Fi connection settings page (SSID, IP, netmask, DNS)
BOOL checkAp(u8 *page) {
    u8 mask[4];
    if (page[0xe7] == 0xff) {
        return 1;
    }
    if (page[0xe7] > 2) {
        return 0;
    }
    if (!DWC_BACKUPlCheckSsid(page + 0x40)) {
        return 0;
    }
    if (memcmp(page + 0xc0, data_02135c9c, 4) != 0) {
        if (!DWC_BACKUPlCheckAddress(page + 0xc4)) {
            return 0;
        }
        if (page[0xd0] > 32) {
            return 0;
        }
        DWCi_BACKUPlConvMaskAddr(page[0xd0], mask);
        if (!DWC_BACKUPlCheckIp(page + 0xc0, mask)) {
            return 0;
        }
    }
    if (memcmp(page + 0xc8, data_02135c9c, 4) != 0) {
        if (!DWC_BACKUPlCheckAddress(page + 0xc8)) {
            if (!DWC_BACKUPlCheckAddress(page + 0xcc)) {
                return 0;
            }
        }
    }
    return 1;
}

// reset the settings area and set a fresh ID
BOOL init__DwcBm(u8 *buf) {
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
    DWCi_AUTH_GetNewWiFiInfo(&t);
    r6 = DWCi_BACKUPlConvWifiInfo(&t);
    for (i = 0; i < 2; i++) {
        MI_CpuCopy8(r6, buf + 0xf0, 14);
        buf += 0x100;
    }
    return 0;
}

// clear one settings page and mark it unused (+0xe7 = 0xff)
void initPage(u8 *buf, u32 idx) {
    volatile u16 zero = 0;
    MIi_CpuClear16(zero, buf + (idx << 8), 0x100);
    (buf + (idx << 8))[0xe7] = 0xff;
}

// read the 0x300 byte settings area
BOOL DWCi_BM_GetApInfo(u8 *dst) {
    if (readNvram(data_021f5c58, 0x300, dst)) {
        return 1;
    }
    return 0;
}

// unpack the 14 byte NVRAM ID block into a WFC-ID record (S)
void DWCi_BM_GetWiFiInfo(S *p) {
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
BOOL DWCi_BM_SetWiFiInfo(S *p, u8 *buf) {
    u32 nv = data_021f5c58;
    s32 j;
    DWCi_BACKUPlConvWifiInfo(p);
    MATHi_CRC16InitTableRev(buf + 0x200, 0xa001);
    j = 0;
    do {
        if (!readNvram(nv, 0x100, buf)) {
            Fatal_Trap();
            return 0;
        }
        MI_CpuCopy8(data_021f5c5c, buf + 0xf0, 14);
        *(u16 *)(buf + 0xfe) = MATH_CalcCRC16(buf + 0x200, buf, 0xfe);
        do {
            writeNvram(nv, 0x100, buf);
        } while (!verify(buf, nv, 0x100, buf + 0x100));
        j++;
        nv += 0x100;
    } while (j < 2);
    if (writeDisable()) {
        return 1;
    }
    return 0;
}

// read the NVRAM header and compute the settings base address (data_021f5c58 = size*8 - 0x400)
BOOL DWCi_BACKUPlInit(u16 *p) {
    if (!readNvram(0x20, 0x20, p)) {
        return 0;
    }
    data_021f5c58 = p[0] * 8 - 0x400;
    return 1;
}

// read the 0x400 byte Wi-Fi settings area
BOOL DWCi_BACKUPlRead(u8 *dst) {
    if (readNvram(data_021f5c58, 0x400, dst)) {
        return 1;
    }
    return 0;
}

// write the flagged pages of the Wi-Fi settings and verify
BOOL DWCi_BACKUPlWritePage(u8 *buf, u32 *flags, u8 *tmp) {
    u32 nv = data_021f5c58;
    s32 i = 0;
    do {
        if (*flags != 0) {
            do {
                writeNvram(nv, 0x100, buf);
            } while (!verify(buf, nv, 0x100, tmp));
        }
        flags++;
        buf += 0x100;
        i++;
        nv += 0x100;
    } while (i < 4);
    if (writeDisable()) {
        return 1;
    }
    return 0;
}

// write all four 0x100 byte pages of the Wi-Fi settings (CRC16 at +0xfe) and verify
BOOL DWCi_BACKUPlWriteAll(u8 *buf) {
    u32 nv = data_021f5c58;
    s32 i = 0;
    u8 *r4 = buf;
    do {
        *(u16 *)(r4 + 0xfe) = MATH_CalcCRC16(buf + 0x500, r4, 0xfe);
        do {
            writeNvram(nv, 0x100, r4);
        } while (!verify(r4, nv, 0x100, buf + 0x400));
        r4 += 0x100;
        i++;
        nv += 0x100;
    } while (i < 4);
    if (writeDisable()) {
        return 1;
    }
    return 0;
}

// copy a 14 byte WFC-ID block into data_021f5c5c
void DWCi_BACKUPlSetWiFi(u8 *p) {
    MI_CpuCopy8(p, data_021f5c5c, 14);
}

// 4 byte netmask -> prefix length (popcount)
u8 DWCi_BACKUPlConvMaskCidr(u8 *p) {
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
void DWCi_BACKUPlConvMaskAddr(u32 n, u8 *out) {
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
BOOL DWC_BACKUPlCheckSsid(u8 *p) {
    s32 i;
    for (i = 0; i < 32; i++) {
        if (p[i] != 0) {
            return 1;
        }
    }
    return 0;
}

// is a usable IPv4 address / netmask pair
BOOL DWC_BACKUPlCheckIp(u8 *a, u8 *b) {
    u32 x, y;
    if (!DWC_BACKUPlCheckAddress(a)) {
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
BOOL DWC_BACKUPlCheckAddress(u8 *p) {
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

// ---- file-scope objects (.rodata 0x02135c9c-0x02135cb8, .data 0x0213bba8-0x0213bbdc; the two string literals follow in
// .data up to 0x0213bc10)
const u8 data_02135c9c[4] = {0, 0, 0, 0};
const u8 data_02135ca0[8] = {1, 2, 0, 4, 3, 5, 6, 7};
const u8 data_02135ca8[16] = {5, 9, 1, 14, 12, 2, 10, 0, 11, 13, 3, 4, 8, 6, 15, 7};
u32 data_0213bba8[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

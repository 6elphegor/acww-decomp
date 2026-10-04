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

// NVRAM: read into a buffer (cmd 1) with cache invalidate and retry loop
BOOL func_020fe9d8(u32 addr, u32 size, void *dst) {
    DC_InvalidateRange(dst, size);
    while (!PXI_IsCallbackReady(4, 1)) {
    }
    PXI_SetFifoRecvCallback(4, func_020fe8d4);
    for (;;) {
        if (func_020fea34(1, addr, size, (u32)dst) == 1) {
            break;
        }
        WaitByLoop(0x40000);
    }
    DC_InvalidateRange(dst, size);
    return 1;
}

// NVRAM: write a buffer (cmd 2) with cache store and retry loop
void func_020fe984(u32 addr, u16 size, void *src) {
    while (!PXI_IsCallbackReady(4, 1)) {
    }
    PXI_SetFifoRecvCallback(4, func_020fe8d4);
    DC_StoreRange(src, size);
    for (;;) {
        if (func_020fea34(2, addr, size, (u32)src) == 1) {
            break;
        }
        WaitByLoop(0x40000);
    }
}

// NVRAM: read back and compare against a reference buffer (write verification)
BOOL func_020fe948(void *ref, u32 addr, u32 size, void *tmp) {
    if (!func_020fe9d8(addr, size, tmp)) {
        return 0;
    }
    if (memcmp(ref, tmp, size) == 0) {
        return 1;
    }
    return 0;
}

// NVRAM: init PXI callback and poll the status command (cmd 7) until the ARM7 side is ready
BOOL func_020fe900(void) {
    while (!PXI_IsCallbackReady(4, 1)) {
    }
    PXI_SetFifoRecvCallback(4, func_020fe8d4);
    for (;;) {
        if (func_020fea34(7, 0, 0, 0) == 1) {
            break;
        }
        WaitByLoop(0x40000);
    }
    return 1;
}

// PXI tag 4 (NVRAM) receive callback: stores the result byte and the done flag
u16 func_020fe8d4(u32 tag, u32 data, u32 err) {
    data_021f5c50 = (u16)(data & 0xff);
    data_021f5c54 = 1;
    if (err) {
        data_021f5c50 = 0xff;
    }
    return data_021f5c50;
}

// pack a WFC-ID record (S) into the 14-byte block data_021f5c5c; inverse of func_020ff0bc
u8 *func_020fe850(S *p) {
    u64 t = *(volatile u64 *)&p->b;
    MI_CpuCopy8(p, data_021f5c5c, 5);
    data_021f5c5c[5] = (((u32)(p->a >> 32) >> 8) & 7) | ((t & 0x1f) << 3);
    t >>= 5;
    MI_CpuCopy8(&t, data_021f5c62, 4);
    data_021f5c5c[10] = ((u32)(t >> 32) & 0x3f) | ((p->f16 & 3) << 6);
    data_021f5c5c[11] = p->f16 >> 2;
    MI_CpuCopy8(&p->f18, data_021f5c68, 2);
    return data_021f5c5c;
}

// WFC-ID block accessor: returns the 14-byte work block data_021f5c5c (NVRAM ID copy)
u8 *func_020fe848(void) {
    return data_021f5c5c;
}

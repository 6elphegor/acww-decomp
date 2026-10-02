// mwcc-flags: -nothumb -O4,p
// NitroSDK CARD (ROM read) + WM (wireless manager) region, autoload_2 0x0211e3fc-0x0211f800. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)
#define va_arg(ap, t) (*(t *)((ap += 4) - 4))
#define va_end(ap)

typedef struct CardCommon CardCommon;
struct CardCommon {
    u32 *result;      // 0x00
    u32 arg;          // 0x04
    u8 _08[0x14];
    u32 src;          // 0x1c
    u32 dst;          // 0x20
    u32 len;          // 0x24
    u32 dma;          // 0x28
    u8 _2c[0xc];
    void (*callback)(u32); // 0x38
    u32 callbackArg;       // 0x3c
    void (*task)(CardCommon *); // 0x40
    u8 thread[0xc0];       // 0x44
    void *waiter;          // 0x104
    u8 _108[4];
    u8 queue[8];           // 0x10c
    u32 flag;              // 0x114
};

typedef struct {
    u16 state;
    u8 _02[0x44];
    u16 f46;
    u8 _48[0x70];
    u16 fb8;
    u8 _ba[0x17e - 0xba];
    u16 f17e;
} WMStatus;

typedef struct WMMsg WMMsg;
struct WMMsg {
    u16 id;     // 0
    u16 f2;
    u16 f4;
    u16 f6;
    union {
        u32 f8;
        u16 f8w;
    };
    u32 fc;
    u16 f10;
    u16 f12;
    u8 _14[6];
    u16 f1a;
    u32 f1c;
    u16 f20;
};

typedef struct {
    void *w0;
    WMStatus *status;
    u32 f8;
    u8 *f0c;
    u8 *f10;
    u16 dmaNo;
    u16 f16;
    void (*cb18[42])(WMMsg *);
    void (*cbC0)(WMMsg *);
    void (*reqCb[16])(WMMsg *);
    u32 reqArg[16];
} WMArm9Buf;

typedef struct {
    u8 id;
    u8 length;
    u16 _pad;
    u8 *body;
} WMOtherElement;

typedef struct {
    u8 count;
    WMOtherElement element[16];
} WMOtherElements;

typedef struct {
    u8 _00[0x3c];
    u16 f3c;
    u16 f3e;
} WMBssDesc;

extern CardCommon data_021fec00;
extern u32 data_021ff240[];
extern int (*data_021ff464)(void);
extern u32 data_021ff460;
extern WMArm9Buf *data_021ff46c;
extern u16 data_021ff468;
extern u8 data_021ff470[];
extern u8 data_021ff490[];
extern WMMsg data_021ff4b8;
extern u8 data_021ff4cc[];
extern u8 data_021ff4dc[];
extern u8 data_021ff500[];
extern u32 data_0213c1fc;

extern void func_01ff8000(void);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_01ffa404(u32, void (*)(void));
extern void func_01ff81a8(u32);
extern void func_01ff8128(u32);
extern void func_01ff80e0(u32);
extern void func_01ffa494(u32);
extern void func_02114594(void *, u32);
extern void func_021145b0(void *, u32);
extern void func_021145cc(void *, u32);
extern void func_02114608(void *, u32);
extern void func_021145f0(void);
extern u32 func_02114b10(void);
extern void func_021159a8(u32);
extern void func_02116224(u32, u32, u32, u32);
extern void func_02116048(void *, void *, u32);
extern void func_021136a0(void *);
extern void func_0211366c(void *);
extern void func_02113720(u32);
extern int func_02117e8c(u32, u32);
extern int func_02117dd8(u32, u32, u32);
extern void func_02117dcc(void);
extern void func_02117eb4(u32, void *);
extern void WaitByLoop(u32);
extern void func_0206d49c(void);
extern void func_0211c670(void);
extern int func_02114188(void *, void *, u32);
extern void func_021140d4(void *, void *, u32);
extern void func_02114234(void *, void *, u32);
extern void func_021142dc(void *, void *, u32);
extern void func_02115c24(u32, void *, void *, u32);
extern void func_02115ca0(u32, void *, u32, u32);
extern void func_02115e48(void *, void *, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115640(u8 *);
extern void func_0211d45c(void);
extern int func_0211d2e0(u32 *);
extern void func_0211fb0c(u16, u32, u32);

BOOL func_0211f7e4(void);
u32 func_0211f73c(void);
u32 func_0211f698(void);
u32 func_0211f5f4(void);
WMOtherElements func_0211f488(WMBssDesc *b);
u32 func_0211f410(void);
u32 func_0211f3dc(void *buf, u16 dmaNo);
u32 func_0211f1fc(void *buf, u16 dmaNo, u32 size);
u32 func_0211f188(void);
void func_0211f170(u32 idx, void (*cb)(WMMsg *));
u32 func_0211f01c(u32 id, u16 paramNum, ...);
WMArm9Buf *func_0211f00c(void);
u32 func_0211eff0(void);
u32 func_0211ef94(void);
u32 func_0211eeec(int n, ...);
void func_0211eb4c(u32 tag, WMMsg *m, BOOL err);
void func_0211eb30(void);
u32 func_0211eb00(void);
void func_0211eac8(void);
void func_0211ea5c(u32 tag, u32 data, BOOL err);
void func_0211ea4c(int (*cb)(void));
void func_0211ea0c(void);
void func_0211e9a8(u32 data, u32 n);
void func_0211e958(u32 tag, u32 data, BOOL err);
void func_0211e8fc(void);
BOOL func_0211e7c0(CardCommon *c, u32 arg, int retry);
BOOL func_0211e728(u8 *cache);
void func_0211e688(u32 hi, u32 lo);
void func_0211e630(void);
void func_0211e558(void);
BOOL func_0211e3fc(CardCommon *req);

// Best attempt: differs only in register allocation/one hoisted constant. The original keeps a zero in r2
// (mov r2,#0 before the loop; "moveq r0,r2") and the va pointer in r12; mine folds the 0 into "moveq r0,#0"
// and keeps the va pointer in r2 (40 vs 41 instructions).
u32 func_0211eeec(int n, ...) {
    u32 result;
    u16 now;
    u32 temp;
    va_list vlist;
    result = func_0211eff0();
    if (result != 0) return result;
    func_02114594(data_021ff46c->status, 2);
    now = data_021ff46c->status->state;
    result = 3;
    va_start(vlist, n);
    for (; n; n--) {
        temp = va_arg(vlist, u32);
        if (temp == now) {
            result = 0;
        }
    }
    va_end(vlist);
    return result;
}

// mwcc-flags: -nothumb -O4,p
// NitroSDK region, autoload_2 0x0211ef94-0x0211f488. ARM code, mwcc 1.2/base.
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

u32 func_0211f410(void) {
    if (data_0213c1fc == 0x10000) {
        u32 t[3];
        func_0211d45c();
        if (func_0211d2e0(t) == 0) {
            data_0213c1fc = (u16)(t[2] + (t[1] << 8));
        }
    }
    data_0213c1fc = (u16)(data_0213c1fc + 1);
    return (u16)data_0213c1fc;
}

u32 func_0211f3dc(void *buf, u16 dmaNo) {
    u32 r = func_0211f1fc(buf, dmaNo, 0xf00);
    if (r == 0) data_021ff46c->f16 = 0;
    return r;
}

u32 func_0211f1fc(void *buf, u16 dmaNo, u32 size) {
    WMArm9Buf *w;
    int i;
    int j;
    u8 *p;
    if (data_021ff468 != 0) return 3;
    data_021ff468 = 1;
    if (buf == 0) {
        data_021ff468 = 0;
        return 6;
    }
    if (dmaNo > 3) {
        data_021ff468 = 0;
        return 6;
    }
    if (((u32)buf & 31) != 0) {
        data_021ff468 = 0;
        return 6;
    }
    func_02117dcc();
    if (func_02117e8c(10, 1) == 0) {
        data_021ff468 = 0;
        return 4;
    }
    func_02114594(buf, size);
    func_02115ca0(dmaNo, buf, 0, size);
    data_021ff46c = (WMArm9Buf *)buf;
    ((WMArm9Buf *)buf)->w0 = (u8 *)buf + 0x200;
    data_021ff46c->status = (WMStatus *)((u8 *)data_021ff46c->w0 + 0x300);
    data_021ff46c->f0c = (u8 *)data_021ff46c->status + 0x800;
    data_021ff46c->f10 = data_021ff46c->f0c + 0x100;
    func_0211eb30();
    data_021ff46c->dmaNo = dmaNo;
    for (i = 0; i < 16; i++) func_0211fb0c(i, 0, 0);
    func_021142dc(data_021ff470, data_021ff490, 10);
    p = data_021ff500;
    for (j = 0; j < 10; j++) {
        *(u16 *)p = 0x8000;
        func_021145b0(p, 2);
        func_02114234(data_021ff470, p, 1);
        p += 0x100;
    }
    func_02117eb4(10, func_0211eb4c);
    return 0;
}

u32 func_0211f188(void) {
    u32 r;
    if (func_0211eff0() != 0) return 3;
    r = func_0211eeec(1, 0);
    if (r != 0) return r;
    func_0211eb30();
    func_02117eb4(10, 0);
    data_021ff46c = 0;
    data_021ff468 = 0;
    return 0;
}

void func_0211f170(u32 idx, void (*cb)(WMMsg *)) {
    data_021ff46c->cb18[idx] = cb;
}

u32 func_0211f01c(u32 id, u16 paramNum, ...) {
    WMMsg *msg;
    va_list va;
    int r;
    int i;
    if (func_02114188(data_021ff470, &msg, 0) == 0) return 8;
    func_02114594(msg, 2);
    if ((msg->id & 0x8000) == 0) {
        func_021140d4(data_021ff470, msg, 1);
        return 8;
    }
    if (paramNum == 0) {
        func_021145b0(data_021ff46c->f0c, 0x100);
        func_02114594(msg, 0x100);
        func_02115c24(data_021ff46c->dmaNo, data_021ff46c->f0c, msg, 0x100);
    }
    msg->id = id;
    va_start(va, paramNum);
    for (i = 0; i < paramNum; i++) {
        ((struct { u16 id; u16 pad; u32 p[1]; } *)msg)->p[i] = va_arg(va, u32);
    }
    func_021145b0(msg, 0x100);
    r = func_02117dd8(10, (u32)msg, 0);
    func_02114234(data_021ff470, msg, 1);
    return r < 0 ? 8 : 2;
}

WMArm9Buf *func_0211f00c(void) {
    return data_021ff46c;
}

u32 func_0211eff0(void) {
    return data_021ff468 != 0 ? 0 : 3;
}

u32 func_0211ef94(void) {
    u32 r = func_0211eff0();
    if (r != 0) return r;
    func_02114594(data_021ff46c->status, 2);
    return data_021ff46c->status->state <= 1 ? 3 : 0;
}


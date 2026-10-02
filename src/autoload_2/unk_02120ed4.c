// mwcc-flags: -nothumb -O4,p
// NitroSDK WM (wireless manager) data sharing callbacks, autoload_2 0x02120c98-0x02120ed4.
// ARM code, mwcc 1.2/base, flags -nothumb -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct {
    u16 state;
    u8 _02[0x0a];
    u32 f0c;
    u8 _10[0x76];
    u16 f86;
    u8 _88[0xfc];
    u16 f184;
} WMStatus;

typedef struct WMMsg WMMsg;
typedef void (*WMCallback)(WMMsg *);

struct WMMsg {
    u16 f00;
    u16 errcode;
    u16 f04;
    u16 f06;
    u16 f08;
    u16 f0a;
    u16 *f0c;
    u16 f10;
    u16 f12;
    u8 _14[6];
    u16 f1a;
    void *arg;
    u32 f20;
};

typedef struct {
    void *w0;
    WMStatus *status;
    u32 f8;
    u8 *req;
    u8 *f10;
    u16 dmaNo;
    u16 f16;
    WMCallback cb18[42];
    WMCallback cbC0;
    WMCallback portCb[16];
    void *portArg[16];
} WMArm9Buf;

typedef struct {
    u16 hdr;
    u16 recv;
    u8 data[508];
} WMPacket;

typedef struct {
    WMPacket pkt[4];    // 0x000
    u16 slot[4];        // 0x800
    u16 f808;
    u16 f80a;
    u16 f80c;
    u16 f80e;
    u16 f810;
    u16 f812;
    u16 f814;
    u16 f816;
    u16 f818;
    u16 f81a;
    u16 f81c;
} WMPool;

extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern u32 func_0211ef94(void);
extern u32 func_0211eeec(int n, ...);
extern WMArm9Buf *func_0211f00c(void);
extern u32 func_0211f01c(u32 id, u16 paramNum, ...);
extern void func_0211f170(u32 idx, WMCallback cb);
extern u32 func_0211fb0c(u32 port, WMCallback cb, void *arg);
extern void func_02114594(void *, u32);
extern void func_021145b0(void *, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115e48(void *, void *, u32);
extern void func_02115ea8(u32, void *, u32);
extern u32 func_0212741c(u32);
extern u32 func_0212052c(WMCallback cb, void *arg, void *sendData, u16 size, u16 destBitmap, u16 port, u16 prio);
extern u32 func_02120a64(void *base, u32 x, void *y, u32 n);
extern void func_02120b0c(WMPool *ds, BOOL flag);
extern u8 data_021fff00[];
extern u32 func_02122e24(u32, u32, u16 *);

void func_02120c98(WMPool *ds, u32 n, u16 *buf);
void func_02120da4(WMMsg *msg);
void func_02120ed4(WMMsg *msg);
void func_02120fe8(WMMsg *msg);
u32 func_021214b4(WMPool *ds);
u32 func_02121570(WMPool *ds, u32 port, u32 aidBitmap, u32 dataLength, BOOL doubleMode);

extern void func_02120ed4(WMMsg *msg);
extern void func_02120fe8(WMMsg *msg);
extern u32 func_021214b4(WMPool *ds);
extern u32 func_02121838(WMPool *ds);
extern u32 func_02121844(WMPool *ds, u32 port);
extern u32 func_02121870(WMCallback cb, u32 arg);
extern u32 func_021218d0(WMCallback cb, u32 tableNumber, u32 camInterval, u32 frameInterval, u16 beaconInterval);
extern u32 func_02121948(WMCallback cb, u32 ccaMode, u32 edThreshold, u32 channel, u16 measureTime);
extern u32 func_021219b4(WMCallback cb, u32 flag);
extern u32 func_02121a24(WMCallback cb, void *userGameInfo, u32 size, u32 ggid, u16 tgid, u8 attr);
extern u32 func_02121aec(WMCallback cb, u32 wepmode, u32 wepkeyid, void *key);
extern u32 func_02121b8c(WMCallback cb, u32 wepmode, void *key);
extern u32 func_02121570(WMPool *ds, u32 port, u32 aidBitmap, u32 dataLength, BOOL doubleMode);
extern u32 func_021210f0(WMPool *ds, u16 *data, u16 *out);
extern u32 func_02121c10(u32 a, u32 b);
extern BOOL func_02121c34(u32 x);
extern u32 func_02121c50(u32 a, u32 b);
extern void func_02121c60(u32 idx);
extern u32 func_02121cc8(void);
extern u32 func_02121e5c(void);

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u8 wc;
} Out2123294;

typedef struct {
    u8 cmd;
    u16 idx;
    u16 len;
} Msg2126e00;

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 state;
} Slot;

// view of the entry that starts at ctx + idx * 0x5d4 (members are at absolute offsets in the context)
typedef struct {
    u8 _0[0x1d2c];
    u32 a1d2c[7];
    u16 f1d48;
    u16 f1d4a;
    u16 f1d4c;
    u8 _1d4e[4];
    u8 f1d52;
    u8 _1d53;
    u32 *f1d54;
    u32 *f1d58;
} Ent;

typedef struct {
    u8 _0[0x14e8];
    u32 state[15];
    u8 f1524;
    u8 cur;
    u8 _1526[0x262];
    u8 ent[16][0x5d4];
    u8 _74c8[0x818];
    u8 f7ce0[0x30];
} Ctx;

#define ENT(c, i) ((Ent *)((u8 *)(c) + (i) * 0x5d4))

extern Ctx *data_0220001c;
extern u32 func_02122360(u32, u32);
extern u32 func_021221b0(u32);
extern u32 func_02123294(void *out, void *arr, u32 count, void *ent);
extern u32 func_02126e00(void *msg);
extern u32 func_021266c0(void *, u32, u32, u32);
extern u32 func_021269cc(void *);
extern void func_0212683c(void *, void *, u32, u32);
extern u32 func_02123f24(u32, u32);
extern void func_0206d49c(void);
extern u32 func_02122114(void);
u32 func_02121e5c(void);
void func_02121c60(u32 idx);

// WmDataSharingReceiveCallback_Child
void func_02120ed4(WMMsg *msg) {
    WMPool *ds = (WMPool *)msg->arg;
    if (ds == 0) return;
    if (msg->errcode == 0) {
        switch (msg->f04) {
        case 21:
            func_02120c98(ds, msg->f12, msg->f0c);
            func_02120b0c(ds, 0);
            break;
        case 7:
            func_02120b0c(ds, 0);
            break;
        case 9: {
            u16 aid = msg->f12;
            u32 aidBit = 1U << aid;
            u32 irq = func_01ffa2ec();
            u32 idx = ds->f808;
            ds->pkt[idx].hdr &= ~aidBit;
            if (ds->f818 == 1) {
                idx = (u16)((idx + 1) & 3);
                ds->pkt[idx].hdr &= ~aidBit;
            }
            func_01ffa3d4(irq);
            func_02120b0c(ds, 0);
            if (ds->f818 == 1) {
                func_02120b0c(ds, 0);
            }
            break;
        }
        }
    } else {
        ds->f81c = 5;
    }
}

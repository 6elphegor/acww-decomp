// mwcc-flags: -nothumb -O4,p
// NitroSDK WM data sharing / request API plus an unidentified slot-cache helper, autoload_2 0x02120fe8-0x02121e5c.
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

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern u32 WMi_CheckIdle(void);
extern u32 WMi_CheckStateEx(int n, ...);
extern WMArm9Buf *func_0211f00c(void);
extern u32 func_0211f01c(u32 id, u16 paramNum, ...);
extern void WMi_SetCallbackTable(u32 idx, WMCallback cb);
extern u32 func_0211fb0c(u32 port, WMCallback cb, void *arg);
extern void DC_InvalidateRange(void *, u32);
extern void DC_StoreRange(void *, u32);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MIi_CpuCopy16(void *, void *, u32);
extern void MIi_CpuClearFast(u32, void *, u32);
extern u32 MATH_CountPopulation(u32);
extern u32 func_0212052c(WMCallback cb, void *arg, void *sendData, u16 size, u16 destBitmap, u16 port, u16 prio);
extern u32 WmGetSharedDataAddress(void *base, u32 x, void *y, u32 n);
extern void func_02120b0c(WMPool *ds, BOOL flag);
extern u8 data_021fff00[];
extern u32 func_02122e24(u32, u32, u16 *);

void func_02120c98(WMPool *ds, u32 n, u16 *buf);
void func_02120da4(WMMsg *msg);
void func_02120ed4(WMMsg *msg);
void func_02120fe8(WMMsg *msg);
u32 func_021214b4(WMPool *ds);
u32 func_02121570(WMPool *ds, u32 port, u32 aidBitmap, u32 dataLength, BOOL doubleMode);

extern void func_02120c98(WMPool *ds, u32 n, u16 *buf);
extern void func_02120da4(WMMsg *msg);
extern void func_02120ed4(WMMsg *msg);
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
extern u32 func_02126e00(void *msg, void *dst);
extern u32 func_021266c0(void *, u32, u32, u32);
extern u32 MBi_IsTaskBusy(void *);
extern void func_0212683c(void *, void *, u32, u32);
extern u32 func_02123f24(u32, u32, void *);
extern void func_0206d49c(void);
extern u32 func_02122114(void);
u32 func_02121e5c(void);
void func_02121c60(u32 idx);

// (unidentified: scans the 15 slot states and dispatches to func_02122360 / func_021221b0 / func_02121e5c)
u32 func_02121cc8(void) {
    volatile u16 zero = 0;
    u16 m[5];
    u16 i;
    u32 r;
    MIi_CpuClear16(zero, m, 10);
    for (i = 1; i <= 15; i++) {
        switch (data_0220001c->state[i - 1]) {
        case 2:
            m[0] |= 1 << i;
            break;
        case 5:
            m[1] |= 1 << i;
            break;
        case 4:
            m[2] |= 1 << i;
            break;
        case 8:
            m[3] |= 1 << i;
            break;
        case 11:
            m[4] |= 1 << i;
            break;
        }
    }
    if (m[3] != 0) {
        r = func_02122360(5, m[3]);
    } else if (m[0] != 0) {
        r = func_02122360(1, m[0]);
    } else if (m[4] != 0) {
        r = func_02122360(6, m[4]);
    } else if (m[2] != 0) {
        r = func_02122360(2, m[2]);
    } else if (m[1] != 0) {
        r = func_021221b0(m[1]);
    } else {
        r = func_02121e5c();
    }
    if (r == 21) r = func_02122360(0, 0xffff);
    return r;
}

// (unidentified: clamps/advances the slot counter of entry idx of the context data_0220001c points to)
void func_02121c60(u32 idx) {
    if (ENT(data_0220001c, idx)->f1d52 == 0) return;
    if (ENT(data_0220001c, idx)->f1d4c == 0) return;
    {
        u16 a = ENT(data_0220001c, idx)->f1d48;
        u16 b = ENT(data_0220001c, idx)->f1d4a;
        if (b <= a) {
            if (a <= b + 2) {
                ENT(data_0220001c, idx)->f1d48 = a + 1;
                return;
            }
        }
        ENT(data_0220001c, idx)->f1d48 = b;
    }
}

// (unidentified: max(a, b) unsigned)
u32 MBi_calc_nextsendblock(u32 a, u32 b) {
    if (b <= a) b = a;
    return b;
}

// (unidentified: 1 <= x <= 15)
BOOL IsChildAidValid(u32 x) {
    if (x >= 1 && x <= 15) return 1;
    return 0;
}

// (not WM; unidentified helper: stores a u16 through func_02122e24, id 13)
u32 func_02121c10(u32 a, u32 b) {
    u16 v = (u16)b;
    return func_02122e24(a, 13, &v);
}

// WM_SetWEPKey (request 20)
u32 WM_SetWEPKey(WMCallback cb, u32 wepmode, void *key) {
    u32 r = WMi_CheckIdle();
    if (r != 0) return r;
    if (wepmode > 3) return 6;
    if (wepmode != 0) {
        if (key == 0) return 6;
        DC_StoreRange(key, 0x50);
    }
    WMi_SetCallbackTable(20, cb);
    r = func_0211f01c(20, 2, wepmode, key);
    if (r == 0) r = 2;
    return r;
}

// WM_SetWEPKeyEx (request 39)
u32 WM_SetWEPKeyEx(WMCallback cb, u32 wepmode, u32 wepkeyid, void *key) {
    u32 r = WMi_CheckIdle();
    if (r != 0) return r;
    if (wepmode > 3) return 6;
    if (wepmode != 0) {
        if (key == 0) return 6;
        DC_StoreRange(key, 0x50);
    }
    WMi_SetCallbackTable(39, cb);
    r = func_0211f01c(39, 3, wepmode, key, wepkeyid);
    if (r == 0) r = 2;
    return r;
}

// WM_SetGameInfo (request 24)
u32 WM_SetGameInfo(WMCallback cb, void *userGameInfo, u32 size, u32 ggid, u16 tgid, u8 attr) {
    u32 r = WMi_CheckStateEx(2, 7, 9);
    if (r != 0) return r;
    if (userGameInfo == 0) return 6;
    if (size > 0x70) return 6;
    MIi_CpuCopy16(userGameInfo, data_021fff00, size);
    DC_StoreRange(data_021fff00, size);
    WMi_SetCallbackTable(24, cb);
    r = func_0211f01c(24, 5, data_021fff00, size, ggid, tgid, attr);
    if (r == 0) r = 2;
    return r;
}

// WM_SetBeaconIndication (request 25)
u32 WM_SetBeaconIndication(WMCallback cb, u32 flag) {
    u32 r = WMi_CheckIdle();
    if (r != 0) return r;
    if (flag != 0 && flag != 1) return 6;
    WMi_SetCallbackTable(25, cb);
    r = func_0211f01c(25, 1, flag);
    if (r == 0) r = 2;
    return r;
}

// WM_MeasureChannel (request 29)
u32 WM_SetLifeTime(WMCallback cb, u32 ccaMode, u32 edThreshold, u32 channel, u16 measureTime) {
    u32 r = WMi_CheckIdle();
    if (r != 0) return r;
    WMi_SetCallbackTable(29, cb);
    r = func_0211f01c(29, 4, ccaMode, edThreshold, channel, measureTime);
    if (r == 0) r = 2;
    return r;
}

// WM_SetLifeTime (request 30)
u32 func_021218d0(WMCallback cb, u32 tableNumber, u32 camInterval, u32 frameInterval, u16 beaconInterval) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(1, 2);
    u16 *req;
    if (r != 0) return r;
    WMi_SetCallbackTable(30, cb);
    req = (u16 *)w->req;
    req[0] = 30;
    req[1] = tableNumber;
    req[2] = camInterval;
    req[3] = frameInterval;
    req[4] = beaconInterval;
    r = func_0211f01c(30, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_SetEntry (request 33; name inferred)
u32 WM_SetEntry(WMCallback cb, u32 arg) {
    u32 r = WMi_CheckStateEx(2, 7, 9);
    if (r != 0) return r;
    WMi_SetCallbackTable(33, cb);
    r = func_0211f01c(33, 1, arg);
    if (r == 0) r = 2;
    return r;
}

// WM_StartKeySharing
u32 WM_StartKeySharing(WMPool *ds, u32 port) {
    return func_02121570(ds, port, 0xffff, 2, 1);
}

// WM_EndKeySharing
u32 func_02121838(WMPool *ds) {
    return func_021214b4(ds);
}

// WM_StartDataSharing
u32 func_02121570(WMPool *ds, u32 port, u32 aidBitmap, u32 dataLength, BOOL doubleMode) {
    u32 ack = 1;
    u32 aid;
    WMStatus *st;
    u16 mask;
    u32 r;
    st = func_0211f00c()->status;
    r = WMi_CheckStateEx(2, 9, 10);
    if (r != 0) return r;
    DC_InvalidateRange(&st->f0c, 4);
    if (st->f0c == 0) return 3;
    if (ds == 0) return 6;
    if (port >= 16) return 6;
    if (aidBitmap == 0) return 6;
    DC_InvalidateRange(&st->f184, 2);
    aid = st->f184;
    if (aid == 0) {
        DC_InvalidateRange(&st->f86, 2);
        ack = st->f86;
    }
    {
        volatile u32 zero = 0;
        MIi_CpuClearFast(zero, ds, 0x820);
    }
    ds->f808 = 0;
    ds->f80a = 0;
    ds->f80c = 0;
    ds->f810 = dataLength;
    ds->f816 = port;
    ds->f80e = 0;
    ds->f818 = (doubleMode != 0);
    mask = aidBitmap | (1 << aid);
    ds->f80e = mask;
    r = MATH_CountPopulation(mask);
    ds->f812 = r;
    ds->f814 = dataLength * r;
    if (ds->f814 > 0x1fc) {
        ds->f80e = 0;
        return 6;
    }
    ds->f814 = ds->f814 + 4;
    ds->f81c = 1;
    if (aid == 0) {
        int i;
        WMPacket *p;
        for (i = 0; i < 4; i++) {
            ds->pkt[i].hdr = ds->f80e & (ack | 1);
        }
        func_0211fb0c(port, func_02120ed4, ds);
        p = ds->pkt;
        for (i = 0; i < (ds->f818 == 1 ? 2 : 1); i++) {
            u32 ret;
            ds->f808 = (ds->f808 + 1) & 3;
            ret = func_0212052c(func_02120fe8, ds, p, ds->f814, ds->f80e & ack, ds->f816, 1);
            if (ret == 7) {
                ds->slot[i] = 0xffff;
                ds->f80a = (ds->f80a + 1) & 3;
            } else if (ret != 0) {
                if (ret != 2) {
                    ds->f81c = 5;
                    return 1;
                }
            }
            p++;
        }
    } else {
        ds->f80a = 3;
        func_0211fb0c(port, func_02120da4, ds);
    }
    return 0;
}

// WM_EndDataSharing
u32 func_021214b4(WMPool *ds) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(2, 9, 10);
    if (r != 0) return r;
    if (ds == 0) return 6;
    if (ds->f80e == 0 || (w->portCb[ds->f816] != func_02120ed4 && w->portCb[ds->f816] != func_02120da4)) {
        return 3;
    }
    func_0211fb0c(ds->f816, 0, 0);
    ds->f80e = 0;
    ds->f81c = 0;
    return 0;
}

// WM_StepDataSharing
u32 func_021210f0(WMPool *ds, u16 *data, u16 *out) {
    u32 flag2;
    u32 ack;
    u32 ready;
    u32 aid;
    WMStatus *st;
    u32 r;
    u32 rr;
    st = func_0211f00c()->status;
    r = WMi_CheckStateEx(2, 9, 10);
    if (r != 0) return r;
    DC_InvalidateRange(&st->f0c, 4);
    if (st->f0c == 0) return 3;
    if (ds == 0) return 6;
    if (data == 0) return 6;
    if (out == 0) return 6;
    DC_InvalidateRange(&st->f184, 2);
    aid = st->f184;
    if (aid == 0) {
        DC_InvalidateRange(&st->f86, 2);
        ack = st->f86;
    }
    if (ds->f81c == 5) return 1;
    if (ds->f81c != 1 && ds->f81c != 4) return 3;
    r = 5;
    if (aid == 0) {
        ready = 0;
        flag2 = 0;
        if (ds->f81c == 4) {
            u32 idx;
            ds->f81c = 1;
            idx = (u16)((ds->f808 + 3) & 3);
            rr = func_0212052c(func_02120fe8, ds, &ds->pkt[idx], ds->f814, ds->f80e & ack, ds->f816, 1);
            if (rr == 7) {
                ds->slot[idx] = 0xffff;
                ds->f80a = (ds->f80a + 1) & 3;
            } else if (rr != 0) {
                if (rr != 2) {
                    ds->f81c = 5;
                    return 1;
                }
            }
        }
        if (ds->f80c != ds->f80a) {
            ds->pkt[ds->f80c].hdr |= 1;
            MIi_CpuCopy16(&ds->pkt[ds->f80c], out, 512);
            ready = 1;
            r = 0;
            ds->f81a = ds->slot[ds->f80c];
            ds->f80c = (ds->f80c + 1) & 3;
            if (ds->f818 == 0 && ack != 0 && ds->pkt[ds->f808].hdr == 1) {
                flag2 = ready;
            } else {
                flag2 = 0;
            }
        }
        func_02120b0c(ds, 0);
        if (ready != 0) {
            func_02120c98(ds, 0, data);
            if (ds->f818 == 0) func_02120b0c(ds, flag2);
        }
    } else {
        ready = 0;
        if (ds->f81c == 4) {
            ds->f81c = 1;
            ready = 1;
        } else if (ds->f80c != ds->f808) {
            u32 idx = ds->f80c;
            if ((ds->pkt[idx].hdr & 1) == 0) {
                ds->pkt[idx].hdr |= 1;
            } else {
                MIi_CpuCopy16(&ds->pkt[idx], out, 512);
                ds->f81a = ds->slot[ds->f80c];
                ds->f80c = (ds->f80c + 1) & 3;
                ready = 1;
                r = 0;
            }
        }
        if (ready != 0) {
            u8 *p = &ds->pkt[ds->f80a].data[28];
            MIi_CpuCopy16(data, p, ds->f810);
            rr = func_0212052c(func_02120fe8, ds, p, ds->f810, ds->f80e, ds->f816, 1);
            ds->f80a = (ds->f80a + 1) & 3;
            if (rr != 2) {
                if (rr != 0) {
                    ds->f81c = 5;
                    r = 1;
                }
            }
        }
    }
    return r;
}

// WM data sharing: send-complete callback
void func_02120fe8(WMMsg *msg) {
    WMArm9Buf *w = func_0211f00c();
    WMStatus *st = w->status;
    WMPool *ds;
    u32 err, aid;
    ds = (WMPool *)w->portArg[msg->f0a];
    if (w->portCb[msg->f0a] != func_02120ed4 && w->portCb[msg->f0a] != func_02120da4) return;
    if (ds == 0) return;
    if (ds != (WMPool *)msg->f20) return;
    DC_InvalidateRange(&st->f184, 2);
    err = msg->errcode;
    aid = st->f184;
    if (err == 0) {
        if (aid != 0) return;
        ds->slot[ds->f80a] = msg->f1a >> 1;
        ds->f80a = (ds->f80a + 1) & 3;
        return;
    }
    if (err == 10) {
        if (aid != 0) ds->f80a = (ds->f80a + 3) & 3;
        ds->f81c = 4;
        return;
    }
    ds->f81c = 5;
}


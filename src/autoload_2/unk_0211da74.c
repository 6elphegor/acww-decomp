// mwcc-flags: -nothumb -O4,p
// NitroSDK CARD (card_common.c): CARDi_IdentifyBackupCore (func_0211da74), autoload_2 0x0211da74-0x0211dc4c. ARM, mwcc 1.2/base -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef long long s64;
typedef int BOOL;

typedef struct { u32 head, tail; } OSQ;
typedef struct { u32 year, month, day; s32 week; } RTCDate;
typedef struct { s32 hour, minute, second; } RTCTime;
typedef struct { u32 w[0x30]; } OST;

typedef struct {
    u32 lock;
    u32 f4, f8, fc, f10;
    u32 command;
    u32 f18;
    u32 f1c;
    u32 result;
} RTCWork;

typedef struct {
    u32 result;
    u32 command;
    u32 f8;
    u32 srcBuf;
    u32 dstBuf;
    u32 len;
    u32 f18;
    u32 f1c, f20, f24, f28, f2c, f30, f34, f38, f3c;
} CARDCmd;

typedef struct CARDCommon {
    CARDCmd *cmd;
    u32 f4;
    volatile u32 lockOwner;
    volatile u32 lockCount;
    OSQ queue;
    u32 lockType;
    u32 src;
    u32 dst;
    u32 len;
    u32 op;
    u32 f2c, f30, f34;
    void (*callback)(void *);
    void *cbArg;
    void (*task)(struct CARDCommon *);
    OST thread;
    OST *curThread;
    u32 priority;
    OSQ tq;
    volatile u32 flag;
    u32 f118, f11c;
    u8 buf[0x100];
} CARDCommon;

typedef struct {
    void (*fn)(void *);
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10, f14, f18, f1c;
    u32 buf[512];
} RomDev;

extern RTCWork data_021feb90;
extern u16 data_021feb8c;
extern CARDCommon data_021fec00;
extern u32 data_021febb4;
extern u8 data_021febc0[];
extern u32 data_021ff220;
extern RomDev data_021ff240;
extern u32 data_021fcc2c[];
extern u32 data_0213c1c8[];

u32 func_01ffa2ec(void);
void func_01ffa3d4(u32);
void func_02000b44(void *);
void func_0206d49c(void);
void func_021124a0(u32);
void func_021124bc(u32);
void func_02113384(void *, u32);
void func_0211366c(void *);
void func_021136a0(void *);
void func_02113720(void *);
void func_02113a70(void *, void (*)(void *), void *, void *, u32, u32);
void func_02114594(void *, u32);
void func_021145cc(void *, u32);
void func_021145f0(void);
void func_021159a8(u32);
void func_02115ea8(u32, void *, u32);
void func_02115fb4(void *, u32, u32);
void func_02116048(const void *, void *, u32);
void func_02117dcc(void);
BOOL func_02117e8c(u32, u32);
s32 func_02117dd8(u32, u32, u32);
void func_02117eb4(u32, void *);
void func_0211cbd0(void);
void func_0211cbe8(void);
void func_0211cc7c(void);
void func_0211e8fc(void *);
void func_0211e958(void);
BOOL func_0211e7c0(void *, u32, u32);
void func_0211eac8(void);
void func_0211e688(u32, u32);
BOOL func_0211e728(void *);
BOOL func_0211e3fc(void *);

u32 func_0211d250(u32, u32, void (*)(void), u32);
u32 func_0211d324(u32, void (*)(void), u32);
u32 func_0211d3e4(u32, void (*)(void), u32);
BOOL func_0211d4e4(u32);
BOOL func_0211d538(void);
BOOL func_0211d528(void);
BOOL func_0211d548(void);
s32 func_0211d5d0(RTCTime *);
s32 func_0211d5ec(RTCDate *);
void func_0211d798(u32);
void func_0211d7a8(void);
u32 func_0211d7d4(void);
void func_0211d7e4(void);
void func_0211d8ec(u32, u32);
void func_0211d990(u32, u32);
void func_0211da2c(void (*)(CARDCommon *));
void func_0211da74(s32);
void func_0211ded8(CARDCommon *);
void *func_0211e094(void);
BOOL func_0211e0a0(void);
void func_0211e258(CARDCommon *);
void func_0211e2fc(void *);
BOOL func_0211d720(void);
BOOL func_0211d73c(void);

#define REG_MCCNT1 (*(volatile u32 *)0x040001a4)
typedef struct {
    u32 total_size, sect_size, page_size, addr_width, program_page, write_page, write_page_total, erase_chip, erase_chip_total, erase_sector;
} Spec;
typedef struct { u32 result; s32 type; u32 id, src, dst, len; Spec spec; } Arg;
// CARDi_IdentifyBackupCore (SDK text shape: nested spec struct, switch with default: goto invalid_type first)
void func_0211da74(s32 type) {
    Arg *const p = (Arg *)data_021fec00.cmd;
    func_02115fb4(&p->spec, 0, sizeof(p->spec));
    p->type = type;
    if (type != 0) {
        const u32 size = (u32)(1 << ((type >> 8) & 0xff));
        const s32 device = type & 0xff;
        p->spec.total_size = size;
        if (device == 1) {
            switch (size) {
            default:
                goto invalid_type;
            case 0x200:
                p->spec.page_size = 0x10; p->spec.addr_width = 1; p->spec.program_page = 0x4f;
                break;
            case 0x2000:
                p->spec.page_size = 0x20; p->spec.addr_width = 2; p->spec.program_page = 0x4f;
                break;
            case 0x10000:
                p->spec.page_size = 0x80; p->spec.addr_width = 2; p->spec.program_page = 0x9e;
                break;
            }
        } else if (device == 2) {
            switch (size) {
            default:
                goto invalid_type;
            case 0x40000:
                p->spec.write_page = 0x18b; p->spec.write_page_total = 0x127f; p->spec.erase_sector = 0x127f; p->spec.erase_chip_total = 0x13435; p->spec.erase_chip = 0x13435;
                break;
            case 0x80000:
            case 0x100000:
                p->spec.write_page = 0x18b; p->spec.write_page_total = 0; p->spec.erase_sector = 0x127f; p->spec.erase_chip_total = 0x13435;
                break;
            }
            p->spec.sect_size = 0x10000; p->spec.page_size = 0x100; p->spec.addr_width = 3; p->spec.program_page = 0x4f;
        } else if (device == 3) {
            switch (size) {
            default:
                goto invalid_type;
            case 0x2000:
            case 0x8000:
                break;
            }
            p->spec.page_size = size; p->spec.addr_width = 2;
        } else {
          invalid_type:
            p->type = 0;
            p->spec.total_size = 0;
            data_021fec00.cmd->result = 3;
            return;
        }
    }
}

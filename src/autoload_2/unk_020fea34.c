// mwcc-flags: -O4,p
// H5_020fea34 (D001 region): autoload_2 0x020fea34-0x020fedcc, THUMB code (the build's default -thumb is kept, no -nothumb), mwcc 1.2/base, C, -O4,p.
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
#define PXI_FIFO_TAG_NVRAM 4
#define SPI_PXI_START_BIT 0x02000000
#define SPI_PXI_END_BIT 0x01000000
#define SPI_PXI_INDEX_SHIFT 16
#define SPI_PXI_COMMAND_NVRAM_WREN 0x20
#define SPI_PXI_COMMAND_NVRAM_WRDI 0x21
#define SPI_PXI_COMMAND_NVRAM_RDSR 0x22
#define SPI_PXI_COMMAND_NVRAM_READ 0x23
#define SPI_PXI_COMMAND_NVRAM_PW 0x25
#define SPI_PXI_COMMAND_NVRAM_SR 0x2d
#define TRUE 1
#define FALSE 0

static inline BOOL SPI_NvramWriteEnable(void)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | SPI_PXI_END_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_WREN << 8), 0))
    {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SPI_NvramWriteDisable(void)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | SPI_PXI_END_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_WRDI << 8), 0))
    {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SPI_NvramReadStatusRegister(u8 *pData)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_RDSR << 8) | ((u32)pData >> 24), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (1 << SPI_PXI_INDEX_SHIFT) | (((u32)pData >> 8) & 0x0000ffff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_END_BIT | (2 << SPI_PXI_INDEX_SHIFT) | (((u32)pData << 8) & 0x0000ff00), 0))
    {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SPI_NvramReadDataBytes(u32 address, u32 size, u8 *pData)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_READ << 8) | ((address >> 16) & 0x000000ff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (1 << SPI_PXI_INDEX_SHIFT) | (address & 0x0000ffff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (2 << SPI_PXI_INDEX_SHIFT) | ((size >> 16) & 0x0000ffff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (3 << SPI_PXI_INDEX_SHIFT) | (size & 0x0000ffff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (4 << SPI_PXI_INDEX_SHIFT) | ((u32)pData >> 16), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_END_BIT | (5 << SPI_PXI_INDEX_SHIFT) | ((u32)pData & 0x0000ffff), 0))
    {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SPI_NvramPageWrite(u32 address, u16 size, const u8 *pData)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_PW << 8) | ((address >> 16) & 0x000000ff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (1 << SPI_PXI_INDEX_SHIFT) | (address & 0x0000ffff), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (2 << SPI_PXI_INDEX_SHIFT) | size, 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM, (3 << SPI_PXI_INDEX_SHIFT) | ((u32)pData >> 16), 0))
    {
        return FALSE;
    }
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_END_BIT | (4 << SPI_PXI_INDEX_SHIFT) | ((u32)pData & 0x0000ffff), 0))
    {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SPI_NvramSoftwareReset(void)
{
    if (0 > PXI_SendWordByFifo(PXI_FIFO_TAG_NVRAM,
                          SPI_PXI_START_BIT | SPI_PXI_END_BIT | (0 << SPI_PXI_INDEX_SHIFT) | (SPI_PXI_COMMAND_NVRAM_SR << 8), 0))
    {
        return FALSE;
    }
    return TRUE;
}

// NVRAM access state machine (PXI tag 4): sends the SPI NVRAM command words through the NitroSDK-style
// SPI_Nvram* inline helpers, then polls the PXI result flag / status register.
u32 NVRAMm_ExecuteCommand(u32 cmd, u32 address, u16 size, u32 data)
{
    BOOL result = FALSE;
    u64 start;
    for (;;) {
        if (result == FALSE) {
            data_021f5c54 = 0;
            switch (cmd) {
            case 1:
                result = SPI_NvramReadDataBytes(address, size, (u8 *)data);
                break;
            case 2:
                result = SPI_NvramWriteEnable();
                break;
            case 3:
                result = SPI_NvramPageWrite(address, size, (const u8 *)data);
                start = OS_GetTick();
                break;
            case 4:
            case 5:
                result = SPI_NvramReadStatusRegister(data_021f5c80);
                break;
            case 6:
                result = SPI_NvramSoftwareReset();
                break;
            case 7:
                result = SPI_NvramWriteDisable();
                break;
            }
        } else if (data_021f5c54 == 1) {
            result = FALSE;
            if (data_021f5c50 != 0) {
                break;
            }
            switch (cmd) {
            case 1:
                return TRUE;
            case 2:
                cmd = 4;
                break;
            case 3:
                cmd = 5;
                break;
            case 4:
            case 5:
                DC_InvalidateRange(data_021f5c80, 1);
                if (cmd == 4) {
                    if (data_021f5c80[0] & 2) {
                        cmd = 3;
                        break;
                    }
                    return FALSE;
                } else {
                    if ((data_021f5c80[0] & 1) == 0) {
                        return TRUE;
                    }
                    if ((data_021f5c80[0] & 0x20) != 0 || 4000 < ((OS_GetTick() - start) << 6) / 0x82ea) {
                        cmd = 6;
                    } else {
                        WaitByLoop(0x4000);
                    }
                }
                break;
            case 6:
                return result;
            case 7:
                return TRUE;
            }
        }
    }
    return result;
}

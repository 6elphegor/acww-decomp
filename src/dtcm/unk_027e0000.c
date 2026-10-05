// mwcc-flags: -nothumb
// NitroSDK OS (os_irqTable.c): OS_IRQTable, the interrupt handler table, and OSi_IrqCallbackInfo, the DMA/timer
// callback records, DTCM .data 0x027e0000-0x027e00b8. A data-only unit: the file's handlers (OSi_IrqDma0..3,
// OSi_IrqTimer0..3, the dummy handler) are in ITCM (src/itcm), and a unit cannot own ranges in two modules.
// ITCM code also uses the name of the table as the DTCM start address.
//
// The objects are placed with the SDK's DTCM section pragma, as in NitroSDK's os_irqTable.c. The callback records
// are zero but sit between initialised data in the DTCM image (the DTCM autoload has no bss): the SDK this game
// was built with defined the DTCM section with one name for data and zero data, so zero objects stay in the image.
// mwcc does the same with the one-name definition below (a zero object of a two-name section, or of plain C, goes
// to bss). The build places the `.dtcm` sections of DTCM units, see tools/bss_units.py.
// The records are 8 x 12 bytes; other code uses the labels of members of records 0 (DMA 0) and 4 (timer 0),
// recorded in config/usa/arm9/dtcm/lcf_symbols.txt.
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned long u32;
typedef void (*OSIrqFunction)(void);

typedef struct OSIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

void OS_IrqDummy(void); // OS_IrqDummy
void OSi_IrqDma0(void);
void OSi_IrqDma1(void);
void OSi_IrqDma2(void);
void OSi_IrqDma3(void);
void OSi_IrqTimer0(void);
void OSi_IrqTimer1(void);
void OSi_IrqTimer2(void);
void OSi_IrqTimer3(void);

#pragma section DTCM begin

// OS_IRQTable
OSIrqFunction data_027e0000[22] = {
    OS_IrqDummy,  // V-blank
    OS_IrqDummy,  // H-blank
    OS_IrqDummy,  // V-counter
    OSi_IrqTimer0,
    OSi_IrqTimer1,
    OSi_IrqTimer2,
    OSi_IrqTimer3,
    OS_IrqDummy,  // serial
    OSi_IrqDma0,
    OSi_IrqDma1,
    OSi_IrqDma2,
    OSi_IrqDma3,
    OS_IrqDummy,  // keypad
    OS_IrqDummy,  // cartridge
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
    OS_IrqDummy,
};

// OSi_IrqCallbackInfo
OSIrqCallbackInfo data_027e0058[8];

#pragma section DTCM end

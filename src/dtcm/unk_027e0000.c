// mwcc-flags: -nothumb
// NitroSDK OS (os_irqTable.c): OS_IRQTable, the interrupt handler table in DTCM, .data 0x027e0000-0x027e0058. A
// data-only unit: the file's handlers (OSi_IrqDma0..3, OSi_IrqTimer0..3, the dummy handler) are in ITCM
// (src/itcm), and a unit cannot own ranges in two modules. The callback records after the table
// (0x027e0058-0x027e00b8) are zero and still come from the original image: as plain data mwcc puts a zero
// initialiser in .bss. ITCM code also uses the name as the DTCM start address.
typedef void (*OSIrqFunction)(void);

void func_01ff8160(void); // OS_IrqDummy
void OSi_IrqDma0(void);
void OSi_IrqDma1(void);
void OSi_IrqDma2(void);
void OSi_IrqDma3(void);
void OSi_IrqTimer0(void);
void OSi_IrqTimer1(void);
void OSi_IrqTimer2(void);
void OSi_IrqTimer3(void);

OSIrqFunction data_027e0000[22] = {
    func_01ff8160,  // V-blank
    func_01ff8160,  // H-blank
    func_01ff8160,  // V-counter
    OSi_IrqTimer0,
    OSi_IrqTimer1,
    OSi_IrqTimer2,
    OSi_IrqTimer3,
    func_01ff8160,  // serial
    OSi_IrqDma0,
    OSi_IrqDma1,
    OSi_IrqDma2,
    OSi_IrqDma3,
    func_01ff8160,  // keypad
    func_01ff8160,  // cartridge
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
    func_01ff8160,
};

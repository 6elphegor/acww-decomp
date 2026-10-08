#ifndef NITRO_PXI_PTR_H
#define NITRO_PXI_PTR_H

// PXI messages that carry an address (the sound command list, the card request block, the NVRAM buffer, a WM
// request): on the DS the 26-bit data field is enough for a main RAM address. Here the ARM7 side is host code in the
// same process (modern/host/pxi7.c), and it gets the pointer itself: PXI_PointerWord hands it over before the message
// goes out and gives the bits the DS would send (the message is sent unchanged; the ARM7 side ignores those bits).
// Self-contained (no includes): units with their own basic types include it too.
#ifdef __cplusplus
extern "C" {
#endif
void HostPxi_PutPointer(unsigned int tag, const void *p);  // (modern/host/pxi7.c)
#ifdef __cplusplus
}
#endif
static inline unsigned int PXI_PointerWord(unsigned int tag, const void *p) {
    HostPxi_PutPointer(tag, p);
    return (unsigned int)(__UINTPTR_TYPE__)p;
}

#endif

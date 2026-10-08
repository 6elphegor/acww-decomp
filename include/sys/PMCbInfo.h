#ifndef SYS_PMCBINFO_H
#define SYS_PMCBINFO_H

// Power-management sleep callback record (NitroSDK PMiCallbackInfo), linked into the pre/post-sleep lists by
// PMi_AppendList / PMi_PrependList / PMi_DeleteList (autoload_2 unk_0211*.c); embedded in the sound player/stream objects.
// Pure C/C++ (no types.h): included by NitroSDK .c files that declare their own basic typedefs.

typedef struct PMCbInfo PMCbInfo;
struct PMCbInfo {
    /* 0x0 */ void (*cb)(void *);
    /* 0x4 */ void *arg;
    /* 0x8 */ PMCbInfo *next;
};

// A PMIC register read in flight (data_021feb6c[register]): PMi_ReadRegisterAsync sets the destination,
// PMi_CommonCallback stores the value there and sets the flag. 8 bytes on the DS; one array (the DS label
// data_021feb70 = &data_021feb6c[0].ptr read the destination with the DS stride: on 64-bit hosts the stride and the
// member's offset differ).
typedef struct PMRegInfo {
    /* 0x0 */ volatile unsigned short flag;
    /* 0x4 */ unsigned short *ptr;
} PMRegInfo;

#endif // SYS_PMCBINFO_H

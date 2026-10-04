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

#endif // SYS_PMCBINFO_H

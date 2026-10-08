#ifndef SND_SNDSEQPLAYER_H
#define SND_SNDSEQPLAYER_H

#include "types.h"
#include "snd/SndSeqHandle.h"

// The NNS sequence player a sound handle points to (struct Seq of the sound library: src/autoload_2/unk_021093f4.c,
// unk_02109830.c, ..., where the type is still file-local), up to the sequence numbers set by NNS_SndPlayerSetSeqNo /
// NNS_SndPlayerSetSeqArcNo: the game reads only those (src/autoload_2/unk_020ef150.cpp, unk_020f30fc.cpp). Pointer
// members as in the library's type, so the numbers are at their place on 64-bit hosts too.
struct SndSeqPlayer {
    /* 0x00 */ void *handle;
    /* 0x04 */ void *player;
    /* 0x08 */ void *heap;
    /* 0x0c */ void *plink[2];  // NNSFndLink
    /* 0x14 */ void *glink[2];  // NNSFndLink
    /* 0x1c */ u32 fader[4];
    /* 0x2c */ u8 status;
    /* 0x2d */ u8 started;
    /* 0x2e */ u8 f2e;
    /* 0x2f */ u8 pending;
    /* 0x30 */ u32 tag;
    /* 0x34 */ u16 cmd;
    /* 0x36 */ u16 f36;
    /* 0x38 */ u16 seqNo;
    /* 0x3a */ u16 seqArcIndex;  // the sequence archive's index (NNS_SndPlayerSetSeqArcNo)
};
#if !defined(HOST64) && defined(__cplusplus)
static_assert(__builtin_offsetof(SndSeqPlayer, seqNo) == 0x38, "SndSeqPlayer layout");
#endif

static inline SndSeqPlayer *SndSeqHandle_Player(const SndSeqHandle *h) {
    return (SndSeqPlayer *)h->p;
}

#endif

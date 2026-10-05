#ifndef SND_BGMOBJ_H
#define SND_BGMOBJ_H

// View of the sound-manager object passed to SndMgr_GetVoiceSeqIndex / SndMgr_PlayVoice (src/autoload_2/unk_020ed81c.cpp,
// unk_020edd58.cpp, unk_020ee98c.cpp): only the voice type at 0x44 is known.
#include "types.h"

struct BgmObj {
    /* 0x00 */ u8 pad[0x44];
    /* 0x44 */ s32 voiceType;
};

#endif

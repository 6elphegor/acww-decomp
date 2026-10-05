#ifndef GFX_G3DRESACCESS_H
#define GFX_G3DRESACCESS_H

#include "types.h"

// NSBMD/NSBTX resource header view (TEX0 block offsets and dictionaries): material / texture / palette lookups.
// Members defined in src/main/unk_02055c38.cpp (0x02056fcc-0x02057120).
class G3dResAccess {
public:
    u32 findNodeIdx(s32 a);
    u32 getPlttSize(s32 idx);
    void findPlttData(void);
    void *getPlttData(s32 idx);
    s32 findPlttIdx(s32 a);
    u32 getTexSize(s32 idx);
    void *getTexData(s32 idx);
    void *findTexData(void);
    s32 findTexIdx(s32 a);
    u32 getTexImageOffset(void);
    s32 findMatIdx(s32 a);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c[2];
    /* 0x14 */ u32 texDataOffset;
    /* 0x18 */ u8 unk_18[0x18];
    /* 0x30 */ u16 plttDataSize;
    /* 0x32 */ u16 unk_32;
    /* 0x34 */ u16 plttDictOffset;
    /* 0x36 */ u16 unk_36;
    /* 0x38 */ u32 plttDataOffset;
    /* 0x3c */ u8 unk_3c[6];
    /* 0x42 */ u16 texDictEntryOffset;
};

#endif // GFX_G3DRESACCESS_H

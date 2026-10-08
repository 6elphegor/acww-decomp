#ifndef GFX_TEXPATVRAMUPLOADER_H
#define GFX_TEXPATVRAMUPLOADER_H

#include "types.h"
#include "gfx/TexVramTask.h"

// The upload methods of a TexPatVramTasks (gfx/TexPatVramAnim.h; the same two tasks): uploads one texture image /
// palette of a .nsbtx resource through the task pair. Defined in src/main/unk_02055c38.cpp, which still has its own
// copy of this declaration (to be replaced by this header).
struct TexPatVramUploader {
    TexVramTask tasks[2];
    BOOL uploadByName(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b);
    BOOL uploadByIdx(u8 *hdr, s32 i1, s32 i2, u8 *x, s32 a, s32 b);
};

#endif

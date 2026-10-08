#ifndef GFX_PATTERNTEXCACHE_H
#define GFX_PATTERNTEXCACHE_H

#include "types.h"
#include "save/Pattern.h"
#include "sys/RecordFile.h"

// The textures of the designs (patterns) shown in 3D: the palette file, the texture keys of the players' and the Able
// Sisters' patterns (sPlayerPatternTexKeys / sAblePatternTexKeys: the textures copied into the resource cache) and the
// texture work buffers. One instance, sPatternTexCache (PatternTexCache_Get). Defined in src/main/unk_02070560.cpp.

// The 16 palettes of /menu/desi/b_myd_ten0_obj.bpl.
class PatternPaletteFile {
public:
    u8 *fileData;
    u8 *palettes[16];
    PatternPaletteFile();
    ~PatternPaletteFile();
    void unload();
    void load();
    void clear();
};

// The texture keys (kept in the globals sPlayerPatternTexKeys / sAblePatternTexKeys).
class PatternTexKeys {
public:
    u32 unk_00;
    PatternTexKeys();
    ~PatternTexKeys();
};

class PatternTexCache {
public:
    PatternTexKeys texKeys;
    PatternPaletteFile paletteFile;
    PatternTexCache();
    ~PatternTexCache();
    void reset();
    u8 *getPalette(s32 i);
    void load();
    void unload();
    void createTextures();
    void setAbleDirty(s32 bit);
    BOOL testAndClearAbleDirty(s32 bit);
    u8 *getAbleTexKey(s32 i);
    u8 *getPlayerTexKey(s32 a, s32 b);
};

// The work buffer of a cloth texture (ClothTex_*: a copy of /cloth/... .nsbtx, 0x2c4 bytes).
struct ClothTexStorage {
    u32 v[0xb1];
};

// The names, palettes and tastes of the preset designs (/myOrg/myD.bin, 0x32 records of 0x2c bytes):
// sPatternPresetInfo (PatternPresetInfo_Get).
class PatternPresetInfoFile {
public:
    RecordFile file;
    PatternPresetInfoFile();
    ~PatternPresetInfoFile();
};

// The preset design loaded last (PatternSrc_GetPreset): sPresetPatternBuffer.
class PresetPatternBuffer {
public:
    Pattern pattern;
    PresetPatternBuffer();
    ~PresetPatternBuffer();
    BOOL load(s32 n);
    Pattern *getPattern();
};

#endif

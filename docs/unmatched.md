# What is not matched yet

Everything not listed here is built from source: compiled C/C++ or, where the original was hand-written assembly,
an assembly unit (see [`assembly.md`](assembly.md)). The lists below are the ranges that no `complete` unit in a
`config/usa/arm9/**/delinks.txt` covers yet; the build still takes those bytes from the original image. When you
match something, the per-module numbers can be recomputed the same way: section size from the header of
`delinks.txt`, minus the ranges of the `complete` units.

## Status

Code (`.text`) built from source:

| Module | `.text` bytes | Built from source | Not built | Functions not built |
|---|--:|--:|--:|--:|
| ARM9 main | 797,444 | 797,224 (99.97%) | 220 (data inside `.text`, see below) | 0 of 11,879 |
| `autoload_2` (NitroSDK, NitroSystem, MSL, runtime, in-house library) | 320,532 | 312,048 (97.4%) | 8,484 | 12 of 2,189 |
| ITCM | 23,264 | 22,560 (97.0%) | 704 (624 in 2 functions, 80 of data) | 2 of 158 |
| Overlays (99 with code) | 1,450,796 | 1,450,796 (100%) | 0 | 0 |
| **Total** | **2,592,036** | **2,582,628 (99.6%)** | **9,408** | **14** |

Data sections owned by a source file:

| Module | Bytes | Owned by a unit | Not owned |
|---|--:|--:|--:|
| ARM9 main (`.rodata`, `.data`, `.init`, `.ctor`, `.exception`, `.exceptix`) | 150,004 | 149,360 (99.6%) | 644 |
| `autoload_2` (`.rodata`, `.data`) | 28,076 | 27,692 (98.6%) | 384 |
| `autoload_3` (bss of main and the libraries) | 802,752 | 801,752 (99.9%) | 1,000 |
| DTCM (`.data`) | 1,120 | 104 (9.3%) | 1,016 |
| Overlays (all sections; 39 overlays are data only) | 505,636 | 505,636 (100%) | 0 |

Data with no code of its own (sprite tables, the crash-screen font, the process-profile table, NitroSDK/NitroSystem/MSL
tables such as the sine table and the character-class maps, OS_IRQTable) is built by data-only units. Library units
that were several original files are split by file where their data needed it (each file's data and bss are sorted
by size on their own, see `tools/pipeline/linking.md`, "Data of library units").

## Functions not built from source

### `autoload_2`

| Address | Size | Library | What it does | Closest attempt / remaining difference |
|---|--:|---|---|---|
| `0x020f4904` | 0x158 | in-house (sound) | Fixed-point distance of a position to the listener, three modes | One instruction-order difference in case 2 (6 diff lines). mwcc's pre-RA scheduler gives one of two orders, neither the original (`ldr x; ldr y; sub x; sub y; asr x; asr y; smull x`): with in-place or forward-substituted shifts the `asr y` comes first and `x >> 3` lands in r0; with `x` fused (`(p->x - K) >> 3`) the registers are right but `sub y; asr y` sink below `smull x`. About 1,700 statement orders, variable splits, struct/array locals, inline helpers and `FX_Mul` spellings (C and C++) give only these two orders. |
| `0x02102480` | 0x21c | NitroSystem G2D (CharCanvas) | Clear an area of an OBJ (1D mapping) canvas (`ClearArea1D`) | 22 diff lines, stack slots: in the original `mode * 64 / 8` is a compiler temporary and `hIn` a named slot; the attempt gets it the other way round. Two scheduling differences remain. A second attempt (written like the linked `ClearAreaLine`, `GetCharIndex1D` called with six scalars, declaration order searched) has every instruction right; only the spill slots of `hIn`, `mode` and `tileBytes` differ (original 0x18/0x44/0x48, attempt 0x48/0x18/0x44: mwcc spills `hIn` in a later round). Attempts in `pipeline_wip/phase3/M1/attempts`. |
| `0x02102cbc` | 0x27c | NitroSystem G2D (CharCanvas) | Per-character glyph blit (`LetterChar`, takes the blit parameter block of `DrawGlyph1D`/`DrawGlyphLine`) | Both loop bodies are the original's (one block-local bit reader per colour mode, as the 0x34-byte frame shows); the prologue is 3 instructions short (0x270 against 0x27c): the original keeps `mode` in r8 and spills the clipped start column (`sx`, later `sx * mode` in the same slot) and `rowStep` to `[sp]`/`[sp, #8]`. No declaration or statement order tried (several thousand compiles) gives that spill choice. Attempt in `pipeline_wip/phase3/M1/attempts`. |
| `0x02102f38` | 0x168 | NitroSystem G2D (CharCanvas) | Fill a pixel rectangle of one character (`ClearChar`) | The whole function matches except the 8x8 fill: the original stores the colour to `[sp]` and reloads it as the first argument of `MIi_CpuClearFast` with registers to spare. Only a `volatile` local reproduces that (an attempt with one matches byte for byte, declaration order searched); plain, address-taken, union, array, struct and inline-pointer forms are all kept in registers. Attempt in `pipeline_wip/phase3/M1/attempts`. |
| `0x02107ba0` | 0x10c | NitroSystem G3D | Texture SRT animation: rotation fetch with 3:1 interpolation | 12 diff lines: the instruction stream is the original with the registers of `idx` and `idx_sub` swapped. That attempt's source is not in the repository; rebuilt in the shape of the matched `GetTexSRTAnmVectorVal_` (labels `TEXSRT_ROT_NONINTERP`/`_INTERP_2`, `fx16` loads into `fx32` locals for `mla`), the weight-3 index always takes r1 and the function needs `lr` (144 lines), independent of declaration order, branch order, block-local indices, inline helpers and pointer forms. |
| `0x0210ae48` | 0x368 | NitroSystem sound | Start a sound capture (sets up the capture and PCM channels) | 22 diff lines, registers only: the PCM channel timer and the alarm offset (`32 >> !pcm8` times `timer >> 5`) have r5 and fp swapped; everything else, stack slots included, is the original. Needed: `SND_SetupChannelPcm(ch, format, data, ...)` argument order, an enum-typed wave format (`pcm8 ? SND_WAVE_FORMAT_PCM8 : SND_WAVE_FORMAT_PCM16`, a plain `0 : 1` inverts the conditional moves) and the local declaration order `startCh, period, capFmt, alarm, pcm8, first, len, timer, chFmt, c`. Declaration order, types and statement forms do not move the two values; giving the offset a longer live range does, so the original likely differs in where it is used. |
| `0x0210d174` | 0x8b4 | NitroSystem sound | Wave-stream block reader with IMA-ADPCM decoder | Register allocation; the original spills locals differently; several hundred diff lines. Probably needs the original stream-player source. |
| `0x0210ea0c` | 0x200 | NitroSystem sound | Capture effect callback (sample processing with a clamp to s16) | 67 diff lines: the original rematerialises -32768 for the compare (`mov #32768; rsb`) but keeps the stored -32768 in r9. An inline clamp `t = x; if (x < -32768) t = -32768; else if (x > 32767) t = 32767; return t;` with `l[j + base]` indexing and `n > base + 24` reproduces that constant handling and the shape of all four loops, but registers and a few instruction orders in the loops differ (130 diff lines; the original keeps `base` in ip and the clamp constants in r8/r9). |
| `0x0210f900` | 0xac | NitroSDK GX | `GX_SetBankForSubBG` | Only the compare tree of the switch differs (cases 0, 4, 0x80, 0x180; 4 falls through from 0x180 into 0x80). The original clusters {0, 4} behind a range check and roots the tree at 0x80; every available build (1.2 b56..sp4, 2.0, DSi) roots it at 4. mwcc clusters two cases only when their span max-min+1 is at most 4 ({0, 3} clusters, {0, 4} does not) and three only up to 7, independent of case order, `default`, operand type and -O level; the original's compiler accepts {0, 4} but not {0, 4, 8}. HGSS's SDK (a later compiler) has the same tree, so it is the SDK's compiler, not the source. Bodies, case order and registers are right. |
| `0x0210f9cc` | 0xb8 | NitroSDK GX | `GX_SetBankForARM7` | Same switch-tree difference: cases 0, 4, 8, 12; the original clusters {0, 4} and roots the tree at 8, mwcc roots it at 4. |
| `0x021239ec` | 0x46c | NitroSDK MB | `MB_ReadSegment`: read a ROM image (from a file or the system ROM header at 0x027ffe00) into the segment buffer, attach it to the cache, patch the autoload callback | 6 diff lines (3 instructions), the last statement only. The rest matches with: `p`/`rest` set from `buf`/`len` and then advanced by 0x160, the ROM size read through an inline helper (so the header base stays in a register), `file = &tmp` before `top`, and the region loop calling an inline `ReadRegion(&info, r)` (the length is loaded twice). Best last statement `*(u32 *)((u8 *)AutoloadCallback - rom->arm9RamAddr + (u32)cache->list[1].ptr) = 0xe12fff1e;` gives `ldr r0,[r6,#0x48]; ldr r3,=K; ... str r3,[r1,r0]` against the original's `ldr r3,[r6,#0x48]; ldr r0,=K; ... str r0,[r3,r1]`: the constant has to be allocated first. ~100 forms of that statement were tried (operand order and casts, temporaries, inline store helpers, `AutoloadCallback` as array or function). |
| `0x0212d78c` | 0x4d4 | MSL | Wide-character `parse_format` (`wprintf.c` format-string parser) | Only the dispatch of the conversion `switch` differs (56 diff lines, 16 bytes longer); everything else matches with MSL's `parse_format` (the version without `j`/`t`/`z`/`a`, `c >= 0x80 ? 0 : ...` digit test, `f.conversion_char = c; switch (c)`). The original has a table for cases 100..117 guarded by the lower bound only (`subs r0, r3, #0x64; addpl`) plus a separate test for 120; every available build (1.2, 2.0, DSi) splits off 100 and builds a bounds-checked table for 101..120, whatever the case order. Same family as the switch differences in [`assembly.md`](assembly.md) (probably the missing 1.2/sp1). |

### ITCM

| Address | Size | What it does | Closest attempt / remaining difference |
|---|--:|---|---|
| `0x01ffcd50` | 0x168 | Game H-blank handler, main engine (per-line BG3 affine parameters, DISPCNT bits, blending, palette entries) | 20 diff lines, all in the first block: the original loads the table base before the VCOUNT address, the attempt the other way round. Re-tried (M3): the per-line data is `gWeatherManager` +8 (`{s32 x, y; s16 pa}` x 192 x 2 buffers, BG3X/BG3Y/BG3PA), +0x1210 (`u16` BLDALPHA x 192 x 2), +0x1514 (line offset table indexed by +0x151c) and `sSkyGradient` (+0 buffer index, +4 `u16` colours x 192 x 2, +0x304/+0x306 backdrop colours); the backdrop goes through a stack `volatile u16` like `Sky_VBlankMain`. Operand order, statement order, inline `GX_GetVCount`, pointer locals and types do not change the schedule of the first block. |
| `0x01ffceb8` | 0x108 | Game H-blank handler, sub engine | 50 diff lines: the original keeps the palette pointer and `0x05000000` in r5/r4 from the start and reads VCOUNT first. Re-tried (M3): unlike the main handler, it addresses everything from base registers (`0x04000000`, `0x05000000`, `&sSkyGradient`, `&gWeatherManager` + 8 computed, not pooled); with pointer locals and `(u8 *)w + 8` the instruction multiset matches, only the schedule and two registers differ. |

## Data that no unit owns

### ARM9 main

| Range | Size | Contents |
|---|--:|---|
| `.text` 0x02000b48-0x02000b6c | 0x24 | `BuildInfo`: NitroSDK crt0.c's `_start_ModuleParams`, a C array (`void *const _start_ModuleParams[]`: the autoload list and its end, the autoload start, the static bss start and end from the linker script, the compressed-static end, the SDK version, the two NITRO code words). It is in `.text` because the SDK linker script places `crt0.o (.rodata)` right after `crt0.o (.text)`; mwcc 1.2 puts the C array in `.rodata`, so a C unit cannot own it in main's `.text` range, and dsd needs the symbol named `BuildInfo` |
| `.text` 0x02000b6c-0x02000b7c | 0x10 | A 16-byte key; `AxMail_GetDigestKey` (built from source) returns its address |
| `.text` 0x02000b84-0x02000c2c | 0xa8 | The `.version` block: the middleware tag strings `[SDK+...]` (DWC, BACKUP, Wi-Fi, CPS, SSL) that `OSi_ReferSymbol` callers pass to keep them linked |
| `.init` 0x020c5fa0-0x020c5fa4, `.ctor` 0x020d1f48-0x020d1f4c | 4 + 4 | An empty ARM static initialiser of a library-area file between the network file (0x020e9a08) and the task manager (0x020ed4bc); probably `ProcBase`'s file (next section) |
| `.rodata` 13 small ranges between 0x020c8b9c and 0x020d0c0c | 520 | Constants used by several units, not yet assigned to one. The largest, the building records `data_020d0a7c` (0x154, right after the rodata of `unk_020b0e60.cpp`, the only user), fits that file's size order, but adding it reorders the file's bss (no definition order found) |
| `.data` 11 objects of 8 bytes between units | 88 | Process profiles (`ProcProfile`), each right before the data of the file whose create function it names; adding one reorders that file's bss the same way (tried on `unk_0203d4d8.cpp`) |
| `.data` 0x020dc520, 0x020ddf8c, 0x020e74ec-0x020e7500 | 28 | `gVBlanksPerFrame`, a word of -1, and 20 zero bytes after the last unit's data |

### Libraries

| Range | Size | Contents |
|---|--:|---|
| `autoload_2` `.rodata` 0x02135e80-0x02135f44 | 196 | Two tables of the wave-stream block reader `0x0210d174` (not built) |
| `autoload_2` `.rodata` 0x0213a3f8-0x0213a410, `.data` 0x0213c204-0x0213c20c | 24 + 8 | Data of `MB_ReadSegment` (`0x021239ec`, not built): a table and the word pointing to it, and the string `"rom"` |
| `autoload_2` `.rodata` 0x0213a740-0x0213a748 | 8 | `__ptmf_null` of the C++ runtime |
| `autoload_2` `.data` 0x0213b120-0x0213b1a4 | 132 | `ProcBase` (next section) |
| `autoload_2` `.data` 0x0213bba4 | 4 | A constant of the SPL unit `unk_020fc984.cpp`; the code copies it as a 6-byte `VecFx16`, so its declaration is not the original object |
| `autoload_2` `.data` 0x0213c6b4-0x0213c6c0 | 12 | Zero bytes after the runtime's data; no reference |
| `autoload_3` 0x021c1b3c, 0x021c47bc, 0x021c5384, 0x021cb69c, 0x021ce63c, 0x021ef5c8 | 84 | Small bss objects of main between units (BGM clock, `gGfxMainOnTop`, the CPU matrix stack, `gTouchHoldFrames`, ...) |
| `autoload_3` 0x021f5974-0x021f5994, 0x021f59e4 | 32 + 4 | `ProcBase`'s factory state; `gProfileTable` (its file is not settled: after the task manager's bss, before the sound system's) |
| `autoload_3` 0x021f5c50-0x021f5ca0 | 80 | NVRAM / DWC account state: unaligned members shared by `unk_020fe848.c`, `unk_020fea34.c` and `unk_020fedcc.c`; not in one size order |
| `autoload_3` 0x021feb6c-0x021feb8c, 0x021ff4b8-0x021ff4cc | 32 + 20 | A PM register record and a WM message whose declared types are views, not the objects |
| `autoload_3` 0x021fff80-0x02200040 | 192 | MB game-info and WM-state bss: not one size order across their units; the WM-state words could not be ordered together with the `.data` of `unk_02124c40.c` |
| `autoload_3` 0x02200054-0x02200250, 0x0220064c-0x0220066c, 0x02200670-0x02200680 | 508 + 32 + 16 | CTRDG and MSL (`abort`/`exit`) bss of `unk_0212703c.c`, which is several files (it owns the console-stream data); `errno` and the signal table; 16 bytes at the end |
| DTCM `.data` 0x027e0058-0x027e00b8, 0x027e00c8-0x027e0460 | 96 + 920 | Zero-initialised SDK and game objects placed in DTCM (the IRQ callback records, the sound alarm array, `sMenuWipeLine`/`sMenuWipeEdge`, ...). The original placed them with the SDK's DTCM section pragma, which keeps them in the data image; plain C puts a zero initialiser in `.bss`. `OS_IRQTable` and the callback index table are built (`src/dtcm/`) |
| ITCM `.text` 0x01ff8ab4-0x01ff8ad4 | 0x20 | A table of the eight NitroSystem texture-SRT functions inside `.text`, right after the code of its file (`src/itcm/unk_01ff8228.c`). mwcc puts a `const` table in `.rodata` even under `#pragma define_section`/`#pragma section` (checked), and the ITCM module has no `.rodata` range, so the C unit cannot emit it in place yet |
| ITCM `.text` 0x01ffd0b4-0x01ffd0e4 | 0x30 | Six pointer-to-member constants of `ProcBase`'s file (next section) |

## `ProcBase`

`ProcBase` is the in-house base class of the game's tasks and scene objects (vtable 0x0213b154 in
`autoload_2`; 16 virtual functions, a defined pure virtual destructor, class-specific `operator new`/`delete`).
All of its code is built from source, but not yet as a real class:

* `src/autoload_2/unk_020ec848.cpp` defines its members as `extern "C"` functions whose identifiers are the
  mangled `symbols.txt` names and that take the object first, so the compiler emits no vtable, no D0/D1 and no C1.
  The vtable, the object counter and the pointer-to-member constants (`.data` 0x0213b120-0x0213b1a4) and the
  factory state (bss 0x021f5974-0x021f5994) still come from the original.
* Its original source file also has a part in ITCM: `vfunc_18`..`vfunc_2c`, `taskDraw`, `taskExecute` and
  `taskConnect` (`src/itcm/unk_01ffd0e4.cpp`, built) and the six pointer-to-member constants at 0x01ffd0b4-0x01ffd0e4
  (not owned).

A real-class version of the `autoload_2` part compiles byte-identically, with the vtable and data in the original
order. mwcc sorts all data objects of a file together, including the ones placed in ITCM, and the original order
has exactly one natural solution only when the six ITCM constants are part of the same file. A unit cannot yet
own a range in ITCM together with ranges in `autoload_2`. Until it can, the real-class version would need a
declaration order that is an artefact of the split, so the current form stays.

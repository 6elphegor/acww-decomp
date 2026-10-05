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
| `autoload_2` (NitroSDK, NitroSystem, MSL, runtime, in-house library) | 320,532 | 318,596 (99.4%) | 1,936 | 4 of 2,189 |
| ITCM | 23,264 | 22,560 (97.0%) | 704 (624 in 2 functions, 80 of data) | 2 of 158 |
| Overlays (99 with code) | 1,450,796 | 1,450,796 (100%) | 0 | 0 |
| **Total** | **2,592,036** | **2,589,176 (99.9%)** | **2,860** | **6** |

Data sections owned by a source file:

| Module | Bytes | Owned by a unit | Not owned |
|---|--:|--:|--:|
| ARM9 main (`.rodata`, `.data`, `.init`, `.ctor`, `.exception`, `.exceptix`) | 150,004 | 149,532 (99.7%) | 472 |
| `autoload_2` (`.rodata`, `.data`) | 28,076 | 27,944 (99.5%) | 132 |
| `autoload_3` (bss of main and the libraries) | 802,752 | 801,824 (99.9%) | 928 |
| DTCM (`.data`) | 1,120 | 1,120 (100%) | 0 |
| Overlays (all sections; 39 overlays are data only) | 505,636 | 505,636 (100%) | 0 |

Data with no code of its own (sprite tables, the crash-screen font, the process-profile table, NitroSDK/NitroSystem/MSL
tables such as the sine table and the character-class maps, OS_IRQTable and all of DTCM) is built by data-only units. Library units
that were several original files are split by file where their data needed it (each file's data and bss are sorted
by size on their own, see `tools/pipeline/linking.md`, "Data of library units").

## Functions not built from source

### `autoload_2`

| Address | Size | Library | What it does | Closest attempt / remaining difference |
|---|--:|---|---|---|
| `0x020f4904` | 0x158 | in-house (sound) | Fixed-point distance of a position to the listener, three modes | One instruction-order difference in case 2 (6 diff lines). mwcc's pre-RA scheduler gives one of two orders, neither the original (`ldr x; ldr y; sub x; sub y; asr x; asr y; smull x`): with in-place or forward-substituted shifts the `asr y` comes first and `x >> 3` lands in r0; with `x` fused (`(p->x - K) >> 3`) the registers are right but `sub y; asr y` sink below `smull x`. About 1,700 statement orders, variable splits, struct/array locals, inline helpers and `FX_Mul` spellings (C and C++) give only these two orders. Re-tried (U3): a shared `Mag(x, y, z)` / `Mag(const VecFx32 *)` inline for all three cases (mwcc evaluates inline arguments last to first, which breaks cases 0 and 1), case-2-only helpers with every parameter/sum order and split of the subtract/shift between caller and helper, the SDK's `FX_MUL` macro, `register` locals, unsigned subtracts, and 3,000 random case-2 forms: still never below 6 diff lines. |
| `0x0210f900` | 0xac | NitroSDK GX | `GX_SetBankForSubBG` | Only the compare tree of the switch differs (cases 0, 4, 0x80, 0x180; 4 falls through from 0x180 into 0x80). The original clusters {0, 4} behind a range check and roots the tree at 0x80; every available build (1.2 b56..sp4, 2.0, DSi) roots it at 4. mwcc clusters two cases only when their span max-min+1 is at most 4 ({0, 3} clusters, {0, 4} does not) and three only up to 7, independent of case order, `default`, operand type and -O level; the original's compiler accepts {0, 4} but not {0, 4, 8}. HGSS's SDK (a later compiler) has the same tree, so it is the SDK's compiler, not the source. Bodies, case order and registers are right. Re-checked (U1): the SDK's own form (ntrtwl NitroSDK `gx_vramcnt.c`: enum parameter, `GX_VRAMCNT_SetSubBG_`/`SetARM7_` inline switch) gives the same tree; adding a third empty case inside {0, 4} (e.g. `case 2:`) makes every build cluster it with exactly the original's shape plus one extra compare, which confirms a cluster-density threshold of the original compiler. |
| `0x0210f9cc` | 0xb8 | NitroSDK GX | `GX_SetBankForARM7` | Same switch-tree difference: cases 0, 4, 8, 12; the original clusters {0, 4} and roots the tree at 8, mwcc roots it at 4. |
| `0x0212d78c` | 0x4d4 | MSL | Wide-character `parse_format` (`wprintf.c` format-string parser) | Only the dispatch of the conversion `switch` differs (56 diff lines, 16 bytes longer); everything else matches with MSL's `parse_format` (the version without `j`/`t`/`z`/`a`, `c >= 0x80 ? 0 : ...` digit test, `f.conversion_char = c; switch (c)`). The original has a table for cases 100..117 guarded by the lower bound only (`subs r0, r3, #0x64; addpl`) plus a separate test for 120; every available build (1.2, 2.0, DSi) splits off 100 and builds a bounds-checked table for 101..120, whatever the case order. Same family as the switch differences in [`assembly.md`](assembly.md) (probably the missing 1.2/sp1). Re-checked (U1): `-O4,s` (the size matches, 0x4d4) and -O2/-O3, `-opt space/speed`, `-inline auto` give the same dispatch; no available build emits a lower-bound-only (`subs`/`addpl`) table at all, and extra default-mapped case labels inside 'd'..'u' (all 255 subsets of h/j/k/l/m/q/r/t, invisible in the original table) never give it either. |

### ITCM

| Address | Size | What it does | Closest attempt / remaining difference |
|---|--:|---|---|
| `0x01ffcd50` | 0x168 | Game H-blank handler, main engine (`Sky_HBlankMain`: per-line BG3 affine parameters, DISPCNT bits, blending, palette entries) | 22 diff lines (counted as moved instructions), all in the first block. U4: everything after the first block is the original with `line = off; line += VCOUNT;`, `REG32(DISPCNT) = REG32(DISPCNT) & ~0x200` (not `&=`) in the second branch, and the backdrop colour copied through an address-taken local (`u16 c = sSkyGradient.keyColors[0]; REG16(0x05000400) = *(u16 *)&c;`, or a one-member struct copy): that reproduces the stack round trip without `volatile`. Left: the original evaluates the line offset before the VCOUNT read (the VCOUNT address reuses r0) and hoists `mov r2, #0xc`; mwcc always schedules the VCOUNT load first, whatever the operand order, statement order, temporaries, inline helpers (also taking the offset as an argument), types, volatility of the register accesses, -O level, `-proc` or compiler build (1.2/base..sp4, 2.0, DSi; C and C++). |
| `0x01ffceb8` | 0x108 | Game H-blank handler, sub engine (`Sky_HBlankSub`) | 50 diff lines: the original materialises `0x05000000` (r4) and `&sSkyGradient` (r5) early and keeps them, and reads VCOUNT first; with base pointer locals and `(u8 *)w + 8` the instruction multiset matches, only the schedule and registers differ. Declaration order, statement order, row/colour temporaries, C instead of C++ and every compiler build tried leave it there. Both handlers are compiler output (pool layout, `lsl/lsr #16` zero extension, stack padding, mwcc's epilogue), not hand-written assembly, so an assembly unit is not an option. Attempts: `pipeline_wip/phase4/U4/attempts`. |

## Data that no unit owns

### ARM9 main

| Range | Size | Contents |
|---|--:|---|
| `.text` 0x02000b48-0x02000b6c | 0x24 | `BuildInfo`: NitroSDK crt0.c's `_start_ModuleParams`, a C array (`void *const _start_ModuleParams[]`: the autoload list and its end, the autoload start, the static bss start and end from the linker script, the compressed-static end, the SDK version, the two NITRO code words). It is in `.text` because the SDK linker script places `crt0.o (.rodata)` right after `crt0.o (.text)`; mwcc 1.2 puts the C array in `.rodata`, so a C unit cannot own it in main's `.text` range, and dsd needs the symbol named `BuildInfo` |
| `.text` 0x02000b6c-0x02000b7c | 0x10 | A 16-byte key; `AxMail_GetDigestKey` (built from source) returns its address |
| `.text` 0x02000b84-0x02000c2c | 0xa8 | The `.version` block: the middleware tag strings `[SDK+...]` (DWC, BACKUP, Wi-Fi, CPS, SSL) that `OSi_ReferSymbol` callers pass to keep them linked |
| `.init` 0x020c5fa0-0x020c5fa4, `.ctor` 0x020d1f48-0x020d1f4c | 4 + 4 | An empty ARM static initialiser of a library-area file between the network file (0x020e9a08) and the task manager (0x020ed4bc); probably `ProcBase`'s file (next section) |
| `.rodata` 0x020cbadc-0x020cbae8, 0x020cbf90-0x020cbfa8 | 12 + 24 | Runs of 4-byte constants (3 and 6 objects). They fit neither the size order of the file before (larger objects at its end) nor the one after (`data --apply` finds no order), and no file without `.rodata` lies between |
| `.rodata` 0x020d0544-0x020d0594 | 80 | Two objects (0x40 and 0x10 bytes), not in ascending order, after the rodata of `unk_02098d20.cpp`; read by an overlay |
| `.rodata` 0x020d0a7c-0x020d0bd0 | 340 | The building records `data_020d0a7c` (34 `BuildingInfo`), right after the rodata of `unk_020b0e60.cpp`, the only main user. It fits that file's size order, but adding it reorders the file's bss; `linkprep.py data` finds at best 25 of 30 objects in place |
| `.data` 0x020e1178-0x020e1180 | 8 | The process profile of `EffectSplProc_Create`; adding it to `unk_0208f268.cpp` reorders that file's many 4-byte rodata objects at every definition position |

The other ten process profiles, the constants of nine of the thirteen small .rodata ranges (16 objects, 64 bytes; now `extern "C" const` objects defined after the code
of a file between their neighbours, so that the code still loads them), `gVBlanksPerFrame`, the melody word at
0x020ddf8c and the alignment padding at the end of `.data` are owned since phase 4 (U4). The overlay digest table
names `data_020e74ec`/`data_020e74ec_end` (NitroSDK's `SDK_OVERLAY_DIGEST`/`_END`, an empty table at the end of
`.data`) are linker-script symbols in `config/usa/arm9/lcf_symbols.txt`.

### Libraries

| Range | Size | Contents |
|---|--:|---|
| `autoload_2` `.data` 0x0213b120-0x0213b1a4 | 132 | `ProcBase` (next section) |
| `autoload_3` 0x021c1b3c, 0x021c47c4, 0x021c5384 | 12 | Small bss objects of main between units: the BGM manager pointer (its candidate files declare it inside a namespace or break their bss order), `gSceneBlockMap` and `gGfxMainOnTop` (no definition order found). The other small objects (the CPU matrix, the touch state, ...) are owned since U4 |
| `autoload_3` 0x021f5974-0x021f5994, 0x021f59e4 | 32 + 4 | `ProcBase`'s factory state; `gProfileTable` (its file is not settled: after the task manager's bss, before the sound system's) |
| `autoload_3` 0x021f5c50-0x021f5ca0 | 80 | NVRAM / DWC account state: unaligned members shared by `unk_020fe848.c`, `unk_020fea34.c` and `unk_020fedcc.c`; not in one size order |
| `autoload_3` 0x021feb6c-0x021feb8c, 0x021ff4b8-0x021ff4cc | 32 + 20 | A PM register record and a WM message whose declared types are views, not the objects |
| `autoload_3` 0x021fff80-0x02200040 | 192 | MB game-info and WM-state bss: not one size order across their units; the WM-state words could not be ordered together with the `.data` of `unk_02124c40.c` |
| `autoload_3` 0x02200054-0x02200250, 0x0220064c-0x0220066c, 0x02200670-0x02200680 | 508 + 32 + 16 | CTRDG and MSL (`abort`/`exit`) bss of `unk_0212703c.c`, which is several files (it owns the console-stream data); `errno` and the signal table; 16 bytes at the end |
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

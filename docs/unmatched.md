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
| `autoload_2` (NitroSDK, NitroSystem, MSL, runtime, in-house library) | 320,532 | 299,328 (93.4%) | 21,204 | 21 of 2,189 |
| ITCM | 23,264 | 22,560 (97.0%) | 704 (624 in 2 functions, 80 of data) | 2 of 158 |
| Overlays (99 with code) | 1,450,796 | 1,450,796 (100%) | 0 | 0 |
| **Total** | **2,592,036** | **2,569,908 (99.1%)** | **22,128** | **23** |

Data sections owned by a source file:

| Module | Bytes | Owned by a unit | Not owned |
|---|--:|--:|--:|
| ARM9 main (`.rodata`, `.data`, `.init`, `.ctor`, `.exception`, `.exceptix`) | 150,004 | 124,356 (82.9%) | 25,648 |
| `autoload_2` (`.rodata`, `.data`) | 28,076 | 3,444 (12.3%) | 24,632 |
| `autoload_3` (bss of main and the libraries) | 802,752 | 754,072 (93.9%) | 48,680 |
| DTCM (`.data`) | 1,120 | 0 | 1,120 |
| Overlays (all sections; 39 overlays are data only) | 505,636 | 505,636 (100%) | 0 |

Most library units were linked with their code only, so most library data is still the original's.

## Functions not built from source

### `autoload_2`

| Address | Size | Library | What it does | Closest attempt / remaining difference |
|---|--:|---|---|---|
| `0x020f4904` | 0x158 | in-house (sound) | Fixed-point distance of a position to the listener, three modes | One instruction-order difference: in case 2 the two independent `asr`s come out in the other order. Forms that give the original order (in-place `x -= K; x >>= 3`) give other registers, and vice versa. |
| `0x02101de8` | 0x334 | NitroSystem G2D | Recursive helper that works on a rectangle of characters; it uses the same size table (`0x02135cb8`) as the canvas initialiser below | Not attempted: uses `clz` twice through the SDK's inline `MATH_ILog2`. |
| `0x021022ac` | 0x94 | NitroSystem G2D (CharCanvas) | Canvas initialiser: picks the character shape from width and height with `MATH_ILog2` and installs the canvas's draw, clear and clear-area functions | Not attempted: uses `clz` twice (inline `MATH_ILog2`). |
| `0x02102480` | 0x21c | NitroSystem G2D (CharCanvas) | Clear an area of a BG canvas | 22 diff lines, stack slots: in the original `mode * 64 / 8` is a compiler temporary and `hIn` a named slot; the attempt gets it the other way round. Two scheduling differences remain. |
| `0x021028e0` | 0x224 | NitroSystem G2D (CharCanvas) | Draw a glyph on a BG canvas | Register allocation; the helper structure of the original `g2d_CharCanvas.c` has not been reconstructed. |
| `0x02102b04` | 0x1b8 | NitroSystem G2D (CharCanvas) | Draw a glyph on an OBJ (1D mapping) canvas | As above. |
| `0x02102cbc` | 0x27c | NitroSystem G2D (CharCanvas) | Per-tile glyph blit | As above. |
| `0x02102f38` | 0x168 | NitroSystem G2D (CharCanvas) | Fill a pixel rectangle | 36 diff lines. The original stores the colour to a 4-byte stack slot and reloads it before `MIi_CpuClearFast`; every form without `volatile` is optimised into registers and loses the frame. |
| `0x021030bc` | 0x108 | NitroSystem G2D (CharCanvas) | Character-number mapping for a canvas | Not attempted: uses `clz`. |
| `0x02107ba0` | 0x10c | NitroSystem G3D | Texture SRT animation: rotation fetch with 3:1 interpolation | 12 diff lines: the instruction stream is the original with the registers of `idx` and `idx_sub` swapped. |
| `0x0210ae48` | 0x368 | NitroSystem sound | Start a sound capture (sets up the capture and PCM channels) | Register allocation (which of 15 parameters stay on the stack); 158 diff lines. |
| `0x0210d174` | 0x8b4 | NitroSystem sound | Wave-stream block reader with IMA-ADPCM decoder | Register allocation; the original spills locals differently; several hundred diff lines. Probably needs the original stream-player source. |
| `0x0210ea0c` | 0x200 | NitroSystem sound | Capture effect callback (sample processing with a clamp to s16) | 67 diff lines: the original rematerialises -32768 for the compare (`mov #32768; rsb`) but keeps the stored -32768 in r9. |
| `0x0210f900` | 0xac | NitroSDK GX | `GX_SetBankForSubBG` | Only the compare tree of the switch differs. The original groups cases {0, 4} and tests 8 and 12 separately; mwcc's case clustering cannot produce that grouping with any available build. Bodies, case order and registers are right. |
| `0x0210f9cc` | 0xb8 | NitroSDK GX | `GX_SetBankForARM7` | Same switch-tree difference ({0, 4}, 0x80, 0x180). |
| `0x0211cbd0` | 0x18 | NitroSDK RTC | Wait while the RTC lock is busy (`while (lock == 1);`) | 2 of 6 words: the original keeps the lock address in `ip`, the attempt in `r1`. |
| `0x021239ec` | 0x46c | NitroSDK MB | Read a ROM image (from a file or the system ROM header at 0x027ffe00), hash its segments, patch the autoload callback | The last statement's registers are rotated by one (the constant should be in `r0`). |
| `0x0212a454` | 0x131c | MSL | `__strtold` | First attempt 1,201 instructions against the original's 1,223. Needs the verbatim MSL C99 `strtold.c`. |
| `0x0212d78c` | 0x4d4 | MSL | Wide-character `parse_format` (format-string parser) | The jump-table shape: the original has a table for cases 100..117 plus a separate test for 120; mwcc's switch lowering gives 100 separately plus a table for 101..120 for every case set and build tried. |
| `0x0212dcd0` | 0x1234 | fdlibm (MSL) | `__ieee754_pow` | 66 diff lines: three callee-saved registers (r6/r7/r8) rotated in the last third. The source is the fdlibm 5.2 text with MSL's errno change; it needs an extra copy `xx = x` whose origin is unknown. |
| `0x02134d70` | 0x39c | C++ runtime | `__NextAction` (exception handling: steps through a function's exception action table) | 3 words: at the head the original has `ldrb r0; ands r1, r0, #0x80`, the attempt the two registers swapped. Its exception-table entries in main (`.exception` 0x020c2b2c, `.exceptix` 0x020c2c40) belong to the same file and are not owned yet either. |

### ITCM

| Address | Size | What it does | Closest attempt / remaining difference |
|---|--:|---|---|
| `0x01ffcd50` | 0x168 | Game H-blank handler, main engine (per-line BG3 affine parameters, DISPCNT bits, blending, palette entries) | 20 diff lines, all in the first block: the original loads the table base before the VCOUNT address, the attempt the other way round. |
| `0x01ffceb8` | 0x108 | Game H-blank handler, sub engine | 50 diff lines: the original keeps the palette pointer and `0x05000000` in r5/r4 from the start and reads VCOUNT first. |

## Data that no unit owns

### ARM9 main

| Range | Size | Contents |
|---|--:|---|
| `.text` 0x02000b48-0x02000b6c | 0x24 | `BuildInfo` (`_start_ModuleParams`, the SDK's module parameter block right after crt0) |
| `.text` 0x02000b6c-0x02000b7c | 0x10 | LampLights 16-byte key; `func_02000b7c` (built from source) returns its address |
| `.text` 0x02000b84-0x02000c2c | 0xa8 | The `.version` block: the middleware tag strings `[SDK+...]` (DWC, BACKUP, Wi-Fi, CPS, SSL) that `OSi_ReferSymbol` callers pass to keep them linked |
| `.init` 0x020c5f68-0x020c5fa4, 0x020c6094-0x020c6108; `.ctor` 0x020d1f40-0x020d1f4c, 0x020d1f54-0x020d1f58 | 0xb0 + 0x10 | Four ARM static initialisers of library-area files whose owners are not settled: `0x020c5f68` (empty), `0x020c5f6c` (constructs a global vector at bss 0x021f4880 and registers its destructor), `0x020c5fa0` (empty), `0x020c6094` (calls `SndVolumeCurve_Clear` and `FX_Div` three times; bss 0x021f5c00-0x021f5c0c) |
| `.exception` 0x020c2b2c-0x020c2b34, `.exceptix` 0x020c2c40-0x020c2c4c | 0x14 | Exception-table entries of `__NextAction` (above) |
| `.rodata` 13 small ranges between 0x020c8b9c and 0x020d0c0c | 520 | Constants used by several units, not yet assigned to one |
| `.data` 0x020d2024-0x020d5d44 | 15,648 | LampLights block of cross-linked tables (354 labels) used by many game units, with no code of its own |
| `.data` 0x020de408-0x020e0468 | 8,288 | Two objects |
| `.data` 0x020e1e2c-0x020e218c | 864 | One object |
| `.data` 13 small objects between units, and 0x020e74ec-0x020e7500 | 116 | Objects not yet assigned to a unit |

### Libraries

* `autoload_2` `.rodata` 0x02135914-0x02135964 and 0x02135c9c-0x0213a748 (19,196 bytes) and `.data` (5,436
  bytes in five ranges between 0x0213a748 and 0x0213c6c0): constant tables and data of library files whose
  code is linked without them.
* `autoload_3` (48,680 bytes): mostly library bss from 0x021f4768 to the end, plus a few small objects of main.
* DTCM `.data` 0x027e0000-0x027e0460.
* ITCM `.text` 0x01ff8ab4-0x01ff8ad4: a table of the eight NitroSystem texture-SRT functions inside `.text`.
* ITCM `.text` 0x01ffd0b4-0x01ffd0e4: six pointer-to-member constants of `ProcBase`'s file (next section).

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

LampLights real-class version of the `autoload_2` part compiles byte-identically, with the vtable and data in the original
order. mwcc sorts all data objects of a file together, including the ones placed in ITCM, and the original order
has exactly one natural solution only when the six ITCM constants are part of the same file. LampLights unit cannot yet
own a range in ITCM together with ranges in `autoload_2`. Until it can, the real-class version would need a
declaration order that is an artefact of the split, so the current form stays.

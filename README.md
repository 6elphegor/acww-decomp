# Animal Crossing: Wild World decompilation

Work-in-progress matching decompilation of Animal Crossing: Wild World for the Nintendo DS, built with
[dsd (ds-decomp)](https://github.com/AetiasHax/ds-decomp).

Supported version:

| Version        | Game code | SHA-1                                      |
| -------------- | --------- | ------------------------------------------ |
| USA (Rev 1)    | `ADME`    | `77fde3e30e1e6068395d1f96ea63be569b61c351` |

## Setup

Requirements:
- Python 3.11 or newer
- [Ninja](https://github.com/ninja-build/ninja/releases)
- macOS on Apple silicon: Rosetta 2 (`softwareupdate --install-rosetta`), used by wibo to run the compiler

1. Put your own dump of the game in `extract/`, named `baserom_acww_usa.nds`.
2. Generate the build script:
   ```
   python3 tools/configure.py usa
   ```
3. Build:
   ```
   ninja
   ```
   The first build downloads dsd, objdiff, wibo and the Metrowerks compilers. The build ends by checking the
   rebuilt `acww_usa.nds` against the original SHA-1.

Other targets:
- `ninja check`: verify every module and symbol address in the linked binary
- `ninja objdiff`: generate `objdiff.json` for [objdiff](https://github.com/encounter/objdiff)
- `ninja report`: generate a progress report

### ARM7 BIOS (optional)

The ROM header stores a CRC of the encrypted secure area, which dsd can only compute with the Blowfish key from
the ARM7 BIOS. Without it, `tools/fix_header.py` copies that CRC from the base ROM instead. If you have dumped the
BIOS from your own DS, place it at `arm7_bios.bin` and rerun `configure.py` to have dsd compute it.

## Compiler

The game was built with Metrowerks CodeWarrior for DS 1.2 (`mwccarm` internal version 2.0 build 72):
- 2.0 and DSi compilers don't match.
- 1.2/sp3 onwards return from Thumb functions with `pop {pc}` instead of the game's `pop {r3}; bx r3`.
- 558 of the game's 563 Thumb switch jump tables use a dispatch sequence that only 1.2/b56 and 1.2/base generate.
  The other 5 are in overlay 65, which uses the 1.2/sp2p3 form and was likely built separately.
- b56 and base haven't been told apart; `configure.py` uses `1.2/base`.

Nearly all code, including NitroSDK, is Thumb and matches with `-O4,s`. Parts of the game are C++.

Quirks:
- Functions are emitted in reverse order, so define them from highest to lowest address within a source file.
- A loop that tests at the top and branches back unconditionally is `for (;;) { ... if (!cond) break; ... }`;
  `while` and `for` put the test at the bottom.
- Local declaration order affects register allocation. If only registers differ, reorder declarations or add or
  remove a temporary.
- Flat two-word structs are copied with interleaved loads and stores; nested aggregates load both words first.
- A compare whose result is unused comes from `else if (x != 0) { var = value_it_already_has; }`.
- `if (fits) { ... } else { ...; break; }` and `if (!fits) { ...; break; }` lay out their blocks in different orders.
- `*(p + n - 1)` and `p[n - 1]` compile differently, as do `a * b` and `size = a; size * b`.
- A repeated expression inside a short-circuit condition may need to go into a temporary first.
- Pure virtual slots are written as 0 in vtables.
- Two vtable stores in a row in a constructor or destructor mean an intermediate class with an inline, empty
  constructor or destructor.

Tools for matching:
- `python3 tools/asmdiff.py <file> <function>` compiles a file and diffs one function's disassembly against the
  original.
- `python3 tools/compiler_search.py <file>` checks which compiler versions reproduce each function in a file.

## C++

Parts of the game are C++, compiled with the ARM/Itanium C++ ABI:
- Names are mangled Itanium-style (`_ZN12Unk_02050288C1Ev`). Rename a class's functions in `symbols.txt` to their
  mangled names so that other code links against the compiled ones.
- Vtables are `[0, 0, virtual functions...]` in `.data`, and objects point 8 bytes in. Give the vtable symbol an
  explicit size, e.g. `_ZTV12Unk_02050288 kind:data(word[4])`, include its range in the file's `.data`, and write
  references to it as `to:<vtable> add:0x8` in `relocs.txt`.
- mwcc emits every constructor and destructor variant (C1, C2, D0, D1, D2); the linker dead-strips the unused ones, as
  in the original build. Delinked code is kept through a `FORCE_ACTIVE` block, see `tools/force_active.py`.
- Functions without known names can be declared `extern "C"` to keep their `func_*` symbols.

## Layout

[`docs/layout.md`](docs/layout.md) describes where the game code, libraries and C++ files are, and how that was
worked out. `python3 tools/xrefs.py <start> <end>` lists what an address range references and what references it,
which helps find the extent of a source file.

## dsd

The dsd config in `config/` was generated with `dsd init` from dsd v0.12.1 plus a fix for Thumb functions whose
second instruction is an unconditional branch (without it, `init` fails on this ROM). Building only needs the
released v0.12.1, which `configure.py` downloads. To rerun `init`, use a dsd build with that fix.

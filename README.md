# Animal Crossing: Wild World decompilation

Work-in-progress matching decompilation of Animal Crossing: Wild World for the Nintendo DS, built with
[dsd (ds-decomp)](https://github.com/AetiasHax/ds-decomp).

Supported version:

| Version        | Game code | SHA-1                                      |
| -------------- | --------- | ------------------------------------------ |
| USA (Rev 1)    | `ADME`    | `77fde3e30e1e6068395d1f96ea63be569b61c351` |

## Status

Every overlay and all of main are built from source, and the build reproduces the original ROM byte for byte.

| Module | Code built from source |
|---|--:|
| ARM9 main | 100% of functions |
| Overlays (148) | 100% |
| ITCM | 97.0% |
| `autoload_2` (libraries) | 96.7% |
| **Total** | **99.6%** |

The 20 functions still taken from the original image, and the data no source file owns yet, are listed in
[`docs/unmatched.md`](docs/unmatched.md). Most names are still placeholders (`func_<address>`, `Unk_<address>`);
naming and documenting the game code is the main open work.

## Documentation

- [`docs/matching.md`](docs/matching.md): how to match a function, compiler settings and quirks, the tools.
- [`docs/assembly.md`](docs/assembly.md): when code is kept as assembly, and the exceptions.
- [`docs/unmatched.md`](docs/unmatched.md): what is left.
- [`docs/layout.md`](docs/layout.md): where code and libraries live in the ROM.
- [`tools/pipeline/linking.md`](tools/pipeline/linking.md): turning matched code into linked units.

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
- `ninja check_modules`: verify every module's layout in the linked binary (`ninja check` also runs
  `check_symbols`, which reports data inside compiled files under compiler-local `@NN` names)
- `ninja objdiff`: generate `objdiff.json` for [objdiff](https://github.com/encounter/objdiff)
- `ninja report`: generate a progress report

### ARM7 BIOS (optional)

The ROM header stores a CRC of the encrypted secure area, which dsd can only compute with the Blowfish key from
the ARM7 BIOS. Without it, `tools/fix_header.py` copies that CRC from the base ROM instead. If you have dumped the
BIOS from your own DS, place it at `arm7_bios.bin` and rerun `configure.py` to have dsd compute it.

## Compiler

The game was built with Metrowerks CodeWarrior for DS 1.2 (`mwccarm` internal version 2.0 build 72):
- 2.0 and DSi compilers don't match.
- Secondary-base adjuster thunks (`_ZThn…`) are the one exception to 1.2/base. All 159 thunks in the game save and restore
  r2 around the `this` adjustment, which 1.2/sp2 does and 1.2/base doesn't, while the switch tables need base. The game
  was probably built with 1.2/sp1, which isn't available. A file containing thunks can switch compilers with a
  `// mwcc-version: 1.2/sp2` line at the top; `configure.py` picks it up.
- 1.2/sp3 onwards return from Thumb functions with `pop {pc}` instead of the game's `pop {r3}; bx r3`.
- 558 of the game's 563 Thumb switch jump tables use a dispatch sequence that only 1.2/b56 and 1.2/base generate.
  The other 5 are in overlay 65, which uses the 1.2/sp2p3 form and was likely built separately.
- b56 and base haven't been told apart; `configure.py` uses `1.2/base`.

The game code is mostly Thumb C/C++ and matches with `-O4,s`; the libraries in `autoload_2` (NitroSDK,
NitroSystem, MSL, the C++ runtime) and the in-house ARM code use `-O4,p`. Per-file settings go in a
`// mwcc-flags:` line at the top; [`docs/matching.md`](docs/matching.md) has the table.

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
- Names are mangled Itanium-style (`_ZN9TextLabelC1Ev`). Rename a class's functions in `symbols.txt` to their
  mangled names so that other code links against the compiled ones.
- Vtables are `[0, 0, virtual functions...]` in `.data`, and objects point 8 bytes in. Give the vtable symbol an
  explicit size, e.g. `_ZTV9TextLabel kind:data(word[4])`, include its range in the file's `.data`, and write
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

## Licence

The project's own work (sources, tools, documentation) is under the MIT licence, see [`LICENSE`](LICENSE). The
game and its ROM belong to Nintendo and are not included; you need your own dump to build.

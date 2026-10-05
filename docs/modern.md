# The modern build

The matching build (`tools/configure.py`, `build.ninja`) reproduces the original ROM with the original compiler and
stays the reference. The modern build compiles the same sources with GCC (`arm-none-eabi-gcc`). It is the first
step towards a native PC port: first a DS ROM built with GCC that runs in an emulator, then the same code on other
hosts.

## Building

Requirements: the [Arm GNU Toolchain](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)
(`arm-none-eabi`, tested with 14.3.Rel1).

```
python3 tools/configure_modern.py usa --toolchain <path to the toolchain's bin/>
ninja -f build_modern.ninja
```

The build directory is `build/modern_usa/`; the ROM is `acww_usa_modern.nds`. The modern build needs the matching
build to have run once (`ninja`): it reuses its linker script (object order, overlay placement) and the delinked gap
objects (bytes no source file owns yet, `docs/unmatched.md`).

## Linking

`tools/modern_link.py` writes the GNU ld script (`build/modern_usa/arm9.ld`) and `tools/modern_rom.py` turns the
linked ELF into a ROM with dsd, the same way the matching build does:

- One output section per module, named like the matching build's mwld memory regions (`ARM9`, `ITCM`, `DTCM`,
  `AUTOLOAD_2`, `AUTOLOAD_3`, `OV001`...), and `<MODULE>_<SECTION>_START/_END` symbols around the sections each
  module's `delinks.txt` lists: that is what `dsd rom config` reads. Objects go to the module of their source
  directory; main's and the libraries' bss is in `AUTOLOAD_3`, as in the original.
- GCC's `.init_array` fills the `.ctor` tables (zero-terminated, at `<MODULE>_CTOR_START`).
- Overlays start after the modules they are loaded with (the `AFTER()` lists of the matching build's `arm9.lcf`).
- Names that `symbols.txt` gives to addresses the objects don't name themselves (second names of a function,
  labels inside data) and the `lcf_symbols.txt` names are `PROVIDE`d relative to their base.
- Variables the original has at 32-byte aligned addresses are aligned again (NitroSDK's `ATTRIBUTE_ALIGN(32)`
  buffers: DMA, cache maintenance, PXI addresses passed in 32-byte units). Gap objects keep their original
  address modulo 32.
- dsd keeps the autoloads' base addresses from the original ROM; `modern_rom.py` corrects them from the ELF.

## Testing

A headless melonDS runner (not in this repository yet) boots a ROM for N frames and saves screenshots, frame
hashes, registers and, on an exception, the last 1024 ARM9 instruction addresses; melonDS's GDB stub works with
`arm-none-eabi-gdb` and `build/modern_usa/arm9.elf`. The original ROM under the same runner is the reference.

## What breaks under GCC (and how it was found)

The decompiled code matches mwcc's output; several things it relies on aren't guaranteed by C/C++ and GCC
optimises them differently:

| Problem | Symptom | Fix | Finding them |
|---|---|---|---|
| A call passes fewer arguments than the function takes; mwcc happened to have the missing value in r1-r3 (or `this` in r0) | wrong argument | pass it explicitly (same mwcc code) | `configure_modern.py --lto-check` + `tools/modern_lto_report.py` |
| A non-void C++ function falls off its end (the original returns whatever r0 holds) | no epilogue: runs into the next function | `return <expr>`, or `void` if no caller uses it | `-Wreturn-type`; the modern build traps there (`-funreachable-traps`) |
| A polled flag set by an interrupt, callback or the ARM7 isn't `volatile` | infinite loop | `MODERN_VOLATILE` / volatile declaration under MODERN | `tools/modern_find_spins.py` |
| A pointer to the end of an array written as the address of the next variable (thread stacks) | the next variables get overwritten | pass `array + size` | boot testing |
| A stand-in class (a local copy with a placeholder member) | GCC devirtualises to the stand-in's method | use the real header | `-Wodr` in the LTO check |
| An inline function that other code calls by its mangled name | undefined symbol | `MODERN_EMIT` | link errors |
| A hardcoded address of game data (arena bounds, DTCM variables) | wrong address | linker symbol under MODERN | grep |
| A routine that switches stacks (OS_LoadContext) reached by a tail call | the resumed thread's saved registers are overwritten | `noreturn` / `returns_twice` under MODERN | boot testing |


## Rules for source changes

- The matching build must stay byte for byte: run `ninja` after every change.
- Code that only one of the builds can use goes behind `#ifdef MODERN` (defined only by the modern build). Prefer
  a plain C/C++ form that suits both compilers. A declaration that changes no generated code (a missing cast, a
  `void` return type, a split `T x; x = e;`) is better than a second version of the code.
- Functions that the matching build keeps as `asm {}` blocks have a C version under
  `#if defined(NONMATCHING) || defined(MODERN)`.

## Compiler differences

| mwcc | GCC (modern build) |
|---|---|
| `-enum int` | `-fno-short-enums` |
| `-char signed` (`-char unsigned` in a few library files) | `-fsigned-char` (`-funsigned-char`), from the `// mwcc-flags:` header |
| `-thumb`, `-nothumb` in a file's `// mwcc-flags:` | `-mthumb`, `-marm` |
| MSL `wchar_t` is 16 bits | `-fshort-wchar` |
| `size_t` is `unsigned long` | `__SIZE_TYPE__` (`unsigned int`); `include/types.h` defines `size_t` for both |
| `__declspec(weak)`, `__builtin__clear` | defined in `include/types.h` for GCC |
| Cast expressions are lvalues (`*((T *)p)++`) | reinterpret the variable: `*(*(T **)&p)++` |
| `asm { clz x, x }` | `__builtin_clz` |
| C++ exceptions in the Metrowerks runtime (`unk_0213510c.cpp`) | no exceptions (the game never throws); `try`/`catch` become plain blocks |

### Class layout

mwcc places the members of a derived class in the tail padding of the base class's *last member object*, as if
the member had no tail padding. GCC (Itanium C++ ABI) only reuses the tail padding of a base class itself. Example:
`MsgString` ends with an `MsgStringAttr` member (12 bytes, 10 of data), and `LabelButtonText : MsgString` puts its
first member at 0x12 with mwcc and at 0x14 with GCC. Classes built on such bases are larger in the modern build
(`LabelButton` 0x70 → 0x74). The size checks that encode the mwcc layout are under `#ifndef MODERN`.

Code must therefore not depend on the size or offsets of such classes. Save data and file formats are expected to
be plain structs, which keep their layout; this hasn't been checked yet.

## Assembly units

The `.s` units are written for mwasmarm. `tools/gas_from_mwasm.py` converts them for GNU as at build time (comment
character and `%function` type markers). The result encodes the same instructions.

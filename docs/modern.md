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

The build directory is `build/modern_usa/`. So far the build compiles every source file; linking and building a
ROM come next.

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

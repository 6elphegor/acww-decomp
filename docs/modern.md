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

## Status

The modern ROM boots, runs the title screen's attract mode (30000 frames without input, changing demo towns),
reaches the post-title dialog and plays the intro (Kapp'n's taxi, name entry) the same way as the original under the
same input. Timing differs slightly (load times), so frame hashes don't match one to one.

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
| A function defined `void` whose callers use the value it leaves in r0 (the last call's result, an identity stub) | garbage values | `return <last call>;` (same mwcc code) | `tools/modern_void_used.py` |
| A variable read before it's set: the original had the value in that register | wrong argument | write the value | `configure_modern.py --warnings` |
| Code that depends on mwcc's class layout | wrong members, heap overruns | see Class layout | `tools/modern_offset_comments.py`, `modern_layout_check.py` |


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

Measured with mwcc 1.2 against GCC 14:

| | mwcc | GCC (Itanium C++ ABI) |
|---|---|---|
| 64-bit integers | aligned to 4 | aligned to 8 (AAPCS) |
| first member of a derived class | after the base's data size (its tail padding is reused), for any base | the same, for non-POD bases only |
| data size of a class | ends at its last member's data size, recursively (arrays count whole) | ends at its last member's sizeof |
| vptr | at offset 0, bases after it | the same |

The decompiled code depends on mwcc's layout everywhere: view classes with padding arrays, `(u8 *)this + 0x824`,
sizes in allocations and in data tables. The modern build reproduces it:

- `s64`/`u64` are `aligned(4)` typedefs under MODERN (`include/types64.h`; every 64-bit member must use them, not
  `long long`).
- `MWCC_LAYOUT` (an empty protected member, inside a POD class used as a base: the class becomes non-POD for GCC
  but stays trivial and an aggregate) and `MWCC_TAIL` (`[[no_unique_address]]` on the last member when its type has
  tail padding), both from `include/types.h` and empty for mwcc. `tools/modern_layout_needs.py` lists where they
  are needed.
- `tools/modern_offset_comments.py` compares the `/* 0x1c */` offset comments in the headers (mwcc's offsets, kept
  true by the matching build) with GCC's offsets from DWARF; `tools/modern_layout_check.py` recomputes every class
  with mwcc's rules. After the annotations the remaining differences are wrong comments and name collisions.

A 64-bit port can't keep these offsets (pointers grow): the view classes and hardcoded offsets will have to become
real member accesses there.

### Shared overlay addresses

The original's main code holds fixed addresses inside overlays (player action tables, mode tables, callbacks), and
several overlays are loaded at the same addresses: the same table entry is ov003's function outdoors and ov004's
indoors. The decompiled code names one of them; the modern build places overlays elsewhere. `tools/modern_shared.py`
(a build step) finds every reference from one module to a function of another at an address that another overlay
also uses, and generates a thunk per name (`build/modern_usa/shared.s`) with `ld --wrap`: the thunk calls
`Modern_SharedResolve` (`modern/ds/overlays.c`), which returns the candidate whose overlay is loaded
(`FS_StartOverlay`/`FS_EndOverlay` record that under MODERN). References to *data* at shared addresses are listed in
`build/modern_usa/shared.log`; main's scene table has a MODERN version naming each scene's own overlay.
`tools/modern_shared_addrs.py` lists the same references for review.

### Vague linkage and overlays

GCC emits an inline function or a vtable without a key function in every object that uses it, in a COMDAT group,
and GNU ld keeps the first copy. If that copy is in an overlay, main (or another overlay) calls whatever is loaded
at that address. `tools/modern_comdat.py` renames, in each overlay object, the weak definitions and the group
signatures to `<name>.ovNNN`: copies are merged within the overlay and never chosen by another module.

## Assembly units

The `.s` units are written for mwasmarm. `tools/gas_from_mwasm.py` converts them for GNU as at build time (comment
character and `%function` type markers). The result encodes the same instructions.

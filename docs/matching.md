# Matching guide

This guide explains how a function is matched in this project: which compiler settings to use, how to check a
result, how a finished unit becomes part of the build, and the compiler behaviour that has decided matches so far.
The linking procedure itself (data definitions, names, object order, main-module specifics) is described in more
detail in [`tools/pipeline/linking.md`](../tools/pipeline/linking.md).

LampLights function counts as matched when its source compiles to the original bytes. It only becomes part of the ROM when
the source file that contains it is listed as a `complete` unit in the module's `delinks.txt`. The build then links
the compiled object instead of the original bytes, and `ninja` checks the result against the original SHA-1.

## 1. Compilers and per-file settings

The game was built with Metrowerks CodeWarrior for DS 1.2 (`mwccarm`). The build downloads several 1.2 builds
into `tools/mwccarm/1.2/` (`base`, `b56`, `sp2`, `sp2p3`, `sp3`, ...). The default is `1.2/base` with the flags in
`tools/mwcc_config.py`:

```
-O4,s -enum int -char signed -str noreuse -proc arm946e -thumb -gccext,on -fp soft -inline noauto
-Cpp_exceptions off -RTTI off -interworking -w off -sym on -gccinc -nolink -msgstyle gcc
```

`.cpp` files are compiled with `-lang=c++` and `.c` files with `-lang=c`.

LampLights source file can change its settings with header lines within its first 10 lines:

| Line | Effect |
|---|---|
| `// mwcc-flags: <flags>` | appended after the common flags; later flags win (`-nothumb` overrides `-thumb`) |
| `// mwcc-version: 1.2/sp2` | compiles the file with another build from `tools/mwccarm/` |
| `; mwasm-flags: <flags>` | for an assembly unit (`.s`): appended to the assembler flags |
| `; mwasm-version: 1.2/sp2` | for an assembly unit: another package's `mwasmarm` |

`tools/configure.py` reads these lines when it writes `build.ninja`, and `tools/pipeline/linkprep.py compile` does
the same, so both give the same object. `tools/asmdiff.py` and `tools/compiler_search.py` do **not** read them:
pass `--flags` / `--version` yourself (see section 2).

### Which settings apply to which code

| Code | Where | Settings |
|---|---|---|
| Game code, Thumb (C and C++) | `src/main`, most overlays | no header line: 1.2/base, `-O4,s`, Thumb |
| Game code with shared string literals | some main and overlay files | `// mwcc-flags: -str reuse` (one copy of a string used by several functions; `#pragma reuse_strings` is ignored) |
| Game files with secondary-base adjuster thunks (`_ZThn...`) | a few main and overlay files | `// mwcc-version: 1.2/sp2` (see "Two compiler builds" below) |
| ARM functions inside a Thumb game file | a few functions of main | written between `#pragma thumb off` and `#pragma thumb reset` |
| In-house ARM C++ in the library area | `src/autoload_2` (task manager, heaps, sound, particles, ...), ARM parts of `src/itcm` | `// mwcc-flags: -nothumb -O4,p` |
| NitroSDK, NitroSystem and MSL C library | `src/autoload_2/*.c`, `src/itcm/*.c` | `// mwcc-flags: -nothumb -O4,p` |
| Thumb C in the library area (NVRAM/Wi-Fi settings and DWC account code from 0x020fea34) | `src/autoload_2` | `// mwcc-flags: -O4,p` |
| C++ runtime (exception handling) | four files in `src/autoload_2` | `// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned` |
| Thumb game code in ITCM | `src/itcm/unk_01ffcb2c.cpp` | no header line (`-O4,p` breaks two of its functions) |
| Wi-Fi utility and network overlays | ov001, ov065, ov066, ov067 | `// mwcc-flags: -O4,p` (plus `-str reuse` where needed). ov001 is mostly ARM (`#pragma thumb off`); two of its files (software keyboard, numeric keypad) need `-O3,p`. Four ov065 files (CPS/SSL) need `// mwcc-version: 1.2/sp2p3`. |
| Original assembly | `src/**/*.s` | assembled by `mwasmarm -proc arm5TE`; see [`assembly.md`](assembly.md) |

How to tell `-O4,p` from `-O4,s` in ARM code: with `-O4,s`, functions with early returns get a shared epilogue
where the original has a predicated early return. In the game's Thumb code it is the other way round: `,p` lays
out loops differently from the original.

### Two compiler builds

No available build reproduces everything:

* Thumb `switch` jump tables (`ldrh; lsls; asrs; add pc`) come out right only with 1.2/base (and b56).
* All 159 secondary-base adjuster thunks (`_ZThn...`) save r2 around the `this` adjustment, which only 1.2/sp2
  and later do. sp3 and later return from Thumb functions with `pop {pc}` instead of `pop {r3}; bx r3`.

The original compiler was probably 1.2/sp1, which is not available. LampLights file with thunks uses
`// mwcc-version: 1.2/sp2`. When one original file needs both (thunks and a base-only switch), the switch function
goes into a second file `<unit>_switch.cpp` compiled with base, and the link places every function of the unit
by address from `config/usa/arm9/.../object_order.txt` (`tools/object_order.py`; see "Units built by two
compilers" in `linking.md`).

`python3 tools/compiler_search.py <file>` compiles a file with every installed build and reports which builds
reproduce each function.

## 2. Workflow

### Build

```
python3 tools/configure.py usa
ninja
```

The build ends with `acww_usa.nds: OK` when the rebuilt ROM has the original SHA-1. `ninja check` verifies every
module and symbol address, `ninja objdiff` writes `objdiff.json` for [objdiff](https://github.com/encounter/objdiff)
(each linked unit's compiled object against the delinked original), and `ninja report` writes a progress report.
Rerun `configure.py` after adding, removing or renaming a unit, or after changing a header line.

### Read the original

* Function names, sizes and modes are in the module's `symbols.txt` (`config/usa/arm9/symbols.txt` for main,
  `config/usa/arm9/autoload_2/`, `config/usa/arm9/itcm/`, `config/usa/arm9/overlays/ovNNN/`), relocations in
  `relocs.txt`, unit ranges in `delinks.txt`.
* `python3 tools/pipeline/maindis.py <address> <length> [arm|thumb]` disassembles main, autoload_2 or ITCM code and
  lists the relocations with their target names (main defaults to Thumb, the libraries to ARM).
* `./dsd dis -c config/usa/arm9/config.yaml -a <out dir> --ual --overlay <n>` disassembles whole modules (also
  `--main`, `--itcm`, `--autoload <n>`).
* `python3 tools/xrefs.py <start> <end>` lists what an address range references and what references it; useful for
  finding where a source file starts and ends.
* `python3 tools/pipeline/ovdump.py ovNNN` dumps an overlay's `.data` with relocation targets and labels.

### Compare one function (main and overlays)

```
python3 tools/asmdiff.py scratch.cpp <compiled symbol> --original <symbols.txt name>
```

prints `<name>: match` or a unified diff. Relocated words are taken from the original, so call targets and pool
addresses are not compared (the link check below catches those). asmdiff uses the default flags; for a file with a
header line pass them explicitly, e.g.

```
python3 tools/asmdiff.py f.cpp func_ov065_02261fd8 --version 1.2/sp2p3 \
    --flags "$(cd tools && python3 -c 'from mwcc_config import CC_FLAGS; print(CC_FLAGS)') -O4,p"
```

asmdiff only knows main and the overlays. For autoload_2 and ITCM use `linkprep.py compile` and `check` and compare
`arm-none-eabi-objdump -d` of your object with `maindis.py`.

### Check a whole unit

LampLights unit is one original source file: a contiguous `.text` range plus the `.rodata`, `.data`, `.bss`, `.init` and
`.ctor` ranges that belong to it. It is described by a `spec.txt`:

```
unit unit.c
.text   0x0210f0c4 0x0210f154
.data   ...
.bss    ...          (for main and the libraries: the range in autoload_3)
```

```
python3 tools/pipeline/linkprep.py compile unit.c unit.o              same flags and header lines as the build
python3 tools/pipeline/linkprep.py reverse unit.c autoload_2          sort definitions by descending address
python3 tools/pipeline/linkprep.py check unit.o autoload_2 spec.txt   main / autoload_2 / itcm (overlays: check unit.o ovNNN)
python3 tools/pipeline/linkprep.py data unit.c unit.o autoload_2 spec.txt [--apply]   data order
```

`check` simulates the link at the unit's ranges and must end with
`0 layout problems, 0 wrong targets, 0 unresolved symbols`. Read the `TARGET` lines: a function that calls the
wrong function or reads the wrong global is byte-identical on its own and only shows up there (for example a
`_u32_div_f` call where the original calls `_s32_div_f`). `linkprep.py undef unit.o` lists symbols no
`symbols.txt` defines; `tools/pipeline/realnames.py` rewrites `func_XXXXXXXX` callees to their current
`symbols.txt` names.

### Install and build

```
python3 tools/pipeline/install_tu.py [--replace] <main | autoload_2 | itcm | ovNNN> spec.txt
python3 tools/configure.py usa
ninja
```

`install_tu.py` writes the source as `src/<module>/unk_<text start>.<ext>` (overlays:
`src/ovNNN/unk_ovNNN_<text start>.<ext>`), lists it as `complete`, adds the bss
placeholder for main and library units, and applies `renames.txt` / `aliases.txt` from the unit's directory.
`tools/pipeline/mainbatch.sh [--module M] <unit dir>...` does install, configure and build in one step and reverts
if the ROM does not match. After a failed build, `linkprep.py diff <module>` and `tools/pipeline/romdiff.py` show
which ranges differ.

## 3. Naming

* Free functions keep their `symbols.txt` name: declare them `extern "C"` (`GX_SetGraphicsMode`,
  `func_ov065_02261fd8`). Never leave a `func_` name C++-mangled.
* Classes are named `Unk_<address>` after their vtable (the address objects store, 8 bytes into the vtable) or,
  without a vtable, after their first function. Overlay-only classes are `Unk_ovNNN_<address>`. Local helper
  types are `Unk_<function address>_Xxx`. Generic names (`Obj`, `Info`) collide when files are combined.
* Call other modules' functions by exactly their `symbols.txt` name. Overlays share address ranges, so read the
  callee's name from the relocation, never infer it from the address.
* SDK, NitroSystem and MSL names go in a comment above the function (`// GX_SetGraphicsMode`); the symbol keeps
  its `func_` name because game code calls it by that name.
* Overlay IDs are passed as addresses of linker symbols (`ldr r0, =0x7f` from the literal pool): declare
  `extern u32 OVERLAY_127_ID[];` and pass `(u32)OVERLAY_127_ID`.
* Numbers the SDK takes from its linker script (stack sizes, arena starts) are literal-pool words without a
  relocation; they are the absolute symbols of `config/usa/arm9/abs_symbols.txt`, used as the SDK does:
  `extern u8 SDK_SYS_STACKSIZE[];` ... `(s32)SDK_SYS_STACKSIZE`.

## 4. Compiler behaviour that decided matches

### File layout

* **mwcc emits a file's functions last to first.** Define them in descending address order
  (`linkprep.py reverse` does it). This is also the original definition order, so inlining behaves as it did.
* **Inlining.** `-inline noauto` inlines only functions marked `inline`, but a small function defined in the same
  file *before* its caller can still be inlined. If the original has a `bl` to a same-file function that you see
  inlined, the callee belongs after the caller (which descending address order usually gives you).
* **Data order is a size sort.** mwcc heapsorts a file's data (and bss) by size over the reverse of creation
  order. Where a named object is *defined* relative to the functions therefore decides its address.
  `linkprep.py data --apply` searches for a placement. Rules the search relies on: define each object with exactly
  the original size (the gap to the next symbol, `u8[7]` not `u8[8]`); a guarded function-local static is created
  before its guard; a local static pointer-to-member table's `@N` constants come before the table; vtables are
  created last, in reverse declaration order of their classes; a registration record of a global with a
  destructor is created immediately before the object.
* **Strings.** String literals are emitted after all sorted data. Strings that sit among the sorted data (targets
  of a string table) are named `char[]` objects.
* **Some `data_` labels are interior addresses** of a larger object (Thumb code reaches a far member through
  `object + 0x200`). Define the whole object once and use the member; see "Interior labels" in `linking.md`.

### C++

* Itanium ABI: vtables are `[0, 0, slots...]` and objects point 8 bytes in; pure virtual slots are 0. mwcc emits
  C1/C2 and D0/D1/D2; the linker dead-strips the unused variants, as in the original.
* **Write real classes.** The original game and its in-house library code are real C++: members, out-of-line
  constructors and destructors, compiler-emitted vtables. Writing the class as it was removes most hand-written
  pointer arithmetic: a `cmp r0,#0; addne r0,r0,#4` before a call is the implicit conversion of `this` to a
  non-polymorphic second base; `h ? h - 4 : 0` is a `static_cast` back to the derived class; an
  `adds rX,#0x9c` without a null check is an upcast of a reference.
* **Destructor shapes.** Out-of-line `~DoorLight() {}` emits D2, D0, D1. An implicit destructor emits D1, D0. LampLights defined
  pure virtual destructor (`virtual ~LightLevel() = 0;`) gives a vtable whose D1 slot is 0 and whose D0 slot is real. Two
  vtable stores in a row in a constructor or destructor mean an intermediate class with an inline, empty
  constructor or destructor. LampLights member whose constructor runs before the derived vptr store is really a second
  base class.
* **Link-once objects.** The vtable and the implicit functions of a class *without a key function* are emitted
  link-once: the linker keeps the first copy in link order and drops the others. That is how the original shares
  a vtable between modules. LampLights global and a link-once definition of the same name is a "Multiply-defined" error.
* **One constructor, two names.** The game keeps one body for C1 and C2; different units call it by either name.
  Add the second name as a label (`tools/pipeline/alias.py`), never rename a constructor another unit calls.
* Placement new after `if (mem)` gives a double null check; `new (m) T()` with a class `operator new(size, void *)`
  gives a single one.
* Overrides that take an argument the base declares without one must be declared with the argument, or the
  override becomes a new slot and shifts the vtable.

### Register allocation and instruction order

* **Check the argument count first.** The most common cause of a one- or two-register difference near a call is a
  callee that takes one more argument than its prototype: a value just loaded or tested, the work pointer, or the
  caller's own parameter passed through untouched (r1/r2 not written before the `bl`). Look at which of r0-r3 the
  callee's body reads. LampLights dead `ldr` of a stack argument at entry means a callee receives it.
* **The order in which mwcc colours values** decides which register a value gets: a value defined later in a block
  is coloured first. Statement order and declaration order often do not change it; how a value is created does. LampLights
  single-use local is substituted forward into its use (`dx = p->x - K; x = dx >> 3;` compiles exactly like
  `x = (p->x - K) >> 3;`), while an in-place redefinition (`x -= K; x >>= 3;`) keeps its position.
* When only registers differ, try the declaration order of locals (the first-declared local gets the highest
  callee-saved register), `s32 a, b;` versus separate declarations, and a scripted search over orders.
* `if (x) return TRUE; return FALSE;`, `BOOL r = FALSE; if (...) r = TRUE; return r;` and a ternary allocate
  differently; try each.
* LampLights constant the original keeps in a callee-saved register across a call (`movs r5,#5; bl f; cmp r5,r0`) comes from
  an enum-typed local: `enum { LIMIT = 5 }; Limit k = LIMIT;`. Integer locals get folded.
* LampLights global struct whose address stays in one register across calls: `T *const p = &global;`. LampLights plain local
  pointer is rematerialised after each call; the `const` version can also break a function where the original
  loads the address late. Try both.
* **Values the original reloads.** mwcc neither merges nor hoists two loads of one address made through different
  types (`((u32 *)arr)[i]` next to `arr[i]`, or a second struct view). Use this before considering anything else
  when the original reads the same location twice.
* Shift pairs may be casts: `lsl #9; asr #16` is what mwcc emits for `(s16)(v >> 7)`; writing `v << 9 >> 16`
  gives the same two instructions but a different allocation later in the function.
* `x * 3U` gives `mov rN,#3; mla`; signed `x * 3` of two `ldrsh` values gives `smlabb`.
* Call arguments are evaluated right to left: `f(g(a), g(b))` calls `g(b)` first. Hoist calls into locals in the
  original's order.

### Control flow

* LampLights loop that tests at the top and branches back unconditionally is `for (;;) { ...; if (!c) break; ... }`;
  `while` and `for` put the test at the bottom. LampLights loop the original enters with `b test` and whose body recomputes
  values mwcc would hoist was often written with labels and `goto`.
* In a `switch`, the source order of the cases sets the order of the code blocks; identical adjacent cases are
  merged, so write the original's duplicated bodies separately. LampLights jump table's bound is the highest explicit case
  label: list trailing empty cases explicitly, and leave out empty labels below a table that starts mid-way.
* `t == LampLights || t == LampLights+1` folds to `subs; cmp; bhi`; `switch (t) { case LampLights: case LampLights+1: ... }` gives two compares.
* LampLights `void` function whose last call the original makes with `bl` + epilogue (not a tail branch): define the callee
  before the caller in the file, or declare the callee as returning `s32`.
* Thumb tail call `ldr r3, =f; bx r3` is `return f(same args);` and only happens with at most three parameters.

### Types

* `lsls #24; lsrs #24` is a `u8` cast; `ldrsh` of a parameter means `s16`, `ldrh` `u16`; a `blo`/`bcc` loop means
  an unsigned counter; `bgt`/`bge` on a call result means it returns a signed type.
* LampLights callee parameter declared `u8`/`u16` makes callers mask the argument; if the original caller does not mask,
  the parameter is `u32` (and the callee's `strb`/`strh` truncates).
* Real C bitfields reproduce `lsls/lsrs` extraction and `bics/orrs` inserts; mwcc bitfields are LSB-first. Some
  inserts were written by hand (`x = ((v << 22) & 0x3fc00000) | (x & 0xc03fffff);`); try both.
* `S p = {0, 0};` calls memset; assign the fields one by one. Struct copies keep the original's grouping only with
  an array member (`struct { s32 v[4]; }` gives `ldm/stm`, three named fields give three `ldr/str` pairs).
* Soft float: `float` and `double` code compiles to the runtime helper calls with no special handling.

### `volatile`

`volatile` is used only where the original source had it: hardware registers (`*(volatile u16 *)0x04000006`,
the SDK's `reg_*` accessors), variables the SDK itself declares volatile (for example `MI_CpuClear16`'s
`vu16 zero` and the `vu16`/`vu64` locals of `OS_GetTick`), and the two words at `data_021f5c40` /
`data_021f5c44` that the PXI receive callback at 0x020fe4b4 shares with interrupt context. It is not a tool for
forcing a reload, a stack slot or a register; see "Values the original reloads" above for the alternative. Some
older game sources still declare game data `volatile` to reproduce a reload or a spill; do not copy that pattern.

### NitroSDK, NitroSystem and MSL

* **Write the library's own source shape.** Rebuilding the SDK's helpers first solved most library near-misses:
  `static inline` versions of the SDK inlines and macros (`NNS_G3dGetResDataByIdx`, the `NNSi_G3dBitVec*`
  helpers, `NNSi_FndSetBitValue`, `AddU32ToPtr`, `FX_Mul32x64c` with the 64-bit operand first,
  `GX_GetVCount()`, constant-returning inlines that keep a `mov ip,#K`). Read struct members at every use instead
  of caching them; the compiler then merges exactly what the original merged. for/continue loops, an entry
  pointer declared in the else block, `if (cb) { f = cb; cb = NULL; f(r, arg); }`, block-local BOOL flags and
  goto labels as in the SDK sources fixed several "register allocation" differences at once.
* Hardware-register writes in SDK callers are often `static inline` functions that **return the assigned value**:
  `static inline u32 G3_PolygonAttr(...) { return *(volatile u32 *)0x040004a4 = ...; }`. That reproduces the dead
  `ldr` after the store. The SDK's "Imm" register accessors read through non-volatile pointers.
* LampLights base address that is loaded and then indexed (`ldr r3,=0x027ffc00; ldr r2,[r3,#0x388]`) is a plain number
  taken into a local pointer first (`OSSystemWork *p = (OSSystemWork *)0x027ffc00;`). Written as
  `((T *)0x027ffc00)->member` the offset is folded.
* **MSL and fdlibm: write the original library text**, macros included (MSL's `cpd`/`lpd` lvalue-cast macros,
  `deref_auto_inc(p) *(p)++`, the qsort swap macro, `ansi_fp.c` and fdlibm as published). Equivalent
  reconstructions stay a few bytes off. Reproduce the original's bugs (a read before assignment) rather than
  fixing them.
* Variadic functions compile from C with a `va_start` macro; `blx` to a Thumb function and tail calls through
  `bx ip` are plain C calls; 64-bit arithmetic works in C (u64 arguments go in consecutive registers).
* `-opt noschedule`, `-opt nopeephole` and `-opt nocse` had no effect on any near-miss tried.

### When to stop

If a function still differs after several genuinely different attempts, keep the closest version and record the
remaining difference. Do not force a match with inline assembly, `volatile` on game data, filler objects or
`#pragma` tricks: such a function stays unlinked (see [`unmatched.md`](unmatched.md) and the
[assembly policy](assembly.md)).

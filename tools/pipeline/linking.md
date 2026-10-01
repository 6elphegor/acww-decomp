# Linking an overlay

An overlay's units are *matched* when every function compiles to the original instructions, but the ROM is still
built from the delinked original until the unit is marked `complete` in `delinks.txt`. Linking an overlay means
turning all of its units into one compiled object that reproduces the overlay byte for byte: code, data and bss.
ov140 and ov141 were linked this way. `tools/pipeline/link_candidates.py` lists the overlays that are ready
(fully covered by matched units, no recorded near-misses).

Run every tool from the repository root. `tools/pipeline/linkprep.py` has the subcommands used below.

## 1. Merge the units into one file

All of an overlay's functions go in one `.cpp`: its vtables, static tables and data are one compiler output, so
they cannot be split across files. Start from the unit files in `src/ovNNN/`.

* Keep one copy of every class and extern declaration. Where the units disagree on a field, choose the more
  specific layout (real members over padding) and check offsets add up (the factory's `new` size is the class
  size). Where they disagree on a signature, use the one the function's own definition matched with.
* Keep any `// mwcc-flags:` / `// mwcc-version:` line within the first 10 lines. If units need different
  compiler versions (e.g. sp2 for `_ZThn` thunks, base for jump tables), stop and report: the overlay cannot be
  one file.
* **Use the real names of everything outside the overlay.** Unlinked units used stand-in classes (e.g.
  `Unk_ov140_ov139_02291f60`); a linked object must call the symbols exactly as the other modules' `symbols.txt`
  name them. `linkprep.py undef <obj>` lists every unresolved symbol. For each, find the real name by address:
  `grep "addr:0x0206fcc8" config/usa/arm9/symbols.txt` (main), `config/usa/arm9/overlays/ov002/symbols.txt`,
  `config/usa/arm9/autoload_2/symbols.txt` (runtime and `func_020e...`/`func_0213...`), `itcm`, other overlays.
  Then declare the class/function so it mangles to that name:
  * a method `_ZN18Unk_ov139_02291f6019func_ov139_02292154Ei` → class `Unk_ov139_02291f60`, method
    `func_ov139_02292154(s32)`; parameter letters: `h` u8, `t` u16, `j` u32, `i` s32, `s` s16, `a` s8,
    `Ph` u8*, `Pv` void*. Return types are not mangled: keep whatever the function matched with.
  * a plain `func_XXXXXXXX` → `extern "C"`. A `_Z13func_0207217cv` → C++ linkage, declared outside `extern "C"`.
  * a call the unit wrote as a free function taking the object (`f(&unk_94, i)`) becomes a method call
    (`unk_94.f(i)`) when the real symbol is a method; the code is the same.
  * methods of one object split across several classes in ov002 (known case: `Unk_ov002_02202d98` and
    `Unk_ov002_0220464c` are the same cursor object) — declare both classes and call the second through a cast
    `((Unk_ov002_0220464c *)&unk_6b8)->func_ov002_02202b68()`.
  * a callee reached through a returned singleton (`func_020ed174()` then `func_ov092_02291c5c()` with r0
    unchanged) is `((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291c5c()`.
  * Never rename a symbol of another module to change its signature: other overlays call it too. If a call site
    needs a different argument list than the symbol's mangled signature (e.g. the original passes an extra
    argument), declare an `extern "C"` function whose *name is the mangled symbol* and pass the object first:
    `extern "C" void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12Unk_020e0d98(void *self, void *p, s32 x);`
    — the call compiles exactly like the method call. Renames are only for your own overlay's symbols and for
    agreed shared names (constructors/destructors; see the renames already committed in symbols.txt).
  * Runtime helpers the compiler calls implicitly must exist by name in `autoload_2/symbols.txt`
    (`_s32_div_f`, `_u32_div_f`, `__cxa_vec_ctor`, `__cxa_vec_cleanup` already do). If another one is missing,
    find its address from the original call site in `relocs.txt` and list it in `renames.txt` (see 5).
* Check signed/unsigned division: asmdiff does not compare call targets, so a matched function can call
  `_u32_div_f` where the original calls `_s32_div_f` (or the reverse). The link diff catches this.

## 2. Define the overlay's data

`python3 tools/pipeline/ovdump.py ovNNN` dumps `.data` with relocation targets. The compiled object must produce
all of it:

* Compiler-generated objects come for free: vtables, member-function-pointer constants of static tables,
  static tables and their guards (bss), local array initialisers.
* Named data the code references (`data_ovNNN_XXXXXXXX`) must be *defined* in the file with its contents, e.g.
  `extern "C" u32 data_ov140_02293da4[10] = {...};` (copy the words from the dump; pointers as the symbol).
* The scene registration entry `{factory, u16, u16}` near the start of `.data` (referenced from main by
  address only) is a named definition too, e.g.
  `extern "C" Unk_ov140_SceneEntry data_ov140_02293d10 = {func_ov140_02293c6c, 0xb5, 0xb9};`.
  Words are little-endian: the dump word `00b900b5` is the u16 `0xb5` followed by `0xb9`. The entry is 8 bytes;
  two zero words right before a vtable are the vtable's own header (offset-to-top and typeinfo), not padding.
* `linkprep.py data` checks each object's contents; an `ERROR ... match nowhere` means a wrong initializer.
* Strings that sit after all other data (e.g. `menu/res/d0_bg.bsc`) are string literals in the code, not
  named arrays: the literal pool is emitted after the sorted data. Strings that sit among the sorted data
  (typically the targets of a table of string pointers) are named `char[]` objects instead.
* Some `symbols.txt` data labels are interior addresses of one larger table (e.g. `data_ov130_02293500/08/10`
  inside the 32-byte table at `…4f8`): define the whole table once and refer to `table + k`; separate
  objects make the original order unreachable. `.rodata` sorts together with `.data`/`.bss`.
* Array sizes matter to the sort: define each object with exactly the size the original gives it (the gap to
  the next symbol, e.g. `u8[7]`, not a rounded `u8[8]`).
* **When the order of a static table's member-pointer constants cannot be reproduced** (ov118/ov120/ov122/ov126:
  searches stall well short of a full match), name the constants: define each as
  `void *data_ovNNN_<its original address>[2] = {(void *)<mangled method symbol>, 0};` (a real
  pointer-to-member global would make mwcc emit a static initialiser) and initialise the table from them,
  `static Fn tbl[] = {*(Fn *)data_ovNNN_..., ...};`. The code is byte-identical, and the constants are now named
  objects whose order is set by definition order (compute it by inverting the heapsort, or `data --apply`).
* If no placement reproduces the order (a large search stays short by two objects that swap), the original
  likely had one extra object the linker dead-stripped: an unreferenced global not in symbols.txt, e.g.
  `extern "C" u32 ovNNN_order_pad[4] = {0};`, created at the right point, takes part in the sort and is then
  stripped (ov125).
* The scene class destructor: if the original has D1 then D0 (vtable slot 0x40 then 0x44, D1 at the lower
  address) and the destructor body is empty, **leave the destructor implicit** (no `~X()` declaration or
  definition). An explicit `~X() {}` emits D0 before D1.

### Overlays with `.init` / `.ctor` (static initialisers)

Nothing special is needed in the source: mwcc generates `__sinit_<file>` (in `.init`) and its `.ctor` word itself
from any file-scope object with a non-constant initialiser — typically a table of pointer-to-member-function
pairs, e.g. `Ent data_ov083_02271d20[3] = {{&C::f824,&C::f7d8},{&C::f790,&C::f764},{NULL,&C::f760}};`.
* A NULL member pointer is copied from the runtime constant `__ptmf_null` (autoload_2 0x0213a740): add
  `autoload_2 0213a740 __ptmf_null` to renames.txt until it is committed.
* Strings shared by several functions (one copy in the original) need `// mwcc-flags: -str reuse` on line 1;
  the default `-str noreuse` makes one copy per use. `#pragma reuse_strings` is ignored.
* The overlays built on main's `Unk_020d77a4`/`Unk_020d8bc8` scene classes (ov080, ov083, ...) share a set of
  main renames and class chains: copy `pipeline_wip/scratch/link_ov083/renames.txt` and the class declarations
  from `link_ov083/unit.cpp` rather than inventing new names. Their inline constructors store
  `_ZTV12Unk_020d77a4` / `_ZTV12Unk_020d8bc8` (being added to main's symbols.txt).

## 3. Order the functions

mwcc emits a file's functions last to first, so the file must define them in descending address order:

    python3 tools/pipeline/linkprep.py reverse <file.cpp> ovNNN

It sorts out-of-line function definitions by their original address (from symbols.txt) and keeps declarations and
inline helpers above them. This is the original file's definition order, so inlining behaves as it did.

## 4. Compile and check

    python3 tools/pipeline/linkprep.py compile <file.cpp> <out.o>
    python3 tools/pipeline/linkprep.py check <out.o> ovNNN
    python3 tools/pipeline/linkprep.py data <file.cpp> <out.o> ovNNN [--apply]

* `check` must report 0 layout problems, 0 wrong targets and 0 unresolved symbols. EXTRA functions are ones the
  original does not have (e.g. an out-of-line copy of an inline function); ORDER means a definition is out of
  place; TARGET means a call or pointer names a symbol that exists but at a different address than the
  original's (typically a sub-object declared with a similar but wrong class, e.g. `Unk_ov002_02204738` instead
  of `Unk_ov002_0220471c`) — use the class whose symbols live at the address the check prints.
* `data` maps each data/bss object to its original address and reports whether the object's data order matches.
  mwcc heapsorts a file's data by size over the reverse of creation order, so the order depends on where each
  named object is *defined* relative to the functions. `--apply` searches for a placement that reproduces the
  original and moves the definitions (adding extern declarations). Recompile and rerun `data` until it says
  `compiled object's data order: MATCHES the original`.

## 5. Deliver

Put in the scratch directory:
* `unit.cpp` — the merged file,
* `renames.txt` — optional, one `module hexaddr newname` per line for symbols.txt entries that need a name
  (module is `main`, `autoload_2`, `ovNNN`, ...),
* `notes.txt` — anything unusual.

The link runner installs it as the overlay's only unit (`complete`, all sections), builds the ROM and commits if
it matches; otherwise it saves `linkprep.py diff` output to `link_fail.txt` in the scratch directory.

## One constructor, two names (C1/C2)

mwcc emits a complete-object (C1) and a base-object (C2) constructor, but the game keeps one body for
both. Different linked units may call the same address by different names (e.g. ov048/ov118/ov120 call
`_ZN12Unk_020dd38cC2Ev`, ov139's function-local statics call `C1`). symbols.txt holds one sized symbol per
address and mwld aborts on two ("the sum of all symbol sizes exceed section size"), so add the second
name as a zero-size label: `python3 tools/pipeline/alias.py config/usa/arm9/symbols.txt <existing> <new>`.
Never rename a constructor that a linked unit already calls; alias it instead (`rename_impact.py` tells you).

## Creation-order rules the data model gets wrong (found on ov147, ov123, ov139, ov129)

Verified with small equal-size test files (where the heapsort can be inverted exactly):
- A guarded function-local static is created FIRST, its guard immediately after (the model puts the guard after).
- A function-local static pointer-to-member table: its @N constants first, then the table, then its guard.
- A file-scope ptmf table filled by `__sinit`: its @N constants first, then the table.
- Vtables come last, in reverse declaration order of their classes.
When `data` reports "compiled object's data order: MATCHES" but its own model says N/M in place, trust the
compiled-order line. For hard orders, write a small script that inverts the heapsort with these rules
(several agents did this; annealing over definition placement + local-static declaration order works).
Objects only reachable through a pointer table in .rodata are "contents match nowhere" in `data`; verify
them by hand (the ROM checksum catches any mismatch anyway).

## Overlays that were two translation units

If an overlay's .data/.bss are two size-sorted runs back to back, it was two source files (ov147). Split it into
two `complete` units in delinks.txt with explicit section ranges per unit (unit A: its .text/.rodata/.init/
.ctor/.data/.bss halves; unit B: the rest). The link runner installs only single-unit overlays; two-unit
ones are installed by hand.
Installing a multi-unit overlay (done for ov147, ov002): `git rm` the old units, write each unit file, and
list each unit in delinks.txt as `complete` with its own section sub-ranges. dsd requires every unit's
section range to end exactly on a symbol boundary (a symbol's size is implied by the next symbol), so add
an unreferenced `data_ovNNN_<addr> kind:data(any)` symbol at each unit boundary that falls inside a
symbol's implied range. A relocation from another module into the middle of a unit's object (e.g. main
pointing into a bss array) must target the object's start plus `add:<offset>` in relocs.txt.
Different units may use different `// mwcc-version:` lines.

## Units built by two compilers (object order)

Some original units cannot be reproduced by one compiler version: their `_ZThn236_...` thunks only come out right
with mwcc 1.2/sp2, and one or two of their switch functions only with 1.2/base (ov009, ov003 TU05/TU08, ov004
TU03/TU05/TU26). Such a unit is linked from two (or more) objects:

* the **main file**, e.g. `src/ov009/unk_ov009_0225b880.cpp`, with `// mwcc-version: 1.2/sp2`: the whole merged
  unit (sections 1 and 2 above) minus the base-only functions. It is the unit named in `delinks.txt`, marked
  `complete`, with all its section ranges, exactly like any other linked unit;
* an **extra file** next to it, e.g. `src/ov009/unk_ov009_0225b880_switch.cpp`, with `// mwcc-version: 1.2/base`:
  the same declarations and only the base-only function(s). It is *not* listed in `delinks.txt`. It must emit
  nothing else that the link needs (no vtable, no static table); string literals and constants local to its
  functions are fine. No assembly: the function is ordinary C++ that the other compiler version happens to match.

A file's functions cannot be interleaved with another file's by `file.o(.text)` selectors, and mwld `-partial`
does not help (it concatenates same-name sections in input order). Instead the linker script places every
function and data object of the unit individually with mwld's `OBJECT(symbol, file.o)` selector, in original
address order. `tools/object_order.py` writes those selectors; it runs between `dsd lcf` and
`tools/force_active.py` whenever a module has an `object_order.txt` (`tools/configure.py` adds the step and its
dependencies on the unit's objects; without any such file the build is as before).

### The description file

`config/usa/arm9/overlays/ovNNN/object_order.txt`, next to the overlay's `delinks.txt`:

    # comment
    src/ov009/unk_ov009_0225b880.cpp:
        extra src/ov009/unk_ov009_0225b880_switch.cpp _ZN18Unk_ov009_0225e29c8vfunc_4cEjh
        place __arraydtor$303 0x0225e05c

* `<main source>:` — a unit of this overlay's `delinks.txt` (one block per unit; the other units of the overlay
  are not affected and keep their normal `file.o(.section)` selectors).
* `extra <source> <symbol>...` — an extra source file and the symbols it provides. Only these symbols are taken
  from the extra object (plus local objects its placed functions point to); any other global it happens to emit
  is ignored in favour of the main object's. A unit may have several `extra` lines.
* `place <symbol> <address>` — optional; the original address of an object that cannot be derived (see below;
  the example line above is not needed in ov009).

After adding or changing an `object_order.txt`, rerun `python3 tools/configure.py usa`.

### What the tool does

For each unit of an `object_order.txt` it reads the compiled objects (mwcc emits one section per function and
per data object) and gives every section its original address:

1. by name: a symbol of the overlay's `symbols.txt` inside the unit's range, defined by the object;
2. by pointer: compiler-named objects (`@949` member-pointer constants, `tbl$904` local static tables and their
   `_ZGVtbl$904` guards, vtables whose `symbols.txt` label sits 8 bytes later, `__arraydtor$303`, string
   literals) are found from the `R_ARM_ABS32` relocations of sections that are already placed: `relocs.txt`
   says where the original pointer at that address points (`kind:load`). The static initialiser (`.init`) is
   used as a source of pointers too. This repeats until nothing new is found;
3. by a `place` line.

It then checks that the placed sections cover each of the unit's `.text`, `.rodata`, `.data` and `.bss` ranges
exactly (4-byte alignment between objects; the last unit of a section may be padded to the section's alignment)
and fails the build with the address of the first hole or overlap otherwise. Functions that are not placed
(C2/D2 variants, link-once thunks owned by another unit, unused inlines) are left to dead-stripping, as before.
`python3 tools/object_order.py ... -v` (copy the command from `ninja -v`) lists every object, its address and
how the address was found, and every section that was not placed.

In the linker script it:

* replaces the unit's `file.o(.text)`, `file.o(.rodata)`, `file.o(.data)` and `file.o(.bss)` lines with
  `OBJECT(symbol, file.o)` lines in address order (`.init`/`.ctor` keep their file selectors);
* moves the overlay's bss part into its own output section `.ovNNN_bss` in a new MEMORY region
  `UNINITIALIZED_OVNNN : ORIGIN = AFTER(OVNNN)` that has no output file, and replaces `OVNNN` by that region in
  the `AFTER(...)` list of every module loaded after it. mwld writes OBJECT-selected bss into the overlay's
  file as zero bytes otherwise. (The region name must not start with `OV`: dsd reads such regions as overlays.)
  `OVNNN_BSS_START`/`_END` keep their values, and the other units' `file.o(.bss)` lines move along unchanged;
* defines every other `symbols.txt` name of a placed function that no object of the unit defines as an alias at
  the end of `SECTIONS`: `alias = defined_name + 1;` (`+ 1` for Thumb). This is how other linked units keep
  using their own names for the unit's functions (see "One constructor, two names"): add the name the source
  defines, or the name another unit uses, as a label with `tools/pipeline/alias.py` and the tool does the rest;
* adds the extra objects to the object list right after the main object (`objects_object_order.txt`), so
  `force_active.py` keeps their `symbols.txt` functions.

Because every object is placed by address, the function order (section 3) and the data heapsort order
(section 2, `linkprep.py data --apply`) of the source files **do not matter** for such a unit; only the
contents of each function and object do. `linkprep.py check` still reports ORDER lines (and data TARGET lines
that follow from the order) for it: ignore those, but not BYTES or MISSING lines.

### Limits

* Overlays only (the script section and region names are derived from the overlay's directory name).
* The whole bss of the overlay moves to the file-less region as soon as one of its units is object-ordered;
  this is harmless for the other units.
* An alias is an untyped absolute linker symbol. It is right for pointers (vtable slots, tables) and Thumb
  callers — the only uses so far — but mwld cannot know its ARM/Thumb mode, so check the ROM when a new kind of
  caller appears, or give callers the name the source defines.
* Data labels of `symbols.txt` get no aliases: if another unit references `data_ovNNN_XXXXXXXX` by name, the
  source must define the object under that name. A pointer from another module into the middle of one of the
  unit's objects is handled as for any linked unit: name the object's start in `symbols.txt` and give the
  relocation `add:<offset>` (ov003 TU08: main's word at 0x020cdf4c points to 0x02231707, inside a vtable; it is
  now `to:0x0223160c add:0xfb` with `_ZTV18Unk_ov003_02231614` at 0x0223160c). mwld does **not** report the
  leftover undefined label: the word is linked as 0 and only the ROM checksum shows it
  (`tools/pipeline/romdiff.py` then names `arm9.bin`).
* An object is placed in the range of its own section kind: an object the original keeps in `.rodata` must be
  `const` in the source (the tool reports the hole in `.rodata` otherwise).
* An object that nothing placed points to, and that has no `symbols.txt` name, needs a `place` line.
* Two sections of one object that share a local symbol name cannot be selected (the tool reports it).
* A link-once function that another unit already provides at its own address (the shared thunk
  `_ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev` in ov003 TU04) lies outside the unit's range, is therefore not
  placed, and the first copy keeps being used.
* Tools that compare `src/ovNNN/*.cpp` with `delinks.txt` see the extra file as an unlisted source.

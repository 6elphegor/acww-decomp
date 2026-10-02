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

* Overlays and the main module (the script section and region names are derived from the overlay's directory
  name; for main see "Linking the main module", "Units placed object by object").
* The whole bss of the overlay moves to the file-less region as soon as one of its units is object-ordered;
  this is harmless for the other units.
* An alias is an untyped absolute linker symbol. It is right for pointers (vtable slots, tables) and Thumb
  callers — the only uses so far — but mwld cannot know its ARM/Thumb mode, so check the ROM when a new kind of
  caller appears, or give callers the name the source defines.
* Data labels of `symbols.txt` get no aliases: if another unit references `data_ovNNN_XXXXXXXX` by name, the
  source must define the object under that name (or, for a label inside an object, record it in the overlay's
  `lcf_symbols.txt`, see "Names the linker script defines"). A pointer from another module into the middle of one of the
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

# Linking the main module

The ARM9 main module (0x02000000-0x020e7500, `src/main`, `config/usa/arm9/{delinks,symbols,relocs}.txt`) is linked
one original translation unit at a time: `install_tu.py main <spec>` makes one unit `complete` and leaves the rest
delinked. The unit table is `pipeline_wip/scratch/link_main/plan.md` (TU000-TU238, `tu/TUnnn.txt` per unit).
Everything in sections 1-5 above applies (real names, function order, data definitions, `__sinit`); this section
is what is different. All of it was checked with full ROM builds (TU014-017, TU048, TU068, TU102, TU113, TU138,
TU139, TU183, TU185, TU198, TU210).

## What a main unit owns

| Section | Where | In the spec |
|---|---|---|
| `.text`, `.init`, `.rodata`, `.ctor`, `.data` | main, `config/usa/arm9/delinks.txt` | `.text a b` ... |
| `.bss` | **autoload_3** (0x0213c6c0-0x021f4768 are the game files' bss in file order) | `.bss a b` |

Main has no `.bss` of its own and dsd refuses one source file in two modules (`dsd lcf`: "Delink file name ...
already used"). So a main unit's bss range is listed in `config/usa/arm9/autoload_3/delinks.txt` as a
**placeholder unit** named like the unit with `.bss` before the extension, without a source file:

    config/usa/arm9/delinks.txt                  config/usa/arm9/autoload_3/delinks.txt
        src/main/unk_0209c37c.cpp:                   src/main/unk_0209c37c.bss.cpp:
            complete                                     complete
            .text  start:0x0209c37c end:0x0209c390       .bss   start:0x021d7168 end:0x021d726c

dsd splits autoload_3's gap object at the range and writes `unk_0209c37c.bss.o(.bss)` there in the linker script;
`tools/bss_units.py` (a build step right after `dsd lcf`, present when a placeholder exists) renames the selector
to `unk_0209c37c.o(.bss)` and drops the placeholder from the object list. The unit's `.bss` sections then land in
autoload_3 exactly like an overlay unit's in its overlay. `install_tu.py` writes both entries from one spec.

Build chain: `dsd lcf` -> `bss_units.py` -> `object_order.py` -> `aliases.py` -> `lcf_symbols.py` (labels of
`lcf_symbols.txt`, absolute symbols of `abs_symbols.txt`) ->
`force_active.py` -> mwld. Each of the four middle steps exists only when needed (`tools/configure.py` decides), so **rerun
`python3 tools/configure.py usa` after every install** (the helper script does).

## The spec and `install_tu.py main`

    unit unit.cpp                       (relative to the spec, or absolute)
    .text   0x020116e0 0x020119cc
    .init   0x020c2d4c 0x020c2d74       only if the unit has a __sinit: up to the next __sinit
    .rodata 0x020c6c88 0x020c6cbc
    .ctor   0x020d1de4 0x020d1de8       the one word that points to the __sinit
    .data   ...
    .bss    0x021bdb74 0x021bddd8       addresses in autoload_3

`python3 tools/pipeline/install_tu.py [--replace] main spec.txt`:

* writes `src/main/unk_<text start>.cpp`, lists it `complete` with the main ranges, and the `.bss` range as the
  placeholder in autoload_3;
* removes old non-complete files that lie inside the `.text` range (`git rm`), trims the ones that straddle it
  (a file covering both sides keeps the lower part). A trimmed file that has the name the unit needs is renamed
  to `unk_<its new start>.cpp` (`git mv`). So **file names in `plan.md`/`tu/TUnnn.txt` go stale as units are
  installed**: prepare units from a frozen copy of `src/main`, and take function addresses, not file names, as
  the reference;
* `--replace`: complete units inside the range are removed too. This is how the early code-only units are
  replaced by their real file (TU068 replaced four);
* checks every range boundary: `.text`/`.init` boundaries must be function symbols; for a data or bss boundary
  without a symbol it adds `data_<addr>` (dsd wants every unit range to start and end on a symbol) and prints a
  NOTE. A boundary that is the start of a vtable should be named in `renames.txt` instead (next section);
* applies `aliases.txt`, then `renames.txt`, next to the source.

`renames.txt` (one per line, `#` comments):

    main 02050e84 _ZN20Unk_02050288_FontObjC1Ev     a symbol of the unit gets the name the object defines
    main 020dd36c _ZTV12Unk_020dd374                vtable: named at its start, see below
    autoload_3 021bdd80 interior:021bdb80           label inside an object, see "Interior labels"
    main 020d1dd8 section:.ctor                     name the linker script must define, see "Names the linker
                                                    script defines"

`aliases.txt`: `<module> <existing name> <second name>` adds a label with `tools/pipeline/alias.py`, e.g.
`autoload_2 _ll_sdiv _ll_udiv` (0x02132ef8 is the unsigned 64-bit division; linked overlay units call it
`_ll_sdiv`, compiled code of a `u64 / x` calls `_ll_udiv`).

### Vtables

dsd labelled 230 vtables of main 8 bytes into the object (`data_020dd374` = first slot of the vtable at
0x020dd36c). The compiled unit emits `_ZTV12Unk_020dd374` at the start, so the label must become that symbol and
every relocation to it `to:<start> add:0x8`. A `renames.txt` line `main <start> _ZTV<n><class>` does both
(`tools/pipeline/vtable_rename.py`; standalone: `vtable_rename.py [-n] main <start or label> <class or _ZTV name>`).
Do the same for the vtable that starts where the unit's `.data` range ends, even though it belongs to the next
unit: the range must end on a symbol, and the vtable symbol is the right one (TU102: `main 020dd384
_ZTV12Unk_020dd38c`). `check` prints a `BOUND` line for every boundary that still lacks a symbol.

### Interior labels

Thumb code reaches a member at a large offset through a literal `object + 0x200` plus a small displacement, and
dsd made a symbol of every such literal. So many `data_` labels, in `.data` and above all in bss, are **addresses
inside an object**, not objects: `data_021bdd80` and `data_021bddc0` are `data_021bdb80 + 0x200` and `+ 0x240`
(one 0x258-byte object, members `unk_250` and `unk_254`); `data_020dbbc8/bc08/bc48` are parts of the 0x1c0-byte
table `data_020dbac8`. The signs: a matched function reads `data_X[0x50 / 4]` next to `p->unk_250` of the
neighbouring object; a table is indexed beyond its "size"; a class is larger than the gap to the next symbol; a
section that should be one size-sorted run has "runs" of objects that only `__sinit` references. The current
files declare such labels `extern`; **the unit must define the whole object once and use members or indices**
(`data_021bdb80.unk_250`), which compiles to the same literal. `check`'s TARGET test compares the resolved
address with the original word, so it confirms the object + offset. If code *outside* the unit refers to the
label (`check`: `MISSING ... interior`; or other sources under `src/` declare it `extern`), add
`<module> <label> interior:<object>` to `renames.txt`. At install the label is removed from `symbols.txt`, the
relocations of delinked code become `to:<object> add:<offset>`, and the label is recorded in the module's
`lcf_symbols.txt`, from which the build defines it in the linker script for the compiled sources that use it (next
section). Inside the unit itself use the member, not an extern of the label.

## Names the linker script defines: `tools/lcf_symbols.py`

Once a range belongs to a compiled unit, only the global symbols of its object exist there. Two kinds of names
that other code uses are then defined by nobody:

* an **interior label** that compiled sources of other units declare `extern` (`data_021d7352` =
  `data_021d7350 + 2`; 106 linked files use the 49 labels inside the save object). The link stops with
  `Undefined: "data_021d7352"`;
* a name for a place the compiler gives only a **local symbol**: the first word of main's `.ctor` table is
  `.p__sinit_<file>` in the object, and the runtime in autoload_2 has a relocation to it (0x02135344). A delinked
  object's references are weak: no message, the word is 0, `autoload_2.bin` differs.

Both are recorded in `lcf_symbols.txt` next to the module's `symbols.txt` (main: `config/usa/arm9/`, main's bss:
`config/usa/arm9/autoload_3/`, overlays likewise):

    data_021d7352      addr:0x021d7352  base:data_021d7350
    p__sinit_020c2cd0  addr:0x020d1dd8  base:ARM9_CTOR_START

`base` is a data/bss symbol of the same `symbols.txt` that a complete unit defines as a global object, or a
section start of the module as dsd's script names it (`ARM9_CTOR_START`, `OV004_DATA_START`). The build step
(after `aliases.py`, before `force_active.py`; only present when such a file has entries, so rerun
`tools/configure.py`) appends `data_021d7352 = data_021d7350 + 0x2;` to the end of `SECTIONS`.

What mwld does (tested with a miniature link of real mwcc objects, 1.2/base mwldarm):

* an assignment satisfies the undefined reference of a compiled object and the weak reference of a delinked one,
  for `.data`, for bss in a region without an output file (also `OBJECT()`-selected), and relative to a section
  start symbol for `.ctor`;
* a base that is not linked (misspelt, or dead-stripped because nothing keeps it) evaluates as **0 without a
  message**; the name is then `0 + offset`. A linker script reference does not keep an object alive;
* when an object also defines the name, there is no "multiply defined": for data the assignment silently wins;
* a name must be an identifier: `.p__sinit_020c2cd0 = ...` is a syntax error, quoted or not. dsd accepts any name
  for the symbol, so the `symbols.txt` name loses its dot.

So the tool refuses, with file and line: a base that is not in `symbols.txt` (`force_active.py` keeps what is
there) or that no linked compiled object defines as a global; a name that any linked object defines; an address
outside the complete unit's range that the base is in (a delinked range means the name belongs in `symbols.txt`);
a name that `symbols.txt` has at another address; duplicates; non-identifiers. `-v` lists every name and the
objects that use it. Every recorded name is defined, used or not.

**Which references it is for.** Compiled sources that use a label as an extern object: always this (the literal
`data_021d7352` and `data_021d7350 + 2` are the same bytes, and no source changes). Relocations of delinked code
(`to:<label>` in a `relocs.txt`): rewrite them as `to:<object start> add:<offset>` whenever the object start has
a global symbol, which is what `interior:` does: it needs no linker symbol, dsd resolves it against the real
object, and it stays right when the label is forgotten. Use a linker script name for a delinked relocation only
when there is nothing to rewrite it to, because the compiler's symbol at the object start is local (`.ctor`
words, `static` objects): renames.txt `main 020d1dd8 section:.ctor` keeps the symbol in `symbols.txt` (dsd needs
it for the relocation and as the unit boundary), renames it to an identifier and records it relative to the
section start. Function names never go here (`aliases.py`).

`linkprep.py check` and `undef` read `lcf_symbols.txt` like `symbols.txt` (a later unit that uses
`data_021d7352` as an extern resolves, and its TARGET test has the address); a `MISSING ... used from outside`
line is satisfied by a recorded name or by an `interior:`/`section:` line of the unit's `renames.txt`, which
`check` validates (the object must define the base as a global there). Standalone:
`vtable_rename.py [-n] --interior <module> <label> <object>` and `--section <module> <address> [.ctor]`.

### Absolute symbols: `config/usa/arm9/abs_symbols.txt`

NitroSDK takes some numbers from its linker script: the stack sizes, the start of the DTCM arena (end of the DTCM
bss), the start of the extended main-RAM arena. In the SDK source they are `extern` names, so the compiler cannot
fold them, and in the linked ROM they are plain numbers, so the word has **no relocation in `relocs.txt`**. The
tell-tale in the disassembly: a literal-pool word without a relocation that a number in the source would never
produce (`ldr ip,=0x2000; cmp ip,#0` with both branches kept; `ldr r0,=0x02400000` where a number gives
`mov r0,#0x2400000`; `ldr r0,=0x1000; sub r0,r1,r0`).

They are listed in one file for the whole program, `config/usa/arm9/abs_symbols.txt`:

    # name                        value
    SDK_SYS_STACKSIZE             abs:0x00002000
    SDK_IRQ_STACKSIZE             abs:0x00001000
    SDK_SECTION_ARENA_DTCM_START  abs:0x027e0460
    SDK_SECTION_ARENA_EX_START    abs:0x02400000

and used in C as the SDK does: `extern u8 SDK_SYS_STACKSIZE[];` ... `(s32)SDK_SYS_STACKSIZE`,
`(void *)SDK_SECTION_ARENA_EX_START`. Examples: `pipeline_wip/sdk_units/L001` (OS_InitThread), `L003`/`L004`
(OS_GetInitArenaLo/Hi).

* **Build.** `tools/lcf_symbols.py` (the same step as above; `tools/configure.py` adds it when either kind of file
  has entries, so rerun `configure.py` after creating the file) appends `SDK_SYS_STACKSIZE = 0x2000;` to the end of
  `SECTIONS` for every listed name that a linked object refers to; an unused name is not defined. This is the
  syntax of dsd's own `OVERLAY_0_ID = 0;` lines. It refuses: a non-identifier, a duplicate, a name that is also
  in a `symbols.txt` or an `lcf_symbols.txt` (a place inside a module has a relocation and belongs there), a
  name that a linked object defines. `aliases.py`, `force_active.py` and `bss_units.py` do not see these names.
* **`linkprep.py check` / `undef`.** The names resolve (module `abs`). A relocation against an absolute symbol
  is right when the original word has no relocation and equals the symbol's value plus the addend; `check` lists
  it as `abs     func+0x124 SDK_SYS_STACKSIZE = 0x00002000 (...)` (information, not a problem). It is a `TARGET`
  problem when the value differs, when the original has a relocation on that word (then the word is a place in a
  module: use the `symbols.txt` name, e.g. `data_027e0000` for the DTCM start), or when the symbol is called.
  Without the line in `abs_symbols.txt` the name is `MISSING` (unresolved).
* **Adding one.** Name it after the SDK's symbol when known, give the exact value of the original word, and say
  in the unit's notes.txt which line the coordinator must add. Values are per program (this ROM), not per module.
* **Not every unfolded number is a symbol.** A base address that is loaded and then indexed
  (`ldr r3,=0x027ffc00; ldr r2,[r3,#0x388]`) comes out of a plain number held in a local pointer first:
  `OSSystemWork *p = (OSSystemWork *)0x027ffc00; ... p->pxiHandleChecker[0]` (`sdk_units/L002`, PXI). Written as
  `((OSSystemWork *)0x027ffc00)->member` the compiler folds the offset into the address. Try the local pointer
  before asking for a symbol: a symbol's address load is scheduled differently from a number's (it moves to the
  top of the block), so a symbol where the original had a number does not match either.

This is also why the plan's unit boundaries of class `r` are often not real: when one object spans the bss of
several consecutive units (TU014-TU017), or a class's vtable/key function, an `__arraydtor`, or a `__sinit`'s
objects sit in the neighbour (TU021/TU022, TU207-TU209), the units are one file and must be merged.

## Second names of functions: `tools/aliases.py`

symbols.txt has 59+ `kind:label` aliases in main, mostly a C1 next to a C2 constructor, because linked overlay
units call one address by both names. For a delinked address dsd defines every name. A compiled unit would
* define both C1 and C2 as two functions, and the build keeps every global that symbols.txt names
  (`force_active.py`): both bodies would be linked and the unit would grow;
* leave undefined a name it does not use (another class's name for the same function).
A linker script assignment (`alias = name + 1;`, what `object_order.py` writes for overlays) does not solve the
first case: mwld prefers the object's own definition (tested). So `tools/aliases.py` (build step, present when
main has complete units) rewrites the symbol table of each compiled main unit that has such names into a copy
under `build/usa/aliases/`, and that copy is linked: an alias the object defines with **identical code** is
redirected to the primary name's section (the duplicate, now nameless, is dead-stripped); names the object does
not define are added to it as real function symbols (correct for ARM callers too). Different code under two
names is an error. Nothing to do in the source; `check` prints `ALIAS` lines saying what will happen.
When a unit calls a constructor by the name symbols.txt does not have (`_ZN12Unk_020ddf44C2Ev` for a base class
whose symbol is `...C1Ev`), add the missing one in `aliases.txt`; never rename (see "One constructor, two names").

## Preparing and checking a unit

    python3 tools/pipeline/linkprep.py dump main spec.txt            the unit's data words, targets, labels, bss
    python3 tools/pipeline/maindis.py 0x020c2d4c 0x28                 original code (e.g. a __sinit) with targets
    python3 tools/pipeline/linkprep.py compile unit.cpp unit.o
    python3 tools/pipeline/realnames.py unit.cpp unit.o               func_XXXXXXXX -> its symbols.txt name
    python3 tools/pipeline/linkprep.py reverse unit.cpp main          sort definitions by descending address
    python3 tools/pipeline/linkprep.py check unit.o main spec.txt
    python3 tools/pipeline/linkprep.py data unit.cpp unit.o main spec.txt [--apply] [--seed N]

`renames.txt`/`aliases.txt` are read from the directory of `unit.o`. After installation the unit's delinks name
(`src/main/unk_XXXXXXXX.cpp`) can be given instead of the spec.

`check` simulates the link at the unit's ranges, with the build's dead-stripping (a section is kept if it has a
global that symbols.txt names, or is referenced from a kept one; `.ctor` is always kept) and alias folding:

| Line | Meaning |
|---|---|
| `ORDER`, `BYTES`, `SIZE` (.text) | function not on its address / bytes differ / code does not fill the range |
| `EXTRA` | a function symbols.txt does not have is referenced and therefore linked (it shifts the unit) |
| `FOREIGN` | the object defines a symbols.txt function of another unit: Multiply-defined at link |
| `MISSING` (function) | a function of the range is not defined |
| `NORANGE` | the object emits `.data`/`.rodata`/`.bss`/`.init` objects but the spec has no such range |
| `SIZE` (data) | the kept objects of a section do not end exactly at the range end |
| `DATA` | an object's bytes at its simulated address differ (wrong initialiser or wrong order) |
| `PLACE` | a named object is not on its symbols.txt address (order) |
| `TARGET` | a relocation resolves to another address than the original word (calls: than relocs.txt), or to a symbol of the wrong module |
| `MISSING` (data) | a name that relocations *from outside the unit* use is not defined by the object at that address, nor by the linker script: vtable label (rename), interior label (`interior:`), `static` object, wrong name, a place with a local symbol only (`section:`); or an `interior:`/`section:` line that cannot work |
| `ALIAS`, `BOUND`, `unused` | information: alias handling, boundary without symbol, dead-stripped sections |

It must end with `0 layout problems, 0 wrong targets, 0 unresolved symbols`. `OVERLAY_<n>_ID` are linker script
symbols and count as resolved.

`data` is the size-sort search of section 4 with the unit's ranges; for main it also knows that
* a file-scope definition without initialiser (`u8 buf[0x400];`, `Font fontA;`) is a movable bss object;
* the registration record of a global with a destructor (`@N`, 0xc bytes of bss, passed to
  `__register_global_object`) is created **immediately before** its object;
* objects that `__sinit` initialises must keep the order the original `__sinit` handles them in (taken from
  relocs.txt), and a constant that `__sinit` reads must be defined **after** the object initialised from it
  (defined before, mwcc folds the value and emits no code);
* vtables are created last, in reverse declaration order of their classes.
Definitions must be top-level statements (not inside an `extern "C" { }` block) for `data --apply` and
`reverse` to move them: write `extern "C" void f() {...}` per function, and plain `u8 data_x[4];` /
`const T data_y = ...;` with an `extern` declaration above (data names are not mangled). With these rules
`data --apply` reproduced TU068's 33 objects from a naive order (try a few `--seed`s).

`python3 tools/pipeline/linkprep.py diff main` (after a failed build) lists the differing ranges of `arm9.bin`
with the symbol and the unit that own them, and compares the autoloads. A wrong bss order shows up as different
address words in the code that uses the objects.

## Things that are different in main sources

* **Names.** Overlays call into main about 19,700 times and other main code more: every function and every
  object that anything outside the unit uses must be defined under exactly its symbols.txt name (objects:
  non-`static`; `const` objects need an `extern const` declaration first). Callees of other units are called by
  their symbols.txt names (`realnames.py` rewrites `func_XXXXXXXX` to the mangled name; the declaration stays an
  `extern "C"` function taking the object first). Rename only the unit's own symbols, and only when nothing
  compiled references the old name (`rename_impact.py`).
* **A callee whose address exists in several overlays** (`relocs.txt`: `module:overlays(113,123,...)`): name the
  symbol of the first overlay in the list (TU210: `_ZN18Unk_ov113_02293640D1Ev`). The link resolves it to the
  shared address; `check` verifies address and module.
* **Empty `__sinit`** (2 bytes, `bx lr`; nos. 23, 28, 50, 59): mwcc emits one for a file-scope object of a class
  whose constructor is inline and empty (`struct A { A() {} ... }; A obj;`), also through an empty base
  constructor. The unit that owns such an object owns the `.init`/`.ctor` slot.
* **Assembly routines of the original** (`func_0206d470`: pushes all registers and CPSR) cannot be written in
  C++ and are not linked: cut the unit around them (TU113 is two complete units with the routine delinked in
  between).
* `extern const` objects defined in the *next* file look like part of this one by their users
  (`data_020ca638`, used only by TU068's `func_02050cb4`, is the first `.rodata` object of the following file):
  an object that sits after the unit's size-sorted run and is loaded from memory although its value is a
  constant belongs to the neighbour. Shorten the range and keep it `extern`.

## Units placed object by object (`config/usa/arm9/object_order.txt`)

`tools/object_order.py` accepts main units: same file format as for overlays, in `config/usa/arm9/`. The
`.text`/`.rodata`/`.data` selectors are replaced in `.arm9`, the bss selectors in autoload_3 (the unit's
placeholder range); autoload_3's bss then moves to the file-less region `UNINITIALIZED_AUTOLOAD_3` and the first
overlays start after it (`build/autoload_3.bin` stays empty). Alias names are left to `aliases.py`. Use it for
TU010 (1.2/sp2 thunks plus thirteen 1.2/base functions) and for units whose data order cannot be reproduced.
Verified with a full build on the unit at 0x020116e0, alone and with one function moved to an extra
`// mwcc-version: 1.2/sp2` file.

## Installing: `mainbatch.sh`

`tools/pipeline/mainbatch.sh [--commit] <unit dir>...`: compiles and `check`s each unit,
installs it, reruns configure, builds, and keeps the batch if the last line is `acww_usa.nds: OK`; otherwise it
prints the linker errors, `romdiff.py`, `linkprep.py diff main` and reverts `src/main` and `config`.
`REPLACE=1` passes `--replace`.

## Fragile points

* `bss_units.py` depends on dsd 0.12.1 writing `<stem>.bss.o(.bss)` for a unit named `<stem>.bss.cpp` (and
  listing an object for it). It stops with a message if the line is missing.
* A leftover reference to a label inside a complete unit links as 0 without a linker error. `check`'s
  `MISSING` lines are the guard; the ROM checksum is the proof.
* `lcf_symbols.py`: mwld checks nothing about a script assignment (missing base = 0, clash with an object =
  silent), so the tool's own checks are the only guard besides the ROM checksum. It relies on the base being kept
  by `force_active.py` (a `symbols.txt` name) and on dsd's `<MODULE>_<SECTION>_START = .;` lines. A label recorded
  for an object whose layout later changes (another member order) still links, at the old offset. Labels removed
  by `interior:` before this step existed were not recorded: add them with `vtable_rename.py`-style lines by hand
  (`<label> addr:.. base:..`) when a compiled source needs one (`Undefined` at link).
* `aliases.py` links a rewritten copy of the object (`build/usa/aliases/...`). Tools that read the unit's object
  from `build/usa/src/main` see the unpatched one.
* Unit names follow the text start. Installing a unit renames the old file that started there; anything that
  refers to `src/main` file names (plans, `merge_notes.txt`, objdiff history) must use addresses.

# Library modules (autoload_2, itcm)

The NitroSDK/runtime code lives in two autoloads: `autoload_2` (0x020e7500-0x02135914 `.text`, 12 bytes of
`.rodata`, `.data` up to 0x0213c6c0; `config/usa/arm9/autoload_2/`) and `itcm` (0x01ff8000-0x01ffdae0, code only;
`config/usa/arm9/itcm/`). They are linked like main, one translation unit at a time, and everything in "Linking the
main module" applies with the module name in place of `main`. What is different:

* **Sources** are C (`.c`, compiled with `-lang=c`) or C++ (`.cpp`), almost all ARM code. The common flags say
  `-thumb`; a first line `// mwcc-flags: -nothumb` comes after them on the command line and wins, so the file is
  compiled as ARM (checked: `cc_flags = -lang=c -nothumb` in build.ninja, ARM code in the object). Thumb files of
  the library (80 functions of autoload_2) need no line. `// mwcc-version:` works as everywhere.
  `linkprep.py compile` takes the mwcc rule from build.ninja and adds the same `-lang` and header-line flags as
  `tools/configure.py`, so both produce the same object.
* **Function order**: mwcc 1.2 emits a C file's functions last to first as well. `linkprep.py reverse unit.c
  autoload_2` sorts the definitions by descending address.
* **Names**: C symbols are not mangled. A unit keeps the `func_XXXXXXXX`/`data_XXXXXXXX` names of `symbols.txt`
  (compiled game sources call them through `extern "C"` declarations) unless a rename is agreed; the SDK name goes
  in a comment. `static` functions and objects have local symbols: something that code outside the unit refers to
  must not be `static` (`check`: `MISSING`).
* **bss** is in `autoload_3`, behind main's files (from 0x021f4768). A `.bss` line of the spec becomes the
  placeholder unit `src/<module>/unk_<text start>.bss.c` in `config/usa/arm9/autoload_3/delinks.txt`, exactly as
  for main (`tools/bss_units.py`).
* **Relocations** to the unit are `module:autoload(2)` / `module:itcm` in every `relocs.txt`; `check` reads the
  module's own `relocs.txt` for the unit's calls and all of them for references from outside.

Commands (`T001` = a unit directory with `unit.c`, `spec.txt`, optionally `renames.txt`/`aliases.txt`):

    python3 tools/pipeline/maindis.py 0x0210f0c4 0x90                     ARM unless `thumb`; module from the address
    python3 tools/pipeline/linkprep.py dump autoload_2 T001/spec.txt
    python3 tools/pipeline/linkprep.py compile T001/unit.c T001/unit.o
    python3 tools/pipeline/linkprep.py reverse T001/unit.c autoload_2
    python3 tools/pipeline/linkprep.py check T001/unit.o autoload_2 T001/spec.txt
    python3 tools/pipeline/linkprep.py data T001/unit.c T001/unit.o autoload_2 T001/spec.txt [--apply]
    python3 tools/pipeline/install_tu.py [--replace] autoload_2 T001/spec.txt
    tools/pipeline/mainbatch.sh [--commit] --module autoload_2 T001 ...    install, configure, build, keep or revert
    python3 tools/pipeline/linkprep.py diff autoload_2                     after a failed build

The spec is main's (`unit unit.c`, then `.text`/`.rodata`/`.data` ranges in the module and `.bss` in autoload_3).
`install_tu.py` writes `src/<module>/unk_<text start>.c` (the extension of the spec's source), lists it `complete`
in the module's `delinks.txt`, and handles boundary symbols, `renames.txt` (`autoload_2 <addr> <name>`,
`interior:`) and `aliases.txt` as for main. `check` ends with the same `0 layout problems, 0 wrong targets, 0
unresolved symbols`; a spec whose ranges are outside the module is refused with `NORANGE`.

Build chain: `dsd lcf` writes `unk_XXXXXXXX.o(.text)` between the gap objects of `.autoload_2` / `.itcm`;
`bss_units.py` handles the placeholder; `aliases.py` gives compiled units of autoload_2 and itcm their second
names from the module's own `symbols.txt` (both have `kind:label` aliases, e.g. `_ll_udiv`); `lcf_symbols.py`
accepts `lcf_symbols.txt` in the module directory (section starts `AUTOLOAD_2_DATA_START`, `ITCM_TEXT_START`);
`force_active.py` keeps the unit's `symbols.txt` globals. `python3 tools/configure.py usa` after every install.

First unit: `pipeline_wip/sdk_units/T001` (GX_SetGraphicsMode/GXS_SetGraphicsMode, 0x0210f0c4-0x0210f154).

SDK functions that use numbers of the SDK's linker script (stack sizes, arena starts) need the names of
`config/usa/arm9/abs_symbols.txt`: see "Absolute symbols" under "Names the linker script defines".

Not supported / open:

* `tools/object_order.py` (units placed object by object, two compilers in one unit) refuses an
  `object_order.txt` in these modules.
* **Sections of one file in two modules.** `.exceptix` in *main* (0x020c2bb0-0x020c2cd0) has 24 entries that point
  to autoload_2 functions (0x02133ae0...: the C++ runtime, built with exceptions). A compiled runtime file emits
  its own `.exception`/`.exceptix` sections, which belong in main's ranges; a unit cannot own ranges in main and in
  autoload_2 (only the bss placeholder mechanism exists). Until that is solved, leave those functions delinked.
  The delinked tables refer to the functions by name, so linking *other* autoload_2 units does not disturb them.
* autoload_2's `.rodata` is 12 bytes and dsd has no data symbol inside its `.text` range: constant tables of the
  library are either in `.data` or seen as code. A unit whose object emits `.rodata` needs a `.rodata` range in
  the module (`check`: `NORANGE`); if the constants sit inside the `.text` range the module's section table in
  `delinks.txt` has to be split first.
* Unit file names are `unk_<address>`; mwld selects objects by file name only, so two units with the same text
  start in different modules cannot exist (the address ranges of main, autoload_2 and itcm do not overlap).

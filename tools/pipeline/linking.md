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

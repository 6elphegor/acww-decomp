# Assembly policy

The goal of this project is source that compiles to the original program. Assembly appears in the repository only
where the original was assembly, plus a short, explicit list of exceptions.

## When a routine is linked as assembly

A routine is written as an assembly unit when at least one of these holds:

* **It contains code a C compiler cannot produce:** instructions mwcc never emits (`mrs`/`msr`, `mcr`/`mrc`,
  `swi`, `clz`, `swp`/`swpb`, `stm`/`ldm` lists that include `sp` or `pc`), or a structure C cannot express (a
  routine that falls through into the next one or branches into another routine's body, several entry points into
  one routine, a computed jump into unrolled code).
* **It is known to be assembly** in the public NitroSDK sources or in the CodeWarrior runtime (crt0, the cache and
  protection-unit routines, the `MI_Cpu*` copy and fill routines, the LZ/RL decompressors, the soft-float and 64-bit
  arithmetic helpers, ...).

A function that is merely hard to match, or whose shape looks unusual (no stack padding, no tail call), is not
assembly. It gets a C or C++ attempt, and if it does not match it stays unlinked and is listed in
[`unmatched.md`](unmatched.md). Assembly is never used to force a C function to match.

## How assembly units are written

* One `.s` file per routine or group of routines, under `src/<module>/`, listed in `delinks.txt` as a `complete`
  unit like any other. There are 70 of them: 53 in `autoload_2`, 13 in ITCM, 3 in main (the secure area, crt0,
  and the register-dump routine at 0x0206d470) and 1 in ov065 (two ARM `clz` helpers of the network library).
* They are assembled with the toolchain's own assembler, `mwasmarm -proc arm5TE -little`, from the same package
  as the compiler (`AS_FLAGS` in `tools/mwcc_config.py`, rule `mwasm` in `tools/configure.py`). A
  `; mwasm-flags:` or `; mwasm-version:` line within the first 10 lines changes the flags or the package.
* Every file starts with a header comment: `; Original assembly (<library>): hand-written in the original; linked
  as assembly per the project's assembly policy.`, the address range, and the evidence that the routine is
  assembly.
* Every `symbols.txt` function of the range is a `.global` label with `.type ..., @function` and `.size`. Second
  entry points are plain labels inside the routine; other labels are local (`L_02132f1c:`). Literal pools and
  in-range data are written in place with `.word` / `.short` / `.byte`.
* Calls to other files are written `bl`; the linker turns them into `blx` when the target is in the other mode.
  A mode change to a label *in the same file* has to be written `blx label`, because the assembler resolves local
  branches itself without interworking. See "Assembly units (.s)" in
  [`tools/pipeline/linking.md`](../tools/pipeline/linking.md) for details and limits.
* `python3 tools/pipeline/linkprep.py compile unit.s unit.o` and `check` work on assembly units as on compiled
  ones (with extra `MODE` and `LABEL` lines).

Examples: `src/autoload_2/unk_02132ef8.s` (the 64-bit divide, one routine with four entry points) and
`src/main/unk_02000000.s` (the secure area).

## The secure area

`src/main/unk_02000000.s` covers main's first 0x800 bytes: the `0xe7ffdeff` marker words, Nintendo's filler data
and, at fixed addresses inside it, the 18 Thumb SVC stubs of libsyscall (`IntrWait`, `CpuSet`, `Div`, ...). The
filler is not stored in the repository. Each `.incbin "extract/usa/arm9/arm9.bin", <offset>, <length>` line reads
it from the ARM9 binary extracted from your own ROM dump. Because `mwasmarm`'s `.incbin` reads files in text mode,
the build first expands these lines into `.byte` directives with `tools/expand_incbin.py` and assembles the
expanded copy; units that use `.incbin` therefore depend on the extract step.

## `volatile`

`volatile` follows the same principle. It appears only where the original source had it:

* hardware registers (`*(volatile u32 *)0x04000000`, the SDK's register accessors);
* variables that the SDK itself declares volatile (for example the `vu16 zero` of `MI_CpuClear16` and the
  `vu16`/`vu64` locals of `OS_GetTick`);
* the fill value of this NitroSDK's `MI_CpuFillFast` inline (a `vu32` local): all 17 `MIi_CpuClearFast` call sites
  in main, `autoload_2` and ITCM store the value to the stack and reload it, constant zeros included, which mwcc
  does only for a volatile object (NitroSystem `ClearContinuous` and `ClearChar`, user-approved 2026-10-04);
* the two words `data_021f5c40` and `data_021f5c44`, which the PXI receive callback at 0x020fe4b4
  (`src/autoload_2/unk_020fe4b4.cpp`) shares with interrupt context.

It is not used to make the compiler reload a value, keep a stack slot or pick a register on ordinary game data.
Some older game sources still contain such declarations; they are not a model for new code.

## Exceptions

### Four switch routines kept as assembly inside C++ files

Four game functions contain one `switch` whose dispatch (the split between compare tree and jump table, and the
bounds check of the table) no mwcc build available to the project reproduces: every 1.2 build, the 2.0 builds
and the DSi builds were tried. They behave like the missing 1.2/sp1 build that the adjuster thunks also point to
(see the [matching guide](matching.md#two-compiler-builds)). Each file keeps the original instructions in an
`asm` routine so that its overlay can be linked, and puts the closest C version beside it under
`#ifdef NONMATCHING`:

| Function | Overlay, address, size | Closest C version |
|---|---|---|
| `WfcTransfer_Task` (`src/ov001/unk_ov001_0220cd24.cpp`) | ov001, 0x0220cd24, 0x300, ARM | 2 bytes differ: the jump-table guard comes out as `cmp r0, #20` / `addls` instead of the original lower-bound-only `cmp r0, #0` / `addge` |
| `SpNpcPellyPhyllisTalk::onPostOfficeChoice` (`src/ov054/unk_ov054_02258de0.cpp`) | ov054, 0x022595c4, 0x19c, Thumb | 246 bytes differ: mwcc builds a 17-entry table for cases 0..16 under a compare tree rooted at 0x52; the original has a 10-entry table for cases 0..9 under a tree rooted at 0x39 |
| `SpNpcJoanTalk::onChoice` (`src/ov073/unk_ov073_022713c0.cpp`) | ov073, 0x02271484, 0x1e0, Thumb | 54 bytes differ: the original dispatches cases 0..12 through a table guarded only by `cmp #0; bge`; mwcc emits `cmp #12; bls`, extra zero-extension shifts and a different table layout |
| `MenuLauncher::updateOpenRequested` (`src/ov092/unk_ov092_022918e0.cpp`) | ov092, 0x02291a44, 0x212, Thumb | 78 bytes differ: mwcc roots the first switch's tree at 0x18 with a bounds-checked 0x1a..0x27 table; the original roots it at 0x23 with a 0x1a..0x23 table that has only a lower-bound check |

The ov001 routine is an `asm` function. The three Thumb ones are one `asm` block forming the whole body of an
ordinary member function: mwcc emits `asm` functions ahead of every other function of the file, which would move
them to the start of the overlay, while a member function with an `asm` body stays in its place and gets the
original prologue and epilogue from the compiler. The comments in each file explain how the jump tables are
encoded. If a compiler build that reproduces these switches becomes available, the C versions replace the
assembly.

### The inline `clz` helper (ov067, NitroSystem g2d)

`src/ov067/unk_ov067_0225f1a0.cpp` defines

```c
static inline u32 Clz(u32 x) {
    u32 r;
    asm { clz r, x }
    return r;
}
```

for the ARM function `WlxWm_MeasureChannelStep`. This is the NitroSDK's own form of `MATH_CountLeadingZeros`
(`math.h`), a one-instruction inline `asm` in the SDK itself; mwcc 1.2 has no `clz` intrinsic.

The NitroSystem g2d units `src/autoload_2/unk_02101de8.c` (`NNS_G2dArrangeOBJ1D`),
`src/autoload_2/unk_021022ac.c` (`NNS_G2dCharCanvasInitForOBJ1D`) and `src/autoload_2/unk_021030bc.c`
(`GetCharIndex1D`) use the same instruction through the SDK's
`MATH_ILog2`, with the helper in its in-place form:

```c
static inline u32 MATH_CountLeadingZerosInline(u32 x) {
    asm { clz x, x }
    return x;
}
```

The original has `movlt r4, r2; clzlt r4, r4; rsblt ip, r4, #0x1f` for `(w >= 8) ? 3 : MATH_ILog2(w)`: the copy
of the argument and the conditional `clz` are what mwcc makes of this inline (a separate result variable gives
`clz r4, r2`). These four files are the only inline `asm` in C or C++ files (apart from the `asm` routine bodies
listed under "Four switch routines" above).

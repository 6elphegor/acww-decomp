# Brief: matching functions for the Animal Crossing: Wild World decomp

Write C++ that compiles byte-identically to a set of original functions, verify each with the project's diff tool, and report the code back. Do NOT modify any file inside the repository; work only in your scratch directory (given in your prompt).

## Setup
- Repository (run all tools from here): `/Users/belphegor/Animal Crossing Wild World/acww-decomp`
- Compiler: Metrowerks mwccarm 1.2/base, Thumb, `-O4,s` (see `tools/mwcc_config.py`). C++ uses the Itanium ABI (vtables are `[0, 0, fn...]` in .data, objects point 8 bytes in; mwcc emits C1/C2 and D0/D1/D2; pure virtual slots are 0).
- Original disassembly: `build/usa/asm/*.s` (UAL syntax). Find a function: `grep -l "^func_XXXXXXXX:" build/usa/asm/*.s`, read with awk/sed. Do not run `dsd dis`.
- `config/usa/arm9/symbols.txt` (names, sizes), `config/usa/arm9/relocs.txt`. `python3 tools/xrefs.py <func name>` shows references to/from a function. Main-module bytes: `extract/usa/arm9/arm9.bin` (base 0x02000000) — use it to dump vtables/data.
- Headers: `include/types.h` (u8/u16/u32/s32/BOOL/TRUE/FALSE/NULL), `include/text/Unk_02050288.h` (text class, fonts, StrBuf), `include/Unk_020d8c7c.h` (library base class hierarchy; `Unk_020d8c7c` has 16 virtuals vfunc_00..vfunc_3c then a virtual dtor, and class-specific operator new/delete). Matched examples: `src/main/*.cpp`.

## Verifying
`python3 tools/asmdiff.py <file.cpp> <compiled symbol> --original <name in symbols.txt>` — relocated bytes come from the original; "…: match" means done.
List compiled symbols: `./wibo tools/mwccarm/1.2/base/mwccarm.exe $(cd tools && python3 -c "from mwcc_config import CC_FLAGS; print(CC_FLAGS)") -i include -lang=c++ -c F.cpp -o O.o && arm-none-eabi-nm O.o`.

## Identifying classes
Look for vtables in .data (`[0,0]` header then Thumb function pointers with bit 0 set) whose entries point into your range; which vtable pointer constructors/destructors store; `this` field usage; callers. Nearby known vtables for 0x020a6914–0x020a8c20 were at 0x020e2a00–0x020e2bb8; the next file's data starts at 0x020e2bb8 ("select" string, then factory entries {func ptr, id} and more vtables at 0x020e2c78+).

Naming:
- Never use short or generic class/struct names (`A`, `B`, `Obj`, `Ctx`, `S1`, `Info`…): every type must be `Unk_<address>`-named so files can be combined later without collisions. Local helper structs too: `Unk_<address of the function that uses it>_Xxx`.
- Classes: `Unk_<vtable pointer address>` (the address objects store, after the [0,0] header). No vtable → name after its first function (`Unk_020a8c9c`).
- Methods: named after their address (`func_020a8c9c`), except virtual overrides, which use the base declaration's name. For a base you introduce, name virtuals by byte offset from the vtable pointer (`vfunc_08`, …; destructor slots are the D1/D0 entries).
- Non-members: `extern "C"` free functions named `func_XXXXXXXX` (symbol unchanged). Callees outside your set: `extern "C"` with plausible signatures, or methods if they clearly are.
- Focus on matching code; you don't need to emit vtables correctly.

## SOLVED: tile-map loops use goto (read this first)
If the original recomputes `y - (hy << 4)` (or similar) inside an inner loop instead of hoisting it, the original inner loop was written with labels + goto, not for/while/do. mwcc hoists aggressively out of real loops (and adds its own entry test) but only weakly out of goto loops. Matching shape:
```c
x = start;
if (x < w) {            // hand-written entry test (match the original's compare)
    goto test0;
loop0:
    hx = x >> 4; hy = y >> 4;   // plain locals, NO volatile
    t = func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    ...
    x++;
test0:
    if (x < w) goto loop0;
}
```
Labels must be unique per function. Remove `volatile hy` workarounds; with them gone the spill-slot order comes out right. The outer loop can stay a normal `for`. Spelling tricks (`(u32)hy << 4`, `*16`) do not help.

## Known compiler quirks (see README.md)
- Loop testing at the top then branching back unconditionally → `for (;;) { ...; if (!c) break; ... }`; `while`/`for` put the test at the bottom.
- Local declaration order affects register allocation; if only registers differ, reorder declarations or add/remove a temporary. Stack locals seem placed by ascending size, then declaration order.
- `lsls #24; lsrs #24` = u8 cast; unsigned compares = unsigned types; `ldrb [sp,#off]` of a stack arg = u8 parameter.
- Unused compare = `else if (x != 0) { var = value_it_already_has; }`.
- Flat two-word struct copies interleave loads/stores; nested aggregates load both first.
- `if (ok) {...} else {...; break;}` vs `if (!ok) {...; break;}` lay out differently; `*(p + n - 1)` vs `p[n - 1]` differ; `a * b` vs `size = a; size * b` differ.
- A repeated expression in a short-circuit condition may need a temporary. BOOL range checks may need `if (...) return TRUE; return FALSE;`.
- Two vtable stores in a row in a ctor/dtor = intermediate class with inline empty ctor/dtor (it needs an out-of-line key virtual elsewhere). Explicit `obj->~T()` calls vtable slot 0 (D1). Derived D0/D1 call base D2. Out-of-line empty virtual dtor emits D0/D1/D2.
- Placement new (`new (mem) T(...)` after `if (mem)`) gives a double null check.
- Function-local `static` arrays (e.g. member-function-pointer tables) compile to guard code; a call before the static declaration keeps the guard after it.
- Thumb tail call `ldr r3, =f; bx r3` = `return f(same args);`. A function that doesn't return `this` isn't a ctor.
- Ctor member init order: scalar fields that are set before a member object is constructed must be mem-initializers.

- If only registers differ, first try permuting the local declaration list (e.g. `s32 x, y, v, hi, lo;`), which often swaps which register holds `this`.
- A call at the end of a `void` function to a callee declared `void` becomes a tail branch; if the original uses `bl` + epilogue, declare the callee as returning `s32`.
- A result variable that the original keeps on the stack across early exits: use one `BOOL result`, `goto end` from the early exits, and `end: return result;`.
- A `blo`/`bcc` loop means an unsigned counter. Clamps may need a temporary: `s32 t = field; if (t < lo) t = lo; else if (t > hi) t = hi; field = t;`.
- A tail-call stub that uses an unexpected register for an offset add forwards an extra (unused) incoming parameter.
- Member initializers: a scalar set before member objects are constructed must be a mem-initializer (`: unk_08(0), unk_84(&unk_0c)`); members with non-default ctors must be mem-initialized.
- A `u8` local next to a local object can get packed at an odd offset; make byte arrays of objects `u32[n]` to force 4-byte alignment.

- A field compared and then reloaded (two separate loads in the original) can be reproduced by declaring it `volatile`.
- A small struct with a user ctor is returned via hidden pointer; giving it a dtor adds temporary dtor calls the original may not have.
- Division helpers: 0x02133150 is signed (`s32 / n`), 0x0213335c unsigned (`u32 / n`). Member arrays of objects use `__cxa_vec_ctor` (0x02135714) / `__cxa_vec_cleanup` (0x021355f0).
- Constant-bound loops over object arrays that jump to the test first: `for (s32 i = 0; (u32)i < N; i++)`.

- A small constant loaded from the literal pool (`ldr r0, =0x7f`) instead of `movs` is an overlay ID: NitroSDK passes overlay IDs as addresses of linker symbols. Declare `extern u32 OVERLAY_127_ID[];` (decimal overlay number; the linker script defines `OVERLAY_<n>_ID = <n>;`) and pass `(u32)OVERLAY_127_ID`. Callees like func_0204eee4/func_0204ef2c take these (probably overlay load/unload). Do NOT invent `data_000000XX` symbols.

If a function doesn't match after several genuinely different attempts, move on and report the closest version and remaining diff.

## Report back
1. Table: original name, status (match / diff summary), class::method or free, compiled symbol.
2. Final scratch file path (all your functions in one .cpp, any order) and a `pairs.txt` next to it: `<compiled symbol> <original name>` per line.
3. Classes inferred (name, base, vtable address, fields with offsets, methods/virtual slot names), globals, extern declarations, and any evidence of source-file boundaries (e.g. where one file's data/vtables end).
4. New compiler quirks.

## More quirks (from r005/r008/r013)
- Tail-call thunks (`ldr r3,=g; bx r3`) only happen with at most 3 params and no other call. 4-param wrappers use `bl`.
- `U t = *v;` (init) gives ldm/stm; `t = *v;` (assign) gives field-wise copies. `Vec* pv=&field; t=*pv;` loads the address first.
- A struct returned via hidden pointer and only copied gets scalar-replaced. Declare the callee `void f(V3 *out, ...)` to keep it in memory.
- A jump-table bound is the highest explicit case label, so write trailing empty cases explicitly. Case groups that share code must be one block at the first case's position.
- Callee `u8` params cause masking. Declare them `u32` if the original caller doesn't mask.
- To avoid an unwanted tail call at the end of a void function, declare the last callee as returning s32.
- Locals declared inside case blocks are placed after function-scope ones. Hoist them to the top to match the frame.
- A store/reload of a u16 local: use `volatile u16`.
- `if (x) return TRUE; return FALSE;` in an inline helper reproduces the movs 1/0 + second compare.
- The big scene/player object (vtable 0x020d6df4) is called `Unk_02006d14`. Use that name.
- The big object `Unk_02006d14` has a polymorphic primary base (size 0xec) and a secondary base `Unk_020e2a30` at +0xec. `adds r1,r5,#0; cmp r5,#0; beq; adds r1,#0xec` is that upcast; reproduce it with real multiple inheritance.
- An `inline BOOL IsZero(u8 v){ return v == 0 ? TRUE : FALSE; }` helper reproduces the redundant BOOL materialisation.
- Local structs and arrays are placed in declaration order in some functions and ascending size in others; try both.
- A switch where every case ends in the same call: set a shared local per case and make one call after the switch. Cases that skip the call use `return;`.
- If registers come out swapped, predeclare the locals in reverse order and assign them afterward.
- In the callee, `ldrsh` of a parameter means it is `s16`; `ldrh` means `u16`.
- `adds rX,#0x9c` with no null check is an upcast of a reference (`Sub &p = f();` where f returns a class whose second base is at +0x9c). A pointer upcast gets a null check.
- A bit-field insert like `x = ((v << 22) & 0x3fc00000) | (x & 0xc03fffff);` is written by hand. A C bitfield emits different code.
- `mvns rX, rY` where rY is known to be 0 is a literal `-1` argument.
- `S p = {0,0};` calls memset. Assign the fields one by one instead.
- `x = (v << 4) >> 16` is a bitfield read (`struct { u32 lo:12; u32 mid:16; u32 hi:4; }`). Masking with `& 0xffff` gives different code.
- Frame sizes that are too small usually come from dead scratch structs the original passes to leaf helpers. Match their sizes.
- An 8-byte struct by value is passed in r1/r2. To get the original's "pointer to stack copy" passing, give the struct a user-defined copy constructor.
- Dead stores to a local struct get dropped. Deriving it from the struct with an empty user ctor (`struct T : Vec { T() {} }`) keeps them.
- Virtual call `ldr r1,[r0]; ldr r1,[r1,#N]`: use a real class with dummy virtuals before slot N, not a raw function-pointer cast.
- `cmp 3; beq A; cmp 4; bne end; B` comes from `if (r != 3) { if (r == 4) B; } else A;`, not a switch.
- Ctor/dtor pairs with identical bytes (`push; bl base; mov r0,this; pop`) cannot be told apart by asmdiff, because relocations are masked. Decide by the callers: the one called first on a fresh local is the ctor. Message object `Unk_0200e2c0`: `func_0200e2e0` = C1, `func_0200e2d0` = D1, `func_0200e2cc` = base C2, `func_0200e2c8` = base D2, `func_0200e2c0(s32,s32,s16)` = set.
- In a switch, the source order of the cases sets the code block order, not the jump-table order.
- A 16-byte struct copy uses ldm/stm pairs only as `struct { s32 v[4]; }`.
- `(u8)(t + 0xd2) <= 1` style range checks are written literally with the pool/imm constant, not as `t == a || t == b`.
- A 4-byte frame gap that dead locals can't reproduce: use one function-scope aggregate, e.g. `struct { u32 pad; Pos p[2]; } l;`.
- The `movs r1,#0 ... movs r1,#1; cmp r1,#0` range-check form comes from an inline taking a pointer: `static inline BOOL R1(u16* p, lo, hi){ BOOL r=FALSE; if(*p>=lo&&*p<=hi) r=TRUE; return r; }`.
- `r == 1 || r == 2` compiles to `subs; cmp; bhi`. `switch(r){case 1: case 2:}` gives `cmp 1; beq; cmp 2; bne`.
- `f(p); p += 2; f(p)` on an `s32*` reproduces the `adds r4,#8` pointer reuse.
- A 3-word struct that must stay on the stack (ldr/str [sp,..] and reloaded later) can be declared `volatile` to stop scalar replacement.
- For else-first block layouts, try `if (!(c1 && c2)) {else} else {then}`, or gotos when the layout is irregular.
- Adjuster thunks (`_ZThn236_...`: `push {r2}; ldr r2,=-N; adds r0,r2,r0; pop {r2}; ...`) only match with 1.2/sp2. Every thunk in the game uses that form, but switch tables need base. If your file has thunks, check it with `--version 1.2/sp2` and report that the file needs `// mwcc-version: 1.2/sp2` as its first line. Check that the file's other functions still match under sp2.
- An 8-byte copy via `ldm r5!/stm r0!` needs `*(long long *)&dst = *(long long *)src;`.
- An upcast inside `if (p)` gets a second null check. `Base &s = *p;` gives a single check.
- `movs r1,#1; mvns r1,r1` is -2. `mvns` gives -1 only when the source register is 0.
- A global loaded twice (once into a local, once as an argument) needs `extern volatile`.
- Address-taken struct locals that get scalar-replaced stay in memory if they are declared as one array (`Xyz pv[4]`).
- A function that zeroes `out->a = out->b = 0` first and copies `*out = t` at the end is `void f(Pair *out, self, ...)` with an explicit out pointer. Struct-returning methods don't get NRVO.
- Locals the original stores and reloads (even constants like 1 or NULL) can be `volatile` locals. Volatile locals are usually placed after (above) compiler spill temps, in declaration order; you cannot use `volatile` to put a slot below the spills.
- `s32 c = f(); if (c == o->x)` gives `cmp r0,r1`, while `f() == o->x` gives `cmp r1,r0`.
- A 3-word struct built as `{a, 0, b}` with interleaved loads comes from an inline ctor `V(s32 x, s32 y, s32 z)` used as `V v(d->a, 0, d->b)`. Aggregate init calls memset.
- Member-function-pointer fields and extern member-function-pointer data work directly. `unk_c4 = data_XXX;` gives a two-word copy, and `if (unk_ac) (this->*unk_ac)(&out);` gives the virtual-flag call sequence.
- `(u32)extern_array != 0` keeps an `ldr =sym; cmp` test that the compiler would otherwise fold away.
- If a same-class callee gets inlined but the original uses `bl`, define the caller before the callee.
- macOS `sed -i` needs `''` as a separate argument. Use python for file edits.
- Loop increments must follow the original order: `for (...; p++, i++)` and `for (...; i++, p++)` compile differently.
- A null member-function pointer is copied from `data_0213a740`: `x = *(Fn*)data_0213a740;`.
- An empty base class is overlapped by mwcc, so members start at offset 0. If members start at +4, give the base a real `u32` field.
- Stack slot order: to put a small struct ahead of address-taken scalars, gather the scalars into one function-scope struct declared after it.
- `if (!a) {A} if (!b) {A}` with identical bodies must stay two separate `if`s, because `||` merges them.
- The menu/dialog state class with fields +0x3c, +0xac (state member pointer), +0xfc (owner), +0x100 buffer, +0x11e, +0x124, +0x128 is `Unk_0201d2d0` (see `src/main/unk_0201d2d0.cpp`). Use that name and copy its declaration. Its state functions take `(Unk_0201d2d0_Out *out)` as an explicit out pointer.
- A callback that returns a struct through a hidden pointer is typed `void (C::*)(Ret*)`.
- A range check that loads the halfword twice needs an inline over a `volatile u16*` that reads `*p` into two locals.
- A 5th outgoing stack argument appears as `str rX,[sp,#0]` ahead of the locals and is never read back. It is not a dead local.
- pairs.txt must have exactly two whitespace-separated fields per line: `<full mangled symbol> <original name>`.
- `mask |= 1` is not constant-folded when mask is known to be 0, but `mask = mask | 1` is folded. Use the compound form when the original keeps the or.
- Nibble unpacks need unsigned shifts: `(u32)(b << 24) >> 28`.
- `switch (t) { case 10: ... break; case 19: ... break; }` gives `cmp; beq; cmp; beq; b end`. Use it for 2–3 way dispatches on call results. if/else chains give bne layouts.
- The menu/dialog class hierarchy is `Unk_02015b54` (vptr only) <- `Unk_020d8938` (vtable 0x020d8938, the menu base with state member pointers at 0xac..0xf4, `func_0202d1c0/d294/d328/d33c` setters, `func_0202d114` getter; see `src/main/unk_0202d0e4.cpp`) <- `Unk_0201d2d0` (the concrete dialog states). The owner at +0xfc is `Unk_020d89c8`.
- IMPORTANT (solved many near-misses): an "odd" register choice before a call is usually a MISSING ARGUMENT. If a u16 compare is `adds r1,rX,r0; ldrh r2,[r1]`, the address in r1 is argument 2 of the next call (e.g. `func_0207cfb8(p, &unk_120)`). If -1 is `movs r3,#0; mvns rY,r3`, r3=0 is argument 4 of the next call. Values kept in r1/r2 across a compare are that call's arguments 2 and 3. Check the callee's real arity (look at how its body uses r0–r3) before trying declaration-order tricks. Known signatures: `func_0207cfb8(void*, u16*)`, `func_0207cf10(void*, u16*)`, `func_02080b78(void*, u16*)`, `func_02097f30(void*, u16*, s32, s32)`, `func_0207ac2c(void*, s32, s32)`.
- Keeping 3-word vector locals in memory (not scalar-replaced): put them in one local aggregate `struct { V A, B, C; } l;` and use `l.A.x`.
- For commutative adds of call results, the operand order follows which value was computed last: `t = f(z); q = f(x); q += t;` gives `adds r4,r0,r4`.
- A dead local struct that still occupies a frame slot needs both an empty user ctor AND an empty user dtor.
- `if (p) { for (; p; p = p->next) ... }` reproduces the `cmp; beq end; b test` loop prologue.
- pairs.txt must only list functions in YOUR range. Don't add pairs for ctors/dtors of helper classes that live elsewhere (e.g. func_02000c98), even if your file compiles them.
- The singleton at `data_021c1b3c` (0x2f8 bytes, 16 entries at +0 then sub-objects at +0x1c4..+0x2f4) is `Unk_02034518` (see `src/main/unk_020341c0.cpp`). Use that name.
- A member whose ctor/dtor runs out of line BEFORE the derived vptr store is really a second base class (`class D : public B1, public B2`). As a plain member, the vptr is stored first.
- A register that looks unused but still holds a constant from a previous store (e.g. r1=2 after `unk_a0 = 2`) can be a real argument: `func(0x137)` is really `func(0x137, 2)`.
- For a stubborn register-allocation near-miss (after ruling out missing arguments), a scripted search over local declaration-order permutations (compile and asmdiff each, a few hundred to ~1000 orders) often finds the match. Keep the script in your scratch dir.
- Before naming a class after its first function, check src/main for an existing class with the same field layout and vtable (grep the vtable address and characteristic offsets). A class with a vtable should be named after the vtable address.
- ARM-mode functions in main (symbols.txt kind:function(arm)) are written inside `#pragma thumb off` ... `#pragma thumb reset`.
- An apparent struct-by-value argument copied field by field is often just two scalar arguments. Try scalars first.
- Actor hierarchy: `Unk_020d8c7c` (library base) <- `Unk_020d5d84` (unk_020027b4.cpp) <- `Unk_020d9670` (vtable 0x020d9670, size 0xec: list node at +0xd4, u16 flags at +0xe8, virtuals 0x48..0x5c; see unk_0203e22c.cpp). `Unk_020d9670` is the primary base of the big `Unk_02006d14` object and of other actors (vtables 0x020d77xx, 0x020d8a1x, 0x020d8c1x, 0x020e69xx...). `Unk_0203e7a4` in older files is the same class.
- The camera singleton at data_021c3070 is class `Unk_020d93b8` (vtable 0x020d93b8, size 0x234; see unk_0203bc58.cpp).
- Thumb has no `ldrsb rX,[rY,#imm]`, so `*p` on an `s8*` compiles to `movs rZ,#0; ldrsb rX,[rY,rZ]`, and the zero may even be spilled. Don't add fake volatile zero locals for it.
- Real C bitfields on a u16 reproduce `lsls/lsrs` extraction plus a halfword reload. Try them before hand-written shifts.
- Variadic callees: sprintf-like `func_020639e8(buf, fmt, ...)`. Dump the format string and pass one argument per `%` (a value left in r3 means one more argument).
- A function that never writes r1/r2 before a `bl` (or a member-pointer call) is forwarding its own incoming parameters. Give it those parameters.
- A register swap between a counter and `this` often comes from `if (c) r = K; r = r*3 + x;`. Write it as one expression: `r = (c ? K : r) * 3 + x;`.
- `cnt = cnt + 1` on a local known to be 0 gets constant-folded, but `cnt++` is kept.
- If the original reloads fields it just compared, read them through a `volatile` reference cast.
- A 4-byte `sub sp` difference can be 8-byte frame rounding with an extra pushed register, not a missing local.
- A u32 field compared with `> 0` giving `cmp #0; bls` is really a pointer field (`u32 >0` folds to `!= 0`).
- NEVER compile a function under a fake symbol name (e.g. `func_X_` or `func_X_call`) to work around tail calls. If a void callee must be reached with `bl` plus an epilogue, declare AND define it returning `s32` with no return statement: `s32 f(...) { ...; }`. That keeps the real symbol and matches.
- `x % 7` on signed ints calls the division helper and uses r1. Write `%`; never call the helper directly.
- A switch over a sparse range (e.g. 6..26) needs explicit empty case labels for the gaps to get a jump table instead of a compare tree.
- If a caller must `bl` a callee that is itself `void` (the callee's own code only matches as void), the original was probably C calling an undeclared function (implicit `int` return). Inside the `extern "C"` block, declare an `s32` prototype in a namespace used only by the caller, and define the real function as `void` at global scope. The call still resolves to the C symbol. Check with `arm-none-eabi-objdump -r` that the relocation is `func_XXXX`.
- A global address reused via one `ldr` across several calls in one basic block: `char *const g = sym;`.
- A switch on a callee's result with signed compares (`bgt`/`bge`) means the callee returns `s32`; `u32` gives `bhi`/`bcs`. `func_0204aa24(u16*)` returns s32.
- Extra empty case labels widen a jump table. If the original's table starts partway through the case list, drop empty labels below its start so the sparse low cases become a compare tree.
- If the original reloads a flag word after a division helper call, a plain local copy gets hoisted before the call; a real C bitfield update on the field (signed fields work too, e.g. `s32 mid:4`) keeps the load after the division.
- `s32 *s = b->v; w = s[0]<<4; h = s[1]<<4;` reproduces `adds r1,r6,#4; ldr [r6,#4]; ldr [r1,#4]`; named struct fields fold to `[r6,#8]`.
- `u32 b = K; b += f(); return (u16)b;` keeps the constant in a callee-saved register across the call; `(u16)(K + f())` doesn't.
- `ldr r2,=sym; ldr r0,=0x15e28; ldrb [r2,r0]` (big offset kept in its own register instead of folded into the relocation): index through a local pointer with an offset the optimizer can't prove constant, e.g. `u8 *g = sym; s32 o = rt ? 0x15e28 : 0x15e28; g[o]` where `rt` is a real runtime value evaluated at that point.
- `x - ((x>>4)<<4)` written inline folds to `movs #15; bics`; use a `hx = x>>4` temporary to get `lsls; subs`.
- With a `for (x = 0; x < n; ...)` loop the compiler emits its own `cmp n,#0; ble` guard; don't add a manual `if (n > 0)`.
- `u16 f(u32 x)`: `return x < N ? x + K : K;` gives a branch to a shared cast; `if (x < N) return x + K; return K;` gives two returns. Pick per function.
- Pattern `s32 t = f(); s32 r = -1; if (t != r) t &= 7; else t = r; return t;` keeps -1 in the result register; declare the -1 after the call.
- A local struct filled by another function with no ctor call: class with an inline empty ctor and an out-of-line dtor.
- The `BOOL r=FALSE; ... if (b>=lo && c<=hi) r=TRUE;` range check sometimes only matches written inline in the caller (helper versions put r in r0).
- A long chain of `kN = TRUE` flags cleared by successive range tests spills them to the stack; initialise all to TRUE and match the declaration order to the initial store order.

## Machine load (IMPORTANT)
The machine has 8 cores shared by ~10 agents. Run compiles one at a time: no `&`, no xargs -P, no multiprocessing in search scripts. Keep permutation searches under ~300 candidates, and print progress so a run never goes silent for minutes.
- For flag chains spilled by declaration order, a hill-climb over declaration permutations (swap two, keep if the diff shrinks) converges much faster than random shuffles.
- A `BOOL ok = FALSE;` declared before `if (p)` can hoist a stack load above the null compare; declaring it inside the `if` block keeps it after the `beq`.
- `if (p) ctor(p)` on a freshly allocated pointer that was just stored to a global reproduces the double null check without placement new.
- Two u32 fields compared `> 0` with `bls`: cast them to `(u8*)` pointers.
- Volatile locals are not always placed first in the frame: in r115 func_020463fc a volatile landed after an address-taken u16.
- For `for (s = base, i = 0; ...)` over a struct array, declare `Slot *s; s32 i;` (pointer first).
- Reusing one `s32 i` for an earlier temporary and the later loop counter can be what matches; a separate temp swaps registers.
- Byte loads in the original's order: read into locals in that order (`u32 nb = p->b5; u32 na = p->b4;`) then use them.
- A `volatile u16` local sorts before volatile s32s in the frame. To place it after them, declare `volatile u32 w32` and access `*(volatile u16 *)&w32`.
- Don't make a parameter volatile (adds `push {r0-r3}`); use a volatile local copy.
- Zeroing a local struct array: give the struct an inline ctor that zeroes it (`P() { x = 0; y = 0; }`) and declare `P arr[N]`; this gives the original's inline pointer zero loop.
- To stop CSE/hoisting of a repeated `x - (bx << 4)`, write the occurrence as `x - ((u32)bx << 4)`. `bx*16`, `16*bx` and `<<3<<1` still get merged.
- An inner loop with no initial test whose start is a volatile zero: `j = kx; do { ...; j++; } while (j < 16);`.
- asmdiff prints nothing when the file fails to compile. Search scripts must treat empty output as a failure, not a match.
- `Unk_020d8c7c` is 0x50 bytes; derived fields start at +0x50. For an array-of-objects member, declare the class ctor `inline` and define it before the `new` site (an out-of-line prototype breaks the inline double-vptr ctor).
- Multi-way status returns that come out with inverted branches: use one `s32 r; if (...) r = 4; else if (...) r = 3; ... return r;`.
- If a caller emits `lsls/lsrs` before each call, the callee parameter is `u16` in the prototype; casting at the call site is not the same.
- Map grid (unk_0204e858.cpp): `Unk_0204e858_Grid {Cell *cells; u32 w, h;}`, cells 0x28 bytes. `func_0204ebd8(grid, hx, hy, lx, ly, u8 layer)` returns the cell's u16* (it is defined `void` with an s32-returning callee, so callers see it via an implicit-int style prototype returning `u16*`). World coords are fixed-point: block = x>>17, tile = (x>>13)&15.
- `if (x < 16 && y < 16) r = TRUE;` can get folded; `if (x >= 16 || y >= 16) {} else { r = TRUE; }` keeps the flag join.
- Overlay refcount table `data_021c47fc[12]` (unk_0204e858.cpp): func_0204ef2c load, func_0204eee4 unload.
- Model-manager singleton `Unk_020db984 : Unk_020d8c7c` (vtable 0x020db984, data_021c488c) is in unk_0204fb80.cpp / unk_0204f178.cpp; entries are `Unk_0204fd24` (0x16c bytes). Reuse those declarations.
- A field address computed twice with interleaved fieldwise copies: `Vec3 *pv = &e->unk_8c; v.x = pv->x; ...`.
- A zero-valued `BOOL r` reused as a constant-0 call argument (`movs rX, r6`): pass `r` itself.
- Keep a hardware register base (e.g. 0x4000000) in a callee-saved register: `volatile u16 *r = (volatile u16 *)0x4000000; u8 *b = (u8 *)r;` and access only through `b` (`*(volatile u16 *)(b + 0x304)`).
- Frame order of volatile locals: declare them all up front in slot order (`volatile u32 b, a, c;`) and assign them where they're used.
- Item/record parameter table `data_021c5330` (unk_02052f44.cpp): `func_0206d86c(tbl, idx)` returns a byte record (0x6e9 entries).
- Two loop counters whose address goes to a callee are really `s32 xy[2]`.
- mwcc gives all constant zeros one register and spills extras; declare the zero that should own the register first (`s32 cnt = 0;` before the other zero inits).
- 16 extra frame bytes can be an unused `struct Pad { s32 v[4]; Pad(){} ~Pad(){} }` local.
- Always include near-misses in pairs.txt (so the unit covers the whole range); mark them in the report instead.
- Grid object `Unk_0204debc` (unk_0204debc.cpp, >=0x2228 bytes, 16x16 u16 layers at +0x24) and tile buffer `Unk_0204e2f0` (0x20 bytes). Reuse those names.
- `t = expr; vol = t; use(t);` keeps the value in a register while still emitting the original's spill store.
- Packing bits into a local buffer that is sent by address: if the original reloads it between steps, make it `volatile` and pass `(void *)&bits`; if it stays in a register, use a plain address-taken local.
- `lsls 16; lsrs 16` on an s32 param before a bit insert is an explicit `(u16)` cast, not a u16 parameter. Hand-written inserts beat C bitfields when the source is an s32.
- Stack args start at `sp + (pushed regs * 4) + frame`; an `ldrb` from there means a u8 parameter.
- Callee reads a stack arg with `ldrb` but the caller stores an unmasked 0/1: declare the callee param `bool` and pass the 1-bit bitfield directly.
- Several `x ? 1 : 0` args that must be evaluated in source order: assign them to BOOL locals first, in that order.
- A `volatile u8` stack parameter reproduces per-use `ldrb [sp]` reloads.
- A function-local `static T dflt;` with a zeroing ctor reproduces guard-bit code.
- Don't leave background processes running when you report.
- `t == A || t == B || t == C` folds to `subs; cmp; bhi`; for three separate `cmp; beq` write `if (t != A && t != B && t != C) return f; return FALSE;`.
- A `volatile u16 tmp[1]` local keeps a dead `strh` to its stack slot.
- Static-array destructor loops: call `__cxa_vec_cleanup(arr, n, size, dtor)` directly from an extern "C" function.
- Actor sub-object hierarchy (unk_02054190.cpp is authoritative): `Unk_020dbe14` <- `Unk_020dbe34` (model resource base, unk_020553f8.cpp; ctor func_02055704) <- `Unk_020dbd34` <- `Unk_020dbd54` (+`Unk_020dbe7c` @+0x9c) <- `Unk_0205454c` (+`Unk_020dbe6c` @+0xb8) <- `Unk_020dbda4` <- `Unk_020dbd74` (unk_02053878.cpp). Reuse those declarations.
- Stack arg read with `ldrh` but callers don't mask: declare the param `u32` and read `*(u16 *)&f`.
- u16 field compared signed (`bge`/`blt`) against a constant: declare it `volatile u16` (also gives the strh/ldrh reloads) or cast `(s32)` at the compare.
- Local static arrays of member-function pointers `{&C::a, &C::b}` reproduce guarded 8-byte copies and `(this->*tbl[i])()` exactly.
- State-machine class `Unk_02057940` (unk_02057940.cpp) — reuse for 0x02057940..0x02058d54.
- A callee reached with r1 untouched before the `bl`/tail branch takes the caller's second parameter; forward it.
- Placement new with no preceding `if (p)` gives one null check; define the element ctor after the caller to keep it a `bl`.
- Adjuster thunks are only emitted when the derived class is instantiated somewhere and its dtor is out of line; the file then needs `// mwcc-version: 1.2/sp2`.
- Keep `lsrs #31; lsls #31` by splitting: `u32 top = (c & 0x80000000) >> 31; top <<= 31;`. Build packed values in statements, in the original's order, to avoid shifts being hoisted.
- `movs r2,#3; mvns r2,r2` is -4.
- Animation classes (unk_02055d18.cpp): `Unk_020dbe7c` (0x18, frame range), `Unk_020dbe5c : Unk_020dbe7c` (entry array of `Unk_0205614c`), `Unk_020dbe6c` (0x3c, transform blend). Reuse those names.
- A derived class with a base virtual dtor: write `~D() {}`; don't call the base D2 by hand.
- A `BOOL z = FALSE;` never modified, returned on every early exit and used as the loop start (`s32 i = z`), reproduces a shared zero register.
- Fixed-point sums: mwcc evaluates the second product first, so write `(s64)t*a + (s64)k*b` to get `k*b` first.
- A temporary passed by const reference (`f(Elem(x))`, callee `f(const Elem &)`) gets its stack slot after all named locals.
- Tiny functions defined in the same file can still get inlined into callers even with `-inline noauto`; defining them at the end of the file avoided it.
- A `r = TRUE; if (!(A || B)) r = FALSE;` cascade: nested `static inline BOOL` helpers, each written that way.
- Camera-transition class is `Unk_020dc034 : Unk_020d8c7c` (vtable 0x020dc034, singleton data_021c5a38; fields +0x50..+0xdc, see unk_02056f94.cpp). Older units call it `Unk_02057940`; use `Unk_020dc034`.
- A caller that never sets r1 before calling a function that takes a (hidden, unused) second param: pass an uninitialized local, `s32 u; f(u);`.
- `v < 0 ? -v : v` and `if (v < 0) v = -v;` allocate registers differently; try both.
- An explicit inline copy ctor `v[0] = o.v[0]; v[1] = o.v[1];` gives interleaved load/store for by-value class args; the implicit one loads both first.
- `static T t[3] = { T(0,1), T(0,2), T(0,3) };` gives one guard word, each element's ctor, then its dtor registration.
- Member-function-pointer table test and call with different folded addresses: write the full subscript separately in the test and the call.
- `cnt++` vs `n = cnt; ...; cnt = n + 1;` allocate registers differently; try the plain increment first.
- `v[0]=v[1]=v[2]=x` stores v[2] first; reverse the chain to store v[0] first.
- Alignment `(v + a - 1) & ~(a - 1)` matches as `static inline u32 AL(u32 v, u32 a)`; a macro gives `bics`. When two aligns share the masks, write `u32 m = a - 1; u32 k = ~m;` by hand.
- Size sums: `u32 s = 0, t = 0; s += A; t += s * n;` keeps the unfolded adds; `t + expr` on a known-zero t folds. Separate `+=` statements stop `a*m + b*m` being factored.
- `if (x == -1) return TRUE; if (f() == 0) return TRUE;` layouts: try `if (t == -1) goto yes; t = f(); if (t == 0) { yes: return TRUE; }`.
- An object constructed after an `if` block must be declared after it, or its ctor runs at function entry.
- A `u8` setter parameter makes tail-call wrappers mask the value; if the original passes it unmasked, declare the parameter `u32` even though the body does `strb`.
- Several spilled values reloaded every loop iteration (no hoist/CSE): make them elements of one local array (`u32 v[4]`).
- A ctor loop over a fixed array with no initial guard: `do { f(e); e += size; } while (e != end);`.
- Sparse switch (0x13..0x1b plus 0x28): leave out empty gap labels when the original has a bounded table plus a separate compare; merge shared-code cases.
- `u32 t = o->f; a = b = c = t;` loads once; without the temp mwcc reloads the field.
- A void function ending in `if (x) f(x)` that the original ends with `bl` + epilogue and a small frame: an unused local `struct Pad { s32 v[2]; Pad(){} ~Pad(){} }` (sized to the frame) prevents the tail call.
- `muls` destination = stride register only when the stride is a named local (`u32 st = *(u16*)...; t + st*idx`).
- A `u8` field before an opaque byte-array member misaligns it; declare the member as `u32[n]`.
- `if (x != -1) return TRUE; return FALSE;` vs `BOOL r = FALSE; if (...) r = TRUE; return r;` allocate differently; try both.
- `for (j = 4; j < m + 4; j++)` keeps the bound unhoisted with `u32 m` and no cast; `(u32)(m + 4)` on an s32 hoists it.
- Index-checked bit test: `if (i < N) { if (bit) return TRUE; return FALSE; } return FALSE;` (early return on a bad index lays out differently).
- Objects with dtors declared in inner blocks get frame slots after function-scope locals; function-scope locals go in declaration order.
- s16 sin/cos table: `idx = ((u16)ang >> 4) * 2; tbl[idx]; tbl[idx + 1];` (writing `tbl[idx*2]` double-shifts).
- A member array of a class with a user ctor but no dtor gets an inline ctor loop (`bl` per element), not `__cxa_vec_ctor`; classes with dtors get `__cxa_vec_ctor`/`__cxa_vec_cleanup`.
- Helper scripts run under zsh: an unquoted `$var` with spaces is NOT word-split; pass arguments separately.
- `if ((u32)d < n) return d + base; return base;` gives unsigned `bcs` plus the u16 cast; a ternary on signed d gives `bge`.
- Two zero-valued spilled locals whose initial stores come out in the wrong order: when they are the false values of `if (x == y) t = 1; else t = zeroN;`, write the ternary `t = (x == y) ? 1 : zeroN;` (found in r164; untested on func_0205cbe8, func_02061794, func_02052b90).
- Real signatures: `func_0204e9dc(grid, s32*, s32*, s32*, s32*, u16*, u16*, filter, 0)` (9 args, out-pointers); `func_0204eb30(grid, u16 *v, x, y, 0)`.
- Mode-state singleton `Unk_0206022c` at data_021e58a8 (unk_0206022c.cpp): 5 x `Unk_02060a90` (0x450) then a bitfield word at +0x15a0. Reuse.
- A C bitfield struct `{u32 a:3, ...; u32 cnt:8;}` reproduces a flag word plus a separate `strb` to byte +3.
- A byte-loop copy with `subs; cmp; bne` is a struct assignment: `struct { u8 b[16]; }` and `*(T*)dst = *(T*)src`.
- Callers first, callees later in the file stops a small same-file callee being inlined.
- `u16 *volatile p` (volatile pointer) and `volatile u16 *p` (pointer to volatile) are different; use the one matching what the original reloads.
- Grid rectangle class `Unk_02059d1c` (unk_0205989c.cpp / unk_0205a1d0.cpp): x0,y0,x1,y1 then u16 unk_10, unk_12.
- Packed 5-5-5 colors read with one `ldrh` each and no stack copy: `Color &c = *&g->field;` (reference), not `Color c = g->field;`.
- Before reporting, grep each compiled symbol in your pairs.txt against config/usa/arm9/symbols.txt: a mangled name that already exists at another address means the function belongs to a different class (usually a base). Integration rejects duplicates.
- Constant-bound loops with no initial `b test`: use a `u32` counter (an `s32` with a `(u32)` cast gets the initial jump).
- Declaration style matters: `s32 y; s32 x;` on separate lines and `s32 y, x;` can allocate differently.
- Frames: locals are placed by ascending size; address-taken 2-byte scalars go first. Eleven u16 outputs in the original frame are eleven separate `u16` locals, not an array.
- A class method named func_XXXX shadows the extern "C" function of the same name inside that class's methods; declare only the method.
- 5-bit color channels (`lsls #27; lsrs #27` plus bics/orrs on the same value): a u16 bitfield struct `{r:5,g:5,b:5,x:1}` with real bitfield reads and writes.
- `t == 2 || t == 3` folds to `subs; cmp; bhi`; `switch (t) { case 2: case 3: ... }` gives `cmp 2; beq; cmp 3; bne`.
- `u8 *const g = sym; ... g + 0x15fbc` gives the two-literal `ldr =sym; ldr =K; adds` form; `sym + K` folds into one relocation.
- A callee returning a u8 field: declare it returning `u32` and cast `(u8)` at the call site to get the caller's `lsls; lsrs` mask.
- A helper class's opaque byte-array member must be `u32 pad[n/4]` so the following member stays aligned.
- 9-flag range-check chains before tile handlers: write them as an inline `BOOL Check(u16 *p)` with `f9..f2 = TRUE, f1 = FALSE; u32 v = *p; ...; return f9;` and NO helper zero locals. With goto loops and plain constants, mwcc's own hoisting of 0 produces the original's "load 0 from a stack slot" — volatile-zero tricks are unnecessary in these functions.
- Sub-objects at large offsets: declare real member fields/arrays at those offsets. `(u8*)this + K` gets CSE'd into a register, while the original rematerialises `ldr rX,=K; adds rX,this,rX` per use.
- `const char *p = a ? a : X;` and `if (!a) a = X;` allocate differently; try the ternary.
- Keep `sym + 2` as a runtime add (not folded into the relocation): `(u8 *)((u32)sym + 2)`.
- `buf[1 + i]` read via `ldrb [base, idx]` with base = sp+1: write `u8 *q = &r[1]; r[0] = q[i];` (indexing `r[1 + i]` folds the +1).
- Address-of-array null test with a separate offset add: `u32 g = (u32)arr; if (g != 0) f((u8*)g + K);`.
- Script-command handlers (0x02068c9c..0x0206b140) are methods of `Unk_020ddccc : Unk_020e2b4c` (vtable 0x020ddccc, size 0xe4; see scratch r177/r177.cpp or unk_0206ab74.cpp once integrated). Older units call it Unk_02068f10 / Unk_02069834 / Unk_0206a198. The big owner object is `Unk_02067c70` (0x1a1c).
- A static member-pointer table whose init reloads the base every 16 entries is ONE array larger than 16 (Thumb str immediates max out at 124).
- To keep a table lookup before an `if`: `Fn f = tbl[i];` before the if, `(this->*f)()` inside it.
- Variadic functions: `typedef char *va_list; #define va_start(ap,parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)` reproduces `add r3,sp,#..; bics 3; adds 4`.
- A param stored by `push {r0-r3}` and copied with `ldm r3!,{r1,r2}` is an 8-byte struct passed by value.
- An early return placed out of line after the fall-through path needs `goto fail; ... fail: return e;`.
- File/LZ loader utilities (FSFile wrapper, LZ77 block files) are in unk_02063904.cpp.
- A byte store `arr[i-1] = 1` that the original writes as `ldr r0,=K; strb [r1,r0]`: `*((u8*)this + i + K) = 1`.
- Class with vtable and no user dtor emits no D0/D1/D2: declare `virtual ~T();` and define it out of line.
- `(u16)(x - 5) <= 2` compiles as subs; the `ldr =0xfffb; adds` form is `(u16)(x + 0xfffb) <= 2`.
- Row addressing `(u16 *)((y << 6) + (u32)base)` gives `adds r1,r2,r0`; `base + y*32` reverses the operands.
- Top-nibble insert masks: `(u32)v << 28 >> 16` gives `lsls #28; lsrs #16`.
- 64-bit shifts call helpers func_02133120 (<<) / func_02133540 (>>): write `*(s64*)dst |= (s64)v << (i*4)`; passing the sign word by hand gets folded.
- The thunks func_02003ac8..func_02003b4c (unk_020039ec.cpp) take real arguments (object data_021cb420 as arg 1).
- Message/text buffer classes: `Unk_020e2a60` (destination, data at +0xe) and `Unk_020e2a78` (source, data at +0x12) subclasses all have vtables [D1, D0, vfunc_08 = size, vfunc_0c = data ptr]; see unk_0206c714.cpp.
- `unk_098[i]` on a `u8[4][0x4c]` member gives one `muls`; `unk_098 + i*0x4c` double-scales.
- ARM `asm void f() { ... }` inside `#pragma thumb off`: an instruction the assembler mangles (e.g. `stmfd sp!, {r0-r12,sp,lr,pc}`) can be emitted as `dcd 0xe92dffff`.
- Record-table singleton data_021c5330 is `Unk_0206d7cc` (three `Unk_0206d8b8` cached tables); see unk_0206d0a0.cpp.
- Group ranges are INCLUSIVE: "from A through B" includes the function that starts at B. Several groups skipped it; check your pairs.txt covers every symbols.txt function with A <= addr <= B.
- A small same-class callee that gets inlined into callers (duplicated arg setup, no `bl`): define it at the end of the file.
- An `s8` parameter the original sign-extends at entry (`lsls 24; asrs 24`): declare `s32 c0` and do `s8 c = (s8)c0;`.
- A member ctor reached with r1 unset forwards the enclosing ctor's parameter; declare it on the member ctor even if unused.
- A derived class's first field sits right after the base's real (unaligned) size: `Unk_020e2a78` is 0x12 bytes, so a derived string buffer starts at +0x12.
- Function-pointer call with odd scratch registers: the original forwards an extra live argument (`tbl[i](p, x)`).
- data_020cbb18 is the singleton `Unk_020cbb18` (comm/session state, no vtable): func_02072e44 (enabled test), func_020728d4, func_020728a4(buf, n), func_02072824(cmd, arg), func_020729cc are its methods. New code may call them as methods; see unk_02072d5c.cpp.
- Pointer-increment fill `u32 *p = arr; for (i = 2; i >= 0; i--) *p++ = v;` reproduces an `stm r0!` loop.
- Free functions must be `extern "C"` (keeps the func_XXXXXXXX symbol); never leave them C++-mangled. Never define stub bodies for functions outside your range.
- A call with no `mov` before it may take the previous call's return value (still in r0) or a callee-saved register as its argument: write `g(f(x))`.
- Packing a message word with clear/insert/clear-top masks: a C bitfield struct passed by address reproduces the loads and stores; hand-written masks get merged.
- A `u16` stack parameter the callee reads with `ldrh` each time but callers pass unmasked: declare `u32 w` and use `*(u16 *)&w` at each use.
- Constant-bound loops that the original enters with `b test`: the goto form `i = 0; goto test; loop: ...; i++; test: if (i < N) goto loop;`.
- Unfolded `ldr =sym; adds #K` inside loops (not hoisted/CSE'd): declare the extern as a struct and access `((T *)(u32)&sym)->field`.
- Bit test-and-clear returning a flag: `BOOL r; if (((g >> bit) & 1) == 0) r = FALSE; else r = TRUE; g &= ~(1 << bit);`.
- `p[0] >> 4` on a u8 may give `asrs`; `(u32)p[0] >> 4` gives `lsrs`.
- An empty `bx lr` function whose callers use its return value: declare it returning a value and define `T f() {}` with no return statement.
- Zero-fill loop `stm r3!,{r1}; subs r2,#1; cmp r2,#0; bge`: `u32 *p = arr; s32 i; for (i = N-1; i >= 0; i--) *p++ = 0;` with the pointer declared BEFORE `i`.
- Clamp that the original writes as two separate stores: `if (v > 4) { field = 0; return; } field = v;`.
- Storing literal -1 into a byte: if the pointer is `u8 *` mwcc folds to `movs #255`; through an `s8 *` it gives `movs r1,#0; mvns r2,r1`.
- A u64 field compared to 0: `*(u64 *)&self->unk_0c == 0`.

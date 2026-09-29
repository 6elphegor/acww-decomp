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
- Locals the original stores and reloads (even constants like 1 or NULL) can be `volatile` locals. Volatile locals go in the frame first, in declaration order.
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
- Open problem: mwcc sometimes hoists `y - (hy<<4)` out of an inner loop when the original recomputes it (r117 func_020475f8, r120 func_02048c30/cf0). If you find the trigger, report it.
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

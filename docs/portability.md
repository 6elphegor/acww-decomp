# ACWW host port: Linux/x86-only dependencies and the plan to remove them

This is an audit of branch `modern` at 8bcdf7f4 (2026-10-08). The goal is a native port for macOS arm64 and Windows x86-64, and later possibly the web. Every count below was measured; the method is given next to each number. File:line references are to the files as they are at that commit.

How the numbers were measured:
- **Literal scan.** A Python scan of `src/` with comments and strings stripped. Each hex literal in a DS address range is classified as a cast to a pointer, a comparison, or something else. Script: `port_audit/dsaddr.py`.
- **libclang sweep.** Every one of the 865 game units was parsed with libclang 21 (`port_audit/sweep.py`). Targets: x86_64-linux, i386-linux, arm64-apple-macos13, aarch64-linux, x86_64-w64-windows-gnu (with and without `-mno-ms-bitfields`) and x86_64-pc-windows-msvc. Each run used the build's game flags. The x86_64-linux run is the baseline, so the "extra" diagnostics of a target are the ones only that target has.
- **GCC flag experiment.** All 865 units were compiled with gcc in several flag variants, and the disassembly of each unit and then of each function was compared (`port_audit/flagexp.sh`).
- **Object inspection.** `readelf`, `nm` and `objdump` on the existing `build/host64_usa` objects.
- **Two headless runs of the x86-64 build:**
  - the oracle's `play` script to frame 25001;
  - the attract demo to frame 11043, stopped with SIGINT so that the `ACWW_IOHIST` histogram was written.

No worktree was needed. All compiles read the main checkout and wrote only to the scratchpad.

---

## 0. Summary of findings

| # | Dependency | Size (measured) | Blocks | Portable replacement |
|---|---|---|---|---|
| A | Game data and memory at fixed DS addresses (gdata 0x02001000, gbss 0x02040000, .dtcm 0x027e0000, main RAM memfd and its mirrors, ITCM, WRAM, palette, VRAM, OAM, I/O pages) | 7 fixed mappings in hw.c, 3 `--section-start` options, `-Ttext-segment`, `MAP_32BIT`, root heap at 0x50000000 | macOS (`__PAGEZERO` covers the low 4 GB), Windows (no fixed low mappings in practice), PIE everywhere | Ordinary data/bss and heap blocks; host arrays for the system work area, DTCM, palette, OAM and VRAM banks |
| B | Pointers kept in 32-bit integers (works only below 4 GB) | C: 121 pointer-to-int + 96 int-to-pointer casts (55 files); C++: 186 int-to-pointer casts (67 files); explicit `(u32)(uptr)` 92 and `(T*)(uptr)` 31; PXI 26-bit pointers; snd7 38 conversions; DMA source/destination registers; resource offsets relocated in place | macOS arm64 and every build with memory above 4 GB | Real pointer types; offsets resolved when used; ARM7 services called directly. A low-4 GB poisoning harness finds the remaining sites on Linux |
| C | DS addresses used as numbers in the source | Casts of DS constants to pointers (I/O excluded): 229 (system work area/DTCM 160 in 56 files, VRAM 32, palette 18, OAM 5, main RAM 10, WRAM 2, GBA slot 2). Address range checks: about 25 in 8 files. VRAM address tables: 2. I/O register casts: 830 in 121 files (harmless: only used as numbers by `IO_*`) | A, B | Named host objects through macros (`HW_SYSWORK`, `HW_PLTT`, `HW_OAM`, `HostVram_CpuPtr`) |
| D | Signals and CPU tricks | SIGSEGV I/O emulation and single-stepping (x86 only), interrupt injection under SP (`-mno-red-zone`, irq_entry.S), SIGFPE division emulation, SIGVTALRM hang guard, SIGPROF, `ucontext` gregs | macOS (different ucontext, no x86), Windows (no signals), arm64 (no division trap) | Already almost unused: 0 trapped I/O accesses in 11043 attract-demo frames (`ACWW_IOHIST`); hang guard silent over 25001 play frames; 1 division-by-zero site (`spl_scl_in_out`). Replace with explicit code. **Done 2026-10-08 (phase 1): only debug aids remain, behind `HOST_DEBUG_POSIX`** |
| E | ELF / GNU-ld-only build steps | `ld -r -T` (2 partial links), 291 `--wrap` thunks in x86 asm, `--defsym`, `objcopy --localize-symbols` (76 names), provides.ld (7784 PROVIDE, of which 99 labels + 133 aliases are referenced), `.init_array` per-overlay ranges, `__start_/__stop_` symbols, gap data as ELF inline asm (113 objects), `.set` absolute symbols, `--allow-multiple-definition` | ld64 (Mac), lld-link / ld.bfd for PE (Windows) | Generated C instead of linker features; source-level fixes |
| F | GCC-only leniency and flags | Clang (Apple's only compiler) rejects 47 units with 2370 errors (1735 distinct) that GCC accepts. GCC-only flags: `-malign-data=abi`, `-fpcc-struct-return` (unsupported by clang off i386; changes 39 functions in 17 units) | macOS | Fix the declarations (the PROTO_LOCAL backlog); drop the flags after testing them |
| G | LLP64 (Windows) | 831 errors (mostly `IO_ADDR_`'s `(unsigned long)` cast), 8 `__LP64__` checks, `unsigned long` pointer words in modern/ds/overlays.c. MS bitfield layout breaks the save `static_assert`s (696 + 54 + others); the MSVC ABI also breaks member-pointer casts (133) and the MWCC_LAYOUT tail-padding trick | Windows | One-line `IO_ADDR_` fix; MinGW-w64 (clang or gcc, Itanium C++ ABI) with `-mno-ms-bitfields`, **not MSVC**. With these, only 11 extra diagnostics remain |
| H | Display and frontend | melonDS (GPL-3.0, patched, 32-bit core for i386) behind 8 `melon_*` functions; a separate SDL2 viewer process through `shm_open` + `fork`/`execl` | Licence; process model on Windows | In-process SDL frontend; own renderer behind the same 8-function interface |
| I | Compiler assumptions | char signedness changes 21 functions in 11 units; `wchar_t` 72 uses / `L""` 11; `long` 196 uses (7 casts); `s64`/`u64` `aligned(4)` typedef; arm64 member-function-pointer (PMF) encoding differs from x86 (12 hand-encoded PMFs in gap data) | – | Keep `-fsigned-char` (gcc and clang support it on every target); `char16_t`; PMFs as typed C |

The good news:
- **macOS arm64 is ABI-compatible already.** Beyond the clang baseline, the libclang sweep for arm64-apple-macos13 (and for aarch64-linux) gives **0 extra diagnostics**. All `static_assert`s of the save layout pass.
- **The signal machinery is idle in normal play.** It can be deleted rather than ported.

---

## 1. Fixed addresses

### 1.1 What is mapped or linked where today

| Region | DS address | How the host provides it | Evidence |
|---|---|---|---|
| Game initialised data `gdata` | 0x02001000 | `-Wl,--section-start=gdata=0x02001000`; variables in DS order (order.ld) | tools/configure_host.py:65-66; tools/host_order.py |
| Game bss `gbss` | 0x02040000 | `--section-start=gbss=0x02040000` (x86-64: 0x11bbf0 bytes, ends at 0x0215bbf0) | configure_host.py:66; `readelf -S build/host64_usa/acww` |
| DTCM module variables `.dtcm` | 0x027e0000 (16 KB) | separate `ld -r -T dtcm.ld` of `src/dtcm/*` (9 units), `--section-start=.dtcm` | configure_host.py:160-167, :65 |
| Main RAM, 4 MB, mirrored to 0x02ffffff | 0x02000000 | `memfd_create` + 5 `MAP_FIXED` mappings; gdata/gbss copied into it via `__stop_gdata`, `__start_gbss`, `__stop_gbss` | modern/host/hw.c:859-883 |
| ITCM | 0x01ff8000 | `map_fixed` (`MAP_FIXED_NOREPLACE`) | hw.c:855-858, :895 |
| Shared WRAM | 0x03000000 | `map_fixed` 64 KB (the WRAM arena constant 0x037f8000 is **not** mapped) | hw.c:898; src/autoload_2/unk_02114810.c:31 |
| Palette, OAM | 0x05000000, 0x07000000 | `map_fixed` 0x800 each | hw.c:899, :901 |
| VRAM windows | 0x06000000-0x068a3fff | 9 banks in a memfd, remapped with `MAP_FIXED` into 5 windows on every VRAMCNT change | modern/host/vram.c:71-80, :95 |
| I/O pages | 0x04000000, 0x04001000, 0x04100000 | memfd mapped twice (`PROT_NONE` for the game, read/write for the runtime) | hw.c:885-892, :902-904 |
| x86-64 program image | 0x10000000 | `-Wl,-Ttext-segment=0x10000000`, `-no-pie` | configure_host.py:72 |
| x86-64 root heap | 0x50000000 (8 MB, must be below 4 GB) | `host_root_heap_region` | modern/host/main.c:142-153 |
| x86-64 thread stacks | below 4 GB | `mmap(... MAP_32BIT)` | modern/host/os.c:99-106 |
| Arena constants | 0x0229bdc0 etc. | `.set` absolute symbols `SDK_MAIN_ARENA_LO`, `SDK_SECTION_ARENA_*`, `OVERLAY_n_ID` | main.c:58-68 (68 references in 15 files) |
| ROM header / system work area writes | 0x027ffe00, 0x027ffc00, 0x027ffc40, 0x027fff8c, 0x027ffde8, 0x027fffaa | host runtime writes the DS addresses directly | main.c:91-93; pxi7.c:159, :282-283, :396; frontend.c:86 |

On macOS arm64 none of these can be mapped: the 4 GB `__PAGEZERO` covers all of them, and binaries are always PIE. On Windows fixed low mappings are not reliable and there is no `memfd`, `MAP_FIXED` or `MAP_32BIT`. The plan therefore makes everything ordinary, relocatable memory, and DS addresses survive only as numbers where a hardware register needs one.

### 1.2 Code that still uses DS addresses as numbers

Measured with the literal scan (comments and strings stripped). "Cast" means a literal directly cast to a pointer.

| Kind | Count | Files | Examples | Replacement |
|---|---|---|---|---|
| System work area 0x027ff000-0x027fffff (and DTCM) casts | 160 (about 45 distinct addresses; 0x027fffa8 alone 27 times) | 56 | `*(volatile u16 *)0x27fffa8` (ov001/unk_ov001_02219064.cpp:39), RTC 0x027ffde8, ROM header 0x027ffe00 | `HostSysWork` struct (OSSystemWork) at a pointer; `HW_SYSWORK(T, 0x027fffa8)` macro, generated by a rewrite tool |
| DTCM casts | 2 | 2 | `(u32 *)0x027e3000` (autoload_2/unk_02114cd8.c:38), `(u32 *)0x027e0000` (autoload_2/unk_02114ef4.c:190); also os.c:196 (`HW_INTR_CHECK_BUF` 0x027e3ff8), sdk.c:29 (`OS_GetDTCMAddress`) | 16 KB aligned host array; `OS_GetDTCMAddress` returns it |
| VRAM casts and computed addresses | 32 casts, 23 of them in `GX_GetBG*Ptr` | 5 | autoload_2/unk_021104ac.c:85-222, unk_02111c0c.c:23,27, ov001/unk_ov001_0222516c.cpp:154 | `HostVram_CpuPtr(dsaddr)`, resolved through the current VRAMCNT bank mapping |
| VRAM address tables (address >> 12 as u16) | 2 tables | 2 | autoload_2/unk_0211220c.c:23-26, `data_02139f44` (autoload_2/unk_02111ccc.c:108) | Translate when used |
| Palette casts | 18 | 8 | `*(vu16 *)0x5000000 = 0x7c00` (main/unk_02000c2c.cpp:250), main/unk_020b8d9c.cpp:6296-6391 | `gHostPltt[0x800]` through `HW_PLTT` |
| OAM casts | 5 | 3 | autoload_2/unk_02111ccc.c:99,104 | `gHostOam[0x800]` through `HW_OAM` |
| Main RAM casts | 10 (6 `OSi_ReferSymbol` no-ops, 3 arena bounds) | 6 | autoload_2/unk_02114810.c:25-29 | Host arena blocks |
| WRAM, GBA slot casts | 2 + 2 | 2 | unk_02114810.c:31 (0x037f8000), autoload_2/unk_02113f04.c:31 (`*(u32*)0x08000000`, unmapped today) | Arena block; a host stub for the cartridge check |
| Address range checks | about 25 | 8 | WM/FS buffer checks in autoload_2/unk_02122e24.c:143-179 and unk_02123444.c:299-321; unk_02114cd8.c:32; main/unk_02000c2c.cpp:102-103; `OS_SetArenaHi(0, 0x23ff000)` (main/unk_020b0a80.cpp:235); CTRDG PXI offset `((uptr)&data_02200080 - 0x02000000) >> 5` (autoload_2/unk_0212703c.c:608) | Range checks against host block bounds, or delete (the DS-only DMA-ability rules) |
| I/O register casts | 830 | 121 | `IO_R(&R16(0x04001008))` | **None needed**: `IO_*` use the address only as a number (include/nitro/io_access.h) |
| Absolute linker symbols (`.set`) | 68 references | 15 | `OVERLAY_65_ID` as an address (main/unk_020720f8.cpp:1586), `SDK_SECTION_ARENA_DTCM_START` | Constants in a header |
| Gap data with DS numerals | **Resolved (2.7)**: 6 in the unused `BuildInfo` (not emitted), 13 packed bytes of the building table (no pointers); the I/O/VRAM ones in gap code (not emitted) | – | – | – |
| ROM-format data with DS pointers | Overlay table records (`sinit` pointers: autoload_2/unk_0211a49c.c:140-141); NFTR font unpacking adds the base to 5 fields in place (`u32 base = (u32)h`, autoload_2/unk_021031c4.c:69-97); sound archive `e->ptr = (u32)base + e->off` (autoload_2/unk_0210b448.c:365); snd7 treats a value below 0x02000000 as an offset (snd7/driver.c:122) | – | – | Keep offsets in the 32-bit file slots and resolve base + offset when used (or a 64-bit side table) |
| Overlay shared-address thunks | 291 `--wrap` thunks in x86-64 asm (build/host64_usa/shared.s); plus 275 data references at shared overlay addresses that are not thunked (shared.log) | – | – | Typed C dispatchers generated from the proto headers, with the call sites renamed at the source |
| provides.ld | 7784 PROVIDE lines: 7059 interior labels (`base + off`), 725 aliases. Only **99 labels and 133 aliases are referenced** (`nm -u game.o` ∩ provides) | – | – | Aliases: fix the callers' declarations. Labels: committed C accessors generated once by host_relayout.py |

### 1.3 Pointers kept in 32 bits

These are the things that make "the game's memory anywhere" hard. Today they work on x86-64 only because everything is kept below 4 GB.

- **C units.** gcc `-Wpointer-to-int-cast -Wint-to-pointer-cast`, x86-64: 246 warnings in 55 of 218 C files (121 pointer to int, 124 int to pointer). libclang: 121 + 128, of which 32 are DS register constants, which are fine. These are mostly NitroSDK/NNS C code in `autoload_2`, for example `u32 base = (u32)h;` in the font unpacker.
- **C++ units.** -fpermissive is already gone, so a bare cast is an error, but clang still flags 186 int-to-pointer casts from 32-bit integers (in 67 files). There are also 92 explicit `(u32)(uptr)` / `(s32)(uptr)` and 31 `(T *)(uptr)` conversions (grep).
- **Code relocations.** In `build/host64_usa/game.o`, `.text` has 8382 `R_X86_64_32` and 7189 `R_X86_64_32S` relocations (non-PIE absolute addressing). gaps.o has 42 `R_X86_64_32` data relocations: pointer slots of 4 bytes in gap data.
- **ARM7 interface (PXI).**
  - `ptr26()` rebuilds 26-bit pointers by OR-ing 0x08000000. That is wrong for the x86-64 image at 0x10000000; it is only harmless because the data concerned lives in gdata/gbss. (pxi7.c:72-75)
  - NVRAM pointers travel as two 16-bit halves (pxi7.c:89, :95, :103).
  - The card request block (pxi7.c:223) and the sound command lists (pxi7.c:367) go through `ptr26` as well.
  - `snd7` has 38 `uintptr_t`/`dsptr` conversions, sample addresses masked with `& 0x7fffffc` (snd7/channel.c:40, :101), and `readable()` limited to 0x02000000-0x03000000 (snd7/spu.c:49).
- **DMA.** DMA works on 32-bit register addresses dereferenced as host pointers (hw.c:339-368), and so does card DMA.
- **Host helpers that truncate.** `is_reg()` (sdk.c:35) truncates pointers to 32 bits before the 0x04000000-0x05000000 test. Above 4 GB a heap pointer whose low half happens to fall in that range would be taken for a register. It must compare the full `uintptr_t`.

---

## 2. Signals and CPU tricks

| Mechanism | Where | Used in normal play? (measured) | Platform problem | Replacement |
|---|---|---|---|---|
| SIGSEGV on the `PROT_NONE` I/O pages: x86 instruction decoding (`emulate_access`, i386 only), otherwise single-stepping with the trap flag (EFLAGS 0x100, `REG_ERR`, `REG_EFL`) | hw.c:525-685, SIGTRAP handler :687-708 | **No.** `ACWW_IOHIST`: 0 trapped accesses in 11043 attract-demo frames. Every access goes through `IO_*` → `HostIo_Read`/`HostIo_Write` (1374 uses in 113 files) | x86 encodings, glibc `gregs`, no Windows equivalent | Delete. The I/O pages become plain host arrays (`host_io()`) |
| Interrupt injection: push the interrupted PC below the game's stack pointer and redirect to `host_irq_stub` | hw.c:735-744, modern/host/irq_entry.S (x86 only, ELF `.type`/`.size`), `-mno-red-zone` (configure_host.py:59), `host_game_text_start/end` markers (configure_host.py:170-179) | Only called from the three signal handlers. Real delivery happens at safe points: `HostIo_*` (hw.c:569-597), `OS_Enable/RestoreInterrupts`, `OS_Halt`, `VBlankIntrWait` (os.c:19-24, :194-205) | arm64 has no red-zone convention to disable, no Windows equivalent | Delete together with the I/O trap and the hang guard |
| SIGFPE division by zero (x86 `div`/`idiv` given the DS result: quotient = dividend, remainder 0) | hw.c:814-852 | Rarely. One site in the attract demo (`spl_scl_in_out`, autoload_2/unk_020fc984.cpp:273, frame 8127); none in 25001 play frames | arm64 does not trap and gives a/0 = 0, a%0 = a, which differs from the DS | `DS_DIV`/`DS_MOD` inline helpers with the DS semantics (checked against `_s32_div_f`: src/autoload_2/unk_02133150.s:15-27, :142-147) at all **116** integer `/` and `%` sites with a non-constant divisor (libclang: 79 `/`, 35 `%`, 2 `/=` in 51 files; objdump agrees: 117 hardware div/idiv in game.o). Then make SIGFPE fatal |
| SIGVTALRM hang guard every 2 ms of CPU time (`setitimer(ITIMER_VIRTUAL)`) | hw.c:759-782, :919-928; `EINTR` loop at hw.c:115 | Never fired in 25001 play frames | No Windows equivalent; reads ucontext | A report-only watchdog (thread or per-frame counter); explicit `host_poll()` at any spin site it reports |
| SIGPROF sampler (`ACWW_PROFILE`), SIGINT dump, `ACWW_WATCH` (mprotect + trap flag), `ACWW_NOEMULATE` | hw.c:710-728, :784-808, :491-501, :647-655 | Debugging only | Linux/x86 only | Keep behind `#if HOST_DEBUG_POSIX`; elsewhere use the platform debugger |
| Fault reporting with frame-pointer walk and `execinfo` `backtrace` | hw.c:480-489, :643-666, :842-852 | Crash reporting | glibc | Optional per-platform crash handler |
| Stack switching for game threads | coro_switch.S (i386, x86-64 System V, arm64 incl. Apple `_` prefix), coro.c | Yes | **Windows x64 missing** (`#error` at coro_switch.S:108: needs rdi, rsi, xmm6-15 and the TIB stack bounds) | Windows: a variant that also saves rdi, rsi, xmm6-15 and the TIB stack fields, or Fibers (`CreateFiber`/`SwitchToFiber`). The arm64 code exists but has never run |
| `ucontext` | hw.c:21, :31-43, :541-553 | Only in the handlers above | glibc register names | Goes away with the handlers |
| `-fno-pie`/`-no-pie`, `-Ttext-segment`, `--section-start` | configure_host.py:50, :65-66, :70-72, :78-82 | Yes | macOS has PIE only; Windows uses ASLR | PIE after phase 3 |

---

## 3. ELF / GNU toolchain features the build relies on

| Feature | Where | What for | Replacement |
|---|---|---|---|
| `ld -r -T dtcm.ld` | configure_host.py:163-167 | DTCM variables in one 0x4000 block at 0x027e0000 | DTCM block as a host array; DTCM variables as ordinary variables |
| `ld -r -T order.ld` with `-fdata-sections` and `-malign-data=abi` | configure_host.py:51, :201-203; tools/host_order.py | Variables in DS order (some code runs from one variable into the next); per-overlay data/bss/constructor ranges | Find and fix the overruns (guard-padding variant of order.ld on Linux), then drop the ordering. Overlay reset by a generated C table (`{&var, sizeof var}` per overlay) |
| `.init_array` → `host_ovinit` ranges (98 constructors, 59 overlays; 91 overlay objects have `.init_array`) | host_order.py:92-97 | Overlay constructors run on load, not at start-up | Explicit per-overlay init functions (generated list of the overlay units' static-init functions, or the objects made constant-initialised) |
| `--wrap` (291) and x86 asm thunks | configure_host.py:182-189, :201; tools/modern_shared.py | Calls to DS addresses that several overlays share | Typed C dispatchers + source rename |
| ~~`--defsym=_Znwj=_Znwm`, `_Znaj=_Znam`~~ | – | **Gone (2.5)**: the global operators are the host's (modern/host/newdelete.cpp), the game allocates by name | – |
| ~~`objcopy --localize-symbols`~~ (77/76 names) | – | **Gone (2.4)**: `include/host_libc_rename.h` (forced include) renames the game's libc names to `ds_*` | – |
| `PROVIDE` (provides.ld, provides64.ld via host_relayout.py with pyelftools on DWARF) | configure_host.py:211-217 | Aliases and interior labels | See section 1.2: committed C; no ELF/DWARF reading at build time |
| ~~Gap data as inline asm~~ | – | **Gone (2.7)**: `modern/gen/gaps.c`, typed C for every architecture (14 objects); bss labels defined in the sources; PMFs the compiler's | – |
| `__start_gdata` / `__stop_gdata` / `__start_gbss` / `__stop_gbss` | hw.c:862-873 | Copy gdata/gbss into the main RAM memfd | Goes away with the fixed mapping |
| ~~`.set` absolute symbols~~ | – | **Gone (2.6)**: `include/sdk_linker_symbols.h` | – |
| `constructor(101)` priorities | main.c:73, overlay.c:53 (and `constructor` overlay.c:43) | Map memory and snapshot overlays before the game's static constructors | Explicit init calls from `main()`. Unnecessary once no constructor touches fixed memory. Priorities aren't guaranteed across units on Mach-O/COFF |
| `--allow-multiple-definition` | configure_host.py:65 | It hides a **bug**: the 9 `src/dtcm` objects are linked twice (12 symbols). They go into dtcm.o inside game.o and also stay in `host_objs`, because `host_objs = objs - game_objs` is computed after `dtcm_objs` were removed (configure_host.py:160-169; `objects.txt` lists them) | Exclude `dtcm_objs` from `host_objs`, then drop the option |
| `.note.GNU-stack` sections | configure_host.py:176; irq_entry.S:66; coro_switch.S:177-179 (guarded) | ELF | Guard or remove |

---

## 4. melonDS and SDL: the graphics and sound interface

**What the game side uses.**
- Hardware registers through `HostIo_Read`/`HostIo_Write`. `forward_display` (hw.c:415-433) passes display registers on to the renderer:
  - the changed halves of the display range: < 0x04000070 except 0x04000004, engine B 0x04001000-0x0400106f, POWCNT 0x04000304, 0x04000320-0x040006a3;
  - every write to the 3D ports 0x04000400-0x04000600;
  - VRAMCNT 0x04000240-0x0400024b byte by byte.
- 3D read-backs (GXSTAT, matrix/vector test results and RAM counts, 0x04000600-0x040006a3, 0x04000320) come back synchronously through `melon_read32` (hw.c:405). The renderer must answer them during the frame.
- **The renderer interface (melon.cpp) is 8 functions:** `melon_init`, `melon_write8/16/32`, `melon_read32`, `melon_frame` (VRAM/palette/OAM sync plus `RunFrame`), `melon_screen(i)` (256×192 0x00RRGGBB), `melon_gx_fifo_irq_level` (IRQ 21 level). `melon_debug` exists for diagnostics only.
- **Inputs to the renderer:**
  - 9 VRAM banks from vram.c (`host_vram_bank`, `host_vram_bank_size`), compared with `memcmp` per frame in `VRAMDirtyGranularity` blocks (melon.cpp:64-80);
  - palette 0x05000000 and OAM 0x07000000, copied each frame (melon.cpp:77-78).
- **Not emulated today:** HBlank per-line effects (`Sky_HBlankMain`/`Sub` are stubs, gaps_code.c:8-9); display capture works only as far as melonDS does it.
- **melonDS build.** Patched by tools/host/melonds.patch (192 lines: GPU3D `HostDrain`, `HostMarkPaletteOAMDirty`, CPU halt hooks). i386 links a 32-bit core (`build-core32`), x86-64 links `build-core` with JIT and GDB stub compiled in but unused (configure_host.py:73-75). melonDS itself builds on macOS arm64 and Windows, so it can stay as the temporary renderer on those hosts. Its only blocker there is the GPL licence.
- **Frontend.**
  - frontend.c (`shm_open`, `fork`, `execl` of the 64-bit SDL2 viewer: frontend.c:22-48) exists only because the i386 game process can't load the 64-bit system SDL.
  - The `AcwwShm` struct (frontend.h) carries keys, touch, 2 screens and a 16384-frame stereo audio ring at 32728 Hz.
  - The viewer uses 17 SDL2 calls (window, renderer, streaming texture, events, audio device).
- **Sound** is already native: snd7 (driver, sequencer, SPU mixer) writes to the ring and to WAV (snd7/output.c).

**Replacement:** an in-process SDL frontend (SDL2, or SDL3 later) for the 64-bit builds, keeping the `AcwwShm` struct as a plain in-memory interface. An own renderer then implements the 8 functions plus the VRAM, palette and OAM inputs. The frozen oracle captures (rendered by melonDS) are its reference frames.

---

## 5. Compiler assumptions

| Item | Measured | Mac arm64 | Windows | Action |
|---|---|---|---|---|
| GCC leniency: per-namespace `extern "C"` redeclarations with different types (the "views" trick: `namespace R1 { extern EffectManager gEffectManager; }`) | Clang errors in **47 units, 2370 errors** (1644 conflicting types, 536 redeclarations, 163 C-linkage conflicts, 20 redefinitions, 4 `void *` arithmetic, 2 ambiguous calls, 1 no matching call); g++ accepts them (notes only) | **Blocks Apple clang** | Blocks clang-mingw | Fix as part of the PROTO_LOCAL/views backlog. The libclang sweep is the check; the goal is 0 |
| `-fpcc-struct-return` | **Dropped on x86-64 (2.2)**, oracle identical; on i386 kept but a no-op (866 units: same code without it) | clash gone | – | – |
| `-malign-data=abi` | GCC x86 only | clang: unknown | – | Drop after the overrun fixes (section 3) |
| char signedness | `-funsigned-char` changes 21 functions in 11 units (`OS_VSNPrintf`, `StringExpander`, `DebugText_PutString`, GameSpy ov065) | Apple arm64 char is signed anyway; `-fsigned-char` works | MinGW char signed | Keep `-fsigned-char` (Linux arm64 needs it). Optionally make those 21 functions use `s8` |
| `-fshort-wchar` | `wchar_t` 72 uses in 4 files, `L""` 11 in 2 files | Supported by clang | wchar_t is 16-bit natively | Optional: `char16_t`/`u""`, then drop the flag |
| `-fno-short-enums`, `-fno-strict-aliasing`, `-ffreestanding -nostdinc -fno-builtin`, C++ flags | – | Supported | Supported (gcc/clang) | Keep |
| `long` | 196 uses, 7 casts; `IO_ADDR_` `(unsigned int)(unsigned long)(p)` (include/nitro/io_access.h:34) is the source of about 1530 of the 1537 LLP64 truncation diagnostics; `unsigned long` pointer words in modern/ds/overlays.c:44-54 (`Modern_SharedResolve`) | LP64: fine | **LLP64: breaks** | `(unsigned int)(uptr)(p)`; `uptr` in overlays.c; review the 7 casts |
| `__LP64__` used as "64-bit" | 8 size checks in ov103/unk_ov103_02294c40.cpp:237-260 | fine | wrong on LLP64 (7 failing checks) | `HOST64` |
| Bitfield and class layout | win64-gnu: the save `static_assert`s fail (Pattern 134, PlayerData 130, VillagerData ×58 each...) because of MS bitfield layout; with `-mno-ms-bitfields` they pass. MSVC ABI: still 696 VillagerData/VillagerMemory and 54 SaveData failures, plus 133 member-pointer size errors; `MWCC_LAYOUT` relies on Itanium `[[no_unique_address]]` tail reuse (12 uses in 7 files) | Passes | **Use MinGW-w64 (Itanium ABI) + `-mno-ms-bitfields`; MSVC/clang-cl is not viable** | – |
| `s64`/`u64` `aligned(4)` (include/types64.h:6-7), save data in DS layout | – | Unaligned 8-byte loads are fine on arm64 | MinGW clang/gcc: fine; MSVC can't lower alignment | – |
| Member-function-pointer encoding | 470 PMF types, 66 PMF casts in source (compiler-generated: fine); 12 hand-encoded in gap data | arm64 uses the ARM encoding | x86 encoding | Generate the gap PMFs from C (section 3) |
| Varargs | `DS_VA_ARG` is the compiler's `va_arg` (include/ds_stdarg.h): portable. `host_panic` reinterprets a `void *` as a `va_list` (main.c:34-38, src/main/unk_02000c2c.cpp:74-79): only valid where `va_list` is a pointer | Apple: pointer (works); Linux arm64: struct (broken) | char* (works) | Debug path; pass a real `va_list` |
| Division by zero | See section 2. Also `sdk.c:199-200` returns 0 for b == 0, but the DS routine returns the dividend (9 named calls, all with constant divisors, so harmless) | arm64 differs from the DS | – | `DS_DIV`/`DS_MOD` |
| Mangled C++ names declared as C | **0 (2.5)** (was 47 in 17 files + 24 in proto headers) | – | – | Done: member functions, C functions in the defining unit |
| Endianness | Little-endian everywhere | – | – | Nothing |
| Platform macros in game code | `__x86_64__`/`__i386__`/`__linux__`: 0 in src/include (only `__LP64__` ×8) | – | – | Clean |
| GNU extensions in the runtime | `typeof` (pxi7.c:27, :385), `localtime_r` (pxi7.c:165), `clock_nanosleep TIMER_ABSTIME` (hw.c:115; **absent on macOS**), `memfd_create`, `MAP_FIXED_NOREPLACE`, `MAP_32BIT` (Linux only), `shm_open`/`fork` (frontend.c), `mmap` of the ROM (card.c:25), `execinfo` | – | – | Platform layer (`modern/host/plat_posix.c`, `plat_win32.c`) or SDL |

---

## 6. The plan, in order

Each step can be done and checked on this Linux x86-64 machine. "Oracle" means `oracle.sh <build> quick|play`. The x86-64 build must stay identical to its own pre-change captures, and the i386 build stays identical while it is kept as the reference.

Two cheap tools keep the work honest before any Mac or Windows hardware exists:
- **libclang target sweep.** This audit's `sweep.py`, made into `tools/host_portcheck.py`. It parses all 865 units for arm64-apple-macos, x86_64-w64-windows-gnu (`-mno-ms-bitfields`) and x86_64-linux in about a minute, and reports only the diagnostics beyond the baseline.
- **Low-4 GB poisoning harness.** Introduced in step 3.0.

### Phase 0: guard rails (1-2 days)
1. **0.1** Add `tools/host_portcheck.py` (the sweep). Today it reports clang-only errors in 47 units, 2568 extra diagnostics on win64-gnu and 0 on macos-arm64. Track the counts.
2. **0.2** Fix the double-linked DTCM objects (configure_host.py:169), then drop `--allow-multiple-definition`. Check: link, oracle.
   **Done (2026-10-08).** Both builds link without the option (no other duplicate surfaced); oracle identical (i386 against the captures, x86-64 against its own pre-change run).
3. **0.3** Add `-Werror=pointer-to-int-cast -Werror=int-to-pointer-cast` to the C units of the x86-64 build behind a `--strict-c` switch. It lists the 246 C sites; burn them down in phase 3.
   **Done (2026-10-08):** `configure_host.py --arch x86_64 --strict-c --suffix _strict` (the switch also drops `-w` for the C units, which would hide the casts). Count on 2026-10-08 (after the pointer-width work already on `modern`): **245 diagnostics, 226 distinct sites (111 pointer to int, 115 int to pointer) in 54 files** (53 sources and `include/ds_stdarg.h`), no other errors. Count: `ninja -f build_host64_strict.ninja -k 0 <the C objects>`, then the distinct `file:line:col` of `error: cast`.

### Phase 1: remove the signal-based machinery (Linux, about 1 week)
4. **1.1** Make the I/O page fault fatal behind `ACWW_STRICTIO` and run the play script plus the save/continue script. Expected: no fault (measured 0 in the attract demo). Then delete `emulate_access`, the SIGTRAP single-step path, `map_io`'s `PROT_NONE` view and the memfds. `host_io()` returns plain arrays (`static u8 sIo0[0x1000]...`). Check: oracle identical.
5. **1.2** Hang guard: switch it to report-only first (no injection; run the long scripts; it never fired), then remove the SIGVTALRM timer. If a spin site is ever reported, put an explicit `host_poll()` (advance time and deliver interrupts) in that loop. Delete `host_irq_inject`, irq_entry.S, the `game_text` markers and `-mno-red-zone`. Check: oracle identical (no injection happened in these runs, so the code shape changes but the behaviour doesn't).
6. **1.3** Division: write `tools/host_div_rewrite.py` (libclang) to turn the 116 non-constant-divisor `/`, `%`, `/=` into `DS_DIV`/`DS_MOD`/`DS_UDIV`/`DS_UMOD` (DS semantics: a/0 = a, a%0 = 0). Fix `_s32_div_f`/`_u32_div_f` in sdk.c to match. Then make SIGFPE fatal. Check: oracle identical (`spl_scl_in_out` still gets the dividend); `objdump` shows no `idiv` without a zero test in game code.
7. **1.4** Move the debug-only signal users (SIGINT dump, SIGPROF, `ACWW_WATCH`, `ACWW_NOEMULATE`) behind `HOST_DEBUG_POSIX`. Make the pacing sleep a platform function (`clock_nanosleep` here; `nanosleep`/`mach_wait_until` on macOS; a waitable timer on Windows).

After phase 1 the runtime has no ucontext, no x86 decoding and no `-mno-red-zone`, so interrupts are taken only at the explicit safe points.

**Phase 1 done (2026-10-08).** What was done and measured:
- **1.1** Trial first: with `ACWW_STRICTIO=1` a trapped I/O access (and a hang-guard action) ended the run. The oracle's quick and play scripts on both builds, and the new-game save script plus the continue run (docs/host.md, i386, to frame 36501 and 6501), ran through: **0 trapped accesses, 0 hang-guard actions**. Then deleted: `emulate_access`, the SIGSEGV/SIGTRAP handlers, the I/O memfds and their `PROT_NONE` views, `ACWW_NOEMULATE`. The registers are three static arrays in hw.c. Nothing is mapped at 0x04000000 any more, so a stray access is a crash.
- **1.2** Deleted: the SIGVTALRM timer and handler, `host_irq_inject`, `host_async_tick`, `host_irq_entry`, irq_entry.S, the `host_game_text_start/end` markers, `-mno-red-zone`. No explicit safe point was needed (the guard never acted). A watchdog thread (portable: `plat.h`) reports when virtual time stands still for 2 s of real time (`ACWW_WATCHDOG=<ms>`, 0 = off); it never touches the game's thread. It reported nothing in any run.
- **1.3** `tools/host_div_rewrite.py` (libclang; types as on the DS, i.e. parsed for i386) rewrote **116 sites in 51 files** (DS_DIV 64, DS_MOD 17, DS_UDIV 10, DS_UMOD 16, DS_UDIV64 7, DS_UMOD64 2; none needed a manual fix, none in headers or modern/ds); `--check` now reports 0. The helpers (`include/ds_div.h`) follow the ARM runtime: 32-bit a / 0 = a, a % 0 = 0, INT_MIN / -1 = INT_MIN; 64-bit (`_ll_sdiv`/`_ll_mod`...) a / 0 = a **and a % 0 = a** (hw.c's old emulation gave 0 there). `_s32_div_f`/`_u32_div_f` in sdk.c give a / 0 = a. SIGFPE is fatal (crash report). objdump of the x86-64 game.o: 113 hardware `div`/`idiv` (was 117); 93 have the zero test right before them, the other 20 sampled are tested earlier or proven non-zero by the compiler (e.g. `keyrand` returns early for n == 0). The one known division by zero (`spl_scl_in_out`) gets the dividend as before: oracle identical.
- **1.4** `modern/host/debug_posix.c` (`HOST_DEBUG_POSIX`, on by default except on Windows): crash report (SIGSEGV/SIGBUS/SIGILL/SIGFPE), the SIGINT report, `ACWW_PROFILE`, `ACWW_WATCH` (x86 Linux only; ucontext only there). The pacing sleep and the clock are `host_plat_sleep_until_ns` / `host_plat_time_ns` (`plat_posix.c`: `clock_nanosleep` on Linux, `nanosleep` on macOS; `plat_win32.c`: a high-resolution waitable timer, not built yet). hw.c has no signal, ucontext or x86-specific code left.
- Checks: oracle quick and play identical on i386 (against the captures) and on x86-64 (against the same tree's pre-change run, bit for bit); the save/continue script's screenshots identical to the pre-change i386 build. The save file written by that script differed in 24 bytes, the Wi-Fi ID: a build dependence found on the way and fixed (section 7).

### Phase 2: toolchain neutrality (Linux, 2-3 weeks; overlaps phase 3)
8. **2.1** Clang-clean the game. Fix the 47 units / 1735 distinct clang errors (namespace views → real types; this is the existing PROTO_LOCAL backlog). The portcheck reaching 0 is the check. Then get an LLVM toolchain into `~/acww/toolchains` (prebuilt tarball, no sudo needed) and add `--cc clang` to configure_host.py. Check: the clang x86-64 build passes the oracle. This catches most Apple-clang problems on Linux.
9. **2.2** Drop `-fpcc-struct-return` on x86-64 (39 functions / 17 units change); oracle. Drop `-malign-data=abi` after step 2.8.
   **Done (2026-10-08)** for x86-64: the 64-bit build's quick and play captures (screens and sound) are identical to the
   build's own captures from before. The 32-bit build keeps the flag while it is the reference, but there it changes
   nothing: all 866 units compile to the same code with and without it (`objdump -d` of each), since returning structs
   in memory is the i386 Linux ABI's default. Dropping it on i386 too is safe; it is kept only so that the reference
   build's command line is unchanged.
10. **2.3** LLP64 readiness:
    - `IO_ADDR_` → `(unsigned int)(uptr)(p)`;
    - overlays.c `unsigned long` → `uptr`;
    - `__LP64__` → `HOST64`;
    - the 7 `(unsigned long)` casts.

    Check: portcheck win64-gnu-nomsbf reports 0 beyond the baseline (11 today, apart from the casts).
11. **2.4** Game libc names: a forced-include `include/host_libc_rename.h` mapping the 76 clashing names to `ds_*`. Delete host_localize.py and the objcopy step. Check: `nm` shows no clash; oracle.
    **Done (2026-10-08).** Re-measured: 77 names localised (i386), 76 (x86-64). Now: 66 C library names and the 5
    `__cxa_vec_*` helpers renamed by macros in `include/host_libc_rename.h` (`-include` for every game unit); `atexit`
    also through an asm label on its declaration, so that GCC's own registration of function-local static destructors
    reaches the game's no-op (clang ignores the label for its emitted calls: use `-fno-c++-static-destructors` there);
    the MSL's `std::terminate`/`dthandler` moved to namespace `msl`; `__cxa_pure_virtual` is the host's; the global
    `operator new`/`delete` are the host's (`modern/host/newdelete.cpp`, see 2.5). `nm` of `game_all.o` against the
    host's libc, libm, libgcc and libstdc++: 0 names defined by both; the game's only references into them are
    `operator delete`/`delete[]`, `__cxa_pure_virtual`, libgcc's `__udivdi3`/`__umoddi3` (i386) and one
    compiler-emitted `memset` (x86-64: the same result as the game's). host_localize.py and the
    objcopy step are deleted (the link uses `game_all.o`). Oracle: identical (32-bit with the captures, 64-bit with its
    own).
12. **2.5** `operator new`/`delete` with `size_t` in the source; drop `--defsym`. Replace the 60 mangled-name C declarations with member calls.
    **Done (2026-10-08)**, differently for operator new/delete: once the game's names are no longer made local (2.4),
    a game-defined global `operator new` would serve melonDS and the C++ library too. So the program's global
    operators are the host's (`modern/host/newdelete.cpp`, malloc), and `::operator delete` gives a block of the
    game's heaps back to the game (`Mem_FreeForDelete`, the DS's operator delete; `host_is_game_heap` in main.c: DS
    memory or the 64-bit root heap block). The game's 3 uses of the global operator new (a scene macro in
    unk_020039ec.cpp, `new TalkWindowState[2]`, `__cxa_vec_new`) allocate by name: `Mem_AllocForNew`, or
    `new (kGameHeap) T[n]` (include/sys/new.h). `ProcBase::operator new` takes `size_t`. No `--defsym`.
    Mangled names: re-measured 47 occurrences in 17 files of src/ (20 `#define X _ZN...` aliases, the rest
    `extern "C"` definitions and calls) plus 24 declarations in 4 generated proto headers; now **0**. ProcBase is a real
    class (its members, constructor and destructor defined as members; its vtable is the compiler's, not the ROM's
    from gap data); 11 aliases were unused (deleted); the calls into classes defined in another unit go through C
    functions there (`FtrShirt_SyncAct0` ..., `SpNpcRoostGuest_GetGuest`, `PlayerData_GetNookPoints`: direct,
    non-virtual calls as the DS's); `FxVec3::~FxVec3` is a member, with `FxVec3_Destruct` for the `__cxa_vec_*`
    helpers. Oracle: identical.
13. **2.6** Replace the `.set` absolute symbols (main.c:58-68; 68 references) with constants in a header.
    **Done (2026-10-08):** 11 `.set` symbols, 67 references in 16 files (one an unbuilt `.s`) re-measured;
    now `include/sdk_linker_symbols.h` (`#define` constants; the exception table bounds, both 0, are NULL in
    `__FindExceptionTable`), 0 `.set` left in main.c. Oracle: identical.
14. **2.7** Gap data as typed C for every architecture (113 objects; let the compiler encode the 12 PMFs; resolve or prove unused the 19 stale DS numerals). Drop the `--x86-64` asm emitter.
    **Done (2026-10-08).** Re-measured: 56 gap sections, 84 labels (`.set` into the arrays), 12 hand-encoded PMFs, 7
    labels unused. Now one file for every architecture, `modern/gen/gaps.c` (tools/host_gaps.py without `--x86-64`
    and without the own-slot list `tools/host_gap_pointers.txt`, both deleted): 14 objects, each label its own C
    object (the bytes, or a table of pointers: `data_01ff8ab4`), no asm. The 12 PMFs are the compiler's
    (`&ProcBase::onCreate` ...); ProcBase's ROM vtable and next id went to its unit. The 52 zero-initialised labels (49 used)
    are defined in the sources with their real types (pointers 8 bytes, `MBWork`, `WMMsg`, `PMRegInfo[4]` with their
    64-bit sizes: before, they had their DS sizes on x86-64 and `MBWork`/`WMMsg` ran into the next label); labels
    inside a larger object became macros over it (the WFC-ID block, the multiboot beacon, the cartridge buffer); the
    ones whose users are only in overlays are in src/autoload_2/gap_vars.c (an overlay's variables are reset on load,
    these must not be). They are now game variables in `gbss`, in DS order (order.ld), not host bss. Stale DS
    numerals: of the 19 in the DS RAM range, 6 are in `BuildInfo` (the SDK's build strings, unused: no `nm -u`
    reference in either build; not emitted) and 13 in `data_020d0a7c`, the building table (`BuildingInfo[0x22]`, 10
    bytes of u8/u16 fields, no pointer: packed bytes that look like addresses); the I/O/VRAM-range ones are in the gap
    *code* (ARM instructions of functions written in C, not emitted). Oracle: identical.
15. **2.8** Variable order:
    - an order.ld variant that puts 64 poisoned bytes after every variable;
    - a per-frame check (`ACWW_GUARDS`) over the long scripts to list the overruns;
    - fix each one;
    - then drop order.ld's ordering, `-fdata-sections` and `-malign-data`.

    Check: oracle with and without the guard variant.
16. **2.9** Overlay reset without the linker:
    - generate `overlay_table.c` with each overlay's variables (`{&var, sizeof var}`, from config symbols.txt and the overlay units), the pristine copy taken per variable;
    - make the 98 overlay constructors explicit (a generated `OvNNN_StaticInit()` per overlay calling the units' init functions, or the objects made constant-initialised).

    Check: `ACWW_OVLOG` output (bytes reset, constructors run) is the same as today; oracle.
17. **2.10** Shared-address calls:
    - typed C dispatchers (`Shared_<Name>(args)` → `Modern_SharedResolve`) generated from the proto headers;
    - rename the call sites at the source;
    - delete `--wrap` and the asm;
    - review the 275 data references at shared overlay addresses.
18. **2.11** provides.ld: fix the 133 alias users' declarations; turn the 99 interior labels into committed C accessors (one last run of host_relayout.py). The build no longer reads DWARF and needs no linker script.

After phase 2 the game links with a plain `cc *.o`: no `ld -r`, linker script, `--wrap`, `objcopy` or PROVIDE.

### Phase 3: memory anywhere (Linux x86-64 above 4 GB, 3-6 weeks)
19. **3.0** Low-4 GB poisoning harness (`ACWW_HIGHMEM=1` on x86-64):
    - root heap via a plain `mmap` above 4 GB;
    - stacks without `MAP_32BIT`;
    - every *unused* range below 4 GB reserved `PROT_NONE` (an emulation of `__PAGEZERO`), keeping only the DS mappings still in use.

    A truncated pointer then faults at a low address with a backtrace. Run quick, play, the town script and save/continue.
20. **3.1** Fix the pointer-in-32-bit sites:
    - the 246 C warnings, the 186 C++ int-to-pointer casts, and the 92 + 31 explicit `uptr` round trips (each one an integer that should be a pointer, or an offset);
    - in-place resource relocation (NFTR unpack, SndArc `e->ptr`, ...): resolve the offset when used;
    - PXI: call pxi7/snd7 directly with pointers (the ARM7 is the same process): a host mailbox carries `void *` instead of 26-bit words; snd7 `dsptr` becomes `void *`, and `readable()` checks the real buffer bounds;
    - DMA: implement the SDK DMA entry points (`MI_Dma*`, GX/GXS loads) in sdk.c with real pointers, as the CPU copies already are; register DMA only for the remaining GX FIFO/HBlank cases with resolvable addresses.

    Check: the harness runs every script without a fault, the oracle is identical, and `--strict-c` is clean.
21. **3.2** System work area, DTCM, palette, OAM, VRAM and arenas become host objects:
    - a rewrite tool turns the 160 system-work/DTCM casts into `HW_SYSWORK(...)` over a `HostSysWork` block, and the 18 + 5 palette/OAM casts into `HW_PLTT`/`HW_OAM`;
    - VRAM: 32 casts plus 2 tables through `HostVram_CpuPtr(dsaddr)`. This replaces vram.c's mmap aliasing: each bank appears in at most one CPU window at a time, so a lookup suffices. Assert that no pointer is kept across a VRAMCNT change;
    - DTCM is a 16 KB host array (the `.dtcm` partial link goes away);
    - ITCM, WRAM and the main RAM arenas are host blocks (unk_02114724.c, unk_02114810.c);
    - the about 25 range checks become checks against the host blocks;
    - the host runtime stops writing DS addresses (main.c:91-93, pxi7.c:159/282/396, frontend.c:86, os.c:196);
    - the debug tools (`RAMHASH`, `RAMDUMP`, `HEAPCHECK`, `VRAMDUMP`) walk the host objects instead.

    Check: the harness with *all* DS mappings removed; oracle.
22. **3.3** gdata/gbss become ordinary `.data`/`.bss`: drop the `--section-start` options, the main RAM memfd and mirrors and `__start_/__stop_`. Then `-fPIE -pie`, dropping `-Ttext-segment`, `-no-pie` and `MAP_32BIT`. Check: x86-64 PIE build under ASLR, oracle, and the harness poisoning the whole low 4 GB.
23. **3.4** Retire the i386 build as the reference: re-record the oracle from the x86-64 build. First make virtual time independent of code shape, so arm64 matches too. Today the 64-bit timing drifts by a frame or two after scene changes.

### Phase 4: platform layer and frontend (Linux first, about 1-2 weeks)
24. **4.1** In-process SDL frontend (window, input, audio callback on the ring) for 64-bit builds; drop `shm_open`/`fork`/`execl`. The viewer stays only for i386, if i386 is kept at all.
25. **4.2** `modern/host/plat.h` with POSIX and Win32 implementations: monotonic time, sleep-until, read the ROM file into memory (instead of `mmap`), local time, stack allocation, optional backtrace. `typeof` → C23 `__typeof__` or an explicit type.
26. **4.3** Coroutines on Windows x64 (an asm variant or Fibers). The arm64 path of coro_switch.S has never run.
27. **4.4** Cross builds checked on this machine before any hardware:
    - **aarch64-linux** with a cross gcc/clang plus `qemu-aarch64` user mode (downloadable without sudo). This exercises arm64 division, PMF encoding, the coroutine switch, memory above 4 GB and unsigned-char defaults, and runs the oracle.
    - **x86_64-w64-mingw32** with llvm-mingw plus Wine (portable tarball). This exercises LLP64, MS bitfields (with `-mno-ms-bitfields`), the Win32 platform layer and the coroutine switch.
    - **macOS:** the remaining differences from aarch64-linux are Mach-O/ld64, the `_` symbol prefix in coro_switch.S (already handled), Apple's signed char and `va_list`, and constructor ordering. A CI runner (GitHub Actions macos-14 is arm64) can build and run the headless oracle before anyone owns a Mac.

### Phase 5: renderer (independent, can start any time)
28. **5.1** Own 2D compositor behind the 8-function interface (BG text/affine/extended modes, OBJ, windows, blending, master brightness), compared per frame with melonDS in the same process (both fed the same register/VRAM stream).
29. **5.2** Own 3D geometry engine (matrix stacks, lighting, polygon setup, the synchronous read-backs: GXSTAT, position/vector tests, RAM counts), then a software rasteriser matching melonDS's output; later a GPU (WebGPU-class) backend.
30. **5.3** Drop melonDS (and the GPL obligation), then HBlank effects (`Sky_HBlank*` stubs).

---

## 7. Notes and side findings

- **Latent `ptr26` bug.** `ptr26` (pxi7.c:72-75) assumes the program image is at 0x08000000. On x86-64 it is at 0x10000000. It only works because everything sent over PXI lives in gdata/gbss/DS RAM.
- **Truncation in `is_reg`.** `is_reg` (sdk.c:35) and `io_check_addr` truncate pointers to 32 bits; this must be fixed before memory goes above 4 GB. **Fixed (2026-10-08):** `HostIo_Read`/`HostIo_Write` take a pointer-sized address (`IO_ADDR_` is `(__UINTPTR_TYPE__)(p)`, which also removes the `unsigned long` cast that step 2.3 lists), hw.c checks the whole value, sdk.c's `is_reg` and `units` keep `uintptr_t`.
- **`_s32_div_f` disagrees with the DS.** sdk.c:199-200 returns 0 for a zero divisor, while the DS routine and hw.c's emulation give the dividend. **Fixed (2026-10-08)** with `DS_DIV`/`DS_UDIV`.
- **Unreachable on today's host.** The `*(u32 *)0x08000000` cartridge check (autoload_2/unk_02113f04.c:31) and the WRAM arena 0x037f8000 point at unmapped memory and must be unreachable today.
- **Exit paths skip `atexit`.** `ACWW_EXIT_FRAME` exits with `_exit(0)` (hw.c:206), so `atexit` handlers such as the `ACWW_IOHIST` dump (hw.c:937) don't run. Use SIGINT or flush explicitly when measuring. **Fixed (2026-10-08):** `host_exit_dumps()` (`ACWW_IOHIST`, `ACWW_PROFILE`) runs at `ACWW_EXIT_FRAME`, on SIGINT and at exit. `ACWW_IOHIST` now counts the `HostIo_*` calls by register and calling address (there are no trapped accesses to count).
- **The Wi-Fi ID depended on the build (fixed 2026-10-08).** With the same inputs, the save files written by the new-game save script differed between builds in 24 bytes of `PlayerData::wifiUserData` (both copies of the town data, 0x1e20-0x1e69 and 0x17e00-0x17e49), while every screenshot was identical and two runs of one build gave identical files. Both builds reached `DWCi_Acc_CreateTempLoginId` at the same virtual cycle (gdb); the difference is the WFC-ID it copies: `DWCi_AUTH_GetNewWiFiInfo` (src/autoload_2/unk_020fedcc.c) adds the *address* of `OS_GetTick` to its seed (a bug in the original SDK code), and on the host that address moves with every build. It now adds the DS's address (0x01ffa6b4), which gives the DS's value in every build. Similar uses of a function's or variable's host address as a number would be found by the low-4 GB harness only if they truncate; this one didn't.
- **Scratch material** (not in the repository): `tools/portcheck/ (sweep.py, dsaddr.py, divs.py; to be turned into tools/host_portcheck.py)`
  - `sweep.py`, `diag_*.json`: libclang per-target diagnostics;
  - `dsaddr.py`: DS literal classifier;
  - `divs.py`, `divsites.txt`: the 116 division sites;
  - `flagexp.sh`, `fx/*.hash`: flag experiments;
  - `cwarn.txt`: the 246 C cast warnings.

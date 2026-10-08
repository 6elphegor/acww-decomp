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
| A | Game data and memory at fixed DS addresses (gdata 0x02001000, gbss 0x02040000, .dtcm 0x027e0000, main RAM memfd and its mirrors, ITCM, WRAM, palette, VRAM, OAM, I/O pages) | 7 fixed mappings in hw.c, 3 `--section-start` options, `-Ttext-segment`, `MAP_32BIT`, root heap at 0x50000000 | macOS (`__PAGEZERO` covers the low 4 GB), Windows (no fixed low mappings in practice), PIE everywhere | Ordinary data/bss and heap blocks; host arrays for the system work area, DTCM, palette, OAM and VRAM banks. **Step 3.2 done:** only main RAM (gdata/gbss) is still mapped, 2 `--section-start` options left (3.3) |
| B | Pointers kept in 32-bit integers (works only below 4 GB) | C: 121 pointer-to-int + 96 int-to-pointer casts (55 files); C++: 186 int-to-pointer casts (67 files); explicit `(u32)(uptr)` 92 and `(T*)(uptr)` 31; PXI 26-bit pointers; snd7 38 conversions; DMA source/destination registers; resource offsets relocated in place | macOS arm64 and every build with memory above 4 GB | Real pointer types; offsets resolved when used; ARM7 services called directly. A low-4 GB poisoning harness finds the remaining sites on Linux. **Steps 3.0/3.1 done:** the harness (`ACWW_HIGHMEM`) runs every script; 0 C and 0 C++ int/pointer casts left (`--strict-c` clean); PXI, snd7 and DMA with real pointers |
| C | DS addresses used as numbers in the source | Casts of DS constants to pointers (I/O excluded): 229 (system work area/DTCM 160 in 56 files, VRAM 32, palette 18, OAM 5, main RAM 10, WRAM 2, GBA slot 2). Address range checks: about 25 in 8 files. VRAM address tables: 2. I/O register casts: 830 in 121 files (harmless: only used as numbers by `IO_*`) | A, B | Named host objects through macros (`HW_SYSWORK`, `HW_PLTT`, `HW_OAM`, `HostVram_CpuPtr`). **Done (3.2):** 0 casts of DS constants to pointers outside I/O |
| D | Signals and CPU tricks | SIGSEGV I/O emulation and single-stepping (x86 only), interrupt injection under SP (`-mno-red-zone`, irq_entry.S), SIGFPE division emulation, SIGVTALRM hang guard, SIGPROF, `ucontext` gregs | macOS (different ucontext, no x86), Windows (no signals), arm64 (no division trap) | Already almost unused: 0 trapped I/O accesses in 11043 attract-demo frames (`ACWW_IOHIST`); hang guard silent over 25001 play frames; 1 division-by-zero site (`spl_scl_in_out`). Replace with explicit code. **Done 2026-10-08 (phase 1): only debug aids remain, behind `HOST_DEBUG_POSIX`** |
| E | ELF / GNU-ld-only build steps | `ld -r -T` (2 partial links), 291 `--wrap` thunks in x86 asm, `--defsym`, `objcopy --localize-symbols` (76 names), provides.ld (7784 PROVIDE, of which 99 labels + 133 aliases are referenced), `.init_array` per-overlay ranges, `__start_/__stop_` symbols, gap data as ELF inline asm (113 objects), `.set` absolute symbols, `--allow-multiple-definition` | ld64 (Mac), lld-link / ld.bfd for PE (Windows) | Generated C instead of linker features; source-level fixes. **Done except one partial link** (2.4-2.11, 0.2, 3.2): left are `ld -r -T game.ld` (only names the data and bss `gdata`/`gbss`; the DS variable order is gone, 2.8) and the `--section-start`/`-Ttext-segment` options (3.3); `ld -r -T dtcm.ld` gone (3.2) |
| F | GCC-only leniency and flags | Clang (Apple's only compiler) rejects 47 units with 2370 errors (1735 distinct) that GCC accepts. **0 after step 2.1.** GCC-only flags: `-malign-data=abi` (**dropped, 2.8**), `-fpcc-struct-return` (unsupported by clang off i386; changes 39 functions in 17 units; dropped on x86-64, 2.2) | macOS | Fix the declarations (the PROTO_LOCAL backlog); drop the flags after testing them |
| G | LLP64 (Windows) | 831 errors (mostly `IO_ADDR_`'s `(unsigned long)` cast), 8 `__LP64__` checks, `unsigned long` pointer words in modern/ds/overlays.c. **0 beyond the baseline with `-mno-ms-bitfields` after step 2.3.** MS bitfield layout breaks the save `static_assert`s (696 + 54 + others); the MSVC ABI also breaks member-pointer casts (133) and the MWCC_LAYOUT tail-padding trick | Windows | One-line `IO_ADDR_` fix; MinGW-w64 (clang or gcc, Itanium C++ ABI) with `-mno-ms-bitfields`, **not MSVC**. With these, only 11 extra diagnostics remain |
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
| Game initialised data `gdata` | 0x02001000 | `-Wl,--section-start=gdata=0x02001000`; variables where the compiler and linker put them (the DS order is gone: 2.8) | tools/configure_host.py |
| Game bss `gbss` | 0x02040000 | `--section-start=gbss=0x02040000` (x86-64: 0x11bbf0 bytes, ends at 0x0215bbf0) | configure_host.py:66; `readelf -S build/host64_usa/acww` |
| DTCM module variables `.dtcm` | 0x027e0000 (16 KB) | **3.2:** ordinary variables; DTCM is a 16 KB host block (`gHostDtcm`, include/host_mem.h) | was configure_host.py:160-167, :65 |
| Main RAM, 4 MB, mirrored to 0x02ffffff | 0x02000000 | `memfd_create` + 5 `MAP_FIXED` mappings; gdata/gbss copied into it via `__stop_gdata`, `__start_gbss`, `__stop_gbss`. **3.2:** one mapping, no mirrors (`ACWW_HIGHMEM=2`: none); the arena past the data is a host block (`gHostMainRam`, DS 0x02200000-0x023fffff) | modern/host/hw.c `map_main_ram` |
| ITCM | 0x01ff8000 | **3.2:** a 32 KB host block (`gHostItcm`: only an arena on the host) | modern/host/mem.c |
| Shared WRAM | 0x03000000 | **3.2:** not mapped (unused); the empty WRAM arena (0x037f8000) is `gHostWramArena` | mem.c |
| Palette, OAM | 0x05000000, 0x07000000 | **3.2:** host arrays `gHostPltt`, `gHostOam` (`HW_PLTT`, `HW_OAM`) | mem.c |
| VRAM windows | 0x06000000-0x068a3fff | **3.2:** 9 banks and 5 CPU window arrays (`HostVram_CpuPtr`), kept in step on every VRAMCNT change and before the renderer reads the banks | modern/host/vram.c |
| I/O pages | 0x04000000, 0x04001000, 0x04100000 | memfd mapped twice (`PROT_NONE` for the game, read/write for the runtime) | hw.c:885-892, :902-904 |
| x86-64 program image | 0x10000000 | `-Wl,-Ttext-segment=0x10000000`, `-no-pie` | configure_host.py:72 |
| x86-64 root heap | 0x50000000 (8 MB); above 4 GB (0x5a0000000) with `ACWW_HIGHMEM` | `host_root_heap_region` | modern/host/main.c |
| x86-64 thread stacks | below 4 GB (`mmap(... MAP_32BIT)`); above 4 GB (0x6b0000000 up) with `ACWW_HIGHMEM` | `host_stack_alloc` | modern/host/os.c |
| Arena constants | 0x0229bdc0 etc. | `.set` absolute symbols `SDK_MAIN_ARENA_LO`, `SDK_SECTION_ARENA_*`, `OVERLAY_n_ID` | main.c:58-68 (68 references in 15 files) |
| ROM header / system work area writes | 0x027ffe00, 0x027ffc00, 0x027ffc40, 0x027fff8c, 0x027ffde8, 0x027fffaa | **3.2:** the host runtime writes `gHostSysWork`'s members (`HostSysWork`, include/host_mem.h) | main.c, pxi7.c, frontend.c, os.c |

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
| Overlay shared-address thunks | **Resolved (2.10)**: 163 typed C dispatchers (`Shared_<name>`, include/host_shared_calls.h), the rest direct calls; the 275 data references reviewed | – | – | – |
| provides.ld | **Resolved (2.11)**: deleted. The 126 referenced aliases are fixed in the sources, the 91 referenced labels are C pointers (include/host_labels.h) | – | – | – |

### 1.3 Pointers kept in 32 bits

These are the things that made "the game's memory anywhere" hard (the audit's counts; **steps 3.0 and 3.1 removed them, see
there**). They worked on x86-64 only because everything was kept below 4 GB.

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
| Stack switching for game threads | coro_switch.S (i386, x86-64 System V, x86-64 Windows, arm64 incl. Apple `_` prefix), coro.c | Yes | ~~Windows x64 missing~~ **written (4.3)**: saves rdi, rsi, xmm6-15 too and switches the TIB's stack bounds; tested on Linux through `ms_abi` (`coro-win64-test`), not yet on Windows | The arm64 code exists but has never run (4.4) |
| `ucontext` | hw.c:21, :31-43, :541-553 | Only in the handlers above | glibc register names | Goes away with the handlers |
| `-fno-pie`/`-no-pie`, `-Ttext-segment`, `--section-start` | configure_host.py:50, :65-66, :70-72, :78-82 | Yes | macOS has PIE only; Windows uses ASLR | PIE after phase 3 |

---

## 3. ELF / GNU toolchain features the build relies on

| Feature | Where | What for | Replacement |
|---|---|---|---|
| ~~`ld -r -T dtcm.ld`~~ | – | **Gone (3.2)**: DTCM is a host block (`gHostDtcm`), its variables ordinary variables | – |
| ~~`ld -r -T order.ld` with `-fdata-sections` and `-malign-data=abi`~~ | – | **Gone (2.8)**: the overruns fixed (guard variant, `configure_host.py --guards`), no DS order; the partial link's `game.ld` only names the sections `gdata`/`gbss` (goes with 3.3) | – |
| ~~`.init_array` → `host_ovinit` ranges~~ | – | **Gone (2.9)**: each overlay unit lists its variables (`HOST_OVERLAY_VARS`), explicit `StaticInit_<unit>`; modern/gen/overlay_table.c | – |
| ~~`--wrap` (291) and x86 asm thunks~~ | – | **Gone (2.10)**: typed C dispatchers, call sites renamed | – |
| ~~`--defsym=_Znwj=_Znwm`, `_Znaj=_Znam`~~ | – | **Gone (2.5)**: the global operators are the host's (modern/host/newdelete.cpp), the game allocates by name | – |
| ~~`objcopy --localize-symbols`~~ (77/76 names) | – | **Gone (2.4)**: `include/host_libc_rename.h` (forced include) renames the game's libc names to `ds_*` | – |
| ~~`PROVIDE` (provides.ld, provides64.ld via host_relayout.py with pyelftools on DWARF)~~ | – | **Gone (2.11)**: the aliases fixed in the sources, the labels C pointers; the build reads no DWARF | – |
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
  - ~~frontend.c (`shm_open`, `fork`, `execl` of the 64-bit SDL2 viewer) exists only because the i386 game process can't load the 64-bit system SDL.~~ **4.1:** the 64-bit builds have SDL2 in their own process (frontend_sdl.c); the viewer link (frontend_viewer.c) is built for i386 only.
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
| ~~`-malign-data=abi`~~ | **Dropped (2.8)**, oracle identical | – | – | – |
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
| GNU extensions in the runtime | ~~`typeof`, `localtime_r`, `clock_nanosleep`, `shm_open`/`fork` in the 64-bit builds, `mmap` of the ROM, `execinfo`~~ (4.2: plat.h); left: `memfd_create`, `MAP_FIXED_NOREPLACE`, `MAP_32BIT` (Linux only: the memory setup, 3.3) | – | – | Platform layer (`modern/host/plat_posix.c`, `plat_win32.c`, `plat_common.c`) or SDL |

---

## 6. The plan, in order

Each step can be done and checked on this Linux x86-64 machine. "Oracle" means `oracle.sh <build> quick|play`. The x86-64 build must stay identical to its own pre-change captures, and the i386 build stays identical while it is kept as the reference.

Two cheap tools keep the work honest before any Mac or Windows hardware exists:
- **libclang target sweep.** This audit's `sweep.py`, made into `tools/host_portcheck.py`. It parses all 865 units for arm64-apple-macos, x86_64-w64-windows-gnu (`-mno-ms-bitfields`) and x86_64-linux in about a minute, and reports only the diagnostics beyond the baseline.
- **Low-4 GB poisoning harness.** Introduced in step 3.0.

### Phase 0: guard rails (1-2 days)
1. **0.1** Add `tools/host_portcheck.py` (the sweep). Today it reports clang-only errors in 47 units, 2568 extra diagnostics on win64-gnu and 0 on macos-arm64. Track the counts.
   **Done** (`tools/host_portcheck.py`; usage in its docstring and docs/host.md). It parses the 865 game units plus modern/ds (867) for x86_64-linux (the baseline: what clang rejects) and reports per target only the diagnostics beyond it; default targets macos-arm64 and win64-gnu-nomsbf (also win64-gnu, win64-msvc, linux-arm64, linux32). Re-measured at 0a7496cd: baseline 1638 clang errors in 45 units, macos-arm64 0 beyond, win64-gnu-nomsbf 1550 beyond (838 errors, 712 warnings), win64-gnu 2602 beyond. After 2.1 and 2.3: baseline **0**, macos-arm64 **0**, win64-gnu-nomsbf **0**; win64-gnu (MS bitfields, not a target) 1055 errors, all save-layout `static_assert`s. Exit status 0 only when everything is 0, so it can gate CI.
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
   **Source part done**: portcheck baseline 1638 errors / 45 units → **0** (each unit's own per-namespace declarations replaced by the definitions' types, call sites and data tables retyped; per-object code comparison against the previous tree, i386 oracle quick and play identical; x86-64 play and quick sound identical to the same tree's pre-change run, the two quick screenshots differ because of the `Insect_TickFrame` fix below - with only that fix undone the x86-64 run is identical bit for bit). Real bugs found on the way (mostly 64-bit only: DS offsets into `Insect` (its frame counter: the attract demo's insects animate differently on x86-64 now), `BlendAnimModel`, `Actor::position`, `MapBlock` stride, `FtrBed` rows, a pointer's upper half incremented in `gpiProfileListAdd`; Wi-Fi tables reached through PROVIDE labels past their object; lost arguments in the server browser) are fixed in separate commits. `configure_host.py --cc clang` exists (separate build `build_host64_clang.ninja`, `build/host64_clang_usa`; it drops `-malign-data=abi` and, on x86-64, `-fpcc-struct-return`, and uses `-fstandalone-debug`). **Not done:** the LLVM toolchain download into `~/acww/toolchains` (needs the user's permission in this environment), so the clang build has not been compiled or run against the oracle yet.
9. **2.2** Drop `-fpcc-struct-return` on x86-64 (39 functions / 17 units change); oracle. `-malign-data=abi` is dropped in step 2.8.
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

    **Done.** `IO_ADDR_` is `(__UINTPTR_TYPE__)(p)` (first `(unsigned int)(__UINTPTR_TYPE__)(p)`, then made pointer-sized with the `is_reg` fix, section 7; io_access.h stays self-contained), `Modern_SharedResolve` reads `uptr` words, the 8 size checks in ov103 use `HOST64`, the overlay header's `.sinit` words and `__fill_mem`'s alignment use `uptr`. (The other `(unsigned long)` casts were already gone; `TA_AFC` in ov003 is an offset difference, fine.) Portcheck win64-gnu-nomsbf: 1550 beyond the baseline (838 errors, 712 warnings) → **0**. Code is unchanged on Linux (same types there; oracle identical).
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
    these must not be). They are now game variables in `gbss` (then in DS order, order.ld; since 2.8 where the linker puts them), not host bss. Stale DS
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

    **Done (2026-10-08).** The guard variant: `configure_host.py --guards [--arch x86_64]` (build_host[64]_guards.ninja,
    build/host[64]_guards_<v>). It links the game once as usual with a map (`ld -r -Map`), then `tools/host_guards.py`
    writes a linker script that places every input section of gdata, .rodata and gbss where that link put it, each
    followed by 64 guard bytes, and the guards' table (`{guard, kind, size, name, object}`); merged strings and
    constants get none. `modern/host/guards.c` fills the guards after the memory is mapped (`ACWW_GUARDS_FILL`, default
    0xa5; read-only ones through `mprotect`), and with `ACWW_GUARDS=1` compares them every frame and reports a changed
    one (variable, object, frame, the first changed byte's address for a gdb hardware watchpoint), then restores it.
    `--only LO-HI` gives only some variables guards (bisecting a layout dependence). 9063 guards on i386 in the DS
    order (4665 data, 2822 read-only, 1576 bss), 9070 after the drop and the merge of 3.2 (DTCM's variables are
    ordinary ones now; the same on x86-64). The variant's gbss starts at 0x02080000 (its gdata
    is larger); `host_guards_init` checks that gbss still ends below the main arena.

    Found and fixed (each a separate commit; the writers from gdb watchpoints):
    - **Gfx2d state** (main, written past the end on every host): sGfx2dBgScroll, sGfx2dSubBg3Mtx, sGfx2dDispCtrl,
      sGfx2dWindowBlend are one object on the DS; `Gfx2d_Init` cleared the sub BG3 affine block (0x20 bytes) through
      the 0x10-byte sGfx2dSubBg3Mtx and window 0's rectangle across sGfx2dDispCtrl's end. Now one `Gfx2dState` with
      typed members (`Gfx2dOffset`, `Gfx2dAffine`, `Gfx2dWindowRect`).
    - **ov069's topic table copy** (`VillagerTalkTopics_CopyTables`, every host; 64-bit also lost data): the 15 tables
      were copied with DS byte counts (24 bytes per entry of three member function pointers; 48 on x86-64, so every
      table got only its first half), and the request topics A and B (26 + 47 entries) as one block into A, running
      into B. Now the tables' sizes with `static_assert`s, A and B apart.
    - **Sound archive objects** (64-bit only): data_021f5a1c/data_021f5aac were byte arrays sized by adding the
      members' sizes, 4 bytes short of the struct on x86-64 (alignment of the FSFile member): the `info` pointer was
      stored past the end. Now `NNSSndArc` (include/nnsys/snd_arc.h), also the type of unk_0210b448.c's and
      unk_0210b1b0.c's `Arc`.
    - **Reads past an end** (the guards don't see reads; these showed up as differences once the DS order was gone,
      and were found by bisecting the guard variant with `--only` and by gdb watchpoints):
      - `TvSound_GetMaxSize` looped over sTvSoundSizes until the address of data_020c6190, the next variable in the
        DS layout: the TV sound heap got another size, and the new-game save script's sound changed from frame ~27870
        (the guard after sTvSoundSizes alone changed it; 6 rounds of 4 runs). It uses the table's bounds now.
      - The house rooms' exits: `sRoomSceneEntryList = {&data_ov004_0225893c, 3}`, but the three SceneWarp entries
        were three variables (symbols.txt names each) with sRoomCommonProfileCount between them. Leaving the house in
        the continue run read exit 2 from whatever followed: a fade type of 39, an index past
        sTransitionTypeTable, a jump into the middle of `TownEval_EvaluateAcre` at frame 4290. Now
        `SceneWarp sRoomSceneEntries[3]`; the 32 other scene warp lists were checked: arrays of their counts.

    Checks (after merging modern 7291e665, steps 3.0-3.2). The guard variant over quick, play, the town script, the
    save script and the continue run (i386) and quick, play, town (x86-64) reports **0 overruns** (before the fixes:
    3 variables on i386, 4 on x86-64); with fills 0xa5 and 0x5a the long scripts give the same output as modern's
    build, and quick and play the same with 0xa5, 0x00, 0x5a and 0xff. With the drop (no order.ld ordering, no
    `-fdata-sections`, no `-malign-data=abi`; tools/host_order.py deleted; the partial link keeps a 3-line `game.ld`
    that names `gdata`/`gbss` until 3.3): oracle quick and play identical (i386 with the captures, x86-64 with
    modern's own run), the save, continue and town scripts identical to modern's build (screenshots, sound, save
    files; i386, and town on x86-64), x86-64 also with `ACWW_HIGHMEM=1` and `=2`. Before the two read fixes the
    unordered build differed in the save script's sound and crashed in the continue run: the layout changed
    behaviour only through these reads. Two things seen on the way, not layout bugs: the x86-64 guard variant hung
    once in the attract demo because the per-frame check restored a guard the 4-byte-short sound archive had stored
    its pointer in (gone with that fix); and it crashed in `HappyRoom_Evaluate` in the town script - the room score
    sources' struct-return bug fixed on modern in 549c0c7c (stack layout decides whether it shows).
16. **2.9** Overlay reset without the linker:
    - generate `overlay_table.c` with each overlay's variables (`{&var, sizeof var}`, from config symbols.txt and the overlay units), the pristine copy taken per variable;
    - make the 98 overlay constructors explicit (a generated `OvNNN_StaticInit()` per overlay calling the units' init functions, or the objects made constant-initialised).

    Check: `ACWW_OVLOG` output (bytes reset, constructors run) is the same as today; oracle.

    **Done (2026-10-08).** Re-measured: 91 overlay units (in 54 overlays) had a compiler-generated static initialiser
    (`.init_array`), in both builds; 83 function-local statics of overlay units (33 constant data, 50 bss, 57 guard
    variables) were data no table could name. Now:
    - Every overlay unit ends with the list of its variables (`HOST_OVERLAY_VARS(<unit>) { HOST_OVERLAY_VAR(x), ... }`,
      include/host_overlay_vars.h): 2961 variables in 332 units, generated by `tools/host_overlay_vars.py` from both
      builds' objects (names qualified by libclang where a unit defines them in a namespace; `--check` lists what is
      out of date, function-local statics and unexpected static initialisers). modern/gen/overlay_table.c (generated,
      committed) collects the lists and the units' `StaticInit_<unit>` per overlay. `modern/host/overlay.c` copies the
      variables in `HostOverlay_Init()`, called first in `main()` (no constructor priority), restores them when the
      overlay is loaded and runs its StaticInits in link order. order.ld kept only the variable order (gone in 2.8): no
      `host_ovNNN_*` symbols, no `host_ovinit`.
    - The initialisers became constant data where they are constant: constexpr constructors (`DebugColor`,
      `VecFx32Ctor`/`VecFx32Copy`, `FxVec3`, `SceneWarp`, `ItemId(u16)` and local value types), trivial destructors
      where the DS's were empty (`FxVec3`, `Vec3Z`, `SceneWarp`), the spawn lists' counts as constants
      (`ROOM_COMMON_PROFILE_COUNT`, `FIELD_SCENE_PROFILE_COUNT`: on the DS copied from ov004's / ov003's variable),
      main's const values written as literals. That leaves 15 `StaticInit_<unit>` functions: member-function-pointer
      tables (cast between types or copied from other variables: `HOST_STATIC_INIT_ARRAY`), the museum's information
      points (`MuseumInfoPoint_InitFromDef`, which uses the divider: virtual time passes at the load as before),
      `gSceneBlockMap` read at the load, ov069's copy of its tables into main's, and the objects of classes with
      default constructors (`HOST_STATIC_CONSTRUCT`: these are constructed at start-up too - their constructors only
      set their members - and again at every load).
    - The function-local statics moved out of their functions (`<Class>_<function>_<name>`); the 37 initialised at
      run time keep their lazy initialisation with an explicit guard variable that is reset with the overlay.
    - `ACWW_OVLOG`: the same bytes reset at every load of the quick and play scripts (0 changed, as before);
      constructors 1/1/4/8/1 for overlays 69/68/3/4/9 instead of 1/5/13/22/1, 0 instead of 1 for 6 and 44 (constant
      data now). Oracle identical (32-bit with the captures, 64-bit with its own pre-change run).
17. **2.10** Shared-address calls:
    - typed C dispatchers (`Shared_<Name>(args)` → `Modern_SharedResolve`) generated from the proto headers;
    - rename the call sites at the source;
    - delete `--wrap` and the asm;
    - review the 275 data references at shared overlay addresses.

    **Done (2026-10-08).** `tools/host_shared_calls.py` (the overlays' symbols.txt and both builds' objects) writes
    include/host_shared_calls.h, modern/gen/shared_calls.c (the dispatchers) and modern/gen/shared_table.c (each
    dispatcher's candidates by symbol: plain C declarations of the names, also of C++ ones - the mangled name is a C
    identifier and gets the same prefix on Mach-O); `--rename` renamed the references outside the named function's
    overlay (575 in 52 units, libclang; one inline constructor in room/RoomObjTexAuto.h by hand). Of the 291 thunks:
    - 163 C functions with another function at their address got a dispatcher. Its parameters are pointers as
      `void *` and integers as they are, as many as the callers pass: main's player actions call ov003's functions
      with the arguments of the ov004 functions at the same addresses (`FishShadow_RunAi(this, 0, 6, -1)` for a
      one-parameter function); 13 calls whose results are typed pointers got casts. A candidate must be defined in
      both builds (a non-virtual thunk's name differs: `_ZThn236_` / `_ZThn328_`).
    - 62 had no other function defined at their address (the thunk always returned the named one) and 66 are member
      functions, constructors and destructors: called on an object of their class, whose code is in the named
      overlay, which is therefore loaded. They are direct calls. Logged over the play script before the change: every
      resolution was the named function (and once, a constructor at start-up, no overlay loaded: the named one too).
    - The 275 data references (193 symbols, `--report`): main's tables of the overlays' process profiles (145) and
      of the scene and menu overlays' records (44), used once that overlay is loaded; main's read of ov004's
      `sHouseRoachActiveCount`, behind `Scene_InHouseRoom()`; the room overlays' references to ov004's
      `sRoomCommonProfiles` / `sRoomSceneEntryList` (loaded with ov004); one ov009 vtable entry read by ov003 (loaded
      together). Each means the named overlay's data: no dispatch needed.
    `Modern_SharedResolve` takes a `HostSharedCall`; configure_host.py has no shared rule and no `--wrap`; modern_shared.py
    keeps only the DS (ARM) thunks for configure_modern.py. Oracle identical.
18. **2.11** provides.ld: fix the 133 alias users' declarations; turn the 99 interior labels into committed C accessors (one last run of host_relayout.py). The build no longer reads DWARF and needs no linker script.

    **Done (2026-10-08).** Re-measured after 2.9: 126 aliases and 91 labels referenced (`nm -u` of both builds'
    game_all.o ∩ provides.ld; 8 labels fewer since the 2.1 merge). modern/gen/provides.ld, provides64.ld, the
    relayout step and tools/host_provides.py are gone.
    - Aliases (126 → 0): members declared only, whose symbols symbols.txt gave to other functions, have bodies:
      constructors and destructors calling the C functions (`AnimSlotRef() { AnimSlotRef_Init(this); }`, ~45
      classes, the same signatures as the definitions, ABI unchanged: user-provided as before), methods calling the
      methods they were labels of (`BgmRequest() { initEmpty(); }`, `~NpcLookAt() { clearTargetActor(); }`);
      `CollisionTriangleX` is a typedef of `CollisionTriangle`; `CollisionCylinderX`'s two clip functions forward to
      `CollisionCylinder`'s; `TrendScores::pickTop` / `resetAndHalve` are the functions symbols.txt filed under
      `VillagerPlan`; the `VillagerActor` partner methods and `SkySprite`'s, `SkySprites`', `WeatherManager`'s members
      are defined in their units; `ItemPickSpec_Destruct(p)` calls are `p->~ItemPickSpec()`; empty DS destructors
      are `{}`.
    - Labels (91 → C): `tools/host_labels.py` (one run, while the labels were still provided) put a pointer per label
      at the end of the base variable's unit (`HOST_LABEL_DEFINE(gSavePlayers, (char *)&gSaveData.players[0])`, 14
      units): a member path from the 32-bit DWARF where the base has a type, so the 7 labels that host_relayout.py
      moved on 64-bit (`gSndBgmHandle`, `sHouseVisitTsuTopicTable` + 0x30, ...) are right by construction, base +
      offset where it is bytes; include/host_labels.h declares them. The 257 declarations of labels (111 files) are
      macros with the unit's own type: `#define gSavePlayers HOST_LABEL(u8 (*)[], gSavePlayers)`.
    Oracle identical; host_strict_errors 0.

After phase 2 the game links with a plain `cc *.o`: no `ld -r`, linker script, `--wrap`, `objcopy` or PROVIDE.
**Status (2026-10-08):** no `--wrap`, `objcopy`, PROVIDE, `--defsym` or DWARF reading. Left: the two partial links
(`ld -r -T game.ld`, which only names the game's data and bss `gdata`/`gbss` since 2.8, goes with step 3.3;
`ld -r -T dtcm.ld`, gone in step 3.2) and the final link's `--section-start=gdata/gbss` and `-Ttext-segment`
(step 3.3).

### Phase 3: memory anywhere (Linux x86-64 above 4 GB, 3-6 weeks)
19. **3.0** Low-4 GB poisoning harness (`ACWW_HIGHMEM=1` on x86-64):
    - root heap via a plain `mmap` above 4 GB;
    - stacks without `MAP_32BIT`;
    - every *unused* range below 4 GB reserved `PROT_NONE` (an emulation of `__PAGEZERO`), keeping only the DS mappings still in use.

    A truncated pointer then faults at a low address with a backtrace. Run quick, play, the town script and save/continue.

    **Done (2026-10-08).** `ACWW_HIGHMEM=1` (x86-64 Linux; modern/host/hw.c `highmem_poison`, called from main.c's
    `early_init` once the DS mappings and the VRAM windows exist): every gap below 4 GB in /proc/self/maps is
    reserved `PROT_NONE | MAP_NORESERVE` (6-7 ranges, 3934 of the 4095 MB). What stays: the DS mappings (ITCM, main
    RAM and its mirrors with DTCM, WRAM, palette, the VRAM windows, OAM), the program image at 0x10000000 and the C
    library's first brk heap (it can't grow any more: malloc maps above 4 GB then). The root heap is an 8 MB block at
    0x5a0000000 and the thread stacks are mapped from 0x6b0000000 up (`host_highmem_alloc`, `MAP_FIXED_NOREPLACE`):
    the low words of their addresses (0xa..., 0xb...) lie in poisoned space, so a pointer cut to 32 bits faults
    (sign-extended: a non-canonical address, also a fault). The crash report (debug_posix.c) is installed again after
    `melon_init`: melonDS's JIT (compiled in, unused) installs a SIGSEGV handler of its own, and before this a
    64-bit crash ended without a report. Scripts run (all without a fault): `oracle.sh quick-raw` and `play-raw`;
    the x86-64 town script (docs/host.md: A every 60 frames 2400-26500, Start 7650-21050, the Confirm touch every
    600 frames 7630-21050, B 26520-27000, Down 27100-27500, then Right 28200, Down 28700, Left 29200, Up 29700,
    Right 30200, Down 30900, 400-600 frames each; screenshots to frame 32000: out of the town hall and around
    town); the save/continue script (i386 timing; the x86-64 build doesn't reach the save with it) and the continue
    run from a save the i386 build wrote (wakes in the house, saves its start-of-session state, out in front of the
    house at frame 8000). The pictures and sound are the same with and without the harness (no behaviour depends
    on the addresses).
20. **3.1** Fix the pointer-in-32-bit sites:
    - the 246 C warnings, the 186 C++ int-to-pointer casts, and the 92 + 31 explicit `uptr` round trips (each one an integer that should be a pointer, or an offset);
    - in-place resource relocation (NFTR unpack, SndArc `e->ptr`, ...): resolve the offset when used;
    - PXI: call pxi7/snd7 directly with pointers (the ARM7 is the same process): a host mailbox carries `void *` instead of 26-bit words; snd7 `dsptr` becomes `void *`, and `readable()` checks the real buffer bounds;
    - DMA: implement the SDK DMA entry points (`MI_Dma*`, GX/GXS loads) in sdk.c with real pointers, as the CPU copies already are; register DMA only for the remaining GX FIFO/HBlank cases with resolvable addresses.

    Check: the harness runs every script without a fault, the oracle is identical, and `--strict-c` is clean.

    **Done (2026-10-08).** Re-measured first (after phases 1 and 2): `--strict-c` 220 distinct sites (105 pointer to
    int, 115 int to pointer) in 54 files; libclang (x86_64-linux, every unit) 269 int/pointer cast warnings, 34 of
    them C++ int-to-pointer casts in 4 files (the rest were fixed during phase 2); explicit round trips of a pointer
    through a 32-bit integer by grep: 15 `(u32)(uptr)`-style and 15 `(T *)(uptr)`. Now: `--strict-c` **0**,
    libclang casts **0** (C and C++), `tools/host_strict_errors.sh` 0, `tools/host_portcheck.py` 0 on every target.
    The remaining `(u32)(uptr)` / `(T *)(uptr)` are DS addresses used as numbers (VRAM, the system work area's arena
    bounds and thread-info pointer, overlay load addresses, I/O register addresses: step 3.2), ids made from
    addresses (an echo id, an aid bit) and the download-play / wireless code (DS-layout records; not reached on the
    host, which has no WM service). What was done:
    - **NNS heaps** (expheap/frmheap, 11 units with copies of the same structures): `Region`, `HeapHead.start/end`,
      `FrmHead/FrmState.head/tail` are `uptr`; the creation, free and resize functions take `void *` (as the SDK's)
      instead of u32 - the callers declared them with pointers, so a 64-bit host passed whole pointers and the
      definitions used the low halves. The sound heap the same (`NNS_SndHeapCreate(void *, u32)`).
    - **In-place relocation resolved when used.** The sound archive's FAT keeps a loaded file's address in the
      entry's pointer word and the reserved word after it (8 bytes on 64-bit hosts: `FatEnt_Ptr`). The NFTR font
      links (`NNSi_G2dUnpackNFT`), a sound bank's wave archive links and a wave archive's banks
      (`SND_AssignWaveArc` ...), a wave loaded on its own (`SND_SetWaveDataAddress`) and two DS-layout callback slots
      of the wireless code keep their 32-bit file slots: they hold a `ptr32` (include/host_ptr32.h, modern/host/
      ptr32.c): the pointer itself while it fits (always on 32-bit hosts and for DS memory: the i386 build is
      unchanged), else a handle into a host table, resolved by the readers (`HostPtr32_Get`; snd7's `dsptr`
      helpers are gone). The FS tables loaded into memory (`FS_LoadArchiveTables`) are offsets into `load_mem`; a
      memory archive's base is pointer-sized and its positions are signed offsets (the NARC's tables lie before the
      image).
    - **PXI.** `ptr26` is gone. A message that carries an address hands the pointer to the ARM7 side first
      (`PXI_PointerWord(tag, p)`, include/nitro/pxi_ptr.h; pxi7.c `HostPxi_PutPointer` / `take_pointer`) and is then
      sent unchanged, so the register traffic - and virtual time - is the DS's: the sound command list (snd7_receive
      takes the list), the card request block (`CARDCmd`, include/sys/CardCmd.h, now shared by the ARM9 units and
      pxi7.c, buffers pointer-sized), the NVRAM buffer, the WM request.
    - **snd7.** The SND commands' arguments are pointer-sized on both sides (`SndCommand.arg`, `PushCommand_impl`,
      `SND_PrepareSeq` / `SND_SetupChannelPcm` / `SND_SetupCapture` / the invalidations / `SND_ReadDriverInfo`);
      no 26-bit masks (`& 0x7fffffc`); `SOUNDxSAD` and the capture destinations are `uintptr_t`; a channel reads its
      samples only within its own buffer (`SOUNDxPNT + SOUNDxLEN` words; the ADPCM header at least) and a capture
      writes only within `SNDCAPxLEN` words, instead of "anywhere in 0x02000000-0x03000000". The stream library's
      channel buffers (`NNSSndStrmBufAddr`) and the capture library's buffers are pointers.
    - **DMA.** The functions that set a channel (`MIi_DmaSetParams` and its three variants) take `uptr` addresses
      and give them whole to the DMA model first (`HostDma_Addresses`, include/nitro/dma_host.h); hw.c's `dma_run`
      uses them while the registers still hold their low words (a register written otherwise - an I/O address, 0 -
      is taken as it is). The entry points (`MI_DmaCopy32/16`, `MI_DmaFill32`, the async ones,
      `MI_SendGXCommandAsyncFast`, `MIi_CardDmaCopy32`, the GX command DMA state `MIGXDmaParams`, now one header)
      take pointer-sized addresses. This keeps the DMA register sequence (the DS's), unlike a CPU copy, and so the
      i386 oracle.
    - **Declarations that disagreed with their definitions across a pointer and an integer** (tools/host_decls.py;
      a 64-bit host passes the whole register and the other side uses half of it): fixed where a pointer flowed -
      RTC dates (`RTC_GetDate(void *)`...), the thread parameter (`OS_SetThreadParameter`: the per-thread current
      heap, cut at the first thread switch under the harness), `OS_InitContext` / `OSContext.r[]` (a thread's
      argument), `OSi_EnterTimerCallback`, the backup reads/writes (`Backup_Read(..., void *)`), `CARDi_ReadRom`,
      the driver info reads, `SND_RecvCommandReply`, `NookShop_InitNew` (the shop through an `int`), `WfcUtil_Run`
      (the WFC work area through a u32), the G3D render object callbacks, `Character_FindInteractionTarget` (a
      pointer result read as `BOOL`), a view of `gSceneBlockMap` as u32 (ov068) and the crash screen's view of the
      thread info. 179 mismatching declarations of that kind are left (94 functions; 112 of them in the network and
      wireless code); outside it, the calls through them pass constants (0, a DS register address) or ids.
    - **Real 64-bit bugs found on the way**: the SND alarm records (`SlotEnt`) had the DS stride in the u32 view
      (12 bytes, 24 in the definition), so the ARM9 side registered alarm callbacks where the PXI handler didn't
      look and the stream's refills never ran: from ~24 s of the attract demo (the title music) the 64-bit build
      played a stuck buffer; now its sound follows the i386 reference (the RMS level per 2 s matches; the samples
      part at 24.6 s with the build's usual timing drift). The capture messages (`CapMsg[8]`, 160 bytes on the DS,
      192 needed) ran into the capture thread's `OSThread`, and the capture message array (`OSMessage[8]` as
      `u32[8]`) into the capture state. The FS memory archive read from `base + (u32)offset` with negative offsets
      (the NNS file system's mount of a NARC). NNS fonts on 64-bit read their glyph/width/map links as 8-byte
      pointers from 4-byte file slots (only the Wi-Fi menus use them). `Insect_NetClaim` read through the packed id
      as an address when neither flag was set (the DS read low memory there; now "no insect"). The room score
      sources (`VillagerRoomScoreSource` / `HouseRoomScoreSource`, src/main/unk_020594dc.cpp: the happy-room
      evaluation when a new town is set up and when the game saves) had their struct-returning virtuals written in
      ARM's shape (the result slot as `this`; i386 with `-fpcc-struct-return` shares it): on x86-64 they wrote the
      item into the caller's object - its vtable pointer. Whether the next virtual call then crashed depended on
      the vtable's address: after the merge of steps 2.9-2.11 it did, at frame 12228 of the town script and 4344
      of the continue run, in both 64-bit builds of refs/heads/modern d0eb4763 (with and without the harness). Now
      real `RoomSurfaceItem` results; the i386 save/continue run is unchanged (pictures and save file).
    - Check: the i386 oracle (quick: pictures and sound; play) identical after every step; the 64-bit build's quick,
      play and town runs identical to the same tree without these changes (refs/heads/modern 1700271b), except the
      quick sound from 24.34 s - and that is the alarm fix alone: with only `SlotEnt` put back, quick (pictures and
      sound) is identical to modern's; `--strict-c`, `host_strict_errors.sh`, `host_portcheck.py` 0.
21. **3.2** System work area, DTCM, palette, OAM, VRAM and arenas become host objects:
    - a rewrite tool turns the 160 system-work/DTCM casts into `HW_SYSWORK(...)` over a `HostSysWork` block, and the 18 + 5 palette/OAM casts into `HW_PLTT`/`HW_OAM`;
    - VRAM: 32 casts plus 2 tables through `HostVram_CpuPtr(dsaddr)`. This replaces vram.c's mmap aliasing: each bank appears in at most one CPU window at a time, so a lookup suffices. Assert that no pointer is kept across a VRAMCNT change;
    - DTCM is a 16 KB host array (the `.dtcm` partial link goes away);
    - ITCM, WRAM and the main RAM arenas are host blocks (unk_02114724.c, unk_02114810.c);
    - the about 25 range checks become checks against the host blocks;
    - the host runtime stops writing DS addresses (main.c:91-93, pxi7.c:159/282/396, frontend.c:86, os.c:196);
    - the debug tools (`RAMHASH`, `RAMDUMP`, `HEAPCHECK`, `VRAMDUMP`) walk the host objects instead.

    Check: the harness with *all* DS mappings removed; oracle.

    **Done (2026-10-08).** Re-measured first (refs/heads/modern 549c0c7c, `tools/portcheck/dsaddr.py`): casts of DS
    constants to pointers outside I/O 207 in 70 files - system work area/DTCM 161 (57 files), palette 18, OAM 5, VRAM
    8, main RAM 10 (7 `OSi_ReferSymbol` no-ops, 3 arena bounds), WRAM 2, GBA slot 2 - plus VRAM addresses made
    pointers at run time (24 in `G2_GetBG*Ptr` / `G2S_*`, 6 from the LCDC tables in `GX_LoadTex` / `GX_LoadTexPltt`),
    4 palette writes through a `REG16(0x05000000)` macro and 1 computed palette address; DS addresses used by the host
    runtime: main.c 3, pxi7.c 4, frontend.c 1, os.c 1, sdk.c 1 (`OS_GetDTCMAddress`), melon.cpp 2, hw.c's debug dumps
    5 and the heap check. Now **0** casts of DS constants to pointers outside I/O, and the runtime writes no DS address
    except main RAM's mapping itself:
    - **The host objects** (include/host_mem.h, modern/host/mem.c): `HostSysWork gHostSysWork` (0x027ff000-0x027fffff:
      the SDK's members by name - the shared arena, the ROM headers, boot info, vblank count, NVRAM user info, arena
      bounds, RTC, PXI handle checkers, thread info, buttons, touch panel, the lock words; the DS's layout on 32-bit
      hosts, checked by `_Static_assert`s; the arena bounds, the main thread info and the exception vector are pointers,
      8 bytes on 64-bit hosts), `gHostDtcm[0x4000]`, `gHostItcm[0x8000]`, `gHostPltt`/`gHostOam` (0x800 each),
      `gHostMainRam` (DS 0x02200000-0x023fffff: the main arena past the program's data, `HostMainRam_Ptr(dsaddr)`) and
      the empty WRAM arena. Each block is aligned so that its addresses keep the DS's low bits.
    - **The rewrite**: `tools/host_hwaddr_rewrite.py` (`--check` lists what is left) turned 182 literal casts in 70
      files into `HW_SYSWORK(T, member)` / `HW_SYSWORK_AT(T, member, offset)`, `(T *)(HW_DTCM_BLOCK + o)`,
      `(T *)(HW_PLTT + o)`, `(T *)(HW_OAM + o)`, `HostVram_CpuPtr(dsaddr)`; it leaves the casts to pointer members for
      a hand edit (11: `OS_SetArenaLo/Hi` and `OS_GetArenaLo/Hi` keep `void *` now, `OS_InitThread` stores the thread
      info pointer, `OS_InitException` the vector). By hand: the two units with their own partial `OSSystemWork`
      (`OS_GetLowEntropyData`, the PXI FIFO init: at DS offsets past the pointer members, which move on 64-bit hosts)
      use `HostSysWork`'s members; the users of the DTCM variable `data_027e0000` as DTCM's start (`HW_INTR_CHECK_BUF`,
      the IRQ stack checks, the arena, the Wi-Fi VBlank) use `HW_DTCM_BLOCK`; the VRAM addresses made at run time go
      through `HostVram_CpuPtr` where the number becomes a pointer (the tables keep their DS numbers); the 7
      `OSi_ReferSymbol` arguments are 0; the GBA slot check reads the open bus of an empty slot (unreachable, as before).
    - **VRAM** (modern/host/vram.c): the banks are host memory and the CPU sees VRAM through five window arrays (the
      engines' BG and OBJ windows, LCDC) in 16 KB granules mapped to banks by VRAMCNT. At a VRAMCNT change the windows
      are written back to their banks and filled from the banks' new places (the parts without a bank read 0, as with
      the mmap remapping); before the renderer reads the banks (and the dumps) the windows are written back. This is a
      lookup by address, but into windows rather than banks: a pointer kept across a VRAMCNT change sees what the DS
      would show at that address, and a copy that runs from one bank into the next in a window works as on the DS, so
      there is nothing to assert (a lookup straight into the banks would have needed the assertion and a size at every
      use). An address outside the windows is reported once and gets a scratch area. Cost: the mapped banks copied
      once per frame (at most 1.6 MB).
    - **DTCM**: the 9 `src/dtcm` units are ordinary game objects; `ld -r -T dtcm.ld` and `--section-start=.dtcm` are
      gone. **Arenas**: `OS_GetInitArenaLo/Hi` return the host blocks (main: `HostMainRam_Ptr(SDK_MAIN_ARENA_LO)` to
      0x023e0000, then `OS_SetArenaHi(0, HostMainRam_Ptr(0x023ff000))`; ITCM, DTCM, the shared arena in the system
      work area, the empty WRAM arena; no extended arena, as on a retail DS).
    - **Range checks** (the comparisons with DS addresses, in 9 functions, plus host code): against the host
      blocks where they test the game's memory - `CrashScreen_IsValidAddress` and `::operator delete`'s
      `host_is_game_heap` (`HostMem_IsGameRam`), `CARDi_IsInTcm` (the ITCM and DTCM blocks), hw.c's DMA check (a null
      or small address); `MIi_CheckDma0SourceAddress` keeps the I/O rule only (the GBA slot range is host memory on
      32-bit hosts); the debugger's exception buffer range in `OS_InitException` is never true on the host. Left as
      they are, because they test DS addresses as data, not host memory: the download-play checks of a child
      program's segment addresses (`MBi_IsAbleToRecv`, `IsAbleToLoad`, `MBi_SetSegmentInfo`: 17 comparisons), the
      sound file slots' "offset below 0x02000000" (`SND_GetWaveDataAddress`, snd7's driver), and the CTRDG module's
      main-RAM offset in a PXI word (only with POSTFLG bit 0, never on the host).
    - **The host runtime** writes `gHostSysWork` (main.c: ROM header, card id, boot type; pxi7.c: RTC, touch panel,
      the ARM7 handle checker; frontend.c: the button word), os.c waits on `HW_INTR_CHECK_BUF`, sdk.c's
      `OS_GetDTCMAddress` returns the DTCM block, melon.cpp copies the palettes and OAM from the host arrays.
    - **Debug dumps**: `ACWW_RAMDUMP` writes a 4 MB main RAM image assembled from gdata/gbss, `gHostMainRam` and the
      system work area at their DS offsets (on 32-bit builds the same layout as before: comparable with older dumps);
      `ACWW_RAMHASH` hashes that image, DTCM and the system work area; `ACWW_HEAPCHECK` walks the NNS heaps in the main
      RAM block and the 64-bit root heap block with the pointer-sized header; `ACWW_VRAMDUMP` / `ACWW_STATS` write the
      windows back first and read the host palette and OAM. Checked: the i386 VRAM dump at frame 3000 equals the
      pre-change build's except DMA3's address registers (low words of host pointers).
    - **The harness**: `ACWW_HIGHMEM=2` doesn't map main RAM either; of the DS's address space only the loader's pages
      of gdata and gbss remain (and nothing else is mapped by default any more: ITCM, WRAM, palette, VRAM windows,
      OAM, main RAM's mirrors are gone; main RAM itself stays mapped by default until 3.3).

    Checks: i386 oracle quick (pictures and sound) and play identical to the captures; i386 save/continue script:
    all screenshots and the save file (after the save and after the continue) identical to the pre-change build; the
    64-bit build's quick and play identical to its pre-change run, and under `ACWW_HIGHMEM=2` quick, play, the town
    script (to frame 32000) and the continue run from the i386 save (to frame 8000, save file included) without a
    fault and identical to the pre-change 64-bit runs without the harness; `--strict-c` 0, `host_strict_errors.sh` 0,
    `host_portcheck.py` 0 beyond the baseline on macos-arm64 and win64-gnu-nomsbf.
22. **3.3** gdata/gbss become ordinary `.data`/`.bss`: drop the `--section-start` options, the main RAM memfd (its mirrors went in 3.2) and `__start_/__stop_`. Then `-fPIE -pie`, dropping `-Ttext-segment`, `-no-pie` and `MAP_32BIT`. Check: x86-64 PIE build under ASLR, oracle, and the harness poisoning the whole low 4 GB.
23. **3.4** Retire the i386 build as the reference: re-record the oracle from the x86-64 build. First make virtual time independent of code shape, so arm64 matches too. Today the 64-bit timing drifts by a frame or two after scene changes.

### Phase 4: platform layer and frontend (Linux first, about 1-2 weeks)
24. **4.1** In-process SDL frontend (window, input, audio callback on the ring) for 64-bit builds; drop `shm_open`/`fork`/`execl`. The viewer stays only for i386, if i386 is kept at all.
25. **4.2** `modern/host/plat.h` with POSIX and Win32 implementations: monotonic time, sleep-until, read the ROM file into memory (instead of `mmap`), local time, stack allocation, optional backtrace. `typeof` → C23 `__typeof__` or an explicit type.
26. **4.3** Coroutines on Windows x64 (an asm variant or Fibers). The arm64 path of coro_switch.S has never run.

**Steps 4.1-4.3 done (2026-10-08).** What was done and measured:
- **4.1** `modern/host/frontend_sdl.c` (`HOST_FRONTEND_SDL`, the x86-64 build; `configure_host.py` links the system's
  `libSDL2-2.0.so.0`, headers from `--sdl2`): window with both screens (letterboxed, F11 1x/2x/3x, Alt+Enter full
  screen), keyboard (scancodes), game controllers (positional face buttons, D-pad / left stick, shoulders and
  triggers), mouse and finger on the bottom screen as the touch panel, sound by an SDL audio callback that reads the
  AcwwShm ring (the viewer's rate control, with acquire/release on the ring's indices). The SDL calls run on an 8 MB
  stack of their own (a coroutine the VBlank switches to and back), not on the game thread that happens to take the
  VBlank. `frontend.c` keeps the common part (the frame published, ACWW_KEYS, the keys and touch read back);
  `frontend_viewer.c` (shm_open / fork / execl) is compiled only without `HOST_FRONTEND_SDL`, i.e. for i386, which
  also is the only build that makes `acww-viewer`. `ACWW_HEADLESS` opens no backend at all, as before. Checked with
  `SDL_VIDEODRIVER=dummy SDL_AUDIODRIVER=dummy` (and `disk`): `ACWW_WINSHOT` (the window's drawable read back before the
  present) at frames 2500 and 3000 is the `ACWW_SHOT` screenshot scaled 2x pixel for pixel (512x768, 0 differing
  pixels); with `ACWW_RTC` pinned to the headless default, a window run's screenshots and WAV are identical to a
  headless run's (window runs otherwise use the host's clock, so they differ from headless ones by design).
  The same with `SDL_VIDEODRIVER=offscreen`. Sound: a paced window run to frame 1800 with `SDL_AUDIODRIVER=disk`: the
  device's output has the WAV's loudness envelope (logo jingle, then the title music), about 1 s later (the device
  plays from start-up on), and 0.1 s windows of it correlate with the WAV at 0.98-0.998 where the music doesn't
  repeat. Not checked here (no display, no controller): real keyboard, mouse, finger and controller input, F11 /
  Alt+Enter, a GL renderer.
  One window run (host clock, the first of 31) crashed at frame 1434 in `FieldVillagerAi_ChangeState` (ov068, a
  villager's state change in the attract demo, null address); 30 more host-clock runs (12 headless with the pre-change
  build, 18 in a window) and every run with a pinned clock went through. It looks like a clock-dependent 64-bit
  game bug, not the frontend's; not reproduced, so not explained.
- **4.2** `plat.h` grew: `host_plat_localtime`, `host_plat_stack_alloc` / `_free` (guard page below the stack;
  `HOST_PLAT_LOW4G` = MAP_32BIT on x86-64 Linux), `host_plat_read_file` (plat_common.c, stdio: the ROM is read into
  memory instead of `mmap`), `host_plat_backtrace` / `host_plat_print_backtrace` (execinfo on glibc/macOS,
  `CaptureStackBackTrace` on Windows). POSIX and Win32 implementations (plat_win32.c still uncompiled: no Windows
  toolchain here). Users switched: card.c (no mmap/open/fstat), pxi7.c (`localtime_r` → `host_plat_localtime`,
  `_exit` → C99 `_Exit`, `typeof` → named structs), os.c (stacks), debug_posix.c (backtrace), hw.c (`_Exit`).
  Counts: `typeof` in modern/host 2 → **0**; files in modern/host including POSIX headers (`unistd.h`, `sys/mman.h`,
  `fcntl.h`, `execinfo.h`, `pthread.h`...) 9 → 6, and those 6 are the expected ones: plat_posix.c, debug_posix.c and
  guards.c (POSIX-only debugging aids), frontend_viewer.c (i386 only), hw.c and main.c (the memory setup: memfd and
  fixed mappings, which 3.3 removes).
- **4.3** coro_switch.S has an x86-64 Windows variant: rbx rbp rdi rsi r12-r15 and xmm6-15 saved, and the TIB's
  StackBase / StackLimit / DeallocationStack (gs:0x08, 0x10, 0x1478) saved and switched with the stack (the system
  checks the stack pointer against them in exception dispatch, unwinding and `__chkstk`); a new stack's first entry
  leaves the 32-byte shadow space and the 16-byte alignment the convention wants. coro.c builds its 256-byte frame.
  Chosen over Fibers because it keeps one mechanism (and `host_dump_threads`' frame walk) on every host and needs no
  fiber per DS thread. Test: `modern/host/tests/coro_win64_test.c` (`ninja -f build_host64.ninja coro-win64-test`)
  assembles the same code on Linux with `HOST_CORO_WIN64_TEST` (the TIB through a pointer instead of gs) and calls it
  with GCC's `ms_abi`: every callee-saved register of the Microsoft convention survives a switch while the other side
  overwrites them all, the coroutines get their argument, an aligned stack and their shadow space inside their stack,
  the TIB fields follow the running stack and come back for the thread's own, 2001 switches with doubles live. Each of
  five deliberate breakages (no xmm15 restore, no StackBase restore, 16 instead of 32 bytes of shadow space, rdi or
  rsi not saved) makes it fail. Not checked: the real gs-relative TIB access and Windows' own use of the fields.
- Checks: i386 oracle quick (pictures and sound) and play identical to the captures; x86-64 quick-raw and play-raw
  identical to the pre-change build's run (every screenshot and the WAV byte for byte); `host_strict_errors.sh` 0;
  `coro-win64-test` passes.
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

- **Latent `ptr26` bug.** `ptr26` (pxi7.c:72-75) assumes the program image is at 0x08000000. On x86-64 it is at 0x10000000. It only works because everything sent over PXI lives in gdata/gbss/DS RAM. **Gone (3.1):** the pointers are handed over whole (`PXI_PointerWord`).
- **Truncation in `is_reg`.** `is_reg` (sdk.c:35) and `io_check_addr` truncate pointers to 32 bits; this must be fixed before memory goes above 4 GB. **Fixed (2026-10-08):** `HostIo_Read`/`HostIo_Write` take a pointer-sized address (`IO_ADDR_` is `(__UINTPTR_TYPE__)(p)`, which also removes the `unsigned long` cast that step 2.3 lists), hw.c checks the whole value, sdk.c's `is_reg` and `units` keep `uintptr_t`.
- **`_s32_div_f` disagrees with the DS.** sdk.c:199-200 returns 0 for a zero divisor, while the DS routine and hw.c's emulation give the dividend. **Fixed (2026-10-08)** with `DS_DIV`/`DS_UDIV`.
- **Unreachable on today's host.** The `*(u32 *)0x08000000` cartridge check (autoload_2/unk_02113f04.c:31) and the WRAM arena 0x037f8000 point at unmapped memory and must be unreachable today.
- **Exit paths skip `atexit`.** `ACWW_EXIT_FRAME` exits with `_exit(0)` (hw.c:206), so `atexit` handlers such as the `ACWW_IOHIST` dump (hw.c:937) don't run. Use SIGINT or flush explicitly when measuring. **Fixed (2026-10-08):** `host_exit_dumps()` (`ACWW_IOHIST`, `ACWW_PROFILE`) runs at `ACWW_EXIT_FRAME`, on SIGINT and at exit. `ACWW_IOHIST` now counts the `HostIo_*` calls by register and calling address (there are no trapped accesses to count).
- **The Wi-Fi ID depended on the build (fixed 2026-10-08).** With the same inputs, the save files written by the new-game save script differed between builds in 24 bytes of `PlayerData::wifiUserData` (both copies of the town data, 0x1e20-0x1e69 and 0x17e00-0x17e49), while every screenshot was identical and two runs of one build gave identical files. Both builds reached `DWCi_Acc_CreateTempLoginId` at the same virtual cycle (gdb); the difference is the WFC-ID it copies: `DWCi_AUTH_GetNewWiFiInfo` (src/autoload_2/unk_020fedcc.c) adds the *address* of `OS_GetTick` to its seed (a bug in the original SDK code), and on the host that address moves with every build. It now adds the DS's address (0x01ffa6b4), which gives the DS's value in every build. Similar uses of a function's or variable's host address as a number would be found by the low-4 GB harness only if they truncate; this one didn't.
- **Scratch material**: `tools/portcheck/` (dsaddr.py, divs.py; sweep.py became tools/host_portcheck.py)
  - `sweep.py`, `diag_*.json`: libclang per-target diagnostics;
  - `dsaddr.py`: DS literal classifier;
  - `divs.py`, `divsites.txt`: the 116 division sites;
  - `flagexp.sh`, `fx/*.hash`: flag experiments;
  - `cwarn.txt`: the 246 C cast warnings.

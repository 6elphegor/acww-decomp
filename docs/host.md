# Toward a native PC build (plan)

## The modern branch is PC-only (2026-10-07)

This branch no longer builds the matching DS ROM (nor the GCC-built DS ROM of docs/modern.md); the decomp's own
branches do. The code here is the PC port's, and it is rewritten freely toward plain, portable C/C++: real shared
types and member access instead of DS-offset views, padding arrays and per-site host branches. The `HOST` / `MODERN`
/ `NONMATCHING` conditionals were resolved (`tools/host_resolve_ifdefs.py`: their DS-only alternatives deleted);
`HOST64` (`__SIZEOF_POINTER__ == 8`) remains while the 32-bit build serves as the reference. The helpers left from
the dual build (`HOST_AT`, `HOST_AT_A`, `HOST_SIZED`: `include/uptr.h`) go away as their users are rewritten.

Checking changes without the matching ROM: the behaviour must not change. The 32-bit build is deterministic, and
`~/acww/ref/oracle/oracle.sh <binary> quick|play` compares a build's screenshots and sound with captures of the
reference build (`~/acww/ref/oracle`, not in the repository: commit a7a796d3 plus the fix of a read of stack garbage
that made the earlier captures depend on stack contents; `oracle.sh <binary> record` re-records): `quick` - the attract demo and title, 60 s; `play` -
scripted play through the intro (A every second), screenshots to frame 25000. The 64-bit build is compared with
the same captures (its virtual timing drifts by a frame or two after the first scene changes).

`ACWW_EXIT_FRAME=<n>` ends a run after frame n (the sound file closed as on an interrupt): oracle.sh uses it, so a
check takes as long as the frames it compares (quick ~40 s, play ~3 min).

Checking a rewrite of one file: `tools/host_objcmp.sh OLD.cpp NEW.cpp DIR` compiles both versions as the builds do and
compares the code per function (`tools/host_fndiff.py DIR/A32.dis DIR/B32.dis -v`): every difference left should have
an explanation (inlining, stack layout, a fixed bug).

Finding where two builds part: `ACWW_RAMHASH=<file>` writes a hash of main RAM every frame and
`ACWW_RAMDUMP=f1,f2,...:<prefix>` dumps it at frames (32-bit builds: the game's data and heaps live there). Diff
the dumps, ignoring the bytes that differ at an early frame (code addresses in static data), then watch the first
address that differs. Code that reads memory nothing wrote (a lost argument, an uninitialized buffer) shows up as a
difference that depends only on code shape.

Shared declarations: every source file has a generated header, `include/proto/<dir>/<file>.h`, with the
declarations of the functions and global variables it defines, exactly as the definitions write them
(`tools/host_protos.py`; regenerate after changing a definition's signature). Units include these headers instead of
declaring what they use themselves. A unit that still declares something itself defines `PROTO_LOCAL_<name>`
before the includes (the header then leaves that declaration out): its uses don't match the real type yet - each
one is a call or an access to fix (a blob passed for a typed object, a pointer kept in an integer, an argument
count that differs, an array declared for a scalar). `grep -rn 'define PROTO_LOCAL_' src` lists them; the goal is
none. Definitions whose types are local to one source file are not in the headers yet (include/proto/.excluded and
the functions using file-local typedefs): moving those types to headers comes with the rewrite of their files.

Declarations: `tools/host_decls.py` (libclang; `pip install --user clang==21.*`) compares every declaration written
in a source file with the function's definition; `tools/host_method_calls.py` rewrote the calls of methods through
their mangled names into member calls (non-virtual where the method is virtual, as the direct call was; pointers
passed unchanged); `tools/host_strict_errors.sh` counts what still needs -fpermissive.

The modern build (docs/modern.md) compiles the game with GCC and plays like the original in an emulator. The next
step is a host build: the same sources compiled for the PC, with the DS hardware replaced. This note records what
that involves and the choice still open.

## What already holds

- All 867 sources compile for 32-bit x86 (`gcc -m32 -c -DMODERN`, freestanding) without changes.
- Everything is built from source except 6 small functions (~3 KB, docs/unmatched.md) and ~70 assembly units
  (6,700 lines: startup, interrupt and thread-switch code, the C library's soft-float and math routines). On a host
  these are replaced by C or by the host's own facilities.
- The code depends on the DS's 32-bit layout (mwcc's class layout, `(u8 *)this + 0x824`, fixed addresses in RAM,
  I/O and VRAM). A 32-bit host process can map memory at the DS addresses (main RAM 0x02000000, DTCM 0x027e0000,
  ITCM 0x01ff8000, I/O 0x04000000, VRAM 0x06000000...) so that those addresses keep working unchanged. A 64-bit build
  needs the view classes and hardcoded offsets replaced by real member accesses first.
- Overlays: on the host they are all linked into one program; loading an overlay becomes "reset its data and bss and
  run its constructors". The shared-address thunks of the modern build (modern/ds/overlays.c) carry over.

## What has to be provided

1. **Process and memory:** fixed mappings at the DS addresses; a main thread plus the game's own threads (the SDK's
   OS_Thread is cooperative and switches stacks in assembly: on the host, one host thread per game thread with a
   baton, or ucontext).
2. **ARM9 hardware the game touches directly:** interrupts (VBlank/HBlank, timers, DMA completion), DMA (copy/fill
   into VRAM), timers, the divider/sqrt units, cache maintenance (no-ops), the 2D engines (registers + VRAM),
   and the 3D engine (geometry commands written to 0x04000400..., then rasterisation).
3. **The ARM7 side**, reached through the PXI FIFO by tag: NVRAM (firmware user settings), RTC, touch panel, sound,
   power management, microphone, wireless (WM), FS/card (ROM reads, backup memory = the save file), cartridge.
4. **A frontend:** window, input (keys, mouse as touch), audio output, save files.

## Status (experimental)

The game runs natively as a 32-bit Linux program: title screen with the 3D town demo, touch to start, the intro
(Kapp'n's taxi, name entry), with sound, and melonDS's renderer drawing both screens (decision 2026-10-05: reuse
melonDS's hardware code for now, replace it with our own once everything works; the goal is a fully native port,
so sound was done natively right away). It holds 60 fps paced (160-200 fps unpaced).

Register accesses are explicit: the game's sources access hardware registers only through `IO_R` / `IO_W` /
`IO_OR` ... (`include/nitro/io_access.h`; rewritten by `tools/host_io_rewrite.py`), which are the plain volatile
accesses on the DS (the matching build is unchanged) and calls to `HostIo_Read` / `HostIo_Write` (hw.c) on the
host. Nothing traps in normal play any more (`ACWW_IOHIST` lists any access that still does); the fault handler
stays as a safety net on Linux. This is the first step toward macOS / 64-bit hosts (plan: register calls,
portable threads, 64-bit-clean game code, own renderer).

Threads switch stacks with `coro_switch.S` (i386, x86-64, arm64; `coro.h`), not `ucontext`. Interrupts are
delivered at register accesses, when the game enables interrupts, halts or waits - no signal is needed for that.
Two signal-based pieces remain, Linux-only safety nets: the fault handler (a register access the rewrite missed)
and the hang guard (SIGALRM: the game spinning on memory for 100 ms without virtual time moving; it reports the
site, and hasn't fired in testing). With them idle, runs are exactly repeatable (same screenshots and sound).

Build: `python3 tools/configure_host.py && ninja -f build_host.ninja` (needs the 32-bit sysroot, SDL2 headers for the
viewer, and a melonDS tree patched with `tools/host/melonds.patch` and built for 32-bit x86 in `build-core32`; see
`--sysroot`, `--sdl2`, `--melonds`). Run: `ACWW_FIRMWARE=<firmware image> build/host_usa/acww <rom.nds>`: a window
(`acww-viewer`, 64-bit SDL2, sharing memory with the game) shows both screens; keys: arrows, X = A, Z = B, S = X,
A = Y, Q/W = L/R, Enter = Start, Right Shift = Select; the mouse on the bottom screen touches; M mutes. Sound goes to
the default audio device (SDL), about 70 ms behind.

Environment: `ACWW_SAVE` (save file, default `<rom>.sav`), `ACWW_HEADLESS=1` (no window), `ACWW_FAST=1` (not paced to
60 Hz), `ACWW_SHOT="frame:file.ppm;..."`, `ACWW_KEYS="frame:frames:mask;..."`, `ACWW_TOUCH="frame:frames:x,y;..."`;
`ACWW_WAV=file.wav` (the sound, also headless), `ACWW_MUTE=1`; debugging: `ACWW_STATS`, `ACWW_FPS`, `ACWW_IOLOG=addr`,
`ACWW_IOHIST` (register accesses by address and code, to `acww_iohist.txt`), `ACWW_NOEMULATE` (single-step every
access), `ACWW_WATCH=addr:len`, `ACWW_PROFILE`, `ACWW_PROCLOG`, `ACWW_HEAPCHECK`, `ACWW_SNDTRACE` (sound commands),
`ACWW_SNDSTATE` (the sound driver's players and channels once a second), `ACWW_AUDIO_INFO` (the viewer's audio
device, underruns).

The runtime (`modern/host/`):

- `hw.c`: the memory map; the I/O pages trapped: the handler decodes the faulting instruction and carries out the
  plain moves itself (nearly all accesses), anything else is single-stepped with the trap flag (the register
  prepared before, the written value handled after); virtual time (scanlines, timers, VBlank), DMA, the
  divider and square root; interrupts injected into the interrupted game code (`irq_entry.S`) like an IRQ
  exception, after I/O accesses and when the game spins on memory; 60 Hz pacing.
- `vram.c`: VRAM banking with mmap (each VRAMCNT change remaps the banks into the CPU's windows).
- `melon.cpp`: the display through melonDS's GPU (register forwarding, 3D commands run at once, VRAM sync).
- `os.c`: interrupt masking per thread, thread contexts (a host stack each, `coro.h`), lock ids, BIOS waits.
- `pxi7.c`: the ARM7 services - start-up handshake, WVR, NVRAM (firmware image), RTC (fixed clock), touch panel,
  card backup (save file, replies delayed like the DS's); sound commands go to `snd7/`.
- `snd7/`: the ARM7's sound driver, native: NitroSDK's driver (commands, sequence player, channel allocation,
  envelopes, LFOs, alarms; ported from pret/pokediamond's decompilation of the same SDK driver, its command set and
  shared structures checked against ACWW's ARM9 side, tables from ACWW's ARM7 program) in `driver.c`, `seq.c`,
  `exchannel.c`, `channel.c`; the sound hardware in software (`spu.c`: 16 channels with PCM8/PCM16/IMA-ADPCM, square
  waves and noise, the mixer, the two capture units that the game's effect path uses) clocked by the virtual time;
  `output.c` to the viewer's audio ring and `ACWW_WAV`. Checked against melonDS running the original game: the logo
  jingle comes out with a waveform correlation of 0.998 at the same level, the title music at 0.97-0.997 once its
  fade-in (run by the ARM9 per frame) is over.
- `card.c` (ROM reads), `sdk.c` (the SDK's assembly routines in C), `gaps_code.c` (undecompiled functions),
  `frontend.c` + `viewer/` (window, input, sound; the viewer holds its audio queue at a target level by playing up
  to 0.5% faster or slower).

The build (`tools/configure_host.py`): the game linked as one object, its variables in their original order
(`tools/host_order.py`, `-fdata-sections -malign-data=abi`), DTCM's variables at 0x027e0000, its C library and
operator new/delete names made local (`tools/host_localize.py`), the shared-overlay-address thunks for x86, gap data
as C (`tools/host_gaps.py`).

Differences from the DS that the sources handle under `HOST` (or MODERN):

- The ARM C++ ABI's constructors return `this`, x86's don't: code using a constructor's result keeps the pointer;
  `void X_Create() { new X; }` create functions return the object.
- Pointers to virtual member functions: ARM `{offset, 2*adj+1}`, x86 `{offset+1, adj}` (gap data re-encoded); member
  functions defined as `extern "C"` must be 2-byte aligned (`-falign-functions=4`).
- Pointers in 26-bit PXI messages: host data addresses are reconstructed.
- Reading through NULL is harmless on the DS (address 0 is mapped) but not on the host.
- Code that ran over one variable into the next (a clear spanning two arrays) needs the original order or a fix.
- Integer division by zero: the DS's division routine (`_s32_div_f`) gives the dividend as the quotient and 0 as
  the remainder; x86 traps (hw.c gives the DS's result and reports the site), arm64 gives 0. The game does it (e.g.
  `spl_scl_in_out` at the end of a particle animation).

### 64-bit hosts (in progress)

`python3 tools/configure_host.py --arch x86_64 && ninja -f build_host64.ninja` builds `build/host64_usa/acww`, a
native x86-64 program (status: plays like the i386 build through the attract demo, the title (logo, clouds, talk
text) into the town scene with villagers, insects, fish and particle effects; the pictures match the i386 build
frame for frame until the town scene's first transitions, then drift by a frame or two of virtual time). For now
everything stays below
4 GB: the DS memory at its DS addresses, the program at 0x10000000 (`-Wl,-Ttext-segment`), the threads' stacks
(`host_stack_alloc`, MAP_32BIT) - so a pointer stored in 32 bits still works while the code is made clean. Moving the
DS memory above 4 GB (macOS arm64) comes after.

What changes with 64-bit pointers, and how the sources handle it (the DS build unchanged, every step checked with the
matching build and with the i386 build's screenshots and sound staying bit-identical):

- Integers holding pointers: `uptr` / `sptr` (`include/uptr.h`; u32 on the DS). `typedef unsigned long u32`-style
  typedefs and fx32 became int under HOST (long is 64-bit). `HOST64` marks layouts for the 64-bit host only.
- Objects sized by their DS size: `HOST_SIZED(n, type)` (n on the DS, at least the real size on the host),
  `HOST_ALIGN8`. Tools find the sites: `tools/host_alloc_sizes.py` (`(T *)Heap_Alloc(h, N)`, `count * N`),
  `tools/host_ctor_buffers.py` (buffers, also members, built by a mangled constructor call),
  `tools/host_placement_sizes.py` (`p = Heap_Alloc(h, N); new (p) T`). Strides and offsets written as numbers
  (`cell += 0x28`, `heap + 0x24`, `(u8 *)task + 0x1c`) get names (`MAPBLOCK_SIZE`, the member's offset).
- One object, two declarations (a typed class and a DS-offset view): the views agree on the DS only.
  `tools/host_view_conflicts.py` finds shared variables (and with `--types`, same-named types) whose views disagree;
  `tools/host_view_layout.py` generates the 64-bit layout of a view from the class it views (DWARF of both builds:
  each member at the place of the same byte in the real class) with `static_assert` checks
  (example: `TalkWindowState`).
- Linker labels inside variables (`PROVIDE(x = base + off)`): `tools/host_relayout.py` moves them by the DWARF
  member path (needs the 32-bit build's `game_all.o`). Gap data is emitted as assembly (`host_gaps.py --x86-64`),
  pointers to member functions as 16-byte objects.
- SDK objects the sources kept as byte blobs (OSThread, OSMutex, FSFile, FSArchive, NNSFndArchive, sound handles,
  the NNS G3D render / animation objects: `include/nnsys/g3d_rt.h`) have their real types on the host.
- Data in the ROM's file formats keeps its 32-bit slots (the sound banks' wave archive links, offsets in G3D
  resources).
- Hand-written varargs: `DS_VA_ARG` (`include/ds_stdarg.h`).
- The save data (`gSaveData`, include/save/SaveData.h) is written to and read from the save file as it is in memory,
  so its records are plain data with the DS layout on every host, checked by `static_assert`s of their sizes and key
  offsets (SaveData, PlayerData, VillagerData / SaveVillagers, Letter and the letter containers, Pattern, TownState,
  PlayerErrands). No vtable or pointer member inside a save record: `Letter` had a virtual destructor only (no
  letter is deleted through a base pointer), so it keeps the DS's vtable pointer as a data word (`dsVtable`, the
  constructor writes the DS value 0x020dd458, `Letter_Clear` zeroes it); 64-bit integers in save records are `s64`
  / `u64` (4-byte aligned, as on the DS: a `long long` member made PlayerData 8-byte aligned and its array stride
  0x2290). Walks over the records use `sizeof` of the stored type (`sizeof(PlayerData)`, `sizeof(Letter)`, ...).
  Checked by cutting `gSaveData` out of `ACWW_RAMDUMP`s of both builds at the same frames of the scripted intro: the
  images differ only in content (random ids once the two runs' random numbers part, the bulletin board's default
  posts: the mail text builder's members are still DS-sized blobs, `include/talk/MailTextBuilder.h`), not in
  layout. Neither build reaches the intro's first save yet (the i386 build crashes on arriving in town: ov009's
  `sBuildingResources` still hold the title demo's freed resources, overlay data not being reset on reload - see
  below; the x86-64 build stalls after the name entry: its name entry menu is never deleted).
- A C-style cast from a base pointer to a derived class is a static downcast (it subtracts the base's offset):
  converting a derived pointer to its base subobject's address needs `reinterpret_cast` after the `static_cast`.
- Members reached by a DS offset from a pointer: `tools/host_this_offsets.py` rewrites `(u8 *)this + N` (and
  `p + N` for a `u8 *p` / a typed or base-class pointer listed in `tools/host_offset_assumes.txt` with its real type)
  to `HOST_AT` / `HOST_AT_A`; a unit reaching `this`'s members through a macro (`#define M(T, o)`) gets a
  compile-time map of the offsets it uses (`tools/host_offset_map.py`, e.g. the camera); an actor's position from
  an untyped pointer is `ACTOR_POS_AT(p)`; views of whole objects are generated (`tools/host_view_layout.py
  --remove` regenerates one after the real class changed; a size check fails the build when a layout is stale).
- Tables of pointers to member functions: an entry is 16 bytes on x86-64; code that reads the second member at the
  DS offset `+ 8` (state tables: title screen, NPC behaviour, talk scripts) reads half of the first. The same for
  `{id, member function}` handler tables walked with the DS stride (`(u32)tbl + i * 12`: the special NPCs' talk
  handlers): index the array.
- Records that start with a smaller record: an actor's profile (`ActorProfile`) is a `ProcProfile` (16 bytes on
  x86-64) followed by the actor flags and cull box; read through `u32 *` (`e[2]`) it gives the priorities instead
  (the actor culled away: Kapp'n missing in the taxi).
- The communication manager (`CommManager`) reached by DS offsets (`gCommManager + 0x64` for `myAid`, `0x68`
  `localSlot`, `0x6c` `memberCount`, views padded to them): on x86-64 these land in other members (the intro's
  player was never spawned: `localSlot` stayed 4).
- Heaps are sized for the DS's objects: on 64-bit hosts every heap the game creates with a size is twice that
  (`ExpHeap_Create` / `FrameHeap_Create`), and the root heap is a block of its own (`host_root_heap_region`,
  8 MB below 4 GB) instead of the DS's main RAM arena.
- Stack buffers sized to what the DS's stack slot padding absorbed: `Clock_GetDate` writes four bytes into
  three-byte locals (on x86-64 the fourth hit a saved register).
- ARM idioms that don't carry over: an empty function's "result" is its first argument (still in r0 on the DS).

Debugging: gdb works directly (`handle SIGALRM nostop noprint pass`, and `handle SIGFPE nostop noprint pass`: the
division by zero emulation); SIGINT prints every game thread's backtrace. Most crashes so far were heap blocks
overwritten past their end: walk the heap's free list at the crash, then watch the damaged block header from
`Main_Init` on to find the writer. Comparing with the i386 build: `ACWW_STATS=<frames>` (display registers, VRAM bank
contents, 3D command and register access counts per interval), `ACWW_VRAMDUMP=<frame>:<file>` (VRAM banks, palettes,
OAM, display I/O), `ACWW_PROCLOG=1` (processes created), screenshots at the same frames; the random number calls
(a breakpoint on `Random_NextBelow` logging the callers) show where the two runs' logic first differs.

Not done yet: resetting an overlay's data when it is loaded again. The game reaches each scene later (in frames)
than on the DS: the title at about frame 1500 instead of 900 (virtual time passes in waits that the DS doesn't
have).

## The choice: how to provide the hardware (decided: A for the display for now, B for sound)

| | A. Reuse melonDS's hardware code | B. Write it for the port |
|---|---|---|
| 2D/3D rendering | melonDS's GPU2D/GPU3D (software and OpenGL renderers) fed from the mapped VRAM and the command FIFO | own 2D compositor and a 3D rasteriser / GL renderer for the DS geometry engine |
| ARM7 services | run the original ARM7 binary in melonDS's ARM7 interpreter with its SPU, RTC, SPI, Wifi | HLE each PXI service on the host (ROM/save files, host clock, mouse); reimplement the SDK sound driver (sequence player + mixer) |
| Effort | smaller: glue between the native ARM9 code and the emulated parts | large: renderer and sound driver are the big pieces |
| Fidelity | as good as melonDS | depends on the reimplementation |
| Licence | melonDS is GPL-3.0: the port as distributed becomes GPL | free to choose |

Either way the game code runs natively; only the peripherals differ. A mix is possible: melonDS's renderer first to
get a picture, replaced later.

Until this is decided, the work that both options need goes first: the host runtime (memory map, threads,
interrupts, DMA, timers), a headless host build that boots to the title's main loop with stub ARM7 services, and
replacing the assembly units.

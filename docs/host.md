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
scripted play through the intro (A every second), screenshots to frame 25000. Since `Snd_CalcListenerDistance` is
implemented (2026-10-08) the `quick` sound differs from the captures from ~25 s on: the attract demo's positional
sounds (villagers, the town scene) had full volume with the stub, now they fade with distance; the screenshots and
the `play` captures are unchanged, and a build with the stub put back matches the captures exactly. The 64-bit build is compared with
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
none. include/proto/.excluded lists the definitions left out of the headers: prototypes that do not compile alone
(types local to one source file: moving them to headers comes with the rewrite of their files) and prototypes that
conflict with a unit that uses them (the unit's own declaration or calls differ: each one a call to fix). Full
regeneration: `python3 tools/host_decls.py --json D.json && python3 tools/host_protos.py --decls D.json
--headers-only` (it compiles every unit against the new headers); `--only SRC...` regenerates single files' headers.

Declarations: `tools/host_decls.py` (libclang; `pip install --user clang==21.*`) compares every declaration written
in a source file with the function's definition; `tools/host_method_calls.py` rewrote the calls of methods through
their mangled names into member calls (non-virtual where the method is virtual, as the direct call was; pointers
passed unchanged). Both builds compile without -fpermissive (since 2026-10-08): a conversion between a pointer and an
integer is an error, so a pointer can no longer be cut to 32 bits silently; `tools/host_strict_errors.sh` (64-bit
syntax check of every C++ unit) reports any that come back.

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
  run its constructors" (done: `modern/host/overlay.c`, see the status below). The shared-address thunks of the
  modern build (modern/ds/overlays.c) carry over.

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
host. The I/O registers are plain host arrays; nothing is mapped at the DS's I/O addresses (the SIGSEGV trap
and the instruction decoding that used to catch missed accesses are gone since 2026-10-08: they had caught none
in the play and save/continue scripts).

Threads switch stacks with `coro_switch.S` (i386, x86-64, arm64; `coro.h`), not `ucontext`. Interrupts are
delivered only at safe points: register accesses, and when the game enables interrupts, halts or waits. No signal
is involved in running the game (docs/portability.md phase 1): the integer divisions with a variable divisor go
through `DS_DIV` / `DS_MOD` (`include/ds_div.h`, the DS's results for a zero divisor; `tools/host_div_rewrite.py`),
so a hardware divide error is a crash. A watchdog thread reports (only reports) when virtual time stands still
for 2 s of real time - the game spinning on memory without a register access or a wait, which would want an
explicit wait at that site; none is known (`ACWW_WATCHDOG=<ms>`, 0 = off). Runs are exactly repeatable (same
screenshots and sound). The debugging aids that use POSIX signals (crash report, the SIGINT dump, `ACWW_PROFILE`,
`ACWW_WATCH`) are in `debug_posix.c` behind `HOST_DEBUG_POSIX` (on by default except on Windows).

Build: `python3 tools/configure_host.py && ninja -f build_host.ninja` (needs the 32-bit sysroot, SDL2 headers for the
viewer, and a melonDS tree patched with `tools/host/melonds.patch` and built for 32-bit x86 in `build-core32`; see
`--sysroot`, `--sdl2`, `--melonds`). Run: `ACWW_FIRMWARE=<firmware image> build/host_usa/acww <rom.nds>`: a window
(`acww-viewer`, 64-bit SDL2, sharing memory with the game) shows both screens; keys: arrows, X = A, Z = B, S = X,
A = Y, Q/W = L/R, Enter = Start, Right Shift = Select; the mouse on the bottom screen touches; M mutes. Sound goes to
the default audio device (SDL), about 70 ms behind.

Environment: `ACWW_SAVE=<file>` (the save memory - the card's 256 KB backup flash - is loaded from that file at the
game's first access and every write goes through to it; a missing file is a blank memory, created at the first
write. Without `ACWW_SAVE` every run starts blank and nothing is written to disk), `ACWW_RTC` (the clock: the host's
local time, years clamped to 2000-2099; `ACWW_RTC="2026-10-08 12:00:00"` pins a fixed date and time that doesn't
advance. Headless runs default to the fixed 2026-04-01 12:00:00, the clock the oracle's captures were taken with, so
that scripted runs stay reproducible; `ACWW_RTC=host` gives them the local time), `ACWW_HEADLESS=1` (no window),
`ACWW_FAST=1` (not paced to 60 Hz), `ACWW_SHOT="frame:file.ppm;..."`, `ACWW_KEYS="frame:frames:mask;..."`, `ACWW_TOUCH="frame:frames:x,y;..."`;
`ACWW_WAV=file.wav` (the sound, also headless; ACWW_KEYS masks are hex KEYINPUT bits: 1 A, 2 B, 8 Start, 10 Right,
20 Left, 40 Up, 80 Down, 400 X, 800 Y), `ACWW_MUTE=1`; debugging: `ACWW_STATS`, `ACWW_FPS`, `ACWW_IOLOG=addr`,
`ACWW_IOHIST` (register accesses by address and calling code, to `acww_iohist.txt`; written at exit, on SIGINT and
at `ACWW_EXIT_FRAME`), `ACWW_POSLOG=<n>` (the local player's
position every n frames: for writing input scripts that walk somewhere), `ACWW_WATCH=addr:len` (x86 Linux),
`ACWW_PROFILE` (to `acww_profile.txt`, at the same points as `ACWW_IOHIST`), `ACWW_WATCHDOG`, `ACWW_PROCLOG`, `ACWW_HEAPCHECK`, `ACWW_SNDTRACE` (sound commands),
`ACWW_SNDSTATE` (the sound driver's players and channels once a second), `ACWW_AUDIO_INFO` (the viewer's audio
device, underruns).

The runtime (`modern/host/`):

- `hw.c`: the memory map; the register model behind `HostIo_Read` / `HostIo_Write` (the registers in host arrays);
  virtual time (scanlines, timers, VBlank), DMA, the divider and square root; interrupts taken after register
  accesses; 60 Hz pacing; the watchdog.
- `plat.h`, `plat_posix.c`, `plat_win32.c`: monotonic time, sleeping until a deadline, a background thread.
- `debug_posix.c`: the signal-based debugging aids (`HOST_DEBUG_POSIX`).
- `vram.c`: VRAM banking with mmap (each VRAMCNT change remaps the banks into the CPU's windows).
- `melon.cpp`: the display through melonDS's GPU (register forwarding, 3D commands run at once, VRAM sync).
- `os.c`: interrupt masking per thread, thread contexts (a host stack each, `coro.h`), lock ids, BIOS waits.
- `pxi7.c`: the ARM7 services - start-up handshake, WVR, NVRAM (firmware image), RTC (the host's local time;
  `ACWW_RTC`), touch panel, card backup (the save memory, `ACWW_SAVE`; replies delayed like the DS's), power management (PMIC registers kept in the host:
  backlights, sound amp, LED, battery never low; power-off ends the run); sound commands go to `snd7/`.
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
(`tools/host_order.py`, `-fdata-sections -malign-data=abi`; each overlay's in a range of its own), DTCM's variables at 0x027e0000, its C library's
names renamed to `ds_*` (`include/host_libc_rename.h`, included first in every game unit; the program's global
operator new/delete are the host's, `modern/host/newdelete.cpp`: the game allocates from its heaps by name,
`new (kGameHeap) T` / `Mem_AllocForNew`, and blocks of its heaps go back to them on delete), the
shared-overlay-address thunks for x86, gap data as typed C (`tools/host_gaps.py`, `modern/gen/gaps.c`, the same for
every architecture; the zero-initialised gap variables are defined in the sources with their types). The DS linker
script's absolute symbols are constants (`include/sdk_linker_symbols.h`). `-fpcc-struct-return` (small structs
returned in memory, as mwcc) is kept for the 32-bit build only, where it is the i386 Linux ABI's default anyway.

Differences from the DS that the sources handle under `HOST` (or MODERN):

- The ARM C++ ABI's constructors return `this`, x86's don't: code using a constructor's result keeps the pointer;
  `void X_Create() { new X; }` create functions return the object.
- Pointers to virtual member functions: ARM `{offset, 2*adj+1}`, x86 `{offset+1, adj}`: the compiler's, written as
  `&Class::member` (ProcBase's phase dispatch); member functions used as such must be 2-byte aligned
  (`-falign-functions=4`).
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
  member path (needs the 32-bit build's `game_all.o`). Gap data is typed C (pointers 8 bytes on 64-bit hosts).
- SDK objects the sources kept as byte blobs (OSThread, OSMutex, FSFile, FSArchive, NNSFndArchive, sound handles,
  the NNS G3D render / animation objects: `include/nnsys/g3d_rt.h`) have their real types on the host.
- Data in the ROM's file formats keeps its 32-bit slots (the sound banks' wave archive links, offsets in G3D
  resources).
- Hand-written varargs: `DS_VA_ARG` (`include/ds_stdarg.h`).
- The ROM's overlay table: 32-byte records whose two .sinit pointers are 8 bytes each in the host's
  `FSOverlayInfoHeader`; `FS_LoadOverlayInfo` copies the fields one by one (copied whole, the file id was left
  unset and some overlays - 2, 3, 6 in the title demo - failed to load, unnoticed while constructors ran at start-up).
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
  layout. The i386 build crashed on arriving in town (ov009's
  `sBuildingResources` still held the title demo's freed resources); with overlays reset on load it arrives in town
  and goes through the town hall's tutorial. It then stalled in `PMi_WaitBusy`: the game polls the battery every 20
  frames once the player can move (`LowBattery_Poll` -> `PM_GetBattery`, a PMIC register read through the PXI's PM
  tag 8), and the host didn't answer the PM tag at all; `pxi7.c` now does. With the script below extended (it
  stops at frame 21050, then Down from 21100 to 21500) the player leaves the town hall (town at ~frame 22000) and
  walks around town (checked to frame 34000: villagers, beach, no stop). With A and Start kept going after the
  tutorial the player only talks to Pelly again and again (Start opens the save menu, "I can't save right now" in a
  new town until the first save). How a new game first saves: the town hall's tutorial ends, the player goes into
  their house (scene 1, a house room) and out again; Tom Nook then waits in front of the house (a visitor:
  `Visitor_CheckTomNook` wants the previous scene to be a house room), tells about the loan, walks off and clears the
  new-town state (`SpNpcNookIntro::mainAct04` -> `GameStart_Clear`); from then on Start opens "Do you want to quit
  playing for now?" with "Save and end" first: the save (both copies of the town data, 0x0-0x2bfc0 in 256-byte
  writes, each verified) and the title screen. The script that gets there (i386, the oracle's firmware image): the
  town script above (A every 60 frames from 2400 to 21050, a touch at (128,96) at 2200, a touch at (218,180) every
  600 frames from 7630 to 21050, Start every 60 frames from 7650 to 21050, Down 21100-21500), then (frame:frames:keys,
  hex) 23200:60:80 23300:200:10 23520:220:80 23750:620:10 24380:120:80 24510:400:10 24970:175:40 25150:64:10
  25220:100:40 25330:14:20 25350:150:40 (south, east, south over the lower bridge, east, north, to the house door at
  (151, 109)), A at 25700-25940 every 60 (opens the door), 26600:150:80 (back out), A every 60 frames 27000-33540
  (Tom Nook's talk), Start at 34000, A at 34200, 34400, ..., 35200 (Save and end). The save is written at frames
  34786-34907 and the title screen is back at ~36500. A second run with that save file (`ACWW_SAVE`, the touch at
  2200 and A every 60 frames from 2400) takes the title's continue path: a greeting ("Hello! You came"), the player wakes up in
  the house ("Please wake up your player"), the game saves its start-of-session state (`card 7` at 0x2200 and
  0x15e00) and the player stands in front of the house in town at ~frame 6000. With `ACWW_RTC="2026-10-08 18:30:00"` the same
  continue shows 10/8 (Thursday) 6:30 PM, the evening sky and the weeds of the days that passed. `ACWW_POSLOG` and the town map
  (X, the pocket's map tab) were how the walk was found. The
  x86-64 build plays the same way: the name entries, the town (frame ~12430), Kapp'n's warp to the town hall, the
  tutorial, then out of the town hall and around town (checked to frame 44000, no stop). Its virtual timing drifts
  from the i386 build's by more than a few frames in the town hall (a Start press lands in the save menu: "I can't
  save right now"), so its script keeps A going to 26500, then B every 60 frames to 27000, Down 27100-27500 (town
  at ~28000), then Right / Down / Left / Up for a walk. The bugs on the way (the `spl_calc` crash reported earlier
  no longer occurs): the PMIC register-read table (`PMRegInfo`, its destination read through a DS label at the DS
  stride, the table larger than its gap object), and three views of objects at DS offsets: `Unk_02005e7c` and
  `Unk_02007694`, the PlayerActor's net-event and action handlers, declared the actor's members at their DS
  offsets (a pending field event read from other bytes: a pick-up fanfare at unit (-1183, 968) crashed in the town
  hall; the player and Pelly not drawn); they now derive from PlayerActor without members of their own. The BGM
  manager reached as bytes (`data_021c1b3c + 0x248` / `0x1c4` / `0x2e4`) is a `BgmManager *`. A script that gets through the
  name entries: the oracle's play script (A every second from frame 2400) plus, every 600 frames from 7630, a touch
  on the keyboard's Confirm button (218,180) (it only dismisses the "no room" message: touches on the keys don't
  register) and Start every 60 frames from 7650 (Start confirms a name); presses and touches 6 frames each.
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

Debugging: gdb works directly (no signals to pass through any more); SIGINT prints every game thread's backtrace. Most crashes so far were heap blocks
overwritten past their end: walk the heap's free list at the crash, then watch the damaged block header from
`Main_Init` on to find the writer. Comparing with the i386 build: `ACWW_STATS=<frames>` (display registers, VRAM bank
contents, 3D command and register access counts per interval), `ACWW_VRAMDUMP=<frame>:<file>` (VRAM banks, palettes,
OAM, display I/O), `ACWW_PROCLOG=1` (processes created), screenshots at the same frames; the random number calls
(a breakpoint on `Random_NextBelow` logging the callers) show where the two runs' logic first differs.

Overlays are reset when they are loaded, as on the DS (which reads a fresh image from the ROM, clears the bss and
runs the static constructors): the partial link puts each overlay's variables (the objects under `src/ovNNN/`) into a
range of its own inside gdata and gbss and its `.init_array` entries into the section `host_ovinit`
(`tools/host_order.py`, symbols `host_ovNNN_{data,bss,init}_{start,end}`, a table for the runtime in
`build/<b>/overlay_table.c`). `modern/host/overlay.c` keeps a copy of every overlay's data as linked (taken before any
constructor runs); `FS_StartOverlay` restores overlay N's data, clears its bss and runs its constructors in object
order. The overlays' constructors don't run at start-up any more (main's, the autoloads' and DTCM's still do, and
their data is never touched). Overlays that share an address range on the DS keep separate variables here; each
is reset on its own load. 138 overlays, 61.7 KB of data, 249 KB of bss, 98 constructors (in 59 overlays). Debugging:
`ACWW_OVLOG=1` lists each load (and how many bytes the reset undoes), `ACWW_OVRESET=0` restores the earlier
behaviour (every overlay's constructors once at start-up, no reset), `ACWW_OVRESET=-4,9` that for the overlays listed.
Some constructors use the divider registers (ov004's `MuseumInfoPoint_Init`: `FX_Div`), so virtual time now passes
for them at the overlay's load instead of before the first frame.

The game reaches each scene later (in frames) than on the DS: the title at about frame 1500 instead of 900 (virtual time passes in waits that the DS doesn't
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

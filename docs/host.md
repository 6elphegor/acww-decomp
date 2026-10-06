# Toward a native PC build (plan)

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
- `os.c`: interrupt masking per thread, thread contexts on `ucontext`, lock ids, BIOS waits.
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

Not done yet: resetting an overlay's data when it is loaded again. The game reaches each scene later (in frames)
than on the DS: the title at about frame 1500 instead of 900 (virtual time passes in waits that the DS doesn't
have). Runs aren't exactly repeatable: when the game spins on memory, virtual time advances with the real clock.

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

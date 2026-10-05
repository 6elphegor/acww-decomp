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

`python3 tools/configure_host.py && ninja -f build_host.ninja` builds `build/host_usa/acww` (needs the 32-bit sysroot,
see `--sysroot`). Run: `ACWW_FIRMWARE=<firmware image> build/host_usa/acww [-v] <rom.nds>`; `ACWW_SAVE` sets the save
file (default `<rom>.sav`), `ACWW_TOUCH="frame:frames:x,y;..."` scripts touches, `ACWW_FAST=1` runs unpaced.

It boots: NitroStartUp, Main_InitDwc (NVRAM Wi-Fi settings), the card and RTC set-up, and runs Main_Loop at 60 frames
per second (boot logo scene onwards), with nothing shown yet. What the runtime (`modern/host/`) does:

- `hw.c`: the memory map; the I/O pages trapped (a fault prepares a register read, the access is single-stepped
  with the trap flag, the written value is handled after it); virtual time (scanlines, timers, VBlank), DMA, the
  divider and square root; a SIGALRM tick lets time pass while the game spins on memory; 60 Hz pacing.
- `os.c`: interrupt masking and dispatch at safe points, thread contexts on `ucontext`, lock ids, BIOS waits.
- `pxi7.c`: the ARM7 services - start-up handshake, WVR, NVRAM (firmware image), RTC (fixed clock), touch panel,
  card backup (save file), sound (commands taken, nothing played).
- `card.c`: ROM reads; `sdk.c`: the SDK's assembly routines in C; `gaps_code.c`: the undecompiled functions (stubs).

Differences from the DS that the sources had to handle (under `HOST`):

- The ARM C++ ABI's constructors return `this`, x86's don't: code using a constructor's result (`p = ctor(p)`)
  keeps the pointer instead.
- Pointers to virtual member functions are encoded differently (ARM `{offset, 2*adj+1}`, x86 `{offset+1, adj}`):
  the ones in gap data are re-encoded (tools/host_gaps.py); x86 also needs member functions 2-byte aligned
  (`-falign-functions=4`, since some are defined as `extern "C"` functions).
- Pointers sent to the ARM7 in 26-bit PXI messages: host data addresses are reconstructed (pxi7.c).
- The game's own C library names are made local to the game (tools/host_localize.py).

The shared-overlay-address thunks (docs/modern.md) are generated for x86 too (`modern_shared.py --arch x86`, wrapped
in the partial link).

Not done yet: display (2D/3D rendering), sound, resetting an overlay's data when it is loaded again, a window and
input.

## The open choice: how to provide the hardware

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

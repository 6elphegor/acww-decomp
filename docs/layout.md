# Code layout

What is known about where code lives in Animal Crossing: Wild World (USA) (Rev 1), and how it was found. Addresses are
from `config/usa`.

## Modules

| Module | Address range | Contents |
|---|---|---|
| ARM9 main `.text` | `0x02000000`–`0x020c2b04` | Startup code, then the game (11,783 functions, all but 23 Thumb) |
| ARM9 main `.init` | `0x020c2cd0`–`0x020c6108` | 96 C++ static initializers (`__sinit_*`), one per C++ file with global objects |
| ARM9 main `.rodata`, `.ctor`, `.data` | `0x020c6108`–`0x020e7500` | Game data; `.ctor` lists the 96 initializers in link order |
| `autoload_2` | `0x020e7500`–`0x0213c6c0` | Prebuilt libraries, almost all ARM (2,113 ARM and 80 Thumb functions) |
| `autoload_3` | `0x0213c6c0`–`0x02200680` | BSS for main and the libraries (800 KB) |
| ITCM | `0x01ff8000`–`0x01ffdae0` | Speed-critical SDK code (interrupt handling etc.), 144 ARM and 14 Thumb functions |
| DTCM | `0x027e0000`–`0x027e0460` | Data only |
| Overlays 0–146 | from `0x02200680` | Game code loaded on demand, mostly Thumb |

### ARM9 main `.text`

| Range | Contents |
|---|---|
| `0x02000800`–`0x02000b44` | Startup: `Entry`, `AutoloadCallback` and helpers (ARM) |
| `0x02000b84`–`0x02000c2c` | SDK build markers: DWC 2005-10-23, BACKUP, WiFi 1.0, Ubiquitous CPS and SSL |
| `0x02000c2c`–`0x020c256c` | Game code, Thumb, C and C++ |
| `0x020c256c`–`0x020c2b04` | 29 Thumb functions, not yet identified |

The secure area (`0x02000000`–`0x02000800`) got some meaningless function symbols from `dsd init`.

### `autoload_2` libraries

Located from constants in literal pools and strings in `.data`; boundaries between libraries are approximate.

| Around | Library | Evidence |
|---|---|---|
| `0x020e9eb8`–`0x020fffac` | GameSpy / Nintendo Wi-Fi Connection (DWC) | Uses `%s?pid=%llu&region=%s`, the game name `acrossingds` and a base-32 digit table |
| `0x02100dc0`, `0x02101490` | NitroSystem foundation (NNS_Fnd): heaps and archives | `EXPH`, `FRMH`, `FNTB`/`FIMG`/`FATB` magics |
| `0x021035c4` | NitroSystem G2D fonts | `NFTR`, `FINF`, `CWDH`, `CMAP`, `CGLP` magics |
| `0x021065f0` | NitroSystem G3D animation | `BCA0`, `BMA0`, `BTA0`, `BTP0`, `BVA0` magics |
| `0x0210c000`–`0x02118000` | NitroSDK core | Highest density of hardware register (`0x04xxxxxx`) accesses |
| `0x0212a454`–`0x0213c6c0` | Metrowerks C runtime (MSL) | `strftime` formats, `INFINITY`, decimal conversion tables |

The library code is ARM and was prebuilt, possibly with a different compiler than the game.

### Overlay 65

Overlay 65 (190 KB, no readable strings) is the only place where Thumb switch statements use the 1.2/sp2p3-style jump
table dispatch, so it was likely built separately. It will need its own compiler setting.

## File order

The linker places each source file's `.text`, `.rodata`, `.data` and `.bss` in the same file order. Within a file,
data isn't laid out in the order its functions use it, so this only shows up at a coarse scale, but it holds across
the whole of main. A file's data can therefore be found from its functions and the other way around;
`tools/xrefs.py <start> <end>` lists what a range references and what references it.

### C++ file anchors

Each `__sinit` belongs to one C++ file and initializes that file's global objects in `autoload_3`. The functions that
use those objects mark roughly where the file's code is. "Global" rows are objects used throughout the game, like
managers, so they don't locate the file. The BSS addresses increase with the `.ctor` index, confirming the link order.

Our first decompiled functions (`src/main/unk_020501d4.c`, `unk_02050204.c`) belong with initializer 25, which
references their table `sCharSortKeyTable` and calls the class constructor at `0x02050e84`.

| # | `__sinit` | First BSS | Functions using that BSS |
|--:|---|---|---|
| 0 | `0x020c2cd0` | `0x0213c810` | `0x02002ab8`–`0x02002ab8` (1) |
| 1 | `0x020c2cf8` | `0x0213c874` | spread over `0x02002b1c`–`0x0203e76c` (global) |
| 2 | `0x020c2d08` | `0x0213c87c` | `0x020033e4`–`0x020037a0` (8) |
| 3 | `0x020c2d4c` | `0x021bdb74` | `0x020116e8`–`0x0201195c` (12) |
| 4 | `0x020c2d74` | `0x021bde78` | spread over `0x02012620`–`0x0201bb3c` (global) |
| 5 | `0x020c3584` | `0x021be624` | `0x0201d184`–`0x0201d184` (1) |
| 6 | `0x020c35ac` | `0x021bf97c` | `0x0202e2d4`–`0x0202e2d4` (1) |
| 7 | `0x020c35c8` | `0x021bf988` | `0x0202ef40`–`0x02032dc4` (2) |
| 8 | `0x020c35f4` | `0x021bf9a0` | `0x0203030c`–`0x02033438` (11) |
| 9 | `0x020c36e0` | `0x021c1a04` | — |
| 10 | `0x020c3760` | `0x021c1a44` | `0x02034104`–`0x0203440c` (9) |
| 11 | `0x020c37d8` | `0x021c1b84` | `0x02036c58`–`0x02036c58` (1) |
| 12 | `0x020c3800` | `0x021c2210` | `0x020377f4`–`0x02038168` (8) |
| 13 | `0x020c3878` | `0x021c3058` | spread over `0x020037d0`–`0x020c1c30` (global) |
| 14 | `0x020c3b8c` | `0x021c3264` | `0x0203cb1c`–`0x0203cbb8` (7) |
| 15 | `0x020c3bb4` | `0x021c3274` | `0x0203ce60`–`0x0203cfb8` (3) |
| 16 | `0x020c3bdc` | `0x021c39cc` | `0x0203dad4`–`0x0203e358` (4) |
| 17 | `0x020c3bec` | `0x021c39d4` | `0x0203e5d0`–`0x0203e6e4` (5) |
| 18 | `0x020c3bfc` | `0x021c39f0` | `0x0203eb78`–`0x0203ebb0` (2) |
| 19 | `0x020c3c20` | `0x021c3b94` | `0x0203be6c`–`0x0203ef38` (4) |
| 20 | `0x020c3c58` | `0x021c3bc0` | `0x0203f31c`–`0x0203f4c0` (3) |
| 21 | `0x020c3c98` | `0x021c3c9c` | `0x02040974`–`0x02040f38` (11) |
| 22 | `0x020c3cbc` | `0x021c3e78` | spread over `0x020418d4`–`0x02049bcc` (global) |
| 23 | `0x020c3d54` | — | — |
| 24 | `0x020c3d58` | `0x021c4890` | spread over `0x0203f180`–`0x020a0f1c` (global) |
| 25 | `0x020c3d6c` | `0x021c48a0` | spread over `0x02037c40`–`0x0208cb18` (global) |
| 26 | `0x020c3ea8` | `0x021c4e34` | `0x020514a4`–`0x02052b30` (8) |
| 27 | `0x020c3fd4` | `0x021c5324` | `0x02052c88`–`0x0205353c` (33) |
| 28 | `0x020c3ffc` | — | — |
| 29 | `0x020c4000` | `0x021c5a24` | `0x020574cc`–`0x0205922c` (15) |
| 30 | `0x020c4358` | `0x021c5d74` | `0x02059d1c`–`0x0205afdc` (7) |
| 31 | `0x020c43d8` | `0x021c6220` | `0x0205c240`–`0x0205c644` (6) |
| 32 | `0x020c4400` | `0x021c6308` | `0x0205c66c`–`0x0205c8f4` (5) |
| 33 | `0x020c4428` | `0x021c63f8` | `0x0205c91c`–`0x0205cde4` (7) |
| 34 | `0x020c4450` | `0x021c6444` | `0x0205ce0c`–`0x0205d1d0` (5) |
| 35 | `0x020c4478` | `0x021c64d0` | `0x0205d1f8`–`0x0205d318` (4) |
| 36 | `0x020c44a0` | `0x021c6500` | `0x0205d340`–`0x0205d458` (4) |
| 37 | `0x020c44c8` | `0x021c6530` | `0x0205d480`–`0x0205d7b0` (7) |
| 38 | `0x020c44f0` | `0x021c6624` | `0x0205d7d8`–`0x0205df70` (9) |
| 39 | `0x020c4518` | `0x021c67fc` | `0x0205dfa4`–`0x0205edb8` (16) |
| 40 | `0x020c4540` | `0x021c73ac` | `0x0205edfc`–`0x0205eee0` (4) |
| 41 | `0x020c4568` | `0x021c73c8` | `0x0205ef74`–`0x0205f06c` (3) |
| 42 | `0x020c4590` | `0x021c73f8` | `0x0205f7f4`–`0x0206000c` (7) |
| 43 | `0x020c4648` | `0x021c7c88` | spread over `0x02012450`–`0x020c1ba0` (global) |
| 44 | `0x020c4670` | `0x021c7c98` | `0x02061794`–`0x020622cc` (24) |
| 45 | `0x020c46b4` | `0x021c9f40` | — |
| 46 | `0x020c4710` | `0x021c9f74` | `0x02065640`–`0x02065920` (5) |
| 47 | `0x020c4770` | `0x021cb3c4` | — |
| 48 | `0x020c47f4` | `0x021cb404` | `0x0206d988`–`0x0206dad8` (12) |
| 49 | `0x020c4810` | `0x021cb4e8` | `0x0206e8b8`–`0x0206f3e0` (12) |
| 50 | `0x020c4860` | — | — |
| 51 | `0x020c4864` | `0x021cbcd8` | `0x02071320`–`0x020718dc` (3) |
| 52 | `0x020c48c4` | `0x021cc254` | — |
| 53 | `0x020c48ec` | `0x021cc7c4` | spread over `0x0206d514`–`0x020b0b90` (global) |
| 54 | `0x020c490c` | `0x021cc85c` | spread over `0x02077ac4`–`0x0207ed1c` (global) |
| 55 | `0x020c4a00` | `0x021cd258` | `0x020815f8`–`0x02081784` (13) |
| 56 | `0x020c4a54` | `0x021cd2c4` | `0x02082274`–`0x02082bb4` (8) |
| 57 | `0x020c4b40` | `0x021cd648` | — |
| 58 | `0x020c4d64` | `0x021cdcb8` | `0x020850e0`–`0x020854e0` (3) |
| 59 | `0x020c4e70` | — | — |
| 60 | `0x020c4e74` | `0x021ce67c` | `0x0208a5a4`–`0x0208a5d4` (4) |
| 61 | `0x020c4e9c` | `0x021ceab0` | `0x0208de68`–`0x0208de8c` (3) |
| 62 | `0x020c4ec4` | `0x021ceb0c` | `0x0208e928`–`0x0208e9f4` (8) |
| 63 | `0x020c4eec` | `0x021ceb74` | `0x0208efd0`–`0x0208f050` (9) |
| 64 | `0x020c4f14` | `0x021cebac` | `0x0208f0e8`–`0x0208f0e8` (1) |
| 65 | `0x020c4f3c` | `0x021d0850` | `0x0209521c`–`0x02095774` (11) |
| 66 | `0x020c4f64` | `0x021d08d4` | `0x0209759c`–`0x0209759c` (1) |
| 67 | `0x020c4f8c` | — | — |
| 68 | `0x020c5034` | `0x021d7158` | `0x0209c08c`–`0x0209c098` (2) |
| 69 | `0x020c505c` | `0x021d7278` | `0x0209c4a8`–`0x0209c80c` (8) |
| 70 | `0x020c50b8` | `0x021d730c` | spread over `0x0200309c`–`0x020bf3bc` (global) |
| 71 | `0x020c52b0` | `0x021ed330` | `0x0209e840`–`0x0209e878` (2) |
| 72 | `0x020c5360` | `0x021ed3cc` | spread over `0x0209ec80`–`0x020a3ef4` (global) |
| 73 | `0x020c5758` | `0x021eda70` | `0x020a4778`–`0x020a63bc` (34) |
| 74 | `0x020c5780` | `0x021edb5c` | spread over `0x0200e570`–`0x020aa808` (global) |
| 75 | `0x020c5824` | `0x021edd28` | `0x020aa840`–`0x020aa840` (1) |
| 76 | `0x020c584c` | `0x021ede94` | `0x020abc10`–`0x020abe58` (4) |
| 77 | `0x020c5874` | `0x021edf50` | `0x020ac1f8`–`0x020ac500` (5) |
| 78 | `0x020c58fc` | `0x021ee160` | `0x020ac7e8`–`0x020af160` (16) |
| 79 | `0x020c5978` | `0x021ee250` | `0x020af3f4`–`0x020af3f4` (1) |
| 80 | `0x020c59b0` | `0x021ee2b0` | `0x020b2610`–`0x020b2610` (1) |
| 81 | `0x020c59e0` | `0x021ee3e0` | `0x020b2ef4`–`0x020b35f8` (6) |
| 82 | `0x020c5a08` | `0x021ef2e4` | spread over `0x02002dd8`–`0x020b5af4` (global) |
| 83 | `0x020c5aa8` | `0x021ef474` | — |
| 84 | `0x020c5b04` | `0x021ef49c` | `0x020b7798`–`0x020b7914` (9) |
| 85 | `0x020c5b2c` | `0x021ef630` | `0x020b8340`–`0x020b8494` (8) |
| 86 | `0x020c5b44` | `0x021ef674` | spread over `0x020b8df0`–`0x020bfc48` (global) |
| 87 | `0x020c5bb8` | `0x021f457c` | `0x020c11b8`–`0x020c12cc` (2) |
| 88 | `0x020c5d1c` | `0x021f4624` | `0x020c1a64`–`0x020c2284` (3) |
| 89 | `0x020c5ef0` | `0x021f4728` | `0x020c28b0`–`0x020c28f4` (2) |
| 90 | `0x020c5f68` | — | — |
| 91 | `0x020c5f6c` | `0x021f4874` | spread over `0x02015454`–`0x020c233c` (global) |
| 92 | `0x020c5fa0` | — | — |
| 93 | `0x020c5fa4` | `0x021f5998` | — |
| 94 | `0x020c6080` | `0x021f5b80` | spread over `0x02003b5c`–`0x0200838c` (global) |
| 95 | `0x020c6094` | `0x021f5c00` | — |

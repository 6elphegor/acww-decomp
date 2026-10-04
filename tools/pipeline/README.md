# Linking tools

Tools for turning matched source into `complete` units of the build. Run everything from the repository root.
[`linking.md`](linking.md) is the procedure (overlays, the main module, the library modules `autoload_2` and
`itcm`, and assembly units); the [matching guide](../../docs/matching.md) covers the matching side.

| Tool | What it does |
|---|---|
| `linkprep.py` | Main working tool for a unit: `compile` (with the build's flags and header lines), `reverse` (sort definitions by descending address), `check` (simulated link against the original: layout, bytes, targets, unresolved names), `data [--apply]` (reproduce the original data order), `undef`, `dump`, `diff` (after a failed build) |
| `mainprep.py` | The main-module and library side of `linkprep.py` (`check`/`data`/`dump`/`diff ... main\|autoload_2\|itcm <spec>`); not run directly |
| `install_tu.py` | Install one translation unit (`[--replace] <main\|autoload_2\|itcm\|ovNNN> <spec>`): writes the source, marks it `complete`, trims overlapping units, adds the bss placeholder, applies `renames.txt` / `aliases.txt` |
| `install_units.py` | Install an overlay as several complete units from one spec |
| `mainbatch.sh` | Install prepared units (`[--commit] [--module M] <unit dir>...`), reconfigure, build once, and keep them only if the ROM matches; otherwise revert and show why |
| `maindis.py` | Disassemble original code of main, `autoload_2` or ITCM at an address, with relocation targets |
| `ovdump.py` | Dump an overlay's `.data` as words with relocation targets and labels |
| `split_unit.py` | Split a unit into several units at function addresses (the declarations are copied into every part; linking.md, "Data of library units") |
| `realnames.py` | Rewrite `func_XXXXXXXX` callees in a unit to their current `symbols.txt` names (`-n` only reports) |
| `vtable_rename.py` | Name a vtable at its real start and rewrite relocations to it (`to:<start> add:0x8`); `--interior` / `--section` record labels inside objects |
| `alias.py` | Give an existing function symbol a second name (zero-size label), e.g. a C1/C2 constructor pair |
| `alias_addr.py` | The same, finding the existing symbol by address |
| `apply_aliases.py` | Apply a list of `<new name> <addr>` aliases to the first given `symbols.txt` with a function there |
| `rename_impact.py` | For each line of a `renames.txt`, list the linked units whose objects reference the old name |
| `disambiguate.py` | Resolve main's relocations into overlays that share a load address (`module:overlays(...)`) to the one overlay whose scene entry is at the target (`--write` to apply) |
| `romdiff.py` | After a build, list which modules (main, autoloads, overlays) differ from the original |
| `maincheck.py` | Older per-function byte check for main units; `linkprep.py check <obj> main <spec>` supersedes it |

Build steps that support linked units (`bss_units.py`, `object_order.py`, `aliases.py`, `lcf_symbols.py`,
`force_active.py`, `expand_incbin.py`) live in `tools/` and are wired into `build.ninja` by
`tools/configure.py`.

# Matching pipeline state

Files used to run parallel matching agents over ARM9 main. The originals lived in a session scratch directory, so the paths inside `brief.md` point there. Copy these files into a fresh scratch dir, or update the paths, before reusing them.

- `brief.md`: shared agent brief (tools, naming rules, every compiler quirk found so far).
- `queue2.txt`: work groups `rNNN <first addr> <last addr> <count> <bytes>` over 0x02000c2c–0x020a6914. r000–r104, r106–r110, r114 and r116 are done. Next: r105, r111–r113, r115 and r117 onward. Partial work for the interrupted groups is in `../../../pipeline_wip/` (outside the repo).
- `integrate.py <source.cpp> <pairs.txt> <unit>`: renames symbols in `symbols.txt`, copies the source to `src/main/<unit>.cpp` and adds an unlinked `delinks.txt` entry. Afterwards run `python3 tools/configure.py usa && ninja && ninja report`.
- `nearmiss.txt`: functions that are close but not matching (`<orig> <scratch source>`). Sources are in `pipeline_wip/nearmiss/`.
- `merge_notes.txt`: classes that different units named separately, plus call-site workarounds to clean up when units are merged into linkable translation units.

# Linking tools

`linking.md` is the playbook. Overlays: `linkprep.py`, `install_tu.py`, `install_units.py`, `ovdump.py`, `link_candidates.py`.
Main module (see "Linking the main module" in `linking.md`): `install_tu.py main`, `linkprep.py ... main` (`mainprep.py`),
`realnames.py`, `maindis.py`, `vtable_rename.py`, `mainbatch.sh`; build steps `tools/bss_units.py`, `tools/aliases.py`,
`tools/object_order.py`, `tools/lcf_symbols.py` (names for addresses inside linked units, from `lcf_symbols.txt`). `maincheck.py` is the older per-function check; `linkprep.py check <o> main <spec>` replaces it.

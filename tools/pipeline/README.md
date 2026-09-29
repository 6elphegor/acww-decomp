# Matching pipeline state

Files used to run parallel matching agents over ARM9 main. The originals lived in a session scratch directory, so the paths inside `brief.md` point there. Copy these files into a fresh scratch dir, or update the paths, before reusing them.

- `brief.md`: shared agent brief (tools, naming rules, every compiler quirk found so far).
- `queue2.txt`: work groups `rNNN <first addr> <last addr> <count> <bytes>` over 0x02000c2c–0x020a6914. r000–r104, r106–r110, r114 and r116 are done. Next: r105, r111–r113, r115 and r117 onward. Partial work for the interrupted groups is in `../../../pipeline_wip/` (outside the repo).
- `integrate.py <source.cpp> <pairs.txt> <unit>`: renames symbols in `symbols.txt`, copies the source to `src/main/<unit>.cpp` and adds an unlinked `delinks.txt` entry. Afterwards run `python3 tools/configure.py usa && ninja && ninja report`.
- `nearmiss.txt`: functions that are close but not matching (`<orig> <scratch source>`). Sources are in `pipeline_wip/nearmiss/`.
- `merge_notes.txt`: classes that different units named separately, plus call-site workarounds to clean up when units are merged into linkable translation units.

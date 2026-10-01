#!/bin/bash
# mainbatch.sh [--commit] <unit dir>... : install prepared ARM9 main translation units, build once, keep them if
# the ROM matches; otherwise revert and show why (then install them one at a time to find the culprit).
#
# Run from the repository root (the directory with build.ninja). Each <unit dir> holds a deliverable as
# main_unit_instructions.md describes it: spec.txt, unit.cpp, optionally renames.txt and aliases.txt.
#   --commit   commit the linked units (one commit for the batch) when the ROM matches
#   REPLACE=1  pass --replace to install_tu.py (the unit replaces complete code-only units inside its range)
#   NOCHECK=1  install even if `linkprep.py check` reports problems (to see what the real link does)
# The tree must be clean in src/main and config (the revert discards every uncommitted change there).
# Logs go to ${LOGDIR:-/tmp/mainbatch}. One build at a time: the script refuses to start while ninja is running.
COMMIT=0
if [ "$1" = "--commit" ]; then COMMIT=1; shift; fi
[ $# -ge 1 ] || { sed -n 2,11p "$0"; exit 2; }
[ -f build.ninja ] && [ -f tools/pipeline/install_tu.py ] || { echo "run from the repository root"; exit 2; }
T="${LOGDIR:-/tmp/mainbatch}"; mkdir -p "$T"
pgrep -x ninja >/dev/null && { echo "BUSY: a build is running"; exit 2; }
[ -z "$(git status --porcelain src/main config)" ] || { echo "src/main or config has uncommitted changes"; exit 2; }
revert() {
  git reset -q HEAD -- src/main config
  git checkout -q HEAD -- src/main config
  git clean -qfd src/main
  python3 tools/configure.py usa >/dev/null
}
NAMES=""
for D in "$@"; do
  N="$(basename "$D")"; NAMES="$NAMES $N"
  [ -f "$D/spec.txt" ] || { revert; echo "NO SPEC $D"; exit 1; }
  # the unit must pass its own checks before it is installed
  # (renames.txt and aliases.txt are read next to the object, so it is compiled into the unit directory)
  python3 tools/pipeline/linkprep.py compile "$D/unit.cpp" "$D/unit.o" > "$T/check_$N.log" 2>&1 \
    || { revert; echo "COMPILE FAILED $N"; tail -5 "$T/check_$N.log"; exit 1; }
  python3 tools/pipeline/linkprep.py check "$D/unit.o" main "$D/spec.txt" >> "$T/check_$N.log" 2>&1 \
    || [ -n "$NOCHECK" ] || { revert; echo "CHECK FAILED $N"
         grep -E "^(ORDER|BYTES|EXTRA|FOREIGN|MISSING|NORANGE|SIZE|DATA|PLACE|TARGET)" "$T/check_$N.log" | head -15
         tail -1 "$T/check_$N.log"; exit 1; }
  python3 tools/pipeline/install_tu.py ${REPLACE:+--replace} main "$D/spec.txt" > "$T/install_$N.log" 2>&1 \
    || { revert; echo "INSTALL FAILED $N"; tail -5 "$T/install_$N.log"; exit 1; }
  grep -E "^(NOTE|WARNING)" "$T/install_$N.log"
done
python3 tools/configure.py usa >/dev/null
nice -n 5 ninja -j4 > "$T/build.log" 2>&1
if [ "$(tail -1 "$T/build.log")" = "acww_usa.nds: OK" ]; then
  echo "LINKED$NAMES"
  if [ $COMMIT = 1 ]; then
    git add -A src/main config
    git commit -q -m "main: link$NAMES

Full build: acww_usa.nds: OK" && git log --oneline -1
  fi
else
  grep -E "rror|Undefined|undefined|FAILED|Multiply|^(bss_units|object_order|aliases)\.py:" "$T/build.log" | head -12
  python3 tools/pipeline/romdiff.py 2>&1 | head -5
  python3 tools/pipeline/linkprep.py diff main 2>&1 | head -30
  revert
  echo "BATCH FAILED$NAMES (build log: $T/build.log)"
  exit 1
fi

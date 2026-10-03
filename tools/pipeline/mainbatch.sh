#!/bin/bash
# mainbatch.sh [--commit] [--module M] <unit dir>... : install prepared ARM9 main translation units, build once,
# keep them if the ROM matches; otherwise revert and show why (then install them one at a time to find the culprit).
#
# Run from the repository root (the directory with build.ninja). Each <unit dir> holds a deliverable as
# Each unit directory holds spec.txt, unit.cpp, optionally renames.txt and aliases.txt.
#   --commit   commit the linked units (one commit for the batch) when the ROM matches
#   --module M the units belong to the library module M (autoload_2 or itcm) instead of main; the source is the
#              file the spec's `unit` line names (unit.c or unit.cpp); in any module a spec line `unit unit.s`
#              installs an assembly unit (tools/pipeline/linking.md, "Assembly units (.s)")
#   REPLACE=1  pass --replace to install_tu.py (the unit replaces complete code-only units inside its range)
#   NOCHECK=1  install even if `linkprep.py check` reports problems (to see what the real link does)
# The tree must be clean in src/main and config (the revert discards every uncommitted change there).
# Logs go to ${LOGDIR:-/tmp/mainbatch}. One build at a time: the script refuses to start while ninja is running.
COMMIT=0
MODULE=main
if [ "$1" = "--commit" ]; then COMMIT=1; shift; fi
if [ "$1" = "--module" ]; then MODULE="$2"; shift 2; fi
if [ "$1" = "--commit" ]; then COMMIT=1; shift; fi
case "$MODULE" in main|autoload_2|itcm) ;; *) echo "--module: main, autoload_2 or itcm"; exit 2;; esac
SRC="src/$MODULE"
[ $# -ge 1 ] || { sed -n 2,14p "$0"; exit 2; }
[ -f build.ninja ] && [ -f tools/pipeline/install_tu.py ] || { echo "run from the repository root"; exit 2; }
T="${LOGDIR:-/tmp/mainbatch}"; mkdir -p "$T"
pgrep -x ninja >/dev/null && { echo "BUSY: a build is running"; exit 2; }
[ -z "$(git status --porcelain "$SRC" config)" ] || { echo "$SRC or config has uncommitted changes"; exit 2; }
revert() {
  # a library module's source directory may not exist in HEAD yet: then only config is restored and $SRC cleaned
  TRACKED=config
  [ -n "$(git ls-tree HEAD "$SRC")" ] && TRACKED="$SRC config"
  git reset -q HEAD -- $TRACKED
  git checkout -q HEAD -- $TRACKED
  git clean -qfd "$SRC" config
  python3 tools/configure.py usa >/dev/null
}
NAMES=""
for D in "$@"; do
  N="$(basename "$D")"; NAMES="$NAMES $N"
  [ -f "$D/spec.txt" ] || { revert; echo "NO SPEC $D"; exit 1; }
  # the unit must pass its own checks before it is installed
  # (renames.txt and aliases.txt are read next to the object, so it is compiled into the unit directory)
  U="$(sed -n 's/^unit[[:space:]]*//p' "$D/spec.txt" | head -1)"
  case "$U" in /*) ;; *) U="$D/$U";; esac
  # main: unit.cpp, or an assembly unit (`unit unit.s`, mwasmarm) as the spec names it
  [ "$MODULE" = main ] && [ "${U##*.}" != s ] && U="$D/unit.cpp"
  python3 tools/pipeline/linkprep.py compile "$U" "$D/unit.o" > "$T/check_$N.log" 2>&1 \
    || { revert; echo "COMPILE FAILED $N"; tail -5 "$T/check_$N.log"; exit 1; }
  python3 tools/pipeline/linkprep.py check "$D/unit.o" "$MODULE" "$D/spec.txt" >> "$T/check_$N.log" 2>&1 \
    || [ -n "$NOCHECK" ] || { revert; echo "CHECK FAILED $N"
         grep -E "^(ORDER|BYTES|EXTRA|FOREIGN|MISSING|NORANGE|SIZE|DATA|PLACE|TARGET|MODE)" "$T/check_$N.log" | head -15
         tail -1 "$T/check_$N.log"; exit 1; }
  python3 tools/pipeline/install_tu.py ${REPLACE:+--replace} "$MODULE" "$D/spec.txt" > "$T/install_$N.log" 2>&1 \
    || { revert; echo "INSTALL FAILED $N"; tail -5 "$T/install_$N.log"; exit 1; }
  grep -E "^(NOTE|WARNING)" "$T/install_$N.log"
done
python3 tools/configure.py usa >/dev/null
nice -n 5 ninja -j4 > "$T/build.log" 2>&1
if [ "$(tail -1 "$T/build.log")" = "acww_usa.nds: OK" ]; then
  echo "LINKED$NAMES"
  if [ $COMMIT = 1 ]; then
    git add -A "$SRC" config
    git commit -q -m "$MODULE: link$NAMES

Full build: acww_usa.nds: OK" && git log --oneline -1
  fi
else
  grep -E "rror|Undefined|undefined|FAILED|Multiply|^(bss_units|object_order|aliases|lcf_symbols)\.py:" "$T/build.log" | head -12
  python3 tools/pipeline/romdiff.py 2>&1 | head -5
  python3 tools/pipeline/linkprep.py diff "$MODULE" 2>&1 | head -30
  revert
  echo "BATCH FAILED$NAMES (build log: $T/build.log)"
  exit 1
fi

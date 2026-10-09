#!/bin/bash
# host_oracle.sh <acww binary> [quick|play|quick-raw|play-raw|record]: compare a host build's output with reference
# captures (docs/host.md, "Checking changes"). The oracle's directory (not in the repository) is $ORACLE_DIR (default
# ~/acww/ref/oracle: the firmware image beside it, ~/acww/ref/firmware_generated.bin); the captures are $CAPDIR
# (default $ORACLE_DIR/captures_v2: recorded from the x86-64 build with the virtual time of docs/portability.md 3.4).
# The earlier captures ($ORACLE_DIR/captures, the i386 build with the access-counting time) are compared by the
# oracle's own oracle.sh, or by this script with CAPDIR=$ORACLE_DIR/captures and ACWW_TIMING=legacy.
#   quick: the attract demo and title, screenshots at 2500 and 8000 and the sound;
#   play:  the play script (tools/host_play_script.py play), screenshots at 4000 ... 25000;
#   *-raw: only the run (the output in $ORACLE_OUT or a new temporary directory);
#   record: new captures from this binary into $CAPDIR (an existing $CAPDIR is moved to $CAPDIR.<date> first; never
#           into $ORACLE_DIR/captures).
B=$1; MODE=${2:-quick}
OD=${ORACLE_DIR:-$HOME/acww/ref/oracle}; C=${CAPDIR:-$OD/captures_v2}
T=${ORACLE_OUT:-$(mktemp -d)}; mkdir -p "$T"
ROM=${ACWW_ROM:-$HOME/acww/acww-decomp/extract/baserom_acww_usa.nds}
if [ "$MODE" = record ]; then
  [ "$(readlink -f "$C")" = "$(readlink -f "$OD/captures")" ] && { echo "refusing to record into $OD/captures"; exit 1; }
  if [ -d "$C" ]; then mv "$C" "$C.$(date +%Y%m%d-%H%M%S)" || exit 1; fi
  mkdir -p "$C" || exit 1
  Q=$(mktemp -d); ORACLE_OUT=$Q "$0" "$B" quick-raw > /dev/null
  cp "$Q/a-2500.ppm" "$C/deta-2500.ppm"; cp "$Q/a-8000.ppm" "$C/deta-8000.ppm"; cp "$Q/a.wav" "$C/deta.wav"
  Q=$(mktemp -d); ORACLE_OUT=$Q "$0" "$B" play-raw > /dev/null
  for f in 4000 6000 9000 12000 16000 20000 25000; do cp "$Q/p-$f.ppm" "$C/play-$f.ppm"; done
  cp "$B" "$C/acww_reference"; echo "recorded from $B into $C"; exit 0
fi
case "$MODE" in quick-raw) MODE=quick; RAW=1;; play-raw) MODE=play; RAW=1;; esac
export ACWW_HEADLESS=1 ACWW_FAST=1 ACWW_TOUCH="2200:10:128,96" ACWW_FIRMWARE=${ACWW_FIRMWARE:-$HOME/acww/ref/firmware_generated.bin}
if [ "$MODE" = quick ]; then
  ACWW_EXIT_FRAME=8001 ACWW_SHOT="2500:$T/a-2500.ppm;8000:$T/a-8000.ppm" ACWW_WAV=$T/a.wav ACWW_SAVE=$T/s.sav \
    timeout -s INT ${QUICK_TIMEOUT:-180} "$B" "$ROM" > $T/log.txt 2>&1 < /dev/null
  if [ -z "$RAW" ]; then
    for f in 2500 8000; do cmp -s $C/deta-$f.ppm $T/a-$f.ppm && echo "frame $f identical" || echo "frame $f DIFFERS"; done
    python3 -c "
a=open('$C/deta.wav','rb').read()[44:]; b=open('$T/a.wav','rb').read()[44:]; n=min(len(a),len(b))
print('audio', 'identical' if a[:n]==b[:n] else 'DIFFERS', n, 'bytes compared')"
  fi
else
  K=$(python3 -c "print(';'.join(f'{f}:6:1' for f in range(2400,30000,60)))"); SH=""
  for f in 4000 6000 9000 12000 16000 20000 25000; do SH="$SH;$f:$T/p-$f.ppm"; done
  ACWW_EXIT_FRAME=25001 ACWW_KEYS="$K" ACWW_SHOT="${SH#;}" ACWW_SAVE=$T/s.sav \
    timeout -s INT ${PLAY_TIMEOUT:-400} "$B" "$ROM" > $T/log.txt 2>&1 < /dev/null
  if [ -z "$RAW" ]; then
    for f in 4000 6000 9000 12000 16000 20000 25000; do cmp -s $C/play-$f.ppm $T/p-$f.ppm && echo "frame $f identical" || echo "frame $f DIFFERS"; done
  fi
fi
echo "(output in $T)"

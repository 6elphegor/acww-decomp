#!/bin/bash
# Local wireless between two copies of the host build on this machine (docs/portability.md 33): one opens its gate, the
# other visits, walks back into the gate house and goes home (tools/host_play_script.py gate-host / gate-visit).
#
#   tools/host_wireless_test.sh <binary> <save file> [output directory] [the host's binary]
#
# <save file>: the save script's (tools/host_play_script.py save); both copies start from a copy of it (two copies
# of one town: the game doesn't mind). About three minutes: real time from frame 9600 on. Passes when the host saw
# the visitor join and leave, the visitor connected, and both ran to the end.
B=${1:?binary}; SAVE=${2:?save file}
T=${3:-$(mktemp -d)}
HB=${4:-$B}  # (another build for the host: play between builds)
ROM=${ACWW_ROM:-$HOME/acww/acww-decomp/extract/baserom_acww_usa.nds}
mkdir -p "$T" && cp "$SAVE" "$T/host.sav" && cp "$SAVE" "$T/visit.sav" || exit 1
cd "$(dirname "$0")/.." || exit 1
export ACWW_HEADLESS=1 ACWW_FAST=9600 ACWW_TEST_JOB_DONE=1 ACWW_WM_LOG=1 ACWW_EXIT_FRAME=17000
export ACWW_FIRMWARE=${ACWW_FIRMWARE:-$HOME/acww/ref/firmware_generated.bin}
run() {  # name, script, MAC, binary
    (eval "$(python3 tools/host_play_script.py "$2")"
     ACWW_MAC=$3 ACWW_SAVE="$T/$1.sav" ACWW_SHOT="12000:$T/$1-12000.ppm;16000:$T/$1-16000.ppm" \
         timeout -s INT 600 $ACWW_RUNNER "$4" "$ROM" > "$T/$1.log" 2>&1 < /dev/null)
}
run host gate-host 00:09:bf:00:00:01 "$HB" &
sleep 1
run visit gate-visit 00:09:bf:00:00:02 "$B"
wait
ok=1
check() { if grep -aq "$2" "$T/$1.log"; then echo "$1: $3"; else echo "$1: NOT $3"; ok=0; fi; }
check host "child 1 joined" "the visitor joined"
check visit "connected as aid 1" "connected"
check host "child 1: left" "the visitor left"
check host "exit at frame 17000" "ran to the end"
check visit "exit at frame 17000" "ran to the end"
echo "(output in $T)"
[ $ok = 1 ]

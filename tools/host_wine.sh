#!/bin/bash
# host_wine.sh <acww.exe> <args...>: run the Windows build (configure_host.py --os windows) under Wine, headless:
# no display (unset DISPLAY / WAYLAND_DISPLAY), Wine's own messages off (WINEDEBUG=-all unless set), a Wine prefix
# of its own ($WINEPREFIX, default ~/.cache/acww-wine; created by the first run). The program sees the environment
# (ACWW_*) and takes Unix paths as they are (Wine's Z: drive is /). For tools/host_oracle.sh:
#   ACWW_RUNNER=tools/host_wine.sh tools/host_oracle.sh build/hostwin64_usa/acww.exe quick
export WINEPREFIX=${WINEPREFIX:-$HOME/.cache/acww-wine} WINEDEBUG=${WINEDEBUG:--all}
unset DISPLAY WAYLAND_DISPLAY
exec wine "$@"

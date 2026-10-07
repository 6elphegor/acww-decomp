#!/bin/sh
# Count the C++ errors the game's sources still have without -fpermissive (64-bit): the conversions between pointers
# and integers left to remove. Usage: tools/host_strict_errors.sh [-v]  (-v: list them)
cd "$(dirname "$0")/.." || exit 1
T=$(mktemp -d)
ls src/*/*.cpp | xargs -P "$(nproc)" -I{} sh -c 'gcc -x c++ -m64 -fsyntax-only -fno-short-enums -fsigned-char \
    -fshort-wchar -ffreestanding -nostdinc -fno-builtin -DMODERN -DHOST -DGAME_VERSION_USA -Iinclude -std=gnu++14 \
    -fno-exceptions -fno-rtti -fmax-errors=0 {} > "$0/$(echo {} | tr / _).txt" 2>&1' "$T"
if [ "$1" = -v ]; then cat "$T"/*.txt | grep ' error: '; fi
echo "$(cat "$T"/*.txt | grep -c ' error: ') errors in $(grep -l ' error: ' "$T"/*.txt | wc -l) files"
rm -rf "$T"

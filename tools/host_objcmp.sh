#!/bin/sh
# host_objcmp.sh OLD.cpp NEW.cpp OUTDIR: compile both versions of a source file as the builds do (-m32 and -m64, no -g) and
# compare the disassembly, relocations and data; then tools/host_fndiff.py OUTDIR/A32.dis OUTDIR/B32.dis -v lists the
# functions that differ. Run from the repository root.
# (both files are compiled from the repo root as src/main/__objcmp.cpp so __FILE__ etc. match)
A=$1; B=$2; D=$3; mkdir -p $D
for m in 32 64; do
  for w in A B; do
    if [ $w = A ]; then f=$A; else f=$B; fi
    cp $f $D/src_$w.cpp
    gcc -x c++ -m$m -fno-pie -fno-short-enums -fsigned-char -fshort-wchar -ffreestanding -nostdinc -fno-strict-aliasing \
      -fpcc-struct-return -fno-builtin -O1 -w -fno-omit-frame-pointer -falign-functions=4 -fdata-sections -ffunction-sections \
      -malign-data=abi -DMODERN -DHOST -DGAME_VERSION_USA -Iinclude $( [ $m = 64 ] && echo -mno-red-zone ) -std=gnu++14 \
      -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -fno-sized-deallocation -fpermissive \
      -iquote src/main -c -o $D/$w$m.o -x c++ - < $f 2>/dev/null || echo "compile failed $w $m"
    objdump -dr --no-show-raw-insn $D/$w$m.o | grep -v 'file format' | sed -e 's/^ *[0-9a-f]*:\t//' > $D/$w$m.dis
    objdump -s $D/$w$m.o -j .data -j .rodata 2>/dev/null | grep -v 'file format' > $D/$w$m.dat
  done
  if cmp -s $D/A$m.dis $D/B$m.dis; then echo "m$m code identical"; else echo "m$m code DIFFERS ($(diff $D/A$m.dis $D/B$m.dis | grep -c '^[<>]') lines)"; fi
  cmp -s $D/A$m.dat $D/B$m.dat || echo "m$m data differs"
done

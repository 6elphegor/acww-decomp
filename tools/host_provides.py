#!/usr/bin/env python3
"""Extract the name aliases from the modern build's linker script for the host build (see tools/configure_host.py).

The modern script `PROVIDE`s the names symbols.txt gives to addresses that the objects don't name themselves: a
second name of a function or variable (`PROVIDE("a" = "b")`) and labels inside data (`PROVIDE("x" = "base" + 0x10)`).
Those keep their meaning on the host. Names defined from section addresses or constants (module bounds, arena
symbols, overlay ids) don't, and are left to the host runtime.

Usage: host_provides.py <arm9.ld> <out.ld>
"""
import re
import sys


def main():
    out = []
    for line in open(sys.argv[1]):
        m = re.match(r'\s*PROVIDE\(\s*("?[^"=\s]+"?)\s*=\s*("?[A-Za-z_][\w$.]*"?)\s*(\+\s*0x[0-9a-fA-F]+|\+\s*\d+)?\s*\);', line)
        if not m:
            continue
        name, target, off = m.group(1), m.group(2), m.group(3) or ""
        t = target.strip('"')
        if re.match(r"^(ARM9|ITCM|DTCM|AUTOLOAD|OV\d+)_", t) or t.startswith(("SDK_", "OVERLAY_")):
            continue
        out.append(f"PROVIDE({name} = {target} {off});")
    open(sys.argv[2], "w").write("\n".join(out) + "\n")


if __name__ == "__main__":
    main()

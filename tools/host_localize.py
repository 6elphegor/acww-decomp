#!/usr/bin/env python3
"""Make the game's definitions of C library names local in the partially linked game object (host build).

The game brings its own C library (MSL: printf, fread, memcpy, strlen...). The host runtime must get the host's
versions of those names, the game its own. After `ld -r` of all game objects, every reference and the definition of a
name share one symbol, so localising it keeps the game's references bound to the game's definition and leaves the
name free for the host's library.

Usage: host_localize.py <nm> <objcopy> <game.o> <out.o> <host libraries...>
"""
import subprocess
import sys


def main():
    nm, objcopy, game, out, *libs = sys.argv[1:]
    defined = set()
    for line in subprocess.run([nm, "--defined-only", "-g", game], capture_output=True, text=True).stdout.splitlines():
        p = line.split()
        if len(p) == 3:
            defined.add(p[2])
    host = set()
    for lib in libs:
        flags = ["-D", "--defined-only"] if ".so" in lib else ["--defined-only"]
        for line in subprocess.run([nm, *flags, lib], capture_output=True, text=True).stdout.splitlines():
            p = line.split()
            if len(p) >= 3:
                host.add(p[2].split("@")[0])
    clash = sorted(defined & host)
    lst = out + ".localize"
    open(lst, "w").write("".join(f"{n}\n" for n in clash))
    subprocess.run([objcopy, f"--localize-symbols={lst}", game, out], check=True)
    print(f"host_localize.py: {len(clash)} names made local", file=sys.stderr)


if __name__ == "__main__":
    main()

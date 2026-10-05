#!/usr/bin/env python3
"""Find loops in the modern build that cannot terminate: a backward branch whose loop body has no memory access,
call or system call, only register arithmetic on values that never change.

GCC keeps a non-volatile global in a register across a loop with no calls in it. The game polls flags that an
interrupt handler or the ARM7 sets (PXI callbacks, DMA and alarm completion) without `volatile`: mwcc reloaded them
on every iteration, GCC doesn't, and the loop spins forever. Each hit names the function and the source line of
the loop, which usually points at a variable that should be `volatile`. Only loops made of compares and branches
are reported (nothing in them changes a register) (see docs/modern.md, "volatile").

Usage: modern_find_spins.py <objdump> <elf> [<addr2line>]
"""
import re
import subprocess
import sys

INSN = re.compile(r"^\s*([0-9a-f]+):\s+(?:[0-9a-f]{4,8}\s?)+\s+(\S+)\s*(.*)$")
FUNC = re.compile(r"^([0-9a-f]+) <(.+)>:$")
BRANCH = re.compile(r"^b(?:eq|ne|cs|cc|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?(?:\.n|\.w)?$")
SPIN_ONLY = re.compile(r"^(cmp|cmn|tst|teq|nop|b(eq|ne|cs|cc|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?)(\.n|\.w)?$")


def main():
    objdump, elf = sys.argv[1], sys.argv[2]
    addr2line = sys.argv[3] if len(sys.argv) > 3 else None
    out = subprocess.run([objdump, "-d", "--no-show-raw-insn", elf], capture_output=True, text=True).stdout
    func = None
    insns = []  # (addr, mnemonic, operands, func)
    for line in out.splitlines():
        m = FUNC.match(line)
        if m:
            func = m.group(2)
            continue
        m = re.match(r"^\s*([0-9a-f]+):\s+(\S+)\s*(.*)$", line)
        if m and func:
            insns.append((int(m.group(1), 16), m.group(2), m.group(3), func))
    by_addr = {a: i for i, (a, _, _, _) in enumerate(insns)}
    hits = []
    for i, (addr, mnem, ops, fn) in enumerate(insns):
        if not BRANCH.match(mnem):
            continue
        m = re.match(r"([0-9a-f]+)\b", ops)
        if not m:
            continue
        target = int(m.group(1), 16)
        if target > addr or target not in by_addr:
            continue
        body = insns[by_addr[target]:i + 1]
        if not body or len(body) > 16:
            continue
        # only compares and branches: no register changes, so nothing can make the loop end
        if not all(SPIN_ONLY.match(b[1]) for b in body):
            continue
        if any(b[3] != fn for b in body):
            continue
        hits.append((addr, fn, body))
    for addr, fn, body in hits:
        where = ""
        if addr2line:
            where = subprocess.run([addr2line, "-e", elf, hex(body[0][0])], capture_output=True, text=True).stdout.strip()
        print(f"{addr:08x} {fn} ({len(body)} insns) {where}")
    print(f"{len(hits)} loops without memory access", file=sys.stderr)


if __name__ == "__main__":
    main()

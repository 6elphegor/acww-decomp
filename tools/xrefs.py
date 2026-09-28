#!/usr/bin/env python3

###
# Shows what an address range references and what references it, across every module. Useful for finding the extent of
# a source file: its functions share data, and the linker places each file's .text, .rodata, .data and .bss in the same
# order.
#
# Usage:
#   python3 tools/xrefs.py 0x020501d4 0x02050288
#   python3 tools/xrefs.py func_020501e8
###

import argparse
import re
from bisect import bisect_right
from pathlib import Path

root_path = Path(__file__).parent.parent
config_path = root_path / "config" / "usa" / "arm9"


def normalize_module(name: str) -> str:
    '''Converts relocation module names like overlay(1), overlays(1,2) and autoload(2) to directory names'''
    match = re.fullmatch(r"(overlays?|autoload)\(([\d,]+)\)", name)
    if not match:
        return name
    ids = match.group(2).split(",")
    if match.group(1) == "autoload":
        return ",".join(f"autoload_{i}" for i in ids)
    return ",".join(f"ov{int(i):03}" for i in ids)


class Module:
    def __init__(self, path: Path):
        self.name = "main" if path == config_path else path.name
        self.symbols = []  # (address, end, name, kind)
        for line in (path / "symbols.txt").read_text().splitlines():
            match = re.match(r"(\S+) kind:(\w+)\(([^)]*)\) addr:(0x[0-9a-f]+)", line)
            if not match:
                continue
            name, kind, options, address = match.group(1), match.group(2), match.group(3), int(match.group(4), 16)
            size = re.search(r"size=(0x[0-9a-f]+)", options)
            end = address + int(size.group(1), 16) if size else address
            self.symbols.append((address, end, name, kind))
        self.symbols.sort()
        self.starts = [s[0] for s in self.symbols]
        self.relocations = []  # (from, kind, to, target module)
        for line in (path / "relocs.txt").read_text().splitlines():
            match = re.match(r"from:(0x[0-9a-f]+) kind:(\w+) to:(0x[0-9a-f]+).* module:(\S+)", line)
            if match:
                self.relocations.append((int(match.group(1), 16), match.group(2), int(match.group(3), 16),
                                         normalize_module(match.group(4))))

    def symbol_at(self, address: int) -> str:
        '''Name of the symbol containing an address, or of the closest symbol before it'''
        i = bisect_right(self.starts, address) - 1
        if i < 0:
            return f"{address:#010x}"
        start, end, name, kind = self.symbols[i]
        if kind == "function" and address >= end:
            return f"{address:#010x}"
        return name if address == start else f"{name}+{address - start:#x}"


def load_modules() -> list[Module]:
    paths = [config_path] + sorted(p.parent for p in config_path.glob("*/symbols.txt"))
    paths += sorted(p.parent for p in (config_path / "overlays").glob("*/symbols.txt"))
    return [Module(p) for p in paths]


def main() -> None:
    parser = argparse.ArgumentParser(description="Shows references from and to an address range")
    parser.add_argument("start", help="Start address or function name")
    parser.add_argument("end", nargs="?", help="End address (exclusive), defaults to the end of the function")
    parser.add_argument("--module", default=None, help="Module containing the range, e.g. main or ov012")
    args = parser.parse_args()

    modules = load_modules()
    module = None
    start = end = None
    for m in modules:
        if args.module and m.name != args.module:
            continue
        for address, symbol_end, name, kind in m.symbols:
            if name == args.start:
                module, start, end = m, address, symbol_end
    if start is None:
        start = int(args.start, 16)
        module = next(m for m in modules if m.name == (args.module or "main"))
    if args.end:
        end = int(args.end, 16)
    if end is None or end <= start:
        parser.error("couldn't determine the end of the range")

    print(f"{module.name} {start:#010x}..{end:#010x}\n")

    print("References from this range:")
    targets = {}
    for frm, kind, to, target_module in module.relocations:
        if start <= frm < end and not start <= to < end:
            target = next((m for m in modules if m.name == target_module), None)
            name = target.symbol_at(to) if target else f"{to:#010x} ({target_module})"
            targets.setdefault((kind, name, target_module), []).append(frm)
    for (kind, name, target_module), froms in sorted(targets.items(), key=lambda t: t[0][1]):
        print(f"  {kind:15} {name:40} {target_module:12} x{len(froms)}")

    print("\nReferences to this range from outside it:")
    sources = {}
    for m in modules:
        for frm, kind, to, target_module in m.relocations:
            if start <= to < end and module.name in target_module.split(",") and not (m is module and start <= frm < end):
                sources.setdefault((m.name, m.symbol_at(frm).split("+")[0], kind), set()).add(module.symbol_at(to))
    for (m, name, kind), tos in sorted(sources.items()):
        print(f"  {m:12} {name:40} {kind:15} -> {', '.join(sorted(tos))}")


if __name__ == "__main__":
    main()

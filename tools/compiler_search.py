#!/usr/bin/env python3

###
# Compiles a source file with every installed mwccarm version and reports which versions reproduce each function's
# original code. Words touched by relocations are ignored, since they are only filled in at link time.
#
# Usage:
#   python3 tools/compiler_search.py src/main/file.c
#   python3 tools/compiler_search.py src/main/file.c --versions 1.2 --flags="-O4,s -thumb"
###

import argparse
import re
import shlex
import struct
import subprocess
import tempfile
from pathlib import Path

from mwcc_config import CC_FLAGS

root_path = Path(__file__).parent.parent
config_path = root_path / "config" / "usa" / "arm9"
extract_path = root_path / "extract" / "usa"
mwcc_root = root_path / "tools" / "mwccarm"
wibo_path = root_path / "wibo"

SHT_SYMTAB = 2
SHT_RELA = 4
SHT_REL = 9
STT_FUNC = 2


class Elf:
    def __init__(self, data: bytes):
        self.data = data
        (e_shoff,) = struct.unpack_from("<I", data, 0x20)
        e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 0x2e)
        self.sections = []
        for i in range(e_shnum):
            name, type, _, _, offset, size, link, info, _, entsize = struct.unpack_from(
                "<10I", data, e_shoff + i * e_shentsize
            )
            self.sections.append(dict(name=name, type=type, offset=offset, size=size, link=link, info=info,
                                      entsize=entsize))

    def section_data(self, index: int) -> bytes:
        section = self.sections[index]
        return self.data[section["offset"]:section["offset"] + section["size"]]

    def string(self, strtab_index: int, offset: int) -> str:
        strtab = self.section_data(strtab_index)
        return strtab[offset:strtab.index(b"\0", offset)].decode()

    def functions(self) -> dict[str, tuple[int, int, int]]:
        '''Maps function names to (section index, offset, size)'''
        functions = {}
        for section in self.sections:
            if section["type"] != SHT_SYMTAB:
                continue
            data = self.data[section["offset"]:section["offset"] + section["size"]]
            for i in range(0, len(data), 16):
                name, value, size, info, _, shndx = struct.unpack_from("<IIIBBH", data, i)
                if info & 0xf == STT_FUNC and shndx != 0:
                    functions[self.string(section["link"], name)] = (shndx, value & ~1, size)
        return functions

    def relocated_offsets(self, section_index: int) -> set[int]:
        offsets = set()
        for section in self.sections:
            if section["type"] not in (SHT_REL, SHT_RELA) or section["info"] != section_index:
                continue
            data = self.data[section["offset"]:section["offset"] + section["size"]]
            entry_size = 12 if section["type"] == SHT_RELA else 8
            for i in range(0, len(data), entry_size):
                (offset,) = struct.unpack_from("<I", data, i)
                offsets.update(range(offset, offset + 4))
        return offsets


def load_symbols() -> dict[str, tuple[int, int]]:
    '''Maps function names to (address, size) across all modules'''
    symbols = {}
    for path in config_path.rglob("symbols.txt"):
        for line in path.read_text().splitlines():
            match = re.match(r"(\S+) kind:function\(\w+,size=(0x[0-9a-f]+)[^)]*\) addr:(0x[0-9a-f]+)", line)
            if match:
                symbols[match.group(1)] = (int(match.group(3), 16), int(match.group(2), 16))
    return symbols


def load_modules() -> list[tuple[str, int, bytes]]:
    '''Returns (name, base address, code) for ARM9 main and every overlay'''
    modules = [("main", 0x02000000, (extract_path / "arm9" / "arm9.bin").read_bytes()),
               ("autoload_2", 0x020e7500, (extract_path / "arm9" / "unk_autoload_2.bin").read_bytes()),
               ("itcm", 0x01ff8000, (extract_path / "arm9" / "itcm.bin").read_bytes())]
    overlays_yaml = (extract_path / "arm9_overlays" / "overlays.yaml").read_text()
    for block in re.split(r"\n  - ", overlays_yaml)[1:]:
        fields = dict(re.findall(r"(\w+): (\S+)", block))
        path = extract_path / "arm9_overlays" / fields["file_name"]
        modules.append((f"ov{int(fields['id']):03}", int(fields["base_address"]), path.read_bytes()))
    return modules


def original_code(name: str, address: int, size: int, modules) -> bytes | None:
    # Overlays share address ranges, so use the module named in the symbol, e.g. func_ov012_02212345
    match = re.match(r"\w+?_(ov\d{3})_", name)
    # The ARM9 main module and the library autoloads (autoload_2, itcm) don't overlap
    wanted = {match.group(1)} if match else {"main", "autoload_2", "itcm"}
    for module_name, base, code in modules:
        if module_name in wanted and base <= address < base + len(code):
            return code[address - base:address - base + size]
    return None


def compile(compiler: Path, flags: str, source: Path, out: Path) -> bool:
    command = [str(wibo_path), str(compiler), *shlex.split(flags), "-i", str(root_path / "include"),
               "-lang=c++" if source.suffix == ".cpp" else "-lang=c", "-c", str(source), "-o", str(out)]
    result = subprocess.run(command, capture_output=True, text=True)
    if result.returncode != 0 or not out.exists():
        return False
    return True


def compare(elf: Elf, name: str, original: bytes) -> str:
    functions = elf.functions()
    if name not in functions:
        return "missing"
    shndx, offset, size = functions[name]
    code = elf.section_data(shndx)[offset:offset + size]
    relocated = elf.relocated_offsets(shndx)
    if size != len(original):
        return f"size {size:#x}"
    mismatches = sum(1 for i in range(size) if i + offset not in relocated and code[i] != original[i])
    return "OK" if mismatches == 0 else f"{mismatches} bytes"


def main() -> None:
    parser = argparse.ArgumentParser(description="Finds which compiler versions match a source file")
    parser.add_argument("source", type=Path)
    parser.add_argument("--versions", default="", help="Only test versions starting with this, e.g. 1.2")
    parser.add_argument("--flags", default=CC_FLAGS, help="Compiler flags, defaults to the project's flags")
    args = parser.parse_args()

    symbols = load_symbols()
    modules = load_modules()
    compilers = sorted(p for p in mwcc_root.glob("*/*/mwccarm.exe")
                       if str(p.parent.relative_to(mwcc_root)).startswith(args.versions))

    with tempfile.TemporaryDirectory() as tmp:
        results = {}
        names = []
        for compiler in compilers:
            version = str(compiler.parent.relative_to(mwcc_root))
            out = Path(tmp) / f"{version.replace('/', '_')}.o"
            if not compile(compiler, args.flags, args.source, out):
                results[version] = None
                continue
            elf = Elf(out.read_bytes())
            if not names:
                names = sorted(n for n in elf.functions() if n in symbols)
            results[version] = {}
            for name in names:
                address, size = symbols[name]
                original = original_code(name, address, size, modules)
                results[version][name] = compare(elf, name, original) if original else "no original"

    width = max([len(n) for n in names] + [8])
    print(f"{'version':<10} " + " ".join(f"{n:<{width}}" for n in names))
    for version, result in results.items():
        if result is None:
            print(f"{version:<10} compile error")
        else:
            print(f"{version:<10} " + " ".join(f"{result[n]:<{width}}" for n in names))


if __name__ == "__main__":
    main()

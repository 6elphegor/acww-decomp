#!/usr/bin/env python3
"""Build the modern build's ROM from its linked ELF (see docs/modern.md, "Linking").

Writes a copy of the dsd config (config/<version>/arm9/config.yaml) whose module binaries are the modern build's,
extracts each module's binary from the ELF (objcopy), then runs `dsd rom config` and `dsd rom build` as the matching
build does, and finally tools/fix_header.py (secure-area CRC from the base ROM when there is no ARM7 BIOS).

Usage: modern_rom.py --elf <elf> --config config/usa/arm9 --build build/modern_usa --objcopy <objcopy> --dsd <dsd>
           --baserom <baserom.nds> -o <rom.nds>
"""
import argparse
import os
import subprocess
import sys
from pathlib import Path

import yaml


def run(cmd):
    result = subprocess.run([str(c) for c in cmd])
    if result.returncode != 0:
        sys.exit(f"modern_rom.py: {' '.join(map(str, cmd))} failed ({result.returncode})")


def section_addresses(objdump: str, elf: Path) -> dict[str, int]:
    out = subprocess.run([objdump, "-h", str(elf)], capture_output=True, text=True, check=True).stdout
    addrs = {}
    for line in out.splitlines():
        parts = line.split()
        if len(parts) >= 4 and parts[0].isdigit():
            addrs[parts[1]] = int(parts[3], 16)
    return addrs


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--config", type=Path, required=True)
    p.add_argument("--build", type=Path, required=True)
    p.add_argument("--objcopy", required=True)
    p.add_argument("--dsd", required=True)
    p.add_argument("--baserom", type=Path, required=True)
    p.add_argument("--arm7-bios", type=Path)
    p.add_argument("-o", "--output", type=Path, required=True)
    args = p.parse_args()

    config_dir = args.config.resolve()
    config = yaml.safe_load((config_dir / "config.yaml").read_text())
    dsd_dir = (args.build / "dsd").resolve()
    bin_dir = (args.build / "bin").resolve()
    dsd_dir.mkdir(parents=True, exist_ok=True)
    bin_dir.mkdir(parents=True, exist_ok=True)

    def rel(path: Path) -> str:
        return os.path.relpath(path, dsd_dir)

    def module(entry: dict, section: str, bin_name: str):
        entry["object"] = rel(bin_dir / bin_name)
        for key in ("delinks", "symbols", "relocations"):
            if key in entry:
                entry[key] = rel(config_dir / entry[key])
        run([args.objcopy, "-O", "binary", "-j", section, args.elf, bin_dir / bin_name])

    config["rom_config"] = rel((config_dir / config["rom_config"]).resolve())
    config["build_path"] = rel(args.build.resolve())
    config["delinks_path"] = rel((config_dir / config["delinks_path"]).resolve())
    module(config["main_module"], "ARM9", "arm9.bin")
    for a in config["autoloads"]:
        kind = a["kind"]
        name = kind.upper() if isinstance(kind, str) else f"AUTOLOAD_{kind['Unknown']}"
        module(a, name, Path(a["object"]).name)
    for o in config["overlays"]:
        module(o, f"OV{o['id']:03}", Path(o["object"]).name)
    for key in ("objdiff", "objdiff_path"):
        config.pop(key, None)

    dsd_config = dsd_dir / "config.yaml"
    dsd_config.write_text(yaml.safe_dump(config, sort_keys=False))

    run([args.dsd, "rom", "config", "--elf", args.elf, "--config", dsd_config])

    # dsd takes the autoloads' base addresses from the original ROM (they never move in the matching build); here
    # they come from the linked ELF
    sections = section_addresses(args.objcopy.replace("objcopy", "objdump"), args.elf)
    for a in config["autoloads"]:
        kind = a["kind"]
        name = kind.upper() if isinstance(kind, str) else f"AUTOLOAD_{kind['Unknown']}"
        yaml_path = (dsd_dir / a["object"]).resolve().with_suffix(".yaml")
        info = yaml.safe_load(yaml_path.read_text())
        info["base_address"] = sections[name]
        yaml_path.write_text(yaml.safe_dump(info, sort_keys=False))
    rom_config = bin_dir / "rom_config.yaml"
    unfixed = args.build / "rom_unfixed.nds"
    bios = ["--arm7-bios", args.arm7_bios] if args.arm7_bios else []
    run([args.dsd, "rom", "build", "--config", rom_config, "--rom", unfixed, *bios])
    if args.arm7_bios:
        os.replace(unfixed, args.output)
    else:
        run([sys.executable, "tools/fix_header.py", unfixed, "--baserom", args.baserom, "-o", args.output])


if __name__ == "__main__":
    main()

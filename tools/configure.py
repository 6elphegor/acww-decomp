#!/usr/bin/env python3

import os
import re
from pathlib import Path
import argparse
import sys

import ninja_syntax
from get_platform import get_platform
from mwcc_config import MWCC_VERSION, DECOMP_ME_COMPILER, CC_FLAGS, AS_FLAGS
import object_order
import bss_units
import aliases
import lcf_symbols


DEFAULT_WIBO_PATH = "./wibo"


parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument('-w', type=str, default=DEFAULT_WIBO_PATH, dest="wine", required=False, help="Path to Wine/Wibo (Linux and macOS only)")
parser.add_argument("--compiler", type=Path, required=False, help="Path to pre-installed compiler root directory")
parser.add_argument("--no-extract", action="store_true", help="Skip extract step")
parser.add_argument("--dsd", type=Path, required=False, help="Path to pre-installed dsd CLI")
parser.add_argument('version', nargs='?', default='usa', help='Game version')
args = parser.parse_args()


# Config
GAME = "acww"
DSD_VERSION = 'v0.12.1'
WIBO_VERSION = '1.2.0'
OBJDIFF_VERSION = 'v3.8.1'
LD_FLAGS = " ".join([
    "-proc arm946e",        # Target processor
    "-nostdlib",            # No C/C++ standard library
    "-interworking",        # Enable ARM/Thumb interworking
    "-m Entry",             # Set entry function
    "-map closure,unused",  # Generate map file
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
])
DSD_OBJDIFF_ARGS = " ".join([
    "--scratch",                        # Metadata for creating decomp.me scratches
    f"--compiler {DECOMP_ME_COMPILER}", # decomp.me compiler name
    f'--c-flags "{CC_FLAGS}"',          # decomp.me compiler flags
    "--custom-make ninja",              # Command for rebuilding files
])


# Paths
current_path     = Path(__name__)
root_path        = current_path.parent
build_ninja_path = root_path / "build.ninja"
arm7_bios_path   = root_path / "arm7_bios.bin"
config_path      = root_path / "config"
build_path       = root_path / "build"
src_path         = root_path / "src"
libs_path        = root_path / "libs"
extract_path     = root_path / "extract"
tools_path       = root_path / "tools"
mwcc_root        = args.compiler or tools_path / "mwccarm"
mwcc_path        = mwcc_root / MWCC_VERSION


# Includes
includes = [
    str(root_path / "include")
]
for root, dirs, _ in os.walk(libs_path):
    for dir in dirs:
        if dir == "include":
            includes.append(Path(root) / dir)
CC_INCLUDES = " ".join(f"-i {include}" for include in includes)


# Platform info
platform = get_platform()
if platform is None:
    exit(1)
EXE = platform.exe
WINE = args.wine if platform.system != "windows" else ""
DSD = str(args.dsd or os.path.join('.', str(root_path / f"dsd{EXE}")))
OBJDIFF = os.path.join('.', str(root_path / f"objdiff-cli{EXE}"))
CC = os.path.join('.', str(mwcc_path / "mwccarm.exe"))
LD = os.path.join('.', str(mwcc_path / "mwldarm.exe"))
AS = os.path.join('.', str(mwcc_path / "mwasmarm.exe"))
PYTHON = sys.executable


class Project:
    def __init__(self, game_version: str):
        self.game_version = game_version
        '''Version of the game'''
        self.game_config = config_path / game_version
        '''Root directory for dsd configs'''

        if not self.game_config.is_dir():
            print(f"Version '{game_version}' not recognized")
            exit(1)

        self.game_build = build_path / game_version
        '''Path to build directory'''
        self.game_extract = extract_path / game_version
        '''Path to extract directory'''

        self.delinks_files = get_config_files(self.game_config, "delinks.txt")
        '''Paths to every delinks.txt file'''
        self.relocs_files = get_config_files(self.game_config, "relocs.txt")
        '''Paths to every relocs.txt file'''
        self.symbols_files = get_config_files(self.game_config, "symbols.txt")
        '''Paths to every symbols.txt file'''

    def dsd_configs(self) -> list[str]:
        return self.delinks_files + self.relocs_files + self.symbols_files

    def arm9_config_yaml(self) -> Path:
        return self.game_config / "arm9" / "config.yaml"

    def baserom(self) -> Path:
        return extract_path / f'baserom_{GAME}_{self.game_version}.nds'

    def build_rom(self) -> str:
        return f"{GAME}_{self.game_version}.nds"

    def build_rom_unfixed(self) -> Path:
        return self.game_build / f"{GAME}_{self.game_version}_unfixed.nds"

    def baserom_config(self) -> Path:
        return self.game_extract / 'config.yaml'

    def build_rom_config(self) -> Path:
        return self.game_build / "build" / "rom_config.yaml"

    def source_object_files(self) -> list[str]:
        return [
            str(self.game_build / source_file.with_suffix(".o"))
            for source_file in [*get_c_cpp_files([src_path, libs_path]), *get_asm_files([src_path, libs_path])]
        ]

    def arm9_lcf(self) -> Path:
        return self.game_build / "arm9.lcf"

    def arm9_objects_txt(self) -> Path:
        return self.game_build / "objects.txt"

    def object_order_files(self) -> list[Path]:
        '''Paths to every object_order.txt file, see tools/object_order.py'''
        return object_order.description_files(self.game_config / "arm9")

    def arm9_delink_yaml(self) -> Path:
        return self.game_build / "delinks" / "delink.yaml"

    def arm9_o(self) -> Path:
        return self.game_build / "arm9.o"

    def arm9_delinks(self) -> Path:
        return self.game_build / "delinks"

    def objdiff_report(self) -> Path:
        return self.game_build / "report.json"


def main():
    project = Project(args.version)

    with build_ninja_path.open("w") as file:
        n = ninja_syntax.Writer(file)

        n.rule(
            name="download_tool",
            command=f'{PYTHON} tools/download_tool.py $tool $tag --path $path'
        )
        n.newline()

        if arm7_bios_path.is_file():
            n.variable("arm7_bios_flag", f"--arm7-bios {arm7_bios_path.relative_to(root_path)}")
        else:
            n.variable("arm7_bios_flag", "")
        n.newline()

        n.rule(
            name="extract",
            command=f"{DSD} rom extract --rom $in --output-path $output_path $arm7_bios_flag"
        )
        n.newline()

        n.rule(
            name="delink",
            command=f"{DSD} delink --config-path $config_path"
        )
        n.newline()

        # -MMD excludes all includes instead of just system includes for some reason, so use -MD instead.
        mwcc_cmd = f'{WINE} "$cc" {CC_FLAGS} {CC_INCLUDES} $cc_flags -d $game_version -MD -c $in -o $basedir'
        mwcc_implicit = [CC]
        if platform.system != "windows":
            transform_dep = "tools/transform_dep.py"
            mwcc_cmd += f" && {PYTHON} {transform_dep} $basefile.d $basefile.d"
            mwcc_implicit.append(transform_dep)
            if WINE == DEFAULT_WIBO_PATH:
                mwcc_implicit.append(WINE)
        n.rule(
            name="mwcc",
            command=mwcc_cmd,
            depfile="$basefile.d",
        )
        n.newline()

        # Standalone assembly units (src/**/*.s, original hand-written assembly), see "Assembly units (.s)" in
        # tools/pipeline/linking.md. mwasmarm has no -MD for .include files; the units are self-contained.
        n.rule(
            name="mwasm",
            command=f'{WINE} "$as" {AS_FLAGS} {CC_INCLUDES} $as_flags -c $in -o $out',
        )
        n.newline()

        # Units with `.incbin` lines (bytes taken from the extracted ROM): expanded first by tools/expand_incbin.py,
        # because mwasmarm's .incbin reads files in text mode.
        n.rule(
            name="mwasm_incbin",
            command=f'{PYTHON} tools/expand_incbin.py $in $out.s && '
                    f'{WINE} "$as" {AS_FLAGS} {CC_INCLUDES} $as_flags -c $out.s -o $out',
        )
        n.newline()

        n.rule(
            name="lcf",
            command=f"{DSD} lcf --config-path $config_path"
        )
        n.newline()

        n.rule(
            name="mwld",
            command=f'{WINE} "{LD}" {LD_FLAGS} @$objects_file $lcf_file -o $out'
        )
        n.newline()

        n.rule(
            name="object_order",
            command=f"{PYTHON} tools/object_order.py $objects_file $lcf_file --config $config_path "
                    "--build $build_path -o $out_lcf --objects-out $out_objects"
        )
        n.newline()

        n.rule(
            name="aliases",
            command=f"{PYTHON} tools/aliases.py $objects_file --config $config_path --build $build_path "
                    "--objects-out $out_objects"
        )
        n.newline()

        n.rule(
            name="bss_units",
            command=f"{PYTHON} tools/bss_units.py $objects_file $lcf_file --config $config_path "
                    "-o $out_lcf --objects-out $out_objects"
        )
        n.newline()

        n.rule(
            name="lcf_symbols",
            command=f"{PYTHON} tools/lcf_symbols.py $objects_file $lcf_file --config $config_path -o $out_lcf"
        )
        n.newline()

        n.rule(
            name="force_active",
            command=f"{PYTHON} tools/force_active.py $in -o $out --symbols $symbols_files"
        )
        n.newline()

        n.rule(
            name="rom_config",
            command=f"{DSD} rom config --elf $in --config $config_path"
        )
        n.newline()

        n.rule(
            name="rom_build",
            command=f"{DSD} rom build --config $in --rom $out $arm7_bios_flag"
        )
        n.newline()

        n.rule(
            name="fix_header",
            command=f"{PYTHON} tools/fix_header.py $in --baserom $baserom -o $out"
        )
        n.newline()

        n.rule(
            name="objdiff",
            command=f"{DSD} objdiff --config-path $config_path {DSD_OBJDIFF_ARGS}"
        )
        n.newline()

        n.rule(
            name="objdiff_report",
            command=f"{OBJDIFF} report generate -o $out"
        )
        n.newline()

        n.rule(
            name="check_modules",
            command=f"{DSD} check modules --config-path $config_path --fail"
        )
        n.newline()

        n.rule(
            name="check_symbols",
            command=f"{DSD} check symbols --config-path $config_path --elf-path $elf_path --fail"
        )
        n.newline()

        n.rule(
            name="sha1",
            command=f"{PYTHON} tools/sha1.py $in -c $sha1_file"
        )
        n.newline()

        add_download_tool_builds(n)
        add_extract_build(n, project)
        add_delink_and_lcf_builds(n, project)
        add_mwcc_builds(n, project, mwcc_implicit)
        add_mwasm_builds(n, project, [WINE] if platform.system != "windows" and WINE == DEFAULT_WIBO_PATH else [])
        add_mwld_and_rom_builds(n, project)
        add_check_builds(n, project)
        add_objdiff_builds(n, project)

        n.default("sha1")


def add_download_tool_builds(n: ninja_syntax.Writer):
    if args.dsd is None:
        n.build(
            rule="download_tool",
            outputs=DSD,
            variables={
                "tool": "dsd",
                "tag": DSD_VERSION,
                "path": DSD,
            },
        )
        n.newline()

    n.build(
        rule="download_tool",
        outputs=OBJDIFF,
        variables={
            "tool": "objdiff",
            "tag": OBJDIFF_VERSION,
            "path": OBJDIFF,
        }
    )
    n.newline()

    if args.compiler is None:
        n.build(
            rule="download_tool",
            outputs=[CC, LD, AS],
            variables={
                "tool": "mwccarm",
                "tag": "latest",
                "path": tools_path,
            },
        )
        n.newline()

    if platform.system != "windows" and WINE == DEFAULT_WIBO_PATH:
        n.build(
            rule="download_tool",
            outputs=WINE,
            variables={
                "tool": "wibo",
                "tag": WIBO_VERSION,
                "path": WINE,
            },
        )
        n.newline()


def add_extract_build(n: ninja_syntax.Writer, project: Project):
    if not args.no_extract:
        n.build(
            inputs=str(project.baserom()),
            implicit=DSD,
            rule="extract",
            outputs=str(project.baserom_config()),
            variables={
                "output_path": str(project.game_extract)
            }
        )
        n.newline()


def add_mwld_and_rom_builds(n: ninja_syntax.Writer, project: Project):
    lcf_file = str(project.arm9_lcf())
    objects_file = str(project.arm9_objects_txt())
    delink_file = str(project.arm9_delink_yaml())
    elf_file = str(project.arm9_o())

    # Main units that own .bss in autoload_3 are listed there under a placeholder name, see tools/bss_units.py. The
    # step only exists when a delinks.txt has such a placeholder.
    if bss_units.placeholders(project.game_config / "arm9"):
        bss_lcf_file = str(project.game_build / "arm9_bss_units.lcf")
        bss_objects_file = str(project.game_build / "objects_bss_units.txt")
        n.build(
            inputs=[objects_file, lcf_file],
            implicit=["tools/bss_units.py"] + project.delinks_files,
            rule="bss_units",
            outputs=[bss_lcf_file, bss_objects_file],
            variables={
                "objects_file": objects_file,
                "lcf_file": lcf_file,
                "config_path": str(project.game_config / "arm9"),
                "out_lcf": bss_lcf_file,
                "out_objects": bss_objects_file,
            },
        )
        n.newline()
        lcf_file = bss_lcf_file
        objects_file = bss_objects_file

    # Units built from several objects are placed object by object, see tools/object_order.py. The step only exists
    # when a module has an object_order.txt.
    order_files = project.object_order_files()
    if order_files:
        order_objects = []
        for order_file in order_files:
            for unit in object_order.parse_description(order_file):
                order_objects += [str(project.game_build / Path(source).with_suffix(".o")) for source in unit.sources()]
        order_configs = [
            str(order_file.parent / name)
            for order_file in order_files
            for name in [order_file.name, "delinks.txt", "symbols.txt", "relocs.txt"]
        ]
        if any(order_file.parent == project.game_config / "arm9" for order_file in order_files):
            # units of the main module: their bss is described by autoload_3
            order_configs += [
                str(project.game_config / "arm9" / object_order.MAIN_BSS_MODULE / name)
                for name in ["delinks.txt", "symbols.txt"]
            ]
        order_lcf_file = str(project.game_build / "arm9_object_order.lcf")
        order_objects_file = str(project.game_build / "objects_object_order.txt")
        n.build(
            inputs=[objects_file, lcf_file],
            implicit=["tools/object_order.py"] + order_configs + order_objects,
            rule="object_order",
            outputs=[order_lcf_file, order_objects_file],
            variables={
                "objects_file": objects_file,
                "lcf_file": lcf_file,
                "config_path": str(project.game_config / "arm9"),
                "build_path": str(project.game_build),
                "out_lcf": order_lcf_file,
                "out_objects": order_objects_file,
            },
        )
        n.newline()
        lcf_file = order_lcf_file
        objects_file = order_objects_file

    # Compiled units of main, of the library modules (autoload_2, itcm) and of the overlays get the second names
    # (symbols.txt labels) of their functions, see tools/aliases.py. The step only exists when a module has complete
    # units.
    arm9_config = project.game_config / "arm9"
    if aliases.has_complete_units(arm9_config):
        alias_objects_file = str(project.game_build / "objects_aliases.txt")
        alias_units = [
            str(project.game_build / Path(source).with_suffix(".o"))
            for source in aliases.complete_units(arm9_config)
        ]
        n.build(
            inputs=[objects_file],
            implicit=["tools/aliases.py", "tools/object_order.py"]
                     + [str(module_dir / name) for module_dir in aliases.module_dirs(arm9_config)
                        for name in ("delinks.txt", "symbols.txt", object_order.DESCRIPTION_FILE)
                        if (module_dir / name).is_file()]
                     + alias_units,
            rule="aliases",
            outputs=[alias_objects_file],
            variables={
                "objects_file": objects_file,
                "config_path": str(arm9_config),
                "build_path": str(project.game_build),
                "out_objects": alias_objects_file,
            },
        )
        n.newline()
        objects_file = alias_objects_file

    # Names for addresses inside linked units that other code still uses are defined in the linker script, see
    # tools/lcf_symbols.py. The step only exists when a module has an lcf_symbols.txt with entries.
    if lcf_symbols.has_labels(arm9_config):
        labels_lcf_file = str(project.game_build / "arm9_lcf_symbols.lcf")
        n.build(
            inputs=[objects_file, lcf_file],
            implicit=["tools/lcf_symbols.py", delink_file]
                     + [str(path) for path in lcf_symbols.input_files(arm9_config)]
                     + project.delinks_files + project.symbols_files + project.source_object_files(),
            rule="lcf_symbols",
            outputs=[labels_lcf_file],
            variables={
                "objects_file": objects_file,
                "lcf_file": lcf_file,
                "config_path": str(arm9_config),
                "out_lcf": labels_lcf_file,
            },
        )
        n.newline()
        lcf_file = labels_lcf_file

    # Linker script with FORCE_ACTIVE for delinked code, see tools/force_active.py
    force_active_lcf_file = str(project.game_build / "arm9_force_active.lcf")
    n.build(
        inputs=[objects_file, lcf_file],
        implicit=["tools/force_active.py", delink_file] + project.symbols_files,
        rule="force_active",
        outputs=force_active_lcf_file,
        variables={
            "symbols_files": " ".join(project.symbols_files),
        },
    )
    n.newline()

    linker_implicit = [LD]
    if platform.system != "windows" and WINE == DEFAULT_WIBO_PATH:
        linker_implicit.append(WINE)
    n.build(
        inputs=project.source_object_files() + [force_active_lcf_file, objects_file, delink_file],
        implicit=linker_implicit,
        rule="mwld",
        outputs=elf_file,
        variables={
            "target_dir": project.game_build,
            "objects_file": objects_file,
            "lcf_file": force_active_lcf_file,
        }
    )
    n.newline()

    n.build(
        inputs=elf_file,
        rule="phony",
        outputs="arm9",
    )
    n.newline()

    rom_config_file = str(project.build_rom_config())
    n.build(
        inputs=elf_file,
        implicit=DSD,
        rule="rom_config",
        outputs=rom_config_file,
        variables={
            "config_path": project.arm9_config_yaml(),
        }
    )
    n.newline()

    rom_file = project.build_rom()
    if arm7_bios_path.is_file():
        n.build(
            inputs=rom_config_file,
            implicit=DSD,
            rule="rom_build",
            outputs=rom_file,
        )
        n.newline()
    else:
        # Without the ARM7 BIOS, dsd can't compute the secure area CRC
        unfixed_rom_file = str(project.build_rom_unfixed())
        n.build(
            inputs=rom_config_file,
            implicit=DSD,
            rule="rom_build",
            outputs=unfixed_rom_file,
        )
        n.newline()

        n.build(
            inputs=unfixed_rom_file,
            implicit=["tools/fix_header.py", str(project.baserom())],
            rule="fix_header",
            outputs=rom_file,
            variables={
                "baserom": str(project.baserom()),
            }
        )
        n.newline()

    n.build(
        inputs=rom_file,
        rule="phony",
        outputs="rom",
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="sha1",
        variables={
            "sha1_file": str(Path(rom_file).with_suffix(".sha1"))
        },
        outputs="sha1",
    )
    n.newline()


def add_mwcc_builds(n: ninja_syntax.Writer, project: Project, mwcc_implicit: list[Path]):
    for source_file in get_c_cpp_files([src_path, libs_path]):
        src_obj_path = project.game_build / source_file
        cc_flags = []
        cc = CC
        version = source_mwcc_version(source_file)
        if version is not None:
            cc = os.path.join('.', str(mwcc_root / version / "mwccarm.exe"))
        if is_cpp(source_file): cc_flags.append("-lang=c++")
        elif is_c(source_file): cc_flags.append("-lang=c")
        cc_flags += source_mwcc_flags(source_file)
        n.build(
            inputs=str(source_file),
            implicit=[*mwcc_implicit, cc],
            rule="mwcc",
            outputs=str(src_obj_path.with_suffix(".o")),
            variables={
                "game_version": project.game_version,
                "cc": cc,
                "cc_flags": " ".join(cc_flags),
                "basedir": os.path.dirname(src_obj_path),
                "basefile": str(src_obj_path.with_suffix("")),
            },
        )
        n.newline()


def source_mwcc_version(source_file: Path) -> str | None:
    # A "// mwcc-version: 1.2/sp2" line near the top of a source file overrides the compiler for that file
    with open(source_file, encoding="utf-8", errors="replace") as f:
        for _, line in zip(range(10), f):
            match = re.match(r"\s*//\s*mwcc-version:\s*(\S+)", line)
            if match:
                return match.group(1)
    return None


def source_mwcc_flags(source_file: Path) -> list[str]:
    # A "// mwcc-flags: -O4,p" line near the top of a source file appends flags for that file (later flags win)
    with open(source_file, encoding="utf-8", errors="replace") as f:
        for _, line in zip(range(10), f):
            match = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
            if match:
                return match.group(1).split()
    return []


def add_mwasm_builds(n: ninja_syntax.Writer, project: Project, implicit: list[str]):
    compiled = {source_file.with_suffix("") for source_file in get_c_cpp_files([src_path, libs_path])}
    for source_file in get_asm_files([src_path, libs_path]):
        if source_file.with_suffix("") in compiled:
            sys.exit(f"configure.py: {source_file} and a .c/.cpp file of the same name would both build "
                     f"{source_file.with_suffix('.o')}")
        assembler = AS
        version = source_header(source_file, "mwasm-version")
        if version is not None:
            assembler = os.path.join('.', str(mwcc_root / version / "mwasmarm.exe"))
        flags = source_header(source_file, "mwasm-flags")
        # Units that `.incbin` bytes from the extracted ROM (the secure area's filler) wait for the extract step.
        incbin = ".incbin" in source_file.read_text(errors="replace")
        extract_dep = [str(project.baserom_config()), "tools/expand_incbin.py"] if incbin else []
        n.build(
            inputs=str(source_file),
            implicit=[*implicit, assembler, *extract_dep],
            rule="mwasm_incbin" if incbin else "mwasm",
            outputs=str((project.game_build / source_file).with_suffix(".o")),
            variables={
                "as": assembler,
                "as_flags": flags or "",
            },
        )
        n.newline()


def source_header(source_file: Path, key: str) -> str | None:
    # A "; mwasm-flags: ..." / "; mwasm-version: 1.2/sp2" line within the first 10 lines of an assembly unit
    with open(source_file, encoding="utf-8", errors="replace") as f:
        for _, line in zip(range(10), f):
            match = re.match(r"\s*;\s*" + re.escape(key) + r":\s*(.+?)\s*$", line)
            if match:
                return match.group(1)
    return None


def get_asm_files(dirs: list[Path]):
    for dir in dirs:
        for root, _, files in os.walk(dir):
            root = Path(root)
            for file in files:
                if is_asm(file):
                    yield root / file


def is_asm(name: str):
    return Path(name).suffix in [".s"]


def get_c_cpp_files(dirs: list[Path]):
    for dir in dirs:
        for root, _, files in os.walk(dir):
            root = Path(root)
            for file in files:
                if is_cpp(file) or is_c(file):
                    yield root / file


def is_cpp(name: str):
    return Path(name).suffix in [".cpp"]


def is_c(name: str):
    return Path(name).suffix in [".c"]


def add_delink_and_lcf_builds(n: ninja_syntax.Writer, project: Project):
    n.comment("Delink ELF binaries when any delinks.txt file is modified")
    rom_config = str(project.baserom_config())
    delinks_path = project.arm9_delinks()
    n.build(
        inputs=project.dsd_configs() + [rom_config],
        implicit=DSD,
        rule="delink",
        outputs=str(delinks_path / "delink.yaml"),
        variables={
            "config_path": project.arm9_config_yaml(),
        }
    )
    n.newline()

    n.build(
        inputs=str(delinks_path / "delink.yaml"),
        rule="phony",
        outputs="delink"
    )
    n.newline()

    lcf_file = project.arm9_lcf()
    objects_file = project.arm9_objects_txt()
    n.build(
        inputs=project.delinks_files + [str(rom_config)],
        implicit=DSD,
        rule="lcf",
        outputs=[str(lcf_file), str(objects_file)],
        variables={
            "config_path": project.arm9_config_yaml(),
        }
    )
    n.newline()


def add_check_builds(n: ninja_syntax.Writer, project: Project):
    n.build(
        inputs=str(project.arm9_o()),
        rule="check_modules",
        outputs="check_modules",
        variables={
            "config_path": project.arm9_config_yaml(),
        },
    )
    n.newline()

    n.build(
        inputs=str(project.arm9_o()),
        rule="check_symbols",
        outputs="check_symbols",
        variables={
            "config_path": project.arm9_config_yaml(),
            "elf_path": project.arm9_o(),
        },
    )
    n.newline()

    n.build(
        inputs=["check_modules", "check_symbols"],
        rule="phony",
        outputs="check",
    )
    n.newline()


def add_objdiff_builds(n: ninja_syntax.Writer, project: Project):
    n.build(
        inputs=project.dsd_configs(),
        implicit=DSD,
        rule="objdiff",
        outputs="objdiff.json",
        variables={
            "config_path": project.arm9_config_yaml(),
        }
    )
    n.newline()

    n.build(
        inputs="objdiff.json",
        rule="phony",
        outputs="objdiff",
    )
    n.newline()

    n.build(
        inputs=["objdiff.json"],
        implicit=[OBJDIFF] + project.source_object_files(),
        rule="objdiff_report",
        outputs=str(project.objdiff_report()),
    )
    n.newline()

    n.build(
        inputs=str(project.objdiff_report()),
        rule="phony",
        outputs="report",
    )
    n.newline()


def get_config_files(game_config: Path, name: str) -> list[str]:
    return [
        f"{root}/{file}"
        for root, _, files in os.walk(game_config)
        for file in files
        if file == name
    ]


if __name__ == "__main__": main()

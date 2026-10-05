#!/usr/bin/env python3
"""Compare the member offsets written in the headers' comments (`/* 0x1c */ u16 foo;`, mwcc's layout, checked by the
matching build) with GCC's offsets from the DWARF of the modern build's objects (see docs/modern.md, "Class layout").

For every class or struct in include/ and src/ whose members carry offset comments, the first member whose GCC offset
differs from the comment is listed (later members usually follow from it), with the members before it: the culprit is
usually the one just before (a member whose tail padding mwcc reuses, a 64-bit member, a base class).

Usage: modern_offset_comments.py <objects.txt> [dirs...]
"""
import os
import re
import sys

from elftools.elf.elffile import ELFFile

CLASS = re.compile(r"^\s*(?:class|struct|union)\s+(?:__attribute__\(\([^)]*\)\)\s*)?([A-Za-z_]\w*)\b[^;{]*\{", re.M)
MEMBER = re.compile(r"/\*\s*(0x[0-9a-fA-F]+|\d+)\s*\*/\s*[^;/]*?\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?::\s*\d+\s*)?;")


def comment_offsets(path):
    text = open(path, encoding="utf-8", errors="replace").read()
    out = {}
    for m in CLASS.finditer(text):
        name = m.group(1)
        i, depth = m.end(), 1
        start = i
        while i < len(text) and depth:
            if text[i] == "{":
                depth += 1
            elif text[i] == "}":
                depth -= 1
            i += 1
        body = text[start:i - 1]
        # members at the class's own level only: blank nested braces
        flat, d = [], 0
        for c in body:
            if c == "{":
                d += 1
            if d == 0:
                flat.append(c)
            else:
                flat.append(" " if c != "\n" else "\n")
            if c == "}":
                d -= 1
        members = []
        for mm in MEMBER.finditer("".join(flat)):
            # `/* 0x24 */ s32 x, y, z;`: the offset is the first declarator's
            decl = mm.group(0)[mm.group(0).index("*/") + 2:].split(",")[0]
            names = re.findall(r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?::\s*\d+\s*)?(?:;|$)", decl.strip())
            members.append((names[-1] if names else mm.group(2), int(mm.group(1), 0)))
        if members:
            out.setdefault(name, (path, members))
    return out


def dwarf_offsets(objects):
    classes = {}
    for obj in objects:
        try:
            with open(obj, "rb") as f:
                elf = ELFFile(f)
                if not elf.has_dwarf_info():
                    continue
                for cu in elf.get_dwarf_info().iter_CUs():
                    for die in cu.iter_DIEs():
                        if die.tag not in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
                            continue
                        a = die.attributes.get("DW_AT_name")
                        if not a or "DW_AT_declaration" in die.attributes:
                            continue
                        name = a.value.decode()
                        if name in classes:
                            continue
                        offs = {}
                        for c in die.iter_children():
                            if c.tag != "DW_TAG_member" or "DW_AT_name" not in c.attributes:
                                continue
                            if "DW_AT_data_member_location" in c.attributes:
                                offs[c.attributes["DW_AT_name"].value.decode()] = \
                                    c.attributes["DW_AT_data_member_location"].value
                            elif "DW_AT_data_bit_offset" in c.attributes:
                                offs[c.attributes["DW_AT_name"].value.decode()] = None  # bitfield: not checked
                        classes[name] = offs
        except Exception as e:
            print(f"{obj}: {e}", file=sys.stderr)
    return classes


def main():
    objects = [l.strip() for l in open(sys.argv[1]) if l.strip() and "/gaps/" not in l]
    dirs = sys.argv[2:] or ["include", "src"]
    comments = {}
    for d in dirs:
        for root, _, files in os.walk(d):
            for f in sorted(files):
                if f.endswith((".h", ".hpp", ".c", ".cpp")):
                    for k, v in comment_offsets(os.path.join(root, f)).items():
                        comments.setdefault(k, v)
    gcc = dwarf_offsets(objects)
    bad = 0
    for name, (path, members) in sorted(comments.items()):
        offs = gcc.get(name)
        if offs is None:
            continue
        prev = []
        for member, off in members:
            g = offs.get(member, "missing")
            if g is None or g == "missing":
                continue
            if g != off:
                before = ", ".join(f"{n} {o:#x}" for n, o in prev[-2:])
                print(f"{name}: {member} comment {off:#x} gcc {g:#x} (after {before})  [{path}]")
                bad += 1
                break
            prev.append((member, off))
    print(f"{bad} classes whose GCC offsets differ from their offset comments", file=sys.stderr)


if __name__ == "__main__":
    main()

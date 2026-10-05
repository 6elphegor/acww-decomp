#!/usr/bin/env python3
"""Convert an assembly unit (src/**/*.s, written for mwasmarm) for the GNU assembler of the modern build.

The units already use GNU-style directives; what differs is the comment character (`;` for mwasmarm, `@` for GNU
as on ARM, where `;` separates statements) and therefore the `@function`/`@object` type markers (`%function` for GNU
as). Usage: gas_from_mwasm.py <in.s> <out.s>
"""
import re
import sys
from pathlib import Path


def convert_line(line: str) -> str:
    out = []
    in_string = False
    for i, c in enumerate(line):
        if c == '"':
            in_string = not in_string
        elif c == ";" and not in_string:
            comment = line[i + 1:].rstrip("\n")
            code = "".join(out).rstrip()
            return (f"{code}\t@{comment}" if code else f"@{comment}") + "\n"
        out.append(c)
    return "".join(out)


def convert(text: str) -> str:
    lines = [convert_line(line) for line in text.splitlines(keepends=True)]
    text = "".join(lines)
    return re.sub(r",\s*@(function|object)\b", r", %\1", text)


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    Path(sys.argv[2]).write_text(convert(Path(sys.argv[1]).read_text()))


if __name__ == "__main__":
    main()

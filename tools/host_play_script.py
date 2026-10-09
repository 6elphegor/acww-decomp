#!/usr/bin/env python3
"""The scripted inputs of the host build's test runs (docs/host.md, "Test scripts"), one script for every build.

    eval "$(python3 tools/host_play_script.py town)"   # sets ACWW_KEYS and ACWW_TOUCH
    python3 tools/host_play_script.py --list

Scripts (headless runs with the oracle's firmware image and a fresh save file unless said otherwise):
  play      the oracle's play script: the touch on the title, A every second from frame 2400.
  town      a new game through the intro (the name entries: a touch on the keyboard's Confirm button every
            600 frames and Start every second confirm a name), the town hall's tutorial, out into town.
  save      town, then the walk to the player's house, into the house and out, Tom Nook's talk about the loan,
            Start -> "Save and end": the first save (written to ACWW_SAVE) and back to the title.
  continue  with the save file from `save`: the title's continue path, the player wakes up in the house and
            stands in front of it in town.
Frame numbers are virtual frames (ACWW_KEYS / ACWW_TOUCH: frame:frames:value); keys are KEYINPUT bits (hex).
"""
import sys

A, B, START, RIGHT, LEFT, UP, DOWN = 0x1, 0x2, 0x8, 0x10, 0x20, 0x40, 0x80


def every(start, end, step, frames, value):
    return [(f, frames, value) for f in range(start, end, step)]


def play():
    keys = every(2400, 30000, 60, 6, A)
    touch = [(2200, 10, '128,96')]
    return keys, touch


# the walk from in front of the town hall to the player's house door (frame, frames, keys)
TOWN_END = 21050


def town():
    keys = every(2400, TOWN_END, 60, 6, A) + every(7650, TOWN_END, 60, 6, START)
    keys += every(TOWN_END + 50, TOWN_END + 650, 60, 6, B)   # (closes Pelly's last talk)
    keys += [(TOWN_END + 750, 400, DOWN)]                     # out of the town hall
    touch = [(2200, 10, '128,96')] + every(7630, TOWN_END, 600, 6, '218,180')
    return keys, touch


def save():
    keys, touch = town()
    # from in front of the town hall (145, 56): south past a tree, over the bridge, west along the river's south bank,
    # around the house's south-east corner to its door at (81, 109) (ACWW_POSLOG positions)
    keys += [(22400, 100, DOWN), (22550, 30, RIGHT), (22600, 380, DOWN), (23000, 400, LEFT), (23420, 200, DOWN),
             (23630, 165, LEFT), (23820, 150, UP)]
    keys += every(24000, 24241, 60, 6, A)      # opens the door
    keys += [(24900, 150, DOWN)]               # back out
    keys += every(25300, 31841, 60, 6, A)      # Tom Nook's talk
    keys += [(32300, 6, START)]
    keys += every(32500, 33501, 200, 6, A)     # "Save and end"
    return keys, touch


def cont():
    keys = every(2400, 30000, 60, 6, A)
    touch = [(2200, 10, '128,96')]
    return keys, touch


def probe():  # (scratch: opening the map)
    keys, touch = town()
    import os
    for e in os.environ.get('PROBE', '').split(';'):
        if e:
            f, n, m = e.split(':')
            keys.append((int(f), int(n), int(m, 16)))
    return keys, touch


SCRIPTS = {'probe': probe, 'play': play, 'town': town, 'save': save, 'continue': cont}


def fmt(entries, hexval):
    out = []
    for f, n, v in sorted(entries, key=lambda e: e[0]):
        out.append(f'{f}:{n}:{v:x}' if hexval else f'{f}:{n}:{v}')
    return ';'.join(out)


def main():
    if len(sys.argv) != 2 or sys.argv[1] in ('-h', '--help'):
        print(__doc__)
        return 0
    if sys.argv[1] == '--list':
        print(' '.join(SCRIPTS))
        return 0
    keys, touch = SCRIPTS[sys.argv[1]]()
    print(f"export ACWW_KEYS='{fmt(keys, True)}'")
    print(f"export ACWW_TOUCH='{fmt(touch, False)}'")
    return 0


if __name__ == '__main__':
    sys.exit(main())

#!/usr/bin/env python3
"""Resolve the preprocessor conditionals on HOST / MODERN / NONMATCHING in place (a partial unifdef).

The modern branch builds only the PC port (the matching DS ROM is built from the decomp's own branches), so the code
under these macros is always on and the DS-only alternatives are dead. Groups whose condition is decided by them are
collapsed: the live branch is kept without its directives, the dead ones are dropped. Conditions that depend on
anything else (HOST64, __LP64__, the architecture, include guards) are kept as they are; an #elif / #else of a kept
group whose own condition is decided is folded into it.

usage: host_resolve_ifdefs.py [--check] FILE...    (--check: print what would change, write nothing)
"""
import re
import sys
from itertools import product

DEFINED = {"HOST", "MODERN", "NONMATCHING"}
DIRECTIVE = re.compile(r'^\s*#\s*(if|ifdef|ifndef|elif|else|endif)\b(.*)$')


def strip_comment(s):
    s = re.sub(r'/\*.*?\*/', ' ', s)
    return s.split('//')[0].strip()


def evaluate(kind, expr):
    """True / False if the condition is decided by DEFINED, else None."""
    expr = strip_comment(expr)
    if kind in ('ifdef', 'ifndef'):
        name = expr.split()[0] if expr else ''
        if name not in DEFINED:
            return None
        return kind == 'ifdef'
    # #if / #elif: defined(X) / defined X for the known names, everything else an unknown term
    known = re.sub(r'\bdefined\s*\(\s*(\w+)\s*\)|\bdefined\s+(\w+)',
                   lambda m: '1' if (m.group(1) or m.group(2)) in DEFINED else m.group(0), expr)
    if known == expr and not any(re.search(r'\b%s\b' % d, expr) for d in DEFINED):
        return None
    # the unknown terms: defined(...) of other names, identifiers, comparisons of them
    terms = []
    def term(m):
        terms.append(m.group(0))
        return f'__t{len(terms) - 1}'
    py = re.sub(r'\bdefined\s*\(\s*\w+\s*\)|\bdefined\s+\w+|\b[A-Za-z_]\w*\b(\s*(==|!=|>=|<=|>|<)\s*\w+)?', term, known)
    py = py.replace('&&', ' and ').replace('||', ' or ')
    py = re.sub(r'!(?!=)', ' not ', py)
    if len(terms) > 4:
        return None
    results = set()
    for values in product((0, 1), repeat=len(terms)):
        env = {f'__t{i}': v for i, v in enumerate(values)}
        try:
            results.add(bool(eval(py, {}, env)))
        except Exception:
            return None
    return results.pop() if len(results) == 1 else None


def resolve(lines):
    out = []
    # a frame per open conditional: kept (the directive stays in the output), live (this branch is emitted),
    # taken (a branch of a resolved group was already chosen), outer_live (the enclosing branch is emitted)
    stack = []
    def emitting():
        return all(f['live'] for f in stack)
    for line in lines:
        m = DIRECTIVE.match(line)
        if not m:
            if emitting():
                out.append(line)
            continue
        kind, rest = m.group(1), m.group(2)
        if kind in ('if', 'ifdef', 'ifndef'):
            outer = emitting()
            v = evaluate(kind, rest)
            if v is None:
                stack.append({'kept': True, 'live': True, 'taken': False, 'dropped_rest': False})
                if outer:
                    out.append(line)
            else:
                stack.append({'kept': False, 'live': v, 'taken': v, 'dropped_rest': False})
            continue
        f = stack[-1]
        stack.pop()
        outer = emitting()
        stack.append(f)
        if kind == 'elif':
            v = evaluate('if', rest)
            if f['kept']:
                if f['dropped_rest']:
                    f['live'] = False
                elif v is None:
                    f['live'] = True
                    if outer:
                        out.append(line)
                elif v:
                    # always true from here: the rest of the group is this branch, as an #else
                    f['live'] = True
                    f['dropped_rest'] = True
                    if outer:
                        out.append(re.sub(r'#\s*elif\b.*', '#else', line))
                else:
                    f['live'] = False
            else:
                if f['taken']:
                    f['live'] = False
                elif v is None:
                    # undecided after dead branches: this branch opens a kept group of its own
                    f.update(kept=True, live=True)
                    if outer:
                        out.append(re.sub(r'#\s*elif\b', '#if', line, count=1))
                elif v:
                    f.update(live=True, taken=True)
                else:
                    f['live'] = False
        elif kind == 'else':
            if f['kept']:
                if f['dropped_rest']:
                    f['live'] = False
                else:
                    f['live'] = True
                    if outer:
                        out.append(line)
            else:
                f['live'] = not f['taken']
                f['taken'] = True
        else:  # endif
            stack.pop()
            if f['kept'] and outer:
                out.append(line)
    assert not stack, 'unbalanced conditionals'
    return out


def main():
    args = sys.argv[1:]
    check = '--check' in args
    files = [a for a in args if a != '--check']
    changed = 0
    for path in files:
        with open(path, encoding='utf-8', errors='surrogateescape') as fh:
            text = fh.read()
        lines = text.split('\n')
        try:
            new = '\n'.join(resolve(lines))
        except AssertionError as e:
            print(f'{path}: {e}', file=sys.stderr)
            continue
        if new != text:
            changed += 1
            if check:
                print(f'{path}: {len(lines) - new.count(chr(10)) - 1} lines removed')
            else:
                with open(path, 'w', encoding='utf-8', errors='surrogateescape') as fh:
                    fh.write(new)
    print(f'{changed} files {"would change" if check else "changed"}', file=sys.stderr)


if __name__ == '__main__':
    main()

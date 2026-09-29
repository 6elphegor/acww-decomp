# Compiler settings shared by configure.py and other tools

# The 1.2 series matches the game; 2.0 and DSi compilers don't. 1.2/sp3 and later return from Thumb functions with
# `pop {pc}` instead of `pop {r3}; bx r3`. Thumb switch jump tables are dispatched with
# `ldrh r0, [r0, #8]; lsls; asrs; add r0, pc; bx r0` in 558 of 563 cases, which only 1.2/b56 and 1.2/base generate
# (sp2 and sp2p3 differ). b56 and base haven't been told apart. The 5 exceptions are in overlay 65, which uses the
# sp2p3/sp3 form and was likely built separately.
# Adjuster thunks (secondary-base `_ZThn` entries) are the exception: all 159 in the game save r2 around the `this`
# adjustment, which 1.2/sp2 does and 1.2/base doesn't, so the real compiler is probably 1.2/sp1, which isn't available.
# Files containing thunks use sp2 via a `// mwcc-version: 1.2/sp2` first line (see configure.py).
MWCC_VERSION = "1.2/base"
DECOMP_ME_COMPILER = "mwcc_20_72" # decomp.me name for MWCC_VERSION (internal version 2.0 build 72)
CC_FLAGS = " ".join([
    "-O4,s",                # Optimize for size (speed optimization rotates loops differently from the game)
    "-enum int",            # Use int-sized enums
    "-char signed",         # Char type is signed
    "-str noreuse",         # Equivalent strings are different objects
    "-proc arm946e",        # Target processor
    "-thumb",               # Generate Thumb code, used by nearly all of the game and SDK
    "-gccext,on",           # Enable GCC extensions
    "-fp soft",             # Compute float operations in software
    "-inline noauto",       # Inline only functions marked with 'inline'
    "-Cpp_exceptions off",  # Disable C++ exceptions
    "-RTTI off",            # Disable runtime type information
    "-interworking",        # Enable ARM/Thumb interworking
    "-w off",               # Disable warnings
    "-sym on",              # Debug info, including line numbers
    "-gccinc",              # Interpret #include "..." and #include <...> equally
    "-nolink",              # Do not link
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
])

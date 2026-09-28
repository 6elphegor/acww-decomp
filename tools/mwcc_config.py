# Compiler settings shared by configure.py and other tools

# The 1.2 series matches the game; 2.0 and DSi compilers don't. 1.2/sp3 and later return from Thumb functions with
# `pop {pc}` instead of the game's `pop {r3}; bx r3`, so it's one of 1.2/b56, base, sp2 or sp2p3.
MWCC_VERSION = "1.2/sp2p3"
DECOMP_ME_COMPILER = "mwcc_20_82" # decomp.me name for MWCC_VERSION (internal version 2.0 build 82)
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

// Host build: the first of the game's objects in the link (tools/configure_host.py). Its two variables are the
// first of the game's variables in the program's .data and .bss: linkers place the input sections of an output
// section in the order of the input files, so the game's data lies between these and game_end.c's (include/
// host_mem.h: HOST_GAME_DATA / HOST_GAME_BSS; for the debug dumps and HostMem_IsGameRam).
char gHostGameDataBegin[1] = {1};
char gHostGameBssBegin[1];

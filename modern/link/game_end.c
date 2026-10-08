// Host build: the last of the game's objects in the link (tools/configure_host.py; see game_begin.c). Its two
// variables follow the last of the game's variables in the program's .data and .bss.
char gHostGameDataEnd[1] = {1};
char gHostGameBssEnd[1];

// Host build: the key binding screen (frontend_ui.h). Each DS button has a key and a controller button (either may
// be none); the controller's left stick and triggers stay the D-pad and L / R besides. The screen is drawn into an
// overlay of the screens' size (256x384) with a 5x7 font of its own, which frontend_sdl.c shows over the frame.
//   F1 or Back + Start: open / close        Up / Down (or the D-pad): choose a line
//   Enter (or A): change it - the next key or controller button pressed becomes its (Escape: keep the old one)
//   Delete (or Y): clear it                  Escape, F1 (or B): close (the bindings are saved then)
// F1 and F11 can't be bound (the frontend's own keys); M mutes only while no DS button has it.
#if HOST_FRONTEND_SDL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "frontend_ui.h"

enum { W = 256, H = 384, NACT = 12, NLINES = NACT + 2 };
static const struct { const char *name; uint32_t bit; SDL_Scancode key; SDL_GameControllerButton pad; } kActions[NACT] = {
    {"A", 1u << 0, SDL_SCANCODE_X, SDL_CONTROLLER_BUTTON_B},  // (the face buttons by position: right = A)
    {"B", 1u << 1, SDL_SCANCODE_Z, SDL_CONTROLLER_BUTTON_A},
    {"X", 1u << 10, SDL_SCANCODE_S, SDL_CONTROLLER_BUTTON_Y},
    {"Y", 1u << 11, SDL_SCANCODE_A, SDL_CONTROLLER_BUTTON_X},
    {"L", 1u << 9, SDL_SCANCODE_Q, SDL_CONTROLLER_BUTTON_LEFTSHOULDER},
    {"R", 1u << 8, SDL_SCANCODE_W, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER},
    {"START", 1u << 3, SDL_SCANCODE_RETURN, SDL_CONTROLLER_BUTTON_START},
    {"SELECT", 1u << 2, SDL_SCANCODE_RSHIFT, SDL_CONTROLLER_BUTTON_BACK},
    {"UP", 1u << 6, SDL_SCANCODE_UP, SDL_CONTROLLER_BUTTON_DPAD_UP},
    {"DOWN", 1u << 7, SDL_SCANCODE_DOWN, SDL_CONTROLLER_BUTTON_DPAD_DOWN},
    {"LEFT", 1u << 5, SDL_SCANCODE_LEFT, SDL_CONTROLLER_BUTTON_DPAD_LEFT},
    {"RIGHT", 1u << 4, SDL_SCANCODE_RIGHT, SDL_CONTROLLER_BUTTON_DPAD_RIGHT},
};
static SDL_Scancode sKey[NACT];
static SDL_GameControllerButton sPad[NACT];
static int sOpen, sLine, sCapture, sDirty = 1;
static char sPath[1024];

// ---- the bindings and their file: a line per DS button, "<button>\t<key>\t<controller button>" (SDL's names; "-":
// none)
static void defaults(void) {
    for (int i = 0; i < NACT; i++) sKey[i] = kActions[i].key, sPad[i] = kActions[i].pad;
}
static void save(void) {
    FILE *f = sPath[0] ? fopen(sPath, "w") : NULL;
    if (!f) { fprintf(stderr, "frontend: key bindings: can't write %s\n", sPath); return; }
    fprintf(f, "# Animal Crossing: Wild World (native): key bindings - DS button, key, controller button (- none)\n");
    for (int i = 0; i < NACT; i++) {
        const char *k = sKey[i] != SDL_SCANCODE_UNKNOWN ? SDL_GetScancodeName(sKey[i]) : "-";
        const char *p = sPad[i] != SDL_CONTROLLER_BUTTON_INVALID ? SDL_GameControllerGetStringForButton(sPad[i]) : "-";
        fprintf(f, "%s\t%s\t%s\n", kActions[i].name, k && *k ? k : "-", p ? p : "-");
    }
    fclose(f);
}
static void load(void) {
    FILE *f = fopen(sPath, "r");
    if (!f) return;
    char line[256];
    while (fgets(line, sizeof line, f)) {
        if (line[0] == '#') continue;
        line[strcspn(line, "\r\n")] = 0;
        char *k = strchr(line, '\t'), *p = k ? strchr(k + 1, '\t') : NULL;
        if (!p) continue;
        *k++ = 0, *p++ = 0;
        for (int i = 0; i < NACT; i++) {
            if (strcmp(line, kActions[i].name)) continue;
            sKey[i] = strcmp(k, "-") ? SDL_GetScancodeFromName(k) : SDL_SCANCODE_UNKNOWN;
            sPad[i] = strcmp(p, "-") ? SDL_GameControllerGetButtonFromString(p) : SDL_CONTROLLER_BUTTON_INVALID;
        }
    }
    fclose(f);
}
void ui_init(void) {
    defaults();
    if (getenv("ACWW_BINDINGS")) {
        snprintf(sPath, sizeof sPath, "%s", getenv("ACWW_BINDINGS"));
    } else {
        char *dir = SDL_GetPrefPath("", "acww");
        if (dir) snprintf(sPath, sizeof sPath, "%sbindings.txt", dir);
        SDL_free(dir);
    }
    load();
}

uint32_t ui_keyboard_keys(const Uint8 *keyboard) {
    uint32_t k = 0;
    for (int i = 0; i < NACT; i++)
        if (sKey[i] != SDL_SCANCODE_UNKNOWN && keyboard[sKey[i]]) k |= kActions[i].bit;
    return k;
}
uint32_t ui_pad_keys(SDL_GameController *pad) {
    uint32_t k = 0;
    for (int i = 0; i < NACT; i++)
        if (sPad[i] != SDL_CONTROLLER_BUTTON_INVALID && SDL_GameControllerGetButton(pad, sPad[i])) k |= kActions[i].bit;
    return k;
}
int ui_key_bound(SDL_Scancode sc) {
    for (int i = 0; i < NACT; i++)
        if (sKey[i] == sc) return 1;
    return 0;
}
int ui_is_open(void) { return sOpen; }

// ---- the screen's controls
static void set_open(int open) {
    if (sOpen && !open) save();
    sOpen = open;
    sCapture = 0;
    sDirty = 1;
}
static void bind_key(SDL_Scancode sc) {
    for (int i = 0; i < NACT; i++)
        if (sKey[i] == sc) sKey[i] = SDL_SCANCODE_UNKNOWN;  // (a key does one thing)
    sKey[sLine] = sc;
}
static void bind_pad(SDL_GameControllerButton b) {
    for (int i = 0; i < NACT; i++)
        if (sPad[i] == b) sPad[i] = SDL_CONTROLLER_BUTTON_INVALID;
    sPad[sLine] = b;
}
static void choose(void) {  // Enter / A on the current line
    if (sLine < NACT) sCapture = 1;
    else if (sLine == NACT) defaults();
    else set_open(0);
}
int ui_event(const SDL_Event *e) {
    if (e->type == SDL_KEYDOWN && !e->key.repeat && e->key.keysym.scancode == SDL_SCANCODE_F1) {
        set_open(!sOpen);
        return 1;
    }
    if (e->type == SDL_CONTROLLERBUTTONDOWN && !sCapture) {  // Back + Start: open / close
        SDL_GameController *c = SDL_GameControllerFromInstanceID(e->cbutton.which);
        int b = e->cbutton.button;
        if (c && ((b == SDL_CONTROLLER_BUTTON_BACK && SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_START)) ||
                  (b == SDL_CONTROLLER_BUTTON_START && SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_BACK)))) {
            set_open(!sOpen);
            return 1;
        }
    }
    if (!sOpen) return 0;
    sDirty = 1;
    if (e->type == SDL_KEYDOWN && !e->key.repeat) {
        SDL_Scancode sc = e->key.keysym.scancode;
        if (sCapture) {
            if (sc != SDL_SCANCODE_ESCAPE && sc != SDL_SCANCODE_F11) bind_key(sc);
            sCapture = 0;
        } else if (sc == SDL_SCANCODE_UP) {
            sLine = (sLine + NLINES - 1) % NLINES;
        } else if (sc == SDL_SCANCODE_DOWN) {
            sLine = (sLine + 1) % NLINES;
        } else if (sc == SDL_SCANCODE_RETURN || sc == SDL_SCANCODE_KP_ENTER) {
            choose();
        } else if ((sc == SDL_SCANCODE_DELETE || sc == SDL_SCANCODE_BACKSPACE) && sLine < NACT) {
            sKey[sLine] = SDL_SCANCODE_UNKNOWN;
            sPad[sLine] = SDL_CONTROLLER_BUTTON_INVALID;
        } else if (sc == SDL_SCANCODE_ESCAPE) {
            set_open(0);
        }
    } else if (e->type == SDL_CONTROLLERBUTTONDOWN) {
        SDL_GameControllerButton b = (SDL_GameControllerButton)e->cbutton.button;
        if (sCapture) {
            bind_pad(b);
            sCapture = 0;
        } else if (b == SDL_CONTROLLER_BUTTON_DPAD_UP) {
            sLine = (sLine + NLINES - 1) % NLINES;
        } else if (b == SDL_CONTROLLER_BUTTON_DPAD_DOWN) {
            sLine = (sLine + 1) % NLINES;
        } else if (b == SDL_CONTROLLER_BUTTON_A) {
            choose();
        } else if (b == SDL_CONTROLLER_BUTTON_Y && sLine < NACT) {
            sKey[sLine] = SDL_SCANCODE_UNKNOWN;
            sPad[sLine] = SDL_CONTROLLER_BUTTON_INVALID;
        } else if (b == SDL_CONTROLLER_BUTTON_B) {
            set_open(0);
        }
    }
    return 1;  // (everything else while open: the game is paused)
}

// ---- drawing: a 5x7 font (rows of 5 bits, the top row first; capitals only)
static const struct { char c; const char *rows; } kFont[] = {
    {'A', ".###.#...##...#######...##...##...#"}, {'B', "####.#...##...#####.#...##...#####."},
    {'C', ".###.#...##....#....#....#...#.###."}, {'D', "####.#...##...##...##...##...#####."},
    {'E', "######....#....####.#....#....#####"}, {'F', "######....#....####.#....#....#...."},
    {'G', ".###.#...##....#.####...##...#.####"}, {'H', "#...##...##...#######...##...##...#"},
    {'I', ".###...#....#....#....#....#...###."}, {'J', "..###...#....#....#....#.#..#..##.."},
    {'K', "#...##..#.#.#..##...#.#..#..#.#...#"}, {'L', "#....#....#....#....#....#....#####"},
    {'M', "#...###.###.#.##.#.##...##...##...#"}, {'N', "#...##...###..##.#.##..###...##...#"},
    {'O', ".###.#...##...##...##...##...#.###."}, {'P', "####.#...##...#####.#....#....#...."},
    {'Q', ".###.#...##...##...##.#.##..#..##.#"}, {'R', "####.#...##...#####.#.#..#..#.#...#"},
    {'S', ".#####....#.....###.....#....#####."}, {'T', "#####..#....#....#....#....#....#.."},
    {'U', "#...##...##...##...##...##...#.###."}, {'V', "#...##...##...##...##...#.#.#...#.."},
    {'W', "#...##...##...##.#.##.#.##.#.#.#.#."}, {'X', "#...##...#.#.#...#...#.#.#...##...#"},
    {'Y', "#...##...#.#.#...#....#....#....#.."}, {'Z', "#####....#...#...#...#...#....#####"},
    {'0', ".###.#...##..###.#.###..##...#.###."}, {'1', "..#...##....#....#....#....#...###."},
    {'2', ".###.#...#....#...#...#...#...#####"}, {'3', "####.....#....#.###.....#....#####."},
    {'4', "...#...##..#.#.#..#.#####...#....#."}, {'5', "######....####.....#....##...#.###."},
    {'6', ".###.#....#....####.#...##...#.###."}, {'7', "#####....#...#...#...#....#....#..."},
    {'8', ".###.#...##...#.###.#...##...#.###."}, {'9', ".###.#...##...#.####....#....#.###."},
    {':', "......#....#.........#....#........"}, {'-', "...............#####..............."},
    {'(', "...#...#...#....#....#.....#.....#."}, {')', ".#.....#.....#....#....#...#...#..."},
    {'/', "....#....#...#...#...#...#....#...."}, {'>', ".#.....#.....#.....#...#...#...#..."},
    {'<', "...#...#...#...#.....#.....#.....#."}, {'.', ".........................##...##..."},
    {',', "....................##....#...#...."}, {'\'', "..#....#...#......................."},
    {'=', "..........#####.....#####.........."}, {'+', "......#....#..#####..#....#........"},
    {'?', ".###.#...#....#...#...#.........#.."}, {'!', "..#....#....#....#....#.........#.."},
    {'_', "..............................#####"}, {'[', ".###..#....#....#....#....#....###."},
    {']', ".###....#....#....#....#....#..###."}, {'&', ".##..#..#.#.#...#...#.#.##..#..##.#"},
    {';', "......#....#.........#....#...#...."}, {'"', ".#.#..#.#.........................."},
    {'#', ".#.#..#.#.#####.#.#.#####.#.#..#.#."}, {'%', "##..###..#...#...#...#...#..###..##"},
};
static uint32_t sPix[W * H];

static void fill_rect(int x, int y, int w, int h, uint32_t argb) {
    for (int j = y; j < y + h && j < H; j++)
        for (int i = x; i < x + w && i < W; i++)
            if (i >= 0 && j >= 0) sPix[j * W + i] = argb;
}
// text at (x, y), capitals; 6 pixels a character; at most `max` characters (0: all)
static void text(int x, int y, const char *s, uint32_t argb, int max) {
    for (int n = 0; *s && (!max || n < max); s++, n++, x += 6) {
        char c = *s >= 'a' && *s <= 'z' ? (char)(*s - 32) : *s;
        if (c == ' ') continue;
        const char *rows = NULL;
        for (unsigned g = 0; g < sizeof kFont / sizeof kFont[0]; g++)
            if (kFont[g].c == c) rows = kFont[g].rows;
        if (!rows) rows = kFont[48].rows;  // ('?')
        for (int r = 0; r < 7; r++)
            for (int b = 0; b < 5; b++)
                if (rows[r * 5 + b] == '#' && x + b < W && y + r < H) sPix[(y + r) * W + x + b] = argb;
    }
}
static const char *pad_name(SDL_GameControllerButton b) {
    static const char *const kNames[] = {"A", "B", "X", "Y", "BACK", "GUIDE", "START", "L-STICK", "R-STICK", "LB",
                                         "RB", "D-PAD UP", "D-PAD DOWN", "D-PAD LEFT", "D-PAD RIGHT"};
    if (b == SDL_CONTROLLER_BUTTON_INVALID) return "-";
    if ((unsigned)b < sizeof kNames / sizeof kNames[0]) return kNames[b];
    const char *s = SDL_GameControllerGetStringForButton(b);
    return s ? s : "?";
}

const uint32_t *ui_overlay(int *changed) {
    *changed = sDirty;
    if (!sOpen) { sDirty = 0; return NULL; }
    if (!sDirty) return sPix;
    sDirty = 0;
    const uint32_t kBack = 0xf0101820, kBar = 0xff30508a, kText = 0xffffffff, kDim = 0xff98a8c0, kHi = 0xffffe070;
    fill_rect(0, 0, W, H, kBack);
    text(8, 6, "KEY BINDINGS", kHi, 0);
    text(256 - 8 - 6 * 9, 6, "F1: CLOSE", kDim, 0);
    text(8, 22, "DS", kDim, 0);
    text(62, 22, "KEY", kDim, 0);
    text(158, 22, "CONTROLLER", kDim, 0);
    for (int i = 0; i < NLINES; i++) {
        int y = 36 + i * 11 + (i >= NACT ? 6 : 0);
        if (i == sLine) fill_rect(4, y - 2, W - 8, 11, kBar);
        if (i == NACT) { text(8, y, "RESET TO DEFAULTS", kText, 0); continue; }
        if (i == NACT + 1) { text(8, y, "CLOSE", kText, 0); continue; }
        text(8, y, kActions[i].name, kText, 0);
        if (sCapture && i == sLine) {
            text(62, y, "PRESS A KEY OR BUTTON", kHi, 0);
            continue;
        }
        text(62, y, sKey[i] != SDL_SCANCODE_UNKNOWN ? SDL_GetScancodeName(sKey[i]) : "-", kText, 15);
        text(158, y, pad_name(sPad[i]), kText, 16);
    }
    static const char *const kHelp[] = {
        "UP/DOWN: CHOOSE",
        "ENTER: CHANGE - THEN PRESS A KEY OR",
        "  A CONTROLLER BUTTON (ESC: KEEP IT)",
        "DELETE: CLEAR",
        "ESC OR F1: CLOSE AND SAVE",
        "",
        "CONTROLLER: D-PAD CHOOSES, A CHANGES,",
        "  Y CLEARS, B CLOSES; BACK+START OPENS",
        "  THIS. ITS LEFT STICK IS ALSO THE",
        "  D-PAD, ITS TRIGGERS L AND R.",
        "",
        "THE GAME IS PAUSED WHILE THIS IS OPEN.",
        "",
        "OTHER KEYS: F11 WINDOW SIZE,",
        "  ALT+ENTER FULL SCREEN, M MUTE",
    };
    for (unsigned i = 0; i < sizeof kHelp / sizeof kHelp[0]; i++) text(8, 204 + (int)i * 11, kHelp[i], kDim, 0);
    return sPix;
}

#endif

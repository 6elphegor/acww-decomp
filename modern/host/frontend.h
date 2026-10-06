// Host build: the shared memory between the game (32-bit) and the viewer (modern/host/viewer, 64-bit SDL): the
// game publishes each frame, the viewer writes the input back. Plain fixed-size types: both sides use this header.
#ifndef HOST_FRONTEND_H
#define HOST_FRONTEND_H

#include <stdint.h>

#define ACWW_SHM_MAGIC 0x41435757u  // "ACWW"
#define ACWW_SHM_NAME_DEFAULT "/acww-host"
#define ACWW_AUDIO_RATE 32728     // the DS mixer: one stereo sample every 1024 cycles of 33.51 MHz
#define ACWW_AUDIO_FRAMES 16384   // power of two

typedef struct {
    uint32_t magic;
    uint32_t frame;        // bumped by the game after each published frame
    uint32_t keys;         // pressed: bit 0 A, 1 B, 2 Select, 3 Start, 4 Right, 5 Left, 6 Up, 7 Down, 8 R, 9 L,
                           // 10 X, 11 Y
    int32_t touch_x, touch_y;
    uint32_t touch_down;
    uint32_t quit;         // set by the viewer when its window closes
    uint32_t pad[9];
    uint32_t pixels[256 * 384];  // top screen then bottom screen, 0x00RRGGBB
    // sound: a ring of stereo frames (left, right) at ACWW_AUDIO_RATE; the game advances audio_write, the viewer
    // audio_read (both count frames, the ring index is the count mod ACWW_AUDIO_FRAMES)
    uint32_t audio_write;
    uint32_t audio_read;
    int16_t audio[ACWW_AUDIO_FRAMES * 2];
} AcwwShm;

#endif

#include "types.h"

// TU179: 0x0209b5d4-0x0209b63c. Fills the inner 4x4 cells of the 6x6 grid from a cached record and remembers the
// record number in .bss (autoload_3 0x021d7128).

class Unk_0209c060 {
public:
    s32 unk_00;
    s32 unk_04;
    Unk_0209c060();
    ~Unk_0209c060();
};

extern "C" {
s32 Random_GlobalBelow(s32);
BOOL _ZN12TownAcreCell7setTypeEi(Unk_0209c060 *, s32);
void *_ZN10RecordFile9getRecordEj(void *, s32);
}

class TownAcreGrid {
public:
    Unk_0209c060 cells[36];
    u32 unk_120[8];

    void loadCandidate(s32 seed);
    Unk_0209c060 *getCell(s32 x, s32 y);
};

s32 sTownGenCandidateIndex;

void TownAcreGrid::loadCandidate(s32 seed) {
    u8 *p;
    u32 y, x;
    s32 v;
    if (seed < 0) {
        v = Random_GlobalBelow(0x20c);
    } else {
        v = (u32)seed % 0x20c;
    }
    sTownGenCandidateIndex = v;
    p = (u8 *)_ZN10RecordFile9getRecordEj(unk_120, v);
    if (p) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                _ZN12TownAcreCell7setTypeEi(getCell(x, y), *p++);
            }
        }
    }
}

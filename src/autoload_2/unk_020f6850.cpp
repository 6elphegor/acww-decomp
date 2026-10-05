// mwcc-flags: -nothumb -O4,p
// RC_020f6850: the second sound-emitter source file (G010a part 2) as REAL C++ classes. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020f6850-0x020f7a5c (14 functions), .data 0x0213badc-0x0213bb7c (5 vtables of 6 slots). No bss / rodata / __sinit.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt).
// Extent: see RC_020f5b9c (the 13 vtables of G010a are two files; this one starts after the base class's methods). The next .data object,
// the 0xc-byte vtable 0x0213bb7c, is smaller: it starts the next file (RC_020f7a5c).
// Classes: TvSoundProgram4, TvSoundProgram6, TvSoundProgram7, TvSoundProgram8, TvSoundProgram10 : TvSound (the base is only declared here; its key
// function, vtable and report / update are in RC_020f5b9c). The class DECLARATION order (below) sets the vtable order: keep it.
#include "types.h"
#include "snd/TvSound.h"


// 0x14 bytes
class TvSoundProgram4 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    s32 pollVariable();

    /* 0x0e */ s16 e14;
    /* 0x10 */ s32 w16;
};

// 0x10 bytes
class TvSoundProgram6 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ u8 d13;
};

// 0x18 bytes
class TvSoundProgram7 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
    /* 0x14 */ u16 i20;
};

// 0x14 bytes
class TvSoundProgram8 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
};

// 0x14 bytes
class TvSoundProgram10 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ u8 d13;
    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
};

extern "C" {
extern u8 gSndMgr[];
u32 SndMgr_Rand(void *g, u32 n);
void NNS_SndArcPlayerStartSeq(void *p, u32 v);
void NNS_SndPlayerWriteVariable(void *p, u32 a, u32 b);
void Snd_StopHandle(void *p, u32 v);
void Snd_StartSeqArc(u32 code, u32 a, void *p);
void NNS_SndPlayerSetTrackVolume(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackMute(void *p, u32 a, u32 b);
void NNS_SndPlayerReadVariable(void *p, u32 a, void *out);
}

void TvSoundProgram4::startSounds() {
    NNS_SndArcPlayerStartSeq(&b, 0xf6);
    e14 = -1;
    w16 = 0;
}

void TvSoundProgram4::vfunc_08(s32 id, void *arg) {
    s32 base = w16 << 2;
    switch ((u32)pollVariable()) {
    case 1:
        startSe(base + 0x507, &a);
        break;
    case 2:
        startSe(base + 0x508, &a);
        break;
    case 3:
        startSe(base + 0x509, &a);
        break;
    case 4:
        startSe(base + 0x50a, &a);
        w16 = (w16 + 1) % 2;
        break;
    }
    updatePosition(arg);
}

s32 TvSoundProgram4::pollVariable() {
    s16 v;
    s32 r;
    NNS_SndPlayerReadVariable(&b, 0, &v);
    r = (v != e14) ? v : -1;
    e14 = v;
    return r;
}

void TvSoundProgram6::vfunc_08(s32 id, void *arg) {
    if (id == 0) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 70);
        NNS_SndPlayerSetTrackVolume(&b, 2, 80);
        NNS_SndPlayerSetTrackVolume(&b, 12, 120);
        NNS_SndPlayerSetTrackVolume(&b, 16, 110);
        if (d13 != 0) {
            Snd_StopHandle(&a, 0);
            Snd_StartSeqArc(0x128, 1, &a);
        }
    } else if (id == 90) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 75);
        NNS_SndPlayerSetTrackVolume(&b, 14, 110);
        NNS_SndPlayerSetTrackVolume(&b, 16, 110);
        if (d13 != 0) {
            Snd_StopHandle(&a, 0);
            Snd_StartSeqArc(0x129, 1, &a);
        }
    } else if (id == 160) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 80);
        NNS_SndPlayerSetTrackVolume(&b, 14, 110);
        NNS_SndPlayerSetTrackVolume(&b, 16, 110);
        if (d13 != 0) {
            Snd_StopHandle(&a, 0);
            Snd_StartSeqArc(0x12a, 1, &a);
        }
    } else if (id == 260) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 80);
        NNS_SndPlayerSetTrackVolume(&b, 14, 110);
        NNS_SndPlayerSetTrackVolume(&b, 16, 100);
        if (d13 != 0) {
            Snd_StopHandle(&a, 0);
            Snd_StartSeqArc(0x12b, 1, &a);
        }
    } else if (id == 371) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 75);
        NNS_SndPlayerSetTrackVolume(&b, 2, 0);
        NNS_SndPlayerSetTrackVolume(&b, 12, 90);
        NNS_SndPlayerSetTrackVolume(&b, 16, 75);
        if (d13 != 0) {
            Snd_StopHandle(&a, 0);
            Snd_StartSeqArc(0x12c, 1, &a);
        }
    } else if (id == 451) {
        NNS_SndPlayerSetTrackVolume(&b, 1, 85);
        NNS_SndPlayerSetTrackVolume(&b, 14, 0);
        NNS_SndPlayerSetTrackVolume(&b, 16, 70);
        d13 = ((d13 + 1) % 2) != 0;
    }
    updatePosition(arg);
}

void TvSoundProgram6::startSounds() {
    startSe(0x50f, &b);
    startSe(0x510, &a);
    d13 = 1;
}

void TvSoundProgram8::vfunc_08(s32 id, void *arg) {
    if (c12 == 1) {
        c12 = 0;
        Snd_StopHandle(&a, 0);
        Snd_StartSeqArc(0x136, 1, &a);
        g16 = 0;
    } else if (id == 0) {
        if (SndMgr_Rand(gSndMgr, 100) < 70) NNS_SndPlayerWriteVariable(&a, 0, 1);
        Snd_StopHandle(&b, 0);
        Snd_StartSeqArc(0x139, 1, &b);
    } else if (id == 90) {
        if (SndMgr_Rand(gSndMgr, 100) < 60) {
            NNS_SndPlayerWriteVariable(&a, 1, 1);
            e14 = 1;
        }
        u32 r = SndMgr_Rand(gSndMgr, 100);
        Snd_StopHandle(&b, 0);
        if (r < 33) Snd_StartSeqArc(0x13a, 1, &b);
        else if (r < 66) Snd_StartSeqArc(0x13b, 1, &b);
        else Snd_StartSeqArc(0x13c, 1, &b);
    } else if (id == 145) {
        u32 r = SndMgr_Rand(gSndMgr, 100);
        Snd_StopHandle(&b, 0);
        if (r < 33) Snd_StartSeqArc(0x13a, 1, &b);
        else if (r < 66) Snd_StartSeqArc(0x13b, 1, &b);
        else Snd_StartSeqArc(0x13c, 1, &b);
    } else if (id == 180) {
        if (SndMgr_Rand(gSndMgr, 100) < 70 && e14 != 1) {
            NNS_SndPlayerWriteVariable(&a, 1, 1);
            e14 = 2;
        }
        if (SndMgr_Rand(gSndMgr, 100) < 60 && e14 != 1) {
            NNS_SndPlayerWriteVariable(&a, 0, 1);
            e14 = 2;
        }
    } else if (id == 250) {
        u32 r = SndMgr_Rand(gSndMgr, 100);
        if (e14 != 2) {
            if (r < 70) {
                NNS_SndPlayerWriteVariable(&a, 2, 1);
                e14 = 3;
            } else {
                NNS_SndPlayerWriteVariable(&a, 0, 1);
                e14 = 4;
            }
        }
        Snd_StopHandle(&b, 0);
        Snd_StartSeqArc(0x13d, 1, &b);
    } else if (g16 == 103) {
        Snd_StopHandle(&a, 0);
        Snd_StartSeqArc(0x137, 1, &a);
    } else if (g16 == 700) {
        Snd_StopHandle(&a, 0);
        Snd_StartSeqArc(0x138, 1, &a);
    } else if (g16 == 900) {
        Snd_StopHandle(&a, 0);
        Snd_StartSeqArc(0x136, 1, &a);
        g16 = 0;
    }
    g16 = g16 + 1;
    updatePosition(arg);
}

void TvSoundProgram8::reset() {
    TvSound::reset();
    g16 = 0;
}

void TvSoundProgram8::startSounds() {
    startSe(0x51f, &a);
    e14 = 0;
}

void TvSoundProgram7::vfunc_08(s32 id, void *arg) {
    if (c12 == 1) {
        c12 = 0;
        Snd_StopHandle(&b, 0);
        Snd_StartSeqArc(0x12d, 1, &b);
        Snd_StopHandle(&a, 0);
        Snd_StartSeqArc(0x132, 1, &a);
        i20 = 0;
        h18 = 0;
        e14 = 0;
        g16 = 0;
    } else if (id == 0) {
        Snd_StopHandle(&b, 0);
        Snd_StopHandle(&a, 0);
        if (SndMgr_Rand(gSndMgr, 100) < 40) {
            Snd_StartSeqArc(0x12e, 1, &b);
            Snd_StartSeqArc(0x132, 1, &a);
            i20 = 1;
        } else {
            Snd_StartSeqArc(0x130, 1, &b);
            Snd_StartSeqArc(0x133, 1, &a);
            i20 = 2;
        }
    } else if (id == 90 && i20 != 0) {
        u32 r = SndMgr_Rand(gSndMgr, 3);
        Snd_StopHandle(&b, 0);
        Snd_StopHandle(&a, 0);
        if (r == 0) {
            Snd_StartSeqArc(0x12f, 1, &b);
            Snd_StartSeqArc(0x134, 1, &a);
            i20 = 3;
        } else if (r == 1) {
            Snd_StartSeqArc(0x12f, 1, &b);
            Snd_StartSeqArc(0x135, 1, &a);
            i20 = 4;
        } else {
            Snd_StartSeqArc(0x131, 1, &b);
            Snd_StartSeqArc(0x134, 1, &a);
            i20 = 5;
        }
    } else if (id == 120 && i20 == 0) {
        u32 r = SndMgr_Rand(gSndMgr, 2);
        Snd_StopHandle(&b, 0);
        Snd_StopHandle(&a, 0);
        if (r == 0) {
            Snd_StartSeqArc(0x12f, 1, &b);
            Snd_StartSeqArc(0x134, 1, &a);
            i20 = 3;
        } else {
            Snd_StartSeqArc(0x12f, 1, &b);
            Snd_StartSeqArc(0x135, 1, &a);
            i20 = 4;
        }
    }
    if (h18 != i20) {
        if (g16 == 0) {
            g16 = g16 + 1;
        } else if (g16 == 1) {
            if (SndMgr_Rand(gSndMgr, 2) == 0) {
                g16 = g16 + 1;
            } else {
                g16 = 0;
                e14 = (e14 + 1) % 2;
            }
        } else if (g16 >= 2) {
            g16 = 0;
            e14 = (e14 + 1) % 2;
        }
        if (e14 % 2 == 1) NNS_SndPlayerSetTrackMute(&b, 0x3f, 1);
        h18 = i20;
    }
    updatePosition(arg);
}

void TvSoundProgram7::reset() {
    TvSound::reset();
    e14 = 0;
    g16 = 0;
}

void TvSoundProgram7::startSounds() {
    startSe(0x517, &b);
    i20 = 3;
    h18 = i20;
}

void TvSoundProgram10::vfunc_08(s32 id, void *arg) {
    s32 t1, t2, t5, t4, t3, t6;
    h18++;
    s32 st = e14;
    if (st == 15 && h18 >= 140) {
        d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        h18 = 0;
        t5 = 25;
        t6 = 88;
    } else if (st == 16 && h18 >= 100) {
        d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        h18 = 0;
        t5 = 25;
        t6 = 88;
    } else {
        s32 m = st % 5;
        if (m <= 2 && h18 >= 120) {
            d13 = 1;
            h18 = 0;
            u32 q = e14 / 5;
            if (q == 0) {
                t1 = 50;
                t2 = 75;
                t3 = t1;
                t4 = t2;
                t5 = 25;
                t6 = 88;
            } else if (q == 1) {
                t1 = 40;
                t2 = 80;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            } else {
                t1 = 40;
                t2 = 60;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            }
        } else if (m >= 3 && h18 >= 70) {
            d13 = 1;
            h18 = 0;
            u32 q = e14 / 5;
            if (q == 0) {
                t4 = 100;
                t6 = t4;
                t1 = 50;
                t2 = 75;
                t5 = 35;
                t3 = 70;
            } else if (q == 1) {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 80;
                t5 = 35;
                t3 = 70;
            } else {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 60;
                t5 = 35;
                t3 = 70;
            }
        }
    }
    if (d13 == 1) {
        s32 r;
        Snd_StopHandle(&b, 0);
        g16 = e14;
        r = (s16)SndMgr_Rand(gSndMgr, 100);
        if (r <= t1) t2 = 0;
        else if (r <= t2) t2 = 5;
        else t2 = 10;
        r = (s16)SndMgr_Rand(gSndMgr, 100);
        if (r <= t5) {
            e14 = t2;
            if (g16 % 5 != e14 % 5) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x13e, 1, &a);
            }
        } else if (r <= t3) {
            e14 = t2 + 1;
            if (g16 % 5 != e14 % 5) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x13f, 1, &a);
            }
        } else if (r <= t4) {
            e14 = t2 + 2;
            if (g16 % 5 != e14 % 5) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x140, 1, &a);
            }
        } else if (r <= t6) {
            e14 = t2 + 3;
            if (g16 % 5 != e14 % 5) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x141, 1, &a);
            }
        } else {
            e14 = t2 + 4;
            if (g16 % 5 != e14 % 5) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x142, 1, &a);
            }
        }
        s32 q2 = t2 / 5;
        if (q2 == 0) {
            NNS_SndPlayerSetTrackVolume(&a, 3, 100);
            if (SndMgr_Rand(gSndMgr, 100) < 40 && id > 90) {
                Snd_StartSeqArc(0x146, 1, &b);
                NNS_SndPlayerSetTrackVolume(&b, 3, 100);
            }
        } else if (q2 == 1) {
            NNS_SndPlayerSetTrackVolume(&a, 3, 75);
            Snd_StartSeqArc(0x145, 1, &b);
        } else {
            NNS_SndPlayerSetTrackVolume(&a, 3, 127);
            if (SndMgr_Rand(gSndMgr, 100) < 40 && id > 90 && e14 <= 13) {
                Snd_StartSeqArc(0x146, 1, &b);
                NNS_SndPlayerSetTrackVolume(&b, 3, 80);
            }
        }
        if (g16 == 11 || g16 == 13) {
            r = (s16)SndMgr_Rand(gSndMgr, 100);
            if (r <= 20) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x143, 1, &a);
                e14 = 15;
            } else if (r <= 40) {
                Snd_StopHandle(&a, 0);
                Snd_StartSeqArc(0x144, 1, &a);
                e14 = 16;
            }
        }
        d13 = 0;
    }
    updatePosition(arg);
}

void TvSoundProgram10::reset() {
    TvSound::reset();
    e14 = 0;
    g16 = 0;
    h18 = 0;
}

void TvSoundProgram10::startSounds() {
    startSe(0x526, &a);
    g16 = 0;
    e14 = g16;
}

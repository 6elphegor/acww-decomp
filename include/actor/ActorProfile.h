#ifndef ACTOR_ACTORPROFILE_H
#define ACTOR_ACTORPROFILE_H

#include "types.h"
#include "sys/ProcProfile.h"

// 0x18-byte actor profile (the s<Name>Profile data objects of actors: special NPCs, ov004 room actors, ...): the
// 8-byte process profile (factory, execute/draw priorities) followed by the actor flags and the cull box. The
// profile tables reach it through its ProcProfile part.
struct ActorProfile {
    /* 0x00 */ ProcProfile proc;
    /* 0x08 */ u32 actorFlags;
    /* 0x0c */ u32 cullHeight;
    /* 0x10 */ u32 cullRadius;
    /* 0x14 */ u32 cullDepth;
};

#endif

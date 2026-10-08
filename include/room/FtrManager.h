#ifndef ROOM_FTRMANAGER_H
#define ROOM_FTRMANAGER_H

#include "types.h"
#include "room/FtrActorGrid.h"
#include "gfx/VecFx32.h"
#include "snd/SndPosNode.h"

// Helpers of the room overlay's furniture manager (FurnitureManager, ov004): the contacts of the player with the
// furniture, the grid of furniture actors by unit, the furniture actors' heap and the furniture sounds. Methods in
// src/ov004/unk_ov004_02233074.cpp.

class FtrActor;
struct ExpHeap;

// the player's contact with a piece of furniture (one per layer)
class FtrContact {
public:
    s32 actorIndex;
    VecFx32 prevPlayerPos;
    VecFx32 playerPos;
    s32 depth;
    VecFx32 contactPoint;
    VecFx32 clampedContactPoint;
    s16 pushAngle;
    s32 side;
    FtrContact();
    ~FtrContact();
    s32 getStepDistance();
    void set(s32 id, VecFx32 *a, VecFx32 *b, s32 c, VecFx32 *d, VecFx32 *e, s16 f, s32 g);
    void clear();
    s32 getActorIndex();
    s16 getPushAngle();
    s32 getSide();
    VecFx32 *getClampedContactPoint();
    VecFx32 *getContactPoint();
    s32 getDepth();
    VecFx32 *getPlayerPos();
    VecFx32 *getPrevPlayerPos();
};

// sFtrContactSet (FtrContactSet_GetInstance): the furniture the player touches and what it can do with it
class FtrContactSet {
public:
    FtrContact contacts[2];
    FtrContactSet();
    ~FtrContactSet();
    BOOL setContact(s32 id, VecFx32 *a, VecFx32 *b, s32 c, VecFx32 *d, VecFx32 *e, s16 f, s32 g);
    void clear();
    BOOL startPull();
    BOOL canPull();
    BOOL startPush();
    BOOL canPush();
    VecFx32 *makeStepVec(s16 v);
    BOOL canMoveAt(s32 v);
    BOOL startRotatePlus90();
    BOOL canRotatePlus90();
    BOOL startRotateMinus90();
    BOOL canRotateMinus90();
    BOOL startRotateBy(s32 v);
    BOOL canRotateBy(s32 v);
    void requestToggle();
    FtrActor *getActor(u32 idx);
    FtrContact *findContact(void *v);
    FtrContact *getContact(u32 idx);
};

// sFtrActorGrid (FtrActorGrid_GetInstance): the furniture actor (its FtrActorTable index) on each unit, per layer
// FtrActorGrid: room/FtrActorGrid.h

// sFtrActorHeap (FtrActorHeap_GetInstance): the heap of the furniture actors (FtrActor::operator new)
class FtrActorHeap {
public:
    ExpHeap *heap;
    FtrActorHeap();
    ~FtrActorHeap();
    void free(void *p);
    void *alloc();  // a block for any furniture actor
    void destroy();
    BOOL create(s32 n);
    void reset();
};

// a furniture's positional sound (FtrActor::soundEmitter), in the manager's FtrSoundList
class FtrSoundEmitter {
public:
    SndPosNode posNode;
    u8 isAttached;
    // (pos: a VecFx32 *; other units call these by their symbols, with the position's address as a u32)
    void setPitch(u32 a);
    void setPan(u32 pos);
    void playOnce(u32 id, u32 pos);
    void play(u32 id, u32 pos);
    void release();
    void attach();
    void resetAttached();
};

// FurnitureManager::soundList: the list of the furniture sounds
class FtrSoundList {
public:
    /* 0x00 */ SndPosList posList;
    /* 0x10 */ u8 initialized;

    void update();
    void tryInit();
    FtrSoundList *destroy();
    void reset();
    SndPosList *getList();
    u32 checkInitialized();
    u32 isInitialized();
};

#endif

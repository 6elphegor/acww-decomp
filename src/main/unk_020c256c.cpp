#include "types.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "npc/NpcTalkCtrl.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "npc/Unk_02014254.h"
#include "snd/SndSeEmitterKind1.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"

extern "C" {
u32 _ZN8NpcActor14getPlayerActorEj(void *p, s32 n);
s32 _ZN8NpcActor6isNearEPS_i(void *p, void *q, s32 n);
BOOL TalkRequest_SetTargetDone(void *p);
void _ZN8NpcActor12setNpcHandleEPt(void *p, u16 *q);
u32 _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(void *p, void *q);
extern u16 data_020c6cc8;
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
}


// ---- SpNpcTestTalk and its bases (vtable 0x020ddcf0 chain) ----

struct Unk_020c270c_Out {
    const void *vptr;
    u8 flag;
};


class SpNpcTestTalk;
typedef void (SpNpcTestTalk::*Unk_020c2620_Fn)(void *);
typedef void (SpNpcTestTalk::*Unk_020c269c_Fn)(void *);

class SpNpcTestTalk : public ActorTalkRequest {
public:
    SpNpcTestTalk();
    virtual ~SpNpcTestTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void start(TalkStartMsg *out);

    void onMessageEndPhase00(void *a);
    void dispatchStart(Unk_020c270c_Out *out);
    void startPhase00(Unk_020c270c_Out *out);
    void setPhase(s32 v);
    void attachOwner(u32 v);

    s32 phase;
    u32 owner;
};

// ---- SpNpcTest and its bases (scene object derived from NpcActor) ----


typedef Unk_020d77a4_Vec3 Unk_0203e7a4_Vec;





class SpNpcTest;
typedef BOOL (SpNpcTest::*Unk_020c28b0_Fn)();
struct Unk_020c28b0_Entry {
    Unk_020c28b0_Fn a;
    Unk_020c28b0_Fn b;
};

class SpNpcTest : public SpNpcActor {
public:
    SpNpcTest() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual ~SpNpcTest() {}
    virtual BOOL acceptsInteraction(void *p);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcTestTalk talk;
    s16 homeAngle;
};

extern "C" {
extern const u8 sSpNpcTestMsgKey[8];
extern const char *const sSpNpcModelPaths[];
}

extern "C" SpNpcTest *SpNpcTest_Create();
extern Unk_020c28b0_Entry sSpNpcTestActTable[4];
extern char sSpNpcModelLos[23];
extern char sSpNpcModelWrl[23];
extern char sSpNpcModelMum[23];
extern char sSpNpcModelXct[23];
extern char sSpNpcModelPoo[23];
extern char sSpNpcModelTti[23];
extern char sSpNpcModelOtt[23];
extern char sSpNpcModelSeo[23];
extern char sSpNpcModelSeg[23];
extern char sSpNpcModelWip[23];
extern char sSpNpcModelLrc[23];
extern char sSpNpcModelMol[23];
extern char sSpNpcModelPge[23];
extern char sSpNpcModelTtl[23];
extern char sSpNpcModelDnk[23];
extern char sSpNpcModelBoa[23];
extern char sSpNpcModelEnd[23];
extern char sSpNpcModelPlc[23];
extern char sSpNpcModelPgb[23];
extern char sSpNpcModelRcn[23];
extern char sSpNpcModelHgh[23];
extern char sSpNpcModelHgs[23];
extern char sSpNpcModelOws[23];
extern char sSpNpcModelCml[23];
extern char sSpNpcModelPlb[23];
extern char sSpNpcModelBpt[23];
extern char sSpNpcModelRcs[23];
extern char sSpNpcModelRcd[23];
extern char sSpNpcModelGrf[23];
extern char sSpNpcModelRcc[23];
extern char sSpNpcModelOwl[23];
extern char sSpNpcModelPla[23];
extern char sSpNpcModelMka[23];
extern char sSpNpcModelFox[23];
extern char sSpNpcModelUpa[23];
extern char sSpNpcModelPga[23];
extern char sSpNpcTexUpa[27];
extern char sSpNpcTexMol[27];
extern char sSpNpcTexTtl[27];
extern char sSpNpcTexLos[27];
extern char sSpNpcTexWrl[27];
extern char sSpNpcTexWip[27];
extern char sSpNpcTexLrc[27];
extern char sSpNpcTexMum[27];
extern char sSpNpcTexSeg[27];
extern char sSpNpcTexSeo[27];
extern char sSpNpcTexXct[27];
extern char sSpNpcTexPoo[27];
extern char sSpNpcTexOws[27];
extern char sSpNpcTexTti[27];
extern char sSpNpcTexPla[27];
extern char sSpNpcTexBoa[27];
extern char sSpNpcTexRcc[27];
extern char sSpNpcTexCml[27];
extern char sSpNpcTexHgh[27];
extern char sSpNpcTexRcs[27];
extern char sSpNpcTexHgs[27];
extern char sSpNpcTexPga[27];
extern char sSpNpcTexRcd[27];
extern char sSpNpcTexPgb[27];
extern char sSpNpcTexPlb[27];
extern char sSpNpcTexEnd[27];
extern char sSpNpcTexRcn[27];
extern char sSpNpcTexBpt[27];
extern char sSpNpcTexDnk[27];
extern char sSpNpcTexGrf[27];
extern char sSpNpcTexOwl[27];
extern char sSpNpcTexPge[27];
extern char sSpNpcTexOtt[27];
extern char sSpNpcTexFox[27];
extern char sSpNpcTexPlc[27];

char sSpNpcTexOws[] = "npc_sp/model/ows_tex.nsbtx";
char sSpNpcModelPoo[] = "npc_sp/model/poo.nsbmd";
char sSpNpcTexTti[] = "npc_sp/model/tti_tex.nsbtx";
char sSpNpcModelRcc[] = "npc_sp/model/rcc.nsbmd";
char sSpNpcModelPla[] = "npc_sp/model/pla.nsbmd";
char sSpNpcModelRcs[] = "npc_sp/model/rcs.nsbmd";
char sSpNpcTexPge[] = "npc_sp/model/pge_tex.nsbtx";
char sSpNpcModelGrf[] = "npc_sp/model/grf.nsbmd";
char sSpNpcModelMka[] = "npc_sp/model/mka.nsbmd";
char sSpNpcTexCml[] = "npc_sp/model/cml_tex.nsbtx";
char sSpNpcModelRcn[] = "npc_sp/model/rcn.nsbmd";
char sSpNpcModelHgh[] = "npc_sp/model/hgh.nsbmd";
char sSpNpcModelOws[] = "npc_sp/model/ows.nsbmd";
char sSpNpcTexHgs[] = "npc_sp/model/hgs_tex.nsbtx";
char sSpNpcTexPga[] = "npc_sp/model/pga_tex.nsbtx";
char sSpNpcTexPgb[] = "npc_sp/model/pgb_tex.nsbtx";
char sSpNpcTexPlb[] = "npc_sp/model/plb_tex.nsbtx";
struct Unk_020e6fbc_Rec {
    SpNpcTest *(*fn)();
    u32 w[5];
};
Unk_020e6fbc_Rec sSpNpcTestProfile = { SpNpcTest_Create, { 0x0080007c, 2, 0x5000, 0x5000, 0x3e800 } };
char sSpNpcTexEnd[] = "npc_sp/model/end_tex.nsbtx";
char sSpNpcModelDnk[] = "npc_sp/model/dnk.nsbmd";
char sSpNpcModelBpt[] = "npc_sp/model/bpt.nsbmd";
char sSpNpcTexBpt[] = "npc_sp/model/bpt_tex.nsbtx";
char sSpNpcTexDnk[] = "npc_sp/model/dnk_tex.nsbtx";
char sSpNpcTexGrf[] = "npc_sp/model/grf_tex.nsbtx";
char sSpNpcModelSeo[] = "npc_sp/model/seo.nsbmd";
char sSpNpcTexOwl[] = "npc_sp/model/owl_tex.nsbtx";
char sSpNpcTexOtt[] = "npc_sp/model/ott_tex.nsbtx";
char sSpNpcTexUpa[] = "npc_sp/model/upa_tex.nsbtx";
char sSpNpcModelTti[] = "npc_sp/model/tti.nsbmd";
char sSpNpcTexMol[] = "npc_sp/model/mol_tex.nsbtx";
char sSpNpcModelXct[] = "npc_sp/model/xct.nsbmd";
char sSpNpcTexTtl[] = "npc_sp/model/ttl_tex.nsbtx";
char sSpNpcModelTtl[] = "npc_sp/model/ttl.nsbmd";
char sSpNpcModelMum[] = "npc_sp/model/mum.nsbmd";
char sSpNpcTexLos[] = "npc_sp/model/los_tex.nsbtx";
const u8 sSpNpcTestMsgKey[8] = { 't', 'e', 's', 't' };
char sSpNpcTexWip[] = "npc_sp/model/wip_tex.nsbtx";
char sSpNpcModelOtt[] = "npc_sp/model/ott.nsbmd";
const char *const sSpNpcModelPaths[78] = {
    sSpNpcModelPlc,
    sSpNpcTexPlc,
    sSpNpcModelPla,
    sSpNpcTexPla,
    sSpNpcModelBoa,
    sSpNpcTexBoa,
    sSpNpcModelCml,
    sSpNpcTexCml,
    sSpNpcModelHgh,
    sSpNpcTexHgh,
    sSpNpcModelHgs,
    sSpNpcTexHgs,
    sSpNpcModelPga,
    sSpNpcTexPga,
    sSpNpcModelPgb,
    sSpNpcTexPgb,
    sSpNpcModelPlb,
    sSpNpcTexPlb,
    sSpNpcModelRcn,
    sSpNpcTexRcn,
    sSpNpcModelBpt,
    sSpNpcTexBpt,
    sSpNpcModelGrf,
    sSpNpcTexGrf,
    sSpNpcModelOwl,
    sSpNpcTexOwl,
    sSpNpcModelOtt,
    sSpNpcTexOtt,
    sSpNpcModelFox,
    sSpNpcTexFox,
    sSpNpcModelLrc,
    sSpNpcTexLrc,
    sSpNpcModelLrc,
    sSpNpcTexLrc,
    sSpNpcModelMol,
    sSpNpcTexMol,
    sSpNpcModelTtl,
    sSpNpcTexTtl,
    sSpNpcModelWrl,
    sSpNpcTexWrl,
    sSpNpcModelWip,
    sSpNpcTexWip,
    sSpNpcModelSeg,
    sSpNpcTexSeg,
    sSpNpcModelSeo,
    sSpNpcTexSeo,
    sSpNpcModelPoo,
    sSpNpcTexPoo,
    sSpNpcModelOws,
    sSpNpcTexOws,
    sSpNpcModelRcn,
    sSpNpcTexRcn,
    sSpNpcModelRcc,
    sSpNpcTexRcc,
    sSpNpcModelRcs,
    sSpNpcTexRcs,
    sSpNpcModelRcd,
    sSpNpcTexRcd,
    sSpNpcModelEnd,
    sSpNpcTexEnd,
    sSpNpcModelDnk,
    sSpNpcTexDnk,
    sSpNpcModelPge,
    sSpNpcTexPge,
    sSpNpcModelMka,
    0,
    sSpNpcModelUpa,
    sSpNpcTexUpa,
    sSpNpcModelLos,
    sSpNpcTexLos,
    sSpNpcModelMum,
    sSpNpcTexMum,
    sSpNpcModelXct,
    sSpNpcTexXct,
    sSpNpcModelTti,
    sSpNpcTexTti,
    0,
    0,
};
char sSpNpcModelPga[] = "npc_sp/model/pga.nsbmd";
char sSpNpcModelWip[] = "npc_sp/model/wip.nsbmd";
char sSpNpcModelFox[] = "npc_sp/model/fox.nsbmd";
char sSpNpcTexSeg[] = "npc_sp/model/seg_tex.nsbtx";
char sSpNpcTexXct[] = "npc_sp/model/xct_tex.nsbtx";

extern "C" SpNpcTest *SpNpcTest_Create() {
    return new SpNpcTest();
}

BOOL SpNpcTest::preCreate() {
    u16 v = 0xfff1;
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    v = 0xd000;
    _ZN8NpcActor12setNpcHandleEPt(this, &v);
    _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(this, &talk);
    talk.attachOwner((u32)this);
    return TRUE;
}

BOOL SpNpcTest::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    homeAngle = rotY;
    return TRUE;
}

BOOL SpNpcTest::onDelete() {
    if (SpNpcActor::onDelete()) {
        return TRUE;
    }
    return FALSE;
}

u8 *SpNpcTest::getTexturePath() {
    return (u8 *)sSpNpcModelPaths[1];
}

u8 *SpNpcTest::getModelPath() {
    return (u8 *)sSpNpcModelPaths[0];
}

BOOL SpNpcTest::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTestActTable[unk_654].b != NULL) {
        result = (this->*sSpNpcTestActTable[unk_654].b)();
    }
    return result;
}

void SpNpcTest::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTestActTable[state].a != NULL) {
        ok = (this->*sSpNpcTestActTable[state].a)();
    }
    if (ok == 1) {
        unk_654 = state;
    }
}

BOOL SpNpcTest::setupAct00() {
    actionCtrl.requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTest::mainAct00() {
    return TRUE;
}

BOOL SpNpcTest::setupAct01() {
    u32 x;
    void *p = talk.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    talk.setPhase(0);
    return TRUE;
}

BOOL SpNpcTest::mainAct01() {
    if (talkCtrl.isBusy() == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTest::mainAct02() {
    return TRUE;
}

BOOL SpNpcTest::setupAct03() {
    actionCtrl.requestAction(3, 1, 0, 0, 0, homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTest::mainAct03() {
    if (actionCtrl.getAction() == 3) {
        if (actionCtrl.isActionDone() == 1) {
            changeAct(0);
        }
    }
    return TRUE;
}

SpNpcTestTalk::SpNpcTestTalk() {}

SpNpcTestTalk::~SpNpcTestTalk() {}

void SpNpcTestTalk::attachOwner(u32 v) {
    resetMsg();
    owner = v;
    phase = 1;
}

void SpNpcTestTalk::setPhase(s32 v) {
    phase = v;
}

void SpNpcTestTalk::startPhase00(Unk_020c270c_Out *out) {
    out->vptr = sSpNpcTestMsgKey;
    out->flag = 0;
}

void SpNpcTestTalk::dispatchStart(Unk_020c270c_Out *out) {
    static Unk_020c269c_Fn tbl[1] = { (Unk_020c269c_Fn)&SpNpcTestTalk::startPhase00 };
    if (phase >= 0 && phase < 1) {
        if (tbl[phase]) {
            (this->*tbl[phase])((void *)out);
        }
    }
}

void SpNpcTestTalk::start(TalkStartMsg *out_) {
    Unk_020c270c_Out *out = (Unk_020c270c_Out *)out_;
    dispatchStart(out);
}

void SpNpcTestTalk::onMessageEndPhase00(void *a) {}

char sSpNpcModelRcd[] = "npc_sp/model/rcd.nsbmd";
char sSpNpcTexBoa[] = "npc_sp/model/boa_tex.nsbtx";
char sSpNpcModelBoa[] = "npc_sp/model/boa.nsbmd";
char sSpNpcModelHgs[] = "npc_sp/model/hgs.nsbmd";
char sSpNpcModelCml[] = "npc_sp/model/cml.nsbmd";
char sSpNpcModelPgb[] = "npc_sp/model/pgb.nsbmd";
char sSpNpcModelPlb[] = "npc_sp/model/plb.nsbmd";

void SpNpcTestTalk::onMessageEnd(u32 a_) {
    void *a = (void *)a_;
    static Unk_020c2620_Fn tbl[1] = { &SpNpcTestTalk::onMessageEndPhase00 };
    if (phase >= 0 && phase < 1) {
        if (tbl[phase]) {
            (this->*tbl[phase])(a);
        }
    }
}

BOOL SpNpcTest::acceptsInteraction(void *p) {
    BOOL r = FALSE;
    if (_ZN8NpcActor6isNearEPS_i(this, p, 0x2000) == 1) {
        r = TRUE;
    }
    return r;
}

void SpNpcTest::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 0:
        talk.resetMsg();
        talk.func_02015ab0(_ZN8NpcActor14getPlayerActorEj(this, 4));
        changeAct(1);
        break;
    case 8:
        changeAct(3);
        break;
    }
}

Unk_020c28b0_Entry sSpNpcTestActTable[4] = {
    { &SpNpcTest::setupAct00, &SpNpcTest::mainAct00 },
    { &SpNpcTest::setupAct01, &SpNpcTest::mainAct01 },
    { 0, &SpNpcTest::mainAct02 },
    { &SpNpcTest::setupAct03, &SpNpcTest::mainAct03 },
};
char sSpNpcTexMum[] = "npc_sp/model/mum_tex.nsbtx";
char sSpNpcModelSeg[] = "npc_sp/model/seg.nsbmd";
char sSpNpcTexPoo[] = "npc_sp/model/poo_tex.nsbtx";
char sSpNpcTexPla[] = "npc_sp/model/pla_tex.nsbtx";
char sSpNpcTexRcc[] = "npc_sp/model/rcc_tex.nsbtx";
char sSpNpcModelEnd[] = "npc_sp/model/end.nsbmd";
char sSpNpcTexRcd[] = "npc_sp/model/rcd_tex.nsbtx";
char sSpNpcModelPlc[] = "npc_sp/model/plc.nsbmd";
char sSpNpcModelMol[] = "npc_sp/model/mol.nsbmd";
char sSpNpcModelOwl[] = "npc_sp/model/owl.nsbmd";
char sSpNpcModelLos[] = "npc_sp/model/los.nsbmd";
char sSpNpcTexWrl[] = "npc_sp/model/wrl_tex.nsbtx";
char sSpNpcTexLrc[] = "npc_sp/model/lrc_tex.nsbtx";
char sSpNpcTexSeo[] = "npc_sp/model/seo_tex.nsbtx";
char sSpNpcModelPge[] = "npc_sp/model/pge.nsbmd";
char sSpNpcTexHgh[] = "npc_sp/model/hgh_tex.nsbtx";
char sSpNpcTexRcn[] = "npc_sp/model/rcn_tex.nsbtx";
char sSpNpcTexFox[] = "npc_sp/model/fox_tex.nsbtx";
char sSpNpcModelWrl[] = "npc_sp/model/wrl.nsbmd";
char sSpNpcModelUpa[] = "npc_sp/model/upa.nsbmd";
char sSpNpcTexRcs[] = "npc_sp/model/rcs_tex.nsbtx";
char sSpNpcTexPlc[] = "npc_sp/model/plc_tex.nsbtx";
char sSpNpcModelLrc[] = "npc_sp/model/lrc.nsbmd";

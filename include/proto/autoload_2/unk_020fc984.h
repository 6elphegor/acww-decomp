#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020FC984_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020FC984_H

// Prototypes of the functions defined in src/autoload_2/unk_020fc984.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/MagF.h"
#ifdef __cplusplus
#include "gfx/P.h"
#include "gfx/SplEmitterE.h"
#include "gfx/SplParticleViews.h"
#include "gfx/SplPtclTypes.h"
#include "gfx/VecFx32.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_0213bba4
extern s16 data_0213bba4[2];
#endif
#ifndef PROTO_LOCAL_WvrDummyAsyncCallback
void WvrDummyAsyncCallback(u32 a, u32 b);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_spl_rndm_get_arb_vec_xyz
void spl_rndm_get_arb_vec_xyz(VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_spl_rndm_get_arb_vec_xy
void spl_rndm_get_arb_vec_xy(VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_spl_push_front
void spl_push_front(PList *l, P *n);
#endif
#ifndef PROTO_LOCAL_spl_pop_front
P *spl_pop_front(PList *l);
#endif
#ifndef PROTO_LOCAL_spl_del
P *spl_del(PList *l, P *n);
#endif
#ifndef PROTO_LOCAL_spl_calc_gravity
void spl_calc_gravity(GravF *f, P *p, VecFx32 *acc);
#endif
#ifndef PROTO_LOCAL_spl_calc_random
void spl_calc_random(RandF *f, P *p, VecFx32 *acc);
#endif
#ifndef PROTO_LOCAL_spl_calc_magnet
void spl_calc_magnet(MagF *f, P *p, VecFx32 *acc);
#endif
#ifndef PROTO_LOCAL_spl_calc_spin
void spl_calc_spin(SpinF *f, P *p, VecFx32 *acc);
#endif
#ifndef PROTO_LOCAL_spl_calc_scfield
void spl_calc_scfield(CollF *f, P *p, VecFx32 *acc, E *e);
#endif
#ifndef PROTO_LOCAL_spl_calc_convergence
void spl_calc_convergence(ConvF *f, P *p, VecFx32 *acc);
#endif
#ifndef PROTO_LOCAL_spl_scl_in_out
void spl_scl_in_out(P *p, Ctx *c, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_clr_in_out
void spl_clr_in_out(P *p, Ctx *c, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_alp_in_out
void spl_alp_in_out(P *p, Ctx *c, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_tex_ptn_anm
void spl_tex_ptn_anm(P *p, Ctx *c, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_chld_scl_out
void spl_chld_scl_out(P *p, Ctx *c, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_chld_alp_out
void spl_chld_alp_out(P *p, void *x, s32 t);
#endif
#ifndef PROTO_LOCAL_spl_set_cross_to_axis
void spl_set_cross_to_axis(E *e);
#endif
#ifndef PROTO_LOCAL_spl_set_circle_axis
void spl_set_circle_axis(VecFx32 *out, const VecFx32 *in, E *e);
#endif
#ifndef PROTO_LOCAL_spl_gen_ptcl
void spl_gen_ptcl(E *e, PList *freeList);
#endif
}
#ifndef PROTO_LOCAL_data_021f5c3c
extern u32 data_021f5c3c;
#endif
#endif

#endif

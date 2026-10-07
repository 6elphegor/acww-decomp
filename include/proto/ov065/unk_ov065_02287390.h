#ifndef PROTO_PROTO_OV065_UNK_OV065_02287390_H
#define PROTO_PROTO_OV065_UNK_OV065_02287390_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02287390.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/SockAddrIn.h"
#include "net/SockHostEnt.h"
#include "net/qr2.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_enum_local_ips
void enum_local_ips();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_qr2_init_socketA
s32 qr2_init_socketA(qr2_implementation_s **out, s32 fd, s32 a2, const char *name, const char *secret, s32 a5, s32 a6, qr2_serverkeycallback_t cb88, qr2_playerteamkeycallback_t cb8c, qr2_playerteamkeycallback_t cb90, qr2_keylistcallback_t cb94, qr2_countcallback_t cb98, qr2_adderrorcallback_t cb9c, void *ud);
#endif
#ifndef PROTO_LOCAL_qr2_register_natneg_callback
void qr2_register_natneg_callback(qr2_implementation_s *q, s32 v);
#endif
#ifndef PROTO_LOCAL_qr2_register_clientmessage_callback
void qr2_register_clientmessage_callback(qr2_implementation_s *q, s32 v);
#endif
#ifndef PROTO_LOCAL_qr2_keybuffer_add
void qr2_keybuffer_add(qr2_keybuffer_s *k, s32 c);
#endif
#ifndef PROTO_LOCAL_qr2_buffer_add_int
void qr2_buffer_add_int(qr2_buffer_s *b, s32 v);
#endif
#ifndef PROTO_LOCAL_get_sockaddrin__qr2
s32 get_sockaddrin__qr2(const char *name, u32 port, SockAddrIn *sa, SockHostEnt **hp);
#endif
#ifndef PROTO_LOCAL_swap_byte
void swap_byte(u8 *a, u8 *b);
#endif
#ifndef PROTO_LOCAL_encode_ct
u8 encode_ct(u8 c);
#endif
#ifndef PROTO_LOCAL_gs_encode
void gs_encode(u8 *in, s32 len, u8 *out);
#endif
#ifndef PROTO_LOCAL_gs_encrypt
void gs_encrypt(u8 *key, s32 keylen, u8 *data, s32 datalen);
#endif
#ifndef PROTO_LOCAL_qr_add_packet_header
void qr_add_packet_header(qr2_buffer_s *b, s32 c, u8 *ip);
#endif
#ifndef PROTO_LOCAL_compute_challenge_response
void compute_challenge_response(qr2_implementation_s *q, qr2_buffer_s *b, const char *s, s32 n);
#endif
#ifndef PROTO_LOCAL_qr_build_partial_query_reply
void qr_build_partial_query_reply(qr2_implementation_s *q, qr2_buffer_s *b, s32 type, s32 count, u8 *list);
#endif
#ifndef PROTO_LOCAL_qr_build_query_reply
void qr_build_query_reply(qr2_implementation_s *q, qr2_buffer_s *b, s32 c0, u8 *l0, s32 c1, u8 *l1, s32 c2, u8 *l2);
#endif
}
#endif

#endif

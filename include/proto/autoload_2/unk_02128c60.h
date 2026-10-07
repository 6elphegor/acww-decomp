#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_02128C60_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_02128C60_H

// Prototypes of the functions defined in src/autoload_2/unk_02128c60.c (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_strstr
char *strstr(const char *str, const char *pat);
#endif
#ifndef PROTO_LOCAL_raise
int raise(int sig);
#endif
#ifndef PROTO_LOCAL___StringRead
int __StringRead(void *ctx, int ch, int action);
#endif
#ifndef PROTO_LOCAL_sscanf
int sscanf(const char *s, const char *fmt, ...);
#endif
#ifndef PROTO_LOCAL_rand
int rand(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_strcspn
u32 strcspn(const char *str, const char *set);
#endif
#ifndef PROTO_LOCAL_srand
void srand(u32 seed);
#endif
#ifndef PROTO_LOCAL_data_0213c4fc
extern u32 data_0213c4fc;
#endif
}
#endif

#endif

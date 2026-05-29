#ifndef _VOLTOS_TYPES_H_
#define _VOLTOS_TYPES_H_

#include <nbapi/voltos/types.h>

typedef __string string;

typedef struct {
    s32 counter;
} atomic_t;

typedef struct {
    s64 counter;
} atomic64_t;

#define aligned_s64         __aligned_s64
#define aligned_u64         __aligned_u64
#define aligned_be64        __aligned_be64
#define aligned_le64        __aligned_le64
#define aligned_net64       __aligned_net64
#define aligned_host64      __aligned_host64

#define aligned_s128        __aligned_s128
#define aligned_u128        __aligned_u128
#define aligned_be128       __aligned_be128
#define aligned_le128       __aligned_le128
#define aligned_net128      __aligned_net128
#define aligned_host128     __aligned_host128

#endif /* _VOLTOS_TYPES_H_ */

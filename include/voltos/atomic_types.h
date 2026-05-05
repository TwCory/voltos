#ifndef _VOLTOS_ATOMIC_TYPES_H_
#define _VOLTOS_ATOMIC_TYPES_H_

#include <platform/atomic.h>
#include <voltos/types.h>

typedef __atomic__ bool         __atomic_bool;

typedef __atomic__ char         __atomic_char;
typedef __atomic__ __s_char     __atomic_s_char;
typedef __atomic__ __u_char     __atomic_u_char;

typedef __atomic__ short        __atomic_short;
typedef __atomic__ __s_short    __atomic_s_short;
typedef __atomic__ __u_short    __atomic_u_short;

typedef __atomic__ int          __atomic_int;
typedef __atomic__ __s_int      __atomic_s_int;
typedef __atomic__ __u_int      __atomic_u_int;

typedef __atomic__ long         __atomic_long;
typedef __atomic__ __s_long     __atomic_s_long;
typedef __atomic__ __u_long     __atomic_u_long;

typedef __atomic__ long long    __atomic_llong;
typedef __atomic__ __s_llong    __atomic_s_llong;
typedef __atomic__ __u_llong    __atomic_u_llong;

typedef __atomic__ __s8         __atomic_s8;
typedef __atomic__ __u8         __atomic_u8;

typedef __atomic__ __s16        __atomic_s16;
typedef __atomic__ __u16        __atomic_u16;

typedef __atomic__ __s32        __atomic_s32;
typedef __atomic__ __u32        __atomic_u32;

typedef __atomic__ __s64        __atomic_s64;
typedef __atomic__ __u64        __atomic_u64;

typedef __atomic__ __s128       __atomic_s128;
typedef __atomic__ __u128       __atomic_u128;

typedef __atomic__ s_intptr     __atomic_s_intptr;
typedef __atomic__ u_intptr     __atomic_u_intptr;

#endif /* _VOLTOS_ATOMIC_TYPES_H_ */
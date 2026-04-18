// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ATOMIC_TYPES_H_
#define _VOLTOS_ATOMIC_TYPES_H_

#include <voltos/atomic.h>
#include <voltos/types.h>

typedef __atomic__ bool     __atomic_bool;

typedef __atomic__ __s8     __atomic_s8;
typedef __atomic__ __u8     __atomic_u8;

typedef __atomic__ __s16    __atomic_s16;
typedef __atomic__ __u16    __atomic_u16;

typedef __atomic__ __s32    __atomic_s32;
typedef __atomic__ __u32    __atomic_u32;

typedef __atomic__ __s64    __atomic_s64;
typedef __atomic__ __u64    __atomic_u64;

typedef __atomic__ __s128   __atomic_s128;
typedef __atomic__ __u128   __atomic_u128;

#endif /* _VOLTOS_ATOMIC_TYPES_H_ */
// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_INT128_H_
#define _PLATFORM_INT128_H_

#ifdef __PLATFORM_INT128_IS_TYPE__
#include <platform/int128-type.h>
#else
#include <platform/int128-struct.h>
#endif /* __PLATFORM_INT128_IS_TYPE__ */

typedef __s128 __least_s128;
typedef __u128 __least_u128;

typedef __s128 __fast_s128;
typedef __u128 __fast_u128;

#endif /* _PLATFORM_INT128_H_ */
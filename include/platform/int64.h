// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_INT64_H_
#define _PLATFORM_INT64_H_

#ifdef __PLATFORM_INT64_IS_LONG__
#include <platform/int64-long.h>
#else
#include <platform/int64-ll.h>
#endif /* __PLATFORM_INT64_IS_LONG__ */

typedef __s64 __least_s64;
typedef __u64 __least_u64;

typedef __s64 __fast_s64;
typedef __u64 __fast_u64;

#endif /* _PLATFORM_INT64_H_ */
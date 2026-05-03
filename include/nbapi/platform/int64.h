#ifndef _NBAPI_PLATFORM_INT64_H_
#define _NBAPI_PLATFORM_INT64_H_

#include <inttypes.h>
#include <stdint.h>

typedef int8_t                  __s8;
typedef uint8_t                 __u8;

typedef int16_t                 __s16;
typedef uint16_t                __u16;

typedef int32_t                 __s32;
typedef uint32_t                __u32;

typedef int64_t                 __s64;
typedef uint64_t                __u64;

typedef int_least8_t            __least_s8;
typedef uint_least8_t           __least_u8;

typedef int_least16_t           __least_s16;
typedef uint_least16_t          __least_u16;

typedef int_least32_t           __least_s32;
typedef uint_least32_t          __least_u32;

typedef int_least64_t           __least_s64;
typedef uint_least64_t          __least_u64;

typedef int_fast8_t             __fast_s8;
typedef uint_fast8_t            __fast_u8;

typedef int_fast16_t            __fast_s16;
typedef uint_fast16_t           __fast_u16;

typedef int_fast32_t            __fast_s32;
typedef uint_fast32_t           __fast_u32;

typedef int_fast64_t            __fast_s64;
typedef uint_fast64_t           __fast_u64;

typedef intmax_t                __s_max;
typedef uintmax_t               __u_max;

#endif /* _NBAPI_PLATFORM_INT64_H_ */
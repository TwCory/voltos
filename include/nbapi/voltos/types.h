#ifndef _NBAPI_VOLTOS_TYPES_H_
#define _NBAPI_VOLTOS_TYPES_H_

#include <platform/types.h>

#ifdef __VOLTOS_INT128_TYPE__
typedef signed __int128                         __s128;
typedef unsigned __int128                       __u128;
#else
#define INT128_SIZE                             16
typedef struct {
    __s8                                        bytes[INT128_SIZE];
} __attribute__ ((packed)) __s128;
typedef struct {
    __u8                                        bytes[INT128_SIZE];
} __attribute__ ((packed)) __u128;
#endif /* __VOLTOS_INT128_TYPE__ */

#ifdef __VOLTOS_CORE__
#define __voltos_bitwise                        __attribute__ ((bitwise))
#else
#define __voltos_bitwise
#endif /* __VOLTOS_CORE__ */

typedef __u16   __voltos_bitwise                __be16;
typedef __u32   __voltos_bitwise                __be32;
typedef __u64   __voltos_bitwise                __be64;
typedef __u128  __voltos_bitwise                __be128;

typedef __u16   __voltos_bitwise                __le16;
typedef __u32   __voltos_bitwise                __le32;
typedef __u64   __voltos_bitwise                __le64;
typedef __u128  __voltos_bitwise                __le128;

typedef __be16                                  __net16;
typedef __be32                                  __net32;
typedef __be64                                  __net64;
typedef __be128                                 __net128;

typedef __u16   __voltos_bitwise                __host16;
typedef __u32   __voltos_bitwise                __host32;
typedef __u64   __voltos_bitwise                __host64;
typedef __u128  __voltos_bitwise                __host128;

typedef __u16   __voltos_bitwise                __csum16;
typedef __u32   __voltos_bitwise                __csum32;

typedef struct {
    union {
        float                                   data32[4];
        double                                  data64[2];
    };
} __attribute__ ((packed)) __f128;

#define __aligned_s64                           __s64       __attribute__ ((aligned(8)))
#define __aligned_u64                           __u64       __attribute__ ((aligned(8)))
#define __aligned_be64                          __be64      __attribute__ ((aligned(8)))
#define __aligned_le64                          __le64      __attribute__ ((aligned(8)))
#define __aligned_net64                         __net64     __attribute__ ((aligned(8)))
#define __aligned_host64                        __host64    __attribute__ ((aligned(8)))

#endif /* _NBAPI_VOLTOS_TYPES_H_ */
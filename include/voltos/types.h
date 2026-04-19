// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_TYPES_H_
#define _VOLTOS_TYPES_H_

#include <platform/complex.h>
#include <platform/types.h>

typedef __s_char                        s_char;
typedef __u_char                        u_char;

typedef __s_short                       s_short;
typedef __u_short                       u_short;

typedef __s_int                         s_int;
typedef __u_int                         u_int;

typedef __s_long                        s_long;
typedef __u_long                        u_long;

typedef __s_llong                       s_llong;
typedef __u_llong                       u_llong;

typedef __string                        string;
typedef __strptr                        strptr;

typedef __s8                            s8;
typedef __u8                            u8;

typedef __s16                           s16;
typedef __u16                           u16;

typedef __s32                           s32;
typedef __u32                           u32;

typedef __s64                           s64;
typedef __u64                           u64;

typedef __s128                          s128;
typedef __u128                          u128;

typedef __complex__ float               cf16;
typedef __complex__ float               cf32;
typedef __complex__ double              cf64;

typedef struct {
    __complex__ float                   data[4];
} __attribute__ ((packed)) cf128;

#ifdef __VOLTOS_DEBUG__
#define __voltos_bitwise                __attribute__ ((bitwise))
#else
#define __voltos_bitwise
#endif /* __VOLTOS_DEBUG__ */

typedef __u16 __voltos_bitwise          __be16;
typedef __u32 __voltos_bitwise          __be32;
typedef __u64 __voltos_bitwise          __be64;
typedef __u128 __voltos_bitwise         __be128;

typedef __u16 __voltos_bitwise          __le16;
typedef __u32 __voltos_bitwise          __le32;
typedef __u64 __voltos_bitwise          __le64;
typedef __u128 __voltos_bitwise         __le128;

typedef __u16 __voltos_bitwise          __csum16;
typedef __u32 __voltos_bitwise          __csum32;

typedef __be16                          __net16;
typedef __be32                          __net32;
typedef __be64                          __net64;
typedef __be128                         __net128;

#ifdef __VOLTOS_HOST_ORDER_LITTLE_ENDIAN__
typedef __le16                          __host16;
typedef __le32                          __host32;
typedef __le64                          __host64;
typedef __le128                         __host128;
#else
typedef __be16                          __host16;
typedef __be32                          __host32;
typedef __be64                          __host64;
typedef __be128                         __host128;
#endif /* __VOLTOS_HOST_ORDER_LITTLE_ENDIAN__ */

typedef s_int                           s_min;
typedef u_int                           u_min;

typedef s_int                           s_max;
typedef u_int                           u_max;

typedef struct {
    s32                                 counter;
} atomic32_t;

typedef struct {
    s64                                 counter;
} atomic64_t;

typedef __u_short                       __voltos_acl_id_t;
typedef __u_llong                       __voltos_acl_seqno_t;
typedef __u_short                       __voltos_br_domain_id_t;
typedef __u_int                         __voltos_fd_t;
typedef __u_int                         __voltos_gid32_t;
typedef __u_llong                       __voltos_gid64_t;
typedef __u_long                        __voltos_idb_index_t;
typedef __u_int                         __voltos_idb_sort_t;
typedef __u_int                         __voltos_if_index_t;
typedef __u_int                         __voltos_ipc_key_t;
typedef __u_int                         __voltos_netns_id_t;
typedef __u_int                         __voltos_pid32_t;
typedef __u_llong                       __voltos_pid64_t;
typedef __u_short                       __voltos_sa_family_t;
typedef __u_long                        __voltos_time_t;
typedef __u_short                       __voltos_tty_id_t;
typedef __u_int                         __voltos_uid32_t;
typedef __u_llong                       __voltos_uid64_t;
typedef __u_short                       __voltos_vlan_id_t;
typedef __u_int                         __voltos_vrf_id_t;
typedef __u_char                        __voltos_vty_id_t;

#define __aligned_s64                   __s64 __attribute__ ((aligned(8)))
#define __aligned_u64                   __u64 __attribute__ ((aligned(8)))
#define __aligned_be64                  __be64 __attribute__ ((aligned(8)))
#define __aligned_le64                  __le64 __attribute__ ((aligned(8)))
#define __aligned_net64                 __net64 __attribute__ ((aligned(8)))
#define __aligned_host64                __host64 __attribute__ ((aligned(8)))

#define __aligned_s128                  __s128 __attribute__ ((aligned(8)))
#define __aligned_u128                  __u128 __attribute__ ((aligned(8)))
#define __aligned_be128                 __be128 __attribute__ ((aligned(8)))
#define __aligned_le128                 __le128 __attribute__ ((aligned(8)))
#define __aligned_net128                __net128 __attribute__ ((aligned(8)))
#define __aligned_host128               __host128 __attribute__ ((aligned(8)))

#endif /* _VOLTOS_TYPES_H_ */
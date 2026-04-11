#ifndef _VOLTOS_TYPES_H_
#define _VOLTOS_TYPES_H_

#include <platform/types.h>

typedef __s_char                            s_char;
typedef __u_char                            u_char;

typedef __s_short                           s_short;
typedef __u_short                           u_short;

typedef __s_int                             s_int;
typedef __u_int                             u_int;

typedef __s_long                            s_long;
typedef __u_long                            u_long;

typedef __s_llong                           s_llong;
typedef __u_llong                           u_llong;

#ifdef __VOLTOS_DEBUG__
#define __voltos_bitwise
#else
#define __voltos_bitwise                    __attribute__ ((bitwise))
#endif /* __VOLTOS_DEBUG__ */

typedef __u16 __voltos_bitwise              __be16;
typedef __u32 __voltos_bitwise              __be32;
typedef __u64 __voltos_bitwise              __be64;
typedef __u128 __voltos_bitwise             __be128;

typedef __u16 __voltos_bitwise              __le16;
typedef __u32 __voltos_bitwise              __le32;
typedef __u64 __voltos_bitwise              __le64;
typedef __u128 __voltos_bitwise             __le128;

typedef __be16                              __net16;
typedef __be32                              __net32;
typedef __be64                              __net64;
typedef __be128                             __net128;

typedef __u16 __voltos_bitwise              __host16;
typedef __u32 __voltos_bitwise              __host32;
typedef __u64 __voltos_bitwise              __host64;
typedef __u128 __voltos_bitwise             __host128;

typedef __u16 __voltos_bitwise              __csum16;
typedef __u32 __voltos_bitwise              __csum32;

typedef __s8                                s8;
typedef __u8                                u8;

typedef __s16                               s16;
typedef __u16                               u16;

typedef __s32                               s32;
typedef __u32                               u32;

typedef __s64                               s64;
typedef __u64                               u64;

typedef __s128                              s128;
typedef __u128                              u128;

typedef __string                            string;

#ifdef __VOLTOS_PHY_ADDR_64BIT__
typedef __u64                               phy_addr_t;
#else
typedef __u32                               phy_addr_t;
#endif /* __VOLTOS_PHY_ADDR_64BIT__ */

#ifdef __VOLTOS_DMA_ADDR_64BIT__
typedef __u64                               dma_addr_t;
#else
typedef __u32                               dma_addr_t;
#endif /* __VOLTOS_DMA_ADDR_64BIT__ */

typedef __complex__ float                   cf16;
typedef __complex__ float                   cf32;
typedef __complex__ double                  cf64;
typedef __cf128                             cf128;

typedef __s_min                             s_min;
typedef __u_min                             u_min;

typedef __s_max                             s_max;
typedef __u_max                             u_max;

typedef __s_intptr                          s_intptr;
typedef __u_intptr                          u_intptr;

typedef __s_intfptr                         s_intfptr;
typedef __u_intfptr                         u_intfptr;

typedef __s_size                            s_size;
typedef __u_size                            u_size;
typedef __f_size                            f_size;

typedef __net32                             in_addr_t;
typedef __net16                             in_port_t;

typedef struct {
    int counter;
} atomic_t;

#ifdef __VOLTOS_CONFIG_64BIT__
typedef struct {
    s64 counter;
} atomic64_t;
#endif /* __VOLTOS_CONFIG_64BIT__ */

typedef __u16 __voltos_acl_id_t;
typedef __u32 __voltos_acl_seqno_t;

typedef __u32 __voltos_idb_index_t;
typedef __u32 __voltos_idb_sort_t;
typedef __u32 __voltos_if_index_t;

typedef __u32 __voltos_netns_id_t;

typedef __u16 __voltos_sa_family_t;

typedef __u16 __voltos_tty_id_t;

typedef __u16 __voltos_vlan_id_t;
typedef __u32 __voltos_vrf_id_t;
typedef __u8 __voltos_vty_id_t;

#endif /* _VOLTOS_TYPES_H_ */
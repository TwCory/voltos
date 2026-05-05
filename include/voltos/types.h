#ifndef _VOLTOS_TYPES_H_
#define _VOLTOS_TYPES_H_

#include <nbapi/voltos/types.h>
#include <nbapi/voltos/unix_types.h>

typedef __s128                                  s128;
typedef __u128                                  u128;
typedef __f128                                  f128;

typedef __unix_ssize_t                          s_size;
typedef __unix_size_t                           u_size;
typedef float                                   f_size;

typedef intptr_t                                s_intptr;
typedef uintptr_t                               u_intptr;

typedef s_long                                  s_intfptr;
typedef u_long                                  u_intfptr;

#ifdef __VOLTOS_PHY_ADDR_64BIT__
typedef u64                                     phy_addr_t;
#else
typedef u32                                     phy_addr_t;
#endif /* __VOLTOS_PHY_ADDR_64BIT */

#ifdef __VOLTOS_DMA_ADDR_64BIT__
typedef u64                                     dma_addr_t;
#else
typedef u32                                     dma_addr_t;
#endif /* __VOLTOS_DMA_ADDR_64BIT__ */

typedef struct {
    int counter;
} atomic_t;

typedef struct {
    s64 counter;
} atomic64_t;

#define aligned_s64                             __aligned_s64
#define aligned_u64                             __aligned_u64
#define aligned_be64                            __aligned_be64
#define aligned_le64                            __aligned_le64
#define aligned_net64                           __aligned_net64
#define aligned_host64                          __aligned_host64

#endif /* _VOLTOS_TYPES_H_ */
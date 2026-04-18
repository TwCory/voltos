// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_INT128_STRUCT_H_
#define _PLATFORM_INT128_STRUCT_H_

#define INT128_SIZE         16

typedef struct {
    signed char bytes[INT128_SIZE];
} __attribute__ ((packed)) __s128;

typedef struct {
    unsigned char bytes[INT128_SIZE];
} __attribute__ ((packed)) __u128;

#endif /* _PLATFORM_INT128_STRUCT_H_ */
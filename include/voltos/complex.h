// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_COMPLEX_H
#define VOLTOS_COMPLEX_H

#include <complex.h>

#ifndef __complex__
#define __complex__ 		_Complex
#endif /* __complex__ */

typedef struct {
    __complex__ float counter;
} complex_t;

typedef struct {
    __complex__ double counter;
} complex64_t;

typedef __complex__ float cf16;
typedef __complex__ float cf32;
typedef __complex__ double cf64;

#define CF128_DATA32_SIZE   4
#define CF128_DATA64_SIZE   2

typedef struct {
    union {
        __complex__ float data32[CF128_DATA32_SIZE];
        __complex__ double data64[CF128_DATA64_SIZE];
    };
} __attribute__ ((packed)) cf128;

#endif /* VOLTOS_COMPLEX_H */

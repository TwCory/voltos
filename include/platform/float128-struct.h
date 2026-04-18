// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_FLOAT128_STRUCT_H_
#define _PLATFORM_FLOAT128_STRUCT_H_

#define FLOAT128_SIZE       4

typedef struct {
    float data[FLOAT128_SIZE];
} __attribute__ ((packed)) f128;

#endif /* _PLATFORM_FLOAT128_STRUCT_H_ */
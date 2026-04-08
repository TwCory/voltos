#ifndef _PLATFORM_COMPLEX_H_
#define _PLATFORM_COMPLEX_H_

#ifndef __complex__
#define __complex__             _Complex
#endif /* __complex__ */

typedef struct {
    union {
        __complex__ float data_cf32[4];
        __complex__ double data_cf64[2];
    } cf128_u;
} __attribute__ ((packed)) __cf128;

#endif /* _PLATFORM_COMPLEX_H_ */
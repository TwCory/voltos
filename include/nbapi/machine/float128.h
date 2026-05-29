#ifndef _NBAPI_MACHINE_FLOAT128_H_
#define _NBAPI_MACHINE_FLOAT128_H_

#define FLOAT128_SIZE_F32 4
#define FLOAT128_SIZE_F64 2

typedef struct {
    union {
        float data32[FLOAT128_SIZE_F32];
        double data64[FLOAT128_SIZE_F64];
    };
} __attribute__ ((packed)) __f128;

#endif /* _NBAPI_MACHINE_FLOAT128_H_ */

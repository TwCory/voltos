#ifndef _PLATFORM_FLOAT128_STRUCT_H_
#define _PLATFORM_FLOAT128_STRUCT_H_

#define FLOAT128_FLOAT_SIZE         4
#define FLOAT128_DOUBLE_SIZE        2

typedef struct {
    union {
        float data_f32[FLOAT128_FLOAT_SIZE];
        double data_f64[FLOAT128_DOUBLE_SIZE];
    } f128_u;
} __attribute__ ((packed)) f128;

#endif /* _PLATFORM_FLOAT128_STRUCT_H_ */
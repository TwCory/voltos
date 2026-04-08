#ifndef _PLATFORM_FLOAT64_STRUCT_H_
#define _PLATFORM_FLOAT64_STRUCT_H_

#define FLOAT64_SIZE        2

typedef struct {
    float data[FLOAT64_SIZE];
} __attribute__ ((packed)) f64;

#endif /* _PLATFORM_FLOAT64_STRUCT_H_ */
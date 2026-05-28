#ifndef _NBAPI_MACHINE_INT128_STRUCT_H_
#define _NBAPI_MACHINE_INT128_STRUCT_H_

#define INT128_SIZE     	16

typedef struct {
    signed char 		bytes[INT128_SIZE];
} __s128;

typedef struct {
    unsigned char 		bytes[INT128_SIZE];
} __u128;

#endif /* _NBAPI_MACHINE_INT128_STRUCT_H_ */

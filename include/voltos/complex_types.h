#ifndef _VOLTOS_COMPLEX_TYPES_H_
#define _VOLTOS_COMPLEX_TYPES_H_

#include <platform/complex.h>

typedef __complex__ float 		cf16;
typedef __complex__ float 		cf32;
typedef __complex__ double		cf64;

typedef struct {
	union {
		__complex__ float 	data32[4];
		__complex__ double 	data64[2];
	};
} __attribute__ ((packed)) cf128;

#endif /* _VOLTOS_COMPLEX_TYPES_H_ */

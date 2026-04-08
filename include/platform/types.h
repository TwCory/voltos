#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#include <platform/complex.h>
#include <platform/float16.h>
#include <platform/float32.h>
#include <platform/int8.h>
#include <platform/int16.h>
#include <platform/int32.h>
#include <platform/int64-const.h>
#include <platform/int128-const.h>
#include <platform/intminmax.h>
#include <platform/string.h>

#ifdef __PLATFORM_INTERNAL_BOOL_TYPE__
#include <platform/bool-enum.h>
#else
#include <platform/bool-type.h>
#endif /* __PLATFORM_INTERNAL_BOOL_TYPE__ */

#ifdef __PLATFORM_INTERNAL_FLOAT64_TYPE__
#include <platform/float64-struct.h>
#else
#include <platform/float64-type.h>
#endif /* __PLATFORM_INTERNAL_FLOAT64_TYPE__ */

typedef signed char         __s_char;
typedef unsigned char       __u_char;

typedef signed short        __s_short;
typedef unsigned short      __u_short;

typedef signed int          __s_int;
typedef unsigned int        __u_int;

typedef signed long         __s_long;
typedef unsigned long       __u_long;

typedef signed long long    __s_llong;
typedef unsigned long long  __u_llong;

typedef unsigned char       __nibble;
typedef unsigned char       __byte;
typedef unsigned char       __octet;
typedef unsigned char       __hextet;

#endif /* _PLATFORM_TYPES_H_ */
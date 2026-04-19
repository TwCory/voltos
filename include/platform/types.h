// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#include <platform/bits.h>
#include <platform/boolean.h>
#include <platform/float16.h>
#include <platform/float32.h>
#include <platform/float64.h>
#include <platform/float128-struct.h>
#include <platform/int8.h>
#include <platform/int16.h>
#include <platform/int32.h>
#include <platform/int64.h>
#include <platform/int128.h>
#include <platform/intptr.h>
#include <platform/size.h>
#include <platform/string-type.h>

typedef signed char __s_char;
typedef unsigned char __u_char;

typedef signed short __s_short;
typedef unsigned short __u_short;

typedef signed int __s_int;
typedef unsigned int __u_int;

typedef signed long __s_long;
typedef unsigned long __u_long;

typedef signed long long __s_llong;
typedef unsigned long long __u_llong;

typedef __least_u16 __char16;
typedef __least_u32 __char32;

#endif /* _PLATFORM_TYPES_H_ */
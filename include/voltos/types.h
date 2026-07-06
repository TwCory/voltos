#ifndef _VOLTOS_TYPES_H
#define _VOLTOS_TYPES_H

typedef signed char			__s_char;
typedef unsigned char			__u_char;

typedef signed short			__s_short;
typedef unsigned short			__u_short;

typedef signed int			__s_int;
typedef unsigned int			__u_int;

typedef signed long			__s_long;
typedef unsigned long			__u_long;

typedef signed long long		__s_llong;
typedef unsigned long long		__u_llong;

typedef __s_char			__s8;
typedef __u_char			__u8;

typedef __s_short			__s16;
typedef __u_short			__u16;

typedef __s_int				__s32;
typedef __u_int				__u32;

typedef __s_llong			__s64;
typedef __u_llong			__u64;

#ifdef __SIZEOF_INT128__
typedef signed __int128			__s128;
typedef unsigned __int128		__u128;
#else
#define INT128_BYTE_SIZE		16
typedef struct {
	signed char 			bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __s128;
typedef struct {
	unsigned char 			bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __u128;
#endif /* __SIZEOF_INT128__ */

#ifndef __bitwise
#define __bitwise
#endif /* __bitwise */

typedef __u16	__bitwise		__be16;
typedef __u32	__bitwise		__be32;
typedef __u64	__bitwise		__be64;
typedef __u128	__bitwise		__be128;

typedef __u16	__bitwise		__le16;
typedef __u32	__bitwise		__le32;
typedef __u64	__bitwise		__le64;
typedef __u128	__bitwise		__le128;

typedef __be16				__net16;
typedef __be32				__net32;
typedef __be64				__net64;
typedef __be128				__net128;

typedef __u16	__bitwise		__host16;
typedef __u32	__bitwise		__host32;
typedef __u64	__bitwise		__host64;
typedef __u128	__bitwise		__host128;

typedef __u16	__bitwise		__csum16;
typedef __u32	__bitwise		__csum32;

typedef _Bool 				bool;

typedef __s8 				s8;
typedef __u8 				u8;

typedef __s16 				s16;
typedef __u16 				u16;

typedef __s32 				s32;
typedef __u32 				u32;

typedef __s64 				s64;
typedef __u64 				u64;

typedef __s128 				s128;
typedef __u128 				u128;

typedef float 				f16;
typedef float 				f32;
typedef double 				f64;

#define FLOAT128_FLOAT_SIZE		4
#define FLOAT128_DOUBLE_SIZE		2

typedef struct {
	union {
		float 			data32[FLOAT128_FLOAT_SIZE];
		double 			data64[FLOAT128_DOUBLE_SIZE];
	};
} __attribute__ ((packed)) f128;

#endif /* _VOLTOS_TYPES_H */

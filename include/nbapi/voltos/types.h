#ifndef _NBAPI_VOLTOS_TYPES_H
#define _NBAPI_VOLTOS_TYPES_H

typedef signed char 				__s_char;
typedef unsigned char 				__u_char;

typedef signed short 				__s_short;
typedef unsigned short 				__u_short;

typedef signed int 				__s_int;
typedef unsigned int 				__u_int;

typedef signed long 				__s_long;
typedef unsigned long 				__u_long;

typedef signed long long 			__s_llong;
typedef unsigned long long 			__u_llong;

typedef signed char 				__schar;
typedef unsigned char 				__uchar;

typedef signed short 				__sshort;
typedef unsigned short 				__ushort;

typedef signed int 				__sint;
typedef unsigned int 				__uint;

typedef signed long 				__slong;
typedef unsigned long 				__ulong;

typedef signed long long 			__sllong;
typedef unsigned long long 			__ullong;

typedef __s_char 				__s8;
typedef __u_char 				__u8;

typedef __s_short 				__s16;
typedef __u_short 				__u16;

typedef __s_int 				__s32;
typedef __u_int 				__u32;

typedef __s_llong 				__s64;
typedef __u_llong 				__u64;

#ifdef __SIZEOF_INT128__
typedef signed __int128 			__s128;
typedef unsigned __int128 			__u128;
#else
#define INT128_BYTE_SIZE 			16
typedef struct {
	signed char 				bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __s128;
typedef struct {
	unsigned char 				bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __u128;
#endif /* __SIZEOF_INT128__ */

typedef __u16 __attribute__ ((bitwise)) 	__be16;
typedef __u32 __attribute__ ((bitwise)) 	__be32;
typedef __u64 __attribute__ ((bitwise)) 	__be64;
typedef __u128 __attribute__ ((bitwise)) 	__be128;

typedef __u16 __attribute__ ((bitwise)) 	__le16;
typedef __u32 __attribute__ ((bitwise)) 	__le32;
typedef __u64 __attribute__ ((bitwise)) 	__le64;
typedef __u128 __attribute__ ((bitwise)) 	__le128;

typedef __be16 					__net16;
typedef __be32 					__net32;
typedef __be64 					__net64;
typedef __be128 				__net128;

typedef __u16 __attribute__ ((bitwise)) 	__host16;
typedef __u32 __attribute__ ((bitwise)) 	__host32;
typedef __u64 __attribute__ ((bitwise)) 	__host64;
typedef __u128 __attribute__ ((bitwise)) 	__host128;

typedef __u16 __attribute__ ((bitwise)) 	__csum16;
typedef __u32 __attribute__ ((bitwise)) 	__csum32;

typedef __u_char 				__byte;
typedef __u_char 				__octet;
typedef __u_short 				__hextet;

#endif /* _NBAPI_VOLTOS_TYPES_H */

#ifndef _NBAPI_VOLTOS_TYPES_H_
#define _NBAPI_VOLTOS_TYPES_H_

#include <machine/types.h>

#ifdef __VOLTOS_CORE__
#define __voltos_bitwise    		__attribute__ ((bitwise))
#else
#define __voltos_bitwise
#endif /* __VOLTOS_CORE__ */

typedef __u16   __voltos_bitwise 	__be16;
typedef __u32   __voltos_bitwise 	__be32;
typedef __u64   __voltos_bitwise 	__be64;
typedef __u128  __voltos_bitwise 	__be128;

typedef __u16   __voltos_bitwise 	__le16;
typedef __u32   __voltos_bitwise 	__le32;
typedef __u64   __voltos_bitwise 	__le64;
typedef __u128  __voltos_bitwise 	__le128;

typedef __be16      			__net16;
typedef __be32      			__net32;
typedef __be64      			__net64;
typedef __be128     			__net128;

typedef __u16   __voltos_bitwise 	__host16;
typedef __u32   __voltos_bitwise 	__host32;
typedef __u64   __voltos_bitwise 	__host64;
typedef __u128  __voltos_bitwise 	__host128;

typedef __u16   __voltos_bitwise 	__csum16;
typedef __u32   __voltos_bitwise 	__csum32;

#define __aligned_s64   		__s64 		__attribute__ ((aligned(8)))
#define __aligned_u64   		__u64 		__attribute__ ((aligned(8)))
#define __aligned_be64  		__be64 		__attribute__ ((aligned(8)))
#define __aligned_le64      		__le64 		__attribute__ ((aligned(8)))
#define __aligned_net64     		__net64 	__attribute__ ((aligned(8)))
#define __aligned_host64    		__host64 	__attribute__ ((aligned(8)))

#define __aligned_s128  		__s128 		__attribute__ ((aligned(8)))
#define __aligned_u128      		__u128 		__attribute__ ((aligned(8)))
#define __aligned_be128     		__be128 	__attribute__ ((aligned(8)))
#define __aligned_le128     		__le128 	__attribute__ ((aligned(8)))
#define __aligned_net128    		__net128 	__attribute__ ((aligned(8)))
#define __aligned_host128   		__host128 	__attribute__ ((aligned(8)))

#endif /* _NBAPI_VOLTOS_TYPES_H_ */

#ifndef _VOLTOS_ATOMIC_TYPES_H_
#define _VOLTOS_ATOMIC_TYPES_H_

#include <voltos/types.h>

#ifndef __atomic__
#define __atomic__          	_Atomic
#endif /* __atomic__ */

typedef __atomic__ bool		__atomic_bool;

typedef __atomic__ ssize_t	atomic_ssize_t;
typedef __atomic__ size_t	atomic_size_t;

typedef __atomic__ intptr_t	atomic_intptr_t;
typedef __atomic__ uintptr_t	atomic_uintptr_t;

typedef __atomic__ intfptr_t	atomic_intfptr_t;
typedef __atomic__ uintfptr_t	atomic_uintfptr_t;

typedef __atomic__ intmax_t	atomic_intmax_t;
typedef __atomic__ uintmax_t	atomic_uintmax_t;

typedef __atomic__ __char	__atomic_char;
typedef __atomic__ __schar	__atomic_schar;
typedef __atomic__ __uchar	__atomic_uchar;

typedef __atomic__ __sshort	__atomic_sshort;
typedef __atomic__ __ushort	__atomic_ushort;

typedef __atomic__ __sint	__atomic_sint;
typedef __atomic__ __uint	__atomic_uint;

typedef __atomic__ __slong	__atomic_slong;
typedef __atomic__ __ulong	__atomic_ulong;

typedef __atomic__ __sllong	__atomic_sllong;
typedef __atomic__ __ullong	__atomic_ullong;

typedef __atomic__ __s8		__atomic_s8;
typedef __atomic__ __u8		__atomic_u8;

typedef __atomic__ __s16	__atomic_s16;
typedef __atomic__ __u16	__atomic_u16;

typedef __atomic__ __s32	__atomic_s32;
typedef __atomic__ __u32	__atomic_u32;

typedef __atomic__ __s64	__atomic_s64;
typedef __atomic__ __u64	__atomic_u64;

typedef __atomic__ __s128	__atomic_s128;
typedef __atomic__ __u128	__atomic_u128;

#endif /* _VOLTOS_ATOMIC_TYPES_H_ */

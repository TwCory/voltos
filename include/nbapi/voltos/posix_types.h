#ifndef _NBAPI_VOLTOS_POSIX_TYPES_H
#define _NBAPI_VOLTOS_POSIX_TYPES_H

typedef signed char 			__voltos_schar_t;
typedef unsigned char 			__voltos_uchar_t;

typedef signed short 			__voltos_sshort_t;
typedef unsigned short 			__voltos_ushort_t;

typedef signed int 			__voltos_sint_t;
typedef unsigned int 			__voltos_uint_t;

typedef signed long 			__voltos_slong_t;
typedef unsigned long 			__voltos_ulong_t;

typedef signed long long 		__voltos_sllong_t;
typedef unsigned long long 		__voltos_ullong_t;

typedef unsigned int 			__voltos_size32_t;
typedef signed int 			__voltos_ssize32_t;

typedef unsigned long long 		__voltos_size64_t;
typedef signed long long 		__voltos_ssize64_t;

typedef unsigned short 			__voltos_gid16_t;
typedef unsigned short 			__voltos_pid16_t;
typedef unsigned short 			__voltos_uid16_t;

typedef unsigned int 			__voltos_gid32_t;
typedef unsigned int 			__voltos_pid32_t;
typedef unsigned int 			__voltos_uid32_t;

typedef unsigned long long 		__voltos_gid64_t;
typedef unsigned long long 		__voltos_pid64_t;
typedef unsigned long long 		__voltos_uid64_t;

typedef signed int 			__voltos_time32_t;
typedef signed long long 		__voltos_time64_t;

typedef signed int 			__voltos_intptr32_t;
typedef unsigned int 			__voltos_uintptr32_t;

typedef signed long long 		__voltos_intptr64_t;
typedef unsigned long long 		__voltos_uintptr64_t;

typedef signed int 			__voltos_ptrdiff32_t;
typedef signed long long 		__voltos_ptrdiff64_t;

typedef unsigned int 			__voltos_clock32_t;
typedef unsigned long long 		__voltos_clock64_t;

typedef unsigned int 			__voltos_caddr32_t;
typedef unsigned long long 		__voltos_caddr64_t;

typedef unsigned int 			__voltos_dev_t;
typedef unsigned int	 		__voltos_mode_t;
typedef unsigned short 			__voltos_umode_t;
typedef unsigned int 			__voltos_off_t;
typedef unsigned int 			__voltos_daddr_t;
typedef unsigned int 			__voltos_timer_t;
typedef unsigned int 			__voltos_key_t;
typedef unsigned int 			__voltos_index_t;
typedef signed long 			__voltos_suseconds_t;
typedef unsigned int 			__voltos_clockid_t;
typedef unsigned int 			__voltos_mqd_t;

/* File Descriptor */
typedef int 				__voltos_fd_t;

#endif /* _NBAPI_VOLTOS_POSIX_TYPES_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/errqueue.h
 *
 */

#ifndef _NBAPI_VOLTOS_ERRQUEUE_H
#define _NBAPI_VOLTOS_ERRQUEUE_H

struct sock_ee_data_rfc4884 {
	__u16 						length;
	__u8 						flags;
	__u8 						reserved;
};

struct sock_extended_err {
	__u32						errno;	
	__u8						source;
	__u8						type;
	__u8						code;
	__u8						padding;
	__u32   					info;
	union {
		__u32   				data;
		struct sock_ee_data_rfc4884 		rfc4884;
	};
};

#endif /* _NBAPI_VOLTOS_ERRQUEUE_H */

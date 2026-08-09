// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/atmsvc.h
 *
 */

#ifndef _NBAPI_VOLTOS_ATMSVC_H
#define _NBAPI_VOLTOS_ATMSVC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmsvc {
	__voltos_sa_family_t		satmsvc_family;
	struct {
		unsigned char		private;
		char			public;
		char			lij_type;
		__u32			lij_id;
	} satmsvc_addr __attribute__ ((aligned(8)));
};

#endif /* _NBAPI_VOLTOS_ATMSVC_H */

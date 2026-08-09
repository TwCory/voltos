// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/atmpvc.h
 *
 */

#ifndef _NBAPI_VOLTOS_ATMPVC_H
#define _NBAPI_VOLTOS_ATMPVC_H

#include <voltos/socket.h>

struct sockaddr_atmpvc {
	__voltos_sa_family_t		satmpvc_family;
	struct {
		short			interface;
		short			vpi;
		int			vci;
	} satmpvc_addr __attribute__ ((aligned(8)));
};

#endif /* _NBAPI_VOLTOS_ATMPVC_H */

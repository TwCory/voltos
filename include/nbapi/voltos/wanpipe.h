// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/wanpipe.h
 *
 */

#ifndef _NBAPI_VOLTOS_WANPIPE_H
#define _NBAPI_VOLTOS_WANPIPE_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_wanpipe {
	__voltos_sa_family_t swanpipe_family;
};

#endif /* _NBAPI_VOLTOS_WANPIPE_H */

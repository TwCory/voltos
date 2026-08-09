// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/lat.h
 *
 *	DEC Local Area Transport (LAT)
 */

#ifndef _NBAPI_VOLTOS_LAT_H
#define _NBAPI_VOLTOS_LAT_H

#include <voltos/socket.h>

struct sockaddr_lat {
	__voltos_sa_family_t		slat_family;
};


#endif /* _NBAPI_VOLTOS_LAT_H */

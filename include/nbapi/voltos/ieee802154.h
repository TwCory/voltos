// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ieee802154.h
 *
 */

#ifndef _NBAPI_VOLTOS_IEEE802154_H
#define _NBAPI_VOLTOS_IEEE802154_H

#include <voltos/socket.h>

struct ieee802154_addr {

};

struct sockaddr_ieee802154 {
	__voltos_sa_family_t		sieee802154_family;
	struct ieee802154_addr		sieee802154_addr;
};

#endif /* _NBAPI_VOLTOS_IEEE802154_H */

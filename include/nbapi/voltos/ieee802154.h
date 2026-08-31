// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ieee802154.h
 *
 * 	IEEE 802.15.4 Socket Family
 */

#ifndef _NBAPI_VOLTOS_IEEE802154_H
#define _NBAPI_VOLTOS_IEEE802154_H

#include <voltos/socket.h>

#define IEEE802154_ADDR_SIZE				8

enum {
	IEEE802154_IE_SUBTYPE_ID_T_UNSPEC		= 0,
#define IEEE802154_IE_SUBTYPE_ID_UNSPEC			IEEE802154_IE_SUBTYPE_ID_T_UNSPEC
	IEEE802154_IE_SUBTYPE_ID_T_SUBID_6TOP		= 1,
#define IEEE802154_IE_SUBTYPE_ID_SUBID_6TOP		IEEE802154_IE_SUBTYPE_ID_T_SUBID_6TOP
	IEEE802154_IE_SUBTYPE_ID_T_6TISCH_JOIN_INFO	= 2,
#define IEEE802154_IE_SUBTYPE_ID_6TISCH_JOIN_INFO	IEEE802154_IE_SUBTYPE_ID_T_6TISCH_JOIN_INFO
	__IEEE802154_IE_SUBTYPE_ID_T_MAX__
};

#define IEEE802154_IE_SUBTYPE_ID_MAX			(__IEEE802154_IE_SUBTYPE_ID_T_MAX__ - 1)

struct ieee802154_addr {
	unsigned char 					s_addr[IEEE802154_ADDR_SIZE];
} __attribute__ ((packed));

struct sockaddr_ieee802154 {
	__voltos_sa_family_t				sieee802154_family;
	struct ieee802154_addr				sieee802154_addr;
};

#endif /* _NBAPI_VOLTOS_IEEE802154_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if.h
 *
 * 	Network Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_H
#define _NBAPI_VOLTOS_IF_H

#ifndef IFNAMSIZ
#define IFNAMSIZ					16
#endif /* IFNAMSIZ */

typedef int 						__voltos_if_index_t;
typedef unsigned int 					__voltos_if_flags_t;

enum {
	IFF_UP						= (1 << 0),
#define IFF_UP						IFF_UP
	IFF_BROADCAST					= (1 << 1),
#define IFF_BROADCAST					IFF_BROADCAST
	IFF_DEBUG					= (1 << 2),
#define IFF_DEBUG					IFF_DEBUG
	IFF_LOOPBACK					= (1 << 3),
#define IFF_LOOPBACK					IFF_LOOPBACK
	IFF_POINTTOPOINT				= (1 << 4),
#define IFF_POINTTOPOINT				IFF_POINTTOPOINT
	IFF_NOTRAILERS					= (1 << 5),
#define IFF_NOTRAILERS					IFF_NOTRAILERS
	IFF_RUNNING					= (1 << 6),
#define IFF_RUNNING					IFF_RUNNING
	IFF_NOARP					= (1 << 7),
#define IFF_NOARP					IFF_NOARP
	IFF_PROMISC					= (1 << 8),
#define IFF_PROMISC					IFF_PROMISC
	IFF_ALLMULTI					= (1 << 9),
#define IFF_ALLMULTI					IFF_ALLMULTI
	IFF_MASTER					= (1 << 10),
#define IFF_MASTER					IFF_MASTER
	IFF_SLAVE					= (1 << 11),
#define IFF_SLAVE					IFF_SLAVE
	IFF_MULTICAST					= (1 << 12),
#define IFF_MULTICAST					IFF_MULTICAST
	IFF_PORTSEL					= (1 << 13),
#define IFF_PORTSEL					IFF_PORTSEL
	IFF_AUTOMEDIA					= (1 << 14),
#define IFF_AUTOMEDIA					IFF_AUTOMEDIA
	IFF_DYNAMIC					= (1 << 15),
#define IFF_DYNAMIC					IFF_DYNAMIC
	IFF_LOWERUP					= (1 << 16),
#define IFF_LOWERUP					IFF_LOWERUP
	IFF_DORMANT					= (1 << 17),
#define IFF_DORMANT					IFF_DORMANT
	IFF_ECHO					= (1 << 18),
#define IFF_ECHO					IFF_ECHO
};

enum {
	IF_STATE_T_UNKNOWN				= 0,
#define IF_STATE_UNKNOWN				IF_STATE_T_UNKNOWN
	IF_STATE_T_UP					= 1,
#define IF_STATE_UP					IF_STATE_T_UP
	IF_STATE_T_DOWN					= 2,
#define IF_STATE_DOWN					IF_STATE_T_DOWN
	IF_STATE_T_TEST					= 3,
#define IF_STATE_TEST					IF_STATE_T_TEST
	__IF_STATE_T_MAX__
};

#define IF_STATE_MAX					(__IF_STATE_T_MAX__ - 1)

enum {
	IF_OPER_STATE_T_INVALID				= 0,
#define IF_OPER_STATE_INVALID				IF_OPER_STATE_T_INVALID
	IF_OPER_STATE_T_READY				= 1,
#define IF_OPER_STATE_READY				IF_OPER_STATE_T_READY
	IF_OPER_STATE_T_NO_PASS				= 2,
#define IF_OPER_STATE_NO_PASS				IF_OPER_STATE_T_NO_PASS
	IF_OPER_STATE_T_TEST				= 3,
#define IF_OPER_STATE_TEST				IF_OPER_STATE_T_TEST
	IF_OPER_STATE_T_UNKNOWN				= 4,
#define IF_OPER_STATE_UNKNOWN				IF_OPER_STATE_T_UNKNOWN
	IF_OPER_STATE_T_DORMANT				= 5,
#define IF_OPER_STATE_DORMANT				IF_OPER_STATE_T_DORMANT
	IF_OPER_STATE_T_NOT_PRESENT			= 6,
#define IF_OPER_STATE_NOT_PRESENT			IF_OPER_STATE_T_NOT_PRESENT
	IF_OPER_STATE_T_LOWER_LAYER_DOWN		= 7,
#define IF_OPER_STATE_LOWER_LAYER_DOWN			IF_OPER_STATE_T_LOWER_LAYER_DOWN
	__IF_OPER_STATE_T_MAX__
};

#define IF_OPER_STATE_MAX				(__IF_OPER_STATE_T_MAX__ - 1)

enum {
	IF_LINK_MODE_T_UNSPEC				= 0,
#define IF_LINK_MODE_UNSPEC				IF_LINK_MODE_T_UNSPEC
	IF_LINK_MODE_T_DEFAULT				= 1,
#define IF_LINK_MODE_DEFAULT				IF_LINK_MODE_T_DEFAULT
	IF_LINK_MODE_T_DORMANT				= 2,
#define IF_LINK_MODE_DORMANT				IF_LINK_MODE_T_DORMANT
	IF_LINK_MODE_T_TEST				= 3,
#define IF_LINK_MODE_TEST				IF_LINK_MODE_T_TEST
	__IF_LINK_MODE_T_MAX__
};

#define IF_LINK_MODE_MAX				(__IF_LINK_MODE_T_MAX__ - 1)

struct ifmap {
	unsigned long mem_start;
	unsigned long mem_end;
	unsigned short base_addr; 
	unsigned char irq;
	unsigned char dma;
	unsigned char port;
};

struct if_settings {
	unsigned int type;
	unsigned int size;
};

struct ifreq {

};

struct ifconf {
	int ifc_length;
};

#endif /* _NBAPI_VOLTOS_IF_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/dnsix.h
 *
 * 	U.S. Department of Defence (DoD) Intelligence Information System Network
 * 	Security for Information Exchange (DNSIX)
 */

#ifndef _NBAPI_VOLTOS_DNSIX_H
#define _NBAPI_VOLTOS_DNSIX_H

#define DNSIX_DMDP_RETRY_MIN				0
#define DNSIX_DMDP_RETRY_MAX				200
#define DNSIX_DMDP_RETRY_DEFAULT			4

#define DNSIX_NAT_TRANSMIT_COUNT_MIN			0
#define DNSIX_NAT_TRANSMIT_COUNT_MAX			200
#define DNSIX_NAT_TRANSMIT_COUNT_DEFAULT		1

enum dnsix_host_type {
	DNSIX_HOST_TYPE_T_UNSPEC			= 0,
	DNSIX_HOST_TYPE_T_AUTHORIZATION_REDIRECTION	= 1,
	DNSIX_HOST_TYPE_T_PRIMARY			= 2,
	DNSIX_HOST_TYPE_T_SECONDARY			= 3,
	DNSIX_HOST_TYPE_T_SOURCE			= 4,
	__DNSIX_HOST_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DNSIX_H */

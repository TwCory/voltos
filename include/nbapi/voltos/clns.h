// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/clns.h
 *
 * 	Connection-Less Network Service (CLNS)
 */

#ifndef _NBAPI_VOLTOS_CLNS_H
#define _NBAPI_VOLTOS_CLNS_H

#define CLNS_HOST_NAME_SIZE			(32)
#define CLNS_TEMPLATE_ALIAS_NAME_SIZE		(32)

#define CLNS_ERPDU_INTERVAL_MIN			0
#define CLNS_ERPDU_INTERNAL_MAX			255

#define CLNS_ESCT_TIME_MIN			0
#define CLNS_ESCT_TIME_MAX			255

#define CLNS_HOLDING_TIME_MIN			0
#define CLNS_HOLDING_TIME_MAX			255

#define CLNS_MTU_MIN				512
#define CLNS_MTU_MAX				4500

#define CLNS_PACKET_LIFETIME_MIN		0
#define CLNS_PACKET_LIFETIME_MAX		255

#define CLNS_RDPDU_INTERVAL_MIN			0
#define CLNS_RDPDU_INTERVAL_MAX			255

#endif /* _NBAPI_VOLTOS_CLNS_H */

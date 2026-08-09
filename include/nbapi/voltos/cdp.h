// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/cdp.h
 *
 *	Cisco Discovery Protocol (CDP)
 */

#ifndef _NBAPI_VOLTOS_CDP_H
#define _NBAPI_VOLTOS_CDP_H

#include <voltos/types.h>

enum cdp_duplex {
	CDP_DUPLEX_T_HALF			= 1,
	CDP_DUPLEX_T_FULL			= 2,
	CDP_DUPLEX_T_HALF_MISMATCH		= 3,
	CDP_DUPLEX_T_FULL_MISMATCH		= 4,
	__CDP_DUPLEX_T_MAX__
};

enum cdp_advertise_version {
	CDP_ADVERTISE_VERSION_T_NONE		= 0,
	CDP_ADVERTISE_VERSION_T_V1		= 1,
	CDP_ADVERTISE_VERSION_T_V2		= 2,
	__CDP_ADVERTISE_VERSION_T_MAX__
};

enum cdp_unidir_mode {
	CDP_UNIDIR_MODE_T_OFF			= 0,
	CDP_UNIDIR_MODE_T_SEND_ONLY		= 1,
	CDP_UNIDIR_MODE_T_RECEIVE_ONLY		= 2,
	CDP_UNIDIR_MODE_T_UNKNOWN		= 3,
	__CDP_UNIDIR_MODE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CDP_H */

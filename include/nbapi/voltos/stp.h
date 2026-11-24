// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/stp.h
 *
 * 	Spanning Tree Protocol (STP)
 */

#ifndef _NBAPI_VOLTOS_STP_H
#define _NBAPI_VOLTOS_STP_H

enum stp_mode {
	STP_MODE_UNSPEC			= 0,
	STP_MODE_CST			= 1,
	STP_MODE_RST			= 2,
	STP_MODE_MST			= 3,
	__STP_MODE_MAX__
};

#define STP_MODE_MAX			(__STP_MODE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_STP_H */

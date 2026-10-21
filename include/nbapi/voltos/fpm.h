// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fpm.h
 *
 * 	Flexible Packet Matching (FPM)
 */

#ifndef _NBAPI_VOLTOS_FPM_H
#define _NBAPI_VOLTOS_FPM_H

#define FPM_PACKAGE_NAME_SIZE		32
#define FPM_PACKAGE_GROUP_NAME_SIZE	32

#define FPM_LOCAL_PATH_SIZE		64
#define FPM_REMOTE_PATH_SIZE		64

enum fpm_package_action {
	FPM_PACKAGE_ACTION_T_UNSPEC	= 0,
	FPM_PACKAGE_ACTION_T_LOG	= 1,
	__FPM_PACKAGE_ACTION_T_MAX__
};

enum fpm_protocol_type {
	FPM_PROTOCOL_TYPE_T_UNSPEC	= 0,
	FPM_PROTOCOL_TYPE_T_TFTP	= 1,
	__FPM_PROTOCOL_TYPE_T_MAX__
};


#endif /* _NBAPI_VOLTOS_FPM_H */

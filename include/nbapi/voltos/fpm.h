// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fpm.h
 *
 * 	Flexible Packet Matching (FPM)
 */

#ifndef _NBAPI_VOLTOS_FPM_H
#define _NBAPI_VOLTOS_FPM_H

#define FPM_PACKAGE_NAME_LEN		(32)
#define FPM_PACKAGE_GROUP_NAME_LEN	(32)

#define FPM_LOCAL_PATH_LEN		(64)
#define FPM_REMOTE_PATH_LEN		(64)

enum fpm_package_action {
	FPM_PACKAGE_ACTION_UNSPEC	= 0,
	FPM_PACKAGE_ACTION_LOG		= 1,
	__FPM_PACKAGE_ACTION_MAX__
};

#define FPM_PACKAGE_ACTION_MAX		(__FPM_PACKAGE_ACTION_MAX__ - 1)

enum fpm_protocol_type {
	FPM_PROTOCOL_TYPE_UNSPEC	= 0,
	FPM_PROTOCOL_TYPE_TFTP		= 1,
	__FPM_PROTOCOL_TYPE_MAX__
};

#define FPM_PROTOCOL_TYPE_MAX		(__FPM_PROTOCOL_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_FPM_H */

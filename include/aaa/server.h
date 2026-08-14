// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/aaa/server.h
 *
 */

#ifndef _AAA_SERVER_H
#define _AAA_SERVER_H

#define AAA_SERVER_NAME_SIZE			32

enum aaa_server_type {
	AAA_SERVER_TYPE_T_UNSPEC		= 0,
	AAA_SERVER_TYPE_T_DIAMETER		= 1,
	AAA_SERVER_TYPE_T_RADIUS		= 2,
	AAA_SERVER_TYPE_T_TACACS		= 3,
	__AAA_SERVER_TYPE_T_MAX__
};

struct aaa_server {
	const char name[AAA_SERVER_NAME_SIZE];
};

#endif /* _AAA_SERVER_H */

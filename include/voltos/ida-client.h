// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ida-client.h
 *
 */

#ifndef _VOLTOS_IDA_CLIENT_H
#define _VOLTOS_IDA_CLIENT_H

#include <voltos/types.h>
#include <nbapi/voltos/ida-client.h>

struct ida_client {
	bool enabled;
	char *server_url;
};

#endif /* _VOLTOS_IDA_CLIENT_H */

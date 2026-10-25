// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ida-client.h
 *
 */

#ifndef _VOLTOS_IDA_CLIENT_H
#define _VOLTOS_IDA_CLIENT_H

#include <voltos/refcount.h>
#include <nbapi/voltos/ida-client.h>

struct ida_client {
	const char 			*server_url;
	enum ida_client_state 		state;
	refcount_t 			ref_count;
};

#endif /* _VOLTOS_IDA_CLIENT_H */

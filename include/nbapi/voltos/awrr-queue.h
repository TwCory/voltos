// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/awrr-queue.h
 *
 */

#ifndef _NBAPI_VOLTOS_AWRR_QUEUE_H
#define _NBAPI_VOLTOS_AWRR_QUEUE_H

#define AWRR_QUEUE_NAME_SIZE			(32)

enum awrr_queue_type {
	AWRR_QUEUE_TYPE_UNSPEC			= 0,
	AWRR_QUEUE_TYPE_DSCP_MAP		= 1,
	__AWRR_QUEUE_TYPE_MAX__
};

#define AWRR_QUEUE_TYPE_MAX			(__AWRR_QUEUE_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_AWRR_QUEUE_H */

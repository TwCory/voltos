// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_parallel.h
 *
 *	Parallel Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_PARALLEL_H
#define _NBAPI_VOLTOS_IF_PARALLEL_H

enum parallel_protocol {
	PARALLEL_PROTOCOL_UNSPEC	= 0,
	PARALLEL_PROTOCOL_PLIP		= 1,
	__PARALLEL_PROTOCOL_MAX__
};

#define PARALLEL_PROTOCOL_MAX		(__PARALLEL_PROTOCOL_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_PARALLEL_H */

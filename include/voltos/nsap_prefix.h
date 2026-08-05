// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/nsap_prefix.h
 *
 */

#ifndef _VOLTOS_NSAP_PREFIX_H
#define _VOLTOS_NSAP_PREFIX_H

#include <voltos/nsap_addr.h>

#define NSAP_PREFIX_LENGTH_MIN		0
#define NSAP_PREFIX_LENGTH_MAX		0

typedef struct {
	nsap_addr_t			address;
	__u8				prefix_length;
} nsap_prefix_t;

#endif /* _VOLTOS_NSAP_PREFIX_H */

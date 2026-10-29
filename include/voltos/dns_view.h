// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dns_view.h
 *
 */

#ifndef _VOLTOS_DNS_VIEW_H
#define _VOLTOS_DNS_VIEW_H

#include <voltos/refcount.h>
#include <nbapi/voltos/dns_view.h>

struct dns_view {
	const char 			name[DNS_VIEW_NAME_SIZE];
	refcount_t 			ref_count;
};

#endif /* _VOLTOS_DNS_VIEW_H */

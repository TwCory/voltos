// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dialer-list.h
 *
 */

#ifndef _VOLTOS_DIALER_LIST_H
#define _VOLTOS_DIALER_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/dialer-list.h>

struct dialer_list {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_DIALER_LIST_H */

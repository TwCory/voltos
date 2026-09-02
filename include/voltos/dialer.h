// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dialer.h
 *
 */

#ifndef _VOLTOS_DIALER_H
#define _VOLTOS_DIALER_H

#include <voltos/refcount.h>
#include <nbapi/voltos/dialer.h>

struct dialer {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_DIALER_H */

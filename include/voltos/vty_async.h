// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vty_async.h
 *
 */

#ifndef _VOLTOS_VTY_ASYNC_H
#define _VOLTOS_VTY_ASYNC_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vty_async.h>

struct vty_async {
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VTY_ASYNC_H */

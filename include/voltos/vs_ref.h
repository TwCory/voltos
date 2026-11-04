// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vs_ref.h
 *
 * 	VoltOS System (VS)
 */

#ifndef __VS_REF_H__
#define __VS_REF_H__

#include <voltos/refcount.h>

struct vs_ref {
	refcount_t ref_count;
};

#define VS_REF_INIT(i)

#endif /* __VS_REF_H__ */

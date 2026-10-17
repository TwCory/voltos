// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/l2tp-class.h
 *
 */

#ifndef _VOLTOS_L2TP_CLASS_H
#define _VOLTOS_L2TP_CLASS_H

#include <voltos/refcount.h>
#include <nbapi/voltos/l2tp-class.h>

struct l2tp_class {
	const char 			name[L2TP_CLASS_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_L2TP_CLASS_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vc-class.h
 *
 */

#ifndef _VOLTOS_VC_CLASS_H
#define _VOLTOS_VC_CLASS_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vc-class.h>

struct vc_class {
	const char 				name[VC_CLASS_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VC_CLASS_H */

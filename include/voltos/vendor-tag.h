// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vendor-tag.h
 *
 */

#ifndef _VOLTOS_VENDOR_TAG_H
#define _VOLTOS_VENDOR_TAG_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vendor-tag.h>

struct vendor_tag {
	refcount_t refcount;
};

#endif /* _VOLTOS_VENDOR_TAG_H */

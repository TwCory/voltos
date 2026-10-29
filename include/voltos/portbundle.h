// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/portbundle.h
 *
 */

#ifndef _VOLTOS_PORTBUNDLE_H
#define _VOLTOS_PORTBUNDLE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/portbundle.h>

struct portbundle {
	const char *name;
	refcount_t ref_count;
};

#endif /* _VOLTOS_PORTBUNDLE_H */

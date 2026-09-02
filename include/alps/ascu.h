// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/alps/ascu.h
 *
 */

#ifndef _ALPS_ASCU_H
#define _ALPS_ASCU_H

#include <voltos/alps.h>
#include <voltos/refcount.h>

struct alps_ascu {
	const char 			name[ALPS_ASCU_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _ALPS_ASCU_H */

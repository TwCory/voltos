// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/sockptr.h
 *
 */

#ifndef _VOLTOS_SOCKPTR_H
#define _VOLTOS_SOCKPTR_H

#include <voltos/types.h>

typedef struct {
	union {
		void 		*voltos_ptr;
		void 		*user_ptr;
	};
	bool 			is_system:1;
} sockptr_t;

#endif /* _VOLTOS_SOCKPTR_H */

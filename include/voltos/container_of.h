// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/container_of.h
 *
 */

#ifndef _VOLTOS_CONTAINER_OF_H
#define _VOLTOS_CONTAINER_OF_H

#include <voltos/build_debug.h>
#include <voltos/stddef.h>

#ifndef typeof_member
#define typeof_member(T, m)								\
	typeof(((T*)0)->m)
#endif /* typeof_member */

#ifndef container_of
#define container_of(ptr, type, member) 						\
({											\
	void *__mptr = (void *)(ptr);							\
	static_assert(__same_type(*(ptr), ((type *)0)->member) ||			\
		      __same_type(*(ptr), void),					\
		      "pointer type mismatch in container_of()");			\
	((type *)(__mptr - offsetof(type, member))); 					\
})
#endif /* container_of */

#ifndef container_of_const
#define container_of_const(ptr, type, member)						\
	_Generic(ptr,									\
		const typeof(*(ptr)) *: ((const type *)container_of(ptr, type, member)),\
		default: ((type *)container_of(ptr, type, member))			\
	)
#endif /* container_of_const */

#endif /* _VOLTOS_CONTAINER_OF_H */

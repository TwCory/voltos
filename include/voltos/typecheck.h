// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/typecheck.h
 *
 * 	Sourced from <linux/typecheck.h>
 */

#ifndef _VOLTOS_TYPECHECK_H
#define _VOLTOS_TYPECHECK_H

/*
 *	Check at compile time that something is of a particular type.
 *	Always evaluates to 1 so you may use it easily in comparisons.
 */

#define typecheck(type, x) 			\
({						\
	type 		__dummy1; 		\
	typeof(x) 	__dummy2; 		\
	(void) (&__dummy1 == &__dummy2); 	\
	1;					\
})

/*
 *	Check at compile time that 'function' is a certain type, or is a pointer
 *	to that type (needs to use typedef for the function type.)
 */

#define typecheck_fn(type, fn) 			\
({						\
	typeof(type) 	__tmp = fn; 		\
	(void) __tmp; 				\
})

/*
 *	Check at compile time that something is a pointer type.
 */

#define typecheck_ptr(x) 			\
({						\
	typeof(x) 	__dummy; 		\
	(void) sizeof(*__dummy); 		\
	1; 					\
})

#endif /* _VOLTOS_TYPECHECK_H */

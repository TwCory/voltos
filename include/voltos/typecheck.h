// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/typecheck.h
 *
 * 	Compile Time Data Type Checking Functions
 */

#ifndef _VOLTOS_TYPECHECK_H
#define _VOLTOS_TYPECHECK_H

#define typecheck(type, x)			\
({						\
	type __dummy;				\
	typeof(x) __dummy2;			\
	(void)(&__dummy == &__dummy2);		\
	1;					\
})

#define typecheck_fn(type, fn)			\
({						\
	typeof(type) __tmp = fn;		\
	(void) __tmp;				\
})

#define typecheck_ptr(x)			\
({						\
	typeof(x) __dummy;			\
	(void) sizeof(*__dummy);		\
	1;					\
})

#endif /* _VOLTOS_TYPECHECK_H */

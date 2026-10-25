// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/once.h
 *
 */

#ifndef _VOLTOS_ONCE_H
#define _VOLTOS_ONCE_H

#ifndef DO_ONCE
#define DO_ONCE(function, ...)
#endif /* DO_ONCE */

#ifndef DO_ONCE_SLEEPABLE
#define DO_ONCE_SLEEPABLE(function, ...)
#endif /* DO_ONCE_SLEEPABLE */

#define get_random_once(buffer, nbytes)
#define get_random_sleepable_once(buffer, nbytes)

#endif /* _VOLTOS_ONCE_H */

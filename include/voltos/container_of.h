// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/container_of.h
 *
 */

#ifndef _VOLTOS_CONTAINER_OF_H
#define _VOLTOS_CONTAINER_OF_H

#include <voltos/build_debug.h>
#include <voltos/stddef.h>

#define typeof_member(T, m)				typeof(((T*)0)->m)

#define container_of(ptr, type, member)

#define container_of_const(ptr, type, member)

#endif /* _VOLTOS_CONTAINER_OF_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/stringify.h
 *
 */

#ifndef _VOLTOS_STRINGIFY_H
#define _VOLTOS_STRINGIFY_H

#define __stringify_1(x...)	#x
#define __stringify(x...)	__stringify_1(x)

#define FILE_LINE		__FILE__ ":" __stringify(__LINE__)

#endif /* _VOLTOS_STRINGIFY_H */

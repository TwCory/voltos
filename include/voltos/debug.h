// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/debug.h
 *
 */

#ifndef _VOLTOS_DEBUG_H
#define _VOLTOS_DEBUG_H

struct debug_entry {
	unsigned long 				address;
	const char 				*format;
	const char 				*file;
	unsigned short 				line;
	unsigned short 				flags;
};

#endif /* _VOLTOS_DEBUG_H */

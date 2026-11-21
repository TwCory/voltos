// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hexdump.h
 *
 */

#ifndef _VOLTOS_HEXDUMP_H
#define _VOLTOS_HEXDUMP_H

#include <voltos/hex.h>

void hex_dump(struct file *file, const char *title,
	      const char *buffer, unsigned int length);

void mem_dump(struct file *file, const char *title,
	      const char *buffer, unsigned int length);

#endif /* _VOLTOS_HEXDUMP_H */

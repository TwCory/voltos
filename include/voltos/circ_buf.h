// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/circ_buf.h
 *
 * 	Circular Buffers
 */

#ifndef _VOLTOS_CIRC_BUF_H
#define _VOLTOS_CIRC_BUF_H

struct circ_buf {
	char 		*buf;
	int 		head;
	int 		tail;
};

#endif /* _VOLTOS_CIRC_BUF_H */

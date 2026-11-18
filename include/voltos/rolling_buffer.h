// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rolling_buffer.h
 *
 * 	Rolling Buffers
 */

#ifndef _VOLTOS_ROLLING_BUFFER_H
#define _VOLTOS_ROLLING_BUFFER_H

struct rolling_buffer {
	struct iovec_iter 	iter;
	u8 			next_head_slot;
	u8 			first_tail_slot;
};

struct rolling_buffer_snapshot {
	unsigned char 		current_slot;
	unsigned char 		current_order;
};

#endif /* _VOLTOS_ROLLING_BUFFER_H */

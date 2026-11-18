// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/random_buffer.h
 *
 */

#ifndef _VOLTOS_RANDOM_BUFFER_H
#define _VOLTOS_RANDOM_BUFFER_H

#include <voltos/random_isaac.h>
#include <voltos/types.h>

struct random_buffer {
	struct isaac 		ctx[2];
	size_t 			*buffer;
	size_t 			next_length;
	size_t 			cache_size;

	union {
		u8 		cached_octets[sizeof(size_t)];
		size_t 		cached_word;
	};
};

#endif /* _VOLTOS_RANDOM_BUFFER_H */

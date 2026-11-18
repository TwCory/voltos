// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ring_buffer_types.h
 *
 * 	Ring Buffers
 */

#ifndef _VOLTOS_RING_BUFFER_TYPES_H
#define _VOLTOS_RING_BUFFER_TYPES_H

#define RB_TIMESTAMP_SHIFT		(27)
#define RB_TIMESTAMP_MASK		((1ULL << RB_TIMESTAMP_SHIFT) - 1)
#define RB_TIMESTAMP_DELTA_TEST		(~RB_TIMESTAMP_MASK)

#define RB_PAGE_HEADER_SIZE		(offsetof(struct buffer_data_page, data))
#define RB_EVENT_HEADER_SIZE		(offsetof(struct ring_buffer_event, array))
#define RB_ALIGNMENT			(4U)
#define RB_SMALL_DATA_MAX		
#define RB_EVENT_SIZE_MIN		(8U)

#define RB_FORCE_8BYTE_ALIGNMENT	(0)
#define RB_ARCH_ALIGNMENT		RB_ALIGNMENT

#define RB_ALIGN_DATA			__aligned(RB_ARCH_ALIGNMENT)

static inline bool test_timestamp(u64 delta)
{
	return !!(delta & RB_TIMESTAMP_DELTA_TEST);
}

struct buffer_data_page {
	u64 		timestamp;
	int 		commit;
	unsigned char 	data[] RB_ALIGN_DATA;
};

#endif /* _VOLTOS_RING_BUFFER_TYPES_H */

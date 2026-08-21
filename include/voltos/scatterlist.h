// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/scatterlist.h
 *
 * 	Scatter-Gather List Data Structure
 */

#ifndef _VOLTOS_SCATTERLIST_H
#define _VOLTOS_SCATTERLIST_H

#include <voltos/types.h>

struct scatterlist {
	unsigned long 			page_link;
	unsigned int 			offset;
	unsigned int 			length;
	dma_addr_t 			dma_address;
	unsigned int 			dma_length;
	unsigned int 			dma_flags;
};

struct sg_table {

};

struct sg_append_table {

};

struct sg_page_iter {

};

struct sg_dma_page_iter {

};

struct sg_mapping_iter {

};

#endif /* _VOLTOS_SCATTERLIST_H */

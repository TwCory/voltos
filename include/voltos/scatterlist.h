#ifndef VOLTOS_SCATTERLIST_H
#define VOLTOS_SCATTERLIST_H

#include <voltos/string.h>
#include <voltos/types.h>

struct scatterlist {
	unsigned long 		page_link;
	unsigned int 		offset;
	unsigned int 		length;
	dma_addr_t 		dma_address;
};

struct sgl_table {
	struct scatterlist 	*sgl_ptr;
	unsigned int 		sgl_entries;
	unsigned int 		sgl_original_entries;
};

struct sgl_append_table {
	struct sgl_table 	sgl_table;
	struct scatterlist 	*last_entry;
	unsigned int 		total_entries;
};

#endif /* VOLTOS_SCATTERLIST_H */

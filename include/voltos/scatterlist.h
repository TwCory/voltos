// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_SCATTERLIST_H_
#define _VOLTOS_SCATTERLIST_H_

#include <voltos/string.h>
#include <voltos/types.h>

struct scatterlist {
    unsigned long           sgl_page_link;
    unsigned int            sgl_offset;
    unsigned int            sgl_length;
};

struct sgl_table {
    struct scatterlist      *sgl_ptr;
    unsigned int            sgl_entry_count;
    unsigned int            sgl_original_entry_count;
};

struct sgl_table_append {
    struct sgl_table        sgl_table;
    struct scatterlist      *sgl_private;
    unsigned int            sgl_entry_total;
};

#endif /* _VOLTOS_SCATTERLIST_H_ */
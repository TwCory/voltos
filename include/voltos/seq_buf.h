#ifndef VOLTOS_SEQ_BUF_H
#define VOLTOS_SEQ_BUF_H

#include <voltos/types.h>

struct seq_buf {
	char 		*buffer;
	size_t 		size;
	size_t 		length;
};

#endif /* VOLTOS_SEQ_BUF_H */

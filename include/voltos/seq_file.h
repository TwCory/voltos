#ifndef VOLTOS_SEQ_FILE_H
#define VOLTOS_SEQ_FILE_H

#include <voltos/mutex.h>
#include <voltos/types.h>

struct seq_file {
	char 			*buffer;
	size_t 			size;
	size_t 			from;
	size_t 			count;
	size_t 			pad_until;
	mutex_t 		lock;
	int 			poll_event;
	void 			*internal;
};

struct seq_file_ops {

};

#endif /* VOLTOS_SEQ_FILE_H */

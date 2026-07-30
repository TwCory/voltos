#ifndef _VOLTOS_DIRENT_H
#define _VOLTOS_DIRENT_H

#include <voltos/types.h>

struct voltos_dirent64 {
	__u64 			d_index;
	__s64 			d_offset;
	unsigned short 		d_entry_size;
	unsigned char 		d_type;
	char 			d_name[];
};

#endif /* _VOLTOS_DIRENT_H */

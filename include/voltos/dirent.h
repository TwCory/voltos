// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_DIRENT_H
#define VOLTOS_DIRENT_H

#include <dirent.h>
#include <sys/dir.h>
#include <voltos/types.h>

struct voltos_dirent64 {
	u64 			d_ino;
	s64 			d_off;
	unsigned short 		d_reclen;
	unsigned char 		d_type;
	char 			d_name[];
};

#endif /* VOLTOS_DIRENT_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dirent.h
 *
 */

#ifndef _VOLTOS_DIRENT_H
#define _VOLTOS_DIRENT_H

#include <dirent.h>
#include <voltos/types.h>

struct voltos_dirent64 {
	u64 			d_ino;
	i64 			d_off;
	unsigned short 		d_reclen;
	unsigned char 		d_type;
	char 			d_name[];
};

#endif /* _VOLTOS_DIRENT_H */

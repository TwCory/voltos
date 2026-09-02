// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/seq_buf.h
 *
 */

#ifndef _VOLTOS_SEQ_BUF_H
#define _VOLTOS_SEQ_BUF_H

#include <voltos/debug.h>
#include <voltos/minmax.h>
#include <voltos/seq_file.h>
#include <voltos/types.h>

struct seq_buf {
	char 					*buffer;
	size_t 					size;
	size_t 					length;
};

#ifndef DECLARE_SEQ_BUF
#define DECLARE_SEQ_BUF(name, size)
#endif /* DECLARE_SEQ_BUF */

#endif /* _VOLTOS_SEQ_BUF_H */

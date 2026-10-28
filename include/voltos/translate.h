// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/translate.h
 *
 */

#ifndef _VOLTOS_TRANSLATE_H
#define _VOLTOS_TRANSLATE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/translate.h>

struct translate_entry {
	const char 				name[TRANSLATE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_TRANSLATE_H */

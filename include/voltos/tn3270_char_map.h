// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/tn3270_char_map.h
 *
 */

#ifndef _VOLTOS_TN3270_CHAR_MAP_H
#define _VOLTOS_TN3270_CHAR_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/tn3270_char_map.h>

struct tn3270_char_map {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_TN3270_CHAR_MAP_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/sort.h
 *
 */

#ifndef _VOLTOS_SORT_H
#define _VOLTOS_SORT_H

#include <voltos/types.h>

#define cmp_int(l, r)		(((l) > (r)) - ((l) < (r)))

void r_sort(void *base, size_t num, size_t size,
	    r_cmp_fn_t cmp_fn,
	    r_swap_fn_t swap_fn,
	    const void *priv);

void sort(void *base, size_t num, size_t size,
	  cmp_fn_t cmp_fn,
	  swap_fn_t swap_fn);

void r_sort_nonatomic(void *base, size_t num, size_t size,
		      r_cmp_fn_t cmp_fn,
		      r_swap_fn_t swap_fn,
		      const void *priv);

void sort_nonatomic(void *base, size_t num, size_t size,
		    cmp_fn_t cmp_fn,
		    swap_fn_t swap_fn);
#endif /* _VOLTOS_SORT_H */

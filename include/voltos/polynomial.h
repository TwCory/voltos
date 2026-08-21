// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/polynomial.h
 *
 */

#ifndef _VOLTOS_POLYNOMIAL_H
#define _VOLTOS_POLYNOMIAL_H

struct polynomial_term {
	unsigned int 			degree;
	signed long 			coefficient;
	signed long 			divider;
	signed long 			divider_remaining;
};

typedef struct polynomial {
	signed long			total_divider;
	struct polynomial_term		terms[];
} polynomial_t;

signed long polynomial_calc(const polynomial_t *poly, signed long data);

#endif /* _VOLTOS_POLYNOMIAL_H */

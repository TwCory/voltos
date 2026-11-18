// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/polynomial.h
 *
 */

#ifndef _VOLTOS_POLYNOMIAL_H
#define _VOLTOS_POLYNOMIAL_H

struct polynomial_term {
	unsigned int 			degree;
	long 				coefficient;
	long 				divider;
	long 				divider_leftover;
};

struct polynomial {
	long 				total_dividers;
	struct polynomial_term 		terms[];
};

long polynomial_calc(const struct polynomial *polynomial, long data);

#endif /* _VOLTOS_POLYNOMIAL_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/approx.h
 *
 * 	Rational Approximation
 */

#ifndef _VOLTOS_APPROX_H
#define _VOLTOS_APPROX_H

#include <voltos/types.h>

int approx32(double alpha, double d, u32 *p, u32 *q);

int approx64(double alpha, double d, u64 *p, u64 *q);

#endif /* _VOLTOS_APPROX_H */

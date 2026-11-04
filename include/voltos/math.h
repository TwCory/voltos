// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/math.h
 *
 */

#ifndef _VOLTOS_MATH_H
#define _VOLTOS_MATH_H

#include <math.h>

#include <nbapi/voltos/voltos.h>

#define __round_mask(x, y)			\
	((__typeof__(x))((y)-1))

#define round_up_power_of_2(x, y)		\
	((((x)-1) | __round_mask(x, y))+1)

#define round_down_power_of_2(x, y)		\
	((x) & ~__round_mask(x, y))

#define DIVIDE_ROUND_UP_POWER_OF_2(n, d)	\
	((n) / (d) + !!((n) & ((d) - 1)))

#define DIVIDE_ROUND_UP				__VOLTOS_DIV_ROUND_UP

#define DIVIDE_ROUND_DOWN_ULL(ll, d)

#define DIVIDE_ROUND_UP_ULL(ll, d)

#define DIVIDE_ROUND_UP_SECTOR_T(ll, d)

#define round_up(x, y)

#define round_down(x, y)

#define DIVIDE_ROUND_CLOSEST

#define DIVIDE_ROUND_CLOSEST_ULL(x, divisor)

#define __STRUCT_FRACTION(type)

#define multiply_fraction(x, n, d)

#define sector_divide(a, b)

#define absolute(x)

#define __absolute_choose_expr(x, type, other)

#define absolute_difference(a, b)

#endif /* _VOLTOS_MATH_H */

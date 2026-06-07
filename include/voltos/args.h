// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ARGS_H
#define VOLTOS_ARGS_H

#define __count_args(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _n, X...) 	\
 	_n												\

#define count_args(X...) 										\
	__count_args(, ##X, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)			\

#define __concat(a, b)											\
	a ## b												\

#define concat(a, b)											\
	__concat(a, b)											\

#endif /* VOLTOS_ARGS_H */

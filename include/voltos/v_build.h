// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/v_build.h
 *
 */

#ifndef _VOLTOS_V_BUILD_H
#define _VOLTOS_V_BUILD_H

#define DEFINE(sym, val)			asm volatile("\n.ascii \"->" #sym " %0 " #val "\"" : : "i" (val))

#define BLANK()					asm volatile("\n.ascii \"->\"" : : )

#define OFFSET(sym, str, mem)			DEFINE(sym, offsetof(struct str, mem))

#define COMMENT(x)				asm volatile("\n.ascii \"->#" x "\"")

#endif /* _VOLTOS_V_BUILD_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/glob.h
 *
 */

#ifndef _VOLTOS_GLOB_H
#define _VOLTOS_GLOB_H

#include <voltos/compiler.h>
#include <voltos/types.h>

bool __pure glob_match(char const *pat, char const *str);

#endif /* _VOLTOS_GLOB_H */

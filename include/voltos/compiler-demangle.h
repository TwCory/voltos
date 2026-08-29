// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler-demangle.h
 *
 *
 */

#ifndef _VOLTOS_COMPILER_DEMANGLE_H
#define _VOLTOS_COMPILER_DEMANGLE_H

struct demangle_symbol {
	const char					*source;
	const char					*suffix;
};

#define __demangle(string)
#define __demangle_line(line, output, include_hash)
#define __demangle_stream(input, output)

#define __is_symbol_like(name)
#define __is_ascii_alphanumeric(name)
#define __is_ascii_punctuation(name)

#define __demangle_error(error)
#define __demangle_nohash(a, b)

#endif /* _VOLTOS_COMPILER_DEMANGLE_H */

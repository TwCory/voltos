// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/codetag.h
 *
 * 	Code Tagging Support
 */

#ifndef _VOLTOS_CODETAG_H
#define _VOLTOS_CODETAG_H

#include <voltos/compiler.h>
#include <voltos/types.h>

#define CODETAG_SECTION_START_PREFIX		"__start_"
#define CODETAG_SECTION_STOP_PREFIX		"__stop_"

#define CODETAG_ALIGNMENT	8

struct codetag {
	unsigned int flags;
	unsigned int line;
	const char *module_name;
	const char *function;
	const char *file_name;
} __aligned(CODETAG_ALIGNMENT);

union codetag_ref {
	struct codetag *ct;
};

struct codetag_type_desc {

};

struct codetag_iterator {

};

#endif /* _VOLTOS_CODETAG_H */

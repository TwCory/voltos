#ifndef _VOLTOS_CODETAG_H
#define _VOLTOS_CODETAG_H

#include <voltos/compiler.h>

#define CODETAG_SECTION_START_PREFIX		"__start_"
#define CODETAG_SECTION_STOP_PREFIX		"__stop_"

struct codetag {
	unsigned int 				ct_flags;
	unsigned int 				ct_line;
	const char 				*ct_module_name;
	const char 				*ct_function;
	const char 				*ct_file_name;
} __aligned(8);

union codetag_ref {
	struct codetag 				*ct_ref;
};

struct codetag_type_desc {

};

struct codetag_iter {

};

#endif /* _VOLTOS_CODETAG_H */

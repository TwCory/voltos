#ifndef _VOLTOS_COMPILER_TYPES_H
#define _VOLTOS_COMPILER_TYPES_H

#include <voltos/compiler_attributes.h>
#include <voltos/compiler-context-analysis.h>
#include <voltos/compiler-demangle.h>

#ifdef __clang__
#include <voltos/compiler-clang.h>
#elif defined(__GNUC__)
#include <voltos/compiler-gcc.h>
#else
#error "Unspecified or Unknown Compiler"
#endif


#endif /* _VOLTOS_COMPILER_TYPES_H */

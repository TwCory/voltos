#ifndef _VOLTOS_VOLTOS_H_
#define _VOLTOS_VOLTOS_H_

#include <voltos/align.h>
#include <voltos/array_size.h>
#include <voltos/bitops.h>
#include <voltos/build_debug.h>
#include <voltos/byteorder.h>
#include <voltos/compiler.h>
#include <voltos/container_of.h>
#include <voltos/hex.h>
#include <voltos/limits.h>
#include <voltos/linkage.h>
#include <voltos/locale.h>
#include <voltos/log2.h>
#include <voltos/math.h>
#include <voltos/minmax.h>
#include <voltos/print.h>
#include <voltos/printf.h>
#include <voltos/stdarg.h>
#include <voltos/stddef.h>
#include <voltos/typecheck.h>
#include <voltos/types.h>
#include <nbapi/voltos/voltos.h>

enum {
	DISABLED		= 0,
	ENABLED			= 1
};

enum {
	CREATE			= 1,
	READ			= 2,
	UPDATE			= 3,
	DELETE			= 4
};

enum {
	SEVERITY_T_CRITICAL	= 1,
	SEVERITY_T_MAJOR	= 2,
	SEVERITY_T_MINOR	= 3,
	SEVERITY_T_DEBUG	= 4,
	__SEVERITY_T_MAX__
};

#endif /* _VOLTOS_VOLTOS_H_ */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ctype.h
 *
 */

#ifndef _VOLTOS_CTYPE_H
#define _VOLTOS_CTYPE_H

#include <ctype.h>
#include <voltos/compiler.h>

#define _U			0x01
#define _L			0x02
#define _D			0x04
#define _C			0x08
#define _P			0x10
#define _S			0x20
#define _X			0x40
#define _SP			0x80

extern const unsigned char 	_ctype[];

#endif /* _VOLTOS_CTYPE_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitflags.h
 *
 */

#ifndef _VOLTOS_BITFLAGS_H
#define _VOLTOS_BITFLAGS_H

#ifndef __bitflags
#define __bitflags
#endif /* __bitflags */

#ifndef FLAG
#define FLAG(bit)				(1 << (bit))
#endif /* FLAG */

#ifndef FLAG_NAME
#define FLAG_NAME(bit, name)
#endif /* FLAG_VAR */

#ifndef FLAG_COMMENT
#define FLAG_COMMENT(bit, comment)
#endif /* FLAG_COMMENT */

#ifndef FLAG_NAME_COMMENT
#define FLAG_NAME_COMMENT(bit, name, comment)
#endif /* FLAG_NAME_COMMENT */

#endif /* _VOLTOS_BITFLAGS_H */

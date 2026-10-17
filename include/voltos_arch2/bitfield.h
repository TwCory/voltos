// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitfield.h
 *
 */

#ifndef _VOLTOS_BITFIELD_H
#define _VOLTOS_BITFIELD_H

#include <voltos/build_debug.h>
#include <voltos/byteorder.h>
#include <voltos/compiler.h>
#include <voltos/typecheck.h>

#define __bf_shf					__builtin_ctzll

#define __scalar_type_to_unsigned_cases(type)

#define __unsigned_scalar_typeof(x)

#define __bf_cast_unsigned(type, x)

#define __BF_FIELD_CHECK_MASK(_mask, _val, _pfx)

#define __BF_FIELD_CHECK_REG(mask, reg, pfx)

#define __BF_FIELD_CHECK(mask, reg, val, pfx)

#define __FIELD_PREPARE(mask, val, pfx)

#define __FIELD_GET(mask, reg, pfx)

#define FIELD_MAX(_mask)

#define FIELD_FIT(_mask, _val)

#define FIELD_PREPARE(_mask, _val)

#define __BF_CHECK_POWER2(n)

#define FIELD_PREPARE_CONST(_mask, _val)

#define FIELD_GET(_mask, _reg)

#define FIELD_GET_SIGNED(mask, reg)

#define FIELD_MODIFY(_mask, _reg_p, _val)

#define __MAKE_OP(size)

#define __field_prepare(mask, val)

#define __field_get(mask, reg)

#define field_prepare(mask, val)

#define field_get(mask, reg)

#endif /* _VOLTOS_BITFIELD_H */

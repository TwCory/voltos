// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitfield.h
 *
 */

#ifndef _VOLTOS_BITFIELD_H
#define _VOLTOS_BITFIELD_H

#define __bf_shf	__builtin_ctzll

#define __scalar_type_to_unsigned_cases(type)

#define __unsigned_scalar_typeof(x)

#define __bf_cast_unsigned(type, x)

#define __BF_FIELD_CHECK_MASK(_mask, _val, _pfx)

#define __BF_FIELD_CHECK_REG(mask, reg, pfx)

#define __BF_FIELD_CHECK(mask, reg, val, pfx)

#define __FIELD_PREP(mask, val, pfx)

#define __FIELD_GET(mask, reg, pfx)

#define FIELD_MAX(_mask)

#define FIELD_FIT(_mask, _val)

#define FIELD_PREP(_mask, _val)

#define __BF_CHECK_POWER_OF_2(n)

#define FIELD_PREP_CONST(_mask, _val)

#define FIELD_GET(_mask, _reg)

#define FIELD_GET_SIGNED(mask, reg)

#define FIELD_MODIFY(_mask, _reg_p, _val)

#define field_max(field)

#define ____MAKE_OP(type, base, to, from)

#define __MAKE_OP(size)

#undef __MAKE_OP
#undef ____MAKE_OP

#define __field_prep(mask, val)

#define __field_get(mask, reg)

#define field_prep(mask, val)

#define field_get(mask, reg)

#endif /* _VOLTOS_BITFIELD_H */

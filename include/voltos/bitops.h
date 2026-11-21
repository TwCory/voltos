// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitops.h
 *
 */

#ifndef _VOLTOS_BITOPS_H
#define _VOLTOS_BITOPS_H

#include <voltos/bits.h>
#include <voltos/types.h>

#define BITS_TO_LONGS(nr)		__VOLTOS_DIV_ROUND_UP(nr, BITS_PER_TYPE(long))
#define BITS_TO_U32(nr)			__VOLTOS_DIV_ROUND_UP(nr, BITS_PER_TYPE(u32))
#define BITS_TO_U64(nr)			__VOLTOS_DIV_ROUND_UP(nr, BITS_PER_TYPE(u64))
#define BITS_TO_BYTES(nr)		__VOLTOS_DIV_ROUND_UP(nr, BITS_PER_TYPE(byte_t))

#define BYTES_TO_BITS(nb)		((nb) * BITS_PER_BYTE)

extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);

#define bitop(op, nr, addr)

#define __set_bit(nr, addr)

#define __clear_bit(nr, addr)

#define __change_bit(nr, addr)

#define __test_and_set_bit(nr, addr)

#define __test_and_clear_bit(nr, addr)

#define __test_and_change_bit(nr, addr)

#define test_bit(nr, addr)

#define test_bit_acquire(nr, addr)

#define assign_bit(nr, addr, value)

#define __assign_bit(nr, addr, value)

#define __ptr_set_bit(nr, addr)

#define __ptr_clear_bit(nr, addr)

#define __ptr_test_bit(nr, addr)

#ifndef set_mask_bits
#define set_mask_bits(ptr, mask, bits)
#endif /* set_mask_bits */

#ifndef bit_clear_unless
#define bit_clear_unless(ptr, clear, test)
#endif /* bit_clear_unless */

#endif /* _VOLTOS_BITOPS_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitops.h
 *
 */

#ifndef _VOLTOS_BITOPS_H
#define _VOLTOS_BITOPS_H

#include <nbapi/voltos/voltos.h>

#define BITS_TO_U32(nr)
#define BITS_TO_U64(nr)
#define BITS_TO_LONGS(nr)
#define BITS_TO_BYTES(nr)

#define BYTES_TO_BITS(nb)

#define bitop(op, nr, addr)

#define __set_bit(nr, addr)
#define __clear_bit(nr, addr)
#define __change_bit(nr, addr)
#define __test_and_set_bit(nr, addr)
#define __test_and_clear_bit(nr, addr)
#define __test_and_change_bit(nr, addr)

#define test_bit(nr, addr)
#define test_bit_acquire(nr, addr)

#define __check_bitop_pr(name)

#define assign_bit(nr, addr, value)

#define __assign_bit(nr, addr, value)

#define __ptr_set_bit(nr, addr)

#define __ptr_clear_bit(nr, addr)

#define __ptr_test_bit(nr, addr)

#define set_mask_bits(ptr, mask, bits)

#define bit_clear_unless(ptr, clear, test)

#endif /* _VOLTOS_BITOPS_H */

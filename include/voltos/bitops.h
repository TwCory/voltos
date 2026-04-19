// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_BITOPS_H_
#define _VOLTOS_BITOPS_H_

#define __set_bit(i)        (1 << i)
#define __get_bit(n, i)     (n >> i) & 1U

#endif /* _VOLTOS_BITOPS_H_ */
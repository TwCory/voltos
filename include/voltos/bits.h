// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_BITS_H_
#define _VOLTOS_BITS_H_

#include <platform/bits.h>

#define BITS_PER_NIBBLE         4
#define BITS_PER_BYTE           8
#define BITS_PER_OCTET          8
#define BITS_PER_HEXTET         16

#ifndef __bits
#define __bits(x)               (8 * sizeof(x))
#endif /* __bits */

#endif /* _VOLTOS_BITS_H_ */
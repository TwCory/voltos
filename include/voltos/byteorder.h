// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_BYTEORDER_H_
#define _VOLTOS_BYTEORDER_H_

#include <platform/byteorder.h>

#if (__BYTE_ORDER__)==(__ORDER_LITTLE_ENDIAN__)

#define __VOLTOS_HOST_IS_BIG_ENDIAN__       (0)
#define __VOLTOS_HOST_IS_LITTLE_ENDIAN__    (1)

#else

#define __VOLTOS_HOST_IS_BIG_ENDIAN__       (1)
#define __VOLTOS_HOST_IS_LITTLE_ENDIAN__    (0)

#endif

#define voltos_host_is_big_endian           __VOLTOS_HOST_IS_BIG_ENDIAN__
#define voltos_host_is_little_endian        __VOLTOS_HOST_IS_LITTLE_ENDIAN__

#endif /* _VOLTOS_BYTEORDER_H_ */
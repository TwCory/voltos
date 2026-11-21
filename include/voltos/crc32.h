// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc32.h
 *
 */

#ifndef _VOLTOS_CRC32_H
#define _VOLTOS_CRC32_H

#include <voltos/bitrev.h>
#include <voltos/types.h>

u32 crc32_le(u32 crc, const void *p, size_t length);

static inline u32 crc32(u32 crc, const void *p, size_t length)
{
	return crc32_le(crc, p, length);
}

u32 crc32_be(u32 crc, const void *p, size_t length);

u32 crc32c(u32 crc, const void *p, size_t length);

#define CRC32_LE_OPTIMIZATION				BIT(0)
#define CRC32_BE_OPTIMIZATION				BIT(1)
#define CRC32C_OPTIMIZATION				BIT(2)

#define ethernet_crc(length, data)    			bitrev32(crc32_le(~0, data, length))
#define ethernet_crc_le(length, data) 			crc32_le(~0, data, length)

#endif /* _VOLTOS_CRC32_H */

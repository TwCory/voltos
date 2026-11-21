// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc-ccitt.h
 *
 */

#ifndef _VOLTOS_CRC_CCITT_H
#define _VOLTOS_CRC_CCITT_H

#include <voltos/types.h>

extern u16 const crc_ccitt_table[256];

extern u16 crc_ccitt(u16 crc, const u8 *buffer, size_t length);

static inline u16 crc_ccitt_byte(u16 crc, const u8 c)
{
	return (crc >> 8) ^ crc_ccitt_table[(crc ^ c) & 0xFF];
}

#endif /* _VOLTOS_CRC_CCITT_H */

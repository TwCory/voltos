// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc-itu-t.h
 *
 */

#ifndef _VOLTOS_CRC_ITU_T_H
#define _VOLTOS_CRC_ITU_T_H

#include <voltos/types.h>

extern u16 const crc_itu_t_table[256];

extern u16 crc_itu_t(u16 crc, const u8 *buffer, size_t length);

static inline u16 crc_itu_t_byte(u16 crc, const u8 data)
{
	return (crc << 8) ^ crc_itu_t_table[((crc >> 8) ^ data) & 0xFF];
}

#endif /* _VOLTOS_CRC_ITU_T_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc8.h
 *
 */

#ifndef _VOLTOS_CRC8_H
#define _VOLTOS_CRC8_H

#include <voltos/types.h>

#define CRC8_INIT_VALUE				0xFF

#define CRC8_GOOD_VALUE(_table)			(_table[CRC8_INIT_VALUE])

#define CRC8_TABLE_SIZE				(256)

#ifndef DECLARE_CRC8_TABLE
#define DECLARE_CRC8_TABLE(_table) 		\
	static u8 _table[CRC8_TABLE_SIZE]
#endif /* DECLARE_CRC8_TABLE */

void crc8_populate_lsb(u8 table[CRC8_TABLE_SIZE], u8 polynomial);

void crc8_populate_msb(u8 table[CRC8_TABLE_SIZE], u8 polynomial);

u8 crc8(const u8 table[CRC8_TABLE_SIZE], const u8 *pdata, size_t nbytes, u8 crc);

#endif /* _VOLTOS_CRC8_H */

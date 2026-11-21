// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc16.h
 *
 */

#ifndef _VOLTOS_CRC16_H
#define _VOLTOS_CRC16_H

#include <voltos/types.h>

u16 crc16(u16 crc, const u8 *p, size_t length);

#endif /* _VOLTOS_CRC16_H */

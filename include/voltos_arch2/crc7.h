// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc7.h
 *
 */

#ifndef _VOLTOS_CRC7_H
#define _VOLTOS_CRC7_H

#include <voltos/types.h>

extern u8 crc7_be(u8 crc, const u8 *buffer, size_t length);

#endif /* _VOLTOS_CRC7_H */

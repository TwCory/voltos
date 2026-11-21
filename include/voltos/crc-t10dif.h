// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc-t10dif.h
 *
 */

#ifndef _VOLTOS_CRC_T10DIF_H
#define _VOLTOS_CRC_T10DIF_H

#include <voltos/types.h>

u16 crc_t10dif_update(u16 crc, const u8 *p, size_t length);

static inline u16 crc_t10dif(const u8 *p, size_t length)
{
	return crc_t10dif_update(0, p, length);
}

#endif /* _VOLTOS_CRC_T10DIF_H */

// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/crc64.h
 *
 */

#ifndef _VOLTOS_CRC64_H
#define _VOLTOS_CRC64_H

#include <voltos/types.h>

u64 crc64_be(u64 crc, const void *p, size_t length);

u64 crc64_nvme(u64 crc, const void *p, size_t length);

#endif /* _VOLTOS_CRC64_H */

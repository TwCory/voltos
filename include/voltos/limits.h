// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/limits.h
 *
 */

#ifndef _VOLTOS_LIMITS_H
#define _VOLTOS_LIMITS_H

#include <voltos/types.h>
#include <nbapi/voltos/limits.h>

#define USHORT_MAX			((unsigned short)~0U)
#define SHORT_MAX			((short)(USHRT_MAX >> 1))
#define SHORT_MIN			((short)(-SHRT_MAX - 1))
#define INT_MAX				((int)(~0U >> 1))
#define INT_MIN				(-INT_MAX - 1)
#define UINT_MAX			(~0U)
#define LONG_MAX			((long)(~0UL >> 1))
#define LONG_MIN			(-LONG_MAX - 1)
#define ULONG_MAX			(~0UL)
#define LLONG_MAX			((long long)(~0ULL >> 1))
#define LLONG_MIN			(-LLONG_MAX - 1)
#define ULLONG_MAX			(~0ULL)
#define UINTPTR_T_MAX			ULONG_MAX

#define SIZE_T_MAX			(~(size_t)0)
#define SSIZE_T_MAX			((ssize_t)(SIZE_T_MAX >> 1))

#define PHY_ADDR_T_MAX			(~(phy_addr_t)0)
#define DMA_ADDR_T_MAX			(~(dma_addr_t)0)
#define RESOURCE_SIZE_T_MAX		((resource_size_t)~0)

#define U8_MAX				((u8)~0U)
#define U8_MIN				((u8)0)
#define S8_MAX				((s8)(U8_MAX >> 1))
#define S8_MIN				((s8)(-S8_MAX - 1))

#define U16_MAX				((u16)~0U)
#define U16_MIN				((u16)0)
#define S16_MAX				((s16)(U16_MAX >> 1))
#define S16_MIN				((s16)(-S16_MAX - 1))

#define U32_MAX				((u32)~0U)
#define U32_MIN				((u32)0)
#define S32_MAX				((s32)(U32_MAX >> 1))
#define S32_MIN				((s32)(-S32_MAX - 1))

#define U64_MAX				((u64)~0ULL)
#define U64_MIN				((u64)0)
#define S64_MAX				((s64)(U64_MAX >> 1))
#define S64_MIN				((s64)(-S64_MAX - 1))

#endif /* _VOLTOS_LIMITS_H */

// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_MEMORY_H_
#define _VOLTOS_MEMORY_H_

#include <platform/malloc.h>
#include <platform/memory.h>
#include <platform/mman.h>

#define MEMORY_PAGE_SIZE_T_4K       (1ULL << 12)
#define MEMORY_PAGE_SIZE_T_64K      (1ULL << 16)
#define MEMORY_PAGE_SIZE_T_256K     (1ULL << 18)
#define MEMORY_PAGE_SIZE_T_2M       (1ULL << 21)
#define MEMORY_PAGE_SIZE_T_16M      (1ULL << 24)
#define MEMORY_PAGE_SIZE_T_256M     (1ULL << 28)
#define MEMORY_PAGE_SIZE_T_512M     (1ULL << 29)
#define MEMORY_PAGE_SIZE_T_1G       (1ULL << 30)
#define MEMORY_PAGE_SIZE_T_4G       (1ULL << 32)
#define MEMORY_PAGE_SIZE_T_16G      (1ULL << 34)

#endif /* _VOLTOS_MEMORY_H_ */
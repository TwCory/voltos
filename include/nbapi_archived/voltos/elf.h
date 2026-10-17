// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/elf.h
 *
 *
 */

#ifndef _NBAPI_VOLTOS_ELF_H
#define _NBAPI_VOLTOS_ELF_H

#include <asm/elf.h>
#include <voltos/elf-em.h>
#include <voltos/types.h>

/*
 *	ELF 32-Bit Base Data Types
 */
typedef __u32	Elf32_Addr;
typedef __u16	Elf32_Half;
typedef __u32	Elf32_Off;
typedef __s32	Elf32_Sword;
typedef __u32	Elf32_Word;
typedef __u16	Elf32_Versym;

/*
 *	ELF 64-Bit Base Data Types
 */
typedef __u64	Elf64_Addr;
typedef __u16	Elf64_Half;
typedef __s16	Elf64_SHalf;
typedef __u64	Elf64_Off;
typedef __s32	Elf64_Sword;
typedef __u32	Elf64_Word;
typedef __u64	Elf64_Xword;
typedef __s64	Elf64_Sxword;
typedef __u16	Elf64_Versym;

#endif /* _NBAPI_VOLTOS_ELF_H */

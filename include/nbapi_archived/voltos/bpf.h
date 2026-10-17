// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bpf.h
 *
 *	Berkeley Packet Filter (BPF) Definitions
 */

#ifndef _NBAPI_VOLTOS_BPF_H
#define _NBAPI_VOLTOS_BPF_H

#define BPF_JMP32				0x06
#define BPF_ALU64				0x07

#define BPF_DW					0x18
#define BPF_MEMSX				0x80
#define BPF_ATOMIC				0xC0
#define BPF_XADD				0xC0

#define BPF_MOV					0xB0
#define BPF_ARSH				0xC0

#define BPF_END					0xD0
#define BPF_TO_LE				0x00
#define BPF_TO_BE				0x08
#define BPF_FROM_LE				BPF_TO_LE
#define BPF_FROM_BE				BPF_TO_BE

#define BPF_JNE					0x50
#define BPF_JLT					0xA0
#define BPF_JLE					0xB0
#define BPF_JSGT				0x60
#define BPF_JSGE				0x70
#define BPF_JSLT				0xC0
#define BPF_JSLE				0xD0
#define BPF_JCOND				0xE0
#define BPF_CALL				0x80
#define BPF_EXIT				0x90

#define BPF_FETCH				0x01
#define BPF_XCHG				(0xE0 | BPF_FETCH)
#define BPF_CMPXCHG				(0xF0 | BPF_FETCH)

#define BPF_LOAD_ACQ				0x100
#define BPF_STORE_REL				0x110

#endif /* _NBAPI_VOLTOS_BPF_H */

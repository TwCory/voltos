#ifndef VOLTOS_BITSET_H
#define VOLTOS_BITSET_H

#include <voltos/types.h>

typedef struct {
	union {
		__u8 		set_u8;
		__u16 		set_u16;
		__u32 		set_u32;
		__u64 		set_u64;
		__u128 		set_u128;
	} set_u;
} bitset_t;

#endif /* VOLTOS_BITSET_H */

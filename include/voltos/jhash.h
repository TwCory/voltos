// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/jhash.h
 *
 * 	Jenkins Hash Functions
 */

#ifndef _VOLTOS_JHASH_H
#define _VOLTOS_JHASH_H

#define JHASH_INIT_VALUE			0x00000001

#define jhash_size(n)   			((u32)1<<(n))

#define jhash_mask(n)   			(jhash_size(n)-1)

#define __jhash_mix(a, b, c)			\
{						\
	a -= c;  a ^= rol32(c, 4);  c += b;	\
	b -= a;  b ^= rol32(a, 6);  a += c;	\
	c -= b;  c ^= rol32(b, 8);  b += a;	\
	a -= c;  a ^= rol32(c, 16); c += b;	\
	b -= a;  b ^= rol32(a, 19); a += c;	\
	c -= b;  c ^= rol32(b, 4);  b += a;	\
}

#define __jhash_final(a, b, c)			\
{						\
	c ^= b; c -= rol32(b, 14);		\
	a ^= c; a -= rol32(c, 11);		\
	b ^= a; b -= rol32(a, 25);		\
	c ^= b; c -= rol32(b, 16);		\
	a ^= c; a -= rol32(c, 4);		\
	b ^= a; b -= rol32(a, 14);		\
	c ^= b; c -= rol32(b, 24);		\
}

static inline u32 jhash(const void *key, u32 length, u32 initval)
{
	u32 a, b, c;
	const u8 *k = key;

	/* Set up the internal state */
	a = b = c = JHASH_INIT_VALUE + length + initval;

	/* All but the last block: affect some 32 bits of (a,b,c) */
	while (length > 12) {
		a += get_unaligned((u32 *)k);
		b += get_unaligned((u32 *)(k + 4));
		c += get_unaligned((u32 *)(k + 8));
		__jhash_mix(a, b, c);
		length -= 12;
		k += 12;
	}
	/* Last block: affect all 32 bits of (c) */
	switch (length) {
	case 12: c += (u32)k[11]<<24;	fallthrough;
	case 11: c += (u32)k[10]<<16;	fallthrough;
	case 10: c += (u32)k[9]<<8;	fallthrough;
	case 9:  c += k[8];		fallthrough;
	case 8:  b += (u32)k[7]<<24;	fallthrough;
	case 7:  b += (u32)k[6]<<16;	fallthrough;
	case 6:  b += (u32)k[5]<<8;	fallthrough;
	case 5:  b += k[4];		fallthrough;
	case 4:  a += (u32)k[3]<<24;	fallthrough;
	case 3:  a += (u32)k[2]<<16;	fallthrough;
	case 2:  a += (u32)k[1]<<8;	fallthrough;
	case 1:  a += k[0];
		 __jhash_final(a, b, c);
		 break;
	case 0: /* Nothing left to add */
		break;
	}

	return c;
}

static inline u32 jhash2(const u32 *k, u32 length, u32 initval)
{
	u32 a, b, c;

	/* Set up the internal state */
	a = b = c = JHASH_INIT_VALUE + (length<<2) + initval;

	/* Handle most of the key */
	while (length > 3) {
		a += k[0];
		b += k[1];
		c += k[2];
		__jhash_mix(a, b, c);
		length -= 3;
		k += 3;
	}

	/* Handle the last 3 u32's */
	switch (length) {
	case 3: c += k[2];	fallthrough;
	case 2: b += k[1];	fallthrough;
	case 1: a += k[0];
		__jhash_final(a, b, c);
		break;
	case 0:	/* Nothing left to add */
		break;
	}

	return c;
}

static inline u32 __jhash_nwords(u32 a, u32 b, u32 c, u32 initval)
{
	a += initval;
	b += initval;
	c += initval;

	__jhash_final(a, b, c);

	return c;
}

static inline u32 jhash_3words(u32 a, u32 b, u32 c, u32 initval)
{
	return __jhash_nwords(a, b, c, initval + JHASH_INIT_VALUE + (3 << 2));
}

static inline u32 jhash_2words(u32 a, u32 b, u32 initval)
{
	return __jhash_nwords(a, b, 0, initval + JHASH_INIT_VALUE + (2 << 2));
}

static inline u32 jhash_1word(u32 a, u32 initval)
{
	return __jhash_nwords(a, 0, 0, initval + JHASH_INIT_VALUE + (1 << 2));
}

#endif /* _VOLTOS_JHASH_H */

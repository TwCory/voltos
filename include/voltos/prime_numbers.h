// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/prime_numbers.h
 *
 */

#ifndef _VOLTOS_PRIME_NUMBERS_H
#define _VOLTOS_PRIME_NUMBERS_H

#include <voltos/types.h>

bool is_prime_number(unsigned long x);
unsigned long next_prime_number(unsigned long x);

#define for_each_prime_number(prime, max)

#define for_each_prime_number_from(prime, from, max)

#endif /* _VOLTOS_PRIME_NUMBERS_H */

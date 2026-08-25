// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bit_spinlock.h
 *
 * 	Bit-Based Spin Locks
 */

#ifndef _VOLTOS_BIT_SPINLOCK_H
#define _VOLTOS_BIT_SPINLOCK_H

struct bit_spinlock {

};

#ifndef __bit_spinlock
#define __bit_spinlock(bit, addr)	(struct bit_spinlock *)(bit + (addr))
#endif /* __bit_spinlock */

#endif /* _VOLTOS_BIT_SPINLOCK_H */

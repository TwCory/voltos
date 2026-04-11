// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ATOMIC_H_
#define _VOLTOS_ATOMIC_H_

#define __voltos_atomic_fetch_add(a, b)                         __sync_fetch_and_add(a, b)
#define __voltos_atomic_fetch_sub(a, b)                         __sync_fetch_and_sub(a, b)
#define __voltos_atomic_fetch_and(a, b)                         __sync_fetch_and_and(a, b)
#define __voltos_atomic_fetch_xor(a, b)                         __sync_fetch_and_xor(a, b)
#define __voltos_atomic_fetch_or(a, b)                          __sync_fetch_and_or(a, b)
#define __voltos_atomic_fetch_nand(a, b)                        __sync_fetch_nand(a, b)

#define __voltos_atomic_add_fetch(a, b)                         __sync_add_and_fetch(a, b)
#define __voltos_atomic_sub_fetch(a, b)                         __sync_sub_and_fetch(a, b)
#define __voltos_atomic_and_fetch(a, b)                         __sync_and_and_fetch(a, b)
#define __voltos_atomic_xor_fetch(a, b)                         __sync_xor_and_fetch(a, b)
#define __voltos_atomic_or_fetch(a, b)                          __sync_or_and_fetch(a, b)
#define __voltos_atomic_nand_fetch(a, b)                        __sync_nand_and_fetch(a, b)

#define __voltos_atomic_cmp_and_swap(a, o, n)                   __sync_val_compare_and_swap(a, o, n)
#define __voltos_atomic_bool_cmp_and_swap(a, o, n)              __sync_bool_compare_and_swap(a, o, n)

#define __voltos_atomic_cmp_swap_acq_relax_n(a, e, n, w)        \
    __atomic_compare_exchange_n ((a), (e), (n), (w),            \
    __ATOMIC_ACQUIRE, __ATOMIC_RELAXED)

#define __voltos_atomic_cmp_swap_acq_relax(a, e, n, w)          \
  __atomic_compare_exchange ((a), (e), (n), (w),                \
  __ATOMIC_ACQUIRE, __ATOMIC_RELAXED)

#define __voltos_atomic_test_and_set(a)                         __atomic_exchange_n(a, 1, __ATOMIC_ACQUIRE)
#define __voltos_atomic_release(a)                              __atomic_store_n(a, 0, __ATOMIC_RELEASE)

#define __voltos_atomic_fence_rel()                             __atomic_thread_fence(__ATOMIC_RELEASE);

#define __voltos_atomic_load_relax_n(a)                         __atomic_load_n((a), __ATOMIC_RELAXED)
#define __voltos_atomic_load_acq_n(a)                           __atomic_load_n((a), __ATOMIC_ACQUIRE)
#define __voltos_atomic_store_rel_n(a, b)                       __atomic_store_n ((a), (b), __ATOMIC_RELEASE)

#define __voltos_atomic_store_seq_cst(a, b)                     \
  __atomic_store_n ((a), (b), __ATOMIC_SEQ_CST)

#define __voltos_atomic_store_relax_n(a, b)                     \
  __atomic_store_n ((a), (b), __ATOMIC_RELAXED)

#define __voltos_atomic_load_seq_cst(a)                         __atomic_load_n ((a), __ATOMIC_SEQ_CST)

#define __voltos_atomic_swap_acq_n(a, b)                        __atomic_exchange_n ((a), (b), __ATOMIC_ACQUIRE)
#define __voltos_atomic_swap_rel_n(a, b)                        __atomic_exchange_n ((a), (b), __ATOMIC_RELEASE)

#define __voltos_atomic_fetch_add_rel(a, b)                     __atomic_fetch_add((a), (b), __ATOMIC_RELEASE)
#define __voltos_atomic_fetch_sub_rel(a, b)                     __atomic_fetch_sub((a), (b), __ATOMIC_RELEASE)

#define __voltos_atomic_fetch_add_relax(a, b)                   __atomic_fetch_add((a), (b), __ATOMIC_RELAXED)
#define __voltos_atomic_fetch_sub_relax(a, b)                   __atomic_fetch_sub((a), (b), __ATOMIC_RELAXED)

#endif /* _VOLTOS_ATOMIC_H_ */
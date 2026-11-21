// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/stress_test.h
 *
 * 	Stress Testing and Benchmarking
 */

#ifndef _VOLTOS_STRESS_TEST_H
#define _VOLTOS_STRESS_TEST_H

#define stress_test_param(type, name, init, msg)

#define STRESS_TEST_PREFIX				"-stress-test:"

#ifndef STRESS_TEST_OUTPUT_STRING
#define STRESS_TEST_OUTPUT_STRING(s)
#endif /* STRESS_TEST_OUTPUT_STRING */

#ifndef STRESS_TEST_OUTPUT_STRING_VERBOSE
#define STRESS_TEST_OUTPUT_STRING_VERBOSE(s)
#endif /* STRESS_TEST_OUTPUT_STRING_VERBOSE */

#ifndef STRESS_TEST_OUTPUT_ERROR_STRING
#define STRESS_TEST_OUTPUT_ERROR_STRING(s)
#endif /* STRESS_TEST_OUTPUT_ERROR_STRING */

#define stress_test_init_error(first_error)

struct stress_test_rng_state {
	unsigned long 					state;
	signed long 					count;
};

#ifndef DEFINE_STRESS_TEST_RANDOM
#define DEFINE_STRESS_TEST_RANDOM(name)
#endif /* DEFINE_STRESS_TEST_RANDOM */

#ifndef DEFINE_STRESS_TEST_RANDOM_PER_CPU
#define DEFINE_STRESS_TEST_RANDOM_PER_CPU(name)
#endif /* DEFINE_STRESS_TEST_RANDOM_PER_CPU */

#define stress_test_start_vs_thread(n, arg, tp)

#define stress_test_start_vs_thread_cb(n, arg, tp, cbf)

#define stress_test_stop_vs_thread(n, tp)

#define stress_test_preempt_schedule()

#endif /* _VOLTOS_STRESS_TEST_H */

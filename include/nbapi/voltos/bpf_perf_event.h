// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bpf_perf_event.h
 *
 */

#ifndef _NBAPI_VOLTOS_BPF_PERF_EVENT_H
#define _NBAPI_VOLTOS_BPF_PERF_EVENT_H

#include <asm/bpf_perf_event.h>
#include <voltos/types.h>

struct bpf_perf_event_ctx {
	uint64_t sample_period;
	uint64_t address;
};

#endif /* _NBAPI_VOLTOS_BPF_PERF_EVENT_H */

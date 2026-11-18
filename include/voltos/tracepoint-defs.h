// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/tracepoint-defs.h
 *
 */

#ifndef _VOLTOS_TRACEPOINT_DEFS_H
#define _VOLTOS_TRACEPOINT_DEFS_H

struct static_call_key;

struct trace_print_flags {
	unsigned long 			mask;
	const char 			*name;
};

struct trace_print_flags_u64 {
	unsigned long long 		mask;
	const char 			*name;
};

struct tracepoint_ops {
	void 				*function;
	void 				*data;
	int 				priority;
};

struct tracepoint_ext {
	int 				(*register_fn)(void);
	int 				(*unregister_fn)(void);
	unsigned int 			faultable:1;
};

struct tracepoint {
	const char 			*name;
	struct static_key_false 	key;
	struct static_call_key 		*static_call_key;
	void 				*static_call_tramp;
	void 				*iterator;
	void 				*probe_stub;
	struct tracepoint_ops __rcu 	*ops;
	struct tracepoint_ext 		*ext;
};

typedef const int 			tracepoint_ptr_t;

struct bpf_raw_event_map {
	struct tracepoint		*tracepoint;
	void				*bpf_function;
	u32				total_args;
	u32				writable_size;
} __aligned(32);

#ifndef DECLARE_TRACEPOINT
#define DECLARE_TRACEPOINT(tp) \
	extern struct tracepoint __tracepoint##_tp
#endif /* DECLARE_TRACEPOINT */

#ifndef tracepoint_enabled
#define tracepoint_enabled(tp)
#endif /* tracepoint_enabled */

#endif /* _VOLTOS_TRACEPOINT_DEFS_H */

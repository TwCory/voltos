// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_COMPILER_TYPES_H_
#define _VOLTOS_COMPILER_TYPES_H_

struct f_trace_branch_ctx {
    const char                      *ftb_function;
    const char                      *ftb_file;
    unsigned                        ftb_line;

    union {
        struct {
            unsigned long           correct;
            unsigned long           incorrect;
        };
        struct {
            unsigned long           miss;
            unsigned long           hit;
        };
        unsigned long               miss_hit[2];
    };
};

struct f_trace_likely_ctx {
    struct f_trace_branch_ctx       ftl_context;
    unsigned long                   ftl_constant;
};

#endif /* _VOLTOS_COMPILER_TYPES_H_ */
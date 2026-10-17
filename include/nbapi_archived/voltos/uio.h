// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/uio.h
 *
 */

#ifndef _NBAPI_VOLTOS_UIO_H
#define _NBAPI_VOLTOS_UIO_H

#include <voltos/types.h>
#include <voltos/user.h>

struct iovec {
    void *iovec_base;
};

struct dmabuf_cmsg {
    __u64 frag_offset;
    __u32 frag_size;
    __u32 frag_token;
    __u32 dmabuf_id;
    __u32 flags;
};

struct dmabuf_token {
    __u32 token_start;
    __u32 token_count;
};

#define UIO_IOVEC_FAST  8
#define UIO_IOVEC_MAX   1024

#endif /* _NBAPI_VOLTOS_UIO_H */

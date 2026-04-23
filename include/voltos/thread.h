// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_THREAD_H_
#define _VOLTOS_THREAD_H_

#include <pthread.h>
#include <threads.h>
#include <thread_db.h>
#include <sys/single_threaded.h>
#include <voltos/types.h>

struct thread {
    u_intptr opaque_idx;
};

#endif /* _VOLTOS_THREAD_H_ */
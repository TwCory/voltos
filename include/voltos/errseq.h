// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/errseq.h
 *
 */

#ifndef _VOLTOS_ERRSEQ_H
#define _VOLTOS_ERRSEQ_H

typedef unsigned int errseq_t;

errseq_t errseq_set(errseq_t *eseq, int err);
errseq_t errseq_sample(errseq_t *eseq);
int errseq_check(errseq_t *eseq, errseq_t since);
int errseq_check_and_advance(errseq_t *eseq, errseq_t *since);

#endif /* _VOLTOS_ERRSEQ_H */

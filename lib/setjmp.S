/* SPDX-License-Identifier: BSD-3-Clause */

#if defined(__x86_64__)
    .global cdecl(__voltos_setjmp)
    .align 4
#ifndef __APPLE__
    .type cdecl(__voltos_setjmp), @function
#endif

cdecl(__voltos_setjmp):
    movq %rbx, 8*0(%rdi)
    movq %rbp, 8*1(%rdi)
    movq %r12, 8*2(%rdi)
    movq %r13, 8*3(%rdi)
    movq %r14, 8*4(%rdi)
    movq %r15, 8*5(%rdi)

    leaq 8(%rsp), %rdx
    movq %rdx, 8*6(%rdi)
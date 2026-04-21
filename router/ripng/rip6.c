// SPDX-License-Identifier: BSD-3-Clause

#include <voltos/in6.h>
#include <voltos/vrf.h>

#include <router/rip6.h>


int ripng_create_sock(struct vrf *vrf)
{
    int rc;

    struct sockaddr_in6 addr;
}
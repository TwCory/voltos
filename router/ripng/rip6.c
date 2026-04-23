// SPDX-License-Identifier: BSD-3-Clause

#include <voltos/in6.h>
#include <voltos/vrf.h>

#include <router/rip6.h>

void ripng_init(void)
{
    ripng_interface_init();
}
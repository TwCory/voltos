// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/vrrp/vrrp_main.c
 *
 */

#include <router/vrrp.h>

int main(int argc, char **argv)
{
	vrrp_init();
	vrrp_interface_init();
}

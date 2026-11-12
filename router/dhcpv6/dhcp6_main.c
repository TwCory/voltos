// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/dhcpv6/dhcp6_main.c
 *
 */

#include <router/dhcpv6.h>

int main(int argc, char **argv)
{
	dhcp6_init();
	dhcp6_interface_init();
}

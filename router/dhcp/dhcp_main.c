// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/dhcp/dhcp_main.c
 *
 */

#include <router/dhcp.h>

int main(int argc, char **argv)
{
	dhcp_init();
	dhcp_interface_init();
}

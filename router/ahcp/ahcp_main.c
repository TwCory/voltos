// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ahcp/ahcp_main.c
 *
 */

#include <router/ahcp.h>

int main(int argc, char **argv)
{
	ahcp_init();
	ahcp_interface_init();
}

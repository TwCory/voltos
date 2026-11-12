// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/hsrp/hsrp_main.c
 *
 */

#include <router/hsrp.h>

int main(int argc, char **argv)
{
	hsrp_init();
	hsrp_interface_init();
}

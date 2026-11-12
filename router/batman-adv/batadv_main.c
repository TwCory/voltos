// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/batman-adv/batadv_main.c
 *
 */

#include <router/batman-adv.h>

int main(int argc, char **argv)
{
	batadv_init();

	batadv_router_init();
	batadv_interface_init();
}

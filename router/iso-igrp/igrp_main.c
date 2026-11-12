// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/iso-igrp/igrp_main.c
 *
 */

#include <router/iso-igrp.h>

int main(int argc, char **argv)
{
	igrp_init();

	igrp_router_init();
	igrp_interface_init();
}

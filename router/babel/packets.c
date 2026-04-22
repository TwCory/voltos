// SPDX-License-Identifier: BSD-3-Clause

#include <voltos/babel.h>

void babel_hello_send_noupdate(struct interface *ifp, unsigned int interval)
{
    struct babel_interface *babel_ifp = 
}

void babel_hello_send(struct interface *ifp)
{
    babel_hello_send_noupdate();
}
// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/gnunet.h
 *
 */

#ifndef _NBAPI_VOLTOS_GNUNET_H
#define _NBAPI_VOLTOS_GNUNET_H

#include <voltos/types.h>

#define GNUNET_PORT		2086

enum gnunet_transport_type {
    GNUNET_TRANSPORT_TYPE_T_UNSPEC  = 0,
    GNUNET_TRANSPORT_TYPE_T_BLUETOOTH = 1,
    GNUNET_TRANSPORT_TYPE_T_HTTP = 2,
    GNUNET_TRANSPORT_TYPE_T_HTTPS = 3,
    GNUNET_TRANSPORT_TYPE_T_SMTP = 4,
    GNUNET_TRANSPORT_TYPE_T_TCP = 5,
    GNUNET_TRANSPORT_TYPE_T_UDP = 6,
    GNUNET_TRANSPORT_TYPE_T_WLAN = 7,
    __GNUNET_TRANSPORT_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_GNUNET_H */

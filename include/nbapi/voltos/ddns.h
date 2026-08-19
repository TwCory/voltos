// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ddns.h
 *
 *	Dynamic DNS (DDNS) Update Client
 */

#ifndef _NBAPI_VOLTOS_DDNS_H
#define _NBAPI_VOLTOS_DDNS_H

enum ddns_update_method {
    DDNS_UPDATE_METHOD_T_UNSPEC = 0,
    DDNS_UPDATE_METHOD_T_DUCKDNS = 1,
    DDNS_UPDATE_METHOD_T_HTTP = 2,
    DDNS_UPDATE_METHOD_T_NOIP = 3,
    __DDNS_UPDATE_METHOD_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DDNS_H */

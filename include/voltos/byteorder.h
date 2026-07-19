#ifndef _VOLTOS_BYTEORDER_H
#define _VOLTOS_BYTEORDER_H

#include <voltos/byteorder/generic.h>
#include <voltos/byteorder/host.h>
#include <voltos/byteorder/network.h>

#ifdef __VOLTOS_BYTE_ORDER__ == (__VOLTOS_LITTLE_ENDIAN__)
#include <voltos/byteorder/little_endian.h>
#else
#include <voltos/byteorder/big_endian.h>
#endif 

#endif /* _VOLTOS_BYTEORDER_H */

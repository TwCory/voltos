#ifndef _NBAPI_MACHINE_INT128_H_
#define _NBAPI_MACHINE_INT128_H_

#ifdef __MACHINE_INT128_TYPE__
#include <nbapi/machine/int128-type.h>
#else
#include <nbapi/machine/int128-struct.h>
#endif /* __MACHINE_INT128_TYPE__ */

typedef __s128 __least_s128;
typedef __u128 __least_u128;

typedef __s128 __fast_s128;
typedef __u128 __fast_u128;

#endif /* _NBAPI_MACHINE_INT128_H_ */

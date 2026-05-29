#ifndef _NBAPI_MACHINE_INT64_H_
#define _NBAPI_MACHINE_INT64_H_

#ifdef __MACHINE_INT64_LONG__
#include <nbapi/machine/int64-long.h>
#else
#include <nbapi/machine/int64-ll.h>
#endif /* __MACHINE_INT64_LONG__ */

typedef __s64 __least_s64;
typedef __u64 __least_u64;

typedef __s64 __fast_s64;
typedef __u64 __fast_u64;

#endif /* _NBAPI_MACHINE_INT64_H_ */

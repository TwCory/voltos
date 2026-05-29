#ifndef _MACHINE_COMPAT_H_
#define _MACHINE_COMPAT_H_

#ifndef COMPAT_USER_HZ
#define COMPAT_USER_HZ          100
#endif /* COMPAT_USER_HZ */

#ifndef COMPAT_RLIM_INFINITY
#define COMPAT_RLIM_INFINITY    0xFFFFFFFF
#endif /* COMPAT_RLIM_INFINITY */

#ifndef COMPAT_OFF_T_MAX
#define COMPAT_OFF_T_MAX        0x7FFFFFFF
#endif /* COMPAT_OFF_T_MAX */

typedef unsigned int compat_size_t;
typedef signed int compat_ssize_t;
typedef signed int compat_clock_t;

#endif /* _MACHINE_COMPAT_H_ */

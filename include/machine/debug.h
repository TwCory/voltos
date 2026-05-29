#ifndef _MACHINE_DEBUG_H_
#define _MACHINE_DEBUG_H_

#ifdef __DEBUG_GENERIC__
#define DEBUG_F_WARNING     (1 << 0)
#define DEBUG_F_ONCE    (1 << 1)
#define DEBUG_F_DONE    (1 << 2)
#define DEBUG_F_NO_CUT_HERE (1 << 3)
#define DEBUG_F_ARGS (1 << 4)
#define DEBUG_F_TAINT(taint) ((taint) << 8)
#define DEBUG_GET_TAINT(debug) ((debug) >> 8)
#endif 

#endif /* _MACHINE_DEBUG_H_ */

#ifndef _PLATFORM_BOOL_TYPE_H_
#define _PLATFORM_BOOL_TYPE_H_

#ifndef __bool__
#define __bool__        _Bool
#endif /* __bool__ */

enum {
    false = 0,
    true = 1
};

typedef __bool__ bool;

#endif /* _PLATFORM_BOOL_TYPE_H_ */
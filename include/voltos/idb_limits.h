#ifndef _VOLTOS_IDB_LIMITS_H_
#define _VOLTOS_IDB_LIMITS_H_

#define SWIDB_MAX_DEFAULT                   1000
#define MICRO_SWIDB_MAX_DEFAULT             2000

#ifndef __VOLTOS_SWIDB_MAX__
#define __VOLTOS_SWIDB_MAX__                SWIDB_MAX_DEFAULT
#endif /* __VOLTOS_SWIDB_MAX__ */

#ifndef __VOLTOS_MICRO_SWIDB_MAX__
#define __VOLTOS_MICRO_SWIDB_MAX__          MICRO_SWIDB_MAX_DEFAULT
#endif /* __VOLTOS_MICRO_SWIDB_MAX__ */

#endif /* _VOLTOS_IDB_LIMITS_H_ */
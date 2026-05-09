// SPDX-License-Identifier: BSD-3-Clause

/*
 *	Battery Backup Units (BBUs)
 *
 * 
 */

#ifndef _NBAPI_VOLTOS_BBU_H_
#define _NBAPI_VOLTOS_BBU_H_

#define BBU_OEM_NAME_SIZE			64
#define BBU_SERIAL_NUMBER_SIZE			64
#define BBU_PART_NUMBER_SIZE			64
#define BBU_PART_REVISION_SIZE			64
#define BBU_HARDWARE_VERSION_SIZE		64

typedef unsigned int 				__voltos_bbu_id_t;

enum {
    BBU_CATEGORY_T_UNSPEC           		= 0,
#define BBU_CATEGORY_UNSPEC			BBU_CATEGORY_T_UNSPEC
    BBU_CATEGORY_T_LITHIUM_ION      		= 1,
#define BBU_CATEGORY_LITHIUM_ION		BBU_CATEGORY_T_LITHIUM_ION
    BBU_CATEGORY_T_LEAD_ACID        		= 2,
#define BBU_CATEGORY_LEAD_ACID			BBU_CATEGORY_T_LEAD_ACID
    __BBU_CATEGORY_T_MAX__
};

#define BBU_CATEGORY_MAX			(__BBU_CATEGORY_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_BBU_H_ */

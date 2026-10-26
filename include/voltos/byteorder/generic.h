// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/byteorder/generic.h
 *
 */

#ifndef _VOLTOS_BYTEORDER_GENERIC_H
#define _VOLTOS_BYTEORDER_GENERIC_H

#define __host_to_be16(x)
#define __host_to_be32(x)
#define __host_to_be64(x)
#define __host_to_be128(x)

#define __host_to_le16(x)
#define __host_to_le32(x)
#define __host_to_le64(x)
#define __host_to_le128(x)

#define __host_to_net16(x)
#define __host_to_net32(x)
#define __host_to_net64(x)
#define __host_to_net128(x)

#define __be16_to_host(x)
#define __be32_to_host(x)
#define __be64_to_host(x)
#define __be128_to_host(x)

#define __le16_to_host(x)
#define __le32_to_host(x)
#define __le64_to_host(x)
#define __le128_to_host(x)

#define __net16_to_host(x)
#define __net32_to_host(x)
#define __net64_to_host(x)
#define __net128_to_host(x)

#define host_to_be16(x)			__host_to_be16(x)
#define host_to_be32(x)			__host_to_be32(x)
#define host_to_be64(x)			__host_to_be64(x)
#define host_to_be128(x)		__host_to_be128(x)

#define host_to_le16(x)			__host_to_le16(x)
#define host_to_le32(x)			__host_to_le32(x)
#define host_to_le64(x)			__host_to_le64(x)
#define host_to_le128(x)		__host_to_le128(x)

#define host_to_net16(x)		__host_to_net16(x)
#define host_to_net32(x)		__host_to_net32(x)
#define host_to_net64(x)		__host_to_net64(x)
#define host_to_net128(x)		__host_to_net128(x)

#define be16_to_host(x)			__be16_to_host(x)
#define be32_to_host(x)			__be32_to_host(x)
#define be64_to_host(x)			__be64_to_host(x)
#define be128_to_host(x)		__be128_to_host(x)

#define le16_to_host(x)			__le16_to_host(x)
#define le32_to_host(x)			__le32_to_host(x)
#define le64_to_host(x)			__le64_to_host(x)
#define le128_to_host(x)		__le128_to_host(x)

#define net16_to_host(x)		__net16_to_host(x)
#define net32_to_host(x)		__net32_to_host(x)
#define net64_to_host(x)		__net64_to_host(x)
#define net128_to_host(x)		__net128_to_host(x)

#endif /* _VOLTOS_BYTEORDER_GENERIC_H */

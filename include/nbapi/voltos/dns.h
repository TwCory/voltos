#ifndef _NBAPI_VOLTOS_DNS_H
#define _NBAPI_VOLTOS_DNS_H

#include <voltos/types.h>

#define DNS_PORT				53
#define DNS_OVER_TLS_PORT			853
#define DNS_OVER_QUIC_PORT			853
#define DNS_OVER_DTLS_PORT			853

enum dns_source_type {
	DNS_SOURCE_TYPE_T_NONE			= 0,
	DNS_SOURCE_TYPE_T_STATIC		= 1,
	DNS_SOURCE_TYPE_T_DHCP			= 2,
	__DNS_SOURCE_TYPE_T_MAX__
};

struct dns_common_hdr {
	__net16					transaction_id;
	__net16						qr_bit:1,
							opcode:4,
							aa_bit:1,
							tc_bit:1,
							rd_bit:1,
							ra_bit:1,
							z_bit:1,
							ad_bit:1,
							cd_bit:1,
							rcode:4;
	__net32					question_count;
	__net32					answer_count;
	__net32					authority_rr_count;
	__net32					additional_rr_count;
};

#endif /* _NBAPI_VOLTOS_DNS_H */

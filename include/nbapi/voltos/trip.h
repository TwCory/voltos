// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/trip.h
 *
 * 	Telephony Routing over IP (TRIP)
 */

#ifndef _NBAPI_VOLTOS_TRIP_H
#define _NBAPI_VOLTOS_TRIP_H

enum {
	TRIP_CAPABILITY_T_UNSPEC				= 0,
#define TRIP_CAPABILITY_UNSPEC					TRIP_CAPABILITY_T_UNSPEC
	TRIP_CAPABILITY_T_ROUTE_TYPES_SUPPORTED			= 1,
#define TRIP_CAPABILITY_ROUTE_TYPES_SUPPORTED			TRIP_CAPABILITY_T_ROUTE_TYPES_SUPPORTED
	TRIP_CAPABILITY_T_SEND_RECEIVE				= 2,
#define TRIP_CAPABILITY_SEND_RECEIVE				TRIP_CAPABILITY_T_SEND_RECEIVE
	__TRIP_CAPABILITY_T_MAX__
};

#define TRIP_CAPABILITY_MAX					(__TRIP_CAPABILITY_T_MAX__ - 1)

enum {
	TRIP_ATTRIBUTE_T_UNSPEC					= 0,
#define TRIP_ATTRIBUTE_UNSPEC					TRIP_ATTRIBUTE_T_UNSPEC
	TRIP_ATTRIBUTE_T_WithdrawnRoutes			= 1,
#define TRIP_ATTRIBUTE_WithdrawnRoutes				TRIP_ATTRIBUTE_T_WithdrawnRoutes
	TRIP_ATTRIBUTE_T_ReachableRoutes			= 2,
#define TRIP_ATTRIBUTE_ReachableRoutes				TRIP_ATTRIBUTE_T_ReachableRoutes
	TRIP_ATTRIBUTE_T_NextHopServer				= 3,
#define TRIP_ATTRIBUTE_NextHopServer				TRIP_ATTRIBUTE_T_NextHopServer
	TRIP_ATTRIBUTE_T_AdvertisementPath			= 4,
#define TRIP_ATTRIBUTE_AdvertisementPath			TRIP_ATTRIBUTE_T_AdvertisementPath
	TRIP_ATTRIBUTE_T_RoutedPath				= 5,
#define TRIP_ATTRIBUTE_RoutedPath				TRIP_ATTRIBUTE_T_RoutedPath
	TRIP_ATTRIBUTE_T_AtomicAggregate			= 6,
#define TRIP_ATTRIBUTE_AtomicAggregate				TRIP_ATTRIBUTE_T_AtomicAggregate
	TRIP_ATTRIBUTE_T_LocalPreference			= 7,
#define TRIP_ATTRIBUTE_LocalPreference				TRIP_ATTRIBUTE_T_LocalPreference
	TRIP_ATTRIBUTE_T_MultiExitDisc				= 8,
#define TRIP_ATTRIBUTE_MultiExitDisc				TRIP_ATTRIBUTE_T_MultiExitDisc
	TRIP_ATTRIBUTE_T_Communities				= 9,
#define TRIP_ATTRIBUTE_Communities				TRIP_ATTRIBUTE_T_Communities
	TRIP_ATTRIBUTE_T_ITAD_Topology				= 10,
#define TRIP_ATTRIBUTE_ITAD_Topology				TRIP_ATTRIBUTE_T_ITAD_Topology
	TRIP_ATTRIBUTE_T_ConvertedRoute				= 11,
#define TRIP_ATTRIBUTE_ConvertedRoute				TRIP_ATTRIBUTE_T_ConvertedRoute
	TRIP_ATTRIBUTE_T_ResourcePriority			= 12,
#define TRIP_ATTRIBUTE_ResourcePriority				TRIP_ATTRIBUTE_T_ResourcePriority
	TRIP_ATTRIBUTE_T_TotalCircuitCapacity			= 13,
#define TRIP_ATTRIBUTE_TotalCircuitCapacity			TRIP_ATTRIBUTE_T_TotalCircuitCapacity
	TRIP_ATTRIBUTE_T_AvailableCircuits			= 14,
#define TRIP_ATTRIBUTE_AvailableCircuits			TRIP_ATTRIBUTE_T_AvailableCircuits
	TRIP_ATTRIBUTE_T_CallSuccess				= 15,
#define TRIP_ATTRIBUTE_CallSuccess				TRIP_ATTRIBUTE_T_CallSuccess
	TRIP_ATTRIBUTE_T_E164_Prefix				= 16,
#define TRIP_ATTRIBUTE_E164_Prefix				TRIP_ATTRIBUTE_T_E164_Prefix
	TRIP_ATTRIBUTE_T_Pentadecimal_Routing_Number_Prefix	= 17,
#define TRIP_ATTRIBUTE_Pentadecimal_Routing_Number_Prefix	TRIP_ATTRIBUTE_T_Pentadecimal_Routing_Number_Prefix
	TRIP_ATTRIBUTE_T_Decimal_Routing_Number_Prefix		= 18,
#define TRIP_ATTRIBUTE_Decimal_Routing_Number_Prefix		TRIP_ATTRIBUTE_T_Decimal_Routing_Number_Prefix
	TRIP_ATTRIBUTE_T_TrunkGroup				= 19,
#define TRIP_ATTRIBUTE_TrunkGroup				TRIP_ATTRIBUTE_T_TrunkGroup
	TRIP_ATTRIBUTE_T_Carrier				= 20,
#define TRIP_ATTRIBUTE_Carrier					TRIP_ATTRIBUTE_T_Carrier
	__TRIP_ATTRIBUTE_T_MAX__
};

#define TRIP_ATTRIBUTE_MAX					(__TRIP_ATTRIBUTE_T_MAX__ - 1)

enum {
	TRIP_FAMILY_T_UNSPEC					= 0,
#define TRIP_FAMILY_UNSPEC					TRIP_FAMILY_T_UNSPEC
	TRIP_FAMILY_T_Decimal_Routing_Numbers			= 1,
#define TRIP_FAMILY_Decimal_Routing_Numbers			TRIP_FAMILY_T_Decimal_Routing_Numbers
	TRIP_FAMILY_T_PentaDecimal_Routing_Numbers		= 2,
#define TRIP_FAMILY_PentaDecimal_Routing_Numbers		TRIP_FAMILY_T_PentaDecimal_Routing_Numbers
	TRIP_FAMILY_T_E164_Numbers				= 3,
#define TRIP_FAMILY_E164_Numbers				TRIP_FAMILY_T_E164_Numbers
	TRIP_FAMILY_T_TrunkGroup				= 4,
#define TRIP_FAMILY_TrunkGroup					TRIP_FAMILY_T_TrunkGroup
	TRIP_FAMILY_T_Carrier					= 5,
#define TRIP_FAMILY_Carrier					TRIP_FAMILY_T_Carrier
	__TRIP_FAMILY_T_MAX__
};

#define TRIP_FAMILY_MAX						(__TRIP_FAMILY_T_MAX__ - 1)

enum {
	TRIP_APPLICATION_T_UNSPEC				= 0,
#define TRIP_APPLICATION_UNSPEC					TRIP_APPLICATION_T_UNSPEC
	TRIP_APPLICATION_T_SIP					= 1,
#define TRIP_APPLICATION_SIP					TRIP_APPLICATION_T_SIP
	TRIP_APPLICATION_T_H323_H225_0_Q931			= 2,
#define TRIP_APPLICATION_H323_H225_0_Q931			TRIP_APPLICATION_T_H323_H225_0_Q931
	TRIP_APPLICATION_T_H323_H225_0_RAS			= 3,
#define TRIP_APPLICATION_H323_H225_0_RAS			TRIP_APPLICATION_T_H323_H225_0_RAS
	TRIP_APPLICATION_T_H323_H225_0_Annex_G			= 4,
#define TRIP_APPLICATION_H323_H225_0_Annex_G			TRIP_APPLICATION_T_H323_H225_0_Annex_G
	TRIP_APPLICATION_T_IAX2					= 5,
#define TRIP_APPLICATION_IAX2					TRIP_APPLICATION_T_IAX2
	__TRIP_APPLICATION_T_MAX__
};

#define TRIP_APPLICATION_MAX					(__TRIP_APPLICATION_T_MAX__ - 1)

enum {
	TRIP_ITAD_T_UNSPEC					= 0,
#define TRIP_ITAD_UNSPEC					TRIP_ITAD_T_UNSPEC
	TRIP_ITAD_T_ICANN					= 416,
#define TRIP_ITAD_ICANN						TRIP_ITAD_T_ICANN
	TRIP_ITAD_T_IANA					= 417,
#define TRIP_ITAD_IANA						TRIP_ITAD_T_IANA
	__TRIP_ITAD_T_MAX__
};

#define TRIP_ITAD_MAX						(__TRIP_ITAD_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_TRIP_H */

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
	TRIP_CAPABILITY_T_ROUTE_TYPES_SUPPORTED			= 1,
	TRIP_CAPABILITY_T_SEND_RECEIVE				= 2,
	__TRIP_CAPABILITY_T_MAX__
};

enum {
	TRIP_ATTRIBUTE_T_UNSPEC					= 0,
	TRIP_ATTRIBUTE_T_WithdrawnRoutes			= 1,
	TRIP_ATTRIBUTE_T_ReachableRoutes			= 2,
	TRIP_ATTRIBUTE_T_NextHopServer				= 3,
	TRIP_ATTRIBUTE_T_AdvertisementPath			= 4,
	TRIP_ATTRIBUTE_T_RoutedPath				= 5,
	TRIP_ATTRIBUTE_T_AtomicAggregate			= 6,
	TRIP_ATTRIBUTE_T_LocalPreference			= 7,
	TRIP_ATTRIBUTE_T_MultiExitDisc				= 8,
	TRIP_ATTRIBUTE_T_Communities				= 9,
	TRIP_ATTRIBUTE_T_ITAD_Topology				= 10,
	TRIP_ATTRIBUTE_T_ConvertedRoute				= 11,
	TRIP_ATTRIBUTE_T_ResourcePriority			= 12,
	TRIP_ATTRIBUTE_T_TotalCircuitCapacity			= 13,
	TRIP_ATTRIBUTE_T_AvailableCircuits			= 14,
	TRIP_ATTRIBUTE_T_CallSuccess				= 15,
	TRIP_ATTRIBUTE_T_E164_Prefix				= 16,
	TRIP_ATTRIBUTE_T_Pentadecimal_Routing_Number_Prefix	= 17,
	TRIP_ATTRIBUTE_T_Decimal_Routing_Number_Prefix		= 18,
	TRIP_ATTRIBUTE_T_TrunkGroup				= 19,
	TRIP_ATTRIBUTE_T_Carrier				= 20,
	__TRIP_ATTRIBUTE_T_MAX__
};

enum {
	TRIP_FAMILY_T_UNSPEC					= 0,
	TRIP_FAMILY_T_Decimal_Routing_Numbers			= 1,
	TRIP_FAMILY_T_PentaDecimal_Routing_Numbers		= 2,
	TRIP_FAMILY_T_E164_Numbers				= 3,
	TRIP_FAMILY_T_TrunkGroup				= 4,
	TRIP_FAMILY_T_Carrier					= 5,
	__TRIP_FAMILY_T_MAX__
};

enum {
	TRIP_APPLICATION_T_UNSPEC				= 0,
	TRIP_APPLICATION_T_SIP					= 1,
	TRIP_APPLICATION_T_H323_H225_0_Q931			= 2,
	TRIP_APPLICATION_T_H323_H225_0_RAS			= 3,
	TRIP_APPLICATION_T_H323_H225_0_Annex_G			= 4,
	TRIP_APPLICATION_T_IAX2					= 5,
	__TRIP_APPLICATION_T_MAX__
};

enum {
	TRIP_ITAD_T_UNSPEC					= 0,
	TRIP_ITAD_T_ICANN					= 416,
	TRIP_ITAD_T_IANA					= 417,
	__TRIP_ITAD_T_MAX__
};

#endif /* _NBAPI_VOLTOS_TRIP_H */

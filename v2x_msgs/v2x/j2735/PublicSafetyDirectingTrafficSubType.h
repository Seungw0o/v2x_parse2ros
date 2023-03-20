/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PublicSafetyDirectingTrafficSubType_H_
#define	_PublicSafetyDirectingTrafficSubType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PublicSafetyDirectingTrafficSubType {
	PublicSafetyDirectingTrafficSubType_unavailable	= 0,
	PublicSafetyDirectingTrafficSubType_policeAndTrafficOfficers	= 1,
	PublicSafetyDirectingTrafficSubType_trafficControlPersons	= 2,
	PublicSafetyDirectingTrafficSubType_railroadCrossingGuards	= 3,
	PublicSafetyDirectingTrafficSubType_civilDefenseNationalGuardMilitaryPolice	= 4,
	PublicSafetyDirectingTrafficSubType_emergencyOrganizationPersonnel	= 5,
	PublicSafetyDirectingTrafficSubType_highwayServiceVehiclePersonnel	= 6
} e_PublicSafetyDirectingTrafficSubType;

/* PublicSafetyDirectingTrafficSubType */
typedef BIT_STRING_t	 PublicSafetyDirectingTrafficSubType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PublicSafetyDirectingTrafficSubType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PublicSafetyDirectingTrafficSubType;
asn_struct_free_f PublicSafetyDirectingTrafficSubType_free;
asn_struct_print_f PublicSafetyDirectingTrafficSubType_print;
asn_constr_check_f PublicSafetyDirectingTrafficSubType_constraint;
ber_type_decoder_f PublicSafetyDirectingTrafficSubType_decode_ber;
der_type_encoder_f PublicSafetyDirectingTrafficSubType_encode_der;
xer_type_decoder_f PublicSafetyDirectingTrafficSubType_decode_xer;
xer_type_encoder_f PublicSafetyDirectingTrafficSubType_encode_xer;
oer_type_decoder_f PublicSafetyDirectingTrafficSubType_decode_oer;
oer_type_encoder_f PublicSafetyDirectingTrafficSubType_encode_oer;
per_type_decoder_f PublicSafetyDirectingTrafficSubType_decode_uper;
per_type_encoder_f PublicSafetyDirectingTrafficSubType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PublicSafetyDirectingTrafficSubType_H_ */
#include <asn_internal.h>

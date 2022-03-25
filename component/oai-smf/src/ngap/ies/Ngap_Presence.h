/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "asn.1/Common Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_Presence_H_
#define _Ngap_Presence_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_Presence {
  Ngap_Presence_optional    = 0,
  Ngap_Presence_conditional = 1,
  Ngap_Presence_mandatory   = 2
} e_Ngap_Presence;

/* Ngap_Presence */
typedef long Ngap_Presence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_Presence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Presence;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_Presence_specs_1;
asn_struct_free_f Ngap_Presence_free;
asn_struct_print_f Ngap_Presence_print;
asn_constr_check_f Ngap_Presence_constraint;
ber_type_decoder_f Ngap_Presence_decode_ber;
der_type_encoder_f Ngap_Presence_encode_der;
xer_type_decoder_f Ngap_Presence_decode_xer;
xer_type_encoder_f Ngap_Presence_encode_xer;
oer_type_decoder_f Ngap_Presence_decode_oer;
oer_type_encoder_f Ngap_Presence_encode_oer;
per_type_decoder_f Ngap_Presence_decode_uper;
per_type_encoder_f Ngap_Presence_encode_uper;
per_type_decoder_f Ngap_Presence_decode_aper;
per_type_encoder_f Ngap_Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_Presence_H_ */
#include <asn_internal.h>

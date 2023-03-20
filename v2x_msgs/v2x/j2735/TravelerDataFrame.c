/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TravelerDataFrame.h"

static int
memb_regions_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_msgId_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_msgId_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_regions_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_regions_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_content_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_content_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regions_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_regions_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_msgId_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__msgId, choice.furtherInfoID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FurtherInfoID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"furtherInfoID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__msgId, choice.roadSignID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSignID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"roadSignID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_msgId_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* furtherInfoID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* roadSignID */
};
static asn_CHOICE_specifics_t asn_SPC_msgId_specs_4 = {
	sizeof(struct TravelerDataFrame__msgId),
	offsetof(struct TravelerDataFrame__msgId, _asn_ctx),
	offsetof(struct TravelerDataFrame__msgId, present),
	sizeof(((struct TravelerDataFrame__msgId *)0)->present),
	asn_MAP_msgId_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msgId_4 = {
	"msgId",
	"msgId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_msgId_constr_4, &asn_PER_type_msgId_constr_4, CHOICE_constraint },
	asn_MBR_msgId_4,
	2,	/* Elements count */
	&asn_SPC_msgId_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_regions_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GeographicalPath,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regions_specs_12 = {
	sizeof(struct TravelerDataFrame__regions),
	offsetof(struct TravelerDataFrame__regions, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regions_12 = {
	"regions",
	"regions",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regions_tags_12,
	sizeof(asn_DEF_regions_tags_12)
		/sizeof(asn_DEF_regions_tags_12[0]) - 1, /* 1 */
	asn_DEF_regions_tags_12,	/* Same as above */
	sizeof(asn_DEF_regions_tags_12)
		/sizeof(asn_DEF_regions_tags_12[0]), /* 2 */
	{ &asn_OER_type_regions_constr_12, &asn_PER_type_regions_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_regions_12,
	1,	/* Single element */
	&asn_SPC_regions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_content_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__content, choice.advisory),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodesAndText,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"advisory"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__content, choice.workZone),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WorkZone,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"workZone"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__content, choice.genericSign),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericSignage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"genericSign"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__content, choice.speedLimit),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedLimit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedLimit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame__content, choice.exitService),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExitService,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"exitService"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_content_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* advisory */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* workZone */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* genericSign */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* speedLimit */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* exitService */
};
static asn_CHOICE_specifics_t asn_SPC_content_specs_16 = {
	sizeof(struct TravelerDataFrame__content),
	offsetof(struct TravelerDataFrame__content, _asn_ctx),
	offsetof(struct TravelerDataFrame__content, present),
	sizeof(((struct TravelerDataFrame__content *)0)->present),
	asn_MAP_content_tag2el_16,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_content_16 = {
	"content",
	"content",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_content_constr_16, &asn_PER_type_content_constr_16, CHOICE_constraint },
	asn_MBR_content_16,
	5,	/* Elements count */
	&asn_SPC_content_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TravelerDataFrame_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, sspTimRights),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspTimRights"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, frameType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TravelerInfoType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frameType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, msgId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_msgId_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgId"
		},
	{ ATF_POINTER, 1, offsetof(struct TravelerDataFrame, startYear),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startYear"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, startTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, duratonTime),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinutesDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duratonTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, priority),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignPrority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, sspLocationRights),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspLocationRights"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, regions),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_regions_12,
		0,
		{ &asn_OER_memb_regions_constr_12, &asn_PER_memb_regions_constr_12,  memb_regions_constraint_1 },
		0, 0, /* No default value */
		"regions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, sspMsgRights1),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspMsgRights1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, sspMsgRights2),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspMsgRights2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelerDataFrame, content),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_content_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"content"
		},
	{ ATF_POINTER, 1, offsetof(struct TravelerDataFrame, url),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URL_Short,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"url"
		},
};
static const int asn_MAP_TravelerDataFrame_oms_1[] = { 3, 12 };
static const ber_tlv_tag_t asn_DEF_TravelerDataFrame_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TravelerDataFrame_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sspTimRights */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frameType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msgId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* startYear */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* startTime */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* duratonTime */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* priority */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sspLocationRights */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* regions */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sspMsgRights1 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sspMsgRights2 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* content */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* url */
};
asn_SEQUENCE_specifics_t asn_SPC_TravelerDataFrame_specs_1 = {
	sizeof(struct TravelerDataFrame),
	offsetof(struct TravelerDataFrame, _asn_ctx),
	asn_MAP_TravelerDataFrame_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_TravelerDataFrame_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TravelerDataFrame = {
	"TravelerDataFrame",
	"TravelerDataFrame",
	&asn_OP_SEQUENCE,
	asn_DEF_TravelerDataFrame_tags_1,
	sizeof(asn_DEF_TravelerDataFrame_tags_1)
		/sizeof(asn_DEF_TravelerDataFrame_tags_1[0]), /* 1 */
	asn_DEF_TravelerDataFrame_tags_1,	/* Same as above */
	sizeof(asn_DEF_TravelerDataFrame_tags_1)
		/sizeof(asn_DEF_TravelerDataFrame_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TravelerDataFrame_1,
	13,	/* Elements count */
	&asn_SPC_TravelerDataFrame_specs_1	/* Additional specs */
};


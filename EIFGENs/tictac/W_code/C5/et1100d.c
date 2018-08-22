/*
 * Class ETF_INT_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1100 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1100 [] = {0xFF01,244,1099,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1100 [] = {0xFF01,1099,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1100 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1100 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1100 [] = {0xFF01,1099,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1100 [] = {0xFF01,1099,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1100 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1100 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1100 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1100 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1100 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1100 [] = {0xFF01,1099,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1100 [] = {0xFF01,231,0xFFFF};


static const struct desc_info desc_1100[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1100), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1100), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1100), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1100), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1100), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1100), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1100), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1100), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1100), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1100), 15627, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1100), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1100), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0897 /*1099*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1100), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1100), 15596, 0},
	{EIF_GENERIC(NULL), 15597, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15625, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018F /*199*/), 15626, 8},
};
void Init1100(void)
{
	IDSC(desc_1100, 0, 1099);
	IDSC(desc_1100 + 1, 1, 1099);
	IDSC(desc_1100 + 32, 390, 1099);
	IDSC(desc_1100 + 34, 386, 1099);
}


#ifdef __cplusplus
}
#endif

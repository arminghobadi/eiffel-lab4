/*
 * Code for class YY_SCANNER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1522_15290(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15291(EIF_REFERENCE);
extern void F1522_15292(EIF_REFERENCE);
extern void F1522_15293(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15294(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1522_15296(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1522_15297(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15298(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15299(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15301(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15302(EIF_REFERENCE);
extern void F1522_15303(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15304(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15305(EIF_REFERENCE);
extern void F1522_15306(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15307(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1522_15308(EIF_REFERENCE);
extern void F1522_15309(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15310(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15311(EIF_REFERENCE);
extern void F1522_15312(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15313(EIF_REFERENCE);
extern void F1522_15314(EIF_REFERENCE);
extern void F1522_15315(EIF_REFERENCE);
extern void F1522_15316(EIF_REFERENCE);
extern void F1522_15317(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1522_15319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15320(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1522_15323(EIF_REFERENCE);
extern void F1522_15324(EIF_REFERENCE);
extern void F1522_15325(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15326(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1522_15327(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15333(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15334(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15335(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15336(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15337(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15338(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15339(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15340(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15341(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15342(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15343(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15344(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15345(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15346(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15347(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1522_15353(EIF_REFERENCE);
extern void F1522_16424(EIF_REFERENCE, int);
extern void EIF_Minit1522(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_SCANNER_SKELETON}.make_with_buffer */
void F1522_15290 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_buffer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21470);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21470);
	RTCC(arg1, 1521, l_feature_name, 1, RTWCT(11218, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11264, 0xF800013F, 0); /* yy_pushed_start_conditions */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11265, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6182, "make", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(11264, dtype)) = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11218, 0xF8000409, 0); /* input_buffer */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11218, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11236, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11237, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("input_buffer_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_initialize */
void F1522_15291 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_initialize";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21471);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21471);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11240, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11252, 0x10000000, 1); /* yy_start_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
	*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
	*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11259, 0x10000000, 1); /* yy_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
	*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11279, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(11279, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 11278, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(11278, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 11277, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(11277, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_SCANNER_SKELETON}.reset */
void F1522_15292 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21472);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21472);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11276, 0x10000000, 1); /* pushed_start_condition_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11252, 0x10000000, 1); /* yy_start_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
	*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
	*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11259, 0x10000000, 1); /* yy_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
	*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11279, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(11279, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 11278, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(11278, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 11277, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(11277, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 11260, 0x04000000, 1); /* yy_more_flag */
	*(EIF_BOOLEAN *)(Current + RTWA(11260, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 11261, 0x10000000, 1); /* yy_more_len */
	*(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 11262, 0x10000000, 1); /* yy_last_accepting_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(11262, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 11263, 0x10000000, 1); /* yy_last_accepting_cpos */
	*(EIF_INTEGER_32 *)(Current + RTWA(11263, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_SCANNER_SKELETON}.reset_start_condition */
void F1522_15293 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_start_condition";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21473);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21473);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11276, 0x10000000, 1); /* pushed_start_condition_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11252, 0x10000000, 1); /* yy_start_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("pushed_start_conditions_cleared", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_SCANNER_SKELETON}.text */
EIF_TYPED_VALUE F1522_15294 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "text";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21474);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21474);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_2 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8082, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(231, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4555, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("text_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("correct_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4681, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
}

/* {YY_SCANNER_SKELETON}.text_item */
EIF_TYPED_VALUE F1522_15295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "text_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1521, Current, 1, 1, 21475);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21475);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80001AF, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc1))(loc1, ui4_1x)).it_c1);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
		Result = (EIF_CHARACTER_8) tc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11191, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(Result == tc1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.text_substring */
EIF_TYPED_VALUE F1522_15296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "text_substring";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 2, 21476);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21476);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("meaningful_start", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_end", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 < arg1)) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(231, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4555, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8082, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("text_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("text_substring_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 > arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4681, "count", Result));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 <= arg2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11191, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4635, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", Result))(Result, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {YY_SCANNER_SKELETON}.start_condition */
EIF_TYPED_VALUE F1522_15297 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_condition";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21477);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21477);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype));
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {YY_SCANNER_SKELETON}.text_count */
EIF_TYPED_VALUE F1522_15298 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "text_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21478);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21478);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_count", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {YY_SCANNER_SKELETON}.line */
EIF_TYPED_VALUE F1522_15299 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11279,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.column */
EIF_TYPED_VALUE F1522_15300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11278,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.position */
EIF_TYPED_VALUE F1522_15301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11277,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.pushed_start_condition_count */
EIF_TYPED_VALUE F1522_15302 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11276,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.set_start_condition */
void F1522_15303 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_start_condition";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21483);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21483);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_condition", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11202, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11252, 0x10000000, 1); /* yy_start_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(11252, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg1) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("start_condition_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11194, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.push_start_condition */
void F1522_15304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "push_start_condition";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21484);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21484);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_condition", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11202, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11264, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2427, "capacity", tr2))(tr2)).it_i4);
	if ((EIF_BOOLEAN) (ti4_2 >= ti4_3)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11264, 0xF800013F, 0); /* yy_pushed_start_conditions */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11264, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = tr3;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11265, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6190, "aliased_resized_area", tr2))(tr2, ur1x, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current + RTWA(11264, dtype)) = (EIF_REFERENCE) tr3;
	}
	RTHOOK(4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11264, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = tr3;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11194, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
	ui4_2 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "force", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11276, 0x10000000, 1); /* pushed_start_condition_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype)))++;
	RTHOOK(6);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11204, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("start_condition_set", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11194, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {YY_SCANNER_SKELETON}.pop_start_condition */
void F1522_15305 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pop_start_condition";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21485);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21485);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_pushed_start_conditions", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11276, 0x10000000, 1); /* pushed_start_condition_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype)))--;
	RTHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11264, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
	ui4_1 = ti4_2;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", tr2))(tr2, ui4_1x)).it_i4);
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11204, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11276, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {YY_SCANNER_SKELETON}.append_text_to_string */
void F1522_15306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_text_to_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21486);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21486);
	RTCC(arg1, 1521, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	if ((EIF_BOOLEAN) (ti4_2 < ti4_3)) {
		RTHOOK(3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_2 = (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L));
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8085, "append_substring_to_string", tr2))(tr2, ui4_1x, ui4_2x, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		RTCO(tr1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {YY_SCANNER_SKELETON}.append_text_substring_to_string */
void F1522_15307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_text_substring_to_string";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 3, 21487);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21487);
	RTCC(arg3, 1521, l_feature_name, 3, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4681, "count", arg3));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		RTHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ((EIF_INTEGER_32) 1L));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + arg2) - ((EIF_INTEGER_32) 1L));
		ur1 = RTCCL(arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8085, "append_substring_to_string", tr2))(tr2, ui4_1x, ui4_2x, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4681, "count", arg3));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {YY_SCANNER_SKELETON}.more */
void F1522_15308 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "more";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21488);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1521, Current, 21488);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 11260, 0x04000000, 1); /* yy_more_flag */
	*(EIF_BOOLEAN *)(Current + RTWA(11260, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_SCANNER_SKELETON}.less */
void F1522_15309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "less";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1521, Current, 3, 1, 21489);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21489);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11272, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc2);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
		*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype));
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype))) -= loc1;
		} else {
			RTHOOK(9);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype));
			RTHOOK(10);
			RTDBGAA(Current, dtype, 11261, 0x10000000, 1); /* yy_more_len */
			*(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(11);
			RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11279, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11278, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11249, dtype))(Current);
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11261, 0x10000000, 1); /* yy_more_len */
			*(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype)) = (EIF_INTEGER_32) loc3;
		}
	} else {
		RTHOOK(15);
		RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + arg1);
	}
	RTHOOK(16);
	RTDBGAA(Current, dtype, 11259, 0x10000000, 1); /* yy_position */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11277, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("text_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11195, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* {YY_SCANNER_SKELETON}.unread_character */
void F1522_15310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unread_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21490);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21490);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6658, "set_index", tr1))(tr1, ui4_1x);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6667, "compact_right", tr1))(tr1);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6648, "content", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11239, dtype))(Current, ur1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6654, "index", tr1));
		*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)))--;
	}
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	uc1 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6559, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.read_character */
void F1522_15311 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_character";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1521, Current, 3, 0, 21491);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21491);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF80001AF, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc3))(loc3, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
	}
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11267, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(loc2 == tc1)) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6649, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11238, dtype))(Current);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6660, "filled", tr1));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11212, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(11);
					RTDBGAA(Current, dtype, 11217, 0x08000000, 1); /* last_character */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11268, dtype))(Current)).it_c1);
					*(EIF_CHARACTER_8 *)(Current + RTWA(11217, dtype)) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(12);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11216, dtype))(Current);
				}
				RTHOOK(13);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(15);
		RTDBGAL(Current, 3, 0xF80001AF, 0, 0); /* loc3 */
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 11217, 0x08000000, 1); /* last_character */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc3))(loc3, ui4_1x)).it_c1);
			*(EIF_CHARACTER_8 *)(Current + RTWA(11217, dtype)) = (EIF_CHARACTER_8) tc1;
		} else {
			RTHOOK(18);
			RTDBGAA(Current, dtype, 11217, 0x08000000, 1); /* last_character */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
			*(EIF_CHARACTER_8 *)(Current + RTWA(11217, dtype)) = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(19);
		RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)))++;
		RTHOOK(20);
		RTDBGAA(Current, dtype, 11259, 0x10000000, 1); /* yy_position */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype)))++;
		RTHOOK(21);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11217, dtype));
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTHOOK(22);
			RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype)))++;
			RTHOOK(23);
			RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
			*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(24);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(24,1);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6659, "set_beginning_of_line", tr1))(tr1, ub1x);
		} else {
			RTHOOK(25);
			RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)))++;
			RTHOOK(26);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(26,1);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6659, "set_beginning_of_line", tr1))(tr1, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
}

/* {YY_SCANNER_SKELETON}.set_input_buffer */
void F1522_15312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_input_buffer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21492);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21492);
	RTCC(arg1, 1521, l_feature_name, 1, RTWCT(11218, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTCEQ(arg1, tr1)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6658, "set_index", tr1))(tr1, ui4_1x);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype));
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6657, "set_position", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11218, 0xF8000409, 0); /* input_buffer */
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(11218, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11237, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("input_buffer_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {YY_SCANNER_SKELETON}.flush_input_buffer */
void F1522_15313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush_input_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21493);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21493);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6664, "flush", tr1))(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11237, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("flushed", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6649, "count", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {YY_SCANNER_SKELETON}.print_last_token */
void F1522_15314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "print_last_token";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21494);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21494);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(1,2);
	tr1 = RTMS_EX_H("Last token code: ",17,1619278880);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11190, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7751, "put_integer", tr2))(tr2, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	uc1 = (EIF_CHARACTER_8) '\012';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6272, "put_character", tr2))(tr2, uc1x);
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11272, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		tr1 = RTMS_EX_H("Last token line: ",17,1804699680);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11279, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7751, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,2);
		tr1 = RTMS_EX_H("\012Last token column: ",20,7670816);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(8,2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11278, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7751, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(9,2);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6272, "put_character", tr2))(tr2, uc1x);
	}
	RTHOOK(10);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11273, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(11,2);
		tr1 = RTMS_EX_H("Last token position: ",21,584845344);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(12,2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11277, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7751, "put_integer", tr2))(tr2, ui4_1x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(13,2);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6272, "put_character", tr2))(tr2, uc1x);
	}
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(14,2);
	tr1 = RTMS_EX_H("Last token text: ",17,1989152800);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
	RTHOOK(15);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11190, dtype));
	switch (ti4_1) {
		case 0L:
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(16,2);
			tr1 = RTMS_EX_H("EOF token\012",10,1675200778);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
			break;
		case -1L:
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(17,2);
			tr1 = RTMS_EX_H("Error token\012",12,626631178);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
			break;
		case -2L:
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(18,2);
			tr1 = RTMS_EX_H("Unknown token\012",14,192392202);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
			break;
		default:
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(19,2);
			uc1 = (EIF_CHARACTER_8) '\"';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6272, "put_character", tr2))(tr2, uc1x);
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(20,2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11191, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6090, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(21,2);
			tr1 = RTMS_EX_H("\"\012",2,8714);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7749, "put_string", tr2))(tr2, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uc1
}

/* {YY_SCANNER_SKELETON}.yy_load_input_buffer */
void F1522_15315 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_load_input_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21495);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21495);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6648, "content", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11239, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6654, "index", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6652, "line", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6653, "column", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11259, 0x10000000, 1); /* yy_position */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6651, "position", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("yy_content_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,1);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6648, "content", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		if (RTCEQ(tr1, tr3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("yy_start_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6654, "index", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("yy_end_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6654, "index", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("yy_line_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6652, "line", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("yy_column_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6653, "column", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("yy_position_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6651, "position", tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
}

/* {YY_SCANNER_SKELETON}.yy_refill_input_buffer */
void F1522_15316 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_refill_input_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1521, Current, 1, 0, 21496);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21496);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("end_of_buffer_not_missed", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6649, "count", tr1));
		RTTE((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6658, "set_index", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6663, "fill", tr1))(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6648, "content", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11239, dtype))(Current, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(6654, "index", tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11255, 0x10000000, 1); /* yy_end */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + loc1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11256, 0x10000000, 1); /* yy_start */
	*(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype)) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {YY_SCANNER_SKELETON}.yy_set_content */
void F1522_15317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_set_content";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21497);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21497);
	RTCC(arg1, 1521, l_feature_name, 1, RTWCT(11253, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11253, 0xF80004A4, 0); /* yy_content */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11253, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11254, 0xF80001AF, 0); /* yy_content_area */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8084, "as_special", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11254, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("yy_content_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_fixed_array */
EIF_TYPED_VALUE F1522_15319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_fixed_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 1, 21498);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21498);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,316,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1521, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF800013F, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6185, "to_special", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2426, "count", Result))(Result)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_array_subcopy */
void F1522_15320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "yy_array_subcopy";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 5, 21499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21499);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,316,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1521, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,316,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1521, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_same", EX_PRE);
		RTTE(!RTCEQ(arg1, arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2849, "lower", arg2));
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2848, "upper", arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("index_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2849, "lower", arg1));
		RTTE((EIF_BOOLEAN) (arg5 >= ti4_1), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2848, "upper", arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg5) >= (EIF_INTEGER_32) (arg4 - arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7683, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8076, "subcopy", tr1))(tr1, ur1x, ur2x, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_at_beginning_of_line */
EIF_TYPED_VALUE F1522_15323 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_at_beginning_of_line";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1521, Current, 0, 0, 21500);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1521, Current, 21500);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6655, "beginning_of_line", tr1));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {YY_SCANNER_SKELETON}.yy_set_beginning_of_line */
void F1522_15324 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_set_beginning_of_line";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1521, Current, 1, 0, 21501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21501);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80001AF, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc1))(loc1, ui4_1x)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
			ub1 = (EIF_BOOLEAN)(tc1 == tc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6659, "set_beginning_of_line", tr1))(tr1, ub1x);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11218, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(5,2);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr2))(tr2, ui4_1x)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
			ub1 = (EIF_BOOLEAN)(tc1 == tc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6659, "set_beginning_of_line", tr1))(tr1, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ub1
}

/* {YY_SCANNER_SKELETON}.yy_set_line */
void F1522_15325 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_set_line";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1521, Current, 5, 1, 21502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21502);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_column_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 5, 0xF80001AF, 0, 0); /* loc5 */
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) - ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTHOOK(7);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc5))(loc5, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
		} else {
			RTHOOK(8);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(loc4 == tc1)) {
			RTHOOK(10);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(11);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - loc2);
	} else {
		RTHOOK(14);
		RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype))) += loc3;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
		*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_set_column */
void F1522_15326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_set_column";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1521, Current, 5, 1, 21503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21503);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_line_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 5, 0xF80001AF, 0, 0); /* loc5 */
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTHOOK(7);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc5))(loc5, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
		} else {
			RTHOOK(8);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(loc4 != tc1)) {
			RTHOOK(10);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
			RTHOOK(11);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
		} else {
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
			*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			RTHOOK(13);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		}
	}
	RTHOOK(14);
	RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
	(*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype))) += arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {YY_SCANNER_SKELETON}.yy_set_line_column */
void F1522_15327 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_set_line_column";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_CHAR8, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1521, Current, 7, 0, 21504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1521, Current, 21504);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 7, 0xF80001AF, 0, 0); /* loc7 */
	loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(11255, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(11256, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11261, dtype));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < loc2) || loc5)) break;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTHOOK(6);
			RTDBGAL(Current, 6, 0x08000000, 1, 0); /* loc6 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc7))(loc7, ui4_1x)).it_c1);
			loc6 = (EIF_CHARACTER_8) tc1;
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 6, 0x08000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
			loc6 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(8);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(loc6 == tc1)) {
			RTHOOK(9);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
			RTHOOK(10);
			RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(11);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTHOOK(15);
			RTDBGAL(Current, 6, 0x08000000, 1, 0); /* loc6 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2597, "item", loc7))(loc7, ui4_1x)).it_c1);
			loc6 = (EIF_CHARACTER_8) tc1;
		} else {
			RTHOOK(16);
			RTDBGAL(Current, 6, 0x08000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6557, "item", tr1))(tr1, ui4_1x)).it_c1);
			loc6 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(17);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11269, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(loc6 == tc1)) {
			RTHOOK(18);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(20);
	if (loc5) {
		RTHOOK(21);
		RTDBGAA(Current, dtype, 11257, 0x10000000, 1); /* yy_line */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype))) += loc3;
		RTHOOK(22);
		RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
		*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(23);
		RTDBGAA(Current, dtype, 11258, 0x10000000, 1); /* yy_column */
		(*(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype))) += loc4;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ui4_1
}

/* {YY_SCANNER_SKELETON}.yy_start_state */
EIF_TYPED_VALUE F1522_15330 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11252,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_content */
EIF_TYPED_VALUE F1522_15331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11253,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_content_area */
EIF_TYPED_VALUE F1522_15332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11254,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_end */
EIF_TYPED_VALUE F1522_15333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11255,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_start */
EIF_TYPED_VALUE F1522_15334 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11256,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_line */
EIF_TYPED_VALUE F1522_15335 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11257,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_column */
EIF_TYPED_VALUE F1522_15336 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11258,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_position */
EIF_TYPED_VALUE F1522_15337 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11259,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_more_flag */
EIF_TYPED_VALUE F1522_15338 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11260,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_more_len */
EIF_TYPED_VALUE F1522_15339 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11261,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_last_accepting_state */
EIF_TYPED_VALUE F1522_15340 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11262,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_last_accepting_cpos */
EIF_TYPED_VALUE F1522_15341 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11263,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yy_pushed_start_conditions */
EIF_TYPED_VALUE F1522_15342 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11264,Dtype(Current)));
	return r;
}


/* {YY_SCANNER_SKELETON}.yyinitial_pushed_start_conditions_capacity */
EIF_TYPED_VALUE F1522_15343 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {YY_SCANNER_SKELETON}.yybuffer_capacity */
EIF_TYPED_VALUE F1522_15344 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

/* {YY_SCANNER_SKELETON}.yyend_of_buffer_character */
EIF_TYPED_VALUE F1522_15345 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	return r;
}

/* {YY_SCANNER_SKELETON}.yyend_of_file_character */
EIF_TYPED_VALUE F1522_15346 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\377';
	return r;
}

/* {YY_SCANNER_SKELETON}.yynew_line_character */
EIF_TYPED_VALUE F1522_15347 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\012';
	return r;
}

/* {YY_SCANNER_SKELETON}.yy_dummy */
EIF_TYPED_VALUE F1522_15353 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	return r;
}

/* {YY_SCANNER_SKELETON}._invariant */
void F1522_16424 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1521, Current, 0, 16423);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("yy_content_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_line_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11257, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_column_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11258, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_position_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11259, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_pushed_start_conditions_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11264, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit1522 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

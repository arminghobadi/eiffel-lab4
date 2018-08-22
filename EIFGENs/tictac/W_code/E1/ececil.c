#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(822, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A143_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F143_7027)(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A307_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A360_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A367_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_TYPED_VALUE _A612_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A955_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] has */
EIF_TYPED_VALUE _A1605_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_64] has */
EIF_TYPED_VALUE _A1614_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A307_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, G#2] put */
void _A360_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A367_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A612_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A955_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] put */
void _A1605_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_64] put */
void _A1614_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A307_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A360_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A367_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A612_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A955_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] remove */
void _A1605_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_64] remove */
void _A1614_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3045, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A166_95 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1715, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A166_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3109, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A166_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3110, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void _A1103_35_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7160, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_EVENT [G#1] execute */
void _A1577_36_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6223, "execute", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void _A1104_34_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7158, "log_empty", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void _A1104_35_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7160, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void _A1104_40_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7159, "log_command", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A1135_151_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7722, "enable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A1135_152_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7723, "disable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A1137_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7731, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A1138_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7732, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A1139_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7733, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A1140_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7734, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A1141_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7735, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A1142_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7736, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A1143_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7737, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A1144_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7738, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A1145_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7739, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A1146_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7740, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A1147_183_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7741, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2]);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A1148_183_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7742, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], closed [2]);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A1149_183_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7743, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A1150_183_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7744, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], closed [2]);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A1151_183_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7745, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8], closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A1152_182 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7746, "wrapper", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A1152_181 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3149, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* ETF_DUMMY etf_dummy */
void _A1170_51 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7879, "etf_dummy", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_REDO_INTERFACE redo */
void _A1171_51 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7880, "redo", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_PLAY_AGAIN_INTERFACE play_again */
void _A1173_51 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7881, "play_again", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_UNDO_INTERFACE undo */
void _A1175_51 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7882, "undo", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_PLAY_INTERFACE play */
void _A1177_52_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7884, "play", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ETF_NEW_GAME_INTERFACE new_game */
void _A1179_52_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7886, "new_game", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_MENU_ITEM_IMP on_activate */
void _A1489_256 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10866, "on_activate", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of expose_translate_agent */
EIF_TYPED_VALUE _A1204_428_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1204_16357)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of size_allocate_translate_agent */
EIF_TYPED_VALUE _A1204_429_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1204_16358)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of configure_translate_agent */
EIF_TYPED_VALUE _A1204_430_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1204_16359)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of set_focus_event_translate_agent */
EIF_TYPED_VALUE _A1204_431_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1204_16360)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL translate_and_call */
void _A1204_401 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8215, "translate_and_call", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL marshal */
void A1204_414 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_TYPED_VALUE u [3];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8228, "marshal", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]));
}

	/* EV_GTK_CALLBACK_MARSHAL on_timeout_intermediary */
void _A1204_322 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8144, "on_timeout_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_ok_intermediary */
void _A1204_336 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8158, "file_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_cancel_intermediary */
void _A1204_337 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8159, "file_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_ok_intermediary */
void _A1204_334 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8156, "directory_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_cancel_intermediary */
void _A1204_335 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8157, "directory_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_ok_intermediary */
void _A1204_338 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8160, "font_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_cancel_intermediary */
void _A1204_339 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8161, "font_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_ok_intermediary */
void _A1204_332 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8154, "color_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_cancel_intermediary */
void _A1204_333 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8155, "color_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_size_allocate_intermediate */
void _A1204_326_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8148, "on_size_allocate_intermediate", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2], open [3], open [4]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_notebook_page_switch_intermediary */
void _A1204_323_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8145, "on_notebook_page_switch_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1]);
}

	/* EV_GTK_CALLBACK_MARSHAL page_switch_translate */
EIF_TYPED_VALUE _A1204_316_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8138, "page_switch_translate", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_set_focus_event_intermediary */
void _A1204_327_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8149, "on_set_focus_event_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1]);
}

	/* EV_GTK_CALLBACK_MARSHAL tree_row_expansion_change_intermediary */
void _A1204_314_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8136, "tree_row_expansion_change_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_pnd_deferred_item_parent_selection_change */
void _A1204_317 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8139, "on_pnd_deferred_item_parent_selection_change", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_resize_callback */
void _A1204_312 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8134, "mcl_column_resize_callback", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_click_callback */
void _A1204_311 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8133, "mcl_column_click_callback", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_gauge_value_changed_intermediary */
void _A1204_325 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8147, "on_gauge_value_changed_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL button_select_intermediary */
void _A1204_330 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8152, "button_select_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_component_change_intermediary */
void _A1204_328 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8150, "text_component_change_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_buffer_mark_set_intermediary */
void _A1204_313_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8135, "text_buffer_mark_set_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_field_return_intermediary */
void _A1204_329 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8151, "text_field_return_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_combo_box_toggle_button_event */
void _A1204_318 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8140, "on_combo_box_toggle_button_event", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL menu_item_activate_intermediary */
void _A1204_331 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8153, "menu_item_activate_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL new_toolbar_item_select_actions_intermediary */
void _A1204_309 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8131, "new_toolbar_item_select_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL toolbar_item_select_actions_intermediary */
void _A1204_319 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8141, "toolbar_item_select_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL create_expose_actions_intermediary */
void _A1204_324_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8146, "create_expose_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2], open [3], open [4]);
}

	/* EV_DYNAMIC_LIST [G#1] inline-agent#1 of append */
EIF_TYPED_VALUE _A1574_151_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1574_16380)(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1432_260_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10398, "connect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1432_261_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10399, "disconnect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void _A1287_314 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8968, "command_return_key_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void _A1287_315 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8969, "execute_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void _A1287_316 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8970, "reset_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void _A1287_317 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8971, "load_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void _A1287_258 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8920, "destroy_and_exit_if_last", closed [1].it_r))(closed [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1289_306_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9007, "dialog_key_press_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG destroy */
void _A1289_258 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8366, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1291_347 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9037, "on_button_press", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1291_348_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9038, "on_key_press", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1351_105_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9500, "update_preferred_faces", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_APPLICATION_I contextual_help */
void _A1359_301_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9701, "contextual_help", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1359_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9299, "safe_destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_TYPED_VALUE _A1359_306_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1359_16404)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1359_307_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1359_16405)(closed [1].it_r, open [1], open [2], open [3]);
}

	/* EV_APPLICATION_I help_handler */
void _A1359_298 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9698, "help_handler", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1359_243 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9644, "enable_contextual_help", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A1136_182 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3149, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_APPLICATION_IMP inline-agent#1 of im_context_commit_translate_agent */
EIF_TYPED_VALUE _A1360_564_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1360_16406)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_IMP on_char */
void _A1360_440_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9705, "on_char", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ANY_IMP c_object_dispose */
void A1362_76 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9829, "c_object_dispose", Current))(Current);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1374_100 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10003, "close_dockable_dialog", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_PICK_AND_DROPABLE_IMP inline-agent#1 of start_transport */
void _A1407_211 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1407_16413)(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6]);
}

	/* EV_GAUGE_IMP set_range */
void _A1460_376 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10719, "set_range", closed [1].it_r))(closed [1].it_r);
}

	/* EV_RICH_TEXT_IMP format_region */
void _A1471_452 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10636, "format_region", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4]);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1471_491_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10659, "update_tab_positions", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MENU_IMP c_gtk_menu_popup */
void _A1493_304 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10878, "c_gtk_menu_popup", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6]);
}

	/* EV_DRAWING_AREA_IMP update_tooltip_window */
void _A1506_505 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11031, "update_tooltip_window", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_8 is_empty */
EIF_TYPED_VALUE _A232_161_1 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", open [1].it_r))(open [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A166_95,
(fnptr)A166_159,
(fnptr)A166_160,
(fnptr)A1204_414,
(fnptr)A1362_76,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif

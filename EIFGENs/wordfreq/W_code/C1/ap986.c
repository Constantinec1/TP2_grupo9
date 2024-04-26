/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F986_7394(EIF_REFERENCE);
extern void EIF_Minit986(void);

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

/* {APPLICATION}.make */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F986_7394 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc12 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc13 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc14 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc15 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc16 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc19 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(17);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc10);
	RTLR(7,ur1);
	RTLR(8,tr2);
	RTLR(9,loc11);
	RTLR(10,loc3);
	RTLR(11,ur2);
	RTLR(12,loc4);
	RTLR(13,loc8);
	RTLR(14,loc9);
	RTLR(15,loc5);
	RTLR(16,saved_except);
	RTLIU(17);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_BOOL, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTLU(SK_BOOL, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_BOOL, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLXL;
	
	RTEAA(l_feature_name, 985, Current, 20, 0, 13468);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(985, Current, 13468);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	RTDBGAL(1, 0xF800037B, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,891,223,0xFF01,237,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2930, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80003D8, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(984, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5178, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(6, 0xF800024D, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,589,0xFF01,237,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2728, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF800024D, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,589,0xFF01,237,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2728, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(10, 0xF80000ED, 0, 0); /* loc10 */
	tr1 = RTMS_EX_H("frankstein_chpt4.txt",20,1416150388);
	loc10 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc12) {
		RTHOOK(7);
		tr1 = RTMS_EX_H("File path: ",11,2141806368);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(512, "read_line", tr1))(tr1);
		RTHOOK(9);
		RTDBGAL(10, 0xF80000ED, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(463, "last_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc10 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(10);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(11);
	RTDBGAL(11, 0xF80000ED, 0, 0); /* loc11 */
	tr1 = RTMS_EX_H("stop-words.txt",14,1247275124);
	loc11 = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	tr1 = RTMS_EX_H("Step ",5,1953442336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(14);
	ur1 = RTLN(eif_new_type(223, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(15);
	tr1 = RTMS_EX_H(": Extracting Text \012",19,291200778);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(16);
	RTDBGAL(6, 0xF800024D, 0, 0); /* loc6 */
	ur1 = RTCCL(loc10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5179, "extract_words", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(18);
	tr1 = RTMS_EX_H("Step ",5,1953442336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(19);
	ur1 = RTLN(eif_new_type(223, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(20);
	tr1 = RTMS_EX_H(": Extracting Stop Words \012",25,325525770);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(21);
	if ((EIF_BOOLEAN) !loc13) {
		RTHOOK(22);
		RTDBGAL(7, 0xF800024D, 0, 0); /* loc7 */
		ur1 = RTCCL(loc11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5179, "extract_words", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(23);
		RTDBGAL(7, 0xF800024D, 0, 0); /* loc7 */
		tr1 = RTMS_EX_H("stop.txt",8,1427732852);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5179, "extract_words", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(24);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTHOOK(25);
	tr1 = RTMS_EX_H("Step ",5,1953442336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(26);
	ur1 = RTLN(eif_new_type(223, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(27);
	tr1 = RTMS_EX_H(": Removing Stop Words from List \012",33,268033290);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(28);
	RTDBGAL(3, 0xF80003D7, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(983, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5175, Dtype(tr1)))(tr1);
	RTNHOOK(28,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(29);
	if ((EIF_BOOLEAN) !loc14) {
		RTHOOK(30);
		RTDBGAL(6, 0xF800024D, 0, 0); /* loc6 */
		ur1 = RTCCL(loc6);
		ur2 = RTCCL(loc7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5176, "remove_stops", loc3))(loc3, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(31);
		RTDBGAL(6, 0xF800024D, 0, 0); /* loc6 */
		loc6 = (EIF_REFERENCE) RTCCL(loc6);
	}
	RTHOOK(32);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTHOOK(33);
	tr1 = RTMS_EX_H("Step ",5,1953442336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(34);
	ur1 = RTLN(eif_new_type(223, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(35);
	tr1 = RTMS_EX_H(": Counting the Frequency of Words \012",35,462640394);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(36);
	RTDBGAL(4, 0xF80003D6, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(982, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5173, Dtype(tr1)))(tr1);
	RTNHOOK(36,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	RTDBGAL(1, 0xF800037B, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,891,223,0xFF01,237,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2930, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(37,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(38);
	if ((EIF_BOOLEAN) !loc15) {
		RTHOOK(39);
		RTDBGAL(1, 0xF800037B, 0, 0); /* loc1 */
		ur1 = RTCCL(loc6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5174, "frequency", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(40);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTHOOK(41);
	tr1 = RTMS_EX_H("Step ",5,1953442336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(42);
	ur1 = RTLN(eif_new_type(223, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(43);
	tr1 = RTMS_EX_H(": Sorting List \012",16,291246346);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(44);
	RTDBGAL(8, 0xF800024D, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,589,0xFF01,237,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2728, Dtype(tr1)))(tr1);
	RTNHOOK(44,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(45);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2956, "start", loc1))(loc1);
	for (;;) {
		RTHOOK(46);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2952, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(47);
		RTDBGAL(9, 0xF80000ED, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2940, "key_for_iteration", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(48);
		ur1 = RTCCL(loc9);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2206, "extend", loc8))(loc8, ur1x);
		RTHOOK(49);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2957, "forth", loc1))(loc1);
	}
	RTHOOK(50);
	RTDBGAL(5, 0xF80003D5, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(981, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5169, Dtype(tr1)))(tr1);
	RTNHOOK(50,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(51);
	if ((EIF_BOOLEAN) !loc16) {
		RTHOOK(52);
		RTDBGAL(8, 0xF800024D, 0, 0); /* loc8 */
		ur1 = RTCCL(loc8);
		ur2 = RTCCL(loc1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5171, "mergesort_key", loc5))(loc5, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(53);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2277, "start", loc8))(loc8);
	RTHOOK(54);
	RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
	loc18 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(55);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2290, "exhausted", loc8))(loc8)).it_b);
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) (loc18 >= ((EIF_INTEGER_32) 25L));
		}
		if (tb2) break;
		RTHOOK(56);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2243, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(57);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(58);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2243, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "has", loc1))(loc1, ur1x)).it_b);
		if (tb3) {
			RTHOOK(59);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2243, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2936, "at", loc1))(loc1, ur1x)).it_i4);
			loc17 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(60);
		ur1 = RTLN(eif_new_type(223, 0x00).id);
		*(EIF_INTEGER_32 *)ur1 = loc17;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(61);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(62);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2293, "forth", loc8))(loc8);
		RTHOOK(63);
		RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
		loc18++;
	}
	RTHOOK(64);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2194, "is_empty", loc8))(loc8)).it_b);
	if (tb3) {
		RTHOOK(65);
		tr1 = RTMS_EX_H("Nenhuma palavra valida encontrada",33,1332218465);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(66);
	if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(67);
		tr1 = RTMS_EX_H("ERROR: The wordlist filepath \'",30,1024639527);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(68);
		ur1 = RTCCL(loc10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(69);
		tr1 = RTMS_EX_H("\' does not lead to a readable file",34,1078445669);
		tr2 = RTMS_EX_H("\012",1,10);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(70);
		tr1 = RTMS_EX_H("Using default file: \'frankstein_chpt4.txt\'",42,403340839);
		tr2 = RTMS_EX_H("\012",1,10);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(71);
		RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
		loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(72);
		RTTS;
		RTPS;
		RTER;
	} else {
		RTHOOK(73);
		if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(74);
			tr1 = RTMS_EX_H("ERROR: The stopword filepath \'",30,702274855);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(75);
			ur1 = RTCCL(loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(76);
			tr1 = RTMS_EX_H("\' does not lead to a readable file",34,1078445669);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(77);
			tr1 = RTMS_EX_H("Using default file: \'stop.txt\'",30,1114168871);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(78);
			RTDBGAL(13, 0x04000000, 1, 0); /* loc13 */
			loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(79);
			RTTS;
			RTPS;
			RTER;
		} else {
			RTHOOK(80);
			if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(81);
				tr1 = RTMS_EX_H("ERROR: Error in removing stop words, returning unchanged word list \012",68,1038158858);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(82);
				RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(83);
				RTTS;
				RTPS;
				RTER;
			} else {
				RTHOOK(84);
				if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 3L))) {
					RTHOOK(85);
					tr1 = RTMS_EX_H("ERROR: Couldn\'t determine frequency, returning empty dictionary \012",65,1778421770);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(86);
					RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
					loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(87);
					RTTS;
					RTPS;
					RTER;
				} else {
					RTHOOK(88);
					if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 4L))) {
						RTHOOK(89);
						tr1 = RTMS_EX_H("ERROR: Couldn\'t order frequency list, returning results unordered \012",67,1943140362);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
						RTHOOK(90);
						RTDBGAL(16, 0x04000000, 1, 0); /* loc16 */
						loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(91);
						RTTS;
						RTPS;
						RTER;
					}
				}
			}
		}
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(92);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(22);
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit986 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

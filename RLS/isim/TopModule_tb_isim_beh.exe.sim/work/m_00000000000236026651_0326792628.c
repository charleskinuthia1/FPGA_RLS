/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/RLSBlock.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {32, 0};
static int ng4[] = {512, 0};



static void Cont_49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 8160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9880);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 512);
    xsi_driver_vfirst_trans(t5, 0, 511);
    t10 = (t0 + 9720);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_50_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 9736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_55_2(char *t0)
{
    char t17[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;

LAB0:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 9752);
    *((int *)t2) = 1;
    t3 = (t0 + 8688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3960U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(67, ng0);

LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB11);
    t3 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB12:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 5960);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(72, ng0);

LAB25:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB26);
    t3 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB27:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 7080);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3088);
    t13 = *((char **)t12);
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t11, 32, t13, 32);
    t12 = (t17 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t17);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t11, 32, t5, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t4, 32, t17, 32);
    t12 = (t21 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t21);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(81, ng0);

LAB40:    t2 = (t0 + 2056);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB41);
    t3 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB42:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = (t0 + 2056);
    xsi_vlog_namedbase_popprocess(t2);

LAB41:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB36:
LAB30:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB26:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB21:
LAB15:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB11:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4120U);
    t3 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1024, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4600U);
    t3 = *((char **)t2);
    t2 = (t0 + 6760);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16384, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4280U);
    t3 = *((char **)t2);
    t2 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 512, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4440U);
    t3 = *((char **)t2);
    t2 = (t0 + 6600);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16384, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4120U);
    t3 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1024, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    xsi_set_current_line(68, ng0);

LAB16:    t13 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB17);
    t14 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB18:    t15 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t15);

LAB17:    t16 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t16);
    goto LAB15;

LAB19:    xsi_set_current_line(70, ng0);

LAB22:    t11 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB23);
    t12 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB24:    xsi_set_current_line(71, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB23:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB21;

LAB28:    xsi_set_current_line(73, ng0);

LAB31:    t14 = (t0 + 1464);
    xsi_vlog_namedbase_setdisablestate(t14, &&LAB32);
    t15 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t14, t15);

LAB33:    xsi_set_current_line(74, ng0);
    t16 = (t0 + 7080);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t19, 32, t20, 32);
    t22 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    t2 = (t0 + 1464);
    xsi_vlog_namedbase_popprocess(t2);

LAB32:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB30;

LAB34:    xsi_set_current_line(75, ng0);

LAB37:    t13 = (t0 + 1760);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB38);
    t14 = (t0 + 8464);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB39:    xsi_set_current_line(76, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t4, 32, t5, 32);
    t11 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t11, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5080U);
    t3 = *((char **)t2);
    t2 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 512, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5080U);
    t3 = *((char **)t2);
    t2 = (t0 + 6920);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 512, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = (t0 + 1760);
    xsi_vlog_namedbase_popprocess(t2);

LAB38:    t3 = (t0 + 8464);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB36;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 8904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6280);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2544);
    t10 = *((char **)t9);
    t9 = (t0 + 7240);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t3, 32, t5, ((int*)(t8)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 10008);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 9768);
    *((int *)t20) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t3[128];
    char t12[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 9152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6600);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6600);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2544);
    t10 = *((char **)t9);
    t9 = (t0 + 2816);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t10, 32, t11, 32);
    t9 = (t0 + 7240);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t12, 32, t14, 32);
    t16 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t3, 512, t5, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1, 1);
    t17 = (t0 + 10072);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_bit_copy(t21, 0, t3, 0, 512);
    xsi_driver_vfirst_trans(t17, 0, 511);
    t22 = (t0 + 9784);
    *((int *)t22) = 1;

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[128];
    char t12[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 9400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6760);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2544);
    t10 = *((char **)t9);
    t9 = (t0 + 2816);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t10, 32, t11, 32);
    t9 = (t0 + 7240);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t12, 32, t14, 32);
    t16 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t3, 512, t5, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1, 1);
    t17 = (t0 + 10136);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_bit_copy(t21, 0, t3, 0, 512);
    xsi_driver_vfirst_trans(t17, 0, 511);
    t22 = (t0 + 9800);
    *((int *)t22) = 1;

LAB1:    return;
}


extern void work_m_00000000000236026651_0326792628_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Cont_50_1,(void *)Always_55_2,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000000236026651_0326792628", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000000236026651_0326792628.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/RowByColumn.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {128, 0};



static void Always_41_0(char *t0)
{
    char t15[8];
    char t16[8];
    char t22[8];
    char t24[8];
    char t36[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 3072U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2200);
    t3 = *((char **)t2);
    t2 = (t0 + 4752);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t5, 32, t11, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t3, 32, t15, 32);
    t12 = (t16 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(51, ng0);

LAB24:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB25);
    t3 = (t0 + 5480);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB26:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2064);
    t5 = *((char **)t4);
    t4 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 32, 0LL);
    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB25:    t3 = (t0 + 5480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 5480);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(43, ng0);
    t13 = (t0 + 2064);
    t14 = *((char **)t13);
    t13 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 5480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);

LAB15:    t13 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB16);
    t14 = (t0 + 5480);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB17:    xsi_set_current_line(47, ng0);
    t17 = (t0 + 4592);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 1928);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    xsi_vlog_signed_multiply(t22, 32, t19, 32, t21, 32);
    t20 = (t0 + 1792);
    t23 = *((char **)t20);
    memset(t24, 0, 8);
    xsi_vlog_signed_less(t24, 32, t22, 32, t23, 32);
    t20 = (t24 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:
LAB20:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB16:    t3 = (t0 + 5480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB14;

LAB18:    xsi_set_current_line(47, ng0);

LAB21:    t30 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t30, &&LAB22);
    t31 = (t0 + 5480);
    xsi_vlog_namedbase_pushprocess(t30, t31);

LAB23:    xsi_set_current_line(48, ng0);
    t32 = (t0 + 4592);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_add(t36, 32, t34, 32, t35, 32);
    t37 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3552U);
    t3 = *((char **)t2);
    t2 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB22:    t3 = (t0 + 5480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB20;

}

static void implSig1_execute(char *t0)
{
    char t3[32];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3232U);
    t4 = *((char **)t2);
    t2 = (t0 + 3192U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 1656);
    t8 = *((char **)t7);
    t7 = (t0 + 1928);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 4592);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t3, 128, t4, ((int*)(t6)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 6600);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 6504);
    *((int *)t20) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t3[32];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3392U);
    t4 = *((char **)t2);
    t2 = (t0 + 3352U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 1656);
    t8 = *((char **)t7);
    t7 = (t0 + 1928);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 4592);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t3, 128, t4, ((int*)(t6)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 6664);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 6520);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000478364641_3274487904_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000000478364641_3274487904", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000000478364641_3274487904.didat");
	xsi_register_executes(pe);
}

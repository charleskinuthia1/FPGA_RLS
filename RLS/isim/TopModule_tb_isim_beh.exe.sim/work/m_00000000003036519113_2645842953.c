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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/scalarByVec.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static int ng4[] = {64, 0};
static int ng5[] = {2, 0};
static int ng6[] = {96, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};
static int ng11[] = {7, 0};
static int ng12[] = {128, 0};



static void Always_37_0(char *t0)
{
    char t13[8];
    char t17[8];
    char t18[8];
    char t30[8];
    char t31[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    int t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6744);
    *((int *)t2) = 1;
    t3 = (t0 + 4224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB11);
    t3 = (t0 + 4000);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB12:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2552U);
    t5 = *((char **)t4);
    t4 = (t0 + 2512U);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng1)));
    t15 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t5, ((int*)(t12)), 2, t14, 32, 1, t15, 32, 1, 1);
    t16 = (t0 + 3112);
    t19 = (t0 + 3112);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3112);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 3272);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 1040);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t27, 32, t29, 32);
    t28 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t28, 32);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 1, 1, t31, 32, 1);
    t32 = (t17 + 4);
    t6 = *((unsigned int *)t32);
    t33 = (!(t6));
    t34 = (t18 + 4);
    t7 = *((unsigned int *)t34);
    t35 = (!(t7));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 2512U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 3112);
    t15 = (t0 + 3112);
    t16 = (t15 + 72U);
    t19 = *((char **)t16);
    t20 = (t0 + 3112);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3272);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 1040);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t17, t18, t19, t22, 1, 1, t31, 32, 1);
    t28 = (t17 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t18 + 4);
    t7 = *((unsigned int *)t29);
    t35 = (!(t7));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 2512U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 3112);
    t15 = (t0 + 3112);
    t16 = (t15 + 72U);
    t19 = *((char **)t16);
    t20 = (t0 + 3112);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3272);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 1040);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t17, t18, t19, t22, 1, 1, t31, 32, 1);
    t28 = (t17 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t18 + 4);
    t7 = *((unsigned int *)t29);
    t35 = (!(t7));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 2512U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 3112);
    t15 = (t0 + 3112);
    t16 = (t15 + 72U);
    t19 = *((char **)t16);
    t20 = (t0 + 3112);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3272);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 1040);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng7)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t17, t18, t19, t22, 1, 1, t31, 32, 1);
    t28 = (t17 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t18 + 4);
    t7 = *((unsigned int *)t29);
    t35 = (!(t7));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1040);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t4, 32, t11, 32);
    t5 = (t0 + 904);
    t12 = *((char **)t5);
    t5 = (t0 + 1040);
    t14 = *((char **)t5);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t12, 32, t14, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t13, 32, t17, 32);
    t5 = (t18 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(51, ng0);

LAB25:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB23:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB11:    t3 = (t0 + 4000);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t8 = *((unsigned int *)t17);
    t9 = *((unsigned int *)t18);
    t37 = (t8 - t9);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB14;

LAB15:    t8 = *((unsigned int *)t17);
    t9 = *((unsigned int *)t18);
    t37 = (t8 - t9);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB16;

LAB17:    t8 = *((unsigned int *)t17);
    t9 = *((unsigned int *)t18);
    t37 = (t8 - t9);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB18;

LAB19:    t8 = *((unsigned int *)t17);
    t9 = *((unsigned int *)t18);
    t37 = (t8 - t9);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(49, ng0);

LAB24:    xsi_set_current_line(50, ng0);
    t15 = (t0 + 3272);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t19, 32, t20, 32);
    t21 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t21, t30, 0, 0, 32, 0LL);
    goto LAB23;

}

static void Cont_65_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 6968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 6760);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7032);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 32, 63);
    t18 = (t0 + 6776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7096);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 64, 95);
    t18 = (t0 + 6792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 96, 127);
    t18 = (t0 + 6808);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7224);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 128, 159);
    t18 = (t0 + 6824);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 160, 191);
    t18 = (t0 + 6840);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 192, 223);
    t18 = (t0 + 6856);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_65_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3112);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 224, 255);
    t18 = (t0 + 6872);
    *((int *)t18) = 1;

LAB1:    return;
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

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2232U);
    t4 = *((char **)t2);
    t2 = (t0 + 2192U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 768);
    t8 = *((char **)t7);
    t7 = (t0 + 1040);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 3272);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng12)));
    xsi_vlog_get_indexed_partselect(t3, 128, t4, ((int*)(t6)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 7480);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 6888);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000003036519113_2645842953_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_65_1,(void *)Cont_65_2,(void *)Cont_65_3,(void *)Cont_65_4,(void *)Cont_65_5,(void *)Cont_65_6,(void *)Cont_65_7,(void *)Cont_65_8,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003036519113_2645842953", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000003036519113_2645842953.didat");
	xsi_register_executes(pe);
}

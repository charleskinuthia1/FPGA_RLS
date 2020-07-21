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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/VectorAddition.v";
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



static void Always_35_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t28[8];
    char t29[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6856);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 2216U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng1)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 2976);
    t17 = (t0 + 2976);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2976);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3136);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 744);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t28, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t29, 32, 1);
    t30 = (t15 + 4);
    t6 = *((unsigned int *)t30);
    t31 = (!(t6));
    t32 = (t16 + 4);
    t7 = *((unsigned int *)t32);
    t33 = (!(t7));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 2216U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 2976);
    t17 = (t0 + 2976);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2976);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3136);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 744);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng3)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t28, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t29, 32, 1);
    t30 = (t15 + 4);
    t6 = *((unsigned int *)t30);
    t31 = (!(t6));
    t32 = (t16 + 4);
    t7 = *((unsigned int *)t32);
    t33 = (!(t7));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 2216U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 2976);
    t17 = (t0 + 2976);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2976);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3136);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 744);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng5)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t28, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t29, 32, 1);
    t30 = (t15 + 4);
    t6 = *((unsigned int *)t30);
    t31 = (!(t6));
    t32 = (t16 + 4);
    t7 = *((unsigned int *)t32);
    t33 = (!(t7));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 2216U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t13, 32, t3, ((int*)(t5)), 2, t11, 32, 1, t12, 32, 1, 1);
    t14 = (t0 + 2976);
    t17 = (t0 + 2976);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2976);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3136);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 744);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t25, 32, t27, 32);
    t26 = ((char*)((ng7)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t28, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t29, 32, 1);
    t30 = (t15 + 4);
    t6 = *((unsigned int *)t30);
    t31 = (!(t6));
    t32 = (t16 + 4);
    t7 = *((unsigned int *)t32);
    t33 = (!(t7));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t4, 32, t11, 32);
    t5 = (t0 + 608);
    t12 = *((char **)t5);
    t5 = (t0 + 744);
    t14 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t12, 32, t14, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t13, 32, t15, 32);
    t5 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB12;

LAB13:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB14;

LAB15:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB16;

LAB17:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t17 = (t0 + 3136);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t19, 32, t20, 32);
    t21 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t21, t28, 0, 0, 32, 0LL);
    goto LAB21;

}

static void Cont_59_1(char *t0)
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

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7096);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 6872);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_2(char *t0)
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

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 32, 63);
    t18 = (t0 + 6888);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_3(char *t0)
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

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7224);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 64, 95);
    t18 = (t0 + 6904);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_4(char *t0)
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

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 96, 127);
    t18 = (t0 + 6920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_5(char *t0)
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

LAB0:    t1 = (t0 + 5296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 128, 159);
    t18 = (t0 + 6936);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_6(char *t0)
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

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 160, 191);
    t18 = (t0 + 6952);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_7(char *t0)
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

LAB0:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 192, 223);
    t18 = (t0 + 6968);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_8(char *t0)
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

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2976);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t0 + 7544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 224, 255);
    t18 = (t0 + 6984);
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

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1776U);
    t4 = *((char **)t2);
    t2 = (t0 + 1736U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = (t0 + 744);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 3136);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng12)));
    xsi_vlog_get_indexed_partselect(t3, 128, t4, ((int*)(t6)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 7608);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 7000);
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

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t2 = (t0 + 1896U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = (t0 + 744);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 3136);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t10, 32, t12, 32);
    t14 = ((char*)((ng12)));
    xsi_vlog_get_indexed_partselect(t3, 128, t4, ((int*)(t6)), 2, t13, 32, 1, t14, 32, 1, 1);
    t15 = (t0 + 7672);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t15, 0, 127);
    t20 = (t0 + 7016);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000001878713688_3152144638_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Cont_59_1,(void *)Cont_59_2,(void *)Cont_59_3,(void *)Cont_59_4,(void *)Cont_59_5,(void *)Cont_59_6,(void *)Cont_59_7,(void *)Cont_59_8,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000001878713688_3152144638", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000001878713688_3152144638.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/transmitter.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {14U, 0U};
static unsigned int ng12[] = {15U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {3U, 0U};
static int ng15[] = {4, 0};



static void NetDecl_35_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t4, 32, t6, 32);
    t5 = (t0 + 4528);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t5, 0, 0U);
    t20 = (t0 + 4416);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t9[8];
    char t19[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4432);
    *((int *)t2) = 1;
    t3 = (t0 + 3880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB10:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB8:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t9 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    t21 = (t14 & 1);
    *((unsigned int *)t5) = t21;
    t7 = (t0 + 1960U);
    t8 = *((char **)t7);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t8);
    t24 = (t22 & t23);
    *((unsigned int *)t19) = t24;
    t7 = (t9 + 4);
    t15 = (t8 + 4);
    t16 = (t19 + 4);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t15);
    t27 = (t25 | t26);
    *((unsigned int *)t16) = t27;
    t28 = *((unsigned int *)t16);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB15;

LAB16:
LAB17:    t20 = (t19 + 4);
    t48 = *((unsigned int *)t20);
    t49 = (~(t48));
    t50 = *((unsigned int *)t19);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB13:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB21:    t5 = ((char*)((ng3)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t40 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng9)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng11)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng13)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng14)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t40 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB85;

LAB86:
LAB87:
LAB48:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t15 = (t0 + 2680);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(44, ng0);

LAB14:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB13;

LAB15:    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t16);
    *((unsigned int *)t19) = (t30 | t31);
    t17 = (t9 + 4);
    t18 = (t8 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (~(t36));
    t38 = *((unsigned int *)t18);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t44 & t42);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t43);
    t46 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t46 & t42);
    t47 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t47 & t43);
    goto LAB17;

LAB18:    xsi_set_current_line(49, ng0);
    t53 = (t0 + 2520);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng1)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_rshift(t57, 8, t55, 8, t56, 32);
    t58 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 8, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(52, ng0);
    t6 = (t0 + 1480U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB48;

LAB24:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB48;

LAB26:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB48;

LAB28:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB48;

LAB30:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB48;

LAB32:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB64;

LAB65:
LAB66:    goto LAB48;

LAB34:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB48;

LAB36:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB48;

LAB38:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB48;

LAB40:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB48;

LAB42:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB79;

LAB80:
LAB81:    goto LAB48;

LAB44:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1960U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB48;

LAB49:    xsi_set_current_line(52, ng0);
    t8 = ((char*)((ng4)));
    t15 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t15, t8, 0, 0, 4, 0LL);
    goto LAB51;

LAB52:    xsi_set_current_line(53, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB54;

LAB55:    xsi_set_current_line(54, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB57;

LAB58:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng7)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB60;

LAB61:    xsi_set_current_line(56, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB63;

LAB64:    xsi_set_current_line(57, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB66;

LAB67:    xsi_set_current_line(58, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB69;

LAB70:    xsi_set_current_line(59, ng0);
    t6 = ((char*)((ng11)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB72;

LAB73:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng12)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB75;

LAB76:    xsi_set_current_line(61, ng0);
    t6 = ((char*)((ng13)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB78;

LAB79:    xsi_set_current_line(62, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB81;

LAB82:    xsi_set_current_line(63, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB84;

LAB85:    xsi_set_current_line(64, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB87;

}

static void Cont_68_2(char *t0)
{
    char t6[8];
    char t13[8];
    char t25[8];
    char t34[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;

LAB0:    t1 = (t0 + 4096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB6;

LAB7:    t10 = (t0 + 2360);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 2520);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t25);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t13 + 4);
    t39 = (t25 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB9;

LAB10:
LAB11:    t67 = *((unsigned int *)t6);
    t68 = *((unsigned int *)t34);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t6 + 4);
    t71 = (t34 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB12;

LAB13:
LAB14:    t94 = (t0 + 4592);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memset(t98, 0, 8);
    t99 = 1U;
    t100 = t99;
    t101 = (t66 + 4);
    t102 = *((unsigned int *)t66);
    t99 = (t99 & t102);
    t103 = *((unsigned int *)t101);
    t100 = (t100 & t103);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t105 | t99);
    t106 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t106 | t100);
    xsi_driver_vfirst_trans(t94, 0, 0);
    t107 = (t0 + 4448);
    *((int *)t107) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t13 + 4);
    t49 = (t25 + 4);
    t50 = *((unsigned int *)t13);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t25);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB11;

LAB12:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t6 + 4);
    t81 = (t34 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t6);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t34);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB14;

}


extern void work_m_00000000002396119524_4065802487_init()
{
	static char *pe[] = {(void *)NetDecl_35_0,(void *)Always_37_1,(void *)Cont_68_2};
	xsi_register_didat("work_m_00000000002396119524_4065802487", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000002396119524_4065802487.didat");
	xsi_register_executes(pe);
}

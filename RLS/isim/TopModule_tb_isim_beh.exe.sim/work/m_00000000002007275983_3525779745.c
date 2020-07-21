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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/TopModule_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "SIM_RLS.txt";
static const char *ng4 = "w";
static const char *ng5 = "TIME::%g";
static int ng6[] = {1023, 0};
static const char *ng7 = "TIME::%g\t::Chack state";
static int ng8[] = {192, 0};
static int ng9[] = {398, 0};
static const char *ng10 = "%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n";
static int ng11[] = {32, 0};
static int ng12[] = {16, 0, 0, 0};
static int ng13[] = {64, 0};
static int ng14[] = {96, 0};
static int ng15[] = {128, 0};
static int ng16[] = {160, 0};
static int ng17[] = {224, 0};
static const char *ng18 = "TIME=%g::BLOCK:%g\n'::x[15]=%g= %h";
static const char *ng19 = "Check the file 'SIM_RLS.txt\n'";



static void Always_47_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3200);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1992);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Initial_50_1(char *t0)
{
    char t4[8];
    char t5[16];
    char t23[16];
    char t27[8];
    char t28[16];
    char t29[8];
    char t37[16];
    char t42[8];
    char t43[16];
    char t44[8];
    char t52[16];
    char t57[8];
    char t58[16];
    char t59[8];
    char t67[16];
    char t72[8];
    char t73[16];
    char t74[8];
    char t82[16];
    char t87[8];
    char t88[16];
    char t89[8];
    char t97[16];
    char t102[8];
    char t103[16];
    char t104[8];
    char t112[16];
    char t117[8];
    char t118[16];
    char t119[8];
    char t127[16];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    double t22;
    double t24;
    double t25;
    double t26;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    double t36;
    char *t38;
    double t39;
    double t40;
    double t41;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    double t51;
    char *t53;
    double t54;
    double t55;
    double t56;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    double t66;
    char *t68;
    double t69;
    double t70;
    double t71;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    double t81;
    char *t83;
    double t84;
    double t85;
    double t86;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    double t96;
    char *t98;
    double t99;
    double t100;
    double t101;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    double t111;
    char *t113;
    double t114;
    double t115;
    double t116;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    double t126;
    char *t128;
    double t129;
    double t130;
    double t131;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t5, 64);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(60, ng0);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t5, 64);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t0 + 5748);
    *((int *)t10) = t9;

LAB7:    t11 = (t0 + 5748);
    if (*((int *)t11) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(65, ng0);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t5, 64);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t0 + 5752);
    *((int *)t10) = t9;

LAB12:    t11 = (t0 + 5752);
    if (*((int *)t11) > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t10));
    goto LAB1;

LAB8:    xsi_set_current_line(62, ng0);

LAB10:    xsi_set_current_line(63, ng0);
    t12 = (t0 + 3976);
    *((int *)t12) = 1;
    t13 = (t0 + 3672);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    t2 = (t0 + 5748);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB13:    xsi_set_current_line(68, ng0);

LAB15:    xsi_set_current_line(69, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t0 + 5756);
    *((int *)t18) = t17;

LAB16:    t19 = (t0 + 5756);
    if (*((int *)t19) > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t0 + 1592U);
    t12 = *((char **)t11);
    t11 = (t0 + 1552U);
    t13 = (t11 + 72U);
    t18 = *((char **)t13);
    t19 = ((char*)((ng1)));
    t20 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t4, 32, t12, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1, 1);
    xsi_vlogtype_sign_extend(t5, 64, t4, 32);
    t22 = xsi_vlog_convert_to_real(t5, 32, 1);
    t21 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t23, 64, t21, 32);
    t24 = xsi_vlog_convert_to_real(t23, 32, 1);
    t25 = xsi_vlog_double_power(2.0000000000000000, t24);
    t26 = (t22 * t25);
    *((double *)t27) = t26;
    t30 = (t0 + 1592U);
    t31 = *((char **)t30);
    t30 = (t0 + 1552U);
    t32 = (t30 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng11)));
    t35 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t29, 32, t31, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1, 1);
    xsi_vlogtype_sign_extend(t28, 64, t29, 32);
    t36 = xsi_vlog_convert_to_real(t28, 32, 1);
    t38 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t37, 64, t38, 32);
    t39 = xsi_vlog_convert_to_real(t37, 32, 1);
    t40 = xsi_vlog_double_power(2.0000000000000000, t39);
    t41 = (t36 * t40);
    *((double *)t42) = t41;
    t45 = (t0 + 1592U);
    t46 = *((char **)t45);
    t45 = (t0 + 1552U);
    t47 = (t45 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng13)));
    t50 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t44, 32, t46, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1, 1);
    xsi_vlogtype_sign_extend(t43, 64, t44, 32);
    t51 = xsi_vlog_convert_to_real(t43, 32, 1);
    t53 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t52, 64, t53, 32);
    t54 = xsi_vlog_convert_to_real(t52, 32, 1);
    t55 = xsi_vlog_double_power(2.0000000000000000, t54);
    t56 = (t51 * t55);
    *((double *)t57) = t56;
    t60 = (t0 + 1592U);
    t61 = *((char **)t60);
    t60 = (t0 + 1552U);
    t62 = (t60 + 72U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng14)));
    t65 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t59, 32, t61, ((int*)(t63)), 2, t64, 32, 1, t65, 32, 1, 1);
    xsi_vlogtype_sign_extend(t58, 64, t59, 32);
    t66 = xsi_vlog_convert_to_real(t58, 32, 1);
    t68 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t67, 64, t68, 32);
    t69 = xsi_vlog_convert_to_real(t67, 32, 1);
    t70 = xsi_vlog_double_power(2.0000000000000000, t69);
    t71 = (t66 * t70);
    *((double *)t72) = t71;
    t75 = (t0 + 1592U);
    t76 = *((char **)t75);
    t75 = (t0 + 1552U);
    t77 = (t75 + 72U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng15)));
    t80 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t74, 32, t76, ((int*)(t78)), 2, t79, 32, 1, t80, 32, 1, 1);
    xsi_vlogtype_sign_extend(t73, 64, t74, 32);
    t81 = xsi_vlog_convert_to_real(t73, 32, 1);
    t83 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t82, 64, t83, 32);
    t84 = xsi_vlog_convert_to_real(t82, 32, 1);
    t85 = xsi_vlog_double_power(2.0000000000000000, t84);
    t86 = (t81 * t85);
    *((double *)t87) = t86;
    t90 = (t0 + 1592U);
    t91 = *((char **)t90);
    t90 = (t0 + 1552U);
    t92 = (t90 + 72U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng16)));
    t95 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t89, 32, t91, ((int*)(t93)), 2, t94, 32, 1, t95, 32, 1, 1);
    xsi_vlogtype_sign_extend(t88, 64, t89, 32);
    t96 = xsi_vlog_convert_to_real(t88, 32, 1);
    t98 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t97, 64, t98, 32);
    t99 = xsi_vlog_convert_to_real(t97, 32, 1);
    t100 = xsi_vlog_double_power(2.0000000000000000, t99);
    t101 = (t96 * t100);
    *((double *)t102) = t101;
    t105 = (t0 + 1592U);
    t106 = *((char **)t105);
    t105 = (t0 + 1552U);
    t107 = (t105 + 72U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng8)));
    t110 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t104, 32, t106, ((int*)(t108)), 2, t109, 32, 1, t110, 32, 1, 1);
    xsi_vlogtype_sign_extend(t103, 64, t104, 32);
    t111 = xsi_vlog_convert_to_real(t103, 32, 1);
    t113 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t112, 64, t113, 32);
    t114 = xsi_vlog_convert_to_real(t112, 32, 1);
    t115 = xsi_vlog_double_power(2.0000000000000000, t114);
    t116 = (t111 * t115);
    *((double *)t117) = t116;
    t120 = (t0 + 1592U);
    t121 = *((char **)t120);
    t120 = (t0 + 1552U);
    t122 = (t120 + 72U);
    t123 = *((char **)t122);
    t124 = ((char*)((ng17)));
    t125 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t119, 32, t121, ((int*)(t123)), 2, t124, 32, 1, t125, 32, 1, 1);
    xsi_vlogtype_sign_extend(t118, 64, t119, 32);
    t126 = xsi_vlog_convert_to_real(t118, 32, 1);
    t128 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t127, 64, t128, 32);
    t129 = xsi_vlog_convert_to_real(t127, 32, 1);
    t130 = xsi_vlog_double_power(2.0000000000000000, t129);
    t131 = (t126 * t130);
    *((double *)t132) = t131;
    xsi_vlogfile_fwrite(*((unsigned int *)t10), 0, 0, 1, ng10, 9, t0, (char)114, t27, 64, (char)114, t42, 64, (char)114, t57, 64, (char)114, t72, 64, (char)114, t87, 64, (char)114, t102, 64, (char)114, t117, 64, (char)114, t132, 64);
    xsi_set_current_line(76, ng0);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2472);
    t10 = (t3 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1592U);
    t13 = *((char **)t12);
    t12 = (t0 + 1552U);
    t18 = (t12 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    t21 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t4, 32, t13, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1, 1);
    xsi_vlogtype_sign_extend(t23, 64, t4, 32);
    t22 = xsi_vlog_convert_to_real(t23, 32, 1);
    t30 = ((char*)((ng12)));
    xsi_vlog_signed_unary_minus(t28, 64, t30, 32);
    t24 = xsi_vlog_convert_to_real(t28, 32, 1);
    t25 = xsi_vlog_double_power(2.0000000000000000, t24);
    t26 = (t22 * t25);
    *((double *)t27) = t26;
    t31 = (t0 + 1592U);
    t32 = *((char **)t31);
    t31 = (t0 + 1552U);
    t33 = (t31 + 72U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng1)));
    t38 = ((char*)((ng11)));
    xsi_vlog_get_indexed_partselect(t29, 32, t32, ((int*)(t34)), 2, t35, 32, 1, t38, 32, 1, 1);
    xsi_vlogfile_write(1, 0, 0, ng18, 5, t0, (char)118, t5, 64, (char)119, t11, 32, (char)114, t27, 64, (char)118, t29, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t10, 32, t11, 32);
    t12 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);
    t2 = (t0 + 5752);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB12;

LAB17:    xsi_set_current_line(69, ng0);

LAB19:    xsi_set_current_line(70, ng0);
    t20 = (t0 + 3992);
    *((int *)t20) = 1;
    t21 = (t0 + 3672);
    *((char **)t21) = t20;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    t2 = (t0 + 5756);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB16;

}


extern void work_m_00000000002007275983_3525779745_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Initial_50_1};
	xsi_register_didat("work_m_00000000002007275983_3525779745", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000002007275983_3525779745.didat");
	xsi_register_executes(pe);
}

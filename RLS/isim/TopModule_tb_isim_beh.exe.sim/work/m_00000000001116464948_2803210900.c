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
static const char *ng0 = "C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/Updatex.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_46_0(char *t0)
{
    char t15[8];
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

LAB0:    t1 = (t0 + 6496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6816);
    *((int *)t2) = 1;
    t3 = (t0 + 6528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);

LAB10:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(56, ng0);

LAB17:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t11, 32);
    t5 = (t15 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(61, ng0);

LAB22:    t2 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB23);
    t3 = (t0 + 6304);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB24:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1904);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t11, 32);
    t5 = (t15 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(67, ng0);

LAB29:    t2 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB30);
    t3 = (t0 + 6304);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB31:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 4056U);
    t5 = *((char **)t4);
    t4 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 256, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB30:    t3 = (t0 + 6304);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB27:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB23:    t3 = (t0 + 6304);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB20:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(54, ng0);

LAB14:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB15);
    t12 = (t0 + 6304);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB16:    xsi_set_current_line(55, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4776);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB15:    t3 = (t0 + 6304);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB13;

LAB18:    xsi_set_current_line(57, ng0);

LAB21:    xsi_set_current_line(58, ng0);
    t12 = (t0 + 3736U);
    t13 = *((char **)t12);
    t12 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 5416);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 32, 0LL);
    goto LAB20;

LAB25:    xsi_set_current_line(63, ng0);

LAB28:    xsi_set_current_line(64, ng0);
    t12 = (t0 + 3896U);
    t13 = *((char **)t12);
    t12 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 5576);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 32, 0LL);
    goto LAB27;

}


extern void work_m_00000000001116464948_2803210900_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000001116464948_2803210900", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000001116464948_2803210900.didat");
	xsi_register_executes(pe);
}

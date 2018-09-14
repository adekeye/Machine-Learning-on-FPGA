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
static const char *ng0 = "C:/Users/olaolu-Goke/Desktop/CNN/CNN Verilog/CNN Verilog Phase 4/Filter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};



static void Initial_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(50, ng0);

LAB2:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t23 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t23 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t23 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t23 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 1, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

}

static void Always_62_1(char *t0)
{
    char t13[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);

LAB9:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 9, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(66, ng0);

LAB13:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2088);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2088);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 9, t11, t15, t18, 1, 1, t20, 4, 2);
    t19 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 9, 0LL);
    goto LAB12;

}


extern void work_m_00000000002819932201_0536025237_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_62_1};
	xsi_register_didat("work_m_00000000002819932201_0536025237", "isim/tb_isim_beh.exe.sim/work/m_00000000002819932201_0536025237.didat");
	xsi_register_executes(pe);
}

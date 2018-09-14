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
static const char *ng0 = "C:/Users/olaolu-Goke/Desktop/CNN/CNN Verilog/CNN Verilog Phase 4/AddressM1.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Cont_32_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 9, t4, 9, t7, 9);
    t9 = (t0 + 5800);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 511U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 8);
    t22 = (t0 + 5672);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 9, t4, 9, t7, 9);
    t9 = (t0 + 5864);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 511U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 8);
    t22 = (t0 + 5688);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 18, t4, 9, t5, 9);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 18, t3, 9, t6, 18);
    t2 = (t0 + 5928);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 262143U;
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
    xsi_driver_vfirst_trans(t2, 0, 17);
    t20 = (t0 + 5704);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_37_3(char *t0)
{
    char t14[8];
    char t15[8];
    char t29[8];
    char t38[8];
    char t39[8];
    char t50[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
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

LAB7:    xsi_set_current_line(45, ng0);
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
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 9, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t13, 9, t12, 32);
    memset(t15, 0, 8);
    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB15;

LAB14:    t17 = (t14 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t11) < *((unsigned int *)t14))
        goto LAB16;

LAB17:    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t15);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1528U);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t11, 9, t5, 32);
    memset(t15, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB24:    t13 = (t14 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t14))
        goto LAB26;

LAB27:    t17 = (t15 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(57, ng0);

LAB33:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB31:
LAB21:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t4, 9, t5, 9);
    t2 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t14, 32, t2, 32);
    memset(t29, 0, 8);
    t11 = (t3 + 4);
    t12 = (t15 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t31 = (~(t24));
    t32 = (t21 & t31);
    if (t32 != 0)
        goto LAB37;

LAB34:    if (t24 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t29) = 1;

LAB37:    t16 = (t29 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB12;

LAB15:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(48, ng0);
    t25 = (t0 + 3208);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t27, 9, t28, 32);
    t30 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 9, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB25:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(54, ng0);

LAB32:    xsi_set_current_line(55, ng0);
    t18 = (t0 + 3368);
    t19 = (t18 + 56U);
    t25 = *((char **)t19);
    t26 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t25, 9, t26, 32);
    t27 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 9, 0LL);
    goto LAB31;

LAB36:    t13 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);

LAB41:    xsi_set_current_line(64, ng0);
    t17 = (t0 + 3528);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t25 = (t0 + 2008U);
    t26 = *((char **)t25);
    t25 = (t0 + 1848U);
    t27 = *((char **)t25);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 9, t26, 9, t27, 9);
    memset(t39, 0, 8);
    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB43;

LAB42:    t28 = (t38 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t19) < *((unsigned int *)t38))
        goto LAB44;

LAB45:    t40 = (t39 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);

LAB51:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);
    t5 = (t0 + 1528U);
    t12 = *((char **)t5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 9, t11, 9, t12, 9);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB53;

LAB52:    t13 = (t14 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) < *((unsigned int *)t14))
        goto LAB54;

LAB55:    t17 = (t15 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(73, ng0);

LAB61:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB59:
LAB49:    goto LAB40;

LAB43:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t39) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(64, ng0);

LAB50:    xsi_set_current_line(65, ng0);
    t46 = (t0 + 3528);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng2)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 32, t48, 9, t49, 32);
    t51 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 9, 0LL);
    goto LAB49;

LAB53:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(70, ng0);

LAB60:    xsi_set_current_line(71, ng0);
    t18 = (t0 + 3688);
    t19 = (t18 + 56U);
    t25 = *((char **)t19);
    t26 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t25, 9, t26, 32);
    t27 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 9, 0LL);
    goto LAB59;

}


extern void work_m_00000000001477677550_2447195422_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1,(void *)Cont_34_2,(void *)Always_37_3};
	xsi_register_didat("work_m_00000000001477677550_2447195422", "isim/tb_isim_beh.exe.sim/work/m_00000000001477677550_2447195422.didat");
	xsi_register_executes(pe);
}

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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
static const char *ng1 = "/home/ise/22201151_VLSI_LAB-Final/CPU_SET1/control_unit_tb.vhd";



void work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, unsigned int t7, unsigned int t8, char *t9, unsigned int t10, unsigned int t11, char *t12, unsigned int t13, unsigned int t14, char *t15, char *t16, unsigned char t17, char *t18, char *t19)
{
    char t21[56];
    char t22[16];
    char t27[16];
    char t30[16];
    char t33[16];
    char t57[16];
    char t58[16];
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t28;
    int t29;
    char *t31;
    int t32;
    char *t34;
    int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    int64 t54;
    char *t55;
    char *t56;
    unsigned int t59;

LAB0:    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 3;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 3);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t27 + 0U);
    t28 = (t24 + 0U);
    *((int *)t28) = 2;
    t28 = (t24 + 4U);
    *((int *)t28) = 0;
    t28 = (t24 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 2);
    t26 = (t29 * -1);
    t26 = (t26 + 1);
    t28 = (t24 + 12U);
    *((unsigned int *)t28) = t26;
    t28 = (t30 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = 3;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - 3);
    t26 = (t32 * -1);
    t26 = (t26 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t26;
    t31 = (t33 + 0U);
    t34 = (t31 + 0U);
    *((int *)t34) = 2;
    t34 = (t31 + 4U);
    *((int *)t34) = 0;
    t34 = (t31 + 8U);
    *((int *)t34) = -1;
    t35 = (0 - 2);
    t26 = (t35 * -1);
    t26 = (t26 + 1);
    t34 = (t31 + 12U);
    *((unsigned int *)t34) = t26;
    t34 = (t21 + 4U);
    t36 = (t15 != 0);
    if (t36 == 1)
        goto LAB3;

LAB2:    t37 = (t21 + 12U);
    *((char **)t37) = t30;
    t38 = (t21 + 20U);
    t39 = (t16 != 0);
    if (t39 == 1)
        goto LAB5;

LAB4:    t40 = (t21 + 28U);
    *((char **)t40) = t33;
    t41 = (t21 + 36U);
    *((unsigned char *)t41) = t17;
    t42 = (t21 + 37U);
    t43 = (t18 != 0);
    if (t43 == 1)
        goto LAB7;

LAB6:    t44 = (t21 + 45U);
    *((char **)t44) = t19;
    t26 = (0 + t3);
    t45 = (t5 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t22 + 12U);
    t50 = *((unsigned int *)t49);
    t50 = (t50 * 1U);
    memcpy(t48, t15, t50);
    t51 = (t22 + 12U);
    t52 = *((unsigned int *)t51);
    t53 = (1U * t52);
    xsi_driver_first_trans_delta(t5, t26, t53, 0LL);
    t54 = (10 * 1000LL);
    xsi_process_wait(t1, t54);

LAB11:    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t28 = (t24 + 1888U);
    *((unsigned int *)t28) = 1U;
    t31 = (t1 + 88U);
    t45 = *((char **)t31);
    t46 = (t45 + 0U);
    getcontext(t46);
    t47 = (t1 + 88U);
    t48 = *((char **)t47);
    t49 = (t48 + 1888U);
    t26 = *((unsigned int *)t49);
    if (t26 == 1)
        goto LAB12;

LAB13:    t51 = (t1 + 88U);
    t55 = *((char **)t51);
    t56 = (t55 + 1888U);
    *((unsigned int *)t56) = 3U;

LAB9:
LAB10:
LAB8:    t23 = (t6 + 40U);
    t24 = *((char **)t23);
    t23 = (t24 + t8);
    t24 = (t27 + 12U);
    t26 = *((unsigned int *)t24);
    t26 = (t26 * 1U);
    t28 = (t33 + 12U);
    t50 = *((unsigned int *)t28);
    t50 = (t50 * 1U);
    t36 = 1;
    if (t26 == t50)
        goto LAB16;

LAB17:    t36 = 0;

LAB18:    if (t36 == 0)
        goto LAB14;

LAB15:    t23 = (t9 + 40U);
    t24 = *((char **)t23);
    t23 = (t24 + t11);
    t36 = *((unsigned char *)t23);
    t39 = (t36 == t17);
    if (t39 == 0)
        goto LAB22;

LAB23:    t23 = (t12 + 40U);
    t24 = *((char **)t23);
    t23 = (t24 + t14);
    t36 = *((unsigned char *)t23);
    t39 = (t36 == t17);
    if (t39 == 0)
        goto LAB24;

LAB25:
LAB1:    return;
LAB3:    *((char **)t34) = t15;
    goto LAB2;

LAB5:    *((char **)t38) = t16;
    goto LAB4;

LAB7:    *((char **)t42) = t18;
    goto LAB6;

LAB12:    xsi_saveStackAndSuspend(t1);
    goto LAB13;

LAB14:    t46 = (t0 + 5089);
    t49 = ((STD_STANDARD) + 984);
    t51 = (t58 + 0U);
    t55 = (t51 + 0U);
    *((int *)t55) = 1;
    t55 = (t51 + 4U);
    *((int *)t55) = 15;
    t55 = (t51 + 8U);
    *((int *)t55) = 1;
    t25 = (15 - 1);
    t53 = (t25 * 1);
    t53 = (t53 + 1);
    t55 = (t51 + 12U);
    *((unsigned int *)t55) = t53;
    t48 = xsi_base_array_concat(t48, t57, t49, (char)97, t18, t19, (char)97, t46, t58, (char)101);
    t55 = (t19 + 12U);
    t53 = *((unsigned int *)t55);
    t53 = (t53 * 1U);
    t59 = (t53 + 15U);
    xsi_report(t48, t59, (unsigned char)2);
    goto LAB15;

LAB16:    t52 = 0;

LAB19:    if (t52 < t26)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t31 = (t23 + t52);
    t45 = (t16 + t52);
    if (*((unsigned char *)t31) != *((unsigned char *)t45))
        goto LAB17;

LAB21:    t52 = (t52 + 1);
    goto LAB19;

LAB22:    t24 = (t0 + 5104);
    t45 = ((STD_STANDARD) + 984);
    t46 = (t58 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 14;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t25 = (14 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t26;
    t31 = xsi_base_array_concat(t31, t57, t45, (char)97, t18, t19, (char)97, t24, t58, (char)101);
    t47 = (t19 + 12U);
    t26 = *((unsigned int *)t47);
    t26 = (t26 * 1U);
    t50 = (t26 + 14U);
    xsi_report(t31, t50, (unsigned char)2);
    goto LAB23;

LAB24:    t24 = (t0 + 5118);
    t45 = ((STD_STANDARD) + 984);
    t46 = (t58 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 12;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t25 = (12 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t26;
    t31 = xsi_base_array_concat(t31, t57, t45, (char)97, t18, t19, (char)97, t24, t58, (char)101);
    t47 = (t19 + 12U);
    t26 = *((unsigned int *)t47);
    t26 = (t26 * 1U);
    t50 = (t26 + 12U);
    xsi_report(t31, t50, (unsigned char)2);
    goto LAB25;

}

static void work_a_3455515378_3553469787_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t12;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5130);
    t10 = (t0 + 5134);
    t12 = (t0 + 5137);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)3, t12, t14);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5140);
    t10 = (t0 + 5144);
    t12 = (t0 + 5147);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)3, t12, t14);
    xsi_set_current_line(40, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5150);
    t10 = (t0 + 5154);
    t12 = (t0 + 5157);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)3, t12, t14);
    xsi_set_current_line(41, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5160);
    t10 = (t0 + 5164);
    t12 = (t0 + 5167);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)3, t12, t14);
    xsi_set_current_line(42, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5170);
    t10 = (t0 + 5174);
    t12 = (t0 + 5177);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 2;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (2 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)3, t12, t14);
    xsi_set_current_line(43, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5179);
    t10 = (t0 + 5183);
    t12 = (t0 + 5186);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 8;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (8 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)2, t12, t14);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5194);
    t10 = (t0 + 5198);
    t12 = (t0 + 5201);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 11;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (11 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)2, t12, t14);
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 992U);
    t4 = (t0 + 3176);
    t5 = (t0 + 1152U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 1472U);
    t8 = (t0 + 5212);
    t10 = (t0 + 5216);
    t12 = (t0 + 5219);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 11;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (11 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    work_a_3455515378_3553469787_sub_4229922849666231807_3396091961(t0, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, 0U, 0U, t7, 0U, 0U, t8, t10, (unsigned char)2, t12, t14);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 5230);
    xsi_report(t2, 24U, (unsigned char)0);
    xsi_set_current_line(47, ng1);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_3455515378_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3455515378_3553469787_p_0};
	static char *se[] = {(void *)work_a_3455515378_3553469787_sub_4229922849666231807_3396091961};
	xsi_register_didat("work_a_3455515378_3553469787", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

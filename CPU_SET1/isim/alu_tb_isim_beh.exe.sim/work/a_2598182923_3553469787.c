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
static const char *ng1 = "/home/ise/22201151_VLSI_LAB-Final/CPU_SET1/alu_tb.vhd";



void work_a_2598182923_3553469787_sub_886856185517815241_3491306965(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, char *t7)
{
    char t9[88];
    char t10[16];
    char t15[16];
    char t18[16];
    char t21[16];
    char t49[16];
    char t50[16];
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    int t17;
    char *t19;
    int t20;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int64 t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t51;
    unsigned int t52;

LAB0:    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t15 + 0U);
    t16 = (t12 + 0U);
    *((int *)t16) = 7;
    t16 = (t12 + 4U);
    *((int *)t16) = 0;
    t16 = (t12 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - 7);
    t14 = (t17 * -1);
    t14 = (t14 + 1);
    t16 = (t12 + 12U);
    *((unsigned int *)t16) = t14;
    t16 = (t18 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 2;
    t19 = (t16 + 4U);
    *((int *)t19) = 0;
    t19 = (t16 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 2);
    t14 = (t20 * -1);
    t14 = (t14 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t14;
    t19 = (t21 + 0U);
    t22 = (t19 + 0U);
    *((int *)t22) = 7;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 7);
    t14 = (t23 * -1);
    t14 = (t14 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t14;
    t22 = (t9 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t9 + 12U);
    *((char **)t25) = t10;
    t26 = (t9 + 20U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB5;

LAB4:    t28 = (t9 + 28U);
    *((char **)t28) = t15;
    t29 = (t9 + 36U);
    t30 = (t4 != 0);
    if (t30 == 1)
        goto LAB7;

LAB6:    t31 = (t9 + 44U);
    *((char **)t31) = t18;
    t32 = (t9 + 52U);
    t33 = (t5 != 0);
    if (t33 == 1)
        goto LAB9;

LAB8:    t34 = (t9 + 60U);
    *((char **)t34) = t21;
    t35 = (t9 + 68U);
    t36 = (t6 != 0);
    if (t36 == 1)
        goto LAB11;

LAB10:    t37 = (t9 + 76U);
    *((char **)t37) = t7;
    t38 = (t0 + 3048);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t0 + 4968U);
    t44 = (t43 + 12U);
    t14 = *((unsigned int *)t44);
    t14 = (t14 * 1U);
    memcpy(t42, t2, t14);
    xsi_driver_first_trans_fast(t38);
    t11 = (t0 + 3112);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t19 = (t16 + 56U);
    t38 = *((char **)t19);
    t39 = (t0 + 4968U);
    t40 = (t39 + 12U);
    t14 = *((unsigned int *)t40);
    t14 = (t14 * 1U);
    memcpy(t38, t3, t14);
    xsi_driver_first_trans_fast(t11);
    t11 = (t0 + 3176);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t19 = (t16 + 56U);
    t38 = *((char **)t19);
    t39 = (t0 + 4984U);
    t40 = (t39 + 12U);
    t14 = *((unsigned int *)t40);
    t14 = (t14 * 1U);
    memcpy(t38, t4, t14);
    xsi_driver_first_trans_fast(t11);
    t45 = (10 * 1000LL);
    xsi_process_wait(t1, t45);

LAB15:    t11 = (t1 + 88U);
    t12 = *((char **)t11);
    t16 = (t12 + 1888U);
    *((unsigned int *)t16) = 1U;
    t19 = (t1 + 88U);
    t38 = *((char **)t19);
    t39 = (t38 + 0U);
    getcontext(t39);
    t40 = (t1 + 88U);
    t41 = *((char **)t40);
    t42 = (t41 + 1888U);
    t14 = *((unsigned int *)t42);
    if (t14 == 1)
        goto LAB16;

LAB17:    t43 = (t1 + 88U);
    t44 = *((char **)t43);
    t46 = (t44 + 1888U);
    *((unsigned int *)t46) = 3U;

LAB13:
LAB14:
LAB12:    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t11 = (t0 + 5000U);
    t16 = (t11 + 12U);
    t14 = *((unsigned int *)t16);
    t14 = (t14 * 1U);
    t19 = (t21 + 12U);
    t47 = *((unsigned int *)t19);
    t47 = (t47 * 1U);
    t24 = 1;
    if (t14 == t47)
        goto LAB20;

LAB21:    t24 = 0;

LAB22:    if (t24 == 0)
        goto LAB18;

LAB19:
LAB1:    return;
LAB3:    *((char **)t22) = t2;
    goto LAB2;

LAB5:    *((char **)t26) = t3;
    goto LAB4;

LAB7:    *((char **)t29) = t4;
    goto LAB6;

LAB9:    *((char **)t32) = t5;
    goto LAB8;

LAB11:    *((char **)t35) = t6;
    goto LAB10;

LAB16:    xsi_saveStackAndSuspend(t1);
    goto LAB17;

LAB18:    t40 = (t0 + 5051);
    t43 = ((STD_STANDARD) + 984);
    t44 = (t50 + 0U);
    t46 = (t44 + 0U);
    *((int *)t46) = 1;
    t46 = (t44 + 4U);
    *((int *)t46) = 11;
    t46 = (t44 + 8U);
    *((int *)t46) = 1;
    t13 = (11 - 1);
    t51 = (t13 * 1);
    t51 = (t51 + 1);
    t46 = (t44 + 12U);
    *((unsigned int *)t46) = t51;
    t42 = xsi_base_array_concat(t42, t49, t43, (char)97, t40, t50, (char)97, t6, t7, (char)101);
    t46 = (t7 + 12U);
    t51 = *((unsigned int *)t46);
    t51 = (t51 * 1U);
    t52 = (11U + t51);
    xsi_report(t42, t52, (unsigned char)2);
    goto LAB19;

LAB20:    t48 = 0;

LAB23:    if (t48 < t14)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t38 = (t12 + t48);
    t39 = (t5 + t48);
    if (*((unsigned char *)t38) != *((unsigned char *)t39))
        goto LAB21;

LAB25:    t48 = (t48 + 1);
    goto LAB23;

}

static void work_a_2598182923_3553469787_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t9;
    char *t11;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5062);
    t5 = (t0 + 5070);
    t7 = (t0 + 5078);
    t9 = (t0 + 5081);
    t11 = (t0 + 5089);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 8;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (8 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(29, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5097);
    t5 = (t0 + 5105);
    t7 = (t0 + 5113);
    t9 = (t0 + 5116);
    t11 = (t0 + 5124);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(30, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5139);
    t5 = (t0 + 5147);
    t7 = (t0 + 5155);
    t9 = (t0 + 5158);
    t11 = (t0 + 5166);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 20;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (20 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(31, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5186);
    t5 = (t0 + 5194);
    t7 = (t0 + 5202);
    t9 = (t0 + 5205);
    t11 = (t0 + 5213);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(32, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5228);
    t5 = (t0 + 5236);
    t7 = (t0 + 5244);
    t9 = (t0 + 5247);
    t11 = (t0 + 5255);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(33, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5270);
    t5 = (t0 + 5278);
    t7 = (t0 + 5286);
    t9 = (t0 + 5289);
    t11 = (t0 + 5297);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 20;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (20 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(34, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5317);
    t5 = (t0 + 5325);
    t7 = (t0 + 5333);
    t9 = (t0 + 5336);
    t11 = (t0 + 5344);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 17;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (17 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(35, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5361);
    t5 = (t0 + 5369);
    t7 = (t0 + 5377);
    t9 = (t0 + 5380);
    t11 = (t0 + 5388);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 17;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (17 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(36, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5405);
    t5 = (t0 + 5413);
    t7 = (t0 + 5421);
    t9 = (t0 + 5424);
    t11 = (t0 + 5432);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(37, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5447);
    t5 = (t0 + 5455);
    t7 = (t0 + 5463);
    t9 = (t0 + 5466);
    t11 = (t0 + 5474);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(38, ng1);
    t2 = (t0 + 2472);
    t3 = (t0 + 5489);
    t5 = (t0 + 5497);
    t7 = (t0 + 5505);
    t9 = (t0 + 5508);
    t11 = (t0 + 5516);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 22;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    work_a_2598182923_3553469787_sub_886856185517815241_3491306965(t0, t2, t3, t5, t7, t9, t11, t13);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 5538);
    xsi_report(t2, 15U, (unsigned char)0);
    xsi_set_current_line(40, ng1);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_2598182923_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2598182923_3553469787_p_0};
	static char *se[] = {(void *)work_a_2598182923_3553469787_sub_886856185517815241_3491306965};
	xsi_register_didat("work_a_2598182923_3553469787", "isim/alu_tb_isim_beh.exe.sim/work/a_2598182923_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

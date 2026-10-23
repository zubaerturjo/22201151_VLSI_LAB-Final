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
static const char *ng0 = "/home/ise/22201151_VLSI_LAB-Final/CPU_SET1/pc_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2544820825_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(25, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3360);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t10 = (5 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(23, ng0);
    t10 = (5 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_2544820825_3553469787_p_1(char *t0)
{
    char t13[16];
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB6:    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3232);
    *((int *)t5) = 0;
    xsi_set_current_line(32, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
    t4 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t4 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5419);
    *((int *)t2) = 1;
    t3 = (t0 + 5423);
    *((int *)t3) = 6;
    t9 = 1;
    t10 = 6;

LAB14:    if (t9 <= t10)
        goto LAB15;

LAB17:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(47, ng0);

LAB31:    t2 = (t0 + 3264);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t5 = (t0 + 5399);
    xsi_report(t5, 20U, (unsigned char)2);
    goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);

LAB20:    t5 = (t0 + 3248);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB16:    t2 = (t0 + 5419);
    t9 = *((int *)t2);
    t3 = (t0 + 5423);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB17;

LAB28:    t11 = (t9 + 1);
    t9 = t11;
    t5 = (t0 + 5419);
    *((int *)t5) = t9;
    goto LAB14;

LAB18:    t8 = (t0 + 3248);
    *((int *)t8) = 0;
    xsi_set_current_line(39, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, t6);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    t7 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t4 == 1)
        goto LAB18;
    else
        goto LAB20;

LAB21:    goto LAB19;

LAB22:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t5 = (t0 + 5419);
    t12 = *((int *)t5);
    t4 = (t11 == t12);
    if (t4 == 0)
        goto LAB26;

LAB27:    goto LAB16;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t7 = (t0 + 5427);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t0 + 5419);
    t16 = xsi_int_to_mem(*((int *)t15));
    t17 = xsi_string_variable_get_image(t13, t14, t16);
    t20 = ((STD_STANDARD) + 984);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 25;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (25 - 1);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t7, t21, (char)97, t17, t13, (char)101);
    t23 = (t13 + 12U);
    t25 = *((unsigned int *)t23);
    t26 = (25U + t25);
    xsi_report(t18, t26, (unsigned char)2);
    goto LAB27;

LAB29:    t5 = (t0 + 3264);
    *((int *)t5) = 0;
    xsi_set_current_line(47, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, t6);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB29;
    else
        goto LAB31;

LAB32:    goto LAB30;

LAB33:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
    t4 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t4 == 0)
        goto LAB37;

LAB38:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5479);
    *((int *)t2) = 1;
    t3 = (t0 + 5483);
    *((int *)t3) = 3;
    t9 = 1;
    t10 = 3;

LAB39:    if (t9 <= t10)
        goto LAB40;

LAB42:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5514);
    xsi_report(t2, 14U, (unsigned char)0);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    t5 = (t0 + 5452);
    xsi_report(t5, 27U, (unsigned char)2);
    goto LAB38;

LAB40:    xsi_set_current_line(54, ng0);

LAB45:    t5 = (t0 + 3280);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB41:    t2 = (t0 + 5479);
    t9 = *((int *)t2);
    t3 = (t0 + 5483);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB42;

LAB53:    t11 = (t9 + 1);
    t9 = t11;
    t5 = (t0 + 5479);
    *((int *)t5) = t9;
    goto LAB39;

LAB43:    t8 = (t0 + 3280);
    *((int *)t8) = 0;
    xsi_set_current_line(54, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, t6);

LAB49:    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB44:    t7 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t4 == 1)
        goto LAB43;
    else
        goto LAB45;

LAB46:    goto LAB44;

LAB47:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t5 = (t0 + 5479);
    t12 = *((int *)t5);
    t4 = (t11 == t12);
    if (t4 == 0)
        goto LAB51;

LAB52:    goto LAB41;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

LAB51:    t7 = (t0 + 5487);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t0 + 5479);
    t16 = xsi_int_to_mem(*((int *)t15));
    t17 = xsi_string_variable_get_image(t13, t14, t16);
    t20 = ((STD_STANDARD) + 984);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 27;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (27 - 1);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t7, t21, (char)97, t17, t13, (char)101);
    t23 = (t13 + 12U);
    t25 = *((unsigned int *)t23);
    t26 = (27U + t25);
    xsi_report(t18, t26, (unsigned char)2);
    goto LAB52;

LAB54:    goto LAB2;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

}


extern void work_a_2544820825_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2544820825_3553469787_p_0,(void *)work_a_2544820825_3553469787_p_1};
	xsi_register_didat("work_a_2544820825_3553469787", "isim/pc_tb_isim_beh.exe.sim/work/a_2544820825_3553469787.didat");
	xsi_register_executes(pe);
}

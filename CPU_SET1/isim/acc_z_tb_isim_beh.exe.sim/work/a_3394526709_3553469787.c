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
static const char *ng0 = "/home/ise/22201151_VLSI_LAB-Final/CPU_SET1/acc_z_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3394526709_3553469787_p_0(char *t0)
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

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);

LAB4:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(30, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4048);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(27, ng0);
    t10 = (5 * 1000LL);
    t2 = (t0 + 3112);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(28, ng0);
    t10 = (5 * 1000LL);
    t2 = (t0 + 3112);
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

static void work_a_3394526709_3553469787_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    int64 t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB6:    t2 = (t0 + 3872);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3872);
    *((int *)t5) = 0;
    xsi_set_current_line(37, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
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

LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6606);
    t7 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t7 = 0;

LAB19:    if (t7 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6625);
    t5 = (t0 + 4176);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);

LAB25:    t2 = (t0 + 3888);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t11 = (t0 + 6614);
    xsi_report(t11, 11U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB16;

LAB17:    t8 = 0;

LAB20:    if (t8 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB18;

LAB22:    t8 = (t8 + 1);
    goto LAB20;

LAB23:    t5 = (t0 + 3888);
    *((int *)t5) = 0;
    xsi_set_current_line(44, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB23;
    else
        goto LAB25;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6633);
    t7 = 1;
    if (8U == 8U)
        goto LAB36;

LAB37:    t7 = 0;

LAB38:    if (t7 == 1)
        goto LAB33;

LAB34:    t4 = (unsigned char)0;

LAB35:    if (t4 == 0)
        goto LAB31;

LAB32:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6656);
    t5 = (t0 + 4176);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);

LAB44:    t2 = (t0 + 3904);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    t11 = (t0 + 6641);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB32;

LAB33:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t4 = t14;
    goto LAB35;

LAB36:    t8 = 0;

LAB39:    if (t8 < 8U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB37;

LAB41:    t8 = (t8 + 1);
    goto LAB39;

LAB42:    t5 = (t0 + 3904);
    *((int *)t5) = 0;
    xsi_set_current_line(50, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB42;
    else
        goto LAB44;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6664);
    t7 = 1;
    if (8U == 8U)
        goto LAB55;

LAB56:    t7 = 0;

LAB57:    if (t7 == 1)
        goto LAB52;

LAB53:    t4 = (unsigned char)0;

LAB54:    if (t4 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);

LAB63:    t2 = (t0 + 3920);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t11 = (t0 + 6672);
    xsi_report(t11, 21U, (unsigned char)2);
    goto LAB51;

LAB52:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t4 = t14;
    goto LAB54;

LAB55:    t8 = 0;

LAB58:    if (t8 < 8U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB56;

LAB60:    t8 = (t8 + 1);
    goto LAB58;

LAB61:    t5 = (t0 + 3920);
    *((int *)t5) = 0;
    xsi_set_current_line(56, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB62:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB61;
    else
        goto LAB63;

LAB64:    goto LAB62;

LAB65:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6693);
    t7 = 1;
    if (8U == 8U)
        goto LAB74;

LAB75:    t7 = 0;

LAB76:    if (t7 == 1)
        goto LAB71;

LAB72:    t4 = (unsigned char)0;

LAB73:    if (t4 == 0)
        goto LAB69;

LAB70:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6716);
    t5 = (t0 + 4176);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);

LAB82:    t2 = (t0 + 3936);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB69:    t11 = (t0 + 6701);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB70;

LAB71:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB73;

LAB74:    t8 = 0;

LAB77:    if (t8 < 8U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB75;

LAB79:    t8 = (t8 + 1);
    goto LAB77;

LAB80:    t5 = (t0 + 3936);
    *((int *)t5) = 0;
    xsi_set_current_line(62, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6724);
    t7 = 1;
    if (8U == 8U)
        goto LAB93;

LAB94:    t7 = 0;

LAB95:    if (t7 == 1)
        goto LAB90;

LAB91:    t4 = (unsigned char)0;

LAB92:    if (t4 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(68, ng0);

LAB101:    t2 = (t0 + 3952);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t11 = (t0 + 6732);
    xsi_report(t11, 24U, (unsigned char)2);
    goto LAB89;

LAB90:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB92;

LAB93:    t8 = 0;

LAB96:    if (t8 < 8U)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB94;

LAB98:    t8 = (t8 + 1);
    goto LAB96;

LAB99:    t5 = (t0 + 3952);
    *((int *)t5) = 0;
    xsi_set_current_line(68, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB105:    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB100:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB99;
    else
        goto LAB101;

LAB102:    goto LAB100;

LAB103:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6756);
    t7 = 1;
    if (8U == 8U)
        goto LAB112;

LAB113:    t7 = 0;

LAB114:    if (t7 == 1)
        goto LAB109;

LAB110:    t4 = (unsigned char)0;

LAB111:    if (t4 == 0)
        goto LAB107;

LAB108:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);

LAB120:    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB104:    goto LAB103;

LAB106:    goto LAB104;

LAB107:    t11 = (t0 + 6764);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB108;

LAB109:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t4 = t14;
    goto LAB111;

LAB112:    t8 = 0;

LAB115:    if (t8 < 8U)
        goto LAB116;
    else
        goto LAB114;

LAB116:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB113;

LAB117:    t8 = (t8 + 1);
    goto LAB115;

LAB118:    t5 = (t0 + 3968);
    *((int *)t5) = 0;
    xsi_set_current_line(74, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB124:    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB119:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB118;
    else
        goto LAB120;

LAB121:    goto LAB119;

LAB122:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6779);
    t7 = 1;
    if (8U == 8U)
        goto LAB131;

LAB132:    t7 = 0;

LAB133:    if (t7 == 1)
        goto LAB128;

LAB129:    t4 = (unsigned char)0;

LAB130:    if (t4 == 0)
        goto LAB126;

LAB127:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6805);
    xsi_report(t2, 17U, (unsigned char)0);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);

LAB139:    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB123:    goto LAB122;

LAB125:    goto LAB123;

LAB126:    t11 = (t0 + 6787);
    xsi_report(t11, 18U, (unsigned char)2);
    goto LAB127;

LAB128:    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB130;

LAB131:    t8 = 0;

LAB134:    if (t8 < 8U)
        goto LAB135;
    else
        goto LAB133;

LAB135:    t9 = (t3 + t8);
    t10 = (t2 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB132;

LAB136:    t8 = (t8 + 1);
    goto LAB134;

LAB137:    goto LAB2;

LAB138:    goto LAB137;

LAB140:    goto LAB138;

}


extern void work_a_3394526709_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3394526709_3553469787_p_0,(void *)work_a_3394526709_3553469787_p_1};
	xsi_register_didat("work_a_3394526709_3553469787", "isim/acc_z_tb_isim_beh.exe.sim/work/a_3394526709_3553469787.didat");
	xsi_register_executes(pe);
}

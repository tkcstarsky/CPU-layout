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
static const char *ng0 = "C:/Users/tkc/Desktop/Pipeline CPU/PipelineMIPSCPU/LoadCtr.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};



static void Always_34_0(char *t0)
{
    char t9[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB20:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 2048U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t9) = 1;

LAB24:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t9) = 1;

LAB31:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t9) = 1;

LAB38:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    xsi_vlogtype_sign_extend(t9, 32, t31, 8);
    t7 = (t0 + 2448);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);

LAB41:
LAB34:
LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(49, ng0);

LAB42:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB46;

LAB43:    if (t21 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t9) = 1;

LAB46:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB53;

LAB50:    if (t21 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t9) = 1;

LAB53:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB60;

LAB57:    if (t21 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t9) = 1;

LAB60:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 2448);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);

LAB63:
LAB56:
LAB49:    goto LAB19;

LAB11:    xsi_set_current_line(60, ng0);

LAB64:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t21 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t9) = 1;

LAB68:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    xsi_vlogtype_sign_extend(t9, 32, t31, 16);
    t7 = (t0 + 2448);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);

LAB71:    goto LAB19;

LAB13:    xsi_set_current_line(67, ng0);

LAB72:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB76;

LAB73:    if (t21 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t9) = 1;

LAB76:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 15);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 15);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 131071U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 131071U);
    t7 = (t0 + 2448);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);

LAB79:    goto LAB19;

LAB15:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB23:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(40, ng0);
    t33 = (t0 + 1728U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t42 = (t0 + 2448);
    xsi_vlogvar_assign_value(t42, t31, 0, 0, 32);
    goto LAB27;

LAB30:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 1728U);
    t24 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 8);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 8);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t33 = (t0 + 2448);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 32);
    goto LAB34;

LAB37:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 1728U);
    t24 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 16);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 16);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t33 = (t0 + 2448);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 32);
    goto LAB41;

LAB45:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(51, ng0);
    t24 = (t0 + 1728U);
    t25 = *((char **)t24);
    memset(t31, 0, 8);
    t24 = (t31 + 4);
    t33 = (t25 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t24) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 255U);
    t34 = (t0 + 2448);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 32);
    goto LAB49;

LAB52:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 1728U);
    t24 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t31 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 8);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 8);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    t33 = (t0 + 2448);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 32);
    goto LAB56;

LAB59:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 1728U);
    t24 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t31 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 16);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 16);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    t33 = (t0 + 2448);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 32);
    goto LAB63;

LAB67:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(62, ng0);
    t24 = (t0 + 1728U);
    t25 = *((char **)t24);
    memset(t32, 0, 8);
    t24 = (t32 + 4);
    t33 = (t25 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t24) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 65535U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 16);
    t34 = (t0 + 2448);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 32);
    goto LAB71;

LAB75:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(69, ng0);
    t24 = (t0 + 1728U);
    t25 = *((char **)t24);
    memset(t31, 0, 8);
    t24 = (t31 + 4);
    t33 = (t25 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t24) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 65535U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 65535U);
    t34 = (t0 + 2448);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 32);
    goto LAB79;

}


extern void work_m_00000000003178575819_0675036638_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000003178575819_0675036638", "isim/test2_isim_beh.exe.sim/work/m_00000000003178575819_0675036638.didat");
	xsi_register_executes(pe);
}

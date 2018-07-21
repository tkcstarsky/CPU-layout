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
static const char *ng0 = "C:/Users/tkc/Desktop/Pipeline CPU/PipelineMIPSCPU/StoreCtr.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_33_0(char *t0)
{
    char t9[8];
    char t31[8];
    char t32[8];
    char t42[8];
    char t53[8];
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
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB16:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1936U);
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
        goto LAB20;

LAB17:    if (t21 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t9) = 1;

LAB20:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1936U);
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
        goto LAB27;

LAB24:    if (t21 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t9) = 1;

LAB27:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1936U);
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
        goto LAB34;

LAB31:    if (t21 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t9) = 1;

LAB34:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 16777215U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 16777215U);
    t7 = (t0 + 1456U);
    t8 = *((char **)t7);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 0);
    *((unsigned int *)t32) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    *((unsigned int *)t7) = t21;
    t22 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t22 & 255U);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 255U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t32, 8, t31, 24);
    t11 = (t0 + 2336);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);

LAB37:
LAB30:
LAB23:    goto LAB15;

LAB9:    xsi_set_current_line(48, ng0);

LAB38:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1936U);
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
        goto LAB42;

LAB39:    if (t21 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t9) = 1;

LAB42:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    t7 = (t0 + 1456U);
    t8 = *((char **)t7);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 0);
    *((unsigned int *)t32) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    *((unsigned int *)t7) = t21;
    t22 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t22 & 65535U);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 65535U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t32, 16, t31, 16);
    t11 = (t0 + 2336);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);

LAB45:    goto LAB15;

LAB11:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1456U);
    t4 = *((char **)t3);
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB15;

LAB19:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(39, ng0);
    t33 = (t0 + 1456U);
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
    t43 = (t0 + 1616U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 8);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 8);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 16777215U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 16777215U);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t32, 8);
    t52 = (t0 + 2336);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);
    goto LAB23;

LAB26:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 1616U);
    t24 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 0);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    t33 = (t0 + 1456U);
    t34 = *((char **)t33);
    memset(t42, 0, 8);
    t33 = (t42 + 4);
    t35 = (t34 + 4);
    t46 = *((unsigned int *)t34);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t35);
    t49 = (t48 >> 0);
    *((unsigned int *)t33) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t51 & 255U);
    t43 = (t0 + 1616U);
    t44 = *((char **)t43);
    memset(t53, 0, 8);
    t43 = (t53 + 4);
    t45 = (t44 + 4);
    t54 = *((unsigned int *)t44);
    t55 = (t54 >> 16);
    *((unsigned int *)t53) = t55;
    t56 = *((unsigned int *)t45);
    t57 = (t56 >> 16);
    *((unsigned int *)t43) = t57;
    t58 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t58 & 65535U);
    t59 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t59 & 65535U);
    xsi_vlogtype_concat(t31, 32, 32, 3U, t53, 16, t42, 8, t32, 8);
    t52 = (t0 + 2336);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);
    goto LAB30;

LAB33:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 1616U);
    t24 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t25);
    t39 = (t38 >> 0);
    *((unsigned int *)t11) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 65535U);
    t33 = (t0 + 1456U);
    t34 = *((char **)t33);
    memset(t42, 0, 8);
    t33 = (t42 + 4);
    t35 = (t34 + 4);
    t46 = *((unsigned int *)t34);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t35);
    t49 = (t48 >> 0);
    *((unsigned int *)t33) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t51 & 255U);
    t43 = (t0 + 1616U);
    t44 = *((char **)t43);
    memset(t53, 0, 8);
    t43 = (t53 + 4);
    t45 = (t44 + 4);
    t54 = *((unsigned int *)t44);
    t55 = (t54 >> 24);
    *((unsigned int *)t53) = t55;
    t56 = *((unsigned int *)t45);
    t57 = (t56 >> 24);
    *((unsigned int *)t43) = t57;
    t58 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t58 & 255U);
    t59 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t59 & 255U);
    xsi_vlogtype_concat(t31, 32, 32, 3U, t53, 8, t42, 8, t32, 16);
    t52 = (t0 + 2336);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);
    goto LAB37;

LAB41:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(50, ng0);
    t24 = (t0 + 1456U);
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
    t34 = (t0 + 1616U);
    t35 = *((char **)t34);
    memset(t42, 0, 8);
    t34 = (t42 + 4);
    t43 = (t35 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (t46 >> 16);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t43);
    t49 = (t48 >> 16);
    *((unsigned int *)t34) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 65535U);
    t51 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t51 & 65535U);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 16, t32, 16);
    t44 = (t0 + 2336);
    xsi_vlogvar_assign_value(t44, t31, 0, 0, 32);
    goto LAB45;

}


extern void work_m_00000000004247906921_3785854402_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000004247906921_3785854402", "isim/test2_isim_beh.exe.sim/work/m_00000000004247906921_3785854402.didat");
	xsi_register_executes(pe);
}

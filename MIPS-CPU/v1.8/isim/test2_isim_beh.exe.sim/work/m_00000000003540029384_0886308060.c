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
static const char *ng0 = "C:/Users/tkc/Desktop/Pipeline CPU/PipelineMIPSCPU/alu.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {11U, 0U};
static int ng11[] = {15, 0};
static int ng12[] = {0, 0};
static int ng13[] = {31, 0};
static int ng14[] = {16, 0};
static unsigned int ng15[] = {3U, 0U};
static int ng16[] = {1, 0};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {5U, 0U};



static void Always_41_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5072);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 2544U);
    t8 = *((char **)t7);
    t7 = (t0 + 2704U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 3424);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB31;

LAB9:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB13:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB15:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_xor(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB17:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_signed_bit_or(t11, 32, t4, 32, t7, 32);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t11 + 4);
    memcpy(t10, t11, 8);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t13 | t14);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 4294967295U);
    t9 = (t0 + 3424);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB31;

LAB19:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB21:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB31;

LAB23:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_signed_arith_rshift(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 3424);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB31;

LAB25:    xsi_set_current_line(53, ng0);

LAB32:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t8 = (t0 + 3424);
    t9 = (t0 + 3424);
    t20 = (t9 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng11)));
    t23 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t11, t18, t19, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2704U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    t7 = (t0 + 3424);
    t8 = (t0 + 3424);
    t9 = (t8 + 72U);
    t20 = *((char **)t9);
    t21 = ((char*)((ng13)));
    t22 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t11, t18, t19, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t11 + 4);
    t25 = *((unsigned int *)t23);
    t6 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t26 = (!(t28));
    t29 = (t6 && t26);
    t27 = (t19 + 4);
    t32 = *((unsigned int *)t27);
    t30 = (!(t32));
    t33 = (t29 && t30);
    if (t33 == 1)
        goto LAB35;

LAB36:    goto LAB31;

LAB27:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    t3 = (t18 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t18);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t3) != 0)
        goto LAB39;

LAB40:    t9 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t9);
    t28 = (t17 || t25);
    if (t28 > 0)
        goto LAB41;

LAB42:    t32 = *((unsigned int *)t11);
    t35 = (~(t32));
    t37 = *((unsigned int *)t9);
    t38 = (t35 || t37);
    if (t38 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t9) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t11) > 0)
        goto LAB47;

LAB48:    memcpy(t10, t21, 8);

LAB49:    t22 = (t0 + 3424);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 32);
    goto LAB31;

LAB33:    t35 = *((unsigned int *)t19);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t8, t10, t36, *((unsigned int *)t18), t40);
    goto LAB34;

LAB35:    t35 = *((unsigned int *)t19);
    t34 = (t35 + 0);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t18);
    t36 = (t37 - t38);
    t39 = (t36 + 1);
    xsi_vlogvar_assign_value(t7, t10, t34, *((unsigned int *)t18), t39);
    goto LAB36;

LAB37:    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB39:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    t20 = ((char*)((ng16)));
    goto LAB42;

LAB43:    t21 = ((char*)((ng12)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t10, 32, t20, 32, t21, 32);
    goto LAB49;

LAB47:    memcpy(t10, t20, 8);
    goto LAB49;

}

static void Always_63_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 4752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    t3 = (t0 + 4784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3024U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);

LAB26:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 3424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB30;

LAB27:    if (t23 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t11) = 1;

LAB30:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB25;

LAB9:    xsi_set_current_line(73, ng0);

LAB34:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 3424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB35:    if (t23 != 0)
        goto LAB37;

LAB38:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:    goto LAB25;

LAB11:    xsi_set_current_line(79, ng0);

LAB42:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB44;

LAB43:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t7) > *((unsigned int *)t8))
        goto LAB45;

LAB46:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    goto LAB25;

LAB13:    xsi_set_current_line(85, ng0);

LAB51:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB53;

LAB52:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB55;

LAB54:    *((unsigned int *)t11) = 1;

LAB55:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB59:    goto LAB25;

LAB15:    xsi_set_current_line(91, ng0);

LAB60:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 3424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB62;

LAB61:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB63;

LAB64:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB68:    goto LAB25;

LAB17:    xsi_set_current_line(97, ng0);

LAB69:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 3424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB71;

LAB70:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t7) > *((unsigned int *)t8))
        goto LAB73;

LAB72:    *((unsigned int *)t11) = 1;

LAB73:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB77:    goto LAB25;

LAB19:    xsi_set_current_line(103, ng0);

LAB78:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greatereq(t11, 32, t4, 32, t3, 32);
    t7 = (t11 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB81:    goto LAB25;

LAB21:    xsi_set_current_line(109, ng0);

LAB82:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t4, 32, t3, 32);
    t7 = (t11 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB85:    goto LAB25;

LAB29:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(68, ng0);
    t33 = ((char*)((ng16)));
    t34 = (t0 + 3584);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB33;

LAB36:    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB37:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(74, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 3584);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB41;

LAB44:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t11) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(80, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 3584);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB50;

LAB53:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(86, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 3584);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB59;

LAB62:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t11) = 1;
    goto LAB64;

LAB66:    xsi_set_current_line(92, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 3584);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB68;

LAB71:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(98, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 3584);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB77;

LAB79:    xsi_set_current_line(104, ng0);
    t8 = ((char*)((ng16)));
    t9 = (t0 + 3584);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB81;

LAB83:    xsi_set_current_line(110, ng0);
    t8 = ((char*)((ng16)));
    t9 = (t0 + 3584);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB85;

}


extern void work_m_00000000003540029384_0886308060_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_63_1};
	xsi_register_didat("work_m_00000000003540029384_0886308060", "isim/test2_isim_beh.exe.sim/work/m_00000000003540029384_0886308060.didat");
	xsi_register_executes(pe);
}

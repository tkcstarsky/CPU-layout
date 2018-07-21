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
static const char *ng0 = "C:/Users/tkc/Desktop/MulticycleCPU/MulticycleCPU/control.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {43U, 0U};
static unsigned int ng11[] = {8U, 0U};



static void Always_54_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7352);
    *((int *)t2) = 1;
    t3 = (t0 + 6568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 2976U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(60, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(57, ng0);

LAB15:    xsi_set_current_line(58, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    goto LAB14;

}

static void Always_65_1(char *t0)
{
    char t11[8];
    char t24[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7368);
    *((int *)t2) = 1;
    t3 = (t0 + 6816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 5456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(72, ng0);

LAB22:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 3136U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB26;

LAB23:    if (t21 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    memset(t24, 0, 8);
    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB30:    t31 = (t24 + 4);
    t32 = *((unsigned int *)t24);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB31;

LAB32:    memcpy(t62, t24, 8);

LAB33:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB47:    goto LAB21;

LAB15:    xsi_set_current_line(79, ng0);

LAB48:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3136U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB52;

LAB49:    if (t21 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t11) = 1;

LAB52:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB55:    goto LAB21;

LAB17:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB21;

LAB25:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB29:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB30;

LAB31:    t36 = (t0 + 3136U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng4)));
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t36);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB37;

LAB34:    if (t50 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t38) = 1;

LAB37:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t55) != 0)
        goto LAB40;

LAB41:    t63 = *((unsigned int *)t24);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t24 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t54) = 1;
    goto LAB41;

LAB40:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB41;

LAB42:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t24 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t24);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB44;

LAB45:    xsi_set_current_line(74, ng0);
    t96 = ((char*)((ng2)));
    t97 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 3, 0LL);
    goto LAB47;

LAB51:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(81, ng0);
    t30 = ((char*)((ng7)));
    t31 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB55;

}

static void Always_90_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    int t34;

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    t3 = (t0 + 7064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2976U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    *((unsigned int *)t6) = t14;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 1U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 1U);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(106, ng0);

LAB15:    xsi_set_current_line(107, ng0);
    t27 = (t0 + 5616);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);

LAB16:    t30 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t29, 3, t30, 3);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t31 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:
LAB29:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t15 | t16);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t17 | t18);
    goto LAB10;

LAB12:    goto LAB14;

LAB17:    xsi_set_current_line(110, ng0);

LAB30:    xsi_set_current_line(111, ng0);
    t32 = ((char*)((ng9)));
    t33 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(115, ng0);

LAB31:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(122, ng0);

LAB32:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 3136U);
    t4 = *((char **)t3);

LAB33:    t3 = ((char*)((ng6)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t34 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t31 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t31 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t31 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t31 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t31 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:
LAB48:    goto LAB29;

LAB23:    xsi_set_current_line(172, ng0);

LAB55:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 3136U);
    t5 = *((char **)t3);

LAB56:    t3 = ((char*)((ng10)));
    t34 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t34 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t31 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t31 == 1)
        goto LAB61;

LAB62:
LAB64:
LAB63:
LAB65:    goto LAB29;

LAB25:    xsi_set_current_line(196, ng0);

LAB69:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng9)));
    t12 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB34:    xsi_set_current_line(125, ng0);

LAB49:    xsi_set_current_line(126, ng0);
    t5 = ((char*)((ng9)));
    t12 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB36:    xsi_set_current_line(132, ng0);

LAB50:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB38:    xsi_set_current_line(139, ng0);

LAB51:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB48;

LAB40:    xsi_set_current_line(146, ng0);

LAB52:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB42:    xsi_set_current_line(156, ng0);

LAB53:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB44:    xsi_set_current_line(163, ng0);

LAB54:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB57:    xsi_set_current_line(179, ng0);

LAB66:    xsi_set_current_line(180, ng0);
    t12 = ((char*)((ng9)));
    t21 = (t0 + 4496);
    xsi_vlogvar_wait_assign_value(t21, t12, 0, 0, 1, 0LL);
    goto LAB65;

LAB59:    xsi_set_current_line(183, ng0);

LAB67:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng9)));
    t12 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB65;

LAB61:    xsi_set_current_line(188, ng0);

LAB68:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng9)));
    t12 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000003048443000_2058220583_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)Always_65_1,(void *)Always_90_2};
	xsi_register_didat("work_m_00000000003048443000_2058220583", "isim/Test_isim_beh.exe.sim/work/m_00000000003048443000_2058220583.didat");
	xsi_register_executes(pe);
}

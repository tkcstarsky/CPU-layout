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
static const char *ng0 = "C:/Users/tkc/Desktop/RISCV/USTCPV/project_ise/sim/test.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Initial_11_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);

LAB4:    t2 = ((char*)((ng1)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB5;

LAB6:
LAB1:    return;
LAB5:    xsi_set_current_line(11, ng0);
    t9 = (t0 + 2656);
    xsi_process_wait(t9, 6667LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(11, ng0);
    t11 = (t0 + 1768);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t14) == 0)
        goto LAB8;

LAB10:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;

LAB11:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 1);
    goto LAB4;

LAB8:    *((unsigned int *)t10) = 1;
    goto LAB11;

}

static void Initial_13_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 12000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_15_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);
    t6 = (t0 + 1928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 15U);
    if (t14 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB8:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB9;

LAB10:    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t16) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t29, 8);

LAB17:    t30 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t30, t4, 0, 0, 4, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB8;

LAB9:    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_minus(t24, 32, t22, 4, t23, 32);
    goto LAB10;

LAB11:    t29 = ((char*)((ng2)));
    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 32, t24, 32, t29, 32);
    goto LAB17;

LAB15:    memcpy(t4, t24, 8);
    goto LAB17;

}

static void NetDecl_17_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31U);

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 15U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t0 + 4320);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 4176);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

}


extern void work_m_00000000002839024340_1629218213_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Initial_13_1,(void *)Always_15_2,(void *)NetDecl_17_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002839024340_1629218213", "isim/riscvtest_isim_beh.exe.sim/work/m_00000000002839024340_1629218213.didat");
	xsi_register_executes(pe);
}

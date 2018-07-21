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
static const char *ng0 = "C:/Users/tkc/Desktop/Pipeline CPU/PipelineMIPSCPU/ALUControl.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {33U, 0U};
static unsigned int ng5[] = {34U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {37U, 0U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {39U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {7U, 0U};
static int ng15[] = {1, 0};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {3U, 0U};
static unsigned int ng20[] = {10U, 0U};
static unsigned int ng21[] = {44U, 0U};
static unsigned int ng22[] = {45U, 0U};
static unsigned int ng23[] = {15U, 0U};
static unsigned int ng24[] = {5U, 0U};
static unsigned int ng25[] = {11U, 0U};



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB26:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB27:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t7 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB60;

LAB61:
LAB63:
LAB62:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);

LAB64:    goto LAB25;

LAB9:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB11:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng6)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB13:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng9)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB15:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng11)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB17:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng14)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB19:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng25)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB21:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng19)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB25;

LAB28:    xsi_set_current_line(34, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    goto LAB64;

LAB30:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB32:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng6)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB34:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng6)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB36:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng9)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB38:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng11)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB40:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng13)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB42:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng14)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB44:    xsi_set_current_line(42, ng0);

LAB65:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng15)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB64;

LAB46:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng16)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB48:    xsi_set_current_line(47, ng0);

LAB66:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng15)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng18)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB64;

LAB50:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng18)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB52:    xsi_set_current_line(52, ng0);

LAB67:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng15)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng20)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB64;

LAB54:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng20)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB56:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng19)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB58:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng19)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

LAB60:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB64;

}


extern void work_m_00000000002614782037_0864879315_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000002614782037_0864879315", "isim/test2_isim_beh.exe.sim/work/m_00000000002614782037_0864879315.didat");
	xsi_register_executes(pe);
}

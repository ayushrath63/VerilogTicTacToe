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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/Projects/CSM152A_Lab4/Lab4_cleaned/disp_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static const char *ng3 = "output.txt";
static const char *ng4 = "w";
static int ng5[] = {1, 0};
static int ng6[] = {800, 0};
static int ng7[] = {521, 0};
static int ng8[] = {2, 0};
static const char *ng9 = "%d ns: %b %b %b %b %b\n";
static int ng10[] = {3, 0};
static int ng11[] = {7, 0};



static void Initial_81_0(char *t0)
{
    char t4[8];
    char t6[8];
    char t15[8];
    char t37[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);

LAB4:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2540);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4360);
    *((int *)t12) = t11;

LAB6:    t13 = (t0 + 4360);
    if (*((int *)t13) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4364);
    *((int *)t12) = t11;

LAB17:    t13 = (t0 + 4364);
    if (*((int *)t13) > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4368);
    *((int *)t12) = t11;

LAB28:    t13 = (t0 + 4368);
    if (*((int *)t13) > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4372);
    *((int *)t12) = t11;

LAB39:    t13 = (t0 + 4372);
    if (*((int *)t13) > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4376);
    *((int *)t12) = t11;

LAB50:    t13 = (t0 + 4376);
    if (*((int *)t13) > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t0 + 4380);
    *((int *)t12) = t11;

LAB61:    t13 = (t0 + 4380);
    if (*((int *)t13) > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(141, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(96, ng0);

LAB9:    xsi_set_current_line(97, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(97, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t19) == 0)
        goto LAB11;

LAB13:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB14:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB16;

LAB15:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4360);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB6;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB15;

LAB18:    xsi_set_current_line(103, ng0);

LAB20:    xsi_set_current_line(104, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(104, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t19) == 0)
        goto LAB22;

LAB24:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB25:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB27;

LAB26:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(107, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4364);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB17;

LAB22:    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB27:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB26;

LAB29:    xsi_set_current_line(111, ng0);

LAB31:    xsi_set_current_line(112, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(112, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t19) == 0)
        goto LAB33;

LAB35:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB36:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB38;

LAB37:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4368);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB28;

LAB33:    *((unsigned int *)t15) = 1;
    goto LAB36;

LAB38:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB37;

LAB40:    xsi_set_current_line(118, ng0);

LAB42:    xsi_set_current_line(119, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(119, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t19) == 0)
        goto LAB44;

LAB46:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB47:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB49;

LAB48:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(122, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4372);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB39;

LAB44:    *((unsigned int *)t15) = 1;
    goto LAB47;

LAB49:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB48;

LAB51:    xsi_set_current_line(128, ng0);

LAB53:    xsi_set_current_line(129, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(129, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t19) == 0)
        goto LAB55;

LAB57:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB58:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB60;

LAB59:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4376);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB50;

LAB55:    *((unsigned int *)t15) = 1;
    goto LAB58;

LAB60:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB59;

LAB62:    xsi_set_current_line(135, ng0);

LAB64:    xsi_set_current_line(136, ng0);
    t14 = (t0 + 2540);
    xsi_process_wait(t14, 20000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(136, ng0);
    t16 = (t0 + 1656);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t19) == 0)
        goto LAB66;

LAB68:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB69:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB71;

LAB70:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1656);
    xsi_vlogvar_assign_value(t36, t15, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t37, 0, 0, 32);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = (t0 + 2116);
    t12 = (t7 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 876U);
    t16 = *((char **)t14);
    t14 = (t0 + 968U);
    t17 = *((char **)t14);
    t14 = (t0 + 600U);
    t18 = *((char **)t14);
    t14 = (t0 + 692U);
    t19 = *((char **)t14);
    t14 = (t0 + 784U);
    t25 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 7, t0, (char)119, t13, 32, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 3, (char)118, t19, 3, (char)118, t25, 2);
    t2 = (t0 + 4380);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB61;

LAB66:    *((unsigned int *)t15) = 1;
    goto LAB69;

LAB71:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB70;

}


extern void work_m_00000000004061369243_3488081762_init()
{
	static char *pe[] = {(void *)Initial_81_0};
	xsi_register_didat("work_m_00000000004061369243_3488081762", "isim/disp_tb_isim_beh.exe.sim/work/m_00000000004061369243_3488081762.didat");
	xsi_register_executes(pe);
}

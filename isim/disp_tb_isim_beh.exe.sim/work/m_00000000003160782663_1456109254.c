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
static const char *ng0 = "C:/Xilinx/Projects/CSM152A_Lab4/Lab4_cleaned/cell_sprite.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {80, 0};
static unsigned int ng4[] = {0U, 0U};



static void Always_52_0(char *t0)
{
    char t17[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t51[8];
    char t54[8];
    char t77[8];
    char t92[8];
    char t95[8];
    char t103[8];
    char t134[8];
    char t149[8];
    char t150[8];
    char t154[8];
    char t162[8];
    char t203[8];
    char t207[8];
    char t208[8];
    char t209[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
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
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    char *t202;
    char *t204;
    char *t205;
    char *t206;

LAB0:    t1 = (t0 + 2432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2628);
    *((int *)t2) = 1;
    t3 = (t0 + 2460);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1128U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(67, ng0);

LAB28:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1220U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1312U);
    t3 = *((char **)t2);
    t2 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB31:
LAB13:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1036U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);

LAB14:    xsi_set_current_line(58, ng0);
    t7 = (t0 + 1220U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1496U);
    t3 = *((char **)t2);
    t2 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB17:    goto LAB13;

LAB9:    xsi_set_current_line(62, ng0);

LAB21:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1220U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1588U);
    t3 = *((char **)t2);
    t2 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB24:    goto LAB13;

LAB15:    xsi_set_current_line(58, ng0);
    t14 = (t0 + 1496U);
    t15 = *((char **)t14);
    t14 = (t0 + 1404U);
    t16 = *((char **)t14);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t14 = (t15 + 4);
    t21 = (t16 + 4);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB18;

LAB19:
LAB20:    t44 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t44, t17, 0, 0, 8, 0LL);
    goto LAB17;

LAB18:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t17) = (t28 | t29);
    t30 = (t15 + 4);
    t31 = (t16 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t16);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB20;

LAB22:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 1588U);
    t8 = *((char **)t7);
    t7 = (t0 + 1404U);
    t14 = *((char **)t7);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t7 = (t8 + 4);
    t15 = (t14 + 4);
    t16 = (t17 + 4);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    *((unsigned int *)t16) = t25;
    t26 = *((unsigned int *)t16);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB25;

LAB26:
LAB27:    t30 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t30, t17, 0, 0, 8, 0LL);
    goto LAB24;

LAB25:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t16);
    *((unsigned int *)t17) = (t28 | t29);
    t21 = (t8 + 4);
    t22 = (t14 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t8);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t22);
    t37 = (~(t36));
    t38 = *((unsigned int *)t14);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t40);
    t43 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t43 & t41);
    goto LAB27;

LAB29:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1312U);
    t7 = *((char **)t4);
    t4 = (t0 + 1404U);
    t8 = *((char **)t4);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t4 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = (t17 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    *((unsigned int *)t15) = t25;
    t26 = *((unsigned int *)t15);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB32;

LAB33:
LAB34:    t22 = (t0 + 1816);
    xsi_vlogvar_wait_assign_value(t22, t17, 0, 0, 8, 0LL);
    goto LAB31;

LAB32:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t15);
    *((unsigned int *)t17) = (t28 | t29);
    t16 = (t7 + 4);
    t21 = (t8 + 4);
    t32 = *((unsigned int *)t16);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t6 = (t34 & t33);
    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t8);
    t35 = (t38 & t37);
    t40 = (~(t6));
    t41 = (~(t35));
    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & t40);
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    goto LAB34;

LAB35:    xsi_set_current_line(74, ng0);

LAB38:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 852U);
    t7 = *((char **)t4);
    t4 = (t0 + 264);
    t8 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t7 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB40;

LAB39:    t14 = (t8 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB42;

LAB41:    *((unsigned int *)t17) = 1;

LAB42:    memset(t45, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t16) != 0)
        goto LAB46;

LAB47:    t22 = (t45 + 4);
    t25 = *((unsigned int *)t45);
    t26 = *((unsigned int *)t22);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB48;

LAB49:    memcpy(t54, t45, 8);

LAB50:    memset(t77, 0, 8);
    t78 = (t54 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t78) != 0)
        goto LAB65;

LAB66:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB67;

LAB68:    memcpy(t103, t77, 8);

LAB69:    memset(t134, 0, 8);
    t135 = (t103 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t103);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t135) != 0)
        goto LAB84;

LAB85:    t142 = (t134 + 4);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB86;

LAB87:    memcpy(t162, t134, 8);

LAB88:    t194 = (t162 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t162);
    t198 = (t197 & t196);
    t199 = (t198 != 0);
    if (t199 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1908);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);

LAB103:    goto LAB37;

LAB40:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t45) = 1;
    goto LAB47;

LAB46:    t21 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB48:    t30 = (t0 + 852U);
    t31 = *((char **)t30);
    t30 = (t0 + 264);
    t44 = *((char **)t30);
    t30 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t44, 32, t30, 32);
    memset(t47, 0, 8);
    t48 = (t31 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB52;

LAB51:    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t31) < *((unsigned int *)t46))
        goto LAB53;

LAB54:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t28 = *((unsigned int *)t52);
    t29 = (~(t28));
    t32 = *((unsigned int *)t47);
    t33 = (t32 & t29);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t52) != 0)
        goto LAB58;

LAB59:    t36 = *((unsigned int *)t45);
    t37 = *((unsigned int *)t51);
    t38 = (t36 & t37);
    *((unsigned int *)t54) = t38;
    t55 = (t45 + 4);
    t56 = (t51 + 4);
    t57 = (t54 + 4);
    t40 = *((unsigned int *)t55);
    t41 = *((unsigned int *)t56);
    t42 = (t40 | t41);
    *((unsigned int *)t57) = t42;
    t43 = *((unsigned int *)t57);
    t58 = (t43 != 0);
    if (t58 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB50;

LAB52:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t47) = 1;
    goto LAB54;

LAB56:    *((unsigned int *)t51) = 1;
    goto LAB59;

LAB58:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB59;

LAB60:    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t57);
    *((unsigned int *)t54) = (t59 | t60);
    t61 = (t45 + 4);
    t62 = (t51 + 4);
    t63 = *((unsigned int *)t45);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t6 = (t64 & t66);
    t35 = (t68 & t70);
    t71 = (~(t6));
    t72 = (~(t35));
    t73 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t73 & t71);
    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & t72);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t71);
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t72);
    goto LAB62;

LAB63:    *((unsigned int *)t77) = 1;
    goto LAB66;

LAB65:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB66;

LAB67:    t89 = (t0 + 944U);
    t90 = *((char **)t89);
    t89 = (t0 + 344);
    t91 = *((char **)t89);
    memset(t92, 0, 8);
    t89 = (t90 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB71;

LAB70:    t93 = (t91 + 4);
    if (*((unsigned int *)t93) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t90) < *((unsigned int *)t91))
        goto LAB73;

LAB72:    *((unsigned int *)t92) = 1;

LAB73:    memset(t95, 0, 8);
    t96 = (t92 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t92);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t96) != 0)
        goto LAB77;

LAB78:    t104 = *((unsigned int *)t77);
    t105 = *((unsigned int *)t95);
    t106 = (t104 & t105);
    *((unsigned int *)t103) = t106;
    t107 = (t77 + 4);
    t108 = (t95 + 4);
    t109 = (t103 + 4);
    t110 = *((unsigned int *)t107);
    t111 = *((unsigned int *)t108);
    t112 = (t110 | t111);
    *((unsigned int *)t109) = t112;
    t113 = *((unsigned int *)t109);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB69;

LAB71:    t94 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB73;

LAB75:    *((unsigned int *)t95) = 1;
    goto LAB78;

LAB77:    t102 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB78;

LAB79:    t115 = *((unsigned int *)t103);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t103) = (t115 | t116);
    t117 = (t77 + 4);
    t118 = (t95 + 4);
    t119 = *((unsigned int *)t77);
    t120 = (~(t119));
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t123 = *((unsigned int *)t95);
    t124 = (~(t123));
    t125 = *((unsigned int *)t118);
    t126 = (~(t125));
    t39 = (t120 & t122);
    t127 = (t124 & t126);
    t128 = (~(t39));
    t129 = (~(t127));
    t130 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t130 & t128);
    t131 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t131 & t129);
    t132 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t132 & t128);
    t133 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t133 & t129);
    goto LAB81;

LAB82:    *((unsigned int *)t134) = 1;
    goto LAB85;

LAB84:    t141 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB85;

LAB86:    t146 = (t0 + 944U);
    t147 = *((char **)t146);
    t146 = (t0 + 344);
    t148 = *((char **)t146);
    t146 = ((char*)((ng3)));
    memset(t149, 0, 8);
    xsi_vlog_unsigned_add(t149, 32, t148, 32, t146, 32);
    memset(t150, 0, 8);
    t151 = (t147 + 4);
    if (*((unsigned int *)t151) != 0)
        goto LAB90;

LAB89:    t152 = (t149 + 4);
    if (*((unsigned int *)t152) != 0)
        goto LAB90;

LAB93:    if (*((unsigned int *)t147) < *((unsigned int *)t149))
        goto LAB91;

LAB92:    memset(t154, 0, 8);
    t155 = (t150 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t150);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t155) != 0)
        goto LAB96;

LAB97:    t163 = *((unsigned int *)t134);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t134 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB88;

LAB90:    t153 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB92;

LAB91:    *((unsigned int *)t150) = 1;
    goto LAB92;

LAB94:    *((unsigned int *)t154) = 1;
    goto LAB97;

LAB96:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB97;

LAB98:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t134 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t134);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB100;

LAB101:    xsi_set_current_line(81, ng0);
    t200 = (t0 + 852U);
    t201 = *((char **)t200);
    t200 = (t0 + 264);
    t202 = *((char **)t200);
    memset(t203, 0, 8);
    xsi_vlog_unsigned_minus(t203, 32, t201, 10, t202, 32);
    t200 = ((char*)((ng3)));
    t204 = (t0 + 944U);
    t205 = *((char **)t204);
    t204 = (t0 + 344);
    t206 = *((char **)t204);
    memset(t207, 0, 8);
    xsi_vlog_unsigned_minus(t207, 32, t205, 10, t206, 32);
    memset(t208, 0, 8);
    xsi_vlog_unsigned_multiply(t208, 32, t200, 32, t207, 32);
    memset(t209, 0, 8);
    xsi_vlog_unsigned_add(t209, 32, t203, 32, t208, 32);
    t204 = (t0 + 1908);
    xsi_vlogvar_wait_assign_value(t204, t209, 0, 0, 13, 0LL);
    goto LAB103;

}


extern void work_m_00000000003160782663_1456109254_init()
{
	static char *pe[] = {(void *)Always_52_0};
	xsi_register_didat("work_m_00000000003160782663_1456109254", "isim/disp_tb_isim_beh.exe.sim/work/m_00000000003160782663_1456109254.didat");
	xsi_register_executes(pe);
}

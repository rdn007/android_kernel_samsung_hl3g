/* linux/arch/arm/mach-exynos/include/mach/asv-exynos5260.h
*
* Copyright (c) 2013 Samsung Electronics Co., Ltd.
*              http://www.samsung.com/
*
* EXYNOS5260 - Adoptive Support Voltage Header file
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_EXYNOS5260_ASV_H
#define __ASM_ARCH_EXYNOS5260_ASV_H __FILE__

#define ARM_DVFS_LEVEL_NR		(16)
#define ARM_ASV_GRP_NR			(16)
#define ARM_MAX_VOLT			(1350000)
#define KFC_DVFS_LEVEL_NR		(14)
#define KFC_ASV_GRP_NR			(16)
#define KFC_MAX_VOLT			(1350000)
#define MIF_DVFS_LEVEL_NR		(10)
#define MIF_ASV_GRP_NR			(16)
#define MIF_MAX_VOLT			(1050000)
#define G3D_DVFS_LEVEL_NR		(6)
#define G3D_ASV_GRP_NR			(16)
#define G3D_MAX_VOLT			(1200000)
#define INT_DVFS_LEVEL_NR		(6)
#define INT_ASV_GRP_NR			(16)
#define INT_MAX_VOLT			(1100000)
#define DISP_DVFS_LEVEL_NR		(4)
#define DISP_ASV_GRP_NR			(16)
#define DISP_MAX_VOLT			(1000000)

static unsigned int refer_table_get_asv[2][ARM_ASV_GRP_NR] = {
	{ 0,   0,   0,   0,   4,   5,   8,  12,  19,  29,  75,  90, 105, 999, 999, 999},
	{ 0,   0,   0,   0,  15,  18,  21,  25,  29,  32,  36,  40,  43, 999, 999, 999},
};

static unsigned int refer_use_table_get_asv[2][ARM_ASV_GRP_NR] = {
	{ 0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0},
	{ 0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0},
};

static unsigned int arm_asv_abb_info[ARM_DVFS_LEVEL_NR][ARM_ASV_GRP_NR + 1] = {
	{ 1700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X060, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1600000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1100000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  600000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
};

static unsigned int kfc_asv_abb_info[KFC_DVFS_LEVEL_NR][KFC_ASV_GRP_NR + 1] = {
	{ 1500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{ 1400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{ 1300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1100000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{ 1000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  600000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
};

static unsigned int mif_asv_abb_info[MIF_DVFS_LEVEL_NR][MIF_ASV_GRP_NR + 1] = {
	{  825000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{  725000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{  667000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  543000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  413000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  275000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  206000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  165000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  138000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  103000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
};

static unsigned int g3d_asv_abb_info[G3D_DVFS_LEVEL_NR][G3D_ASV_GRP_NR + 1] = {
	{  667000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  560000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  450000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  350000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  266000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  160000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
};

static unsigned int int_asv_abb_info[INT_DVFS_LEVEL_NR][INT_ASV_GRP_NR + 1] = {
	{  533000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X110,   ABB_X110, ABB_BYPASS, ABB_BYPASS},
	{  333000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  266000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  160000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
	{  100000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X110,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_BYPASS, ABB_BYPASS},
};

static unsigned int arm_asv_volt_info[ARM_DVFS_LEVEL_NR][ARM_ASV_GRP_NR + 1] = {
	{ 1700000,       0,       0,       0,       0, 1300000, 1300000, 1275000, 1250000, 1225000, 1200000, 1175000, 1175000, 1150000, 1125000,       0,       0},
	{ 1600000,       0,       0,       0,       0, 1275000, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1125000, 1100000, 1075000,       0,       0},
	{ 1500000,       0,       0,       0,       0, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1100000, 1075000, 1050000,       0,       0},
	{ 1400000,       0,       0,       0,       0, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1075000, 1075000, 1050000, 1025000,       0,       0},
	{ 1300000,       0,       0,       0,       0, 1175000, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1025000, 1000000,  975000,       0,       0},
	{ 1200000,       0,       0,       0,       0, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000,  975000,  975000,  950000,  925000,       0,       0},
	{ 1100000,       0,       0,       0,       0, 1100000, 1075000, 1050000, 1025000, 1000000,  975000,  950000,  950000,  925000,  900000,       0,       0},
	{ 1000000,       0,       0,       0,       0, 1075000, 1050000, 1025000, 1000000,  975000,  950000,  925000,  925000,  900000,  875000,       0,       0},
	{  900000,       0,       0,       0,       0, 1025000, 1000000,  975000,  950000,  925000,  900000,  875000,  875000,  850000,  825000,       0,       0},
	{  800000,       0,       0,       0,       0, 1000000,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  825000,  800000,       0,       0},
	{  700000,       0,       0,       0,       0,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
	{  600000,       0,       0,       0,       0,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
	{  500000,       0,       0,       0,       0,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
	{  400000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
	{  300000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
	{  200000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  825000,  800000,       0,       0},
};

static unsigned int kfc_asv_volt_info[KFC_DVFS_LEVEL_NR][KFC_ASV_GRP_NR + 1] = {
	{ 1500000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{ 1400000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{ 1300000,       0,       0,       0,       0, 1275000, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1125000, 1100000, 1075000,       0,       0},
	{ 1200000,       0,       0,       0,       0, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1075000, 1075000, 1050000, 1025000,       0,       0},
	{ 1100000,       0,       0,       0,       0, 1175000, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1025000, 1000000,  975000,       0,       0},
	{ 1000000,       0,       0,       0,       0, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000,  975000,  975000,  950000,  925000,       0,       0},
	{  900000,       0,       0,       0,       0, 1075000, 1050000, 1025000, 1000000,  975000,  950000,  925000,  925000,  900000,  875000,       0,       0},
	{  800000,       0,       0,       0,       0, 1050000, 1025000, 1000000,  975000,  950000,  925000,  900000,  900000,  875000,  850000,       0,       0},
	{  700000,       0,       0,       0,       0, 1000000,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,       0,       0},
	{  600000,       0,       0,       0,       0,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  500000,       0,       0,       0,       0,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  400000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  300000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  200000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
};

static unsigned int mif_asv_volt_info[MIF_DVFS_LEVEL_NR][MIF_ASV_GRP_NR + 1] = {
	{  825000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{  725000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{  667000,       0,       0,       0,       0, 1025000, 1000000, 1000000,  975000,  975000,  950000,  950000,  925000,  925000,  925000,       0,       0},
	{  543000,       0,       0,       0,       0, 1025000, 1000000, 1000000,  975000,  975000,  950000,  950000,  925000,  925000,  925000,       0,       0},
	{  413000,       0,       0,       0,       0,  950000,  925000,  925000,  900000,  900000,  875000,  875000,  850000,  850000,  850000,       0,       0},
	{  275000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  206000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  165000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  138000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  103000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
};

static unsigned int g3d_asv_volt_info[G3D_DVFS_LEVEL_NR][G3D_ASV_GRP_NR + 1] = {
	{  667000,       0,       0,       0,       0, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000, 1000000,  975000,  950000,       0,       0},
	{  560000,       0,       0,       0,       0, 1050000, 1025000, 1000000,  975000,  950000,  925000,  900000,  900000,  875000,  850000,       0,       0},
	{  450000,       0,       0,       0,       0,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  350000,       0,       0,       0,       0,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  266000,       0,       0,       0,       0,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  160000,       0,       0,       0,       0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
};

static unsigned int int_asv_volt_info[INT_DVFS_LEVEL_NR][INT_ASV_GRP_NR + 1] = {
	{  533000,       0,       0,       0,       0, 1050000, 1025000, 1025000, 1000000,  975000,  950000,  925000,  925000,  900000,  875000,       0,       0},
	{  400000,       0,       0,       0,       0, 1000000,  975000,  975000,  950000,  925000,  900000,  875000,  875000,  850000,  850000,       0,       0},
	{  333000,       0,       0,       0,       0,  975000,  950000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,       0,       0},
	{  266000,       0,       0,       0,       0,  962500,  937500,  937500,  912500,  887500,  862500,  850000,  850000,  850000,  850000,       0,       0},
	{  160000,       0,       0,       0,       0,  900000,  875000,  862500,  862500,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  100000,       0,       0,       0,       0,  900000,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
};

static unsigned int disp_asv_volt_info[DISP_DVFS_LEVEL_NR][DISP_ASV_GRP_NR + 1] = {
	{  333000,       0,       0,       0,       0,  950000,  925000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  222000,       0,       0,       0,       0,  900000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  167000,       0,       0,       0,       0,  875000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
	{  111000,       0,       0,       0,       0,  875000,  875000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,       0,       0},
};

#endif /* EXYNOS5260_ASV_H */

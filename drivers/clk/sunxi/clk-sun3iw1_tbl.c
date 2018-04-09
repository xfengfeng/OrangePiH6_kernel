/*
 * Copyright (C) 2016 Allwinnertech, czy <chenzunyin@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "clk-sun3iw1.h"

/* PLLCPU(n,k,m,p,freq)	F_N8X5_K4X2_M0X2_P16X2 */
struct sunxi_clk_factor_freq factor_pllcpu_tbl[] = {
PLLCPU(9, 0, 0, 2, 60000000U),
PLLCPU(10, 0, 0, 2, 66000000U),
PLLCPU(11, 0, 0, 2, 72000000U),
PLLCPU(12, 0, 0, 2, 78000000U),
PLLCPU(13, 0, 0, 2, 84000000U),
PLLCPU(14, 0, 0, 2, 90000000U),
PLLCPU(15, 0, 0, 2, 96000000U),
PLLCPU(16, 0, 0, 2, 102000000U),
PLLCPU(17, 0, 0, 2, 108000000U),
PLLCPU(18, 0, 0, 2, 114000000U),
PLLCPU(9, 0, 0, 1, 120000000U),
PLLCPU(10, 0, 0, 1, 132000000U),
PLLCPU(11, 0, 0, 1, 144000000U),
PLLCPU(12, 0, 0, 1, 156000000U),
PLLCPU(13, 0, 0, 1, 168000000U),
PLLCPU(14, 0, 0, 1, 180000000U),
PLLCPU(15, 0, 0, 1, 192000000U),
PLLCPU(16, 0, 0, 1, 204000000U),
PLLCPU(17, 0, 0, 1, 216000000U),
PLLCPU(18, 0, 0, 1, 228000000U),
PLLCPU(9, 0, 0, 0, 240000000U),
PLLCPU(10, 0, 0, 0, 264000000U),
PLLCPU(11, 0, 0, 0, 288000000U),
PLLCPU(12, 0, 0, 0, 312000000U),
PLLCPU(13, 0, 0, 0, 336000000U),
PLLCPU(14, 0, 0, 0, 360000000U),
PLLCPU(15, 0, 0, 0, 384000000U),
PLLCPU(16, 0, 0, 0, 408000000U),
PLLCPU(17, 0, 0, 0, 432000000U),
PLLCPU(18, 0, 0, 0, 456000000U),
PLLCPU(19, 0, 0, 0, 480000000U),
PLLCPU(20, 0, 0, 0, 504000000U),
PLLCPU(21, 0, 0, 0, 528000000U),
PLLCPU(22, 0, 0, 0, 552000000U),
PLLCPU(23, 0, 0, 0, 576000000U),
PLLCPU(24, 0, 0, 0, 600000000U),
PLLCPU(25, 0, 0, 0, 624000000U),
PLLCPU(26, 0, 0, 0, 648000000U),
PLLCPU(27, 0, 0, 0, 672000000U),
PLLCPU(28, 0, 0, 0, 696000000U),
PLLCPU(29, 0, 0, 0, 720000000U),
PLLCPU(30, 0, 0, 0, 744000000U),
PLLCPU(31, 0, 0, 0, 768000000U),
PLLCPU(10, 2, 0, 0, 792000000U),
PLLCPU(16, 1, 0, 0, 816000000U),
PLLCPU(8, 3, 0, 0, 864000000U),
PLLCPU(9, 3, 0, 0, 960000000U),
PLLCPU(10, 3, 0, 0, 1056000000U),
PLLCPU(11, 3, 0, 0, 1152000000U),
};

/* PLLVIDEO(n,m,freq)	F_N8X7_M0X4 */
struct sunxi_clk_factor_freq factor_pllvideo_tbl[] = {
PLLVIDEO(33, 2, 272000000U),
PLLVIDEO(34, 2, 280000000U),
PLLVIDEO(11, 0, 288000000U),
PLLVIDEO(96, 7, 291000000U),
PLLVIDEO(48, 3, 294000000U),
PLLVIDEO(36, 2, 296000000U),
PLLVIDEO(98, 7, 297000000U),
PLLVIDEO(24, 1, 300000000U),
PLLVIDEO(100, 7, 303000000U),
PLLVIDEO(37, 2, 304000000U),
PLLVIDEO(50, 3, 306000000U),
PLLVIDEO(102, 7, 309000000U),
PLLVIDEO(12, 0, 312000000U),
PLLVIDEO(104, 7, 315000000U),
PLLVIDEO(52, 3, 318000000U),
PLLVIDEO(39, 2, 320000000U),
PLLVIDEO(106, 7, 321000000U),
PLLVIDEO(26, 1, 324000000U),
PLLVIDEO(108, 7, 327000000U),
PLLVIDEO(40, 2, 328000000U),
PLLVIDEO(54, 3, 330000000U),
PLLVIDEO(110, 7, 333000000U),
PLLVIDEO(13, 0, 336000000U),
PLLVIDEO(112, 7, 339000000U),
PLLVIDEO(56, 3, 342000000U),
PLLVIDEO(114, 7, 345000000U),
PLLVIDEO(28, 1, 348000000U),
PLLVIDEO(116, 7, 351000000U),
PLLVIDEO(58, 3, 354000000U),
PLLVIDEO(118, 7, 357000000U),
PLLVIDEO(14, 0, 360000000U),
PLLVIDEO(120, 7, 363000000U),
PLLVIDEO(60, 3, 366000000U),
PLLVIDEO(122, 7, 369000000U),
PLLVIDEO(30, 1, 372000000U),
PLLVIDEO(124, 7, 375000000U),
PLLVIDEO(62, 3, 378000000U),
PLLVIDEO(126, 7, 381000000U),
PLLVIDEO(15, 0, 384000000U),
PLLVIDEO(64, 3, 390000000U),
PLLVIDEO(32, 1, 396000000U),
PLLVIDEO(66, 3, 402000000U),
PLLVIDEO(16, 0, 408000000U),
PLLVIDEO(68, 3, 414000000U),
PLLVIDEO(34, 1, 420000000U),
PLLVIDEO(70, 3, 426000000U),
PLLVIDEO(17, 0, 432000000U),
PLLVIDEO(72, 3, 438000000U),
PLLVIDEO(36, 1, 444000000U),
PLLVIDEO(74, 3, 450000000U),
PLLVIDEO(18, 0, 456000000U),
PLLVIDEO(76, 3, 462000000U),
PLLVIDEO(38, 1, 468000000U),
PLLVIDEO(78, 3, 474000000U),
PLLVIDEO(19, 0, 480000000U),
PLLVIDEO(80, 3, 486000000U),
PLLVIDEO(40, 1, 492000000U),
PLLVIDEO(82, 3, 498000000U),
PLLVIDEO(20, 0, 504000000U),
PLLVIDEO(84, 3, 510000000U),
PLLVIDEO(85, 3, 516000000U),
PLLVIDEO(86, 3, 522000000U),
PLLVIDEO(21, 0, 528000000U),
PLLVIDEO(88, 3, 534000000U),
PLLVIDEO(89, 3, 540000000U),
PLLVIDEO(90, 3, 546000000U),
PLLVIDEO(22, 0, 552000000U),
PLLVIDEO(92, 3, 558000000U),
PLLVIDEO(93, 3, 564000000U),
PLLVIDEO(94, 3, 570000000U),
PLLVIDEO(23, 0, 576000000U),
PLLVIDEO(96, 3, 582000000U),
PLLVIDEO(97, 3, 588000000U),
PLLVIDEO(98, 3, 594000000U),
PLLVIDEO(24, 0, 600000000U),
PLLVIDEO(100, 3, 606000000U),
PLLVIDEO(101, 3, 612000000U),
PLLVIDEO(102, 3, 618000000U),
PLLVIDEO(25, 0, 624000000U),
PLLVIDEO(104, 3, 630000000U),
PLLVIDEO(105, 3, 636000000U),
PLLVIDEO(106, 3, 642000000U),
PLLVIDEO(26, 0, 648000000U),
PLLVIDEO(108, 3, 654000000U),
PLLVIDEO(109, 3, 660000000U),
PLLVIDEO(110, 3, 666000000U),
PLLVIDEO(27, 0, 672000000U),
PLLVIDEO(112, 3, 678000000U),
PLLVIDEO(113, 3, 684000000U),
PLLVIDEO(114, 3, 690000000U),
PLLVIDEO(28, 0, 696000000U),
PLLVIDEO(116, 3, 702000000U),
PLLVIDEO(117, 3, 708000000U),
PLLVIDEO(118, 3, 714000000U),
PLLVIDEO(29, 0, 720000000U),
PLLVIDEO(120, 3, 726000000U),
PLLVIDEO(121, 3, 732000000U),
PLLVIDEO(122, 3, 738000000U),
PLLVIDEO(30, 0, 744000000U),
PLLVIDEO(124, 3, 750000000U),
PLLVIDEO(125, 3, 756000000U),
PLLVIDEO(126, 3, 762000000U),
PLLVIDEO(31, 0, 768000000U),
PLLVIDEO(32, 0, 792000000U),
PLLVIDEO(33, 0, 816000000U),
PLLVIDEO(34, 0, 840000000U),
};

/* PLLVE(n,m,freq)	F_N8X7_M0X4 */
struct sunxi_clk_factor_freq factor_pllve_tbl[] = {
PLLVE(21, 1, 264000000U),
PLLVE(33, 2, 272000000U),
PLLVE(22, 1, 276000000U),
PLLVE(34, 2, 280000000U),
PLLVE(46, 3, 282000000U),
PLLVE(94, 7, 285000000U),
PLLVE(11, 0, 288000000U),
PLLVE(96, 7, 291000000U),
PLLVE(48, 3, 294000000U),
PLLVE(36, 2, 296000000U),
PLLVE(98, 7, 297000000U),
PLLVE(24, 1, 300000000U),
PLLVE(100, 7, 303000000U),
PLLVE(37, 2, 304000000U),
PLLVE(50, 3, 306000000U),
PLLVE(102, 7, 309000000U),
PLLVE(12, 0, 312000000U),
PLLVE(104, 7, 315000000U),
PLLVE(52, 3, 318000000U),
PLLVE(39, 2, 320000000U),
PLLVE(106, 7, 321000000U),
PLLVE(26, 1, 324000000U),
PLLVE(108, 7, 327000000U),
PLLVE(40, 2, 328000000U),
PLLVE(54, 3, 330000000U),
PLLVE(110, 7, 333000000U),
PLLVE(13, 0, 336000000U),
PLLVE(112, 7, 339000000U),
PLLVE(56, 3, 342000000U),
PLLVE(114, 7, 345000000U),
PLLVE(28, 1, 348000000U),
PLLVE(116, 7, 351000000U),
PLLVE(58, 3, 354000000U),
PLLVE(118, 7, 357000000U),
PLLVE(14, 0, 360000000U),
PLLVE(120, 7, 363000000U),
PLLVE(60, 3, 366000000U),
PLLVE(122, 7, 369000000U),
PLLVE(30, 1, 372000000U),
PLLVE(124, 7, 375000000U),
PLLVE(62, 3, 378000000U),
PLLVE(126, 7, 381000000U),
PLLVE(15, 0, 384000000U),
PLLVE(64, 3, 390000000U),
PLLVE(32, 1, 396000000U),
PLLVE(66, 3, 402000000U),
PLLVE(16, 0, 408000000U),
PLLVE(68, 3, 414000000U),
PLLVE(34, 1, 420000000U),
PLLVE(70, 3, 426000000U),
PLLVE(17, 0, 432000000U),
PLLVE(72, 3, 438000000U),
PLLVE(36, 1, 444000000U),
PLLVE(74, 3, 450000000U),
PLLVE(18, 0, 456000000U),
PLLVE(76, 3, 462000000U),
PLLVE(38, 1, 468000000U),
PLLVE(78, 3, 474000000U),
PLLVE(19, 0, 480000000U),
PLLVE(80, 3, 486000000U),
PLLVE(40, 1, 492000000U),
PLLVE(82, 3, 498000000U),
PLLVE(20, 0, 504000000U),
PLLVE(84, 3, 510000000U),
PLLVE(85, 3, 516000000U),
PLLVE(86, 3, 522000000U),
PLLVE(21, 0, 528000000U),
PLLVE(88, 3, 534000000U),
PLLVE(89, 3, 540000000U),
PLLVE(90, 3, 546000000U),
PLLVE(22, 0, 552000000U),
PLLVE(92, 3, 558000000U),
PLLVE(93, 3, 564000000U),
PLLVE(94, 3, 570000000U),
PLLVE(23, 0, 576000000U),
PLLVE(96, 3, 582000000U),
PLLVE(97, 3, 588000000U),
PLLVE(98, 3, 594000000U),
PLLVE(24, 0, 600000000U),
PLLVE(100, 3, 606000000U),
PLLVE(101, 3, 612000000U),
PLLVE(102, 3, 618000000U),
PLLVE(25, 0, 624000000U),
PLLVE(104, 3, 630000000U),
PLLVE(105, 3, 636000000U),
PLLVE(106, 3, 642000000U),
PLLVE(26, 0, 648000000U),
PLLVE(108, 3, 654000000U),
PLLVE(109, 3, 660000000U),
PLLVE(110, 3, 666000000U),
PLLVE(27, 0, 672000000U),
PLLVE(112, 3, 678000000U),
PLLVE(113, 3, 684000000U),
PLLVE(114, 3, 690000000U),
PLLVE(28, 0, 696000000U),
PLLVE(116, 3, 702000000U),
PLLVE(117, 3, 708000000U),
PLLVE(118, 3, 714000000U),
PLLVE(29, 0, 720000000U),
PLLVE(120, 3, 726000000U),
PLLVE(121, 3, 732000000U),
PLLVE(122, 3, 738000000U),
PLLVE(30, 0, 744000000U),
PLLVE(124, 3, 750000000U),
PLLVE(125, 3, 756000000U),
PLLVE(126, 3, 762000000U),
PLLVE(31, 0, 768000000U),
PLLVE(32, 0, 792000000U),
PLLVE(33, 0, 816000000U),
};

/* PLLDDR(n,k,m,freq)	F_N8X5_K4X2_M0X2 */
struct sunxi_clk_factor_freq factor_pllddr_tbl[] = {
PLLDDR(6, 2, 3, 126000000U),
PLLDDR(7, 2, 3, 144000000U),
PLLDDR(12, 1, 3, 156000000U),
PLLDDR(8, 2, 3, 162000000U),
PLLDDR(6, 2, 2, 168000000U),
PLLDDR(21, 0, 2, 176000000U),
PLLDDR(14, 0, 1, 180000000U),
PLLDDR(22, 0, 2, 184000000U),
PLLDDR(7, 0, 0, 192000000U),
PLLDDR(10, 2, 3, 198000000U),
PLLDDR(24, 0, 2, 200000000U),
PLLDDR(16, 0, 1, 204000000U),
PLLDDR(25, 0, 2, 208000000U),
PLLDDR(8, 0, 0, 216000000U),
PLLDDR(27, 0, 2, 224000000U),
PLLDDR(18, 0, 1, 228000000U),
PLLDDR(28, 0, 2, 232000000U),
PLLDDR(12, 2, 3, 234000000U),
PLLDDR(9, 0, 0, 240000000U),
PLLDDR(30, 0, 2, 248000000U),
PLLDDR(20, 0, 1, 252000000U),
PLLDDR(31, 0, 2, 256000000U),
PLLDDR(10, 0, 0, 264000000U),
PLLDDR(14, 2, 3, 270000000U),
PLLDDR(22, 0, 1, 276000000U),
PLLDDR(11, 0, 0, 288000000U),
PLLDDR(24, 0, 1, 300000000U),
PLLDDR(18, 1, 2, 304000000U),
PLLDDR(16, 2, 3, 306000000U),
PLLDDR(12, 0, 0, 312000000U),
PLLDDR(19, 1, 2, 320000000U),
PLLDDR(26, 0, 1, 324000000U),
PLLDDR(13, 0, 0, 336000000U),
PLLDDR(18, 2, 3, 342000000U),
PLLDDR(28, 0, 1, 348000000U),
PLLDDR(21, 1, 2, 352000000U),
PLLDDR(14, 0, 0, 360000000U),
PLLDDR(22, 1, 2, 368000000U),
PLLDDR(30, 0, 1, 372000000U),
PLLDDR(20, 2, 3, 378000000U),
PLLDDR(15, 0, 0, 384000000U),
PLLDDR(10, 2, 1, 396000000U),
PLLDDR(24, 1, 2, 400000000U),
PLLDDR(16, 0, 0, 408000000U),
PLLDDR(22, 2, 3, 414000000U),
PLLDDR(25, 1, 2, 416000000U),
PLLDDR(17, 0, 0, 432000000U),
PLLDDR(27, 1, 2, 448000000U),
PLLDDR(24, 2, 3, 450000000U),
PLLDDR(18, 0, 0, 456000000U),
PLLDDR(28, 1, 2, 464000000U),
PLLDDR(12, 2, 1, 468000000U),
PLLDDR(19, 0, 0, 480000000U),
PLLDDR(26, 2, 3, 486000000U),
PLLDDR(30, 1, 2, 496000000U),
PLLDDR(20, 0, 0, 504000000U),
PLLDDR(31, 1, 2, 512000000U),
PLLDDR(28, 2, 3, 522000000U),
PLLDDR(21, 0, 0, 528000000U),
PLLDDR(14, 2, 1, 540000000U),
PLLDDR(16, 3, 2, 544000000U),
PLLDDR(22, 0, 0, 552000000U),
PLLDDR(23, 0, 0, 576000000U),
PLLDDR(24, 0, 0, 600000000U),
PLLDDR(18, 3, 2, 608000000U),
PLLDDR(16, 2, 1, 612000000U),
PLLDDR(25, 0, 0, 624000000U),
PLLDDR(19, 3, 2, 640000000U),
PLLDDR(26, 0, 0, 648000000U),
PLLDDR(27, 0, 0, 672000000U),
PLLDDR(18, 2, 1, 684000000U),
PLLDDR(28, 0, 0, 696000000U),
PLLDDR(21, 3, 2, 704000000U),
PLLDDR(29, 0, 0, 720000000U),
PLLDDR(30, 0, 0, 744000000U),
PLLDDR(20, 2, 1, 756000000U),
PLLDDR(31, 0, 0, 768000000U),
PLLDDR(10, 2, 0, 792000000U),
PLLDDR(16, 1, 0, 816000000U),
PLLDDR(22, 2, 1, 828000000U),
PLLDDR(8, 3, 0, 864000000U),
PLLDDR(24, 2, 1, 900000000U),
PLLDDR(18, 3, 1, 912000000U),
PLLDDR(25, 2, 1, 936000000U),
PLLDDR(9, 3, 0, 960000000U),
PLLDDR(26, 2, 1, 972000000U),
PLLDDR(27, 2, 1, 1008000000U),
PLLDDR(28, 2, 1, 1044000000U),
PLLDDR(10, 3, 0, 1056000000U),
PLLDDR(11, 3, 0, 1152000000U),
};

/* PLLPERIPH(n,k,freq)	F_N8X5_K4X2 */
struct sunxi_clk_factor_freq factor_pllperiph_tbl[] = {
PLLPERIPH(15, 0, 384000000U),
PLLPERIPH(16, 0, 408000000U),
PLLPERIPH(17, 0, 432000000U),
PLLPERIPH(18, 0, 456000000U),
PLLPERIPH(19, 0, 480000000U),
PLLPERIPH(20, 0, 504000000U),
PLLPERIPH(10, 1, 528000000U),
PLLPERIPH(22, 0, 552000000U),
PLLPERIPH(23, 0, 576000000U),
PLLPERIPH(24, 0, 600000000U),
PLLPERIPH(12, 1, 624000000U),
PLLPERIPH(8, 2, 648000000U),
PLLPERIPH(27, 0, 672000000U),
PLLPERIPH(28, 0, 696000000U),
PLLPERIPH(29, 0, 720000000U),
PLLPERIPH(30, 0, 744000000U),
PLLPERIPH(31, 0, 768000000U),
PLLPERIPH(10, 2, 792000000U),
PLLPERIPH(16, 1, 816000000U),
PLLPERIPH(17, 1, 864000000U),
PLLPERIPH(18, 1, 912000000U),
PLLPERIPH(12, 2, 936000000U),
PLLPERIPH(9, 3, 960000000U),
PLLPERIPH(20, 1, 1008000000U),
PLLPERIPH(22, 1, 1104000000U),
PLLPERIPH(11, 3, 1152000000U),
PLLPERIPH(24, 1, 1200000000U),
PLLPERIPH(16, 2, 1224000000U),
PLLPERIPH(12, 3, 1248000000U),
PLLPERIPH(26, 1, 1296000000U),
PLLPERIPH(13, 3, 1344000000U),
PLLPERIPH(18, 2, 1368000000U),
PLLPERIPH(28, 1, 1392000000U),
PLLPERIPH(14, 3, 1440000000U),
PLLPERIPH(30, 1, 1488000000U),
PLLPERIPH(20, 2, 1512000000U),
PLLPERIPH(31, 1, 1536000000U),
PLLPERIPH(21, 2, 1584000000U),
PLLPERIPH(16, 3, 1632000000U),
PLLPERIPH(22, 2, 1656000000U),
PLLPERIPH(23, 2, 1728000000U),
PLLPERIPH(24, 2, 1800000000U),
PLLPERIPH(18, 3, 1824000000U),
PLLPERIPH(25, 2, 1872000000U),
};

static unsigned int pllcpu_max, pllvideo_max,
			pllve_max, pllddr_max , pllperiph_max;

#define PLL_MAX_ASSIGN(name) (pll##name##_max = \
		factor_pll##name##_tbl[\
		ARRAY_SIZE(factor_pll##name##_tbl)-1].freq)

void sunxi_clk_factor_initlimits(void)
{
	PLL_MAX_ASSIGN(cpu);
	PLL_MAX_ASSIGN(video);
	PLL_MAX_ASSIGN(ve);
	PLL_MAX_ASSIGN(ddr);
	PLL_MAX_ASSIGN(periph);
}
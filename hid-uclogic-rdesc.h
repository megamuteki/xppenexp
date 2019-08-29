/* SPDX-License-Identifier: GPL-2.0+ */
/*
 *  HID driver for UC-Logic devices not fully compliant with HID standard
 *  - original and fixed report descriptors
 *
 *  Copyright (c) 2010-2018 Nikolai Kondrashov
 *  Copyright (c) 2013 Martin Rusko
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#ifndef _HID_UCLOGIC_RDESC_H
#define _HID_UCLOGIC_RDESC_H

#include <linux/usb.h>

/* Size of the original descriptor of WPXXXXU tablets */
#define UCLOGIC_RDESC_WPXXXXU_ORIG_SIZE		212

/* Fixed WP4030U report descriptor */
extern __u8 uclogic_rdesc_wp4030u_fixed_arr[];
extern const size_t uclogic_rdesc_wp4030u_fixed_size;

/* Fixed WP5540U report descriptor */
extern __u8 uclogic_rdesc_wp5540u_fixed_arr[];
extern const size_t uclogic_rdesc_wp5540u_fixed_size;

/* Fixed WP8060U report descriptor */
extern __u8 uclogic_rdesc_wp8060u_fixed_arr[];
extern const size_t uclogic_rdesc_wp8060u_fixed_size;

/* Size of the original descriptor of the new WP5540U tablet */
#define UCLOGIC_RDESC_WP5540U_V2_ORIG_SIZE	232

/* Size of the original descriptor of WP1062 tablet */
#define UCLOGIC_RDESC_WP1062_ORIG_SIZE		254

/* Fixed WP1062 report descriptor */
extern __u8 uclogic_rdesc_wp1062_fixed_arr[];
extern const size_t uclogic_rdesc_wp1062_fixed_size;

/* Size of the original descriptor of PF1209 tablet */
#define UCLOGIC_RDESC_PF1209_ORIG_SIZE		234

/* Fixed PF1209 report descriptor */
extern __u8 uclogic_rdesc_pf1209_fixed_arr[];
extern const size_t uclogic_rdesc_pf1209_fixed_size;

/* Size of the original descriptors of TWHL850 tablet */
#define UCLOGIC_RDESC_TWHL850_ORIG0_SIZE	182
#define UCLOGIC_RDESC_TWHL850_ORIG1_SIZE	161
#define UCLOGIC_RDESC_TWHL850_ORIG2_SIZE	92

/* Fixed PID 0522 tablet report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_twhl850_fixed0_arr[];
extern const size_t uclogic_rdesc_twhl850_fixed0_size;

/* Fixed PID 0522 tablet report descriptor, interface 1 (mouse) */
extern __u8 uclogic_rdesc_twhl850_fixed1_arr[];
extern const size_t uclogic_rdesc_twhl850_fixed1_size;

/* Fixed PID 0522 tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_twhl850_fixed2_arr[];
extern const size_t uclogic_rdesc_twhl850_fixed2_size;

/* Size of the original descriptors of TWHA60 tablet */
#define UCLOGIC_RDESC_TWHA60_ORIG0_SIZE		254
#define UCLOGIC_RDESC_TWHA60_ORIG1_SIZE		139

/* Fixed TWHA60 report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_twha60_fixed0_arr[];
extern const size_t uclogic_rdesc_twha60_fixed0_size;

/* Fixed TWHA60 report descriptor, interface 1 (frame buttons) */
extern __u8 uclogic_rdesc_twha60_fixed1_arr[];
extern const size_t uclogic_rdesc_twha60_fixed1_size;

/* Report descriptor template placeholder head */
#define UCLOGIC_RDESC_PH_HEAD	0xFE, 0xED, 0x1D

/* Apply report descriptor parameters to a report descriptor template */
extern __u8 *uclogic_rdesc_template_apply(const __u8 *template_ptr,
					  size_t template_size,
					  const s32 *param_list,
					  size_t param_num);

/* Pen report descriptor template placeholder IDs */
enum uclogic_rdesc_pen_ph_id {
	UCLOGIC_RDESC_PEN_PH_ID_X_LM,
	UCLOGIC_RDESC_PEN_PH_ID_X_PM,
	UCLOGIC_RDESC_PEN_PH_ID_Y_LM,
	UCLOGIC_RDESC_PEN_PH_ID_Y_PM,
	UCLOGIC_RDESC_PEN_PH_ID_PRESSURE_LM,
	UCLOGIC_RDESC_PEN_PH_ID_NUM
};

/* Report descriptor pen template placeholder */
#define UCLOGIC_RDESC_PEN_PH(_ID) \
	UCLOGIC_RDESC_PH_HEAD, UCLOGIC_RDESC_PEN_PH_ID_##_ID

/* Report ID for v1 pen reports */
#define UCLOGIC_RDESC_PEN_V1_ID	0x07

/* Fixed report descriptor template for (tweaked) v1 pen reports */
extern const __u8 uclogic_rdesc_pen_v1_template_arr[];
extern const size_t uclogic_rdesc_pen_v1_template_size;

/* Report ID for v2 pen reports */
#define UCLOGIC_RDESC_PEN_V2_ID	0x08

/* Fixed report descriptor template for (tweaked) v2 pen reports */
extern const __u8 uclogic_rdesc_pen_v2_template_arr[];
extern const size_t uclogic_rdesc_pen_v2_template_size;

/* Fixed report descriptor for (tweaked) v1 buttonpad reports */
extern const __u8 uclogic_rdesc_buttonpad_v1_arr[];
extern const size_t uclogic_rdesc_buttonpad_v1_size;

/* Report ID for tweaked v1 buttonpad reports */
#define UCLOGIC_RDESC_BUTTONPAD_V1_ID 0xf7

/* Fixed report descriptor for (tweaked) v2 buttonpad reports */
extern const __u8 uclogic_rdesc_buttonpad_v2_arr[];
extern const size_t uclogic_rdesc_buttonpad_v2_size;

/* Report ID for tweaked v2 buttonpad reports */
#define UCLOGIC_RDESC_BUTTONPAD_V2_ID 0xf7

/* Fixed report descriptor for Ugee EX07 buttonpad */
extern const __u8 uclogic_rdesc_ugee_ex07_buttonpad_arr[];
extern const size_t uclogic_rdesc_ugee_ex07_buttonpad_size;


/* Fixed report descriptor for Ugee G5 frame controls */
extern const __u8 uclogic_rdesc_ugee_g5_frame_arr[];
extern const size_t uclogic_rdesc_ugee_g5_frame_size;

/* Report ID of Ugee G5 frame control reports */
#define UCLOGIC_RDESC_UGEE_G5_FRAME_ID 0x06

/* Device ID byte offset in Ugee G5 frame report */
#define UCLOGIC_RDESC_UGEE_G5_FRAME_DEV_ID_BYTE	0x2

/* Least-significant bit of Ugee G5 frame rotary encoder state */
#define UCLOGIC_RDESC_UGEE_G5_FRAME_RE_LSB 38




/* Size of the original descriptors of STAR01 tablet */
#define UCLOGIC_RDESC_STAR01_ORIG0_SIZE	177
#define UCLOGIC_RDESC_STAR01_ORIG1_SIZE	98
#define UCLOGIC_RDESC_STAR01_ORIG2_SIZE	92

/* Fixed STAR01 tablet report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_star01_fixed0_arr[];
extern const size_t uclogic_rdesc_star01_fixed0_size;

/* Fixed STAR01 tablet report descriptor, interface 1 (mouse) */
extern __u8 uclogic_rdesc_star01_fixed1_arr[];
extern const size_t uclogic_rdesc_star01_fixed1_size;

/* Fixed STAR01 tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_star01_fixed2_arr[];
extern const size_t uclogic_rdesc_star01_fixed2_size;

/* Size of the original descriptors of ART22E tablet */
#define UCLOGIC_RDESC_ART22E_ORIG0_SIZE	179
#define UCLOGIC_RDESC_ART22E_ORIG1_SIZE	183
#define UCLOGIC_RDESC_ART22E_ORIG2_SIZE	92

/* Fixed ART22E tablet report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_art22e_fixed0_arr[];
extern const size_t uclogic_rdesc_art22e_fixed0_size;

/* Fixed ART22E tablet report descriptor, interface 1 (mouse) */
extern __u8 uclogic_rdesc_art22e_fixed1_arr[];
extern const size_t uclogic_rdesc_art22e_fixed1_size;

/* Fixed ART22E tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art22e_fixed2_arr[];
extern const size_t uclogic_rdesc_art22e_fixed2_size;


/* Size of the original descriptors of ART156PRO tablet */
#define UCLOGIC_RDESC_ART156PRO_ORIG0_SIZE	177
#define UCLOGIC_RDESC_ART156PRO_ORIG1_SIZE	134
#define UCLOGIC_RDESC_ART156PRO_ORIG2_SIZE	36

/* Fixed ART156PRO tablet report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_art156pro_fixed0_arr[];
extern const size_t uclogic_rdesc_art156pro_fixed0_size;

/* Fixed ART156PRO tablet report descriptor, interface 1 (mouse) */
extern __u8 uclogic_rdesc_art156pro_fixed1_arr[];
extern const size_t uclogic_rdesc_art156pro_fixed1_size;

/* Fixed ART156PRO tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art156pro_fixed2_arr[];
extern const size_t uclogic_rdesc_art156pro_fixed2_size;

/* Size of the original descriptors of ART10SV2 tablet */
#define UCLOGIC_RDESC_ART10SV2_ORIG0_SIZE	177
#define UCLOGIC_RDESC_ART10SV2_ORIG1_SIZE	98
#define UCLOGIC_RDESC_ART10SV2_ORIG2_SIZE	92

/* Fixed art10sv2 tablet report descriptor, interface 0 (stylus) */
extern __u8 uclogic_rdesc_art10sv2_fixed0_arr[];
extern const size_t uclogic_rdesc_art10sv2_fixed0_size;

/* Fixed art10sv2 tablet report descriptor, interface 1 (mouse) */
extern __u8 uclogic_rdesc_art10sv2_fixed1_arr[];
extern const size_t uclogic_rdesc_art10sv2_fixed1_size;

/* Fixed art10sv2 tablet report descriptor, interface 2 (keyboard) */
extern __u8 uclogic_rdesc_art10sv2_fixed2_arr[];
extern const size_t uclogic_rdesc_art10sv2_fixed2_size;


/* Size of the original descriptors of XP-PEN ART22EPRO */
#define UCLOGIC_RDESC_ART22EPRO_ORIG0_SIZE	177
#define UCLOGIC_RDESC_ART22EPRO_ORIG1_SIZE	210
#define UCLOGIC_RDESC_ART22EPRO_ORIG2_SIZE	72

/* Fixed art22epro tablet report descriptor, interface 0 (keyboard) */
extern __u8 uclogic_rdesc_art22epro_fixed0_arr[];
extern const size_t uclogic_rdesc_art22epro_fixed0_size;

/* Fixed art22epr tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_art22epro_fixed1_arr[];
extern const size_t uclogic_rdesc_art22epro_fixed1_size;

/* Fixed art22epro tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art22epro_fixed2_arr[];
extern const size_t uclogic_rdesc_art22epro_fixed2_size;

/* Size of the original descriptors of XP-PEN ART156 */
#define UCLOGIC_RDESC_ART156_ORIG0_SIZE	139
#define UCLOGIC_RDESC_ART156_ORIG1_SIZE	140
#define UCLOGIC_RDESC_ART156_ORIG2_SIZE	59

/* Fixed art156 tablet report descriptor, interface 0 (keyboard) */
extern __u8 uclogic_rdesc_art156_fixed0_arr[];
extern const size_t uclogic_rdesc_art156_fixed0_size;

/* Fixed art156 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_art156_fixed1_arr[];
extern const size_t uclogic_rdesc_art156_fixed1_size;

/* Fixed art156 tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art156_fixed2_arr[];
extern const size_t uclogic_rdesc_art156_fixed2_size;

/* Size of the original descriptors of XP-PEN ART133 */
#define UCLOGIC_RDESC_ART133_ORIG0_SIZE	139
#define UCLOGIC_RDESC_ART133_ORIG1_SIZE	140
#define UCLOGIC_RDESC_ART133_ORIG2_SIZE	59

/* Fixed art133 tablet report descriptor, interface 0 (keyboard) */
extern __u8 uclogic_rdesc_art133_fixed0_arr[];
extern const size_t uclogic_rdesc_art133_fixed0_size;

/* Fixed art133 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_art133_fixed1_arr[];
extern const size_t uclogic_rdesc_art133_fixed1_size;

/* Fixed art133 tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art133_fixed2_arr[];
extern const size_t uclogic_rdesc_art133_fixed2_size;

/* Size of the original descriptors of XP-PEN ART16PRO */
#define UCLOGIC_RDESC_ART16PRO_ORIG0_SIZE	177
#define UCLOGIC_RDESC_ART16PRO_ORIG1_SIZE	210
#define UCLOGIC_RDESC_ART16PRO_ORIG2_SIZE	72

/* Fixed art16pro tablet report descriptor, interface 0 (keyboard) */
extern __u8 uclogic_rdesc_art16pro_fixed0_arr[];
extern const size_t uclogic_rdesc_art16pro_fixed0_size;

/* Fixed art16pro tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_art16pro_fixed1_arr[];
extern const size_t uclogic_rdesc_art16pro_fixed1_size;

/* Fixed art16pro tablet report descriptor, interface 2 (frame buttons) */
extern __u8 uclogic_rdesc_art16pro_fixed2_arr[];
extern const size_t uclogic_rdesc_art16pro_fixed2_size;

/* Size of the original descriptors of XP-PEN STAR06 */
#define UCLOGIC_RDESC_STAR06_ORIG0_SIZE	139
#define UCLOGIC_RDESC_STAR06_ORIG1_SIZE	180
#define UCLOGIC_RDESC_STAR06_ORIG2_SIZE	36

/* Fixed star06 tablet report descriptor, interface 0 (mouse) */
extern __u8 uclogic_rdesc_star06_fixed0_arr[];
extern const size_t uclogic_rdesc_star06_fixed0_size;

/* Fixed star06 tablet report descriptor, interface 1 (pen ) */
extern __u8 uclogic_rdesc_star06_fixed1_arr[];
extern const size_t uclogic_rdesc_star06_fixed1_size;

/* Fixed star06 tablet report descriptor, interface 2 (keys) */
extern __u8 uclogic_rdesc_star06_fixed2_arr[];
extern const size_t uclogic_rdesc_star06_fixed2_size;


/* Fixed report descriptor for XP-Pen Deco 01 frame controls */
extern const __u8 uclogic_rdesc_xppen_deco01_frame_arr[];
extern const size_t uclogic_rdesc_xppen_deco01_frame_size;


/* Fixed report descriptor for XP-Pen Deco 01mod frame controls */
extern const __u8 uclogic_rdesc_xppen_deco01mod_frame_arr[];
extern const size_t uclogic_rdesc_xppen_deco01mod_frame_size;



/* Size of the original descriptors of XP-PEN DECO01 */
#define UCLOGIC_RDESC_DECO01_ORIG0_SIZE	139
#define UCLOGIC_RDESC_DECO01_ORIG1_SIZE	140
#define UCLOGIC_RDESC_DECO01_ORIG2_SIZE	59

/* Fixed deco01 tablet report descriptor, interface 0 (mouse) */
extern __u8 uclogic_rdesc_deco01_fixed0_arr[];
extern const size_t uclogic_rdesc_deco01_fixed0_size;

/* Fixed deco01 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_deco01_fixed1_arr[];
extern const size_t uclogic_rdesc_deco01_fixed1_size;

/* Fixed deco01 tablet report descriptor, interface 2 (param) */
extern __u8 uclogic_rdesc_deco01_fixed2_arr[];
extern const size_t uclogic_rdesc_deco01_fixed2_size;


/* Size of the original descriptors of XP-PEN DECO01V2 */
#define UCLOGIC_RDESC_DECO01V2_ORIG0_SIZE	177
#define UCLOGIC_RDESC_DECO01V2_ORIG1_SIZE	237
#define UCLOGIC_RDESC_DECO01V2_ORIG2_SIZE	36

/* Fixed deco01v2 tablet report descriptor, interface 0 (mouse) */
extern __u8 uclogic_rdesc_deco01v2_fixed0_arr[];
extern const size_t uclogic_rdesc_deco01v2_fixed0_size;

/* Fixed deco01v2 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_deco01v2_fixed1_arr[];
extern const size_t uclogic_rdesc_deco01v2_fixed1_size;

/* Fixed deco01v2 tablet report descriptor, interface 2 (param) */
extern __u8 uclogic_rdesc_deco01v2_fixed2_arr[];
extern const size_t uclogic_rdesc_deco01v2_fixed2_size;


/* Size of the original descriptors of XP-PEN DECO02 */
#define UCLOGIC_RDESC_DECO02_ORIG0_SIZE	139
#define UCLOGIC_RDESC_DECO02_ORIG1_SIZE	188
#define UCLOGIC_RDESC_DECO02_ORIG2_SIZE	36

/* Fixed deco02 tablet report descriptor, interface 0 (mouse) */
extern __u8 uclogic_rdesc_deco02_fixed0_arr[];
extern const size_t uclogic_rdesc_deco02_fixed0_size;

/* Fixed deco02 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_deco02_fixed1_arr[];
extern const size_t uclogic_rdesc_deco02_fixed1_size;

/* Fixed deco02 tablet report descriptor, interface 2 (param) */
extern __u8 uclogic_rdesc_deco02_fixed2_arr[];
extern const size_t uclogic_rdesc_deco02_fixed2_size;

/* Size of the original descriptors of XP-PEN DECO03 */
#define UCLOGIC_RDESC_DECO03_ORIG0_SIZE	139
#define UCLOGIC_RDESC_DECO03_ORIG1_SIZE	180
#define UCLOGIC_RDESC_DECO03_ORIG2_SIZE	36

/* Fixed deco03 tablet report descriptor, interface 0 (mouse) */
extern __u8 uclogic_rdesc_deco03_fixed0_arr[];
extern const size_t uclogic_rdesc_deco03_fixed0_size;

/* Fixed deco03 tablet report descriptor, interface 1 (pen) */
extern __u8 uclogic_rdesc_deco03_fixed1_arr[];
extern const size_t uclogic_rdesc_deco03_fixed1_size;

/* Fixed deco03 tablet report descriptor, interface 2 (param) */
extern __u8 uclogic_rdesc_deco03_fixed2_arr[];
extern const size_t uclogic_rdesc_deco03_fixed2_size;





#endif /* _HID_UCLOGIC_RDESC_H */

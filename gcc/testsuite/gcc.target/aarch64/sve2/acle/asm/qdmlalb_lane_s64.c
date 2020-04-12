/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** qdmlalb_lane_0_s64_tied1:
**	sqdmlalb	z0\.d, z4\.s, z5\.s\[0\]
**	ret
*/
TEST_DUAL_Z (qdmlalb_lane_0_s64_tied1, svint64_t, svint32_t,
	     z0 = svqdmlalb_lane_s64 (z0, z4, z5, 0),
	     z0 = svqdmlalb_lane (z0, z4, z5, 0))

/*
** qdmlalb_lane_0_s64_tied2:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z4
**	sqdmlalb	z0\.d, \1\.s, z1\.s\[0\]
**	ret
*/
TEST_DUAL_Z_REV (qdmlalb_lane_0_s64_tied2, svint64_t, svint32_t,
		 z0_res = svqdmlalb_lane_s64 (z4, z0, z1, 0),
		 z0_res = svqdmlalb_lane (z4, z0, z1, 0))

/*
** qdmlalb_lane_0_s64_tied3:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z4
**	sqdmlalb	z0\.d, z1\.s, \1\.s\[0\]
**	ret
*/
TEST_DUAL_Z_REV (qdmlalb_lane_0_s64_tied3, svint64_t, svint32_t,
		 z0_res = svqdmlalb_lane_s64 (z4, z1, z0, 0),
		 z0_res = svqdmlalb_lane (z4, z1, z0, 0))

/*
** qdmlalb_lane_0_s64_untied:
**	movprfx	z0, z1
**	sqdmlalb	z0\.d, z4\.s, z5\.s\[0\]
**	ret
*/
TEST_DUAL_Z (qdmlalb_lane_0_s64_untied, svint64_t, svint32_t,
	     z0 = svqdmlalb_lane_s64 (z1, z4, z5, 0),
	     z0 = svqdmlalb_lane (z1, z4, z5, 0))

/*
** qdmlalb_lane_z15_s64:
**	str	d15, \[sp, -16\]!
**	sqdmlalb	z0\.d, z1\.s, z15\.s\[1\]
**	ldr	d15, \[sp\], 16
**	ret
*/
TEST_DUAL_LANE_REG (qdmlalb_lane_z15_s64, svint64_t, svint32_t, z15,
		    z0 = svqdmlalb_lane_s64 (z0, z1, z15, 1),
		    z0 = svqdmlalb_lane (z0, z1, z15, 1))

/*
** qdmlalb_lane_z16_s64:
**	mov	(z[0-9]|z1[0-5])\.d, z16\.d
**	sqdmlalb	z0\.d, z1\.s, \1\.s\[1\]
**	ret
*/
TEST_DUAL_LANE_REG (qdmlalb_lane_z16_s64, svint64_t, svint32_t, z16,
		    z0 = svqdmlalb_lane_s64 (z0, z1, z16, 1),
		    z0 = svqdmlalb_lane (z0, z1, z16, 1))

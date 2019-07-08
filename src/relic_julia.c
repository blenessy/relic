/*
 * RELIC is an Efficient LIbrary for Cryptography
 * Copyright (C) 2007-2019 RELIC Authors
 *
 * This file is part of RELIC. RELIC is legal property of its developers,
 * whose names are not listed here. Please refer to the COPYRIGHT file
 * for contact information.
 *
 * RELIC is free software; you can redistribute it and/or modify it under the
 * terms of the version 2.1 (or later) of the GNU Lesser General Public License
 * as published by the Free Software Foundation; or version 2.0 of the Apache
 * License as published by the Apache Software Foundation. See the LICENSE files
 * for more details.
 *
 * RELIC is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the LICENSE files for more details.
 *
 * You should have received a copy of the GNU Lesser General Public or the
 * Apache License along with RELIC. If not, see <https://www.gnu.org/licenses/>
 * or <https://www.apache.org/licenses/>.
 */

/**
 * @file
 *
 * Implementation of helper functions for the Julia wrapper.
 *
 * @ingroup relic
 */

#include "relic_bn.h"
#include "relic_md.h"
#include "relic_fp.h"
#include "relic_pc.h"

const size_t JL_RLC_BN_SIZE = RLC_BN_SIZE;
const size_t JL_RLC_MD_LEN = RLC_MD_LEN;

// These need to match size of the corresponding Julia structs
const size_t JL_BN_ST_SIZE  = sizeof(bn_st);
const size_t JL_DIG_T_SIZE  = sizeof(dig_t);
const size_t JL_FP_ST_SIZE  = sizeof(fp_st);
const size_t JL_FP2_ST_SIZE = sizeof(fp2_st);
const size_t JL_FP3_ST_SIZE = sizeof(fp3_st);
const size_t JL_G1_ST_SIZE  = sizeof(g1_st);
const size_t JL_G2_ST_SIZE  = sizeof(g2_st);

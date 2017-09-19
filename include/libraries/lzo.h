/*
 * An AmigaOS shared library implementation of liblzo.
 *
 * Copyright (C) 2014-2017 Fredrik Wikstrom <fredrik@a500.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef LIBRARIES_LZO_H
#define LIBRARIES_LZO_H

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif

#include <lzo/lzo1.h>
#include <lzo/lzo1a.h>
#include <lzo/lzo1b.h>
#include <lzo/lzo1c.h>
#include <lzo/lzo1f.h>
#include <lzo/lzo1x.h>
#include <lzo/lzo1y.h>
#include <lzo/lzo1z.h>
#include <lzo/lzo2a.h>

struct LZOBase {
	struct Library libNode;

	uint32 lzo1_mem_compress;
	uint32 lzo1_mem_decompress;
	uint32 lzo1_99_mem_compress;

	uint32 lzo1a_mem_compress;
	uint32 lzo1a_mem_decompress;
	uint32 lzo1a_99_mem_compress;

	uint32 lzo1b_mem_compress;
	uint32 lzo1b_mem_decompress;
	uint32 lzo1b_99_mem_compress;
	uint32 lzo1b_999_mem_compress;

	uint32 lzo1c_mem_compress;
	uint32 lzo1c_mem_decompress;
	uint32 lzo1c_99_mem_compress;
	uint32 lzo1c_999_mem_compress;

	uint32 lzo1f_mem_compress;
	uint32 lzo1f_mem_decompress;
	uint32 lzo1f_999_mem_compress;

	uint32 lzo1x_mem_compress;
	uint32 lzo1x_mem_decompress;
	uint32 lzo1x_mem_optimize;
	uint32 lzo1x_1_mem_compress;
	uint32 lzo1x_1_11_mem_compress;
	uint32 lzo1x_1_12_mem_compress;
	uint32 lzo1x_1_15_mem_compress;
	uint32 lzo1x_999_mem_compress;

	uint32 lzo1y_mem_compress;
	uint32 lzo1y_mem_decompress;
	uint32 lzo1y_mem_optimize;
	uint32 lzo1y_999_mem_compress;

	uint32 lzo1z_mem_decompress;
	uint32 lzo1z_999_mem_compress;

	uint32 lzo2a_mem_decompress;
	uint32 lzo2a_999_mem_compress;
};

#endif


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

#include <proto/lzo.h>

int lzo1b_compress(const lzo_bytep src, lzo_uint src_len,
                   lzo_bytep dst, lzo_uintp dst_len,
                   lzo_voidp wrkmem, int compression_level)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, compression_level);
}

int lzo1b_decompress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_decompress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1b_decompress_safe(const lzo_bytep src, lzo_uint src_len,
                          lzo_bytep dst, lzo_uintp dst_len,
                          lzo_voidp wrkmem)
{
	return ILZO->lzo1b_decompress_safe(src, src_len, dst, dst_len, wrkmem);
}

int lzo1b_1_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 1);
}

int lzo1b_2_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 2);
}

int lzo1b_3_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 3);
}

int lzo1b_4_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 4);
}

int lzo1b_5_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 5);
}

int lzo1b_6_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 6);
}

int lzo1b_7_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 7);
}

int lzo1b_8_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 8);
}

int lzo1b_9_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1b_compress(src, src_len, dst, dst_len, wrkmem, 9);
}

int lzo1b_99_compress(const lzo_bytep src, lzo_uint src_len,
                      lzo_bytep dst, lzo_uintp dst_len,
                      lzo_voidp wrkmem)
{
	return ILZO->lzo1b_99_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1b_999_compress(const lzo_bytep src, lzo_uint src_len,
                       lzo_bytep dst, lzo_uintp dst_len,
                       lzo_voidp wrkmem)
{
	return ILZO->lzo1b_999_compress(src, src_len, dst, dst_len, wrkmem);
}


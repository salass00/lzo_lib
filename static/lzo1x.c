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

int lzo1x_decompress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1x_decompress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_decompress_safe(const lzo_bytep src, lzo_uint src_len,
                          lzo_bytep dst, lzo_uintp dst_len,
                          lzo_voidp wrkmem)
{
	return ILZO->lzo1x_decompress_safe(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_1_compress(const lzo_bytep src, lzo_uint src_len,
                     lzo_bytep dst, lzo_uintp dst_len,
                     lzo_voidp wrkmem)
{
	return ILZO->lzo1x_1_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_1_11_compress(const lzo_bytep src, lzo_uint src_len,
                        lzo_bytep dst, lzo_uintp dst_len,
                        lzo_voidp wrkmem)
{
	return ILZO->lzo1x_1_11_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_1_12_compress(const lzo_bytep src, lzo_uint src_len,
                        lzo_bytep dst, lzo_uintp dst_len,
                        lzo_voidp wrkmem)
{
	return ILZO->lzo1x_1_12_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_1_15_compress(const lzo_bytep src, lzo_uint src_len,
                        lzo_bytep dst, lzo_uintp dst_len,
                        lzo_voidp wrkmem)
{
	return ILZO->lzo1x_1_15_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_999_compress(const lzo_bytep src, lzo_uint src_len,
                       lzo_bytep dst, lzo_uintp dst_len,
                       lzo_voidp wrkmem)
{
	return ILZO->lzo1x_999_compress(src, src_len, dst, dst_len, wrkmem);
}

int lzo1x_999_compress_dict(const lzo_bytep src, lzo_uint src_len,
                            lzo_bytep dst, lzo_uintp dst_len,
                            lzo_voidp wrkmem,
                            const lzo_bytep dict, lzo_uint dict_len)
{
	return ILZO->lzo1x_999_compress_dict(src, src_len, dst, dst_len, wrkmem, dict, dict_len);
}

int lzo1x_999_compress_level(const lzo_bytep src, lzo_uint src_len,
                             lzo_bytep dst, lzo_uintp dst_len,
                             lzo_voidp wrkmem,
                             const lzo_bytep dict, lzo_uint dict_len,
                             lzo_callback_p cb, int compression_level)
{
	return ILZO->lzo1x_999_compress_level(src, src_len, dst, dst_len, wrkmem, dict, dict_len, cb, compression_level);
}

int lzo1x_decompress_dict_safe(const lzo_bytep src, lzo_uint src_len,
                               lzo_bytep dst, lzo_uintp dst_len,
                               lzo_voidp wrkmem,
                               const lzo_bytep dict, lzo_uint dict_len)
{
	return ILZO->lzo1x_decompress_dict_safe(src, src_len, dst, dst_len, wrkmem, dict, dict_len);
}

int lzo1x_optimize(lzo_bytep src, lzo_uint src_len,
                   lzo_bytep dst, lzo_uintp dst_len,
                   lzo_voidp wrkmem)
{
	return ILZO->lzo1x_optimize(src, src_len, dst, dst_len, wrkmem);
}


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

#include <interfaces/lzo.h>
#include "../lzo_vectors.h"

/****** lzo/main/lzo1x_999_compress_dict ******************************************
*
*   NAME
*      lzo1x_999_compress_dict -- Description
*
*   SYNOPSIS
*      int32 lzo1x_999_compress_dict(CONST_APTR src, uint32 src_len, 
*          APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, 
*          uint32 dict_len);
*
*   FUNCTION
*
*   INPUTS
*       src - 
*       src_len - 
*       dst - 
*       dst_len - 
*       wrkmem - 
*       dict - 
*       dict_len - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int32 _main_lzo1x_999_compress_dict(struct LZOIFace *Self, CONST_APTR src, uint32 src_len,
	APTR dst, uint32 *dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len)
{
	return lzo1x_999_compress_dict(src, src_len, dst, dst_len, wrkmem, dict, dict_len);
}


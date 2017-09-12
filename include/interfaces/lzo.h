#ifndef LZO_INTERFACE_DEF_H
#define LZO_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.23.
** Do not edit
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_LZO_H
#include <libraries/lzo.h>
#endif

#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

struct LZOIFace
{
	struct InterfaceData Data;

	uint32 APICALL (*Obtain)(struct LZOIFace *Self);
	uint32 APICALL (*Release)(struct LZOIFace *Self);
	APTR Expunge_UNIMPLEMENTED;
	APTR Clone_UNIMPLEMENTED;
	uint32 APICALL (*lzo1_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1_99_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1_99_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1a_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1a_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1a_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1a_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1a_99_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1a_99_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1b_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1b_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, int32 clevel);
	uint32 APICALL (*lzo1b_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1b_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1b_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1b_99_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1b_99_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1b_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1b_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1c_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1c_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, int32 clevel);
	uint32 APICALL (*lzo1c_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1c_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1c_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1c_99_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1c_99_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1c_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1c_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1f_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1f_1_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1f_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1f_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1f_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1f_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1f_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_1_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1x_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_1_11_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_1_11_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_1_12_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_1_12_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_1_15_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_1_15_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1x_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1x_999_compress_dict)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	int32 APICALL (*lzo1x_999_compress_level)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
	int32 APICALL (*lzo1x_decompress_dict_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	uint32 APICALL (*lzo1x_mem_optimize)(struct LZOIFace *Self);
	int32 APICALL (*lzo1x_optimize)(struct LZOIFace *Self, APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1y_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1y_1_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1y_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1y_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1y_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1y_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1y_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1y_999_compress_dict)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	int32 APICALL (*lzo1y_999_compress_level)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
	int32 APICALL (*lzo1y_decompress_dict_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	uint32 APICALL (*lzo1y_mem_optimize)(struct LZOIFace *Self);
	int32 APICALL (*lzo1y_optimize)(struct LZOIFace *Self, APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1z_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1z_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1z_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo1z_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo1z_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo1z_999_compress_dict)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	int32 APICALL (*lzo1z_999_compress_level)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
	int32 APICALL (*lzo1z_decompress_dict_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
	uint32 APICALL (*lzo2a_mem_decompress)(struct LZOIFace *Self);
	int32 APICALL (*lzo2a_decompress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	int32 APICALL (*lzo2a_decompress_safe)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
	uint32 APICALL (*lzo2a_999_mem_compress)(struct LZOIFace *Self);
	int32 APICALL (*lzo2a_999_compress)(struct LZOIFace *Self, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
};

#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

#endif /* LZO_INTERFACE_DEF_H */

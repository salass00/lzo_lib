
/* This file was generated by idltool 53.23. Do not edit */

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

/* forward declaration */
struct LZOIFace;

extern uint32               VARARGS68K _main_Obtain(struct LZOIFace *);
extern uint32               VARARGS68K _main_Release(struct LZOIFace *);
extern uint32               VARARGS68K _main_lzo1_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1_99_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1_99_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1a_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1a_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1a_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1a_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1a_99_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1a_99_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1b_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1b_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, int32 clevel);
extern uint32               VARARGS68K _main_lzo1b_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1b_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1b_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1b_99_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1b_99_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1b_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1b_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1c_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1c_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, int32 clevel);
extern uint32               VARARGS68K _main_lzo1c_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1c_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1c_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1c_99_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1c_99_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1c_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1c_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1f_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1f_1_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1f_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1f_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1f_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1f_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1f_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_1_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1x_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_1_11_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_1_11_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_1_12_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_1_12_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_1_15_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_1_15_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1x_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1x_999_compress_dict(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern int32                VARARGS68K _main_lzo1x_999_compress_level(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
extern int32                VARARGS68K _main_lzo1x_decompress_dict_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern uint32               VARARGS68K _main_lzo1x_mem_optimize(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1x_optimize(struct LZOIFace *, APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1y_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1y_1_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1y_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1y_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1y_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1y_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1y_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1y_999_compress_dict(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern int32                VARARGS68K _main_lzo1y_999_compress_level(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
extern int32                VARARGS68K _main_lzo1y_decompress_dict_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern uint32               VARARGS68K _main_lzo1y_mem_optimize(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1y_optimize(struct LZOIFace *, APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1z_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1z_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1z_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo1z_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo1z_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo1z_999_compress_dict(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern int32                VARARGS68K _main_lzo1z_999_compress_level(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len, lzo_callback_p cb, int32 clevel);
extern int32                VARARGS68K _main_lzo1z_decompress_dict_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem, CONST_APTR dict, uint32 dict_len);
extern uint32               VARARGS68K _main_lzo2a_mem_decompress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo2a_decompress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern int32                VARARGS68K _main_lzo2a_decompress_safe(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);
extern uint32               VARARGS68K _main_lzo2a_999_mem_compress(struct LZOIFace *);
extern int32                VARARGS68K _main_lzo2a_999_compress(struct LZOIFace *, CONST_APTR src, uint32 src_len, APTR dst, uint32 * dst_len, APTR wrkmem);

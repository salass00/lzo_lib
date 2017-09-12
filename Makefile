TARGET  := lzo.library
VERSION := 53

LZODIR := lzo-2.08

CC     := ppc-amigaos-gcc
STRIP  := ppc-amigaos-strip
AR     := ppc-amigaos-ar
RANLIB := ppc-amigaos-ranlib

CFLAGS  := -O2 -g -Wall -Wwrite-strings -Werror -I./include -I./$(LZODIR)/include
LDFLAGS := -static
LIBS    := 

LZO_SRCS := $(wildcard $(LZODIR)/src/*.c)
LZO_OBJS := $(LZO_SRCS:.c=.o)

main_SRCS := main/Obtain.c main/Release.c main/lzo1_mem_compress.c \
             main/lzo1_compress.c main/lzo1_mem_decompress.c main/lzo1_decompress.c \
             main/lzo1_99_mem_compress.c main/lzo1_99_compress.c \
             main/lzo1a_mem_compress.c main/lzo1a_compress.c main/lzo1a_mem_decompress.c \
             main/lzo1a_decompress.c main/lzo1a_99_mem_compress.c \
             main/lzo1a_99_compress.c main/lzo1b_mem_compress.c main/lzo1b_compress.c \
             main/lzo1b_mem_decompress.c main/lzo1b_decompress.c \
             main/lzo1b_decompress_safe.c main/lzo1b_99_mem_compress.c \
             main/lzo1b_99_compress.c main/lzo1b_999_mem_compress.c \
             main/lzo1b_999_compress.c main/lzo1c_mem_compress.c main/lzo1c_compress.c \
             main/lzo1c_mem_decompress.c main/lzo1c_decompress.c \
             main/lzo1c_decompress_safe.c main/lzo1c_99_mem_compress.c \
             main/lzo1c_99_compress.c main/lzo1c_999_mem_compress.c \
             main/lzo1c_999_compress.c main/lzo1f_mem_compress.c main/lzo1f_1_compress.c \
             main/lzo1f_mem_decompress.c main/lzo1f_decompress.c \
             main/lzo1f_decompress_safe.c main/lzo1f_999_mem_compress.c \
             main/lzo1f_999_compress.c main/lzo1x_mem_compress.c main/lzo1x_1_compress.c \
             main/lzo1x_mem_decompress.c main/lzo1x_decompress.c \
             main/lzo1x_decompress_safe.c main/lzo1x_1_11_mem_compress.c \
             main/lzo1x_1_11_compress.c main/lzo1x_1_12_mem_compress.c \
             main/lzo1x_1_12_compress.c main/lzo1x_1_15_mem_compress.c \
             main/lzo1x_1_15_compress.c main/lzo1x_999_mem_compress.c \
             main/lzo1x_999_compress.c main/lzo1x_999_compress_dict.c \
             main/lzo1x_999_compress_level.c main/lzo1x_decompress_dict_safe.c \
             main/lzo1x_mem_optimize.c main/lzo1x_optimize.c main/lzo1y_mem_compress.c \
             main/lzo1y_1_compress.c main/lzo1y_mem_decompress.c main/lzo1y_decompress.c \
             main/lzo1y_decompress_safe.c main/lzo1y_999_mem_compress.c \
             main/lzo1y_999_compress.c main/lzo1y_999_compress_dict.c \
             main/lzo1y_999_compress_level.c main/lzo1y_decompress_dict_safe.c \
             main/lzo1y_mem_optimize.c main/lzo1y_optimize.c main/lzo1z_mem_decompress.c \
             main/lzo1z_decompress.c main/lzo1z_decompress_safe.c \
             main/lzo1z_999_mem_compress.c main/lzo1z_999_compress.c \
             main/lzo1z_999_compress_dict.c main/lzo1z_999_compress_level.c \
             main/lzo1z_decompress_dict_safe.c main/lzo2a_mem_decompress.c \
             main/lzo2a_decompress.c main/lzo2a_decompress_safe.c \
             main/lzo2a_999_mem_compress.c main/lzo2a_999_compress.c 
main_OBJS := $(main_SRCS:.c=.o)

SRCS := init.c malloc.c
OBJS := $(main_SRCS:.c=.o) $(SRCS:.c=.o)

.PHONY: all
all: $(TARGET)

init.o: $(TARGET)_rev.h lzo_vectors.c lzo_vectors.h
$(main_OBJS): lzo_vectors.h

$(LZO_OBJS): CFLAGS += -DLZO_HAVE_CONFIG_H -I./$(LZODIR)

$(LZODIR)/liblzo-static.a: $(LZO_OBJS)
	$(AR) -crv $@ $^
	$(RANLIB) $@

$(TARGET): $(OBJS) $(LZODIR)/liblzo-static.a
	$(CC) $(LDFLAGS) -nostartfiles -o $@.debug $^ $(LIBS)
	$(STRIP) -R.comment -o $@ $@.debug

.PHONY: clean
clean:
	rm -f $(LZODIR)/liblzo-static.a $(LZODIR)/src/*.o
	rm -f $(TARGET) $(TARGET).debug *.o main/*.o

.PHONY: revision
revision:
	bumprev $(VERSION) $(TARGET)


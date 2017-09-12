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

#include <stdlib.h>
#include <proto/exec.h>

static APTR mempool;

int setup_malloc(void) {
	mempool = IExec->AllocSysObjectTags(ASOT_MEMPOOL,
		ASOPOOL_Name,      "lzo.library memory pool",
		ASOPOOL_Protected, TRUE,
		ASOPOOL_MFlags,    MEMF_SHARED,
		ASOPOOL_LockMem,   FALSE,
		ASOPOOL_Puddle,    4096,
		ASOPOOL_Threshold, 1024,
		TAG_END);
	return mempool != NULL;
}

void cleanup_malloc(void) {
	IExec->FreeSysObject(ASOT_MEMPOOL, mempool);
}

void *malloc(size_t size) {
	size_t *ptr;
	ptr = IExec->AllocPooled(mempool, sizeof(size_t) + size);
	if (ptr) *ptr++ = size;
	return ptr;
}

void free(void *ptr) {
	if (ptr) {
		size_t *base = (size_t *)ptr - 1;
		IExec->FreePooled(mempool, base, sizeof(size_t) + *base);
	}
}


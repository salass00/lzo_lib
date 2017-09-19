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

#include <libraries/lzo.h>

#include <interfaces/lzo.h>
#include <proto/exec.h>
#include <assert.h>

struct LZOIFace * ILZO = NULL;
static struct LZOBase * __LZOBase;
static struct LZOIFace * __ILZO;

/****************************************************************************/

extern struct LZOBase * LZOBase;

/****************************************************************************/

void _INIT_5_ILZO(void)
{
    if (LZOBase == NULL) /* Library base is NULL, we need to open it */
    {
        /* We were called before the base constructor.
         * This means we will be called _after_ the base destructor.
         * So we cant drop the interface _after_ closing the last library base,
         * we just open the library here which ensures that.
         */
        __LZOBase = LZOBase = (struct LZOBase *)IExec->OpenLibrary("lzo.library", 53L);
        assert(LZOBase != NULL);
    }

    __ILZO = ILZO = (struct LZOIFace *)IExec->GetInterface((struct Library *)LZOBase, "main", 1, NULL);
    assert(ILZO != NULL);
}
__attribute__((section(".ctors.zzzy"))) static void
(*lzo_main_constructor_ptr)(void) USED = _INIT_5_ILZO;

/****************************************************************************/

void _EXIT_5_ILZO(void)
{
    if (__ILZO)
    {
        IExec->DropInterface ((struct Interface *)__ILZO);
    }
    if (__LZOBase)
    {
        IExec->CloseLibrary((struct Library *)__LZOBase);
    }
}
__attribute__((section(".dtors.zzzy"))) static void
(*lzo_main_destructor_ptr)(void) USED = _EXIT_5_ILZO;

/****************************************************************************/


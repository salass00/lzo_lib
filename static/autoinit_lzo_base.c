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

/****************************************************************************/

struct LZOBase * LZOBase = NULL;
static struct LZOBase * __LZOBase;

/****************************************************************************/

void _INIT_5_LZOBase(void)
{
    if (LZOBase != NULL)
    {
        return; /* Someone was quicker, e.g. an interface constructor */
    }
    __LZOBase = LZOBase = (struct LZOBase *)IExec->OpenLibrary("lzo.library", 53L);
    assert(LZOBase != NULL);
}
__attribute__((section(".ctors.zzzz"))) static void
(*lzo_base_constructor_ptr)(void) USED = _INIT_5_LZOBase;

/****************************************************************************/

void _EXIT_5_LZOBase(void)
{
    if (__LZOBase)
    {
        IExec->CloseLibrary((struct Library *)__LZOBase);
    }
}
__attribute__((section(".dtors.zzzz"))) static void
(*lzo_base_destructor_ptr)(void) USED = _EXIT_5_LZOBase;

/****************************************************************************/


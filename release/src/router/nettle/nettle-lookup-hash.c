/* nettle-lookup-hash.c

   Copyright (C) 2016 Niels Möller.

   This file is part of GNU Nettle.

   GNU Nettle is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.

   GNU Nettle is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see http://www.gnu.org/licenses/.
*/

#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <stddef.h>
#include <string.h>

#include "nettle-meta.h"

#undef nettle_hashes

const struct nettle_hash *
nettle_lookup_hash (const char *name)
{
  unsigned i;
  for (i = 0; nettle_hashes[i]; i++)
    if (!strcmp (name, nettle_hashes[i]->name))
      return nettle_hashes[i];
  return NULL;
}

/*
 * Copyright (C) 2015 Palmer Dabbelt
 *   <palmer.dabbelt@eecs.berkeley.edu>
 *
 * This file is part of hurricane-memcpy.
 * 
 * hurricane-memcpy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * hurricane-memcpy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with hurricane-memcpy.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "hurricane_extension.h++"

/* The library constructor that's necessary to make actually get
 * installed into Spike. */
static void module_init(void) __attribute__((constructor));

hurricane_extension_t::hurricane_extension_t(void)
{
}

hurricane_extension_t::~hurricane_extension_t(void)
{
}

std::vector<disasm_insn_t*> hurricane_extension_t::get_disasms(void)
{
    return {};
}

std::vector<insn_desc_t> hurricane_extension_t::get_instructions(void)
{
    return {};
}

void module_init(void)
{
    register_extension("hurricane-memcpy",
                       [](){ return new hurricane_extension_t; }
        );
}

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

#ifndef HURRICANE_MEMCPY_EXTENSION_HXX
#define HURRICANE_MEMCPY_EXTENSION_HXX

#include <spike/extension.h>

class hurricane_extension_t: public extension_t {
public:
    hurricane_extension_t(void);
    ~hurricane_extension_t(void);

public:
    /* Virtual methods from extension_t. */
    virtual std::vector<disasm_insn_t*> get_disasms();
    virtual std::vector<insn_desc_t> get_instructions();
    virtual const char* name(void) { return "hurricane-memcpy"; }
};

#endif

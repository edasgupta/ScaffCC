/* RevKit: A Toolkit for Reversible Circuit Design (www.revkit.org)
 * Copyright (C) 2009-2011  The RevKit Developers <revkit@informatik.uni-bremen.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "reverse_circuit.hpp"

#include "../circuit.hpp"

#include "copy_circuit.hpp"

namespace revkit
{

  void reverse_circuit( const circuit& src, circuit& dest )
  {
    copy_circuit( src, dest );
    reverse_circuit( dest );
  }

  void reverse_circuit( circuit& circ )
  {
    std::reverse( circ.begin(), circ.end() );
  }
  
}

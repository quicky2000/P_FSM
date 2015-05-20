/*    This file is part of FSM_framework
      The aim of this software is to provided generic facilities for FSM analyzis
      Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "swap_transition.h"
#include <sstream>

namespace FSM_examples
{
  swap_transition::swap_transition(const uint_fast8_t & p_source,
				   const uint_fast8_t & p_destination):
    m_source(p_source),
    m_destination(p_destination)
  {
  }

  // Methods inherited from interface
  
  //----------------------------------------------------------------------------
  const std::string swap_transition::to_string(void)const
  {
    std::stringstream l_stream;
    l_stream << (unsigned int)m_source << " -> " << (unsigned int)m_destination;
    return l_stream.str();
  }
    
  //----------------------------------------------------------------------------
  void swap_transition::to_string(std::string & p_result)const
  {
    std::stringstream l_stream;
    l_stream << (unsigned int)m_source << " -> " << (unsigned int)m_destination;
    p_result = l_stream.str();
  }
  
  //----------------------------------------------------------------------------
  const uint_fast8_t & swap_transition::get_source(void)const
    {
      return m_source;
    }

  //----------------------------------------------------------------------------
  const uint_fast8_t & swap_transition::get_destination(void)const
    {
      return m_destination;
    }

}
//EOF

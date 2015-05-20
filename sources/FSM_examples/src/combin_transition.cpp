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
#include "combin_transition.h"
#include <sstream>

namespace FSM_examples
{
  combin_transition::combin_transition(const uint_fast8_t & p_index,
				       const char & p_char):
    m_index(p_index),
    m_char(p_char)
  {
  }

  // Methods inherited from interface
  //----------------------------------------------------------------------------
  const std::string combin_transition::to_string(void)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "' @ " << (unsigned int) m_index;
    return l_stream.str();
  }
  //----------------------------------------------------------------------------
  void combin_transition::to_string(std::string & p_result)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "' @ " << (unsigned int) m_index;
    p_result = l_stream.str();
  }


  
  //----------------------------------------------------------------------------
  const char & combin_transition::get_char(void)const
    {
      return m_char;
    }

  //----------------------------------------------------------------------------
  const uint_fast8_t & combin_transition::get_index(void)const
    {
      return m_index;
    }

}
//EOF

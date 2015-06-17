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
#include "combin_motor.h"
#include "quicky_exception.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & combin_motor::get_class_name(void)const
  {
    return m_class_name;
  }
  //----------------------------------------------------------------------------
  combin_situation & combin_motor::run(const combin_situation & p_situation,
				       const combin_transition & p_transition)
  {
    combin_situation & l_result = *(new combin_situation(p_situation));
    l_result.set(p_transition.get_index(),p_transition.get_char());
    return l_result;
  }

  //----------------------------------------------------------------------------
  void combin_motor::apply(combin_situation & p_situation,
                           const combin_transition & p_transition)
  {
    p_situation.set(p_transition.get_index(),p_transition.get_char());
  }

  //----------------------------------------------------------------------------
  void combin_motor::revert_transition(combin_situation & p_situation)
  {
    throw quicky_exception::quicky_logic_exception(std::string(__func__) + " not implemented",__LINE__,__FILE__);
  }

  const std::string combin_motor::m_class_name = "combin_motor";
}
//EOF

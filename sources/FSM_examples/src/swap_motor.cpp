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
#include "swap_motor.h"
#include "quicky_exception.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & swap_motor::get_class_name(void)const
    {
      return m_class_name;
    }
  //----------------------------------------------------------------------------
  swap_situation & swap_motor::run(const swap_situation & p_situation,
				   const swap_transition & p_transition)
    {
      std::string l_content = p_situation.to_string();
      assert(p_transition.get_source() < l_content.size());
      assert(p_transition.get_destination() < l_content.size());
      assert(p_transition.get_source() < p_transition.get_destination());
      std::string l_new_content = l_content;
      l_new_content[p_transition.get_destination()] = l_content[p_transition.get_source()];
      l_new_content[p_transition.get_source()] = l_content[p_transition.get_destination()];
      swap_situation & l_result = *(new swap_situation(l_new_content));
      return l_result;
    }
  
  //----------------------------------------------------------------------------
  void swap_motor::apply(swap_situation & p_situation,
                         const swap_transition & p_transition)
    {
      std::string l_content = p_situation.to_string();
      assert(p_transition.get_source() < l_content.size());
      assert(p_transition.get_destination() < l_content.size());
      assert(p_transition.get_source() < p_transition.get_destination());
      std::string l_new_content = l_content;
      l_new_content[p_transition.get_destination()] = l_content[p_transition.get_source()];
      l_new_content[p_transition.get_source()] = l_content[p_transition.get_destination()];
      p_situation.set_content(l_new_content);
    }
  
  //----------------------------------------------------------------------------
  void swap_motor::revert_transition(swap_situation & p_situation)
  {
    throw quicky_exception::quicky_logic_exception(std::string(__func__) + " not implemented",__LINE__,__FILE__);
  }

  const std::string swap_motor::m_class_name = "swap_motor";
}
//EOF

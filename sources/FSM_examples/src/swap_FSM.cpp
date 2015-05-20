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
#include "swap_FSM.h"
#include "swap_motor.h"
#include "swap_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  swap_FSM::swap_FSM(void):FSM_base::FSM<swap_situation,swap_transition>("swap",*(new swap_motor()), *(new swap_situation_analyzer()))
  {
    set_situation(*(new swap_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void swap_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & swap_FSM::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & swap_FSM::create_FSM(void)
  {
    return *(new swap_FSM());
  }

  const std::string swap_FSM::m_class_name = "Not implemented";
}
//EOF

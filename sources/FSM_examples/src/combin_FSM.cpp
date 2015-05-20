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
#include "combin_FSM.h"
#include "combin_motor.h"
#include "combin_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  combin_FSM::combin_FSM(void):FSM<combin_situation,combin_transition>("combin",*(new combin_motor()), *(new combin_situation_analyzer()))
  {
    set_situation(*(new combin_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void combin_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & combin_FSM::get_class_name(void)const
  {
    return m_class_name;
  }
  
  //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & combin_FSM::create_FSM(void)
  {
    return *(new combin_FSM());
  }

  const std::string combin_FSM::m_class_name = "combin_FSM";
}

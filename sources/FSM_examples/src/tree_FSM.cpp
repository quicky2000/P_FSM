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
#include "tree_FSM.h"
#include "tree_motor.h"
#include "tree_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  tree_FSM::tree_FSM(void):FSM<tree_situation,tree_transition>("tree",*(new tree_motor()), *(new tree_situation_analyzer()))
  {
    set_situation(*(new tree_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void tree_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & tree_FSM::get_class_name(void)const
  {
    return m_class_name;
  }
  
 //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & tree_FSM::create_FSM(void)
  {
    return *(new tree_FSM());
  }
  const std::string tree_FSM::m_class_name = "tree_FSM";
}

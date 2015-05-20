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
#include "tree_situation_analyzer.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  const std::string & tree_situation_analyzer::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  std::vector<const tree_transition*> &  tree_situation_analyzer::get_transitions(tree_situation & p_situation)
  {
    std::vector<const tree_transition*> & l_result = *(new std::vector<const tree_transition*>());
    if(p_situation.to_string().size() < 3)
      {
	for(int l_index = 0 ; l_index < 3 ; ++l_index)
	  {
	    l_result.push_back(new tree_transition('0' + l_index));
	  }
      }
    return l_result;
  }
  const std::string tree_situation_analyzer::m_class_name = "tree_situation_analyzer";
}
//EOF

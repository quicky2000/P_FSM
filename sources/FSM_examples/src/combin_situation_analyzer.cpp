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
#include "combin_situation_analyzer.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  const std::string & combin_situation_analyzer::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  std::vector<const combin_transition*> & combin_situation_analyzer::get_transitions(combin_situation & p_situation)
    {
      std::vector<const combin_transition*> & l_result = *(new std::vector<const combin_transition*>());
      std::string l_content = p_situation.to_string();
      for(int l_index = l_content.size() ; l_index >= 0 ; --l_index)
	{
	  if('-' == l_content[l_index])
	    {
	      l_result.push_back(new combin_transition(l_index,'1'));
	      l_result.push_back(new combin_transition(l_index,'2'));
	    }
	}
      return l_result;
    }
  const std::string combin_situation_analyzer::m_class_name = "combin_situation_analyzer";

}
//EOF

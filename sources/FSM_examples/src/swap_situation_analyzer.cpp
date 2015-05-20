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
#include "swap_situation_analyzer.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  const std::string & swap_situation_analyzer::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  std::vector<const swap_transition*> & swap_situation_analyzer::get_transitions(swap_situation & p_situation)
    {
      std::vector<const swap_transition*> & l_result = *(new std::vector<const swap_transition*>());
      if("213"  == p_situation.to_string())
	{
	  l_result.push_back(new swap_transition(0,1));
	  l_result.push_back(new swap_transition(0,2));
	  l_result.push_back(new swap_transition(1,2));
	}
      else if("321"  == p_situation.to_string())
	{
	  l_result.push_back(new swap_transition(0,2));
	  l_result.push_back(new swap_transition(0,1));
	  l_result.push_back(new swap_transition(1,2));
	}
      else if("132"  == p_situation.to_string())
	{
	  l_result.push_back(new swap_transition(1,2));
	  l_result.push_back(new swap_transition(0,1));
	  l_result.push_back(new swap_transition(0,2));
	}
      else
	{
	  for(uint_fast8_t l_index = 0 ; l_index < p_situation.to_string().size() ; ++l_index)
	    {
	      for(uint_fast8_t l_index2 = l_index + 1 ; l_index2 < p_situation.to_string().size() ; ++l_index2)
		{
		  l_result.push_back(new swap_transition(l_index,l_index2));
		}
	    }
	}
      return l_result;
    }

  const std::string swap_situation_analyzer::m_class_name = "swap_situation_analyzer";

}
//EOF

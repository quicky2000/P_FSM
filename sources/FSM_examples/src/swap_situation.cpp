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
#include "swap_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  swap_situation::swap_situation(void):
    m_content("123")
  {
    this->set_context(*(new swap_context()));
  }
  //-----------------------------------------------------------------------------
  swap_situation::swap_situation(const std::string & p_content):
    m_content(p_content)
  {
    this->set_context(*(new swap_context()));
  }

  //----------------------------------------------------------------------------
  void swap_situation::set_content(const std::string & p_content)
  {
    m_content = p_content;
  }

  //----------------------------------------------------------------------------
  swap_situation::~swap_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string swap_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void swap_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  const std::string swap_situation::get_string_id(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void swap_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  bool swap_situation::less(const FSM_situation_if *p_situation)const
  {
    const swap_situation * l_situation = dynamic_cast<const swap_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool swap_situation::is_final(void)const
  {
    return "312" == m_content;
  }

}
//EOF

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
#include "tree_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  tree_situation::tree_situation(void):
    m_content("")
  {
    this->set_context(*(new tree_context()));
  }
  //-----------------------------------------------------------------------------
  tree_situation::tree_situation(const tree_situation & p_situation):
    m_content(p_situation.m_content)
  {
    this->set_context(*(new tree_context()));
  }

  //----------------------------------------------------------------------------
  tree_situation::~tree_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string tree_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  const std::string tree_situation::get_string_id(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void tree_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  void tree_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  bool tree_situation::less(const FSM_situation_if *p_situation)const
  {
    const tree_situation * l_situation = dynamic_cast<const tree_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool tree_situation::is_final(void)const
  {
    return 3 == m_content.size();
  }

  //----------------------------------------------------------------------------
  void tree_situation::add(const char & p_char)
  {
    m_content += p_char;
  }

  //----------------------------------------------------------------------------
  void tree_situation::remove_last(void)
  {
    m_content = m_content.substr(0,m_content.size() - 1);
  }
}
//EOF

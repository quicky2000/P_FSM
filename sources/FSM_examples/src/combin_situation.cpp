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
#include "combin_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  combin_situation::combin_situation(void):
    m_content("---")
  {
    this->set_context(*(new combin_context()));
  }
  //-----------------------------------------------------------------------------
  combin_situation::combin_situation(const combin_situation & p_situation):
    m_content(p_situation.m_content)
  {
    this->set_context(*(new combin_context()));
  }

  //----------------------------------------------------------------------------
  combin_situation::~combin_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string combin_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void combin_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  const std::string combin_situation::get_string_id() const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void combin_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }


  //----------------------------------------------------------------------------
  bool combin_situation::less(const FSM_situation_if *p_situation)const
  {
    const combin_situation * l_situation = dynamic_cast<const combin_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool combin_situation::is_final(void)const
  {
    return false ; //std::string::npos == m_content.find('-');
  }

  //----------------------------------------------------------------------------
  void combin_situation::set(const uint_fast8_t & p_index,
			     const char & p_char)
  {
    assert(p_index < m_content.size());
    assert('-' == m_content[p_index]);
    m_content[p_index] = p_char;
  }
}
//EOF

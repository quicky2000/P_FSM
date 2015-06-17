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
#ifndef _TREE_SITUATION_H_
#define _TREE_SITUATION_H_

#include "FSM_situation.h"
#include "tree_context.h"
#include <map>

namespace FSM_examples
{
  class tree_situation:public FSM_base::FSM_situation<tree_context>
  {
  public:
    tree_situation(void);
    tree_situation(const tree_situation & p_situation);
    ~tree_situation(void);
    // Methods inherited from FSM_situation
    const std::string to_string(void)const;
    void to_string(std::string &)const;
    const std::string get_string_id(void)const;
    void get_string_id(std::string &)const;
    bool is_final(void)const;
    bool less(const FSM_situation_if *p_situation)const;

    // Dedicated method
    void add(const char & p_char);
    void remove_last(void);
  private:
    std::string m_content;
  };

}
#endif
//EOF

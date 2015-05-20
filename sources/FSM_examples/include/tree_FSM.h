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
#ifndef _TREE_FSM_H_
#define _TREE_FSM_H_

#include "FSM.h"
#include "tree_situation.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_FSM:public FSM_base::FSM<tree_situation,tree_transition>
    {
    public:
      // Constructors && Destructors
      tree_FSM(void);
      
      // Methods inherited from FSM
      void configure(void);
      const std::string & get_class_name(void)const;
      static FSM_if & create_FSM(void);
    static const std::string m_class_name;
    };
}
#endif // _TREE_FSM_H_
// EOF

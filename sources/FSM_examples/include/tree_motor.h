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
#ifndef _TREE_MOTOR_H_
#define _TREE_MOTOR_H_

#include "FSM_motor.h"
#include "tree_situation.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_motor:public FSM_base::FSM_motor<tree_situation,tree_transition>
    {
    public:
      // Methods inherited from FSM_motor
      const std::string & get_class_name(void)const;
      tree_situation & run(const tree_situation & p_situation,
                           const tree_transition & p_transition);
      void apply(tree_situation & p_situation,
                 const tree_transition & p_transition);

      void revert_transition(tree_situation &  p_situation);

    private:
      static const std::string m_class_name;
    };
}
#endif // _TREE_MOTOR_H_
//EOF

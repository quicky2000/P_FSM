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
#ifndef _SWAP_TRANSITION_H_
#define _SWAP_TRANSITION_H_

#include "FSM_transition_if.h"
#include "inttypes.h"

namespace FSM_examples
{
  class swap_transition: public FSM_interfaces::FSM_transition_if
  {
  public:
    swap_transition(const uint_fast8_t & p_source, const uint_fast8_t & p_destination);

    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
  
    // Dedicated methods
    const uint_fast8_t & get_source(void)const;
    const uint_fast8_t & get_destination(void)const;
  private:
    const uint_fast8_t m_source;
    const uint_fast8_t m_destination;
  };

}
#endif // _SWAP_TRANSITION_H_
//EOF

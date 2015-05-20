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
#ifndef _EMPTY_CONTEXT_H_
#define _EMPTY_CONTEXT_H_

#include "FSM_context.h"

namespace FSM_examples
{
  template <typename T>
  class empty_context:public FSM_context<T>
  {
  public:

    ~empty_context(void);
    
    // Methods inherited from interface
    std::string toString(void)const;
    
    // Specific methods
  private:
  };
  
  //----------------------------------------------------------------------------
  template <typename T>
  empty_context<T>::~empty_context(void)
  {
  }

  //----------------------------------------------------------------------------
  template <typename T>
  std::string empty_context<T>::toString(void)const
  {
    return "";
  }

}
#endif
//EOF

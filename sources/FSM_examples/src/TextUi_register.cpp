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
#include <map>
#include "tree_TextUi.h"
#include "swap_TextUi.h"
#include "combin_TextUi.h"

  //-----------------------------------------------------------------------------
  extern "C"
  {
    void register_fsm_ui(std::map<std::string,FSM_interfaces::FSM_UI_creator_t> & p_factory)
    {
      register_fsm_ui("tree",FSM_examples::tree_TextUi::create_text_ui,p_factory);
      register_fsm_ui("swap",FSM_examples::swap_TextUi::create_text_ui,p_factory);
      register_fsm_ui("combin",FSM_examples::combin_TextUi::create_text_ui,p_factory);
    }
  }

//EOF

//  $Id: multiple_scroller.hxx,v 1.1 2002/07/12 12:36:14 torangan Exp $
// 
//  Pingus - A free Lemmings clone
//  Copyright (C) 2000 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
// 
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_PINGUS_INPUT_MULTIPLE_SCROLLER_HXX
#define HEADER_PINGUS_INPUT_MULTIPLE_SCROLLER_HXX

#include <vector>
#include "scroller.hxx"

namespace Input {

  class MultipleScroller : public Scroller {
    private:
      std::vector<Scroller*> scrollers;
      float x_pos;
      float y_pos;
      
    public:
      MultipleScroller (const std::vector<Scroller*>& scrollers_);
     ~MultipleScroller ();
      
      float get_x_delta ();
      float get_y_delta ();
      
      void  get_delta (float& x, float& y);

      void  update (float delta);
  };
}

#endif

/* EOF */

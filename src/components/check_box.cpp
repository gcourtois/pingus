//  $Id$
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 2007 Ingo Ruhnke <grumbel@gmx.de>
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

#include "fonts.hpp"
#include "display/drawing_context.hpp"
#include "check_box.hpp"

CheckBox::CheckBox(const Rect& rect)
  : RectComponent(rect),
    state(false)
{
}

void
CheckBox::on_primary_button_press (int x, int y) 
{
  state = !state;
}

void
CheckBox::draw(DrawingContext& gc)
{
  //gc.draw_rect(rect, Color(255, 255, 255));

  if (state)
    gc.print_center(Fonts::chalk_normal, rect.left+rect.get_width()/2, rect.top, "X");
  gc.print_center(Fonts::chalk_normal, rect.left+rect.get_width()/2, rect.top, "[ ]");
}

/* EOF */

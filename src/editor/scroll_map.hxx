//  $Id: scroll_map.hxx,v 1.8 2003/10/18 23:17:27 grumbel Exp $
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

#ifndef HEADER_PINGUS_EDITOR_SCROLL_MAP_HXX
#define HEADER_PINGUS_EDITOR_SCROLL_MAP_HXX

class CL_Key;
class CL_InputDevice;

namespace Pingus {
namespace EditorNS {

class EditorView;
class EditorEvent;

class ScrollMap
{
private:
  int width, height;
  int x_pos, y_pos;
  EditorView* view;

public:
  static EditorEvent* editor_event;

  ScrollMap();
  virtual ~ScrollMap();

  void draw();

  void  on_button_press(const CL_InputEvent& event);
  void  on_button_release(const CL_InputEvent& event);
  bool  mouse_over(int x, int y);

private:
  ScrollMap (const ScrollMap&);
  ScrollMap& operator= (const ScrollMap&);
};

} // namespace EditorNS
} // namespace Pingus

#endif

/* EOF */

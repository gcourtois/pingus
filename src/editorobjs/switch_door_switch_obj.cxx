//  $Id: switch_door_switch_obj.cxx,v 1.4 2003/10/18 23:17:28 grumbel Exp $
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

#include "switch_door_obj.hxx"
#include "../worldobjsdata/switch_door_data.hxx"

namespace Pingus {
namespace EditorObjs {

SwitchDoorSwitchObj::SwitchDoorSwitchObj (SwitchDoorObj* data)
                                        : SpriteEditorObj ("switchdoor_switch", "worldobjs"),
                                          door (data)
{
  pos_ref = &door->data->switch_pos;
}

std::string
SwitchDoorSwitchObj::status_line ()
{
  return "--- SwitchDoorSwitchObj ---";
}

EditorObj*
SwitchDoorSwitchObj::duplicate ()
{
  return door->duplicate ();
}

} // namespace EditorObjs
} // namespace Pingus

/* EOF */

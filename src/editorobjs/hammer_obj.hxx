//  $Id: hammer_obj.hxx,v 1.11 2003/10/18 23:17:28 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_PINGUS_EDITOROBJS_HAMMER_OBJ_HXX
#define HEADER_PINGUS_EDITOROBJS_HAMMER_OBJ_HXX

#include "../editor/sprite_editorobj.hxx"

namespace Pingus {

namespace WorldObjsData {
class HammerData;
} // namespace WorldObjsData

namespace EditorObjs {

class HammerObj : public EditorNS::SpriteEditorObj
{
private:
  WorldObjsData::HammerData* const data;
  int frame;

public:
  HammerObj (const WorldObjsData::HammerData& data_);
  ~HammerObj ();

  static EditorNS::EditorObjLst create (const Vector& pos);

  EditorNS::EditorObj* duplicate ();

  void write_xml (std::ostream& xml);
  void draw (EditorNS::EditorView* view);

  std::string status_line ();
  EditorNS::PropertyFrame* get_gui_dialog(EditorNS::Editor*) { return 0; }
private:
  HammerObj (const HammerObj&);
  HammerObj& operator= (const HammerObj&);
};

} // namespace EditorObjs
} // namespace Pingus

#endif

/* EOF */

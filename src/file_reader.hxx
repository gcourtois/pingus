//  $Id: file_reader.hxx,v 1.4 2003/10/18 23:17:27 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 2002 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_PINGUS_FILE_READER_HXX
#define HEADER_PINGUS_FILE_READER_HXX

#include <string>
#include "vector.hxx"

namespace Pingus {

/** Interface to read name/value pairs out of some kind of file or
    structure */
class FileReader
{
public:
  virtual bool read_int   (const char* name, int&) =0;
  virtual bool read_float (const char* name, float&) =0;
  virtual bool read_bool  (const char* name, bool&) =0;
  virtual bool read_string(const char* name, std::string&) =0;
  virtual bool read_vector(const char* name, Vector&) =0;
};

} // namespace Pingus

#endif

/* EOF */

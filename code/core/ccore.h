/*

    cCore - Class that controls all the engine

    Copyright (C) 2010-2011 Josue Candela Perdomo (josuecp.com)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

**/


#ifndef CCORE_H
#define CCORE_H

#include "csingleton.h"
#include <string>

using namespace std;

namespace onyx2d
{

class cCore : public cSingleton<cCore>
{
public:
    cCore();
    virtual ~cCore();

    /**
    * Function that starts the engine
    * @param log_file File destiny of log records
    */
    bool Init( string log_file = "");

    /**
    * Function that ends the engine
    */
    void Dispose();

    /**
    * Function that updates the engine
    */
    void Update();


    void SetFramerate(int fps);
    int GetFramerate();

protected:
private:
    int _framerate = 60;
};

inline cCore* Core()
{
    return cCore::GetSingletonPtr();
}

} //namespace onyx2d

#endif // CCORE_H

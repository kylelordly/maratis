/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Maratis
// M3dView.h
/////////////////////////////////////////////////////////////////////////////////////////////////////////

//========================================================================
//  Maratis, Copyright (c) 2003-2011 Anael Seghezzi <www.maratis3d.com>
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
//  along with this program; if not, write to the Free Software Foundation,
//  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
//
//========================================================================


#ifndef _M_3D_VIEW_H
#define _M_3D_VIEW_H


class M_EDITOR_EXPORT M3dView
{
public:
	
	M3dView(void);
	
	MOCamera m_camera;
	MVector3 m_pivot;
	
	void initPerspective(void);
	void initOrtho(int mode);
	void switchProjectionMode(void);
	void rotate(float mx, float my);
	void pan(float mx, float my);
	void zoom(float mz);
};

#endif
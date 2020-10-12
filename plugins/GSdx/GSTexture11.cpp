/*
 *	Copyright (C) 2007-2009 Gabest
 *	http://www.gabest.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "stdafx.h"
#include "GSTexture11.h"
#include "GSPng.h"

GSTexture11::GSTexture11(ID3D11Texture2D* texture)
	: m_texture(texture), m_layer(0)
{

}

bool GSTexture11::Update(const GSVector4i& r, const void* data, int pitch, int layer)
{
	return false;
}

bool GSTexture11::Map(GSMap& m, const GSVector4i* r, int layer)
{
	return false;
}

void GSTexture11::Unmap()
{

}

bool GSTexture11::Save(const std::string& fn)
{
	return false;
}

GSTexture11::operator ID3D11Texture2D*()
{
	return NULL;
}

GSTexture11::operator ID3D11ShaderResourceView*()
{
	return NULL;
}

GSTexture11::operator ID3D11RenderTargetView*()
{
	return NULL;
}

GSTexture11::operator ID3D11DepthStencilView*()
{
	return NULL;
}

bool GSTexture11::Equal(GSTexture11* tex)
{
	return false;
}
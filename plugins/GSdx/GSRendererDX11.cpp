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
#include "GSRendererDX11.h"

GSRendererDX11::GSRendererDX11()
	: GSRendererHW(new GSTextureCache11(this))
{

}

bool GSRendererDX11::CreateDevice(GSDevice* dev)
{
	return false;
}

void GSRendererDX11::SetupIA(const float& sx, const float& sy)
{

}

void GSRendererDX11::EmulateAtst(const int pass, const GSTextureCache::Source* tex)
{

}

void GSRendererDX11::EmulateZbuffer()
{

}

void GSRendererDX11::EmulateTextureShuffleAndFbmask()
{

}

void GSRendererDX11::EmulateChannelShuffle(GSTexture** rt, const GSTextureCache::Source* tex)
{

}

void GSRendererDX11::EmulateTextureSampler(const GSTextureCache::Source* tex)
{

}

void GSRendererDX11::ResetStates()
{

}

void GSRendererDX11::DrawPrims(GSTexture* rt, GSTexture* ds, GSTextureCache::Source* tex)
{

}
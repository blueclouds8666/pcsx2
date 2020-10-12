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
#include "GSdx.h"
#include "GSDevice11.h"
#include "GSUtil.h"
#include "resource.h"
#include <fstream>

HMODULE GSDevice11::s_d3d_compiler_dll = nullptr;
bool GSDevice11::s_old_d3d_compiler_dll;

GSDevice11::GSDevice11()
{

}

bool GSDevice11::LoadD3DCompiler()
{
	return false;
}

void GSDevice11::FreeD3DCompiler()
{

}

bool GSDevice11::SetFeatureLevel(D3D_FEATURE_LEVEL level, bool compat_mode)
{
	return false;
}

bool GSDevice11::Create(const std::shared_ptr<GSWnd> &wnd)
{
	return false;
}

bool GSDevice11::Reset(int w, int h)
{
	return false;
}

void GSDevice11::SetExclusive(bool isExcl)
{
	
}

void GSDevice11::SetVSync(int vsync)
{

}

void GSDevice11::Flip()
{

}

void GSDevice11::BeforeDraw()
{
	
}

void GSDevice11::DrawPrimitive()
{
	
}

void GSDevice11::DrawIndexedPrimitive()
{
	
}

void GSDevice11::DrawIndexedPrimitive(int offset, int count)
{
	
}

void GSDevice11::Dispatch(uint32 x, uint32 y, uint32 z)
{

}

void GSDevice11::ClearRenderTarget(GSTexture* t, const GSVector4& c)
{

}

void GSDevice11::ClearRenderTarget(GSTexture* t, uint32 c)
{

}

void GSDevice11::ClearDepth(GSTexture* t)
{

}

void GSDevice11::ClearStencil(GSTexture* t, uint8 c)
{

}

GSTexture* GSDevice11::CreateSurface(int type, int w, int h, int format)
{
	return NULL;
}

GSTexture* GSDevice11::FetchSurface(int type, int w, int h, int format)
{
	return NULL;
}

GSTexture* GSDevice11::CopyOffscreen(GSTexture* src, const GSVector4& sRect, int w, int h, int format, int ps_shader)
{
	return NULL;
}

void GSDevice11::CopyRect(GSTexture* sTex, GSTexture* dTex, const GSVector4i& r)
{

}

void GSDevice11::CloneTexture(GSTexture* src, GSTexture** dest)
{

}

void GSDevice11::StretchRect(GSTexture* sTex, const GSVector4& sRect, GSTexture* dTex, const GSVector4& dRect, int shader, bool linear)
{

}

void GSDevice11::StretchRect(GSTexture* sTex, const GSVector4& sRect, GSTexture* dTex, const GSVector4& dRect, ID3D11PixelShader* ps, ID3D11Buffer* ps_cb, bool linear)
{
	
}

void GSDevice11::StretchRect(GSTexture* sTex, const GSVector4& sRect, GSTexture* dTex, const GSVector4& dRect, bool red, bool green, bool blue, bool alpha)
{
	
}

void GSDevice11::StretchRect(GSTexture* sTex, const GSVector4& sRect, GSTexture* dTex, const GSVector4& dRect, ID3D11PixelShader* ps, ID3D11Buffer* ps_cb, ID3D11BlendState* bs , bool linear)
{
	
}

void GSDevice11::RenderOsd(GSTexture* dt)
{

}

void GSDevice11::DoMerge(GSTexture* sTex[3], GSVector4* sRect, GSTexture* dTex, GSVector4* dRect, const GSRegPMODE& PMODE, const GSRegEXTBUF& EXTBUF, const GSVector4& c)
{
	
}

void GSDevice11::DoInterlace(GSTexture* sTex, GSTexture* dTex, int shader, bool linear, float yoffset)
{

}

void GSDevice11::InitExternalFX()
{
	
}

void GSDevice11::DoExternalFX(GSTexture* sTex, GSTexture* dTex)
{
	
}

void GSDevice11::InitFXAA()
{

}

void GSDevice11::DoFXAA(GSTexture* sTex, GSTexture* dTex)
{
	
}

void GSDevice11::DoShadeBoost(GSTexture* sTex, GSTexture* dTex)
{
	
}

void GSDevice11::SetupDATE(GSTexture* rt, GSTexture* ds, const GSVertexPT1* vertices, bool datm)
{

}

void GSDevice11::IASetVertexBuffer(const void* vertex, size_t stride, size_t count)
{

}

bool GSDevice11::IAMapVertexBuffer(void** vertex, size_t stride, size_t count)
{
	return false;
}

void GSDevice11::IAUnmapVertexBuffer()
{

}

void GSDevice11::IASetVertexBuffer(ID3D11Buffer* vb, size_t stride)
{

}

void GSDevice11::IASetIndexBuffer(const void* index, size_t count)
{
	
}

void GSDevice11::IASetIndexBuffer(ID3D11Buffer* ib)
{
	
}

void GSDevice11::IASetInputLayout(ID3D11InputLayout* layout)
{
	
}

void GSDevice11::IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY topology)
{
	
}

void GSDevice11::VSSetShader(ID3D11VertexShader* vs, ID3D11Buffer* vs_cb)
{
	
}

void GSDevice11::GSSetShader(ID3D11GeometryShader* gs, ID3D11Buffer* gs_cb)
{
	
}

void GSDevice11::PSSetShaderResources(GSTexture* sr0, GSTexture* sr1)
{
	
}

void GSDevice11::PSSetShaderResource(int i, GSTexture* sr)
{
	
}

void GSDevice11::PSSetShaderResourceView(int i, ID3D11ShaderResourceView* srv, GSTexture* sr)
{
	
}

void GSDevice11::PSSetSamplerState(ID3D11SamplerState* ss0, ID3D11SamplerState* ss1)
{
	
}

void GSDevice11::PSSetShader(ID3D11PixelShader* ps, ID3D11Buffer* ps_cb)
{
	
}

void GSDevice11::PSUpdateShaderState()
{
	
}

void GSDevice11::OMSetDepthStencilState(ID3D11DepthStencilState* dss, uint8 sref)
{
	
}

void GSDevice11::OMSetBlendState(ID3D11BlendState* bs, float bf)
{
	
}

void GSDevice11::OMSetRenderTargets(GSTexture* rt, GSTexture* ds, const GSVector4i* scissor)
{
	
}

GSDevice11::ShaderMacro::ShaderMacro(std::string& smodel)
{

}

void GSDevice11::ShaderMacro::AddMacro(const char* n, int d)
{

}

D3D_SHADER_MACRO* GSDevice11::ShaderMacro::GetPtr(void)
{
	
}

void GSDevice11::CreateShader(std::vector<char> source, const char* fn, ID3DInclude *include, const char* entry, D3D_SHADER_MACRO* macro, ID3D11VertexShader** vs, D3D11_INPUT_ELEMENT_DESC* layout, int count, ID3D11InputLayout** il)
{
	
}

void GSDevice11::CreateShader(std::vector<char> source, const char* fn, ID3DInclude *include, const char* entry, D3D_SHADER_MACRO* macro, ID3D11GeometryShader** gs)
{
	
}

void GSDevice11::CreateShader(std::vector<char> source, const char* fn, ID3DInclude *include, const char* entry, D3D_SHADER_MACRO* macro, ID3D11PixelShader** ps)
{
	
}

void GSDevice11::CompileShader(std::vector<char> source, const char* fn, ID3DInclude *include, const char* entry, D3D_SHADER_MACRO* macro, ID3DBlob** shader, std::string shader_model)
{
	
}
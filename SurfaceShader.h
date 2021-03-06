#pragma once

#include "TextureHandle.h"
#include "RenderingContext.h"

namespace happy
{
	struct SurfaceShader
	{
		SurfaceShader();

		virtual ~SurfaceShader();

		bool operator<(const SurfaceShader& o) const;

		void addInputSlot(const TextureHandle &texture, unsigned slot);

	protected:
		friend class Resources;
		friend class DeferredRenderer;
		friend class Canvas;

		void set(ID3D11DeviceContext* context) const;

		void unset(ID3D11DeviceContext* context) const;

		ComPtr<ID3D11VertexShader>    m_HandleVS;
		ComPtr<ID3D11InputLayout>     m_HandleIL;
		ComPtr<ID3D11PixelShader>     m_HandlePS;
		vector<pair<unsigned, void*>> m_InputSlots;
	};
}

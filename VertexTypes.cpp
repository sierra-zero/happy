#include "stdafx.h"
#include "VertexTypes.h"

namespace happy
{
	const D3D11_INPUT_ELEMENT_DESC VertexPositionColor::Elements[2] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};

	const D3D11_INPUT_ELEMENT_DESC VertexPositionTexcoord::Elements[2] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};

	const D3D11_INPUT_ELEMENT_DESC VertexPositionNormalTexcoord::Elements[3] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT,       0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};

	const D3D11_INPUT_ELEMENT_DESC VertexPositionNormalTangentBinormalTexcoord::Elements[5] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 1, DXGI_FORMAT_R32G32B32_FLOAT,    0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 2, DXGI_FORMAT_R32G32B32_FLOAT,    0, 40, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 3, DXGI_FORMAT_R32G32_FLOAT,       0, 52, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};

	const D3D11_INPUT_ELEMENT_DESC VertexPositionNormalTangentBinormalTexcoordIndicesWeights::Elements[7] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 1, DXGI_FORMAT_R32G32B32_FLOAT,    0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 2, DXGI_FORMAT_R32G32B32_FLOAT,    0, 40, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 3, DXGI_FORMAT_R32G32_FLOAT,       0, 52, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 4, DXGI_FORMAT_R16G16B16A16_UINT,  0, 60, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 5, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 68, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};

	const D3D11_INPUT_ELEMENT_DESC VertexParticle::Elements[11] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,   0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  32, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 2, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  48, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 3, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  64, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 4, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  80, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 5, DXGI_FORMAT_R32G32B32A32_FLOAT, 0,  96, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 6, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 112, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 7, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 128, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 8, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 144, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 9, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 160, D3D11_INPUT_PER_VERTEX_DATA, 0 },
	};
}
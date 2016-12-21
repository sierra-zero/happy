#include "GBufferCommon.hlsli"

struct VSIn
{
	float4 position : POSITION;
	float3 normal   : TEXCOORD0;
	float2 texcoord : TEXCOORD1;
};

VSOut main(VSIn input)
{
	VSOut output;

	output.position  = mul(world,              input.position);
	output.position  = mul(jitteredView,       output.position);
	output.position  = mul(jitteredProjection, output.position);
	output.normal    = normalize(mul((float3x3)world, input.normal));
	output.tangent   = 0;
	output.binormal  = 0;
	output.texcoord0 = input.texcoord;
	output.texcoord1 = input.texcoord;
	output.velocity  = float4(0, 0, 0, 0);

	return output;
}
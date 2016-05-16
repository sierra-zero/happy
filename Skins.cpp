#include "stdafx.h"
#include "Skins.h"

namespace happy
{
	void RenderSkin::setBindPose(const RenderingContext *pRenderContext, const vector<Mat4>& pose)
	{
		D3D11_BUFFER_DESC poseDesc;
		ZeroMemory(&poseDesc, sizeof(poseDesc));

		poseDesc.ByteWidth = (UINT)pose.size() * sizeof(Mat4);
		poseDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		poseDesc.Usage = D3D11_USAGE_IMMUTABLE;

		D3D11_SUBRESOURCE_DATA poseData;
		ZeroMemory(&poseData, sizeof(poseData));
		poseData.pSysMem = (void*)&pose[0];

		THROW_ON_FAIL(pRenderContext->getDevice()->CreateBuffer(&poseDesc, &poseData, m_pBindPose.GetAddressOf()));
	}

	ID3D11Buffer* RenderSkin::getBindPoseBuffer() const
	{
		return m_pBindPose.Get();
	}
}
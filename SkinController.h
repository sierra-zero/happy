#pragma once

#include <chrono>
#include <vector>

#include "RenderSkin.h"
#include "Animation.h"

using std::string;
using std::vector;
using std::chrono::system_clock;

namespace happy
{
	struct SkinRenderItem
	{
		RenderSkin m_Skin;
		Mat4  m_World;
		unsigned m_AnimationCount;
		Vec4 m_BlendFrame;
		Vec4 m_BlendAnimation;

		ID3D11Buffer* m_Frames[8];
	};

	class SkinController
	{
	public:
		void setSkin(RenderSkin &skin);

		int addAnimation(string name, Animation animation);
		int getAnimationIndex(string name);

		void setAnimationTimer(int id, system_clock::time_point start, system_clock::duration offset);
		void setAnimationBlend(int id, float blend, system_clock::time_point start, float duration = 0);
		void setAnimationSpeed(int id, float multiplier);
		Mat4 &worldMatrix();

		void update(system_clock::time_point time);

		const SkinRenderItem& getRenderItem() const;

	private:
		struct anim_state
		{
			Animation m_Anim;

			string m_Name;

			system_clock::time_point m_Timer;
			system_clock::time_point m_Blender;

			float m_SpeedMultiplier;
			float m_BlendSource;
			float m_BlendTarget;
			float m_BlendDuration;

			bool m_Looped;
		};

		SkinRenderItem     m_RenderItem;
		vector<anim_state> m_States;
	};
}
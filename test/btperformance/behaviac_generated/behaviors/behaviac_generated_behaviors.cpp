﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#include "behaviac/behaviac.h"

#include "behaviac_generated_behaviors.h"

namespace behaviac
{
	class CppGenerationManager : GenerationManager
	{
	public:
		CppGenerationManager()
		{
			SetInstance(this);
		}

		virtual void RegisterBehaviorsImplement()
		{
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("performance/Performance", bt_performance_Performance::Create);
		}
	};

	CppGenerationManager _cppGenerationManager_;
}
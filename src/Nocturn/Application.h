#pragma once

#include "Core.h"

namespace Nocturn
{
	class NOCTURN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}


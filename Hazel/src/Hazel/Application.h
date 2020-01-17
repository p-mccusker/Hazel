#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application{
	public:

		Application();
		virtual ~Application();
		void Run();

	private:

	};
	//Defined in client
	Application* CreateApplication();
}

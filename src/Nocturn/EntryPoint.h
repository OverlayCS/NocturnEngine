#pragma once
#include <Nocturn.h>
#ifdef NOCTURN_PLATFORM_WINDOWS

extern Nocturn::Application* Nocturn::CreateApplication();

int main(int argc, char** argv)
{
	printf("Nocturn Engine Initialized!\n");
	auto app = Nocturn::CreateApplication();
	app->Run();
	delete app;
}
#endif
#include <Nocturn.h>

class Sandbox : public Nocturn::Application
{
public:
	Sandbox()
	{
		
	}
	~Sandbox()
	{
	}
};

Nocturn::Application* Nocturn::CreateApplication()
{
	return new Sandbox();
}
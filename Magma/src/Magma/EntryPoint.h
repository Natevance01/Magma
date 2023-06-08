#pragma once


#ifdef MG_PLATFORM_WINDOWS

extern Magma::Application* Magma::CreateApplication();

int main(int argc, char** argv)
{

	printf("Magma Engine");
	auto app = Magma::CreateApplication();
	app->Run();
	delete app;
}

#endif // MG_PLATFORM_WINDOWS


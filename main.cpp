// Projet POO CESI 2023

#include "Splashscreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args )
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::Splashscreen splashscreen;
	Application::Run(%splashscreen);
}
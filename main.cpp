// Projet POO CESI 2023

#include "App_main.h"
#include "Splashscreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
  	
    // Start splash
    ProjetPOO::Splashscreen splashscreen(true);
	  Application::Run(%splashscreen);
  
    // Main app
    ProjetPOO::App_main mainForm;
    Application::Run(%mainForm);

    // Stop splash
  	ProjetPOO::Splashscreen splashscreen(false);
	  Application::Run(%splashscreen);
}

// Projet POO CESI 2023

#include "App_main.h"
#include "Splashscreen.h"
#include "App_statistiques.h"
#include "DataBase.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
  	
    // Start splash
    ProjetPOO::Splashscreen startSplashscreen(true);
	Application::Run(%startSplashscreen);
  
    // Main app
    ProjetPOO::App_main mainForm;
    Application::Run(%mainForm);
}

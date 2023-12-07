// Projet POO CESI 2023

#include "App_main.h"
#include "App_Personnel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjetPOO::App_main^ mainForm = gcnew ProjetPOO::App_main();
    Application::Run(mainForm);

    return 0;
}

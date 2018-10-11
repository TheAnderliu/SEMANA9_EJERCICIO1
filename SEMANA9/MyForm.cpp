#include "MyForm6.h"  
using namespace System;
using namespace System::Windows::Forms;  [STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew SEMANA9::MyForm6()); //SEMANA1 es el nombre del proyecto
}

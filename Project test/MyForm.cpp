#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ agrs){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Projecttest::MyForm form;
	Application::Run(% form);
}

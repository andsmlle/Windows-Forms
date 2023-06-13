#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Calculator::MyForm form; // mathpro название проекта , hello название фрмы (вашей)
    Application::Run(% form);
}
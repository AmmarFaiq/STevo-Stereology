#include "MyForm.h" // ikutkan file form
using namespace STevo_1; // sesuai nama proyek
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
// buat form yang dirancang dan jalankan
Application::Run(gcnew MyForm());
return 0;
}
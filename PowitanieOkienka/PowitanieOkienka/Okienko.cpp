#include "Okienko.h"

using namespace System;
using namespace System::Windows::Forms;

//informacja o komunikacji z elementami COM
[STAThreadAttribute]

int main(array<System::String ^> ^args){
	
	Application::EnableVisualStyles(); //AKTYWACJA WIZUALNEGO TRYBU APLIKACJI
	Application::SetCompatibleTextRenderingDefault(false); // WY��CZENIE KOMPNENT�W WW nie b�dziemy z nich korzysta�
	PowitanieOkienka::Okienko forma; // ODWO�ANIE SI� DO NASZEGO PROJEKTU CLR
	Application::Run(% forma);
	//Aby okno nie pojawia�o si� po oknie cmd:
	//1. PPM na proejtk -> W�a�ciwo�ci -> Konsolidator -> System -> Podsystem: (Wybieramy Okna)
	//2. Zastosuj OK
	//3. PPM na proejtk -> W�a�ciwo�ci -> Zaawansowane -> Punkt wej�cia: main
	//4. Zastosuj OK
	return 0;
}
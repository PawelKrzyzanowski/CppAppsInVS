#include "Okienko.h"

using namespace System;
using namespace System::Windows::Forms;

//informacja o komunikacji z elementami COM
[STAThreadAttribute]

int main(array<System::String ^> ^args){
	
	Application::EnableVisualStyles(); //AKTYWACJA WIZUALNEGO TRYBU APLIKACJI
	Application::SetCompatibleTextRenderingDefault(false); // WY£¥CZENIE KOMPNENTÓW WW nie bêdziemy z nich korzystaæ
	PowitanieOkienka::Okienko forma; // ODWO£ANIE SIÊ DO NASZEGO PROJEKTU CLR
	Application::Run(% forma);
	//Aby okno nie pojawia³o siê po oknie cmd:
	//1. PPM na proejtk -> W³aœciwoœci -> Konsolidator -> System -> Podsystem: (Wybieramy Okna)
	//2. Zastosuj OK
	//3. PPM na proejtk -> W³aœciwoœci -> Zaawansowane -> Punkt wejœcia: main
	//4. Zastosuj OK
	return 0;
}
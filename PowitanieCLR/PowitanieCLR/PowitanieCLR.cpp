// PowitanieCLR.cpp: g��wny plik projektu.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Console::WriteLine("Podaj imie");
	String^ name = Console::ReadLine(); ; // ^ HAT IS AN OPERATOR FOR OBJECT
	Console::Write("� � � � �, imie: "+name);
	Console::Read();//INSTED OF system("pause"); WHICH REQUIRES <iostream> WE DONT WANT TO USE IT HERE IN CLR
    return 0;
}

#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// Og�lne informacje o zestawie s� kontrolowane poprzez nast�puj�cy
// zbi�r atrybut�w. Zmie� warto�ci tych atrybut�w by zmodyfikowa� informacje
// powi�zane z zestawem.
//
[assembly:AssemblyTitleAttribute(L"PowitanieCLR")];
[assembly:AssemblyDescriptionAttribute(L"")];
[assembly:AssemblyConfigurationAttribute(L"")];
[assembly:AssemblyCompanyAttribute(L"")];
[assembly:AssemblyProductAttribute(L"PowitanieCLR")];
[assembly:AssemblyCopyrightAttribute(L"Copyright (c)  2015")];
[assembly:AssemblyTrademarkAttribute(L"")];
[assembly:AssemblyCultureAttribute(L"")];

//
// Informacje o wersji zestawu zawieraj� nast�puj�ce cztery warto�ci:
//
//      Wersja g��wna
//      Wersja pomocnicza
//      Numer kompilacji
//      Rewizja
//
// Mo�na okre�li� wszystkie warto�ci lub przyj�� warto�ci domy�lne dla numeru wydania i numeru kompilacji
// poprzez u�ycie znaku "*", jak pokazane jest poni�ej:

[assembly:AssemblyVersionAttribute("1.0.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];
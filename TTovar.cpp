#include "TTovar.h"

TTovar::~TTovar()
{
	
}

TTovar::TTovar()
{
	Tsena = 0;
	Kolichestvo = 0;
}

int TTovar::Calc()
{
	return Tsena * Kolichestvo;
}

void TTovar::Read()
{
	std::cin >> Kolichestvo >> Tsena;
	getline(std::cin, Label);
}

void TTovar::Write()
{
	std::cout << Label << ' ' << Tsena << ' ' << Kolichestvo << std::endl;
}
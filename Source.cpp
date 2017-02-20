#include "TTovar.h"

int main()
{
	int n = 0;
	std::cin >> n;
	TTovar *mas = new TTovar[n];
	int i = 0;
	for(i = 0; i < n; i++) mas[i].Read();
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		mas[i].Write();
		sum += mas[i].Calc();
	}
	std::cout << sum << std::endl;
	delete[] mas;
	system("pause");
}
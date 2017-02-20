#include <iostream>
#include <string>

class TTovar
{
private:
	std::string Label;
	int Tsena;
	int Kolichestvo;

public:
	~TTovar();
	TTovar();
	int Calc();
	void Read();
	void Write();
};
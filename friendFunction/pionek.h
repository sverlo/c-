#pragma once
#include <string>

class pionek
{
	char _x;
	char _y;
	std::string _kolor;
	std::string _pozycja;

	friend void raport(pionek &);
public:
	pionek(char x, char y, std::string kolor) : _x(x), _y(y), _kolor(kolor)
	{
		_pozycja = _x;
		_pozycja +=_y;
	}
	~pionek() { }
};

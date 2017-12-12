#include "stdafx.h"
#include "pionek.h"
#include <iostream>

void raport(pionek &p)
{
	p._price = 3000;
	std::cout << "\tPhone information:" << std::endl;
	std::cout << "Brand: " << p._brand << std::endl;
	std::cout << "Model: " << p._model << std::endl;
	std::cout << "Resolution: " << p._resolution << std::endl;
	std::cout << "Diagonal: " << p._diagonal << "\"" << std::endl;
	std::cout << "Camera: " << p._camera << " MP" << std::endl;
	std::cout << "Capacity: " << p._capacity << " GB" << std::endl;
	std::cout << "Weight: " << p._weight << " grams" << std::endl;
	std::cout << "Water resistant: " << std::boolalpha << p._isWaterResistant << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Price: " << p._price << " zl." << std::endl;
}
#pragma once
#include <string>

class pionek
{
	std::string _brand;
	std::string _resolution;
	std::string _model;
	double _camera;
	double _diagonal;
	double _weight;
	short _capacity;
	bool _isWaterResistant;
	unsigned int _price = 0;

	friend void raport(pionek &);
public:
	pionek(std::string brand, std::string model, std::string resolution, double diagonal, double camera, short capacity, double weight, bool isWaterResistant)
		: _brand(brand), _model(model), _resolution(resolution), _diagonal(diagonal), _camera(camera), _capacity(capacity), _weight(weight), _isWaterResistant(isWaterResistant)
	{ }
	~pionek() { }
};


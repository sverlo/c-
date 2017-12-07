#include "stdafx.h"
#include "Bone.h"
#include <random>

Bone::Bone()
{
	_throws = new int[6];
}

Bone::~Bone()
{
	delete[] _throws;
}

int Bone::_point = 0;

int Bone::_counter = 0;

int Bone::MakeThrow()
{
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(1, 6);
	return uni(rng);
}

void Bone::SetPoint(int * arr)
{
	if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3] &&
		arr[0] == arr[4] && arr[0] == arr[5])
		_point = 10;

	else if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 &&
		arr[3] == 4 && arr[4] == 5 && arr[5] == 6)
		_point = 15;

	else if (arr[5] == 1 && arr[4] == 2 && arr[3] == 3 &&
		arr[2] == 4 && arr[1] == 5 && arr[0] == 6)
		_point = 15;

	else if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3] &&
		arr[0] != arr[4] && arr[0] != arr[5] && arr[4] == arr[5])
		_point = 5;

	else if (arr[2] - arr[1] == 1 && arr[1] - arr[0] == 1 &&
		arr[3] - arr[4] == 1 && arr[4] - arr[5] == 1)
		_point = 20;

	else
		_point = 0;
}



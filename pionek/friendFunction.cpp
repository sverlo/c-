// pionek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "pionek.h"


int main()
{
	pionek phone("apple", "iphone 8", "retina HD", 4.7, 12.0, 64, 148, false);
	raport(phone);
	return 0;
}
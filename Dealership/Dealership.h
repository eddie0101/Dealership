#pragma once
#include "CarList.h"

class Dealership
{
private:
	CarList* cars;

public:
	Dealership();
	void addCar();
	void print();
};


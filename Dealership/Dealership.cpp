#include "Dealership.h"
#include <iostream>

Dealership::Dealership()
{
	cars = new CarList;
}

void Dealership::addCar(Car car)
{
	cars->add(car);
}

void Dealership::print()
{
	std::cout << "  Welcome to C++ Dealership!  \n\n";
	cars->print();
}

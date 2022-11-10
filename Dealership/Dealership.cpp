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

void Dealership::sellCar(unsigned int id)
{
	cars->remove(id);
}

void Dealership::print()
{
	std::cout << "  Welcome to C++ Dealership!  \n\n";
	cars->print();
}

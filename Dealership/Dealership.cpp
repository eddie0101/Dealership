#include "Dealership.h"

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
	cars->print();
}

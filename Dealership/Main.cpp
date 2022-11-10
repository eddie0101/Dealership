#include "Car.h"
#include "CarList.h"
#include "Dealership.h"
#include <iostream>

int main() {

	Dealership* dealership = new Dealership;
	dealership->addCar(Car("BMW", "X6", 2010, 8200));
	dealership->addCar(Car("Audi", "A4", 2009, 4500));
	dealership->addCar(Car("Volkswagen", "Golf", 2012, 6000));
	dealership->addCar(Car("BMW", "320i", 2016, 10000));
	dealership->print();
}
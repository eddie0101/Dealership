#include "Car.h"
#include "CarList.h"
#include "Dealership.h"
#include <iostream>

int main() {

	Dealership* dealership = new Dealership;
	dealership->addCar(Car("BMW", "X6", 2010, 8200.755));
	dealership->addCar(Car("Audi", "A4", 2009, 4500.123));
	dealership->addCar(Car("Volkswagen", "Golf", 2012, 6000.799));
	dealership->addCar(Car("BMW", "320i", 2016, 10000));
	dealership->print();

	unsigned input;
	std::cout << "Please type the ID number of the car you want to buy: ";
	std::cin >> input;
	std::cout << std::endl;
	dealership->sellCar(input);
	dealership->print();
}
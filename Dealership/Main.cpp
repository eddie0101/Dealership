#include "Car.h"
#include <iostream>

int main() {
	Car car("Audi", "A4", 2009, 4500);
	std::cout << Car::instanceNumber << std::endl;
}
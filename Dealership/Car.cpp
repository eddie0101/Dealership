#include "Car.h"
#include <string.h>

short int Car::instanceNumber = 0;

Car::Car(
	const char* make, 
	const char* model, 
	short int year, 
	float price
) : id(Car::instanceNumber++) 
{
	this->make = new char[strlen(make) + 1];
	strcpy_s(this->make, strlen(make) + 1, make);
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
	this->year = year;
	this->price = price;
}

Car::~Car()
{
	delete[] make;
	delete[] model;
}

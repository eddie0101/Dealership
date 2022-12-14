#include "Car.h"
#include <string.h>
#include <iostream>

short int Car::instanceNumber = 0;

Car::Car() : id(Car::instanceNumber++)
{
	make = new char[strlen("none") + 1];
	strcpy_s(make, strlen("none") + 1, "none");
	model = new char[strlen("none") + 1];
	strcpy_s(model, strlen("none") + 1, "none");
	year = 0;
	price = 0;
}

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

Car::Car(const Car& source) : id(source.id + 1)
{
	this->make = new char[strlen(source.make) + 1];
	strcpy_s(this->make, strlen(source.make) + 1, source.make);
	this->model = new char[strlen(source.model) + 1];
	strcpy_s(this->model, strlen(source.model) + 1, source.model);
	this->year = source.year;
	this->price = source.price;
	Car::instanceNumber++;
}

Car::~Car()
{
	delete[] make;
	delete[] model;
}

unsigned Car::getId()
{
	return id;
}

char* Car::getMake()
{
	return make;
}

char* Car::getModel()
{
	return model;
}

int Car::getYear()
{
	return year;
}

double Car::getPrice()
{
	return price;
}

void Car::setPrice(double price)
{
	this->price = price;
}

std::string Car::toString()
{
	std::string temp = "";
	temp.append("The car with ID=");
	temp.append(std::to_string(id));
	temp.append(" has the following characteristics:\n");
	temp.append("\tMake: ");
	temp.append(make); temp += '\n';
	temp.append("\tModel: ");
	temp.append(model); temp += '\n';
	temp.append("\tYear: ");
	temp.append(std::to_string(year)); temp += '\n';
	temp.append("\tPrice: ");
	temp.append(toString(price)); temp += '\n';
	return temp;
}

void Car::print()
{
	std::cout << toString() << std::endl;
}

std::string Car::toString(double value)
{
	int iNr = value;
	double dNr = value - iNr; 
	int iNr2 = dNr * 100;
	if (iNr2 == 0) {
		return std::to_string(iNr);
	}
	return std::to_string(iNr) + '.' + std::to_string(iNr2);
}

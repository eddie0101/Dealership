#pragma once
#include <string>

class Car
{
private:
	const unsigned id;
	char* make;
	char* model;
	short int year;
	float price;
public:
	static short int instanceNumber;

public:
	Car();
	Car(const char* make, const char* model, short int year, float price);
	Car(const Car& source);
	~Car();
	unsigned getId();
	char* getMake();
	char* getModel();
	int getYear();
	double getPrice();
	int getStockNumber();
	void setPrice(double price);
	std::string toString();
	void print();

private:
	std::string toString(double number);
};


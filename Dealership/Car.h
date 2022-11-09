#pragma once
class Car
{
private:
	int id;
	char* make;
	char* model;
	int year;
	double price;
	static int stock_number;
public:
	Car(int id, char* make, char* model, int year, double price);
	Car(const Car& source);
	~Car();
};


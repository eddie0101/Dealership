#pragma once
class Car
{
private:
	const static int id;
	const char* make;
	const char* model;
	const int year;
	double price;
public:
	Car(char* make, char* model, int year, double price);
	Car(const Car& source);
	~Car();
	int getId();
	char* getMake();
	char* getModel();
	int getYear();
	double getPrice();
	int getStockNumber();
	void setPrice(double price);
};


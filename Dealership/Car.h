#pragma once
class Car
{
private:
	const short int id;
	char* make;
	char* model;
	short int year;
	float price;
public:
	static short int instanceNumber;

public:
	Car(const char* make, const char* model, short int year, float price);
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


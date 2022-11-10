#pragma once
#include "Car.h"

class CarList
{
public:
	Car* data;
	CarList* head;
	CarList* tail;
	CarList* next;
	CarList* prev;

	CarList();
	void add(Car car);
	void print();
};


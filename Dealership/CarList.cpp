#include "CarList.h"

CarList::CarList()
{
	data = new Car;
	head = NULL;
	tail = NULL;
	next = NULL;
	next = NULL;
	prev = NULL;
	prev = NULL;
}

void CarList::add(Car car)
{
	CarList* temp = new CarList;
	temp->data = new Car(car);
	if (head == NULL) {
		head = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
		tail->prev = temp;
		tail->next = NULL;
	}
}

void CarList::print()
{
	CarList* p = head;
	while (true) {
		p->data->print();
		if (p->next == NULL) {
			break;
		}
		else {
			p = p->next;
		}
	}
}

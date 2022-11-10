#include "CarList.h"

CarList::CarList()
{
	data = new Car;
	head = NULL;
	tail = NULL;
	next = NULL;
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
		temp->prev = tail;
		temp->next = NULL;
		tail->next = temp;
		tail = tail->next;
	}
}

void CarList::remove(unsigned id) {
	CarList* p = head;
	while (true) {
		if (p->data->getId() == id) {
			if (p != head && p != tail) {
				p->prev->next = p->next;
				p->next->prev = p->prev;
				break;
			}
			else if (p == head) {
				head = p->next;
				p->next->prev = p->prev;
				break;
			}
			else if (p == tail) {
				tail = p->prev;
				p->prev->next = p->next;
				break;
			}
		}
		p = p->next;
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

#include "pch.h"
#include "CarList.h"
#include "Car.h"


CarList::CarList()
{
}


CarList::~CarList()
{
}


CarList* CarList::getWithPassCapacitySubList() {
	CarList* copyList = new CarList();

	for (int i = 0; i < this->count(); i++) {
		Car* car = (Car*)this->get(i);
		if (1) {
			copyList->add(car->clone());
		}
	}
	return copyList;
}

CarList * CarList::searchByGovNumber(int value)
{
	return this->searchBy(value, &(Car::getGovNumber));
}

CarList * CarList::searchByOwner(int value)
{
	return this->searchBy(value, &(Car::getOwner));
}

CarList * CarList::searchByColor(int value)
{
	return this->searchBy(value, &(Car::getColor));
}

CarList * CarList::searchBy(int value, int (Car::*s)() const)
{
	CarList* list = new CarList();
	for (int i = 0; i < this->count(); i++) {
		Car * car = (Car*) this->get(i);
		if ((car->*s)() == value) list->add(car->clone());
			
	}
	return list;
}


CarList * CarList::sortByPassCapacity(CarList * list)
{
	CarList* copyList = list->getWithPassCapacitySubList();
	Car* temp;
	for (int i = 0; i < copyList->count() - 1; i++) {
		for (int j = 0; j < copyList->count() - i - 1; j++) {
			Car* car_j = (Car*) copyList->get(j);
			Car* car_j1 = (Car*) copyList->get(j+1);
			if (car_j->getPassCapacity() > car_j1->getPassCapacity()) {
				temp = (Car*)car_j->clone();
				car_j->del();
				copyList->insert(temp, j + 1);
			}
		}
	}
	return copyList;
}

CarList * CarList::clone()
{
	return new CarList(*this);
}

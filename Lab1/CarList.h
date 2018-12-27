#pragma once
#include "List.h"
#include "Car.h"
class CarList :
	public List
{
public:
	CarList();
	~CarList();
	CarList * getWithPassCapacitySubList();
	CarList * searchByGovNumber(int value);
	CarList * searchByOwner(int value);
	CarList * searchByColor(int value);

	CarList * searchBy(int value, int (Car::* s)() const);
	static CarList* sortByPassCapacity(CarList* list);
private: 
	CarList* clone();
};


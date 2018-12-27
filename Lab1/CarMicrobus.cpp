#include "pch.h"
#include "CarMicrobus.h"
#include "iostream"


CarMicrobus::CarMicrobus()
{
}


CarMicrobus::~CarMicrobus()
{
}

int CarMicrobus::getPassCapacity() const
{
	return this->passCapacity;
}

void CarMicrobus::setPassCapacity(int passcapacity)
{
	this->passCapacity = passCapacity;
}

void CarMicrobus::input()
{
	Car::input();
	cout << "¬ведите пассажирскую вместимость:" << endl;
	cin >> this->passCapacity;
}

void CarMicrobus::print()
{
	Car::print();
	cout << "Pass: " << this->passCapacity << endl;
}

CarMicrobus * CarMicrobus::clone()
{
	return new CarMicrobus(*this);
}

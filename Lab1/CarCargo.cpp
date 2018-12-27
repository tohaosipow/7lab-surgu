#include "pch.h"
#include "CarCargo.h"
#include "iostream"

CarCargo::CarCargo()
{
}


CarCargo::~CarCargo()
{
}

int CarCargo::getCargoCapacity() const
{
	return this->cargoCapacity;
}

void CarCargo::setCargoCapacity(int cargocapacity)
{
	this->cargoCapacity = cargocapacity;
}

void CarCargo::input()
{
	Car::input();
	cout << "¬ведите грузовую вместимость:" << endl;
	cin >> this->cargoCapacity;
}

void CarCargo::print()
{
	Car::print();
	cout << "Cargo: " << this->cargoCapacity << endl;
}

CarCargo * CarCargo::clone()
{
	return new CarCargo(*this);
}

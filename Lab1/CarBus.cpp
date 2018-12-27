#include "pch.h"
#include "CarBus.h"
#include "iostream"

CarBus::CarBus() : Car()
{
}


CarBus::~CarBus()
{
}

int CarBus::getCargoCapacity() const
{
	return this->cargoCapacity;
}

int CarBus::getPassCapacity() const
{
	return this->passCapacity;
}

void CarBus::setPassCapacity(int passcapacity)
{
	this->passCapacity = passcapacity;
}

void CarBus::setCargoCapacity(int cargocapacity)
{
	this->cargoCapacity = cargocapacity;
}

void CarBus::input()
{
	Car::input();
	cout << "¬ведите пассажирскую вместимость:" << endl;
	cin >> this->passCapacity;

	cout << "¬ведите грузовую вместимость:" << endl;
	cin >> this->cargoCapacity;


}

void CarBus::print()
{
	Car::print();
	cout << "Cargo: " << this->cargoCapacity << " Pass: " << this->passCapacity << endl;
}

CarBus * CarBus::clone()
{
	return new CarBus(*this);
}

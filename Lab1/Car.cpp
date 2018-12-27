#include "pch.h"
#include "Car.h"
#include "CarPass.h"
#include "CarMicrobus.h"
#include "CarBus.h"
#include "CarCargo.h"
#include "CarSpecial.h"
#include "iostream"



Car::Car()
{
}


Car::~Car()
{
}

int Car::getTypeEngine() const
{
	return this->typeEngine;
}

int Car::getGovNumber() const
{
	return this->govnumber;
}

int Car::getOwner() const
{
	return this->owner;
}

int Car::getModel() const
{
	return this->model;
}

int Car::getColor() const
{
	return this->color;
}

int Car::getPassCapacity() const
{
	return 0;
}

carType Car::getType() const
{
	return this->type;
}

void Car::setTypeEngine(int typeEngine)
{
	this->typeEngine = typeEngine;
}

void Car::setGovNumber(int govNumber)
{
	this->govnumber = govNumber;
}

void Car::setOwner(int owner)
{
	this->owner = owner;
}

void Car::setModel(int model)
{
	this->model = model;
}

void Car::setColor(int color)
{
	this->color = color;
}

void Car::setType(carType type)
{
	this->type = type;
}


Car* Car::factoryByType(carType type) {
	switch (type)
	{
	case pass: {
		CarPass* obj = new CarPass();
		obj->setType(pass);
		return obj;
		break;
	}
	case microbus: {
		CarMicrobus* obj = new CarMicrobus();
		obj->setType(microbus);
		return obj;
		break;
	}
	case bus: {
		CarBus* obj = new CarBus();
		obj->setType(bus);
		return obj;
		break;
	}
	case cargo: {
		CarCargo* obj = new CarCargo();
		obj->setType(cargo);
		return obj;
		break;
	}
	case special: {
		CarSpecial* obj = new CarSpecial();
		obj->setType(special);
		return obj;
		break;
	}
	default:
		break;
	}
	return nullptr;
}


carType Car::getTypeByMenu(int menu) {
	switch (menu)
	{
	case 0: {
		return pass;
		break;

	}
	case 1: {
		return microbus;
		break;
	}
	case 2: {
		return bus;
		break;
	}
	case 3: {
		return cargo;
		break;
	}
	case 4: {
		return special;
		break;
	}
	default:
		return undefined;
		break;
	}
}



Car * Car::clone()
{
	return new Car(*this);
}

void Car::input()
{
	cout << "Введите тип двигателя:" << endl;
	cin >> this->typeEngine;

	cout << "Введите гос. номер:" << endl;
	cin >> this->govnumber;

	cout << "Введите владельца" << endl;
	cin >> this->owner;

	cout << "Введите модель:" << endl;
	cin >> this->model;

	cout << "Введите цвет:" << endl;
	cin >> this->color;

}

Car* Car::inputFactory()
{
	int type;
	cout << "Введите тип" << endl << "[0] Легковое" << endl << "[1] Микроавтобус" << endl << "[2] Автобус" << "[3] Грузовой" << endl << "[4] Специальный" << endl;
	cin >> type;
	carType c = static_cast<carType>(type);
	Car* car_obj = Car::factoryByType(c);
	car_obj->input();
	return car_obj;
	

}

void Car::print()
{
	Item::print();
	cout << "Engine: " << this->typeEngine << " Number: " << this->govnumber << " Owner: " << this->owner << " Model: " << this->model << " Color: " << this->color  << endl;
}

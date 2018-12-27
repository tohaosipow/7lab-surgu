#include "pch.h"
#include "CarSpecial.h"
#include "iostream"


CarSpecial::CarSpecial(): Car()
{
}


CarSpecial::~CarSpecial()
{
}

char * CarSpecial::getDescribe() const
{
	return nullptr;
}

void CarSpecial::setDescribe(char * describe)
{
}

void CarSpecial::input()
{
	cout << "¬ведите описание:" << endl;
	cin >> this->describe;
}

void CarSpecial::print()
{
	Car::print();
	cout << "Describe: " << this->describe << endl;
}

CarSpecial * CarSpecial::clone()
{
	return new CarSpecial(*this);
}

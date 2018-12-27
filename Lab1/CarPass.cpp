#include "pch.h"
#include "CarPass.h"
#include "iostream"


CarPass::CarPass()
{
}


CarPass::~CarPass()
{
}

int CarPass::getTypeBody() const
{
	return this->typeDrive;
}

void CarPass::setTypeBody(int typeBody)
{
	this->typeBody = typeBody;
}

int CarPass::getTypeDrive() const
{
	return this->typeDrive;
}

void CarPass::setTypeDrive(int typedrive)
{
	this->typeDrive = typedrive;
}

void CarPass::input()
{
	Car::input();
	cout << "������� ��� ������:" << endl;
	cin >> this->typeBody;

	cout << "������� ��� �������:" << endl;
	cin >> this->typeDrive;






}

void CarPass::print()
{
	Car::print();
	cout << "Body: " << this->typeBody << " Drive: " << this->typeDrive << endl;
}

CarPass * CarPass::clone()
{
	return new CarPass(*this);
}

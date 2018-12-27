#pragma once
#include "Car.h"
class CarPass :
	public Car
{
public:
	CarPass();
	~CarPass();
	int getTypeBody() const;
	void setTypeBody(int typeBody);
	int getTypeDrive() const;
	void setTypeDrive(int typedrive);
	void input();
	void print();
	virtual CarPass* clone();
private:
	int typeBody;
	int typeDrive;
};


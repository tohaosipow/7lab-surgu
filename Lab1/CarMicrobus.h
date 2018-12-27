#pragma once
#include "Car.h"
class CarMicrobus: 
	public Car
{
public:
	CarMicrobus();
	~CarMicrobus();
	int getPassCapacity() const;
	void setPassCapacity(int passcapacity);
	void input();
	void print();
	virtual CarMicrobus* clone();
private:
	int passCapacity;
};


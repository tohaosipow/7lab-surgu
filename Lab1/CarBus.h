#pragma once
#include "Car.h"
class CarBus :
	public Car
{
public:
	CarBus();
	~CarBus();
	int getCargoCapacity() const;
	int getPassCapacity() const;

	void setPassCapacity(int passcapacity);
	void setCargoCapacity(int cargocapacity);

	void input();
	void print();
	virtual CarBus* clone();
	
private:
	int passCapacity;
	int cargoCapacity;
};


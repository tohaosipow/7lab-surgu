#pragma once
#include "Car.h"
class CarCargo :
	public Car
{
public:
	CarCargo();
	~CarCargo();
	int getCargoCapacity() const;
	void setCargoCapacity(int cargocapacity);
	void input();
	void print();
	virtual CarCargo* clone();

private:
	int cargoCapacity;

};

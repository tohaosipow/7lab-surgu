#pragma once
#include "Car.h"
class CarSpecial :
	public Car
{
public:
	CarSpecial();
	~CarSpecial();
	char* getDescribe() const;
	void setDescribe(char* describe);
	void input();
	void print();
	virtual CarSpecial* clone();
private:
	char* describe;
};


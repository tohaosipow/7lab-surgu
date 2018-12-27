#pragma once
#include "ItemBase.h"
class ItemPassCar :
	public ItemBase
{
public:
	ItemPassCar();
	~ItemPassCar();
private:
	int engineType;
	int bodyType;
	int driveType;
};


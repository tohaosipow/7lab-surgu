#pragma once
#include "ItemBase.h"
class ItemTruck :
	public ItemBase
{
public:
	ItemTruck();
	~ItemTruck();
private:
	int engineType;
	int cargoCapacity;
};

